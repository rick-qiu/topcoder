/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10739
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

class ColorfulDecoration {
public:
    int getMaximum(vector<int> xa, vector<int> ya, vector<int> xb, vector<int> yb);
};

int ColorfulDecoration::getMaximum(vector<int> xa, vector<int> ya, vector<int> xb, vector<int> yb) {
    int ret;
    return ret;
}


int test0() {
    vector<int> xa = {10, 0, 7};
    vector<int> ya = {0, 19, 6};
    vector<int> xb = {20, 10, 25};
    vector<int> yb = {20, 35, 25};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> xa = {464, 20};
    vector<int> ya = {464, 10};
    vector<int> xb = {464, 3};
    vector<int> yb = {464, 16};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 461;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> xa = {0, 0, 1, 1};
    vector<int> ya = {0, 0, 1, 1};
    vector<int> xb = {1, 1, 0, 0};
    vector<int> yb = {1, 1, 0, 0};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
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
    vector<int> xa = {0, 3, 0, 5, 6};
    vector<int> ya = {1, 6, 0, 8, 5};
    vector<int> xb = {6, 1, 7, 4, 7};
    vector<int> yb = {5, 9, 2, 8, 9};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> xa = {1000000000, 0};
    vector<int> ya = {0, 1000000000};
    vector<int> xb = {0, 1000000000};
    vector<int> yb = {0, 1000000000};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> xa = {955833635, 168729432, 871686594, 871686594, 63768838, 387573426, 871686594, 584312178, 63768838, 427228099, 906073322, 643740462, 893707868, 451413645, 716213306, 643740462, 636435919, 726556552, 893707868, 726556552, 59222011, 177572585, 883472630, 430370740, 451413645, 451413645, 993736150, 63768838, 63768838, 887609475, 635838288, 887609475, 958504708, 844549427, 958504708, 355345146, 958504708, 734792426, 848475048, 980978931, 720231960, 635838288, 980978931, 734792426, 848475048, 906073322, 883472630, 807202676, 720231960, 869476176};
    vector<int> ya = {750872200, 52939067, 529492108, 529492108, 136737239, 231323336, 529492108, 197764801, 136737239, 434201459, 192317820, 202518734, 913197774, 288658627, 277032011, 202518734, 862320662, 447125767, 913197774, 447125767, 96351066, 316145014, 447303917, 454895642, 288658627, 288658627, 943885829, 136737239, 136737239, 84224008, 401935926, 84224008, 42370654, 946868684, 42370654, 633520652, 42370654, 15778896, 975045198, 957081323, 861699198, 401935926, 957081323, 15778896, 975045198, 192317820, 447303917, 430818430, 861699198, 240352028};
    vector<int> xb = {883472630, 857377960, 992823038, 624458924, 844549427, 168264134, 350687427, 177572585, 958504708, 59222011, 584312178, 624458924, 826184868, 635838288, 355345146, 992823038, 430370740, 993736150, 871686594, 906073322, 168729432, 716213306, 569482345, 350687427, 893707868, 809903722, 177572585, 350687427, 670844491, 624458924, 382843440, 826184868, 382843440, 427228099, 893707868, 734792426, 716213306, 809903722, 584312178, 387573426, 451413645, 264952949, 670844491, 955833635, 887609475, 624458924, 848475048, 264952949, 63768838, 430370740};
    vector<int> yb = {447303917, 854833494, 163773141, 192169148, 946868684, 553766353, 246486684, 316145014, 42370654, 96351066, 197764801, 192169148, 964700362, 401935926, 633520652, 163773141, 454895642, 943885829, 529492108, 192317820, 52939067, 277032011, 253477011, 246486684, 913197774, 974945932, 316145014, 246486684, 525154835, 192169148, 277411295, 964700362, 277411295, 434201459, 913197774, 15778896, 277032011, 974945932, 197764801, 231323336, 288658627, 668007202, 525154835, 750872200, 84224008, 192169148, 975045198, 668007202, 136737239, 454895642};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> xa = {830843129, 830843129, 846231073, 846231074, 202007829, 202007828, 476755397, 476755396, 30363006, 30363007, 789979756, 789979755, 386524541, 386524541, 993161004, 993161005, 992253022, 992253023, 645316103, 645316102, 725098709, 725098710, 319067651, 319067650, 395114374, 395114375, 313429029, 313429029, 678859389, 678859389, 14460340, 14460341, 949849975, 949849974, 182750120, 182750121, 155336931, 155336932, 986688436, 986688435, 756995139, 756995140, 506219746, 506219746, 194694636, 194694635, 645121047, 645121047, 21666166, 21666167};
    vector<int> ya = {782520816, 782520817, 103869002, 103869001, 21292127, 21292126, 147843228, 147843227, 993379524, 993379524, 61082618, 61082617, 865947117, 865947116, 547849131, 547849131, 172550879, 172550879, 651551969, 651551969, 752734626, 752734625, 568489133, 568489134, 708491309, 708491310, 49293745, 49293744, 519445632, 519445633, 747976846, 747976846, 364101675, 364101675, 683623330, 683623331, 758859454, 758859453, 529271861, 529271860, 365643129, 365643128, 98225423, 98225422, 763543108, 763543108, 863539379, 863539380, 588679240, 588679239};
    vector<int> xb = {830843128, 830843128, 846231073, 846231074, 202007828, 202007829, 476755397, 476755396, 30363006, 30363007, 789979755, 789979756, 386524540, 386524540, 993161005, 993161004, 992253023, 992253022, 645316102, 645316103, 725098710, 725098709, 319067651, 319067650, 395114374, 395114375, 313429030, 313429030, 678859390, 678859390, 14460340, 14460341, 949849974, 949849975, 182750120, 182750121, 155336931, 155336932, 986688435, 986688436, 756995140, 756995139, 506219747, 506219747, 194694635, 194694636, 645121048, 645121048, 21666166, 21666167};
    vector<int> yb = {782520817, 782520816, 103869001, 103869002, 21292127, 21292126, 147843227, 147843228, 993379525, 993379525, 61082618, 61082617, 865947117, 865947116, 547849130, 547849130, 172550878, 172550878, 651551970, 651551970, 752734626, 752734625, 568489134, 568489133, 708491310, 708491309, 49293745, 49293744, 519445632, 519445633, 747976847, 747976847, 364101674, 364101674, 683623331, 683623330, 758859453, 758859454, 529271861, 529271860, 365643129, 365643128, 98225422, 98225423, 763543107, 763543107, 863539379, 863539380, 588679239, 588679240};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> xa = {0, 8};
    vector<int> ya = {1, 3};
    vector<int> xb = {8, 2};
    vector<int> yb = {9, 8};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> xa = {1, 1};
    vector<int> ya = {7, 2};
    vector<int> xb = {8, 7};
    vector<int> yb = {8, 5};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> xa = {7, 1};
    vector<int> ya = {10, 6};
    vector<int> xb = {5, 7};
    vector<int> yb = {3, 1};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> xa = {2, 8};
    vector<int> ya = {6, 9};
    vector<int> xb = {6, 5};
    vector<int> yb = {0, 7};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> xa = {4, 5};
    vector<int> ya = {1, 2};
    vector<int> xb = {9, 4};
    vector<int> yb = {4, 1};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> xa = {6, 1};
    vector<int> ya = {7, 5};
    vector<int> xb = {8, 5};
    vector<int> yb = {9, 0};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> xa = {1, 8};
    vector<int> ya = {2, 7};
    vector<int> xb = {5, 6};
    vector<int> yb = {6, 7};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> xa = {5, 7};
    vector<int> ya = {10, 5};
    vector<int> xb = {7, 7};
    vector<int> yb = {10, 8};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> xa = {7, 4};
    vector<int> ya = {5, 9};
    vector<int> xb = {1, 6};
    vector<int> yb = {1, 0};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
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
    vector<int> xa = {3, 3};
    vector<int> ya = {1, 10};
    vector<int> xb = {8, 10};
    vector<int> yb = {1, 4};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> xa = {6, 7, 5};
    vector<int> ya = {7, 12, 8};
    vector<int> xb = {16, 8, 5};
    vector<int> yb = {3, 18, 5};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> xa = {8, 4, 4};
    vector<int> ya = {2, 7, 19};
    vector<int> xb = {16, 10, 12};
    vector<int> yb = {9, 5, 1};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
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
    vector<int> xa = {0, 14, 6};
    vector<int> ya = {14, 20, 0};
    vector<int> xb = {20, 14, 9};
    vector<int> yb = {15, 9, 2};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> xa = {12, 7, 12};
    vector<int> ya = {7, 9, 20};
    vector<int> xb = {20, 18, 19};
    vector<int> yb = {12, 18, 10};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> xa = {6, 15, 6};
    vector<int> ya = {10, 12, 11};
    vector<int> xb = {6, 4, 15};
    vector<int> yb = {1, 14, 20};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> xa = {14, 7, 10};
    vector<int> ya = {9, 20, 14};
    vector<int> xb = {14, 11, 11};
    vector<int> yb = {2, 3, 12};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> xa = {12, 11, 20};
    vector<int> ya = {13, 5, 0};
    vector<int> xb = {12, 6, 10};
    vector<int> yb = {3, 20, 16};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> xa = {11, 14, 14};
    vector<int> ya = {5, 14, 16};
    vector<int> xb = {16, 7, 5};
    vector<int> yb = {10, 8, 4};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> xa = {12, 1, 16};
    vector<int> ya = {20, 14, 4};
    vector<int> xb = {0, 18, 6};
    vector<int> yb = {2, 1, 12};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> xa = {4, 5, 16};
    vector<int> ya = {18, 16, 6};
    vector<int> xb = {0, 17, 6};
    vector<int> yb = {17, 18, 0};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> xa = {18, 12, 14};
    vector<int> ya = {2, 10, 5};
    vector<int> xb = {8, 2, 14};
    vector<int> yb = {19, 10, 4};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> xa = {8, 7, 10};
    vector<int> ya = {4, 1, 20};
    vector<int> xb = {3, 7, 15};
    vector<int> yb = {8, 4, 9};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> xa = {5, 11, 16};
    vector<int> ya = {6, 9, 4};
    vector<int> xb = {16, 15, 10};
    vector<int> yb = {19, 7, 0};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> xa = {10, 4, 19};
    vector<int> ya = {6, 19, 11};
    vector<int> xb = {17, 8, 20};
    vector<int> yb = {7, 9, 16};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> xa = {0, 3, 2};
    vector<int> ya = {1, 10, 16};
    vector<int> xb = {9, 18, 19};
    vector<int> yb = {0, 9, 19};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> xa = {17, 3, 6};
    vector<int> ya = {8, 13, 1};
    vector<int> xb = {10, 16, 11};
    vector<int> yb = {4, 1, 17};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> xa = {19, 19, 2};
    vector<int> ya = {3, 16, 1};
    vector<int> xb = {3, 18, 0};
    vector<int> yb = {9, 1, 2};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> xa = {14, 15, 8};
    vector<int> ya = {10, 16, 20};
    vector<int> xb = {11, 7, 10};
    vector<int> yb = {1, 6, 0};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> xa = {16, 17, 0};
    vector<int> ya = {18, 12, 2};
    vector<int> xb = {17, 8, 7};
    vector<int> yb = {12, 9, 0};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> xa = {5, 15, 2};
    vector<int> ya = {17, 18, 1};
    vector<int> xb = {6, 7, 8};
    vector<int> yb = {18, 18, 15};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> xa = {794232434, 815336690, 818854066, 822371442, 787197682, 741471794, 846993074, 737954418, 836440946, 843475698, 850510450, 769610802, 748506546, 776645554, 755541298, 727402290, 790715058, 832923570, 811819314, 709815410, 699263282, 723884914, 773128178, 762576050, 766093426, 752023922, 706298034, 734437042, 716850162, 702780658, 695745906, 783680306, 692228530, 759058674, 797749810, 854027826, 720367538, 744989170, 829406194, 780162930, 804784562, 825888818, 839958322, 864579954, 808301938, 801267186, 857545202, 861062578, 713332786, 730919666};
    vector<int> ya = {839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921613, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612};
    vector<int> xb = {722126226, 760817362, 820612754, 704539346, 743230482, 693987218, 781921618, 711574098, 764334738, 715091474, 806543250, 855786514, 725643602, 774886866, 785438994, 799508498, 729160978, 852269138, 753782610, 838199634, 757299986, 701021970, 697504594, 862821266, 750265234, 859303890, 813578002, 817095378, 845234386, 739713106, 866338642, 708056722, 736195730, 841717010, 788956370, 827647506, 767852114, 771369490, 824130130, 834682258, 795991122, 810060626, 778404242, 803025874, 792473746, 732678354, 848751762, 718608850, 831164882, 746747858};
    vector<int> yb = {839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612, 839921612};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 3517376;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> xa = {342871231, 248739361, 424452185, 380523979, 142056575, 217362071, 286392109, 204811155, 437003101, 273841193, 255014819, 173433865, 292667567, 355422147, 298943025, 418176727, 311493941, 280116651, 374248521, 411901269, 179709323, 211086613, 330320315, 405625811, 349146689, 160882949, 148332033, 135781117, 267565735, 185984781, 324044857, 399350353, 236188445, 367973063, 223637529, 242463903, 229912987, 336595773, 386799437, 198535697, 317769399, 261290277, 167158407, 305218483, 430727643, 129505659, 361697605, 393074895, 192260239, 154607491};
    vector<int> ya = {337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574};
    vector<int> xb = {157745220, 164020678, 402488082, 189122510, 327182586, 132643388, 283254380, 176571594, 214224342, 207948884, 427589914, 389937166, 264428006, 320907128, 302080754, 440140830, 421314456, 289529838, 308356212, 201673426, 226775258, 346008960, 433865372, 276978922, 239326174, 233050716, 408763540, 339733502, 220499800, 383661708, 251877090, 371110792, 245601632, 270703464, 333458044, 170296136, 364835334, 258152548, 145194304, 314631670, 377386250, 358559876, 396212624, 138918846, 295805296, 415038998, 151469762, 352284418, 195397968, 182847052};
    vector<int> yb = {337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574, 337433574};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 6275458;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> xa = {360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808};
    vector<int> ya = {817974459, 818632581, 819948825, 801521409, 816658215, 812051361, 804153897, 812709483, 817316337, 794940189, 798888921, 806786386, 796256433, 790991457, 808760751, 800205165, 810735117, 805470141, 800863287, 802179531, 799547043, 811393239, 794282067, 813367605, 815341971, 804812019, 821265069, 816000093, 789675213, 819290703, 806128263, 792965823, 792307701, 793623945, 797572677, 807444507, 802837653, 810076995, 798230799, 791649579, 820606947, 796914555, 809418873, 790333335, 814683849, 814025727, 821923191, 808102629, 803495775, 795598311};
    vector<int> xb = {360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808, 360351808};
    vector<int> yb = {804482958, 803824836, 798559860, 807773568, 816329154, 815012910, 790004274, 817645398, 822252252, 809089812, 810406056, 818303520, 808431690, 818961642, 801850470, 803166714, 819619764, 794611128, 813038544, 807115446, 805141080, 797243616, 814354788, 809747934, 820277886, 792636762, 791320518, 795927372, 816987276, 790662396, 805799202, 795269250, 802508592, 821594130, 811722300, 797901738, 800534226, 813696666, 799876104, 806457324, 811064178, 801192348, 796585494, 791978640, 812380422, 799217982, 815671032, 793294884, 820936008, 793953006};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 658122;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> xa = {598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666};
    vector<int> ya = {325615363, 302203893, 405214361, 334979951, 377120597, 452037301, 395849773, 531636299, 461401889, 391167479, 498860241, 414578949, 423943537, 494177947, 437990419, 517589417, 311568481, 522271711, 306886187, 339662245, 447355007, 428625831, 381802891, 489495653, 409896655, 433308125, 400532067, 512907123, 358391421, 508224829, 316250775, 372438303, 367756009, 344344539, 475448771, 466084183, 330297657, 526954005, 320933069, 419261243, 503542535, 484813359, 480131065, 353709127, 470766477, 456719595, 363073715, 349026833, 442672713, 386485185};
    vector<int> xb = {598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666, 598167666};
    vector<int> yb = {318591922, 388826332, 487154506, 496519094, 445013860, 482472212, 374779450, 454378448, 426284684, 342003392, 519930564, 337321098, 379461744, 332638804, 491836800, 515248270, 393508626, 533977446, 323274216, 412237802, 416920096, 430966978, 501201388, 398190920, 365414862, 346685686, 463743036, 477789918, 407555508, 327956510, 309227334, 435649272, 524612858, 313909628, 304545040, 510565976, 440331566, 351367980, 459060742, 529295152, 360732568, 370097156, 449696154, 468425330, 421602390, 473107624, 356050274, 402873214, 505883682, 384144038};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 4682294;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> xa = {755471968, 728518616, 755471968, 768948644, 728518616, 741995292, 728518616, 741995292, 741995292, 741995292, 741995292, 755471968, 741995292, 755471968, 728518616, 741995292, 728518616, 741995292, 755471968, 755471968, 755471968, 755471968, 728518616, 741995292, 728518616, 741995292, 741995292, 755471968, 741995292, 755471968, 728518616, 755471968, 741995292, 728518616, 728518616, 755471968, 728518616, 755471968, 728518616, 741995292, 728518616, 728518616, 755471968, 741995292, 728518616, 755471968};
    vector<int> ya = {151222310, 232082366, 259035718, 16455550, 393802478, 339895774, 285989070, 151222310, 43408902, 124268958, 16455550, 43408902, 178175662, 124268958, 178175662, 393802478, 151222310, 70362254, 97315606, 70362254, 205129014, 16455550, 312942422, 312942422, 97315606, 205129014, 366849126, 232082366, 232082366, 339895774, 339895774, 178175662, 259035718, 70362254, 124268958, 393802478, 205129014, 366849126, 366849126, 97315606, 16455550, 259035718, 285989070, 285989070, 43408902, 312942422};
    vector<int> xb = {755471968, 728518616, 755471968, 728518616, 755471968, 741995292, 741995292, 741995292, 741995292, 755471968, 741995292, 755471968, 741995292, 741995292, 755471968, 728518616, 741995292, 755471968, 741995292, 728518616, 728518616, 741995292, 755471968, 741995292, 728518616, 768948644, 755471968, 728518616, 755471968, 728518616, 728518616, 755471968, 728518616, 728518616, 755471968, 741995292, 728518616, 728518616, 741995292, 728518616, 741995292, 755471968, 728518616, 755471968, 755471968, 741995292};
    vector<int> yb = {407279154, 353372450, 326419098, 218605690, 245559042, 245559042, 299465746, 110792282, 29932226, 380325802, 164698986, 353372450, 326419098, 407279154, 83838930, 110792282, 83838930, 110792282, 218605690, 83838930, 191652338, 353372450, 218605690, 272512394, 407279154, 29932226, 299465746, 164698986, 56885578, 380325802, 299465746, 164698986, 272512394, 326419098, 137745634, 191652338, 137745634, 29932226, 56885579, 56885578, 380325802, 29932226, 245559042, 272512394, 191652338, 137745634};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 13476676;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> xa = {490204910, 576581860, 533393385, 274262535, 360639485, 274262535, 317451010, 490204910, 533393385, 403827960, 317451010, 360639485, 274262535, 576581860, 317451010, 533393385, 533393385, 490204910, 447016435, 576581860, 360639485, 619770335, 576581860, 403827960, 317451010, 619770335, 360639485, 447016435, 403827960, 317451010, 274262535, 447016435, 274262535, 360639485, 490204910, 360639485, 447016435, 447016435, 403827960, 533393385, 447016435, 619770335, 533393385, 274262535, 576581860, 403827960, 490204910};
    vector<int> ya = {502548104, 416171154, 113851829, 459359629, 545736579, 372982679, 157040304, 416171154, 545736579, 502548104, 502548104, 200228779, 200228779, 329794204, 243417254, 286605729, 200228779, 329794204, 459359629, 157040304, 459359629, 113851829, 243417254, 416171154, 329794204, 200228779, 372982679, 545736579, 157040304, 416171154, 545736579, 372982679, 113851829, 286605729, 243417254, 113851829, 200228779, 113851829, 329794204, 372982680, 286605729, 286605729, 459359629, 286605729, 502548104, 243417254, 157040304};
    vector<int> xb = {447016435, 447016435, 317451010, 619770335, 576581860, 447016435, 403827960, 576581860, 274262535, 533393385, 576581860, 490204910, 317451010, 576581860, 274262535, 274262535, 360639485, 403827960, 360639485, 490204910, 274262535, 533393385, 533393385, 447016435, 360639485, 490204910, 317451010, 403827960, 619770335, 317451010, 317451010, 274262535, 533393385, 403827960, 576581860, 490204910, 403827960, 533393385, 490204910, 360639485, 317451010, 403827960, 619770335, 447016435, 360639485, 576581860, 490204910};
    vector<int> yb = {502548104, 243417254, 113851829, 243417254, 200228779, 157040304, 459359629, 372982679, 157040304, 243417254, 459359629, 372982679, 459359629, 286605729, 502548104, 416171154, 502548104, 545736579, 329794204, 545736579, 329794204, 329794204, 416171154, 416171154, 243417254, 459359629, 372982679, 200228779, 329794204, 286605729, 545736579, 243417254, 157040304, 286605729, 113851829, 286605729, 372982679, 502548104, 200228779, 157040304, 200228779, 113851829, 157040304, 329794204, 416171154, 545736579, 113851829};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 43188475;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> xa = {697578483, 691992387, 696880221, 682914981, 693388911, 691992387, 687104553, 700371531, 687802815, 698975007, 697578483, 695483697, 688501077, 692690649, 685009767, 698276745, 691294125, 689897601, 702466317, 694087173, 696181959, 680820195, 696181959, 700371531, 683613243, 684311505, 698975007, 699673269, 703164579, 681518457, 690595863, 682216719, 683613243, 680820195, 685708029, 690595863, 701768055, 701069793, 687802815, 694785435, 693388911, 685009767, 686406291, 689199339, 694785435, 686406291, 682216719, 701768055, 689199339};
    vector<int> ya = {897504785, 898901309, 898203047, 898203047, 897504785, 897504785, 898203047, 898901309, 898901309, 898901309, 898901309, 898203047, 898203047, 898203047, 898901309, 898203047, 898203047, 898203047, 898203047, 898203047, 898901309, 897504785, 897504785, 897504785, 897504785, 898203047, 897504785, 898203047, 897504785, 898203047, 897504785, 898901309, 898901309, 898901309, 898203047, 898901309, 897504785, 898203047, 897504785, 897504785, 898901309, 897504785, 898901309, 897504785, 898901309, 897504785, 897504785, 898901309, 898901309};
    vector<int> xb = {691992387, 682914981, 697578483, 682216719, 692690649, 690595863, 699673269, 698975007, 696880221, 696181959, 695483697, 698276745, 685708029, 698276745, 694087173, 700371531, 682914981, 687104553, 688501077, 692690649, 699673269, 691294125, 689897601, 696880221, 684311505, 685009767, 680820195, 701069793, 683613243, 687802815, 694087173, 691294125, 701069793, 689199339, 689897601, 681518457, 702466317, 703164579, 701768055, 702466317, 687104553, 686406291, 688501077, 695483697, 681518457, 684311505, 694785435, 693388911, 685708029};
    vector<int> yb = {898203047, 898901309, 898203047, 898203047, 897504785, 898203047, 897504785, 898203047, 898901309, 898203047, 897504785, 898901309, 897504785, 897504785, 897504785, 898203047, 897504785, 897504785, 897504785, 898901309, 898901309, 898901309, 897504785, 897504785, 897504785, 898203047, 898203047, 898901309, 898203047, 898203047, 898901309, 897504785, 897504785, 898203047, 898901309, 897504785, 897504785, 898203047, 898203047, 898901309, 898901309, 898203047, 898901309, 898901309, 898901309, 898901309, 898203047, 898203047, 898901309};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 698262;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> xa = {431529572, 377661584, 198101624, 216057620, 296859602, 431529572, 467441564, 341749592, 359705588, 269925608, 377661584, 278903606, 260947610, 225035618, 323793596, 198101624, 350727590, 216057620, 323793596, 314815598, 332771594, 189123626, 287881604, 440507570, 458463566, 251969612, 180145628, 395617580, 449485568, 449485568, 234013616, 287881604, 359705588, 413573576, 242991614, 467441564, 413573576, 269925608, 341749592, 305837600, 180145628, 207079622, 395617580, 305837600, 404595578, 234013616, 386639582, 368683586, 251969612, 422551574};
    vector<int> ya = {235738255, 235738255, 253694251, 253694251, 244716253, 253694251, 235738255, 235738255, 235738255, 253694251, 253694251, 244716253, 244716253, 244716253, 253694251, 235738255, 244716253, 235738255, 235738255, 244716253, 244716253, 244716253, 253694251, 244716253, 244716253, 235738255, 235738255, 235738255, 235738255, 253694251, 235738255, 235738255, 253694251, 253694251, 244716253, 253694251, 235738255, 235738255, 253694251, 235738255, 253694251, 244716253, 253694251, 253694251, 244716253, 253694251, 244716253, 244716253, 253694251, 244716253};
    vector<int> xb = {422551574, 269925608, 323793596, 180145628, 314815598, 440507570, 422551574, 216057620, 449485568, 332771594, 359705588, 467441564, 314815598, 278903606, 234013616, 368683586, 395617580, 198101624, 368683586, 386639582, 207079622, 242991614, 207079622, 386639582, 413573576, 404595578, 251969612, 296859602, 476419562, 431529572, 350727590, 225035618, 404595578, 242991614, 332771594, 189123626, 225035618, 305837600, 296859602, 350727590, 440507570, 458463566, 260947610, 377661584, 278903606, 260947610, 341749592, 287881604, 189123626, 458463566};
    vector<int> yb = {253694251, 244716253, 244716253, 244716253, 253694251, 253694251, 235738255, 244716253, 244716253, 253694251, 244716253, 244716253, 235738255, 235738255, 244716253, 253694251, 244716253, 244716253, 235738255, 235738255, 235738255, 253694251, 253694251, 253694251, 244716253, 253694251, 244716253, 235738255, 235738255, 244716253, 253694251, 235738255, 235738255, 235738255, 235738255, 235738255, 253694251, 244716253, 253694251, 235738255, 235738255, 235738255, 253694251, 244716253, 253694251, 235738255, 244716253, 244716253, 253694251, 253694251};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 8977998;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> xa = {453648722, 238152737, 424915924, 195053540, 353083929, 640411909, 252519136, 180687141, 439282323, 266885535, 324351131, 223786338, 568579914, 324351131, 209419939, 281251934, 295618333, 496747919, 511114318, 496747919, 309984732, 582946313, 238152737, 611679111, 554213515, 353083929, 468015121, 482381520, 611679111, 209419939, 539847116, 554213515, 338717530, 582946313, 525480717, 381816727, 439282323, 295618333, 468015121, 626045510, 410549525, 180687141, 367450328, 597312712, 410549525, 525480717, 266885535, 396183126, 381816727};
    vector<int> ya = {608018925, 622385324, 608018925, 608018925, 622385324, 593652526, 608018925, 593652526, 593652526, 593652526, 622385324, 608018925, 608018925, 593652526, 622385324, 608018925, 622385324, 593652526, 608018925, 622385324, 608018925, 622385324, 593652526, 622385324, 622385324, 593652526, 593652526, 608018925, 593652526, 593652526, 608018925, 593652526, 608018925, 593652526, 593652526, 622385324, 622385324, 593652526, 622385324, 608018925, 593652526, 622385324, 608018925, 608018925, 622385324, 622385325, 622385324, 608018925, 593652526};
    vector<int> xb = {252519136, 482381520, 568579914, 568579914, 439282323, 180687141, 611679111, 597312712, 223786338, 295618333, 223786338, 453648722, 252519136, 396183126, 324351131, 626045510, 424915924, 353083929, 281251934, 309984732, 640411909, 511114318, 195053540, 410549525, 539847116, 482381520, 582946313, 338717530, 209419939, 367450328, 424915924, 539847116, 626045510, 309984732, 453648722, 195053540, 511114318, 367450328, 381816727, 396183126, 496747919, 266885535, 281251934, 525480717, 468015121, 338717530, 554213515, 597312712, 238152737};
    vector<int> yb = {622385324, 593652526, 622385324, 593652526, 608018925, 608018925, 608018925, 622385324, 622385324, 608018925, 593652526, 593652526, 593652526, 593652526, 608018925, 622385324, 622385324, 608018925, 622385324, 593652526, 608018925, 622385324, 622385324, 608018925, 593652526, 622385324, 608018925, 593652526, 608018925, 622385324, 593652526, 622385324, 593652526, 622385324, 622385324, 593652526, 593652526, 593652526, 608018925, 622385324, 608018925, 608018925, 593652526, 608018925, 608018925, 622385324, 608018925, 593652526, 608018925};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 14366399;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> xa = {936122019, 910440370, 936122019, 910440370, 859077072, 859077072, 936122019, 884758721, 884758721, 910440370, 859077072, 884758721, 833395423, 910440370, 936122019, 859077072, 833395423, 910440370, 884758721, 859077072, 884758721, 961803668, 833395423, 884758721, 884758721, 859077072, 936122019, 884758721, 833395423, 833395423, 910440370, 833395423, 833395423, 910440370, 910440370, 936122019, 884758721, 936122019, 833395423, 936122019, 910440370, 859077072, 833395423, 859077072, 859077072, 936122019};
    vector<int> ya = {541431318, 438704722, 438704722, 592794616, 592794616, 644157914, 592794616, 592794616, 644157914, 746884510, 695521212, 746884510, 644157914, 798247808, 695521212, 541431318, 490068020, 644157914, 490068020, 746884510, 387341424, 387341424, 541431318, 438704722, 798247808, 438704722, 387341424, 695521212, 438704722, 746884510, 387341424, 387341424, 798247808, 541431318, 695521212, 644157914, 541431318, 798247808, 695521212, 746884510, 490068020, 490068020, 592794616, 798247808, 387341424, 490068020};
    vector<int> xb = {936122019, 884758721, 936122019, 910440370, 936122019, 833395423, 859077072, 910440370, 859077072, 884758721, 833395423, 936122019, 884758721, 884758721, 833395423, 910440370, 884758721, 859077072, 833395423, 833395423, 884758721, 936122019, 936122019, 910440370, 910440370, 859077072, 859077072, 910440370, 833395423, 936122019, 884758721, 961803668, 833395423, 910440370, 884758721, 859077072, 884758721, 936122019, 859077072, 910440370, 859077072, 910440370, 936122019, 833395423, 859077072, 833395423};
    vector<int> yb = {669839563, 721202861, 772566159, 515749669, 823929457, 721202861, 567112967, 464386371, 413023073, 567112967, 772566159, 618476265, 669839563, 823929457, 413023073, 567112967, 464386371, 772566159, 618476265, 823929457, 618476265, 567112967, 721202861, 772566159, 721202861, 464386371, 618476265, 618476265, 515749669, 515749669, 772566159, 413023073, 669839563, 823929457, 413023073, 669839563, 515749669, 413023073, 721202861, 669839563, 823929457, 413023073, 464386371, 464386371, 515749669, 567112967};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 25681649;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> xa = {340668829, 308414307, 469686917, 405177873, 469686917, 437432395, 405177873, 598705005, 566450483, 308414307, 630959527, 340668829, 308414307, 501941439, 630959527, 598705005, 501941439, 534195961, 566450483, 501941439, 437432395, 501941439, 566450483, 598705005, 534195961, 598705005, 340668829, 372923351, 308414307, 630959527, 437432395, 469686917, 372923351, 372923351, 566450483, 437432395, 566450483, 534195961, 437432395, 405177873, 372923351, 630959527, 501941439, 405177873, 534195961, 308414307, 372923351, 469686917, 340668829};
    vector<int> ya = {137318830, 40555264, 137318830, 266336918, 201827874, 40555264, 201827874, 72809786, 105064308, 234082396, 105064308, 266336918, 105064308, 234082396, 234082396, 266336918, 169573352, 137318830, 40555264, 105064308, 169573352, 40555264, 169573352, 201827874, 266336918, 137318830, 201827874, 169573352, 169573352, 169573352, 234082396, 266336918, 298591440, 105064308, 234082396, 105064308, 298591440, 72809786, 298591440, 137318830, 234082396, 40555264, 298591440, 72809786, 201827874, 298591440, 40555264, 72809786, 72809786};
    vector<int> xb = {469686917, 308414307, 598705005, 534195961, 501941439, 469686917, 372923351, 598705005, 437432395, 630959527, 534195961, 469686917, 469686917, 534195961, 405177873, 437432395, 630959527, 630959527, 501941439, 566450483, 630959527, 340668829, 534195961, 405177873, 340668829, 437432395, 340668829, 372923351, 598705005, 372923351, 405177873, 308414307, 405177873, 501941439, 501941439, 598705005, 372923351, 534195961, 598705005, 469686917, 340668829, 566450483, 405177873, 566450483, 566450483, 308414307, 340668829, 308414307, 437432395};
    vector<int> yb = {169573352, 266336918, 169573352, 169573352, 201827874, 105064308, 266336918, 298591440, 72809786, 72809786, 40555264, 298591440, 234082396, 234082396, 234082396, 201827874, 266336918, 201827874, 137318830, 137318830, 137318830, 105064308, 298591440, 40555264, 234082396, 266336918, 169573352, 137318830, 40555264, 201827874, 105064308, 201827874, 298591440, 72809786, 266336918, 234082396, 72809786, 105064308, 105064308, 40555264, 40555264, 201827874, 169573352, 266336918, 72809786, 72809786, 298591440, 137318830, 137318830};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 32254522;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> xa = {648354672, 696976666, 794220654, 672665669, 745598660, 745598660, 721287663, 721287663, 769909657, 648354672, 745598660, 721287663, 745598660, 696976666, 721287663, 648354672, 696976666, 672665669, 672665669, 794220654, 769909657, 769909657, 794220654, 648354672, 745598660, 794220654, 672665669, 745598660, 696976666, 648354672, 769909657, 721287663, 696976666, 769909657, 745598660, 794220654, 794220654, 818531651, 696976666, 794220654, 648354672, 769909657, 696976666, 721287663, 648354672, 672665669, 672665669};
    vector<int> ya = {823768634, 726524646, 629280658, 604969661, 677902652, 823768634, 702213649, 799457637, 702213649, 872390628, 726524646, 604969661, 872390628, 580658664, 848079631, 629280658, 629280658, 799457637, 653591655, 726524646, 848079631, 604969661, 872390628, 677902652, 580658664, 775146640, 702213649, 775146640, 823768634, 775146640, 799457637, 653591655, 872390628, 750835643, 629280658, 677902652, 580658664, 604969661, 677902652, 823768634, 726524646, 653591655, 775146640, 750835643, 580658664, 848079631, 750835643};
    vector<int> xb = {818531651, 672665669, 769909657, 769909657, 721287663, 696976666, 672665669, 745598660, 769909657, 721287663, 794220654, 721287663, 648354672, 769909657, 745598660, 794220654, 794220654, 696976666, 648354672, 672665669, 648354672, 648354672, 818531651, 745598660, 745598660, 696976666, 745598660, 696976666, 672665669, 794220654, 696976666, 648354672, 672665669, 794220654, 672665669, 769909657, 745598660, 721287663, 769909657, 769909657, 721287663, 721287663, 672665669, 696976666, 721287663, 794220654, 648354672};
    vector<int> yb = {580658664, 823768634, 872390628, 775146640, 726524646, 750835643, 677902652, 653591655, 629280658, 872390628, 653591655, 677902652, 604969661, 823768634, 750835643, 799457637, 702213649, 702213649, 848079631, 580658664, 799457637, 702213649, 629280658, 604969661, 848079631, 653591655, 799457637, 799457637, 775146640, 604969661, 848079631, 653591655, 726524646, 848079631, 629280658, 580658664, 702213649, 580658664, 677902652, 726524646, 629280658, 823768634, 872390628, 604969661, 775146640, 750835643, 750835643};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 24310997;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> xa = {264093247, 326913396, 353836317, 174350177, 138452949, 273067554, 335887703, 353836317, 291016168, 129478642, 371784931, 102555721, 210247405, 299990475, 362810624, 120504335, 138452949, 111530028, 228196019, 237170326, 219221712, 255118940, 174350177, 192298791, 147427256, 156401563, 210247405, 344862010, 201273098, 264093247, 120504335, 317939089, 299990475, 246144633, 282041861, 335887703, 165375870, 102555721, 228196019, 183324484, 308964782, 156401563, 246144633, 317939089, 192298791, 282041861};
    vector<int> ya = {266260932, 257286625, 266260932, 266260932, 248312318, 257286625, 248312318, 248312318, 257286625, 257286625, 248312318, 266260932, 248312318, 248312318, 257286625, 248312318, 266260932, 257286625, 248312318, 257286625, 257286625, 257286625, 248312318, 248312318, 257286625, 266260932, 266260932, 257286625, 257286625, 248312318, 266260932, 266260932, 266260932, 248312318, 266260932, 266260932, 257286625, 248312318, 266260932, 257286625, 257286625, 248312318, 266260932, 248312318, 266260932, 248312318};
    vector<int> xb = {308964782, 174350177, 362810624, 273067554, 246144634, 147427256, 264093247, 255118940, 156401563, 102555721, 219221712, 129478642, 317939089, 201273098, 183324484, 255118940, 273067554, 183324484, 371784931, 165375870, 308964782, 237170326, 120504335, 353836317, 326913396, 111530028, 299990475, 129478642, 201273098, 291016168, 219221712, 165375870, 326913396, 291016168, 147427256, 237170326, 335887703, 210247405, 362810624, 138452949, 344862010, 111530028, 282041861, 344862010, 192298791, 228196019};
    vector<int> yb = {266260932, 257286625, 248312318, 266260932, 257286625, 248312318, 257286625, 248312318, 257286625, 257286625, 266260932, 266260932, 257286625, 266260932, 266260932, 266260932, 248312318, 248312318, 257286625, 266260932, 248312318, 248312318, 257286625, 257286625, 248312318, 266260932, 257286625, 248312318, 248312318, 266260932, 248312318, 248312318, 266260932, 248312318, 266260932, 266260932, 257286625, 257286625, 266260932, 257286625, 248312318, 248312318, 257286625, 266260932, 257286625, 257286625};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 8974307;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> xa = {882745629, 579264709, 914690989, 643155429, 547319349, 723018829, 898718309, 738991509, 754964189, 914690989, 563292029, 595237389, 467455949, 930663669, 754964189, 818854909, 499401309, 531346669, 595237389, 818854909, 834827589, 627182749, 467455949, 515373989, 786909549, 866772949, 627182749, 691073469, 659128109, 850800269, 723018829, 707046149, 563292029, 802882229, 483428629, 531346669, 882745629, 675100789, 659128109, 850800269, 691073469, 499401309, 611210069, 786909549, 770936869};
    vector<int> ya = {206453302, 222425982, 206453302, 222425982, 222425982, 238398662, 222425982, 222425982, 206453302, 238398662, 238398662, 238398662, 238398662, 222425982, 238398662, 206453302, 206453302, 238398662, 206453302, 238398662, 222425982, 238398662, 206453302, 222425982, 206453302, 222425982, 206453302, 238398662, 206453302, 238398662, 206453302, 222425982, 206453302, 222425982, 222425982, 206453302, 238398662, 222425982, 238398662, 206453302, 206453302, 238398662, 222425982, 238398662, 222425983};
    vector<int> xb = {627182749, 579264709, 611210069, 930663669, 770936869, 723018829, 547319349, 882745629, 691073469, 738991509, 547319349, 707046149, 850800269, 834827589, 563292029, 770936869, 802882229, 675100789, 707046149, 866772949, 802882229, 675100789, 834827589, 930663669, 818854909, 738991509, 579264709, 467455949, 898718309, 611210069, 531346669, 643155429, 786909549, 595237389, 659128109, 483428629, 914690989, 754964189, 515373989, 515373989, 483428629, 898718309, 643155429, 866772949, 499401309};
    vector<int> yb = {222425982, 206453302, 206453302, 238398662, 238398662, 222425982, 206453302, 222425982, 222425982, 206453302, 238398662, 238398662, 222425982, 238398662, 222425982, 206453302, 206453302, 206453302, 206453302, 238398662, 238398662, 238398662, 206453302, 206453302, 222425982, 238398662, 238398662, 222425982, 206453302, 238398662, 222425982, 238398662, 222425982, 222425982, 222425982, 206453302, 222425982, 222425982, 238398662, 206453302, 238398662, 238398662, 206453302, 206453302, 222425982};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 15972680;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> xa = {990506296, 281021092, 797520188, 116006311, 335837082, 185650895, 428149614, 682730639, 889045390, 243802459, 466850851, 637205900, 996126778, 86565799, 805782827, 56653295, 340458512, 387953172, 767188878, 844279487, 936172402, 706805009, 73619063, 17290902, 298611307, 404530754, 378954121, 743746094, 934799242, 543612697, 86824635, 819039505, 390192490, 944908525, 970469168, 320659529, 116091378, 225338427, 646310723, 104980423, 984191231, 964138751, 227278534, 579548248, 547188635, 405282301, 252337302, 459258500, 302091720, 208002613};
    vector<int> ya = {127342637, 352908354, 548719231, 658239582, 652886528, 921928109, 143104144, 712117089, 214101354, 505019309, 410188016, 95137981, 704240167, 687617045, 663308918, 904966494, 559748670, 903593856, 353666892, 76858111, 34947230, 151737696, 390491281, 93526034, 186611659, 108432406, 395131051, 880085558, 918443162, 218628026, 145528880, 15450459, 817252344, 274156421, 93788394, 999886929, 202360448, 321695011, 375664876, 730769815, 981471082, 821222429, 945230796, 995682509, 447525037, 832456696, 644487398, 418783142, 929383081, 164338059};
    vector<int> xb = {12041935, 105785192, 933928891, 760687188, 580774310, 308525075, 2346861, 317296350, 543151937, 864708794, 698595629, 133343982, 329336277, 196095087, 532039139, 179191647, 193938578, 451431975, 518407386, 578786642, 505521580, 5927834, 598105197, 229818838, 158423556, 38921494, 442770247, 467879666, 990301144, 629664624, 933860939, 619355815, 703499092, 747865888, 280816617, 674450905, 201077221, 229945394, 515117851, 850969522, 214414408, 632690514, 836503686, 67915302, 460434804, 354814884, 524228477, 581719300, 685496767, 114485960};
    vector<int> yb = {451082642, 610304947, 284960391, 410188263, 127204959, 898736216, 730122005, 501517571, 369094877, 123966737, 576473805, 519545286, 477623955, 67795316, 515939474, 523629524, 652349344, 178789574, 672492775, 473944855, 514690384, 737584066, 305921724, 322525426, 919640668, 626423357, 65393017, 219189941, 181520847, 703450415, 858232235, 565909755, 893331972, 892247041, 574664751, 360162828, 842637634, 540355467, 380714168, 428925091, 192555322, 958303244, 229505929, 806449573, 397887879, 481484454, 559408755, 141669641, 524959356, 793245646};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 69533733;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> xa = {429091892, 961267218, 756714985, 47984358, 136994546, 89874083, 778861426, 728600972, 893628814, 947939762, 808594497, 101768992, 396652807, 929734353, 423069827, 979278465, 77822758, 623543069, 360381508, 642010937, 737295718, 666929661, 657575060, 382890716, 482943139, 357339003, 507800086, 780818544, 3225843, 588898556, 713359688, 952110140, 735719, 828442655, 488907844, 337929261, 90030746, 344408985, 69466155, 393051878, 269099537, 358416117, 571776379, 474929348, 370016280, 349140080, 442762483, 453767881, 548002499, 418603553};
    vector<int> ya = {196140058, 24811155, 329748650, 149104151, 394336022, 954128145, 290766635, 717119809, 699047606, 361550233, 299007548, 596365342, 569164866, 726007220, 501019003, 14972080, 16643617, 807540573, 225102734, 402343694, 818952756, 348896798, 41267625, 147255482, 432653731, 906620370, 286613694, 710476245, 158593368, 343954466, 62616237, 497030804, 119223753, 737501743, 77084643, 228775641, 765569362, 437158223, 174243289, 748758058, 171165683, 16331167, 178152769, 752084574, 873785083, 644232356, 550815516, 153131303, 276168326, 256577155};
    vector<int> xb = {755411973, 870194955, 77998094, 598609271, 561609657, 936256770, 443022738, 939452709, 858915255, 957614867, 877389930, 992790003, 317691663, 552687972, 755530796, 545124886, 241695476, 185775121, 361943944, 417648732, 646178940, 730194017, 669944403, 907464485, 644584943, 7495736, 615217694, 291079048, 286118484, 546778867, 720950657, 219600111, 435916612, 465812997, 539610755, 377069428, 713566767, 572399342, 711405433, 977464649, 933319057, 691189179, 342889336, 294863439, 585760694, 299072369, 212666162, 621393734, 195593170, 958507094};
    vector<int> yb = {407417209, 759859399, 270092967, 735013130, 795115938, 853283426, 198813857, 51721306, 846346358, 175468203, 267264813, 972006122, 631494080, 859969717, 202797784, 462806107, 495633850, 45220992, 815136162, 667731287, 444878135, 641194304, 803250907, 464242305, 453739176, 420207457, 973347120, 98381715, 680123828, 524144040, 275637841, 180470934, 782842787, 301902829, 906172752, 847828411, 704771404, 425662110, 454317645, 156044624, 319353091, 468961822, 327355805, 973517226, 425193876, 669205888, 549571613, 488806237, 462018770, 390120061};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 63021596;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> xa = {961031577, 92951954, 930141705, 126943897, 119825351, 605804280, 204518414, 208706134, 740110434, 202640186, 565188235, 558906073, 689640477, 722774426, 714894626, 223257769, 804873413, 435101489, 145185474, 844803149, 122866993, 530675146, 452576891, 832057572, 766561003, 311259219, 649095861, 969491381, 193932067, 64874838, 809866294, 787238366, 595082732, 774192821, 310195345, 391703975, 905645759, 992642673, 208819312, 64870949, 364397728, 493295096, 149196289, 213253170, 628845842, 69024258, 503730191, 958861988, 539503986, 114775329};
    vector<int> ya = {407719726, 307957682, 544616555, 621846642, 741221648, 513940481, 562470014, 469250839, 14838422, 700881264, 800556254, 718910638, 234671695, 732489955, 174100354, 67179224, 691613336, 337283178, 62090330, 779282062, 88589776, 71780925, 849415687, 513973297, 547066697, 397303561, 395654386, 277489363, 314287939, 94165607, 24618808, 61915391, 843486115, 431211389, 183725991, 591798968, 104289874, 762816670, 853583712, 106248753, 890385743, 863820214, 458304785, 261782276, 339976149, 950928785, 589363742, 135739518, 216756515, 119013193};
    vector<int> xb = {319125022, 196919136, 370921261, 363734632, 855571825, 836887994, 267273062, 13481800, 896161859, 573126826, 679592420, 922594062, 410411203, 350206835, 993495665, 252722818, 852620926, 436915426, 731797278, 963714716, 238585801, 601719669, 435545507, 996235939, 596002302, 106809349, 879422076, 619297832, 383277803, 505021302, 873585771, 561546713, 838601936, 94960842, 870965577, 543918866, 561785095, 524125653, 855476090, 491305210, 359324289, 25571240, 615701444, 609156957, 772186384, 881591979, 884175243, 54246904, 613714324, 276226060};
    vector<int> yb = {750484551, 773893181, 540699278, 591045367, 751548703, 666855733, 123658348, 335353625, 129458692, 682372595, 256911954, 3946726, 728469784, 44008313, 5459301, 181577376, 531520069, 666074722, 719668731, 934418232, 760022630, 846913538, 915721135, 887213724, 158673820, 45062144, 493956343, 52206869, 85955933, 342098697, 225536267, 649729404, 455109072, 779947625, 264845693, 919786179, 414625714, 304059128, 318832629, 349519288, 200465106, 839547303, 76300464, 396433416, 563649298, 443211158, 573286914, 613326598, 269133496, 549666366};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 69919813;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> xa = {10058581, 154753346, 768596011, 537736881, 284951555, 4937767, 551743985, 318153081, 419225035, 209414991, 875163789, 993489591, 638970392, 167678236, 107787858, 580531103, 746599417, 504755671, 950094063, 29100387, 798226506, 11045518, 254991679, 113367501, 668164141, 829862837, 535607577, 68808662, 137243450, 742513443, 750893439, 667989764, 658327080, 909258562, 60066869, 685961927, 19032057, 411758916, 456563278, 133339457, 445054711, 1029969, 635150159, 361326595, 736766227, 96400772, 520693118, 623847331, 300737412, 35274927};
    vector<int> ya = {925029818, 174517079, 1646413, 12773433, 691741493, 793087250, 258279708, 836968051, 48330553, 793820349, 265494765, 866228504, 108721269, 770210579, 591514618, 96403021, 610542722, 251614373, 250008568, 140755255, 828757170, 62984621, 651467852, 665271796, 821974756, 306278680, 840014662, 620053298, 944986353, 986049530, 490524582, 844988170, 105332032, 182087247, 989992648, 874583277, 824621693, 49528275, 933382757, 257971427, 204752946, 952234819, 271878226, 477692114, 234014860, 112319589, 480817107, 671488583, 892760055, 827330102};
    vector<int> xb = {628888517, 193031190, 535906415, 42867534, 167612121, 425611047, 886995918, 990144636, 150418989, 579353, 269960467, 494671373, 603257354, 765045560, 919959627, 577389078, 700549546, 10406870, 527143207, 429777297, 452008066, 127836989, 400033681, 848851349, 52232933, 152404806, 963174080, 851166587, 327738049, 314562898, 372932500, 788625051, 647329123, 392311216, 261978133, 189202952, 760652464, 999484367, 54033136, 666650344, 992256916, 837243271, 343785416, 230764677, 369881548, 589608044, 869827643, 828157988, 576868010, 69499080};
    vector<int> yb = {712821565, 724002276, 329872441, 11023068, 787396438, 837417619, 430819152, 638473998, 324578903, 41506913, 475461330, 231415948, 266062185, 852007510, 126429367, 895567, 714844332, 328045595, 272031980, 814375651, 20064823, 819066301, 533190570, 793917341, 711620607, 675647486, 419771932, 624922671, 321510647, 729744143, 582662379, 642821200, 722168329, 368164291, 474824653, 88800309, 687375246, 223691516, 682482322, 740559665, 380311110, 378513747, 155034303, 811291915, 785428352, 960361916, 980089755, 265371065, 117859704, 391568364};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 59036900;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> xa = {352068602, 579236608, 474651962, 792094308, 786606436, 972974369, 341770451, 332792191, 741286204, 434544464, 748568145, 398923657, 818475965, 3136014, 466542296, 284640772, 242935473, 229882977, 413965148, 381212243, 408378089, 940048041, 927171475, 415311246, 460751364, 861163385, 89182510, 114671716, 438294318, 463305746, 762413316, 788894389, 850345165, 707035734, 133691618, 806749512, 129401656, 766070846, 678032393, 538962590, 574952499, 601819857, 596074342, 939372069, 818462554, 218949068, 410168316, 783324231, 637345647, 863599587};
    vector<int> ya = {522122990, 744106081, 436996935, 451033441, 100286485, 37578976, 271080545, 61708747, 736502386, 236686204, 594381619, 100449583, 190831558, 143252320, 289273450, 662769575, 733777208, 572426412, 997941723, 917579959, 746453241, 521191562, 898703726, 700409828, 708695036, 153904442, 798877415, 420143618, 178344012, 2794685, 368046248, 813115905, 524993081, 181682083, 396038058, 544252269, 445071563, 862572978, 39762461, 572121401, 342258680, 154402634, 350817013, 552242308, 407667569, 951763493, 444495580, 23781353, 270084042, 183989823};
    vector<int> xb = {98949725, 224941404, 969378355, 747852374, 383269868, 868422736, 591606032, 684973786, 982019959, 502057448, 646985263, 492597769, 16931664, 610611097, 128421989, 714681426, 414193849, 642408695, 65557006, 790486616, 272019627, 348252148, 295989273, 218235263, 764400231, 757784537, 112548196, 918565900, 935058522, 788850898, 400906872, 314088112, 421472116, 805952760, 76898972, 134040346, 174331717, 580959652, 562110058, 26493377, 492420464, 998911022, 140668621, 736671052, 546858291, 528268401, 447515334, 248564557, 625058417, 874458678};
    vector<int> yb = {299275939, 781176704, 713679609, 749063357, 893126962, 447797501, 147882732, 964276608, 244298764, 32985351, 890147600, 157141346, 276944993, 529201078, 929446207, 151119166, 540062155, 730557846, 902777105, 4850008, 22851014, 567561723, 865845181, 47396806, 627994754, 898311067, 223414873, 867119091, 375785552, 316837228, 460494835, 504232195, 424802625, 511919231, 914381841, 62701197, 441434132, 423589338, 332445252, 255010300, 979194152, 212381119, 244406271, 550997701, 172478340, 801904743, 868494116, 980021518, 356553723, 472750775};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 72772325;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> xa = {181152348, 677120706, 358866300, 954715335, 154204699, 819463008, 780415515, 795665746, 27217574, 696188979, 809476755, 245930812, 55686398, 976106829, 748443633, 928485911, 294719156, 878959127, 127112394, 11882279, 217268293, 379386109, 431763047, 989598305, 36268224, 599930742, 183159632, 511493807, 670540373, 750942701, 721290046, 216183413, 400920831, 743693725, 511468522, 117254324, 2246203, 449635391, 352785492, 355602259, 279920218, 465062613, 294981062, 146968730, 300374350, 554677819, 650360198, 387407716, 921257256, 440255221};
    vector<int> ya = {908345894, 64105331, 903100057, 605442186, 675977828, 563559691, 170747071, 85576700, 824032288, 250082299, 233553927, 238373447, 535283051, 746652327, 851600174, 388118284, 510376941, 1885126, 654173454, 944921446, 417452861, 306738290, 512552903, 210354839, 648423067, 58677669, 652587818, 985285086, 227832552, 543380182, 694854773, 610192317, 705708442, 739867342, 949592246, 478753926, 658180117, 629296093, 797581899, 500388914, 11159086, 233001195, 325110525, 452538846, 83140388, 97280202, 835841903, 31855833, 594101539, 690878499};
    vector<int> xb = {699261646, 212016352, 521323555, 181389585, 488154599, 728404127, 671189266, 32889686, 195946407, 182601368, 351911405, 281246161, 902803757, 656418324, 338555763, 840568683, 117622097, 357073891, 774662636, 707712901, 262537880, 570673949, 517610023, 146952229, 314270093, 634160319, 889572580, 457736377, 474932945, 216892120, 990907454, 192419324, 939884726, 265732684, 193455241, 360288473, 628625928, 962528605, 575541653, 593049252, 103555997, 246722412, 751724068, 764879678, 601602738, 439820450, 991868668, 266097650, 78503829, 406342449};
    vector<int> yb = {769932694, 485780984, 334462605, 428350248, 18702938, 982474425, 542264976, 135306081, 352784649, 422420414, 990936732, 589668899, 28718098, 83897695, 428062477, 623411665, 584823396, 341052257, 830430413, 574584152, 745177693, 832759577, 93623611, 905287232, 98809830, 333007143, 607480572, 945589631, 989056878, 300409654, 933838011, 222273133, 77218728, 705351544, 365838272, 994590304, 515104145, 140985232, 120614161, 903122897, 825763394, 479648114, 585008068, 26060860, 874168554, 537067247, 491796451, 248843507, 155333455, 93408002};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 56582142;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> xa = {769674655, 379270681, 375278839, 504872491, 972755832, 907408387, 954816594, 986436368, 604458632, 952115239, 575213232, 575462605, 187354884, 654833476, 889257202, 726155057, 531125579, 808596893, 757151848, 820861269, 838017146, 693191198, 161802023, 402626330, 926716315, 797514942, 506156757, 138933194, 328052947, 536901796, 838946087, 229489273, 762306539, 626987808, 618192052, 11459737, 793021720, 970304032, 863294934, 830620984, 874955296, 5301848, 429685115, 97630838, 387937009, 887019177, 615484178, 122179546, 773614946, 17577309};
    vector<int> ya = {429738682, 848022485, 101821012, 86940726, 762425090, 219546080, 375803167, 573126931, 385298359, 472850564, 329156667, 802105026, 249115668, 898880165, 491736071, 95729606, 974588127, 306542419, 197060498, 211824217, 28790382, 94361257, 738635077, 615885094, 39055932, 124149597, 503890790, 25544510, 396868809, 701701325, 589273484, 805836857, 545813734, 95344560, 411525914, 171568266, 706334538, 62274046, 41867442, 329754472, 408808158, 348635767, 276124291, 671492966, 560181300, 963855784, 421384059, 789737417, 567120002, 65266019};
    vector<int> xb = {530787454, 427049205, 69714307, 922435543, 131873353, 895084364, 932510684, 382644113, 148928220, 237447922, 557933480, 817403532, 565222898, 252066807, 398808283, 977628489, 5968971, 493596667, 323403801, 651653955, 39644862, 852715327, 842562447, 767192535, 796091553, 841530432, 284787712, 618491004, 78003708, 539723566, 898820631, 754448221, 631556014, 629767883, 544958281, 555798274, 359322951, 627661046, 718264081, 980115231, 35754352, 113881861, 578844708, 640994436, 370413757, 266816349, 156942252, 157692433, 385019661, 775860323};
    vector<int> yb = {921947198, 899495153, 250373646, 919764923, 800919894, 789207832, 508077795, 487141860, 220975161, 644360502, 368868672, 745642757, 881875604, 879859091, 534357847, 924986499, 487294367, 688256482, 104322405, 897893955, 408173176, 972553365, 115322724, 683996824, 707564069, 214716019, 338390729, 381160901, 506516258, 55302162, 18666279, 444198831, 451844601, 838536897, 675692550, 771724006, 566904882, 937351170, 363136943, 168223277, 946516714, 397362917, 95347210, 856153909, 542488638, 985633989, 211134160, 689652732, 124729888, 619058054};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 51102340;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> xa = {441698763, 492923982, 959412759, 78198248, 936858283, 644386442, 355628742, 670013623, 995065518, 492681411, 52748937, 252168416, 885950560, 708456011, 77147288, 665998063, 634532341, 374032346, 471773861, 792246444, 906954972, 320232130, 750139426, 543715719, 839426559, 675549141, 216765137, 677283817, 405932930, 76970712, 507722195, 656722929, 881054226, 42743711, 504435343, 366225820, 604992077, 353017883, 644155358, 985486470, 520465833, 718453724, 481551265, 787717701, 359039795, 837045825, 35736942, 993608970, 941765526, 368424166};
    vector<int> ya = {924373725, 312950440, 544936433, 80512890, 778585502, 601589678, 560642956, 589517503, 978768285, 274780759, 249456584, 586927314, 830618242, 907572131, 954343956, 781938261, 722183818, 399352000, 282131024, 907891687, 455514164, 33008780, 127629931, 92326527, 167897331, 825525894, 611372710, 148394606, 833836386, 488605013, 802651041, 998824164, 597171222, 905339658, 56031956, 800664697, 439256439, 87357130, 251148014, 326160640, 681338043, 965105909, 40217283, 935687023, 120250364, 477007583, 832858820, 272071389, 682078907, 304587999};
    vector<int> xb = {231008312, 694326289, 855097409, 64835559, 257786612, 113253203, 673502543, 336105700, 223752911, 736623819, 888939347, 534576091, 18828358, 346715560, 263018596, 489393216, 765729219, 473053296, 158717262, 731862072, 525808384, 900018891, 333247188, 465983643, 762635642, 631234083, 263302537, 193996192, 29343441, 927813335, 914038326, 517621602, 441556407, 738488516, 873528796, 170061629, 270142030, 938570978, 783461463, 610476845, 406677479, 495208846, 381456158, 260261230, 232544559, 700113181, 719974372, 597921397, 253825873, 636178056};
    vector<int> yb = {50154928, 59064948, 782149658, 212992086, 212251939, 904539841, 827472408, 866646431, 785042609, 493735702, 295222300, 796679692, 837644366, 884431515, 237178273, 657070330, 430561765, 360345728, 696394532, 762506596, 757139691, 430696461, 106300068, 944527418, 931591179, 160177938, 994431424, 118185835, 513737530, 129778481, 540108897, 932556358, 264786236, 692387787, 679573038, 351436654, 217219016, 509246688, 825109995, 150730681, 642736389, 822093506, 969480383, 390479133, 369361101, 831483868, 583478795, 616834338, 881279651, 489312905};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 64953815;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> xa = {744306064, 102188345, 202610490, 427311348, 120439677, 651060479, 786905522, 608908165, 424190082, 341773867, 547640815, 838229880, 217963204, 30951506, 27586872, 603791517, 390114273, 691926848, 879813894, 275021823, 650585887, 395547937, 12543848, 471858300, 812015683, 868157015, 708950016, 609540923, 550243739, 816464330, 408580168, 900808691, 754137181, 637036616, 811565523, 37172870, 280053856, 957946347, 649240591, 363721442, 476410914, 602372095, 54899914, 90901807, 604530614, 770249187, 529857061, 541693264, 923555574, 385806574};
    vector<int> ya = {903786986, 227967011, 641651337, 41121667, 102441456, 828609863, 513130370, 948659605, 143925641, 134014459, 318353039, 794660249, 989725517, 333750503, 616710739, 874871244, 996965588, 858761321, 721699977, 463578596, 702705920, 400770321, 402349429, 310368101, 311960758, 40527422, 946782206, 623035330, 346001127, 466608142, 321262472, 581559275, 933275997, 668138499, 247106800, 880688751, 533159195, 68019501, 454628113, 131296068, 806924272, 272041974, 242729601, 193343327, 912802044, 807630742, 109209198, 887420971, 235636704, 951884174};
    vector<int> xb = {464543068, 608318585, 13453077, 876347401, 192234498, 777806059, 820305207, 591602205, 439172519, 927705364, 644985733, 954754749, 53161328, 897266652, 780051833, 519858570, 17587312, 421050861, 404390716, 735194946, 364201613, 290933730, 171392449, 787312900, 796756938, 653880454, 81873338, 799097144, 277839265, 572142118, 815274967, 861396077, 971200106, 803542243, 575954858, 813054902, 27636168, 739293320, 811559676, 429383465, 788501316, 59936087, 92773155, 395805803, 303475843, 434667224, 286326522, 75206502, 754338064, 501066652};
    vector<int> yb = {185665284, 954944771, 703807849, 217247021, 463189665, 570925099, 625645110, 980274463, 958732745, 953539580, 811935711, 632295664, 150317923, 851075606, 276194411, 860605300, 42287183, 926492957, 492755525, 467051777, 691966713, 714759553, 835840780, 834040351, 296833112, 813500788, 779091404, 966212201, 925912007, 253441393, 220970650, 258632221, 396380060, 211290033, 136869681, 875894920, 44503198, 225250079, 842628609, 668028758, 804498125, 710652303, 262732965, 925606682, 513278703, 666344711, 969454532, 858649039, 736153953, 493678946};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 47288431;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> xa = {203653665, 395193738, 107095238, 642980923, 410760721, 102836242, 151707248, 973634589, 83260940, 587901632, 641969562, 722320889, 819173492, 201939897, 560948401, 156190772, 962094007, 427827320, 493750375, 216917171, 958306878, 22144508, 688350402, 355575969, 741792311, 548201702, 882291576, 929662932, 992350371, 420243691, 857862891, 640068187, 237436312, 239841804, 288349176, 162419866, 59050537, 469464183, 460782220, 875567432, 462260233, 119674331, 788941676, 808590713, 234685704, 428861611, 151719279, 736718271, 532688665, 775417924};
    vector<int> ya = {221517067, 152526773, 238113167, 283220084, 110687251, 290677263, 487901123, 54256541, 378676850, 723386902, 614096648, 622606059, 146490024, 995628291, 128064226, 488347951, 992098421, 718000136, 631647516, 180901593, 565221589, 533751697, 898337478, 939758776, 725528183, 279754790, 985901157, 876948094, 421068862, 520244818, 125183849, 208757415, 56976013, 982233741, 822934062, 879013817, 303708742, 797442817, 369325775, 952133468, 450228270, 943884567, 724483744, 388335323, 443497914, 932784098, 155471668, 946102785, 44272234, 804455519};
    vector<int> xb = {359320413, 693962383, 13847730, 34690508, 714448425, 917716786, 404228191, 727409403, 728321469, 917395885, 710134944, 500813717, 963648473, 160531283, 372473727, 489596751, 963617909, 413086899, 174505648, 911877710, 110477537, 918455526, 126125074, 158799153, 16028336, 835038824, 317966106, 420727701, 6288960, 329110258, 494090985, 478993479, 835601108, 868274910, 833106583, 460171860, 797667889, 837763220, 830125047, 994354567, 62514441, 970018351, 856758128, 452624419, 349763877, 795213349, 312281353, 554918621, 63756060, 107210006};
    vector<int> yb = {876570253, 920560159, 540364075, 536929054, 514699079, 508032614, 353065725, 392082213, 241404375, 877156936, 269170053, 78615527, 446334398, 833562226, 324749826, 369002116, 726969210, 20981947, 619999385, 180366078, 419809973, 777664624, 81449380, 728670213, 158250926, 192802168, 485474087, 298295516, 512949489, 561042172, 14254144, 875576111, 169408454, 835308966, 212103664, 373267410, 56609964, 226950900, 398917788, 965490632, 663115868, 928938334, 804553493, 78482453, 102088049, 155871044, 707452616, 639383848, 358545012, 539901818};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 61264961;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> xa = {18266431, 91118593, 975137113, 261303987, 822642004, 280188696, 617637624, 494325634, 78359285};
    vector<int> ya = {191961862, 276969848, 935200611, 912685480, 559886340, 55749836, 649662792, 900603847, 528585371};
    vector<int> xb = {74915913, 766986564, 888463154, 432985535, 768495157, 381435489, 846592974, 389248730, 960142552};
    vector<int> yb = {953564054, 679092717, 399123150, 944108645, 738823472, 565321991, 24031661, 411365708, 409232385};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 221220012;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> xa = {506760050, 871384859, 885244970, 220365715, 530508591, 491950452, 434411567, 892166113, 439533258, 974475611, 709576868, 365699346, 130316640, 866115547, 46767016, 65729158, 234586234, 985353155, 940786208, 943998922, 111112675, 643621690, 200546660, 701045496, 100230548, 793765622, 921767737, 933619712, 615660181, 196276983, 375135412, 623126153, 390374102, 116929617, 833041925, 207201931, 581290474, 512759679, 673434292, 112595340, 363980897, 45375646, 546782217, 658498139, 406698931};
    vector<int> ya = {981524832, 411814882, 580991153, 651738435, 280098278, 872890752, 888130698, 995680191, 641811044, 986163535, 731818491, 966256245, 560616739, 879649717, 594038690, 229356972, 807739219, 445537784, 819524460, 340264477, 694013498, 228276099, 353405119, 547634279, 138415047, 714950728, 720100388, 496050057, 883626251, 227362155, 653273891, 63086637, 831948240, 554653425, 492178831, 482930680, 392867430, 495640198, 940379716, 855253518, 565079156, 301930945, 572029627, 824724911, 53566173};
    vector<int> xb = {601371819, 318680173, 1861425, 238901952, 203580647, 518673445, 790395851, 623013277, 876146286, 388811306, 635046501, 74630321, 327361525, 936310514, 978981804, 152100057, 44212603, 605591793, 498880829, 695784361, 796463037, 841460780, 753975567, 311680373, 18385961, 97606532, 586066394, 592429826, 848611794, 212142639, 102495360, 81790586, 7223118, 301325464, 252939602, 833873645, 886107103, 199145109, 631709903, 730944136, 799430243, 694019950, 601265389, 499904972, 750070611};
    vector<int> yb = {941552514, 582391930, 715871039, 710834503, 292838115, 282069296, 686629545, 129144237, 529284456, 207879505, 830844586, 361291907, 799531103, 504353680, 4316867, 819729235, 452618267, 716421847, 449466826, 473810516, 428240641, 879569390, 108154854, 755837888, 819528577, 732429806, 789508721, 750739837, 800816698, 113782660, 946717596, 210321177, 665745439, 636081094, 935318073, 960459759, 43161304, 755409587, 689768290, 270588544, 401523277, 593171066, 641029005, 302733334, 971852627};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 74670661;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> xa = {559848562, 373354103, 13883194, 403900859, 503958594, 978179944, 934363803, 269102999, 873890931, 479213870, 653144950, 934992954, 874044405, 749269383, 527341036, 482456584, 492613302, 547992222, 134266154, 261434893, 567645210, 114331054, 857791052, 992115447, 659080699, 649125450, 34121176, 27502259, 184531893, 284798374, 330101226, 444368327, 258188626, 730846975, 316141013, 867179498, 764502381, 624703405, 558406380, 563725690, 553181504, 346077469, 117028684, 202944124, 167068025, 954273639, 892426178};
    vector<int> ya = {695108290, 260924487, 578628083, 881049667, 898405655, 333631054, 419242917, 807131429, 524530714, 290261013, 194367439, 725824413, 119349981, 452698218, 578430366, 736160567, 489700090, 968421199, 909141969, 862421775, 863396326, 21451128, 655023786, 371304799, 475359437, 718108548, 794935444, 657006517, 155943287, 905475910, 155202721, 116007381, 269395821, 934809394, 883408591, 424986646, 284187435, 855133691, 300978406, 676831145, 712888793, 269536671, 206222542, 635487313, 206832987, 277434511, 239166976};
    vector<int> xb = {95685440, 648143553, 868961539, 606892823, 94635491, 987780694, 971168699, 381449226, 588640550, 324670937, 926069910, 171188030, 292761453, 349355943, 152397140, 302870530, 42076424, 84989816, 886940982, 946441684, 612011951, 995246313, 759666476, 104669293, 889653014, 832578247, 342374030, 635084058, 497342857, 284716773, 120578476, 537651081, 925705849, 461719153, 183650852, 426359882, 459207383, 754289114, 100257778, 678057641, 370964231, 416992796, 579252290, 242152120, 110483071, 697096803, 577006814};
    vector<int> yb = {272259576, 198547278, 333317687, 144102922, 573619835, 725044759, 440992876, 467078065, 620051418, 817949652, 332527781, 901231421, 974061331, 983068461, 703508652, 397603059, 786071108, 981919639, 948066022, 505983770, 951862123, 823689542, 38368659, 351625884, 625498727, 109903587, 391892963, 95112734, 544446849, 60827721, 874699461, 515682471, 883946323, 560484282, 658096463, 163384841, 463661365, 244223580, 677567852, 245693516, 298585274, 748034294, 401885456, 501356215, 19305925, 289066686, 232121744};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 67405578;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> xa = {91323490, 937779305, 259568195, 867795587, 510450292, 205780130, 223071512, 726026720, 145455417, 502972972, 75108996, 564794770, 365576300, 640459802, 823793772, 53247215, 551502873, 238375541, 760057277, 858119614, 469742032, 955910106, 201995555, 349882754, 357253384, 247535672, 330094457, 321363419, 607246342, 405980148, 783168137, 969062724, 774530638, 699614823, 619031438, 990550751, 240671089, 111195135};
    vector<int> ya = {626880250, 487508507, 929771924, 83887398, 677426017, 325314224, 52884636, 950008450, 717709337, 3341565, 766527768, 416987092, 112208240, 544259306, 80000679, 830137056, 403925128, 670277664, 628833417, 653949056, 95089887, 587961212, 944514469, 873029530, 708272802, 973178401, 611234092, 844993304, 891395904, 943750384, 822706089, 538994315, 74329523, 536844231, 688485932, 272125842, 612211900, 540114084};
    vector<int> xb = {818999676, 855848067, 391996938, 180268279, 999550233, 529509274, 737078268, 992113288, 356950091, 531383603, 598785827, 844232517, 646800024, 618531723, 405651397, 610473413, 191720888, 760845342, 62629383, 738243837, 269173309, 449765283, 62415314, 65034287, 575531083, 821765987, 329179513, 183493974, 671069685, 332326389, 487708438, 595699035, 884319819, 624051676, 314676491, 768790525, 344895728, 643470968};
    vector<int> yb = {98497361, 399801845, 332060137, 930163775, 919845950, 962108728, 115045257, 371641584, 824794149, 5823534, 482059465, 150685066, 783305628, 203628390, 422247733, 469385769, 98118860, 102874391, 73909013, 226095425, 438868340, 813177511, 405739250, 972853381, 61432279, 311231641, 405024449, 113942053, 890684377, 472759943, 788012695, 44522384, 392352036, 952032987, 770259030, 883568553, 651853922, 263845754};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 78134337;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> xa = {921001703, 125882064, 326651353, 344682498, 115346585, 428380369, 242449865, 605852213, 789606764, 119989179, 280328633, 182221696, 63671732, 691841068, 264617670, 99609445, 161260058, 248689112, 152893683, 989017724};
    vector<int> ya = {718390375, 53495001, 808382662, 899749173, 456672134, 409733563, 585224938, 130397516, 253984287, 814391898, 95188751, 662933311, 464716353, 450885473, 776367919, 651119258, 380698290, 188863365, 585505049, 405020253};
    vector<int> xb = {798365807, 931109452, 20219508, 275533386, 751597670, 908787860, 733101867, 644666118, 145383620, 789995398, 622417741, 552488842, 721588586, 971831967, 676703299, 734328149, 706225411, 311915622, 454019640, 239279137};
    vector<int> yb = {386347234, 573756855, 242378094, 312945454, 480137670, 149181092, 322979666, 461356534, 849433533, 384705036, 455676828, 504701762, 661911497, 255166203, 183155507, 210183875, 688053849, 368490851, 793222577, 988421538};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 109337142;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> xa = {645469295, 359792310, 747233053, 881429670, 928362147, 962095137, 341545682, 974179400, 661972884, 210818522, 965917867, 104312906, 422742496, 920670614, 229560467, 510894097, 877453049, 460454471, 152119083, 811599700, 263864441, 180583540, 984417779, 102888866, 401394163, 678530617, 912708315, 799338588};
    vector<int> ya = {109074755, 84093556, 810226364, 435620106, 72440084, 598784022, 843119821, 272933701, 970581006, 175106281, 32105978, 351510728, 412946678, 722834066, 214287081, 979052322, 209455210, 506122848, 877657615, 649471935, 354161869, 962120147, 33911889, 158801602, 828779588, 588810853, 863433930, 107692873};
    vector<int> xb = {295055017, 619770145, 434090045, 727943407, 73986641, 142430519, 779207077, 947334443, 919100431, 381238807, 207238294, 186369171, 747151956, 54388079, 934445807, 193033034, 682446580, 605479546, 123841161, 403274281, 373681142, 450285237, 278932302, 248048518, 981440293, 306326135, 69058069, 735318196};
    vector<int> yb = {761532924, 392536324, 696957087, 530505364, 564433007, 699000734, 309138052, 743455807, 953583211, 379201938, 846591781, 612739353, 433600926, 731156029, 522652593, 38460065, 793968029, 716103969, 482534941, 187527429, 413053016, 472711018, 492982634, 922749141, 489253926, 61652820, 835292342, 89565657};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 113780696;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> xa = {433150938, 95775829, 981574970, 964364861, 620479226, 601888224, 947629130, 279223978, 89621977, 601123136, 815402817, 522864676, 736169795, 675011717, 413295710, 233031233, 52347579, 356643626, 178251302, 68454292, 161381604, 881001424, 538863663, 644641107, 269638569, 212356895, 553315140, 186252098, 719193430, 765712861, 29201499, 429916508};
    vector<int> ya = {887310048, 527414319, 19237294, 518788032, 404703118, 445205784, 36704687, 194137328, 148695121, 613646438, 363709323, 499875734, 885610077, 923633159, 349200973, 786232327, 523677460, 389205267, 244903050, 131482449, 324025986, 680663952, 358083974, 913629968, 926332522, 138422511, 458172869, 940883055, 549684883, 28512202, 759478573, 232632194};
    vector<int> xb = {500984449, 693933222, 849446774, 528650118, 431772497, 301502107, 780955303, 382507227, 687656663, 824226798, 767844116, 653472338, 916279053, 645477621, 327350880, 153360282, 729451265, 879374563, 877146958, 60290886, 231948701, 443459294, 791812312, 833249049, 594917489, 385014666, 872234281, 262073638, 350001632, 691444589, 651556432, 356602443};
    vector<int> yb = {350988138, 53647836, 966907598, 530385475, 672268472, 313959497, 792975806, 695517837, 714385716, 877683793, 402439162, 814952755, 75425885, 316188062, 584562282, 660742043, 979517393, 603473978, 212280027, 157853678, 78512799, 475335855, 361355892, 468298882, 934464829, 135201012, 320472746, 396698453, 44142245, 553166445, 848589316, 41010236};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 87121810;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> xa = {420808716, 727131368, 819717689, 919345497, 261417202, 373826967, 412411730, 130552130, 384448639, 679412758, 44911895, 310866774, 641671110, 833884372, 616671465, 518044329, 649112725, 428004073, 253718440, 749389098, 464335037, 460024013, 161451382, 560703295, 479867173, 959138416, 194471695, 509801209, 359161881, 795378978, 257200156, 497664129, 143509415, 749831578, 356091494, 352548400, 646661116, 292769357, 712003101, 35226884, 496226119, 532544699, 302154041};
    vector<int> ya = {658157774, 873774309, 748306265, 435101061, 276789280, 907434450, 804206786, 737488115, 731573202, 668062520, 894612115, 799679204, 220038582, 196590548, 575900761, 935697089, 309747721, 677329715, 840609482, 605252319, 323252434, 944432299, 501646697, 546228954, 80362797, 202129361, 7435535, 403650593, 565325588, 91393565, 223803113, 314523570, 379594546, 364140532, 962421688, 459126603, 555135514, 821853227, 55682440, 715997892, 861390881, 783179359, 188203569};
    vector<int> xb = {259214208, 305992505, 835347332, 863661684, 654364630, 221738604, 207787476, 482451820, 347663279, 415139008, 857125946, 750975303, 335741687, 634631522, 271400287, 80891102, 342062496, 21793128, 178010578, 729656974, 587634381, 36782846, 229824109, 73810011, 323821458, 953845527, 939270910, 641415325, 524678773, 350357761, 128518988, 393839557, 545324568, 858628617, 813494246, 87416389, 436929772, 344273443, 248145505, 855481653, 622449291, 480210546, 799892887};
    vector<int> yb = {29814433, 931471437, 352166018, 966855270, 866030803, 256780825, 624805042, 4353061, 253905598, 292243503, 651620459, 298826381, 785155279, 389045736, 538576183, 636732466, 54068766, 489123394, 178744038, 898787379, 643232840, 481897653, 244334174, 764687688, 561833220, 875387561, 853773290, 169026843, 638115331, 331595732, 528181514, 878149135, 423524403, 500065661, 674604254, 101861877, 920116321, 765397142, 517255198, 867329666, 366194714, 617808267, 271280250};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 65702029;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> xa = {8259147, 541829385, 556780456, 212385886, 277026674, 992805574, 882408081, 559385834, 274316756, 967284805, 686585720, 861024410, 697769663, 644303739, 879199787, 410977584, 954739573, 885059559, 565003908, 534958145, 25565754, 277918508, 651620932, 785127341, 812474311, 97810796, 235129594, 742680345, 529170467, 619777534, 327453591, 465894701, 213819985, 159066279, 993772252, 475052544, 117697011, 587887387, 844183717, 648614831, 411541870, 533572220, 989911434, 811515170, 65808143, 418584806, 920809654};
    vector<int> ya = {251153276, 698376111, 573111111, 843543194, 45080761, 18177273, 258983204, 236056197, 461973508, 885244118, 779482828, 849939653, 327924926, 309203721, 263610025, 434694924, 294693443, 132239707, 886237852, 524445812, 171645187, 165280351, 50006452, 953604000, 988758930, 100058533, 905366483, 20477979, 772106244, 328285393, 597506948, 647158969, 926269991, 869191555, 573238475, 164868017, 285472844, 364189285, 464774213, 98281517, 135853571, 513667843, 287985707, 962461697, 200398629, 243773393, 625833401};
    vector<int> xb = {955384551, 583086077, 378126108, 218934550, 498626145, 220321877, 343230354, 192741218, 435806263, 936531556, 976835167, 28648270, 216412982, 29761673, 379550429, 395344039, 528981165, 667036728, 404476279, 996188435, 823924313, 478025019, 779209857, 248141999, 272746329, 368706890, 147691399, 749435633, 548966052, 150730084, 193029564, 758272918, 115642467, 261560780, 350982142, 268754285, 824481146, 421352610, 943733709, 107219134, 643607431, 898194860, 2989317, 181027699, 249370316, 287165342, 800951248};
    vector<int> yb = {888452369, 43218634, 928724568, 659742148, 707135361, 826421869, 200866587, 912393303, 722560146, 331970246, 83313257, 955479921, 169536977, 999428455, 647276354, 509000787, 950312310, 787151527, 425523918, 242213710, 617892578, 517031371, 255458614, 176950324, 263423059, 809145491, 576504101, 278394398, 990929658, 120971620, 513311001, 165670590, 554931984, 932945096, 826743606, 794611818, 224129536, 190989154, 41884965, 480068324, 48819484, 421767729, 199204441, 689244483, 114974596, 646382278, 577607143};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 61255598;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> xa = {378690627, 438792355, 269388375, 990596355, 298587700, 817873929, 336151698, 879297768, 65904615, 678075794, 182732340, 530304693, 273721063, 461596252, 738567886, 292015187, 300634056, 626297663, 402392372, 997218236, 609158087, 790773634, 851485974, 423166182, 78908930, 878973851, 850635684, 661295840, 85546772, 999148119, 851952819, 431944186, 129062984, 180314806};
    vector<int> ya = {675418731, 191624922, 599054076, 62550302, 383726591, 117289356, 531601437, 280134188, 407667154, 2698066, 937030612, 643062013, 907737714, 459672035, 886581734, 984010766, 824621194, 918970995, 901089854, 633800150, 330692002, 623360146, 968760046, 202859036, 803441709, 939656078, 898903226, 910990124, 659860070, 725142618, 910700342, 172834613, 271160952, 514236429};
    vector<int> xb = {665268668, 735338373, 240052337, 523229395, 649381473, 882328454, 256099878, 641622877, 885238928, 502247796, 239609950, 546779070, 357237020, 546985387, 86430281, 7151019, 413764571, 281848834, 213080423, 312317028, 992856976, 680734818, 657780090, 886521233, 317728650, 365413800, 249476069, 721800655, 772862928, 741905969, 949679584, 503045787, 23284160, 133879374};
    vector<int> yb = {374647867, 966011864, 250153012, 872923960, 835739873, 313715013, 250655631, 959094126, 794706198, 203856316, 733933263, 292145527, 735992344, 395227706, 158678202, 304980114, 464248580, 148710107, 407475906, 411705263, 392325315, 872982589, 936504310, 991175264, 838639774, 517931720, 500045351, 868744611, 450160668, 553134319, 490974848, 810530369, 304611522, 742112293};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 69856820;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> xa = {0, 0, 1000000000, 1000000000};
    vector<int> ya = {0, 1000000000, 1000000000, 0};
    vector<int> xb = {0, 0, 1000000000, 1000000000};
    vector<int> yb = {1000000000, 0, 0, 1000000000};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> xa = {1, 999999997};
    vector<int> ya = {2, 999999999};
    vector<int> xb = {0, 999999996};
    vector<int> yb = {1, 1000000000};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> xa = {12, 999999899, 999919992};
    vector<int> ya = {999997778, 13, 999898765};
    vector<int> xb = {31, 998822110, 999999999};
    vector<int> yb = {998998998, 99, 987654321};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 999898752;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> xa = {999999839, 293578369, 715827884, 914251223};
    vector<int> ya = {812541625, 33, 0, 999999293};
    vector<int> xb = {464, 200172125, 999999112, 1};
    vector<int> yb = {818234223, 999999152, 234236090, 2};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 715827883;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> xa = {0, 0, 0, 1000000000, 1000000000, 1000000000, 200000000, 400000000, 600000000};
    vector<int> ya = {0, 500000000, 1000000000, 0, 500000000, 1000000000, 800000000, 600000000, 400000000};
    vector<int> xb = {0, 0, 0, 1000000000, 1000000000, 1000000000, 500000000, 500000000, 500000000};
    vector<int> yb = {100000000, 300000000, 700000000, 900000000, 100000000, 300000000, 1000000000, 500000000, 0};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> xa = {271828182, 771828182};
    vector<int> ya = {271828182, 771828182};
    vector<int> xb = {271828183, 771828182};
    vector<int> yb = {271828183, 771828183};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 500000001;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> xa = {3141, 5926, 5358, 9793, 2384, 6264, 3383, 2795, 288, 4197, 1693, 9937, 5105, 8209, 7494, 4592, 3078, 1640, 6286, 2089, 9862, 8034, 8253, 4211, 7067, 9821, 4808, 6513, 2823, 664, 7093, 8446, 955, 582, 2317, 2535, 9408, 1284, 8111, 7450, 2841, 270, 1938, 5211, 555, 9644, 6229, 4895, 4930, 3819};
    vector<int> ya = {6442, 8810, 9756, 6593, 3446, 1284, 7564, 8233, 7867, 8316, 5271, 2019, 914, 5648, 5669, 2346, 348, 6104, 5432, 6648, 2133, 9360, 7260, 2491, 4127, 3724, 5870, 660, 6315, 5881, 7488, 1520, 9209, 6282, 9254, 917, 1536, 4367, 8925, 9036, 9, 3305, 3054, 8820, 4665, 2138, 4146, 9519, 4151, 1609};
    vector<int> xb = {4330, 5727, 365, 7595, 9195, 3092, 1861, 1738, 1932, 6117, 9310, 5118, 5480, 7446, 2379, 9627, 4956, 7351, 8857, 5272, 4891, 2279, 3818, 3011, 9491, 2983, 3673, 3624, 4065, 6643, 860, 2139, 4946, 3952, 2473, 7190, 7021, 7986, 943, 7027, 7053, 9217, 1762, 9317, 6752, 3846, 7481, 8467, 6694, 513};
    vector<int> yb = {2000, 5681, 2714, 5263, 5608, 2778, 5771, 3427, 5778, 9609, 1736, 3717, 8721, 4684, 4090, 1224, 9534, 3014, 6549, 5853, 7105, 792, 2796, 8925, 8923, 5420, 1995, 6112, 1290, 2196, 864, 344, 1815, 9813, 6297, 7477, 1309, 9605, 1870, 7211, 3499, 9999, 8372, 9780, 4995, 1059, 7317, 3281, 6096, 3185};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 657;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> xa = {464318309, 464886183, 464790671, 464537767, 464526745, 464028724, 464068919, 464291480, 464912897, 464495334, 464688117, 464793595, 464268453, 464070180, 464227605, 464532506, 464171912, 464145685, 464453515, 464916073, 464785823, 464692229, 464157305, 464755934, 464821463, 464399678, 464458479, 464933874, 464818155, 464146155, 464492793, 464850615, 464377434, 464785792, 464434795, 464323386, 464724780, 464483447, 464258023, 464664760, 464228445, 464399511, 464431880, 464923780, 464173805, 464347912, 464240978, 464821873, 464875688, 464171057};
    vector<int> ya = {464446199, 464892886, 464800497, 464344695, 464478919, 464221796, 464646193, 464566149, 464812333, 464972925, 464609398, 464897304, 464375763, 464149573, 464133928, 464482077, 464991748, 464278697, 464219967, 464736198, 464399924, 464885751, 464170342, 464357716, 464862235, 464037534, 464321093, 464095073, 464976019, 464478920, 464729518, 464667536, 464118604, 464988993, 464270610, 464654313, 464551006, 464440649, 464555632, 464794332, 464045893, 464496239, 464196331, 464681212, 464033606, 464071996, 464267823, 464974997, 464665573, 464308870};
    vector<int> xb = {464559510, 464140032, 464481355, 464128777, 464699142, 464621760, 464244398, 464752295, 464362755, 464529475, 464781266, 464136092, 464915956, 464963522, 464624854, 464628139, 464921550, 464049000, 464595519, 464714178, 464113805, 464593570, 464263050, 464420032, 464635492, 464041849, 464623212, 464481122, 464912406, 464292968, 464178496, 464918382, 464870423, 464150815, 464112401, 464743053, 464213604, 464434318, 464281514, 464949165, 464445195, 464492570, 464799750, 464310658, 464781627, 464963544, 464818716, 464509594, 464146657, 464438081};
    vector<int> yb = {464399951, 464815315, 464415698, 464694078, 464717965, 464617434, 464685128, 464073379, 464023325, 464091411, 464886655, 464262537, 464300052, 464245435, 464942306, 464422519, 464900877, 464335890, 464075251, 464121672, 464634233, 464905195, 464162564, 464498832, 464466686, 464290212, 464247073, 464757126, 464227273, 464384334, 464284139, 464493920, 464258501, 464156672, 464106239, 464217189, 464019679, 464113437, 464419909, 464493020, 464863247, 464631035, 464161678, 464885959, 464941999, 464010508, 464775132, 464258891, 464766613, 464692102};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 58392;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> xa = {804289383, 846930886, 681692777, 714636915, 957747793, 424238335, 719885386, 649760492, 596516649, 189641421, 25202362, 350490027, 783368690, 102520059, 44897763, 967513926, 365180540, 540383426, 304089172, 303455736, 35005211, 521595368, 294702567, 726956429, 336465782, 861021530, 278722862, 233665123, 145174067, 468703135, 101513929, 801979802, 315634022, 635723058, 369133069, 125898167, 59961393, 89018456, 628175011, 656478042, 131176229, 653377373, 859484421, 914544919, 608413784, 756898537, 734575198, 973594324, 149798315, 38664370};
    vector<int> ya = {129566413, 184803526, 412776091, 424268980, 911759956, 749241873, 137806862, 42999170, 982906996, 135497281, 511702305, 84420925, 937477084, 827336327, 572660336, 159126505, 805750846, 632621729, 100661313, 433925857, 141616124, 84353895, 939819582, 1100545, 998898814, 548233367, 610515434, 585990364, 374344043, 760313750, 477171087, 356426808, 945117276, 889947178, 780695788, 709393584, 491705403, 918502651, 752392754, 474612399, 53999932, 264095060, 411549676, 843993368, 943947739, 984210012, 855636226, 749698586, 469348094, 956297539};
    vector<int> xb = {36140795, 463480570, 40651434, 975960378, 317097467, 892066601, 376710097, 927612902, 330573317, 603570492, 687926652, 660260756, 959997301, 485560280, 402724286, 593209441, 194953865, 894429689, 364228444, 947346619, 221558440, 270744729, 63958031, 633108117, 114738097, 7905771, 469834481, 822890675, 610120709, 791698927, 631704567, 498777856, 255179497, 524872353, 327254586, 572276965, 269455306, 703964683, 352406219, 600028624, 160051528, 40332871, 112805732, 120048829, 378409503, 515530019, 713258270, 573363368, 409959708, 77486715};
    vector<int> yb = {373226340, 631518149, 200747796, 289700723, 117142618, 168002245, 150122846, 439493451, 990892921, 760243555, 231192379, 622597488, 111537764, 338888228, 147469841, 438792350, 911165193, 269441500, 142757034, 116087764, 869470124, 155324914, 8936987, 982275856, 275373743, 387346491, 350322227, 841148365, 960709859, 760281936, 771151432, 186452551, 244316437, 971899228, 476153275, 213975407, 139901474, 626276121, 653468858, 130794395, 239036029, 884661237, 605908235, 350573793, 76065818, 605894428, 789366143, 987231011, 875335928, 784639529};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 60958031;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> xa = {0, 3, 0, 5, 6, 8, 9, 10};
    vector<int> ya = {1, 6, 0, 8, 5, 1, 2, 3};
    vector<int> xb = {6, 1, 7, 4, 7, 4, 5, 6};
    vector<int> yb = {5, 9, 2, 8, 9, 6, 7, 8};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> xa = {12312, 4253453, 999999999, 32423, 1132, 1, 423, 63, 345423, 65775, 86786, 3453, 24253};
    vector<int> ya = {6435, 87696, 3, 543, 785, 75635, 345476, 4324523, 54332, 4322, 6, 345, 74};
    vector<int> xb = {4334, 64, 2, 2, 42, 1, 634, 7563534, 73354, 544, 55765, 644, 232};
    vector<int> yb = {32432, 4637585, 75346, 35435, 75654, 65353, 53, 2, 23, 6345, 43, 23, 44654};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 10301;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> xa = {746261614, 7252338, 440064843, 89976763, 153910183, 473529152, 920942530, 74301388, 346937221, 697794267, 96573695, 460208779, 511320594, 828254273, 431998359, 880295351, 893399512, 993064513, 277494738, 236015913, 865130388, 371213076, 852311994, 223483057, 876943644, 653598786, 867495627, 472295718, 592091944, 224998058, 16291896, 934527820, 892678081, 247650633, 247501097, 669985141, 649501743, 368446111, 827945064, 589706150, 915656244, 600258613, 405745159, 625456142, 938713266, 888642180, 664223396, 334676054, 625157229, 229163943};
    vector<int> ya = {104449399, 667276724, 748650169, 851309501, 260073717, 55762911, 116384469, 160900584, 955160664, 323205757, 88652167, 168379986, 37113214, 591496058, 120465136, 185548936, 150777784, 873653393, 122788942, 160848841, 515805404, 108253938, 801835705, 105372223, 851748829, 267535624, 787876115, 63893173, 955961579, 822392030, 948249390, 904311724, 158490087, 409785674, 304897993, 755074749, 385238165, 201849913, 589258893, 869508236, 105206482, 428854282, 977267235, 841057243, 60487057, 947603418, 348614372, 217412922, 600200154, 654672362};
    vector<int> xb = {46243340, 888294215, 301706993, 59177407, 226681229, 570054364, 183147820, 487441178, 464369409, 370396715, 400613856, 36470742, 274157378, 592784162, 371084734, 190459786, 123735044, 228553189, 821129331, 515757608, 454010549, 921735897, 519716964, 357325214, 366855730, 350642927, 161260473, 821181905, 424499403, 929765847, 908834677, 715369788, 980314390, 518971837, 318378556, 219756921, 986008932, 426260674, 114211033, 356536768, 396280649, 980173049, 476979558, 745120527, 435215454, 936585746, 264166426, 539624828, 477860963, 440043779};
    vector<int> yb = {418131805, 52165468, 30669671, 607708382, 410223454, 628719667, 549287196, 221433038, 965892084, 132486096, 637900801, 601471657, 552777807, 351326110, 140820659, 707578552, 7624385, 453477858, 251924296, 679533210, 19807800, 954434437, 569958953, 403713881, 890848996, 936443345, 615979270, 278695034, 148035807, 595316887, 228602809, 554998806, 361410614, 151079627, 617903786, 78005400, 667165712, 362780417, 499475460, 281103463, 320853519, 789783040, 707322341, 845064914, 575585586, 32437702, 902499817, 487001195, 12335278, 298294415};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 58807938;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> xa = {291188, 931733, 694459, 638630, 749751, 238760, 886106, 762142, 517246, 642611, 203388, 491378, 369474, 521162, 899808, 515894, 181906, 384967, 89477, 457040, 5247, 595890, 702862, 958156, 466119, 22392, 723141, 665357, 176213, 703604, 515031, 981604, 635338, 723694, 134439, 899293, 962453, 20546, 175640, 479699, 177361, 379027, 485281, 546834, 414393, 899294, 576933, 596298, 798465, 666409};
    vector<int> ya = {567543, 803711, 776504, 270405, 761868, 242623, 807000, 999213, 907979, 497417, 702817, 423010, 479022, 338155, 660909, 127665, 751652, 623362, 662414, 927291, 617266, 353980, 820522, 102547, 900813, 234916, 516045, 991950, 345418, 314511, 172565, 427165, 118222, 949068, 697569, 394294, 705895, 504570, 393507, 613874, 1987, 96325, 551088, 995212, 948683, 211997, 637082, 700336, 349564, 299496};
    vector<int> xb = {141832, 481034, 653475, 962354, 97785, 68494, 711474, 613830, 574648, 571096, 928340, 261417, 998261, 560766, 724689, 210035, 955060, 430584, 228809, 348567, 558662, 745000, 959095, 109751, 740212, 907779, 835951, 891498, 122320, 699719, 705199, 778355, 180753, 872878, 254914, 278538, 455576, 966387, 406572, 30225, 51689, 334912, 805845, 49950, 409882, 530535, 259984, 364942, 961118, 488793};
    vector<int> yb = {227714, 519781, 747997, 701013, 143736, 2414, 122997, 493891, 893912, 245316, 193611, 599111, 537876, 888567, 471989, 792789, 167105, 441770, 759177, 87881, 471994, 325070, 936996, 277839, 375019, 346879, 322578, 149207, 711820, 283697, 152204, 453738, 317682, 900200, 154752, 975621, 902614, 277748, 469512, 796526, 37269, 663122, 909841, 575144, 65895, 896034, 367933, 232999, 337804, 641314};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 55766;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> xa = {523247367, 908847182, 271592240, 548890844, 102019530, 198319248, 108531965, 758742007, 249601800, 36017911, 159074395, 765706703, 815494531, 440869423, 75628110, 677499944, 630077923, 544507630, 452546097, 461874313, 368653356, 637349174, 870453632, 637479870, 55866683, 789475783, 19885503, 663652542, 179335431, 491783574, 846391991, 458138181, 310713012, 393961059, 70293819, 957837053, 919760321, 954068284, 854600492, 487437890, 142818165, 406836470, 139109985, 32138733, 700037306, 165252514, 792431144, 289146145, 791585300, 848382416};
    vector<int> ya = {380276919, 769687991, 581699095, 890641712, 519888952, 885898193, 38393550, 634112370, 493024160, 312543747, 178433744, 444879423, 579406575, 757818225, 189625920, 700936214, 454993690, 421533471, 370575603, 117791057, 757739622, 676009639, 689907138, 965108206, 319056148, 961816885, 498239189, 838314899, 937442564, 890614169, 997044638, 730739358, 872067241, 330953015, 111506654, 76703999, 876439086, 420071299, 874072107, 184395625, 919443502, 285647950, 461044123, 542056744, 309004145, 697938741, 827429895, 381291759, 842512812, 999101091};
    vector<int> xb = {710258823, 370897673, 918570541, 673794242, 90642793, 704267280, 79780853, 616590888, 571585564, 558072066, 387659004, 200078650, 696669806, 602409991, 315499109, 447694386, 572812181, 248453559, 646311570, 112921920, 824497127, 34922390, 547461364, 186179977, 198347554, 472091672, 214965515, 147850393, 656104061, 621117406, 134386990, 116947429, 995802086, 938341472, 180355345, 626146965, 812168817, 198272999, 240310222, 407239373, 996923146, 259848198, 848485735, 316000040, 796736621, 719364852, 588978144, 858634131, 226557635, 861309759};
    vector<int> yb = {125126560, 578976335, 734980188, 729590892, 174603963, 675336432, 823436309, 732390563, 475446688, 618551120, 489301765, 931930460, 960486826, 950468158, 423685076, 270711574, 204276564, 758328333, 422054646, 689352144, 635525568, 374539182, 8143337, 239072196, 115998774, 564648929, 186436655, 231461323, 389443356, 478982702, 883113527, 356331383, 921292758, 794794301, 495990846, 555410655, 381967241, 266211194, 763737508, 505018912, 802710655, 79778254, 722826310, 621759101, 917937608, 64992686, 299361371, 898017576, 892314964, 526025046};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 59189936;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> xa = {763481, 507994224, 336998086, 139595265, 391759348, 1482487, 26271963, 56984961, 3632965, 369061983, 118356293, 21584434, 675033468, 284011293, 950107899, 70625335, 194067151, 902941085, 257664506, 268160767, 37401250, 560602, 80854944, 621620813, 106948180, 230373201, 86565993, 304032286, 222076006, 102781364, 549671042, 62716989, 33580605, 79973768, 137606166, 138793916, 709036799, 773949452, 36574607, 79392093, 318783101, 416632547, 368407001, 329623350, 368040250, 106727201, 204160816, 341011494, 133177214, 236367106};
    vector<int> ya = {160230718, 213890558, 29350662, 28819909, 567335636, 178902426, 87718991, 289067684, 110427864, 456302416, 39202307, 52837520, 26155327, 1755869, 554178791, 34651127, 217057191, 144226411, 108145919, 719443991, 68519636, 488809003, 65452668, 437792976, 278578390, 339148218, 407416478, 299360307, 760660885, 437916928, 146010992, 236016597, 453544876, 186503856, 486795288, 596998738, 536702744, 480267264, 700158560, 186907370, 101317024, 123784887, 6547003, 479921897, 131197644, 82158431, 248738958, 899341599, 304127593, 55420223};
    vector<int> xb = {625830472, 614736655, 56836707, 286757300, 81523793, 202260013, 209093972, 346416391, 4479932, 577503081, 398726071, 466157377, 647338822, 52914674, 625353717, 19821201, 119739949, 462496450, 2016460, 144164799, 113201923, 126074163, 695151441, 523737206, 97992691, 37220384, 30409811, 177881381, 37008727, 41137820, 759012288, 238569517, 211867157, 145362091, 4720876, 43389950, 222812353, 125132798, 2979755, 391478473, 850491801, 627063956, 1223086, 408728204, 160425733, 442028150, 7265466, 486765627, 91426890, 36926954};
    vector<int> yb = {59566951, 491568954, 390261564, 538891127, 28997471, 64843687, 59830570, 153053005, 289465795, 163043421, 134701417, 103149473, 67276504, 811734064, 103267847, 91928513, 331593639, 51236636, 102268791, 197298428, 455242350, 450547475, 103022602, 427333813, 333252089, 149282539, 167789765, 246997644, 33105629, 294800337, 324321873, 531393060, 893022979, 196494982, 272671711, 37758573, 113911119, 555484860, 167961329, 128613000, 278539408, 584626106, 58607284, 359859277, 106573310, 364182573, 66764923, 2273648, 230015491, 28783316};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 33698381;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> xa = {75849164, 57952125, 58283405, 74775413, 90723404, 49594800, 4431732, 95344076, 19660216, 60753949, 2188325, 11185284, 26360485, 14013588, 13287669, 12682112, 29811770, 45002616, 66240863, 56028374, 50743889, 24095524, 24469007, 15047537, 29187980, 44578260, 86937480, 82487247, 35876430, 37041591, 10604751, 65393667, 5629054, 77937940, 48287613, 51312052, 86076136, 81274625, 86924352, 96314188, 52907884, 27576125, 78147547, 51708858, 40569500, 3602120, 86071586, 17001937, 11680530, 8644102};
    vector<int> ya = {61476431, 86959511, 69743656, 59316080, 82143328, 81950006, 10439470, 16093219, 81323990, 43082734, 16192392, 31689663, 86980039, 10471601, 6455773, 87142601, 59783773, 12805686, 80231097, 39074889, 25075173, 21341143, 54482347, 48432396, 26632561, 15098899, 16288936, 9701427, 12916726, 73870284, 36924423, 95438723, 21873615, 29885689, 1470403, 33431539, 72271112, 70395622, 70891724, 50291377, 30477156, 39029247, 38204726, 2686717, 32764712, 52589177, 27781720, 58228780, 12610845, 73483738};
    vector<int> xb = {5849118, 25690311, 21918818, 97818875, 23270103, 17732297, 89256423, 20398621, 74026488, 29110324, 57019043, 4747953, 64578504, 87610109, 93846799, 91686990, 43530386, 3439276, 24462409, 6573744, 91373894, 6524925, 57922690, 43600963, 4301016, 11798065, 65405681, 22762620, 82885679, 55348302, 24370333, 39124480, 70117415, 24674762, 16655223, 78517706, 5034031, 32091748, 43770270, 33530394, 42730700, 60886780, 6998104, 67202129, 6809749, 75902742, 59953984, 76992646, 74329013, 62431355};
    vector<int> yb = {87505346, 8275652, 99542588, 52620743, 23342689, 21618441, 53060766, 1571564, 27780706, 60531768, 93510050, 23453837, 14916734, 6999800, 5676820, 94082965, 12311780, 7764339, 70973396, 13611982, 87134388, 18175737, 87536501, 1796842, 43039861, 38058074, 77991518, 14870253, 11236785, 65027199, 19125308, 39696224, 18675508, 1723474, 48526959, 20271024, 22580096, 29373089, 76144328, 61479757, 9641163, 96945615, 646386, 26727212, 84851551, 55177971, 19721782, 89768789, 20433961, 93739095};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 5234760;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> xa = {8195, 38463, 62522, 95270, 96611, 100651, 120332, 135400, 139179, 159774, 179843, 202880, 234524, 237459, 268160, 280427, 303853, 318946, 326917, 339067, 354065, 373741, 374584, 390878, 404527, 418620, 427024, 431373, 433609, 439430, 464818, 487341, 516753, 541099, 551556, 555884, 586484, 609829, 629739, 642232, 666062, 667869, 680119, 706683, 736849, 737911, 762950, 785591, 787995, 799502};
    vector<int> ya = {67, 26900, 56183, 59221, 83035, 87181, 104701, 119391, 149277, 167328, 170997, 196962, 222221, 253147, 256346, 260452, 278566, 288553, 313052, 326681, 347675, 351506, 358670, 387388, 415296, 417516, 434900, 457822, 469298, 499973, 500984, 510495, 513054, 543405, 560369, 577496, 581061, 588609, 610776, 612534, 639783, 643095, 675474, 682825, 695016, 702057, 727078, 746105, 751191, 771102};
    vector<int> xb = {15141, 32985, 33559, 65146, 96216, 104946, 130301, 148028, 175735, 181986, 203140, 219804, 240821, 252813, 267792, 300106, 323050, 324008, 324176, 342491, 370058, 386388, 403049, 421172, 442057, 471594, 489435, 517365, 520314, 545721, 558093, 575688, 603148, 605290, 608139, 612258, 630471, 648672, 661750, 684795, 707634, 716227, 736932, 760300, 768169, 795129, 816622, 839495, 858917, 872273};
    vector<int> yb = {9183, 34375, 44517, 50771, 82468, 85185, 110798, 140546, 149898, 153645, 171755, 189183, 189260, 221875, 235566, 255280, 262788, 286113, 317656, 325196, 342169, 356382, 379234, 389926, 400480, 425420, 439955, 441960, 465638, 471131, 475331, 478908, 506099, 519948, 541018, 563820, 588858, 597799, 628081, 660329, 680758, 686169, 715947, 743110, 754358, 763914, 781116, 795302, 823332, 847521};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 8730;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> xa = {41, 8467, 6334, 6500, 9169, 5724, 1478, 9358, 6962, 4464, 5705, 8145, 3281, 6827, 9961, 491, 2995, 1942, 4827, 5436, 2391, 4604, 3902, 153, 292, 2382, 7421, 8716, 9718, 9895, 5447, 1726, 4771, 1538, 1869, 9912, 5667, 6299, 7035, 9894, 8703, 3811, 1322, 333, 7673, 4664, 5141, 7711, 8253, 6868};
    vector<int> ya = {5547, 7644, 2662, 2757, 37, 2859, 8723, 9741, 7529, 778, 2316, 3035, 2190, 1842, 288, 106, 9040, 8942, 9264, 2648, 7446, 3805, 5890, 6729, 4370, 5350, 5006, 1101, 4393, 3548, 9629, 2623, 4084, 9954, 8756, 1840, 4966, 7376, 3931, 6308, 6944, 2439, 4626, 1323, 5537, 1538, 6118, 2082, 2929, 6541};
    vector<int> xb = {4833, 1115, 4639, 9658, 2704, 9930, 3977, 2306, 1673, 2386, 5021, 8745, 6924, 9072, 6270, 5829, 6777, 5573, 5097, 6512, 3986, 3290, 9161, 8636, 2355, 4767, 3655, 5574, 4031, 2052, 7350, 1150, 6941, 1724, 3966, 3430, 1107, 191, 8007, 1337, 5457, 2287, 7753, 383, 4945, 8909, 2209, 9758, 4221, 8588};
    vector<int> yb = {6422, 4946, 7506, 3030, 6413, 9168, 900, 2591, 8762, 1655, 7410, 6359, 7624, 537, 1548, 6483, 7595, 4041, 3602, 4350, 291, 836, 9374, 1020, 4596, 4021, 7348, 3199, 9668, 4484, 8281, 4734, 53, 1999, 6418, 7938, 6900, 3788, 8127, 467, 3728, 4893, 4648, 2483, 7807, 2421, 4310, 6617, 2813, 9514};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 585;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> xa = {41, 18467, 6334, 26500, 19169, 15724, 11478, 29358, 26962, 24464, 5705, 28145, 23281, 16827, 9961, 491, 2995, 11942, 4827, 5436, 32391, 14604, 3902, 153, 292, 12382, 17421, 18716, 19718, 19895, 5447, 21726, 14771, 11538, 1869, 19912, 25667, 26299, 17035, 9894, 28703, 23811, 31322, 30333, 17673, 4664, 15141, 7711, 28253, 6868};
    vector<int> ya = {25547, 27644, 32662, 32757, 20037, 12859, 8723, 9741, 27529, 778, 12316, 3035, 22190, 1842, 288, 30106, 9040, 8942, 19264, 22648, 27446, 23805, 15890, 6729, 24370, 15350, 15006, 31101, 24393, 3548, 19629, 12623, 24084, 19954, 18756, 11840, 4966, 7376, 13931, 26308, 16944, 32439, 24626, 11323, 5537, 21538, 16118, 2082, 22929, 16541};
    vector<int> xb = {4833, 31115, 4639, 29658, 22704, 9930, 13977, 2306, 31673, 22386, 5021, 28745, 26924, 19072, 6270, 5829, 26777, 15573, 5097, 16512, 23986, 13290, 9161, 18636, 22355, 24767, 23655, 15574, 4031, 12052, 27350, 1150, 16941, 21724, 13966, 3430, 31107, 30191, 18007, 11337, 15457, 12287, 27753, 10383, 14945, 8909, 32209, 9758, 24221, 18588};
    vector<int> yb = {6422, 24946, 27506, 13030, 16413, 29168, 900, 32591, 18762, 1655, 17410, 6359, 27624, 20537, 21548, 6483, 27595, 4041, 3602, 24350, 10291, 30836, 9374, 11020, 4596, 24021, 27348, 23199, 19668, 24484, 8281, 4734, 53, 1999, 26418, 27938, 6900, 3788, 18127, 467, 3728, 14893, 24648, 22483, 17807, 2421, 14310, 6617, 22813, 9514};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 2133;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> xa = {0, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000, 21000, 22000, 23000, 24000, 25000, 26000, 27000, 28000, 29000, 30000, 31000, 32000, 33000, 34000, 35000, 36000, 37000, 38000, 39000, 40000, 41000, 42000, 43000, 44000, 45000, 46000, 47000, 48000, 10};
    vector<int> ya = {0, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000, 21000, 22000, 23000, 24000, 25000, 26000, 27000, 28000, 29000, 30000, 31000, 32000, 33000, 34000, 35000, 36000, 37000, 38000, 39000, 40000, 41000, 42000, 43000, 44000, 45000, 46000, 47000, 48000, 10};
    vector<int> xb = {0, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000, 21000, 22000, 23000, 24000, 25000, 26000, 27000, 28000, 29000, 30000, 31000, 32000, 33000, 34000, 35000, 36000, 37000, 38000, 39000, 40000, 41000, 42000, 43000, 44000, 45000, 46000, 47000, 48000, 12};
    vector<int> yb = {0, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000, 21000, 22000, 23000, 24000, 25000, 26000, 27000, 28000, 29000, 30000, 31000, 32000, 33000, 34000, 35000, 36000, 37000, 38000, 39000, 40000, 41000, 42000, 43000, 44000, 45000, 46000, 47000, 48000, 12};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> xa = {460288319, 779682586, 57549982, 892491035, 855980632, 39873201, 564204779, 40797169, 996017294, 793397316, 178863385, 815429399, 986325123, 738879415, 445840859, 881687895, 311307452, 426849377, 256767017, 817927291, 404698207, 460498577, 127010635, 730964706, 769892278, 794829316, 200250021, 464490039, 993204685, 930249611, 151261182, 657447719, 845965156, 799233336, 355065638, 53124524, 459453728, 400358200, 328695600, 216329975, 601443522, 296449957, 394750273, 751289667, 442495276, 631252002, 354929146, 493480072, 81865111, 966820394};
    vector<int> ya = {700258555, 768611547, 23182312, 703265792, 122503807, 329858657, 992888856, 902521388, 997217570, 595647214, 249631153, 658662853, 910369085, 865136942, 512805590, 127768967, 381099470, 138281814, 863344115, 344982872, 33906353, 637406307, 777498936, 463011050, 25067728, 579454321, 155180179, 518714274, 927324589, 416560471, 554840777, 746008583, 274140415, 607072850, 331279055, 865222919, 848834210, 543698364, 348393101, 100425865, 274208821, 866950453, 942412728, 844810671, 733444032, 273574507, 548243114, 382075282, 196204939, 34747516};
    vector<int> xb = {54225977, 777144615, 607737925, 193832014, 321051841, 779879239, 866364788, 953325227, 613549825, 986133293, 178672498, 44508670, 117509241, 973341406, 338841336, 267846265, 602584410, 721507992, 50735787, 30250953, 76918304, 600772458, 117011272, 749973757, 445533394, 467012319, 874469996, 882646156, 373749207, 653108693, 935202302, 710366318, 221521522, 12835437, 865919037, 516168808, 313276634, 749673754, 361734756, 932790885, 355272691, 730530561, 982873797, 204245127, 616891046, 864189983, 4650283, 937642301, 387034552, 142010052};
    vector<int> yb = {819822075, 24258334, 907008183, 658748664, 584541773, 538398539, 927552505, 242689766, 291850643, 847114095, 553822930, 104085827, 726423399, 965977934, 91727563, 99107951, 353266151, 541597667, 131547004, 594223181, 654909489, 705462653, 582093325, 814290532, 809182289, 244406740, 464556657, 671864130, 363304843, 952081259, 182749677, 268390922, 799048311, 565037010, 965963644, 74536582, 950884204, 543555719, 469655036, 879117090, 585560113, 847096429, 802304582, 12770098, 469619244, 302675677, 976217038, 914416981, 945807374, 336879059};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 53342408;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> xa = {10, 20, 9, 19};
    vector<int> ya = {10, 11, 7, 6};
    vector<int> xb = {20, 10, 11, 21};
    vector<int> yb = {10, 11, 7, 6};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> xa = {49747009, 71829466, 59140498, 40957216, 14561920, 45728797, 14244193, 91169590, 32677798, 89707229, 68563253, 11243491, 21688439, 29498613, 48020049, 195212, 41684078, 60384073, 79405123, 90164005, 874501, 60765589, 43872979, 33169009, 2385034, 34470468, 51915775, 58484871, 10417900, 58144047, 53855730, 5453572, 24393998, 61737689, 4365212, 77428803, 27397263, 28136879, 31178284, 70929638, 3105191, 28916320, 50114782, 67215689, 51509342, 69429392, 54632574, 90623702, 26522124, 81727605};
    vector<int> ya = {64121724, 44546939, 35920308, 45285045, 87217388, 63808143, 92155949, 74387372, 29238109, 40810963, 61403441, 48382139, 1773838, 91129533, 65133440, 9753942, 56672647, 75475723, 87947278, 22844257, 76965409, 96177598, 51997600, 85343550, 84601404, 29693129, 84645164, 87307943, 46976202, 37657022, 85423011, 36822425, 72403017, 41321711, 59956559, 21478080, 41577317, 26021557, 95682418, 45131932, 63755711, 79036365, 20143345, 4333940, 8279710, 69417981, 85288158, 7696372, 20012224, 30810660};
    vector<int> xb = {21738653, 5465444, 20028631, 57177455, 60813038, 74598711, 64982457, 72456090, 39880424, 58837575, 62829637, 23606043, 94799820, 6417831, 15375237, 18404041, 42570026, 16932188, 54051141, 44929620, 26899447, 48291457, 79151136, 94145973, 1376491, 55167004, 47480683, 61935687, 58026767, 9391982, 14548150, 50938962, 3039046, 2213301, 3303838, 4442477, 94767056, 28560054, 98391926, 20767339, 14946988, 24393470, 37895490, 31323508, 36926473, 70203387, 60609033, 18367059, 16311141, 25089659};
    vector<int> yb = {71817735, 27009972, 64799494, 97770618, 48196456, 88795038, 69333527, 53910006, 3152753, 6843398, 56743540, 80831664, 52624387, 2772257, 43482372, 6508709, 8487524, 30144315, 74874226, 13682917, 19363276, 49073152, 12709994, 68554920, 60727115, 7364884, 26287150, 400475, 13550190, 29737693, 27119186, 27886443, 59383614, 86060647, 16015084, 2239862, 75100516, 14949731, 86781363, 88641260, 3146567, 89857165, 71575540, 35263264, 55141838, 65378749, 68659934, 16220691, 95110024, 43640666};
    ColorfulDecoration* pObj = new ColorfulDecoration();
    clock_t start = clock();
    int result = pObj->getMaximum(xa, ya, xb, yb);
    clock_t end = clock();
    delete pObj;
    int expected = 6009333;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13336196&rd=14149&pm=10739
********************************************************************************
#define KASE 0 
#define _CRT_SECURE_NO_DEPRECATE 
 
#include <cstdio> 
#include <sstream> 
#include <iostream> 
#include <algorithm> 
#include <cassert> 
#include <string> 
#include <vector> 
#include <cmath> 
#include <queue> 
#include <map> 
#include <set> 
 
using namespace std; 
typedef long long ll; 
 
#define EPS 1e-10 
#define REP(t, n) for(int t=0; t<(int)(n); ++t) 
#define FOR(t, x, y) for(int t=x; t<(int)(y); ++t) 
 
#define all(v) (v).begin(), (v).end() 
#define CLR(v) memset(v, 0, sizeof(v)) 
#define sz size() 
 
class ColorfulDecoration 
{ 
public: 
  int n; 
  vector<int> xa,ya,xb,yb; 
 
  bool w[100][100]; 
#define A(t) (2*(t)) 
#define B(t) (2*(t)+1) 
  bool conflict(long long xa, long long ya, long long xb, long long yb, int L) 
  { 
    long long Ax1, Ay1, Ax2, Ay2; 
    long long Bx1, By1, Bx2, By2; 
     
    Ax1 = xa * 2 - L; Ay1 = ya * 2 - L; 
    Ax2 = xa * 2 + L; Ay2 = ya * 2 + L; 
    Bx1 = xb * 2 - L; By1 = yb * 2 - L; 
    Bx2 = xb * 2 + L; By2 = yb * 2 + L; 
     
    return (Ax2 > Bx1) && (Ax1 < Bx2) && (Ay2 > By1) && (Ay1 < By2) ; 
  } 
  void sayConflict(int u, int v) 
  { 
    // u => ~v 
    // v => ~u 
    w[u][v^1] = true; 
    w[v][u^1] = true; 
  } 
  bool able(int L) 
  { 
    int N = 2*n; 
    memset(w, 0, sizeof(w)); 
    REP(i, n) REP(j, n) if(i!=j) 
    { 
      if( conflict(xa[i], ya[i], xa[j], ya[j], L) ) 
        sayConflict(A(i), A(j)); 
      if( conflict(xa[i], ya[i], xb[j], yb[j], L) ) 
        sayConflict(A(i), B(j)); 
      if( conflict(xb[i], yb[i], xa[j], ya[j], L) ) 
        sayConflict(B(i), A(j)); 
      if( conflict(xb[i], yb[i], xb[j], yb[j], L) ) 
        sayConflict(B(i), B(j)); 
    } 
    REP(k, N) REP(i, N) REP(j, N) { 
      if(w[i][k] && w[k][j]) 
        w[i][j] = true; 
    } 
    REP(i, N) 
    { 
      if(w[i][i^1] && w[i^1][i]) 
        return false; 
    } 
    return true; 
  } 
  int getMaximum(vector <int> xa, vector <int> ya, vector <int> xb, vector <int> yb) 
  { 
    this->xa = xa; this->xb = xb; 
    this->ya = ya; this->yb = yb; 
    n = xa.size(); 
 
    int l = 0, r = 1000000000; 
    int ans  = 0; 
 
    while(l <= r) 
    { 
      int mid =(l+r) / 2; 
      if(able(mid)) 
        ans = mid, l = mid + 1; 
      else r = mid - 1; 
    } 
    return ans; 
  } 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester (Modified 2009)
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/