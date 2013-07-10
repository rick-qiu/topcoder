/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11781
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

class CasketOfStar {
public:
    int maxEnergy(vector<int> weight);
};

int CasketOfStar::maxEnergy(vector<int> weight) {
    int ret;
    return ret;
}


int test0() {
    vector<int> weight = {1, 2, 3, 4};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> weight = {100, 2, 1, 3, 100};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10400;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> weight = {2, 2, 7, 6, 90, 5, 9};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1818;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> weight = {477, 744, 474, 777, 447, 747, 777, 474};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2937051;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> weight = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> weight = {54, 64, 24, 24, 72, 33, 30, 40, 22, 17, 40, 21, 41, 64, 8, 46, 18, 65, 48, 32, 52, 54, 75, 5, 18, 37, 41, 22, 68, 42, 55};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 96202;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> weight = {428, 507, 566, 692, 555, 344, 618, 218, 674, 697, 332, 433, 240, 453, 694, 264, 695, 263, 264, 351, 700, 691, 354, 560, 258, 181, 599, 477, 368, 509, 518, 401, 485, 323, 671, 201, 428};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 12714780;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> weight = {134, 333, 377, 148, 233, 155};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 237815;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> weight = {575, 549, 601, 593, 590, 585, 612, 605, 556, 619, 575, 649, 547, 642};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4627648;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> weight = {671, 547, 393, 594, 655, 704, 376, 320, 711, 671, 500, 265, 638, 457, 468, 549, 485, 695, 252, 655, 262, 670, 450, 310, 716, 497, 619, 496, 301, 642, 332, 350, 675, 363, 253};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 13367148;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> weight = {365, 325, 353, 337, 309, 358, 317, 349, 322, 325, 334, 296, 352, 349, 318, 354, 325, 371, 338, 325, 306};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2379637;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> weight = {611, 213, 619, 592, 216, 558, 255, 461, 207, 663, 577, 679, 198, 632, 521, 416, 420, 651, 654, 620, 472, 507};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 7490179;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> weight = {272, 223, 226, 269, 290, 303, 277, 274};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 457520;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> weight = {95, 221, 734, 362, 713, 352, 341, 520, 280, 260, 314, 479, 355};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2870087;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> weight = {379, 483, 521, 400, 506, 587, 486, 248, 390, 311, 440, 465, 405, 441, 375, 533, 452, 277, 475, 460, 572, 557, 489, 259, 486, 445, 497, 447, 283, 289, 503, 400, 559, 372};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 8269952;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> weight = {98, 98, 87, 88, 93, 85, 83, 83, 90, 88, 88, 82, 91, 91, 96, 89, 93, 87, 87, 84, 87, 85, 85, 92, 92, 90, 82, 94, 85, 88, 92, 84, 94, 87, 89, 85, 96, 85, 98, 87, 95};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 343128;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> weight = {569, 750, 216, 689, 410, 672, 401, 198, 270, 727, 171, 187, 482, 139, 94, 211, 404, 693, 105, 105, 309, 237, 668, 549, 540, 573, 466, 121, 160, 408, 399, 270, 595, 370, 217, 132, 204, 115};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10674721;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> weight = {258, 347, 225, 302};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 182710;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> weight = {804, 789, 804, 773, 806, 804, 763, 754, 778, 766, 799, 753, 779, 768, 776, 745, 772, 748, 767, 787, 800, 782, 752, 758, 786, 800, 768, 757, 775, 748, 800, 780, 793, 752, 803, 791, 774, 774, 780, 788, 800, 772, 748};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 25775864;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> weight = {944, 954, 955, 951, 937, 972, 961, 950, 943, 952, 937, 980, 972, 943};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 11149064;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> weight = {760, 691, 673, 844, 829, 499, 518, 674};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3355092;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> weight = {164, 289, 209, 354, 226, 308, 357, 477, 191, 277, 551, 308, 188, 492, 420, 632, 712, 238, 303, 263, 177, 723, 671, 234, 496, 162, 501, 550, 265, 284, 449, 295, 257, 607};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 8686576;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> weight = {849, 770, 923, 363, 904, 492, 796, 606, 594, 682, 591, 746, 325, 270, 613, 300, 577, 514, 423, 308, 612, 855, 627, 417, 587};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 12782043;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> weight = {796, 940, 932, 758, 829, 842, 820, 817, 884, 838, 819, 935, 910, 766, 750, 804, 923, 888, 775, 804, 933, 869, 838, 851, 787, 928, 771};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 20010894;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> weight = {419, 664, 509, 696, 534, 230, 799, 236, 405, 251, 329, 775, 464, 447, 829, 281, 551, 391, 250, 427, 488, 248, 221, 607, 614, 827, 630, 821, 771, 380, 572, 307, 824, 446, 412, 583, 697, 259, 314, 701, 347, 415, 675, 606, 593};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 20153330;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> weight = {442, 443, 783, 936, 675, 520, 937, 611, 413, 771, 634, 867, 691, 804, 655, 373, 464, 719, 713};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10401350;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> weight = {902, 961, 927, 825, 954};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2661660;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> weight = {687, 480, 542, 589, 683, 668, 630, 508, 553, 586, 462, 676, 516, 672, 500, 431, 432, 686, 551, 490, 690, 655, 677, 648, 529, 638, 632, 682, 569, 655, 596, 511, 535, 657, 692, 697, 655, 518};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 15471373;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> weight = {114, 219, 705, 370, 715, 431, 359, 438, 702, 718, 319, 161, 569, 715, 109, 629, 492, 196, 415, 79, 401};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 6527401;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> weight = {726, 380, 450, 437, 491, 687, 458, 417, 689, 508, 500, 669, 447, 366, 675, 580, 768, 386, 710, 43, 523, 428, 841, 698, 448, 112, 182, 594, 214, 161, 406, 363, 577, 641, 169, 409, 162, 754, 223, 710, 496, 597, 247, 593};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 18204371;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> weight = {381, 403, 421, 478, 403, 325, 300, 306, 357, 363, 425, 366, 342, 359, 391, 485, 384, 448, 380, 450, 304, 409, 306, 476, 433, 356, 420, 395, 398, 339, 460, 378, 466, 335, 379, 382, 338, 301, 456, 358, 302, 478, 428, 340, 467};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 8415943;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> weight = {318, 309, 337, 296, 294, 317, 304, 294, 298, 296, 298, 328, 337, 316, 338, 304, 339, 334, 299, 337, 299, 312, 334, 330, 322, 333, 331, 288, 336, 295, 331, 285, 301, 289, 332};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3588902;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> weight = {546, 577, 686, 298, 340, 683, 597, 323, 474, 608, 511, 392, 563, 433, 479, 479, 568, 408, 531, 344, 451, 379, 301, 554, 530, 363, 311, 430, 669, 417, 323, 526, 593, 672};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10906402;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> weight = {511, 495, 522, 582, 270, 644, 371, 505, 306, 291, 380, 305, 410, 536};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3392788;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> weight = {668, 765, 785, 747, 755, 660, 716, 776, 761, 723, 667, 742, 618, 689, 716, 754, 726, 705, 750, 730, 650, 694, 676};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 11668747;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> weight = {678, 699, 673, 693, 703, 699, 705, 703, 670, 664, 668, 694, 700, 687, 701, 697, 668, 690, 682, 696, 681, 700, 699, 678, 663, 689, 678, 700};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 12640500;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> weight = {668, 420, 718, 696, 202, 119, 192, 227, 119, 331, 466, 442, 238, 795, 292, 575, 218};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4855507;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> weight = {304, 307, 313, 307, 314, 300, 305, 313, 299, 297, 298, 309, 300, 314, 311, 300, 310, 302, 300, 295, 296, 312, 304, 309, 314, 301, 301, 310, 304, 308, 312, 313, 303, 305, 310, 298, 308, 314, 311, 305, 298, 299, 303, 307, 296};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4138369;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> weight = {690, 642, 626};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 431940;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> weight = {268, 103, 87};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 23316;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> weight = {21, 273, 281, 263, 78, 417, 459, 386, 537, 533, 130, 430, 46, 210, 379, 87, 169, 255, 381, 341, 12, 540, 26, 165, 340, 21, 341, 410, 49, 29, 571, 165, 274, 509, 567, 147, 393, 396, 513, 350, 338, 155, 135, 159, 226, 473, 159, 346, 117, 205};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 8671102;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> weight = {331, 339, 232, 236, 317, 275, 328, 311, 327, 329, 310, 250, 315, 223, 229, 299, 239, 284, 218, 303, 245, 271, 212, 286, 226, 269, 255, 310, 314, 250, 241, 272, 219, 284, 276, 249, 321, 334, 248, 320, 295, 293, 278, 263, 326, 248, 233, 310, 292, 319};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4639980;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> weight = {947, 948, 918, 887, 929, 840, 826, 817, 803, 860, 928, 893, 821, 824, 909, 804, 876, 787, 810, 865, 914, 860, 823, 911, 863, 837, 819, 846, 780, 840, 940, 828};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 24439378;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> weight = {68, 927, 215, 308, 539, 276, 162, 355, 548, 176, 239, 546, 517, 721, 449, 765, 70, 342, 844, 184, 532, 66, 484, 325, 152, 428, 457, 685, 141, 274, 579, 380, 292, 304, 465, 173, 131, 761, 181, 440, 148, 220, 171, 322, 165, 219, 490, 435, 466, 874};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 18407053;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> weight = {213, 217, 194, 196, 222, 199, 212, 192, 226, 202, 196, 223, 207, 227, 190, 194, 219, 219, 217, 188, 196, 209, 223, 201, 219, 223, 193, 220, 201, 223, 215, 211, 225, 208, 195, 190, 217};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1690917;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> weight = {782, 811, 762, 779, 874, 692, 880, 808, 674, 849, 691, 733, 860, 776, 837, 766, 675, 745, 848, 744, 778, 795, 852, 844, 792, 728, 876, 848, 861, 674, 834, 841, 885, 734, 864, 717, 707, 672, 737, 785, 711, 863, 686};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 29006896;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> weight = {621, 445, 362, 659, 688, 395, 806, 463, 566, 638, 631, 774, 439, 766, 476, 652, 740, 322, 534, 796, 388, 511, 343};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10375558;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> weight = {457, 470, 453, 455, 452, 464, 450, 449, 449, 458, 448, 467, 466, 451, 469, 450, 451, 466, 459, 451, 466, 461, 452, 460, 457, 465, 453, 470, 464, 453, 468, 448, 462, 451, 455, 465, 448, 463, 448, 449, 468, 458, 463, 463, 459, 451, 451, 448, 448, 462};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10358879;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> weight = {837, 825, 519, 867, 811, 789, 674, 904, 801, 791, 874, 899, 991, 897, 837, 700, 808, 893, 711, 912, 663, 586, 689, 911, 899, 651, 858, 514, 951, 987, 598, 668, 695, 913, 987};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 27011685;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> weight = {226, 252, 353, 315, 307, 127, 483, 58, 180};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 829419;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> weight = {267, 462, 479, 705, 314, 283, 713, 452, 743, 827, 439, 208, 524, 214, 785, 179, 288, 460, 213, 183, 335, 391, 158, 783, 694, 819, 777, 670, 804, 508};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 12201391;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> weight = {348, 612, 561, 351, 519, 533, 384, 642, 747, 595, 696, 381, 470, 509, 697, 560, 721, 629, 624, 634, 513, 378, 410, 404, 598, 513, 519, 669, 558, 438, 722, 403, 435, 623, 425, 359, 677};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 14487221;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> weight = {693, 674, 663, 676, 683, 680, 703, 667, 678, 713};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3879070;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> weight = {304, 342, 318, 342, 311, 331, 296, 343, 345, 329, 346, 330, 298, 300, 310, 359, 345, 318, 350, 323, 340, 333, 302, 343, 313, 338, 341, 347, 348, 336, 307, 302, 327, 351, 342, 320, 356, 347, 347, 355, 318};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4646739;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> weight = {441, 759, 468};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 206388;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> weight = {6, 8, 9, 9, 5, 6};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 216;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> weight = {3, 2, 5, 3, 3, 4, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> weight = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 208;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> weight = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> weight = {1, 2, 2, 1, 2, 1, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> weight = {8, 5, 5, 5, 5, 10, 8, 5, 5, 7, 10, 7, 10, 10};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 890;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> weight = {5, 7, 6, 7, 5, 5, 7, 4, 3, 5, 3, 5, 6, 3, 3, 5, 4, 3, 3, 5, 5, 5, 6, 3, 3, 4, 5, 7, 7, 3, 7, 5, 4, 7, 3, 3, 3, 7, 6};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1344;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> weight = {8, 8, 6, 7, 7, 7, 7, 8, 8, 7, 7, 6, 8, 8, 7, 8, 8, 8, 8, 7};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1096;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> weight = {3, 3, 4, 5, 5, 3, 3, 5, 5, 4, 4, 5, 3, 3, 3, 4, 4, 5};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 330;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> weight = {4, 4, 5, 5, 5, 4, 5, 4, 4, 4, 4, 4, 5, 4, 4, 5, 4, 5, 4, 4, 5, 5, 4, 5, 5, 4, 5, 5, 5, 4, 5, 4, 5, 4, 5, 5, 5, 4, 5, 4, 4, 5, 5, 5, 4, 4, 5};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1075;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> weight = {10, 10, 9, 7, 6, 5, 9, 9, 3, 7, 3, 6, 10, 3, 3, 8, 9, 8, 6, 4, 6, 4, 9, 10, 4, 8, 7, 6, 4, 5, 7, 6, 5, 7, 5, 4, 7, 10, 8, 6, 4, 3, 4, 4, 8, 8, 9, 10, 10};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3310;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> weight = {2, 4, 1, 4, 2, 4, 4, 1, 1, 3, 3, 2, 1, 3, 3, 2, 1, 2, 1, 1, 3, 3, 1, 2};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 214;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> weight = {1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> weight = {8, 8, 8, 8, 9, 9, 8, 8, 9, 8, 9, 9, 9, 8, 8, 9, 9, 9, 8, 9, 8, 9, 9, 9, 8, 8, 8, 9, 9, 9, 9, 8, 8, 8, 9, 8, 9, 9, 9};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2907;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> weight = {4, 6, 4, 7};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> weight = {4, 6, 8, 7, 8, 4, 6, 7, 4, 4, 7, 7, 7, 7, 5, 6, 7, 5, 8, 7, 7, 4, 8, 6, 4, 4, 4, 5};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1276;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> weight = {4, 1, 3, 5, 2, 3, 4, 6, 3, 8, 7, 3, 5, 1, 5, 1, 7, 3, 5, 6, 2, 3, 7, 2, 5, 6, 6, 5, 8, 8, 6, 2, 4, 2, 7, 2, 1, 2, 7};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1422;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> weight = {8, 8, 8, 9, 8, 9, 9, 8, 9, 9, 9, 8, 8, 9, 8, 8, 9, 9, 9, 8, 9, 9, 8, 8, 8, 9, 8, 8, 8, 8, 9, 9, 9, 8, 9, 9, 9, 9, 9, 9};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2988;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> weight = {8, 9, 9, 7, 6, 7, 7, 7, 9, 7, 8, 6, 7, 9, 8, 7, 8, 8, 6, 8, 9, 7, 6, 7, 6, 9, 9, 6, 7, 7, 8, 6, 8, 6, 7};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2278;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> weight = {4, 2, 2, 4, 3, 2, 2, 2, 2, 3, 4, 2, 3, 3, 3};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> weight = {982, 994, 945, 947, 983, 982, 964, 939, 992, 995, 992, 958, 993, 976, 988, 975, 937, 956, 985, 949, 971, 965, 991, 993, 968, 995, 992, 954, 951, 956, 996, 938, 980, 971, 975, 948, 945, 974, 972, 981};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 36946840;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> weight = {917, 918, 940, 955, 988, 964, 945, 931, 930, 992, 930, 931, 997, 998, 957, 951, 968, 962, 996, 956, 987, 952, 943, 942, 984, 930, 922, 919, 920, 992, 953, 950, 965, 993, 940, 926, 947, 978, 921, 982};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 36321482;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> weight = {929, 969, 939, 988, 901, 956, 939, 955, 987, 988, 956, 929, 992, 965, 927, 935, 919, 916, 924, 902, 920, 916, 979, 975, 923, 944, 952, 936, 988, 918, 957, 915, 970, 919, 970, 952, 938, 907, 949, 905, 940, 906, 909, 915, 927};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 40227129;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> weight = {935, 930, 947, 951, 937, 953, 939, 956, 929, 943, 946, 944, 943, 943, 944, 952, 931, 928, 946, 944, 955, 950, 933, 954, 927, 956, 936, 954, 931, 945, 951, 925, 939, 927, 956, 928, 945, 935, 943, 957, 958};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 35341426;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> weight = {936, 934, 935, 936, 935, 934, 934, 935, 935, 934, 934, 934, 936, 934, 936, 934, 935, 936, 936, 936, 935, 934, 936, 935, 936, 936, 935, 935, 935, 936, 935, 935, 935, 936, 935, 935, 936, 934, 936, 934, 936, 936, 934, 934, 936, 935, 936, 934, 934};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 41153112;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> weight = {935, 942, 935, 942, 938, 937, 938, 942, 937, 936, 942, 941, 940, 940, 936, 940, 937, 940, 939, 935, 936, 936, 937, 940, 935, 940, 938, 935, 935, 935, 940, 938, 942, 940, 940, 939, 942, 936, 940, 942, 941, 941, 941, 941, 935};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 38039905;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> weight = {965, 966, 977, 957, 975, 964, 975, 975, 956, 973, 955, 970, 958, 955, 966, 977, 955, 973, 957, 959, 959, 975, 975, 975, 980, 965, 961, 971, 962, 974, 971, 976, 955, 965, 954, 963, 979, 975, 977, 980, 955, 954, 975, 976};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 39891356;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> weight = {920, 916, 920, 919, 918, 919, 918, 916, 919, 916, 920, 919, 920, 917, 917, 919, 916, 917, 916, 916, 920, 916, 920, 919, 920, 918, 919, 919, 917, 918, 920, 916, 917, 917, 919, 917, 916, 919, 917, 917, 917, 919, 917, 920, 917};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 36340013;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> weight = {924, 917, 919, 971, 954, 942, 947, 938, 965, 931, 956, 959, 939, 914, 956, 930, 944, 920, 952, 946, 941, 969, 946, 920, 915, 912, 967, 948, 925, 953, 954, 964, 940, 968, 905, 951, 909, 974, 915, 916, 905, 944, 910, 969};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 38627917;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> weight = {960, 940, 946, 966, 955, 948, 955, 948, 932, 945, 944, 941, 955, 955, 940, 932, 940, 945, 934, 943, 954, 927, 947, 940, 941, 944, 949, 954, 933, 950, 929, 933, 943, 934, 944, 941, 926, 941, 926, 945, 927};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 35483046;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> weight = {943, 943, 927, 940, 943, 932, 941, 930, 942, 931, 933, 942, 942, 941, 938, 933, 933, 934, 940, 926, 940, 932, 932, 941, 931, 933, 928, 942, 939, 927, 934, 934, 937, 933, 928, 939, 927, 935, 934, 935, 927, 927, 933, 925, 943, 930, 935, 929};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 40624654;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> weight = {973, 961, 978, 965, 974, 947, 978, 958, 966, 944, 953, 989, 994, 947, 983, 992, 993, 970, 951, 991, 994, 993, 956, 983, 962, 960, 995, 947, 975, 966, 967, 953, 971, 966, 990, 963, 990, 940, 970, 971, 980, 940, 956, 983};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 40709252;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> weight = {967, 964, 928, 968, 956, 951, 930, 953, 963, 969, 937, 939, 968, 947, 951, 959, 944, 942, 928, 971, 971, 938, 949, 953, 947, 937, 963, 928, 931, 922, 938, 943, 969, 967, 929, 935, 922, 955, 931, 936, 935, 941, 928, 947, 955, 967, 927, 970, 924};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 43360289;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> weight = {948, 915, 937, 930, 940, 924, 926, 914, 942, 945, 924, 938, 918, 917, 938, 923, 939, 941, 917, 941, 948, 949, 918, 944, 925, 933, 914, 922, 945, 941, 921, 918, 948, 927, 948, 926, 944, 947, 939, 929, 933, 949};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 35560589;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> weight = {971, 970, 970, 971, 971, 970, 970, 970, 970, 971, 971, 971, 970, 970, 971, 970, 970, 971, 970, 971, 971, 971, 971, 970, 971, 970, 971, 970, 971, 971, 971, 971, 970, 970, 971, 971, 971, 970, 971, 971, 971, 971, 971, 970, 971};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 40535366;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> weight = {929, 959, 929, 955, 924, 958, 949, 941, 914, 954, 939, 922, 952, 928, 956, 959, 951, 955, 919, 936, 922, 917, 926, 931, 919, 925, 932, 917, 946, 954, 949, 940, 959, 927, 951, 933, 919, 959, 944, 943, 924, 931};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 36139643;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> weight = {934, 938, 962, 971, 927, 928, 971, 953, 980, 957, 935, 967, 933, 985, 959, 929, 932, 987, 947, 947, 946, 991, 956, 988, 944, 947, 946, 947, 983, 978, 946, 975, 963, 968, 970, 929, 932, 976, 954, 963, 942, 926};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 37888144;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> weight = {929, 948, 945, 948, 921, 950, 931, 939, 950, 932, 917, 935, 952, 951, 961, 930, 951, 947, 959, 933, 945, 938, 947, 922, 942, 938, 928, 942, 917, 928, 933, 957, 924, 928, 961, 942, 939, 928, 934, 958, 935, 954, 960, 918, 947, 950, 951, 945, 947, 928};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 43439869;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> weight = {974, 974, 974, 974, 974, 973, 973, 974, 973, 973, 973, 973, 974, 974, 973, 974, 973, 974, 974, 973, 974, 974, 974, 973, 973, 974, 973, 973, 974, 973, 974, 974, 973, 974, 973, 974, 973, 974, 974, 974, 974};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 36992520;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> weight = {940, 929, 936, 935, 940, 932, 925, 933, 932, 924, 929, 931, 936, 934, 937, 942, 926, 927, 935, 935, 925, 923, 934, 923, 930, 934, 923, 928, 939, 931, 926, 941, 941, 928, 930, 942, 929, 937, 925, 928, 925};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 34255220;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> weight = {201, 841, 368, 221, 394, 175, 556, 322, 481, 813, 883, 304, 881, 188, 236, 150, 414, 764, 37, 68, 308, 217, 260, 366, 897, 176, 95, 735, 951, 182, 572, 540, 59, 146, 354, 989, 768, 438, 438, 792, 868, 833, 191, 917, 946, 24, 530, 187, 215, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 24144660;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> weight = {10, 7, 6, 2, 1, 10, 10, 7, 9, 4, 5, 9, 5, 10, 10, 3, 6, 6, 4, 4, 4, 8, 5, 4, 9, 1, 9, 9, 1, 7, 9, 2, 10, 9, 10, 8, 3, 3, 9, 3, 9, 10, 1, 8, 9, 2, 6, 9, 7, 2};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3693;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> weight = {589, 848, 314, 255, 905, 435, 607, 979, 749, 570, 474, 318, 264, 563, 235, 593, 263, 597, 190, 377, 333, 311, 100, 675, 960, 299, 154, 438, 303, 206, 855, 801, 7, 364, 956, 690, 821, 76, 835, 416, 661, 478, 738, 478, 593, 221};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 23704925;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> weight = {1, 5, 5, 5, 5, 5, 100, 1000, 100, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 27001;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> weight = {5, 100, 30, 1, 1, 1, 30, 100, 5};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 14485;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> weight = {212, 743, 379, 313, 343, 157, 571, 332, 482, 799, 879, 299, 890, 201, 237, 149, 409, 769, 41};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 6722359;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> weight = {963, 465, 706, 146, 282, 828, 962, 492};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3661104;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> weight = {3, 1, 2, 5, 4};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> weight = {5, 1, 7, 19, 12};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> weight = {809, 974, 742, 352, 372, 185, 750, 536, 642, 572, 544, 919, 985, 200, 877, 194, 371, 606, 99, 374, 347, 632, 145, 84, 825, 293, 159, 761, 330, 299, 584, 348, 767, 782, 917, 233, 327, 247, 695, 474, 796, 904, 440, 725, 303, 35, 566, 809, 937, 290};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 27454956;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> weight = {405, 454, 446, 125, 706, 941, 613, 406, 77};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2120542;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> weight = {1, 3, 8, 3, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> weight = {384, 887, 778, 916, 794, 336, 387, 493, 650, 422, 363, 28, 691, 60, 764, 927, 541, 427, 173, 737, 212, 369, 568, 430, 783, 531, 863, 124, 68, 136, 930, 803, 23, 59, 70, 168, 394, 457, 12, 43, 230, 374, 422, 920, 785, 538, 199, 325, 316, 371};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 22047735;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> weight = {4, 1, 5, 8, 5, 1, 4};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> weight = {5, 24, 10, 2, 3};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> weight = {5, 2, 2, 7, 9};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> weight = {13, 12, 51, 61, 12, 51, 81, 17, 15, 76, 41, 61, 62, 63, 23};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 44681;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> weight = {1, 3, 5, 3, 1, 2, 5, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> weight = {1, 15, 100, 7, 1, 14};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1724;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> weight = {1, 13, 100, 13, 1, 1, 100};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 12800;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> weight = {5, 2, 5, 20, 10};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> weight = {824, 840, 75, 511, 803, 323, 146, 923, 237, 834};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 5135928;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> weight = {45, 67, 89, 24, 78, 98, 456, 678, 267, 9, 5, 3, 6, 78, 234, 876, 23, 5, 67, 98, 13, 5, 89, 23, 68, 123, 34, 345, 56, 567, 78, 890, 98, 24, 76, 24, 97, 678, 34, 123, 839, 538, 4, 6, 89, 3, 4, 5};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 8076363;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> weight = {217, 914, 489, 289, 952, 873, 300, 938, 120, 199, 601, 770, 203, 278, 252, 215, 795, 734, 781, 523, 295, 389, 150, 928, 333, 42, 227, 962, 280, 924, 92, 925, 779, 239, 686, 466, 126, 344, 259, 645, 192, 875, 703, 370, 199, 241, 597, 423, 475, 334};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 26377278;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> weight = {10, 1, 1, 3, 10, 4, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> weight = {10, 20, 100, 60, 10};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2100;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> weight = {100, 1000, 100, 1, 99};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 118800;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> weight = {675, 76, 67, 466, 830};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 920025;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> weight = {92, 5, 3, 54, 93};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 13800;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> weight = {3, 4, 5, 4, 3};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> weight = {100, 1, 1, 3, 150};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 15400;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> weight = {634, 573, 844, 257, 76, 715, 327, 496, 354, 827, 321, 119, 517, 548, 935, 254, 667, 490, 302, 667, 518, 309, 227, 78, 866, 162, 880, 75, 426, 807, 407, 608, 939, 712, 411, 200, 859, 746, 516, 531, 703, 30, 295, 280, 901, 850, 312, 684, 465, 65};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 26367021;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> weight = {4, 3, 4, 1, 1, 10};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> weight = {5, 1, 1, 3, 4, 3};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> weight = {999, 348, 899, 928, 958, 234, 547, 574, 938, 478, 935, 297, 950, 968, 394, 928, 43, 910, 438, 991, 837, 947, 948, 273, 485, 938, 489, 958, 839, 948, 273, 129, 947, 832, 917, 247, 938, 172, 937, 172, 475, 55, 923, 473, 192, 387, 918, 736, 493, 999};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 39923657;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> weight = {6, 4, 2, 3, 5};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> weight = {310, 617, 936, 452, 601, 250, 520, 557, 799, 304, 225, 9, 845, 610, 990, 703, 196, 486, 94, 344, 524, 588, 315, 504, 449, 201, 459, 619, 581, 797, 799, 282, 590, 799, 10, 158, 473, 623, 539, 293, 39, 180, 191, 658, 959, 192, 816, 889, 157, 512};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 24717175;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> weight = {100, 3, 1, 2, 100};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10400;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> weight = {1, 2, 7, 4, 1, 2, 3};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> weight = {898, 875, 534, 126, 416, 31, 748, 161, 343, 202, 647, 306, 858, 87, 714, 282, 348, 26, 825, 178, 654, 190, 64, 1, 877, 883, 402, 134, 671, 678, 358, 920, 792, 258, 279, 276, 904, 454, 860, 103};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 20390957;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> weight = {544, 474, 354, 216, 531, 475, 419, 137, 763, 117, 640};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3158565;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> weight = {10, 5, 1, 3, 4, 8, 2, 9, 6, 7};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 460;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> weight = {1, 14, 59, 79, 66, 8, 78, 1, 59, 40};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 27014;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> weight = {974, 980, 983, 999, 975, 956, 967, 986, 995, 952, 977, 988, 981, 976, 963, 989, 979, 962, 953, 961, 993, 966, 991, 972, 994, 973, 992, 970, 957, 964, 960, 982, 997, 958, 990, 965, 1000, 959, 985, 968, 978, 998, 971, 987, 984, 969, 955, 951, 954, 996};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 46991551;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> weight = {230, 39, 125, 600, 310, 380, 200, 852, 665, 291};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1906360;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> weight = {747, 600, 777, 474, 200, 501};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1581417;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> weight = {111, 1, 1, 33, 111, 33, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 19869;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> weight = {733, 493, 483, 791, 534, 224, 220, 284, 277, 168, 737, 886, 256, 77, 596, 693, 497, 112, 135, 445, 619, 854, 995, 478, 813, 736, 512, 296, 845, 375, 598, 298, 586, 81, 89, 120, 304, 308, 403, 299, 194, 140, 186, 169, 935, 500, 580, 151, 330, 714};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 21847837;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> weight = {521, 352, 5, 235, 678, 892};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1139346;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> weight = {812, 204, 281, 512, 119, 691, 809, 246, 445, 992, 803, 382, 949, 723, 215, 921, 869, 765, 225, 6, 230, 774, 144, 939, 831, 344, 880, 84, 856, 727, 661, 82, 430, 570, 604, 169, 787, 666, 228, 586, 187, 960, 429, 736, 75, 997, 180, 257, 472, 162};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 30564642;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> weight = {69, 38, 29, 46, 72};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10143;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> weight = {952, 525, 186, 195, 489, 801, 475, 900, 728, 861, 143, 377, 821, 373, 635, 219, 652, 286, 969, 1, 981, 230, 190, 980, 332, 897, 688, 566, 675, 879, 652, 411, 51, 578, 676, 343, 281, 887, 165, 431, 728, 158, 27, 849, 641, 822, 71, 480, 778, 906};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 30940850;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> weight = {9, 1, 10, 99, 10, 1, 9};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2061;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> weight = {1, 2, 7, 10, 3, 2, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> weight = {6, 1, 5, 9, 8};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> weight = {10, 1, 11, 100, 11, 1, 10};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2320;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> weight = {720, 626, 287, 354, 324, 45, 513, 224, 404, 538, 661, 643, 678, 275, 663, 731, 60, 181, 506, 533, 675, 38, 644, 756, 454, 299, 461, 445, 43, 270, 450, 704, 129, 666, 68, 495, 531, 528, 171, 7, 141, 588, 154, 331, 467, 312, 57, 104, 57, 701};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 16607808;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> weight = {100, 98, 2, 1, 3, 100};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 20192;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> weight = {4, 1, 1, 5, 6, 5, 5, 5};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 130;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> weight = {968, 530, 474, 579, 581, 873, 25, 639, 54, 830, 271, 216, 583, 963, 658, 624, 728, 710, 791, 533, 304, 470, 640, 948, 401, 934, 970, 919, 567, 386, 548, 237, 573, 848, 711, 604, 20, 20, 910, 652, 668, 903, 164, 937, 66, 426, 489, 932, 745, 878};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 32254576;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> weight = {668, 300, 36, 895, 704, 812, 323};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2351280;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> weight = {17, 4, 1, 2, 16};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 352;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> weight = {5, 11, 3, 1, 3};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> weight = {257, 386, 2, 492, 122, 108, 651, 903, 813, 517, 478, 387, 458, 295, 775, 753, 799, 974, 271, 246, 914, 548, 337, 462, 448, 716, 909, 948, 608, 790, 681, 866, 175, 684, 47, 297, 482, 699, 200, 295, 906, 368, 372, 363, 664, 838, 806, 462, 811, 76};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 26582372;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> weight = {1, 5, 10, 3, 1, 3};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> weight = {4, 15, 4, 1, 3};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> weight = {336, 263, 42, 39, 774, 619, 256, 449, 391, 557, 355, 603, 500, 768, 434, 106, 989, 52, 427, 400, 151, 83, 501, 886, 228, 624, 528, 586, 719, 334, 874, 54, 596, 267, 445, 369, 238, 52, 169, 980, 960, 523, 935, 459, 290, 368, 916, 630, 420, 342};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 24504832;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> weight = {100, 20, 1, 6, 1, 1, 100};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 12820;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> weight = {1, 100, 100, 2, 1, 100, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 20301;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> weight = {100, 5, 1, 2, 100};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10600;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> weight = {20, 300, 20, 1, 1, 10, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3920;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> weight = {10, 20, 8, 1, 8};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 304;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> weight = {10, 1, 10, 99, 10, 1, 10};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2280;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> weight = {1, 2, 5, 3, 1, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> weight = {42, 468, 335, 501, 170, 725, 479, 359, 963, 465, 706, 146, 282, 828, 962, 492, 996, 943, 828, 437, 392, 605, 903, 154, 293, 383, 422, 717, 719, 896, 448, 727, 772, 539, 870, 913, 668, 300, 36, 895, 704, 812, 323, 334, 674, 665, 142, 712, 254, 869};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 30098989;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> weight = {266, 123, 826, 697, 130, 768, 101, 111, 400, 550, 557, 301, 75, 102, 424, 983, 749, 27, 639, 671, 133, 196, 487, 776, 57, 107, 523, 781, 174, 763, 176, 486, 258, 167, 401, 472, 696, 613, 95, 170, 785, 142, 578, 642, 670, 585, 644, 578, 457, 134};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 21965001;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> weight = {312, 23, 321, 14, 543, 32, 432, 2, 43, 532, 11, 11, 321, 11, 312, 45, 543, 1, 53, 1, 543, 543, 545, 55, 444, 33, 23, 12, 4, 5, 6, 4, 77, 66, 55, 55, 33, 22, 565, 33, 55, 22, 22};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 5276808;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> weight = {3, 8, 5, 1, 1, 14};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 238;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> weight = {828, 360, 709, 472, 653, 144, 832, 616, 836, 196, 66, 944, 55, 644, 489, 355, 532, 499, 86, 639, 725, 543, 849, 441, 109, 742, 453, 759, 897, 875, 976, 231, 687, 703, 564, 988, 421, 20, 361, 854, 99, 882, 106, 438, 214, 593, 987, 536, 35, 598};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 30397093;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> weight = {1, 2, 2, 1, 1, 2, 2, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> weight = {634, 885, 295, 386, 609, 486, 508, 427, 143, 92, 296, 76, 881, 572, 408, 639, 677, 707, 304, 799, 632, 722, 727, 128, 892, 738, 491, 614, 928, 267, 816, 691, 637, 944, 874, 59, 55, 580, 244, 195, 645, 937, 265, 987, 432, 62, 207, 147, 969, 779};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 28416054;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> weight = {6, 100, 17, 1, 3};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 418;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> weight = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 58800;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> weight = {5, 20, 5, 1, 3};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> weight = {1, 4, 15, 4, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> weight = {4, 1, 3, 9, 9};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> weight = {12, 9, 3, 2, 8};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 192;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> weight = {3, 7, 5, 2, 2};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> weight = {1, 2, 2, 1, 1, 2, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> weight = {12, 101, 12, 1, 11};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1375;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> weight = {6, 1, 10, 90, 10};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 690;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> weight = {7, 1, 3, 5, 9};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> weight = {1000, 1, 1, 1, 1, 1, 1, 1, 1, 1000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3015000;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> weight = {6, 7, 3, 1, 4};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> weight = {1000, 1, 1, 2, 1000, 501};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1504000;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> weight = {4, 1, 5, 9, 5};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> weight = {1, 2, 5, 3, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> weight = {101, 50, 2, 1, 100};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 15300;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> weight = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 48000000;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> weight = {1, 2, 3};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> weight = {10, 1, 10, 20, 11};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 410;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> weight = {882, 215, 433, 988, 982, 478, 62, 348, 931, 921, 540, 564, 5, 730, 901, 500, 741, 254, 647, 368, 67, 209, 191, 324, 116, 467, 998, 412, 652, 941, 349, 879, 486, 793, 437, 594, 650, 318, 399, 751, 980, 323, 972, 585, 744, 60, 490, 326, 921, 991};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 31715199;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> weight = {100, 2, 1, 3, 101};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10500;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> weight = {5, 50, 10, 1, 5};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 325;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> weight = {1, 4, 15, 4, 1, 3, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> weight = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 5, 7, 18, 29, 49, 35, 31, 49, 68, 54, 593, 139, 438, 48, 3, 6, 3, 7, 1, 5, 89, 3, 6, 2, 7, 2, 7, 2, 5, 8, 2, 78, 35, 674, 134, 1000, 935, 198, 400};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3838789;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> weight = {1, 3, 8, 3, 1, 1, 3, 8, 3, 1, 1, 3, 8, 3, 1, 1, 3, 8, 3, 1, 1, 3, 8, 3, 1, 1, 3, 8, 3, 1, 1, 3, 8, 3, 1, 1, 3, 8, 3, 1, 1, 3, 8, 3, 1, 1, 3, 8, 3, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1489;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> weight = {42, 468, 335, 501, 170, 725, 479, 359};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1388765;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> weight = {1, 100, 99, 100, 99, 100, 100, 99, 99, 100, 100, 99, 99, 98, 99, 100, 100, 99, 99, 100, 100, 100, 100, 100, 99, 99, 99, 99, 99, 100, 1, 1};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 269202;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> weight = {2, 4, 2, 1, 2};
    CasketOfStar* pObj = new CasketOfStar();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14726&pm=11781
********************************************************************************
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
 
class CasketOfStar {
public:
  int maxEnergy(vector <int>);
};
 
int f[55][55];
 
int CasketOfStar::maxEnergy(vector <int> w) {
  int n = w.size(), i, j, k;
  for (i=n-1;i>=0;i--)
    for (j=i+1;j<n;j++)
      if (j == i+1) f[i][j] = 0; else {
        f[i][j] = 0;
        for (k=i+1;k<j;k++)
          if (f[i][k]+f[k][j] > f[i][j]) f[i][j] = f[i][k]+f[k][j];
        f[i][j] += w[i]*w[j];
      }
  return f[0][n-1];
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/