/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9873
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

class TreesDivision {
public:
    int minDifference(vector<int> x, vector<int> y, vector<int> income);
};

int TreesDivision::minDifference(vector<int> x, vector<int> y, vector<int> income) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {1, 2};
    vector<int> y = {2, 3};
    vector<int> income = {10, 20};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {0, 1, 2, 3};
    vector<int> y = {1, 1, 1, 1};
    vector<int> income = {1, 1, 1, 1};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
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
    vector<int> x = {0, 0, 0, 0, 0};
    vector<int> y = {1, 2, 3, 4, 5};
    vector<int> income = {1, 2, 3, 4, 1000};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 990;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {0, 0, 1, 1};
    vector<int> y = {0, 1, 1, 0};
    vector<int> income = {1, 2, 4, 8};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {4, 2, 4, 2, 3, 6, 3, 5};
    vector<int> y = {1, 2, 4, 3, 3, 2, 4, 5};
    vector<int> income = {4, 5, 2, 6, 7, 4, 2, 4};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {1, 2, 3};
    vector<int> y = {3, 2, 1};
    vector<int> income = {1, 1000000, 1};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {3, 8, 1, 4, 1, 2};
    vector<int> y = {6, 7, 10, 2, 5, 3};
    vector<int> income = {7, 2, 4, 9, 1, 6};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
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
    vector<int> x = {7, 5};
    vector<int> y = {5, 9};
    vector<int> income = {8, 8};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {5, 9, 7, 9, 7};
    vector<int> y = {9, 10, 5, 7, 7};
    vector<int> income = {4, 8, 10, 5, 9};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {6, 6};
    vector<int> y = {7, 0};
    vector<int> income = {5, 10};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {2, 2};
    vector<int> y = {0, 7};
    vector<int> income = {9, 4};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
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
    vector<int> x = {10, 4, 9, 5, 8, 0};
    vector<int> y = {0, 6, 3, 10, 7, 9};
    vector<int> income = {1, 9, 5, 10, 7, 6};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
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
    vector<int> x = {0, 6, 0};
    vector<int> y = {5, 10, 3};
    vector<int> income = {8, 1, 10};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {2, 10};
    vector<int> y = {3, 7};
    vector<int> income = {1, 3};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
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
    vector<int> x = {6, 4, 2, 2, 6, 2, 1, 4, 0, 5, 5, 4, 3, 2, 1, 3, 3, 0, 0, 6, 3, 3, 5, 7, 5, 6, 0, 4, 7, 2, 2, 7, 0, 7, 0, 7, 6, 5, 6, 0, 1, 4, 7, 6, 0, 4, 5, 1, 5};
    vector<int> y = {6, 5, 6, 4, 0, 1, 3, 4, 2, 0, 6, 1, 2, 2, 6, 1, 3, 3, 5, 5, 4, 6, 1, 0, 5, 7, 7, 2, 2, 3, 5, 6, 1, 4, 0, 1, 3, 7, 2, 4, 0, 3, 3, 1, 6, 7, 4, 5, 3};
    vector<int> income = {329, 418, 104, 550, 470, 347, 368, 453, 130, 466, 580, 826, 37, 17, 758, 440, 322, 114, 143, 499, 774, 139, 494, 319, 426, 407, 526, 853, 746, 52, 21, 790, 774, 311, 303, 158, 801, 743, 100, 566, 761, 911, 32, 724, 646, 962, 893, 976, 526};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {4, 2, 1, 7, 1, 2, 0, 3, 6, 6, 2, 0, 2, 3, 4, 5, 1, 7, 0, 7, 6, 6, 3, 5, 4, 4, 3, 4, 2, 5, 6, 6, 5, 0, 1, 1, 4, 0, 6, 5, 7, 6, 5, 7, 5, 0, 4, 5, 2, 3};
    vector<int> y = {5, 1, 5, 5, 4, 5, 2, 6, 0, 5, 0, 7, 2, 3, 3, 4, 3, 7, 4, 3, 6, 2, 1, 7, 2, 4, 0, 0, 7, 3, 4, 1, 0, 0, 0, 1, 7, 1, 7, 5, 1, 3, 6, 2, 2, 5, 6, 1, 6, 7};
    vector<int> income = {959, 334, 27, 754, 754, 977, 201, 256, 919, 225, 277, 153, 303, 1, 419, 888, 636, 83, 427, 251, 932, 945, 555, 255, 479, 811, 25, 285, 16, 143, 991, 607, 516, 635, 949, 975, 185, 206, 374, 215, 107, 651, 689, 828, 569, 742, 943, 790, 752, 834};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
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
    vector<int> x = {7, 7, 3, 6, 6, 1, 1, 1, 5, 0, 0, 4, 7, 7, 0, 4, 6, 5, 3, 5, 0, 2, 2, 5, 4, 0, 6, 4, 2, 3, 7, 3, 6, 7, 1, 1, 5, 4, 3, 2, 1, 3, 0, 2, 7, 6, 7, 3};
    vector<int> y = {1, 7, 0, 1, 7, 6, 3, 7, 5, 2, 4, 2, 5, 0, 0, 7, 3, 0, 6, 1, 1, 0, 1, 2, 5, 7, 4, 0, 7, 1, 6, 5, 2, 2, 5, 2, 4, 4, 4, 3, 0, 7, 5, 5, 4, 0, 3, 2};
    vector<int> income = {891, 186, 179, 970, 4, 494, 131, 215, 537, 878, 316, 286, 312, 835, 449, 714, 827, 792, 381, 597, 916, 873, 703, 64, 413, 670, 51, 247, 561, 577, 922, 459, 281, 289, 55, 908, 354, 50, 45, 374, 223, 527, 970, 298, 972, 188, 480, 837};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {4, 2, 2, 2, 3, 3, 3, 3, 5, 2, 2, 5, 7, 5, 0, 6, 6, 4, 4, 4, 0, 7, 7, 1, 4, 1, 2, 6, 6, 4, 4, 7, 3, 2, 0, 7, 1, 0, 5, 6, 4, 3, 0, 7, 2, 0, 3, 0, 0, 1};
    vector<int> y = {3, 2, 7, 0, 2, 7, 1, 6, 7, 5, 3, 5, 2, 1, 5, 1, 5, 2, 7, 1, 4, 1, 6, 5, 6, 0, 6, 2, 4, 5, 4, 3, 3, 4, 0, 4, 7, 1, 0, 3, 0, 0, 3, 7, 1, 2, 4, 7, 6, 3};
    vector<int> income = {230, 314, 663, 673, 77, 13, 342, 687, 665, 946, 499, 939, 957, 788, 319, 196, 507, 414, 927, 837, 648, 466, 302, 963, 243, 759, 181, 15, 783, 361, 8, 292, 955, 236, 579, 506, 276, 440, 692, 633, 798, 132, 972, 341, 854, 988, 1000, 784, 471, 314};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {1000, 999, 997, 994, 994, 995, 996, 994, 993, 993, 1000, 1000, 998, 997, 993, 1000, 998, 999, 999, 995, 994, 993, 998, 996, 994, 998, 995, 997, 996, 1000, 995, 994, 1000, 998, 994, 1000, 995, 994, 996, 999, 995, 999, 1000, 993, 997, 998, 997, 995, 996, 996};
    vector<int> y = {998, 994, 998, 997, 994, 993, 993, 999, 996, 1000, 993, 997, 998, 1000, 999, 994, 999, 993, 996, 994, 998, 995, 994, 999, 995, 1000, 1000, 997, 1000, 996, 999, 993, 999, 995, 1000, 995, 998, 996, 995, 997, 995, 995, 1000, 997, 994, 993, 996, 997, 997, 996};
    vector<int> income = {128739, 103448, 547273, 1634, 417309, 773072, 516329, 423465, 500275, 947514, 844409, 634639, 944167, 550222, 683148, 596740, 858022, 224143, 420678, 190204, 755297, 295999, 189919, 257020, 529881, 921149, 542101, 949222, 701238, 729543, 142997, 445940, 605783, 744892, 466294, 546926, 151590, 549271, 51310, 859972, 484209, 846179, 858975, 964745, 208957, 492606, 147436, 751126, 640154, 287104};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 5113;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {1000, 994, 994, 996, 997, 994, 995, 999, 994, 997, 999, 993, 999, 997, 994, 993, 1000, 996, 993, 1000, 997, 995, 1000, 999, 994, 998, 998, 997, 998, 994, 999, 996, 999, 994, 997, 999, 996, 995, 995, 1000, 997, 993, 993, 996, 998};
    vector<int> y = {999, 994, 998, 996, 1000, 995, 996, 1000, 997, 994, 996, 995, 997, 999, 1000, 993, 998, 995, 997, 995, 996, 1000, 1000, 998, 993, 999, 993, 993, 995, 996, 994, 999, 993, 999, 998, 999, 1000, 999, 998, 993, 997, 1000, 996, 998, 996};
    vector<int> income = {81201, 469248, 100695, 676338, 938624, 716405, 594361, 92523, 13001, 282734, 304600, 358739, 933421, 796219, 779535, 820448, 995151, 904713, 776735, 950746, 114349, 333872, 853106, 216836, 765002, 177685, 501865, 653805, 83053, 131233, 455686, 568846, 811860, 386476, 394438, 602483, 794985, 816994, 962372, 200664, 521433, 864811, 79974, 94335, 68916};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 7290;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {994, 993, 999, 995, 995, 993, 995, 993, 996, 999, 993, 998, 996, 997, 998, 997, 997, 1000, 994, 995, 993, 994, 999, 998, 996, 996, 999, 1000, 997, 1000, 1000, 998, 997, 998, 994, 993, 996, 998, 994, 997, 995, 996, 994, 1000, 996, 993, 994};
    vector<int> y = {994, 995, 995, 997, 993, 1000, 995, 999, 993, 997, 996, 998, 994, 998, 994, 1000, 996, 997, 998, 998, 997, 993, 998, 1000, 996, 995, 993, 993, 997, 998, 994, 993, 999, 997, 996, 998, 998, 999, 997, 995, 999, 999, 995, 995, 997, 994, 999};
    vector<int> income = {375938, 296530, 295479, 42365, 313199, 894471, 819866, 417279, 490871, 389518, 653679, 198167, 347837, 826121, 798854, 430453, 569754, 644396, 821464, 108400, 820317, 930957, 959019, 750531, 729443, 20763, 44267, 380488, 672730, 472116, 13382, 894537, 160426, 340018, 53828, 109737, 315623, 401496, 432674, 814429, 79717, 309895, 719285, 80290, 23111, 778939, 931057};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 18168;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {996, 996, 996, 996, 1000, 993, 998, 993, 1000, 994, 999, 993, 994, 1000, 996, 994, 997, 998, 993, 996, 1000, 996, 995, 997, 993, 998, 995, 995, 997, 994, 998, 998, 993, 995, 999, 998, 997, 997, 999, 1000, 995, 999, 994, 1000, 995, 994};
    vector<int> y = {996, 999, 998, 993, 1000, 998, 998, 1000, 999, 998, 998, 999, 993, 996, 995, 995, 997, 995, 997, 1000, 997, 997, 999, 998, 994, 999, 1000, 993, 994, 994, 993, 996, 993, 997, 999, 994, 999, 996, 994, 993, 994, 997, 1000, 998, 995, 999};
    vector<int> income = {789873, 915587, 381629, 641340, 410375, 457890, 457653, 655700, 28453, 317127, 930386, 749522, 948930, 907842, 988863, 746596, 856444, 120377, 67131, 539500, 333311, 87198, 564951, 162764, 320540, 301172, 678792, 268291, 593175, 769507, 631609, 919584, 697620, 261613, 918877, 772725, 657510, 756579, 827269, 448653, 755951, 125579, 754596, 924557, 93922, 10567};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 25232;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {995, 998, 996, 1000, 994, 995, 993, 998, 994, 999, 998, 997, 999, 993, 995, 993, 995, 999, 995, 996, 994, 999, 994, 997, 993, 998, 999, 998, 995, 996, 1000, 995, 1000, 993, 994, 996, 1000, 997, 996, 996, 998, 994, 998, 996, 997, 999};
    vector<int> y = {998, 1000, 996, 993, 995, 997, 996, 996, 997, 994, 995, 1000, 997, 995, 993, 993, 994, 995, 996, 1000, 994, 998, 1000, 995, 997, 998, 996, 993, 999, 995, 995, 995, 998, 994, 998, 993, 996, 994, 997, 994, 997, 999, 994, 999, 996, 1000};
    vector<int> income = {771423, 589208, 149705, 550586, 384571, 132728, 48539, 571573, 195941, 308314, 994414, 962910, 680609, 935827, 545289, 193908, 923752, 613498, 879552, 353830, 102247, 778389, 675985, 334453, 183388, 299960, 246688, 534864, 826112, 750048, 898997, 180592, 100369, 759092, 920667, 50432, 141658, 446265, 525903, 199948, 800782, 155106, 969423, 670803, 367456, 235820};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 11712;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {994, 494, 180, 883, 893, 801, 600, 80, 137, 744, 774, 515, 687, 831, 289, 471, 938, 566, 536, 973, 430, 499, 262, 423, 517, 415, 382, 345, 448, 698, 219, 856, 361, 528, 245, 22, 991, 577, 22, 918, 322, 793, 196, 630, 353, 978, 877};
    vector<int> y = {415, 481, 109, 521, 910, 218, 440, 549, 16, 103, 872, 746, 965, 281, 169, 846, 19, 605, 964, 46, 977, 210, 274, 39, 509, 187, 641, 459, 753, 504, 703, 38, 313, 886, 422, 965, 851, 283, 510, 682, 163, 901, 795, 125, 856, 488, 291};
    vector<int> income = {948211, 936156, 922399, 907871, 902985, 905853, 983083, 932908, 921122, 908019, 939687, 916077, 921960, 920859, 974726, 900116, 976421, 986768, 955960, 966920, 930421, 960485, 936587, 945450, 937956, 968024, 958005, 982967, 976349, 918355, 951108, 938501, 983022, 991167, 960658, 908079, 919182, 929235, 934635, 919364, 991485, 958207, 971008, 968009, 907810, 958172, 981902};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 550024;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {553, 252, 808, 722, 800, 644, 685, 879, 355, 218, 658, 612, 138, 643, 696, 261, 752, 605, 116, 305, 217, 314, 796, 996, 873, 657, 35, 598, 178, 178, 639, 872, 109, 625, 856, 343, 395, 725, 661, 332, 278, 672, 837, 887, 765, 793};
    vector<int> y = {67, 849, 767, 109, 790, 845, 26, 97, 249, 376, 364, 148, 81, 582, 322, 315, 792, 492, 979, 627, 269, 198, 957, 35, 871, 775, 25, 795, 535, 501, 702, 479, 986, 514, 827, 332, 990, 62, 670, 276, 64, 34, 146, 307, 519, 886};
    vector<int> income = {980137, 985640, 911415, 902148, 977881, 912102, 986258, 906312, 947528, 957413, 995826, 916196, 948680, 939907, 936289, 937864, 978924, 979828, 924148, 983749, 982590, 962802, 943550, 960990, 966712, 995414, 958111, 938164, 948924, 975899, 956009, 981532, 977102, 982475, 972942, 913515, 986631, 982788, 928762, 947984, 964368, 940021, 964014, 936998, 902055, 954560};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 1125;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {333, 967, 133, 257, 888, 830, 323, 848, 989, 124, 68, 896, 8, 208, 543, 537, 442, 79, 240, 517, 101, 783, 509, 33, 929, 444, 654, 690, 750, 181, 367, 401, 684, 576, 546, 728, 643, 374, 929, 328, 432, 23, 796, 762, 312, 392, 841, 871};
    vector<int> y = {69, 21, 257, 47, 806, 649, 915, 266, 135, 241, 402, 935, 497, 327, 751, 839, 463, 506, 89, 174, 967, 60, 989, 922, 2, 757, 308, 659, 122, 628, 420, 970, 216, 53, 768, 505, 412, 196, 801, 721, 277, 541, 767, 687, 757, 673, 858, 40};
    vector<int> income = {903730, 903856, 961700, 910788, 910729, 938515, 916928, 910908, 975361, 981373, 910175, 908879, 940906, 911464, 934798, 935024, 986908, 970067, 971103, 901620, 903666, 930565, 946679, 949664, 902255, 986095, 904205, 914087, 979611, 951129, 916449, 992533, 966181, 936191, 954991, 981859, 989366, 915834, 930575, 958056, 928840, 950543, 952021, 985675, 947640, 922499, 941176, 909691};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 9990;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {21, 677, 353, 780, 694, 247, 15, 355, 428, 646, 267, 520, 881, 457, 259, 980, 599, 632, 645, 272, 587, 988, 437, 305, 585, 718, 623, 739, 586, 173, 467, 623, 780, 70, 127, 426, 983, 555, 510, 67, 895, 243, 543, 736, 198, 429};
    vector<int> y = {996, 458, 366, 474, 267, 491, 230, 196, 643, 235, 832, 988, 279, 466, 263, 175, 172, 791, 433, 839, 319, 292, 284, 564, 363, 892, 876, 79, 39, 360, 169, 24, 189, 382, 56, 564, 831, 795, 390, 54, 895, 224, 830, 327, 214, 893};
    vector<int> income = {966654, 918251, 975528, 993005, 972389, 992394, 990481, 919158, 975027, 924091, 916571, 931133, 902792, 947346, 941897, 927335, 919474, 985593, 977435, 981847, 957315, 918268, 945653, 932592, 956329, 954736, 987497, 941905, 928659, 947004, 905208, 962608, 985223, 924517, 921066, 996443, 989957, 970063, 967670, 911266, 917700, 904293, 943896, 963195, 962998, 959492};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 684;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {527, 535, 829, 543, 219, 303, 281, 643, 313, 46, 245, 630, 478, 311, 618, 547, 491, 142, 197, 817, 166, 0, 475, 859, 672, 346, 7, 587, 803, 495, 560, 536, 213, 553, 143, 591, 786, 184, 163, 969, 114, 459, 119, 218, 339, 928, 903, 394, 77, 981};
    vector<int> y = {722, 192, 714, 276, 454, 543, 806, 255, 774, 420, 436, 558, 7, 707, 414, 828, 943, 1000, 822, 232, 351, 183, 885, 631, 332, 678, 467, 82, 8, 577, 575, 900, 306, 940, 646, 729, 599, 431, 747, 511, 950, 677, 464, 108, 663, 577, 111, 820, 350, 86};
    vector<int> income = {927534, 961142, 920478, 935417, 904778, 938602, 927810, 981074, 935359, 943528, 992365, 951466, 941748, 921489, 971704, 984881, 928096, 944859, 940475, 908222, 941966, 954920, 915796, 909778, 962631, 954476, 905730, 914895, 922851, 953331, 956644, 941392, 914761, 958221, 974785, 983753, 946051, 982748, 977944, 970328, 922023, 935718, 930911, 962875, 915229, 924935, 950440, 934057, 955841, 994725};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 27508;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {305, 873, 546, 304, 858, 934, 651, 514, 59, 180, 991, 360, 641, 938, 170, 371, 979, 422, 781, 78, 397, 768, 125, 436, 168, 154, 133, 314, 9, 91, 150, 740, 831, 522, 910, 356, 233, 205, 246, 607};
    vector<int> y = {1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0};
    vector<int> income = {983272, 331860, 330779, 418762, 309177, 855623, 114789, 543690, 531377, 642313, 621544, 288248, 236064, 417955, 377547, 973623, 910404, 695251, 712484, 994266, 32651, 213889, 209912, 463969, 88660, 145223, 42370, 549890, 772207, 314801, 204516, 403421, 127383, 407354, 378614, 475973, 968573, 810955, 791488, 993918};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 22171;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {686, 985, 704, 217, 146, 383, 177, 18, 450, 226, 246, 799, 505, 892, 556, 197, 56, 352, 500, 101, 256, 639, 890, 398, 846, 676, 411, 896, 459, 4, 957};
    vector<int> y = {1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1};
    vector<int> income = {264503, 134185, 340975, 956124, 675343, 509177, 191810, 961734, 277495, 969937, 534065, 826563, 955283, 580975, 931509, 273192, 615411, 502340, 261754, 574331, 900444, 889388, 301851, 457588, 778047, 62327, 957793, 899512, 765823, 955235, 976391};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 13091;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {560, 53, 911, 165, 989, 402, 286, 522, 240, 301, 401, 531, 400, 698, 111, 893, 225, 28, 799, 547, 582, 16, 631, 964, 884, 130, 885, 348, 79, 354, 865, 329};
    vector<int> y = {1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0};
    vector<int> income = {485212, 279149, 255733, 95765, 314397, 849253, 126799, 988056, 955479, 326722, 246759, 94118, 313443, 908478, 429618, 683726, 385485, 554876, 552274, 947281, 311567, 432660, 476825, 518170, 504020, 308814, 869641, 720457, 982582, 727262, 715351, 166252};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 28282;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {264, 685, 58, 241, 440, 673, 187, 628, 787, 92, 260, 174, 619, 277, 506, 714, 182, 684, 599, 762, 189, 5, 310, 922, 955, 490, 543, 322, 971, 912, 920, 451, 718, 954, 728, 644, 125, 769, 634, 740, 496, 612, 629};
    vector<int> y = {0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<int> income = {525675, 648087, 709138, 957585, 598515, 978917, 203915, 935249, 633803, 461572, 25814, 291952, 332450, 507165, 433979, 624434, 89176, 518219, 242925, 18695, 169081, 901208, 53397, 611987, 228998, 283071, 442506, 826537, 909868, 668204, 334801, 279306, 75594, 344631, 26657, 177066, 33775, 3628, 702306, 719338, 463768, 320708, 270760};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 25300;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {1000, 1000, 999, 999, 1000, 1000, 999, 999, 999, 1000, 999, 1000, 999, 1000, 999, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 999, 1000, 1000, 999, 1000, 999, 1000, 999, 1000, 999};
    vector<int> y = {838, 118, 326, 498, 754, 603, 132, 461, 436, 506, 187, 216, 853, 455, 430, 866, 107, 912, 811, 271, 729, 708, 707, 971, 485, 989, 887, 378, 392, 244, 867, 845};
    vector<int> income = {12490, 880879, 197844, 772673, 543441, 25342, 372137, 467810, 410723, 687055, 473005, 483352, 256181, 396182, 201840, 433586, 612208, 122360, 566576, 410471, 15016, 856516, 7643, 631843, 630053, 173136, 583104, 54878, 588503, 114782, 900935, 860280};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 75212;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {1000, 999, 999, 1000, 999, 1000, 999, 1000, 1000, 1000, 999, 999, 999, 999, 999, 999, 999, 999, 999, 1000, 999, 999, 1000, 1000, 999, 999, 999, 1000, 1000, 999, 999, 1000, 1000, 999, 999, 1000, 999, 999, 1000, 999, 1000, 1000, 1000, 999, 1000, 1000};
    vector<int> y = {189, 277, 818, 82, 118, 275, 989, 586, 367, 547, 311, 958, 235, 978, 676, 231, 171, 633, 802, 988, 508, 202, 208, 957, 20, 114, 8, 931, 287, 71, 504, 632, 40, 14, 807, 731, 520, 666, 390, 934, 783, 304, 220, 503, 146, 797};
    vector<int> income = {61205, 491312, 523390, 34724, 269514, 502384, 123476, 783029, 681012, 828629, 566925, 587525, 268764, 2591, 289928, 533550, 487158, 778241, 55508, 451771, 785899, 468702, 421039, 454949, 96335, 967304, 658246, 452632, 841002, 774275, 199034, 458670, 291443, 999167, 310681, 211250, 196814, 962401, 195745, 447837, 76501, 421881, 101439, 340060, 860043, 943308};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 45093;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {1000, 1000, 999, 1000, 1000, 1000, 1000, 1000, 1000, 999, 999, 999, 999, 1000, 1000, 1000, 1000, 999, 1000, 1000, 1000, 999, 1000, 1000, 1000, 999, 999, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 999, 999, 999, 999, 999, 1000, 999, 999, 1000, 1000};
    vector<int> y = {666, 108, 724, 499, 675, 344, 909, 627, 565, 251, 84, 312, 360, 398, 448, 783, 137, 54, 533, 828, 328, 454, 30, 451, 389, 898, 756, 116, 921, 62, 480, 851, 395, 519, 540, 921, 613, 836, 319, 910, 22, 649, 544, 416};
    vector<int> income = {603415, 330222, 378472, 576006, 648834, 259720, 626922, 935313, 119782, 359173, 990929, 168743, 534440, 704483, 51865, 864351, 440216, 190032, 288940, 831424, 8315, 839594, 996388, 725697, 145602, 392065, 908042, 910726, 762641, 864660, 645339, 582760, 25400, 598735, 930305, 499565, 279674, 17171, 33814, 242508, 415371, 892077, 63332, 120617};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {1000, 999, 999, 1000, 1000, 999, 1000, 1000, 999, 1000, 999, 999, 999, 999, 999, 999, 999, 1000, 999, 999, 1000, 1000, 1000, 1000, 999, 999, 1000, 999, 1000, 1000, 1000, 1000, 999, 999, 999, 999, 1000, 999, 1000, 1000, 1000, 1000, 1000};
    vector<int> y = {126, 329, 497, 343, 208, 761, 722, 270, 570, 230, 512, 784, 403, 58, 434, 186, 901, 858, 585, 518, 285, 564, 152, 114, 420, 243, 967, 367, 609, 3, 109, 714, 637, 882, 952, 533, 643, 336, 603, 772, 146, 189, 93};
    vector<int> income = {25635, 128167, 403426, 527831, 444547, 600372, 362027, 680229, 6392, 19795, 109332, 238847, 21703, 578311, 795263, 964544, 529383, 940097, 889335, 920562, 495295, 242914, 351164, 796241, 51557, 779904, 426493, 891398, 234016, 220763, 119319, 391660, 644838, 127975, 922394, 632462, 85021, 450693, 492611, 293029, 130205, 854345, 199235};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 2812;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {548, 954, 113, 222, 267, 483, 9, 893, 733, 259, 904, 582, 741, 491, 576, 47, 748, 960, 805, 77, 791, 894, 351, 863, 696, 790, 686, 674, 258, 592, 40, 143, 594, 46, 376, 343, 959, 799, 135, 896, 468, 131, 810, 65, 959};
    vector<int> y = {242, 951, 992, 383, 797, 180, 679, 987, 901, 556, 810, 647, 581, 334, 290, 249, 369, 682, 212, 187, 594, 766, 831, 633, 609, 964, 695, 766, 217, 883, 836, 306, 607, 311, 658, 550, 312, 793, 899, 378, 867, 996, 712, 381, 423};
    vector<int> income = {853096, 884711, 619193, 995034, 67511, 225201, 708510, 902853, 89368, 958883, 206406, 304537, 153240, 309257, 808920, 447480, 97465, 12125, 487402, 774963, 265574, 664202, 431683, 403919, 164992, 227177, 471960, 610621, 363667, 292358, 241618, 899807, 821921, 178011, 517254, 911178, 431317, 446483, 486458, 429694, 197135, 707207, 55333, 355438, 400926};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 17816;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {384, 966, 207, 531, 704, 529, 550, 614, 927, 583, 257, 351, 557, 254, 198, 506, 115, 908, 714, 21, 35, 962, 262, 268, 798, 115, 995, 321, 229, 619, 121, 269, 941, 971, 364, 999, 232, 223, 318, 594, 535, 53, 297, 339, 49, 95, 590, 212, 164, 297};
    vector<int> y = {22, 179, 843, 123, 22, 639, 8, 505, 814, 220, 819, 353, 756, 257, 68, 385, 816, 892, 484, 369, 1, 917, 95, 406, 999, 735, 989, 240, 175, 841, 81, 944, 590, 708, 708, 304, 694, 98, 390, 282, 389, 418, 405, 166, 608, 75, 654, 25, 236, 592};
    vector<int> income = {630933, 271661, 912830, 737964, 824455, 155950, 845554, 656879, 866219, 748448, 969944, 208050, 409325, 192171, 806967, 251702, 609069, 11820, 836996, 305582, 837050, 883181, 751976, 747133, 987154, 548263, 44919, 726902, 570851, 96391, 547194, 627802, 359755, 276517, 819173, 424861, 265499, 502412, 488928, 639392, 141712, 354616, 45249, 937335, 513944, 239442, 575311, 756387, 792913, 713654};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 34069;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {127, 116, 549, 551, 353, 743, 455, 301, 992, 769, 978, 315, 998, 773, 269, 630, 586, 219, 731, 529, 846, 892, 370, 612, 265, 944, 151, 911, 368, 78, 268, 86, 744, 565, 741, 742, 78, 361, 215, 389, 575, 517, 317, 768, 136, 997, 663};
    vector<int> y = {11, 173, 660, 475, 3, 301, 330, 132, 819, 140, 972, 407, 33, 943, 393, 679, 461, 798, 66, 808, 917, 866, 529, 536, 839, 740, 745, 880, 953, 869, 584, 414, 426, 860, 538, 50, 85, 314, 237, 38, 167, 783, 796, 238, 351, 957, 942};
    vector<int> income = {327949, 130587, 264175, 617216, 301207, 843913, 508250, 594861, 490786, 864062, 503805, 362488, 524522, 869522, 874476, 375502, 429273, 528522, 415913, 285774, 894281, 153373, 768487, 41094, 634052, 67378, 960646, 126070, 593157, 208352, 756827, 918667, 696886, 455275, 198505, 781731, 65459, 505549, 671904, 765199, 940039, 229610, 105188, 183371, 859369, 751321, 99463};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 32100;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {621, 117, 93, 946, 975, 20, 427, 197, 92, 229, 188, 636, 301, 418, 952, 715, 955, 421, 829, 131, 350, 465, 353, 928, 272, 565, 795, 51, 551, 160, 189, 745, 345, 322, 610, 452, 437, 795, 7, 672, 588, 100, 801, 678, 343, 343, 911};
    vector<int> y = {745, 635, 417, 951, 493, 55, 627, 539, 554, 187, 263, 1, 26, 613, 874, 901, 592, 642, 802, 493, 727, 961, 518, 324, 602, 124, 742, 5, 61, 318, 119, 870, 946, 231, 490, 128, 14, 901, 580, 890, 387, 802, 57, 96, 143, 615, 820};
    vector<int> income = {31936, 30323, 746373, 154421, 777741, 231797, 607723, 181835, 185931, 654197, 409876, 128750, 426411, 925630, 468618, 545733, 480207, 198609, 473032, 706919, 962186, 525338, 132922, 577049, 444512, 154746, 288121, 999057, 500993, 744062, 986126, 801400, 121811, 228260, 813366, 111906, 206308, 452445, 584858, 815448, 844794, 744389, 376278, 103631, 822982, 845996, 968626};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 31162;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {942, 113, 916, 524, 857, 477, 520, 701, 758, 314, 626, 588, 902, 380, 825, 104, 274, 83, 754, 298, 420, 247, 208, 108, 783, 400, 721, 543, 705, 455, 141, 86, 123, 987, 806, 575, 683, 124, 619, 531, 208, 917, 131, 104, 613, 831, 591, 76, 838};
    vector<int> y = {576, 215, 458, 250, 857, 871, 32, 187, 120, 75, 505, 282, 159, 391, 988, 954, 494, 165, 701, 751, 996, 516, 326, 687, 680, 201, 345, 347, 640, 467, 510, 715, 964, 731, 845, 286, 749, 294, 558, 477, 309, 660, 301, 972, 158, 654, 532, 197, 740};
    vector<int> income = {759653, 804664, 371210, 442146, 811391, 482553, 66522, 600064, 107619, 217974, 836325, 135846, 473788, 527926, 35179, 604405, 978084, 162159, 804895, 381882, 403876, 745287, 285667, 76980, 169530, 217046, 702795, 392529, 443470, 422818, 133978, 146288, 125115, 352993, 962560, 62432, 952395, 474488, 369441, 645663, 660666, 915777, 505744, 338842, 744176, 53504, 143758, 955890, 757643};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 22660;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {831, 56, 396, 439, 494, 701, 338, 11, 377, 597, 225, 176, 212, 26, 373, 386, 523, 7, 378, 355, 15, 487, 293, 943, 388, 287, 689, 61, 463, 708, 42, 688, 397, 38, 760, 864, 544, 963, 629, 635, 574, 55, 48, 621, 759, 123};
    vector<int> y = {372, 697, 185, 967, 65, 392, 174, 240, 813, 746, 185, 428, 565, 566, 176, 159, 694, 434, 156, 638, 660, 967, 712, 22, 309, 557, 281, 278, 619, 976, 53, 919, 434, 801, 979, 322, 645, 606, 506, 386, 113, 488, 953, 55, 126, 357};
    vector<int> income = {375004, 563748, 944103, 239157, 286101, 663429, 737942, 778147, 68010, 633335, 196023, 240791, 818645, 254675, 280094, 432194, 699520, 111003, 888845, 288192, 327879, 507210, 687349, 292704, 475443, 455108, 741371, 450019, 180094, 272481, 659952, 503540, 622869, 108455, 759958, 924146, 860496, 944266, 477346, 299757, 216508, 630388, 286451, 463844, 397392, 639739};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 36015;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {150, 726, 174, 257, 218, 733, 479, 884, 208, 483, 789, 50, 959, 985, 470, 229, 138, 769, 111, 240, 358, 389, 324, 960, 876, 716, 633, 835, 153, 365, 563, 360, 928, 763, 302, 289, 231, 329, 63, 230, 855, 954, 759, 280, 73, 307, 147, 761};
    vector<int> y = {41, 759, 74, 675, 832, 900, 698, 435, 863, 222, 435, 205, 470, 896, 908, 688, 212, 586, 773, 540, 966, 669, 518, 818, 53, 493, 531, 665, 193, 591, 222, 448, 207, 842, 816, 81, 263, 844, 249, 87, 104, 372, 750, 7, 945, 882, 78, 481};
    vector<int> income = {981737, 59822, 86257, 527975, 277623, 480251, 982863, 416785, 665702, 939762, 729044, 398681, 540333, 188357, 906766, 689736, 186802, 907415, 505403, 546009, 352137, 256763, 554056, 275895, 478460, 426674, 794647, 613052, 285505, 837039, 62130, 595827, 983037, 399701, 503772, 257942, 946887, 985911, 698049, 229583, 620581, 474198, 790079, 830265, 90511, 909094, 200998, 452702};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 31396;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {792, 469, 481, 193, 597, 641, 426, 37, 595, 988, 837, 237, 814, 688, 957, 555, 672, 687, 61, 404, 592, 615, 998, 555, 694, 107, 323, 139, 217, 835, 515, 14, 585, 262, 610, 456, 608, 1, 17, 464, 377, 135, 287, 118, 199};
    vector<int> y = {545, 632, 939, 807, 581, 702, 783, 553, 282, 133, 137, 657, 936, 0, 590, 468, 324, 311, 568, 720, 427, 263, 268, 65, 936, 87, 77, 572, 661, 523, 170, 375, 34, 969, 389, 929, 514, 533, 200, 817, 480, 676, 817, 41, 591};
    vector<int> income = {560274, 111336, 507472, 48328, 413678, 423583, 176791, 14216, 901164, 510747, 325840, 174523, 240697, 525668, 13375, 623487, 884271, 447088, 392344, 122148, 416281, 696230, 886330, 390633, 853618, 523355, 841403, 411066, 976226, 168217, 564506, 638200, 349445, 286739, 767372, 278575, 56102, 94896, 598195, 917281, 420032, 806920, 840097, 229369, 864252};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 6832;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {34, 395, 354, 255, 995, 213, 695, 936, 73, 785, 18, 789, 285, 19, 649, 61, 892, 863, 523, 943, 522, 40, 100, 978, 88, 538, 296, 784, 945, 877, 986, 434, 908, 48, 520, 981, 540, 986, 961, 595, 392, 1, 158, 458, 91};
    vector<int> y = {153, 40, 716, 207, 943, 557, 670, 850, 860, 214, 180, 915, 824, 221, 760, 452, 152, 336, 669, 955, 180, 413, 432, 341, 559, 486, 949, 426, 93, 936, 655, 368, 231, 748, 138, 394, 188, 109, 338, 975, 827, 58, 527, 86, 30};
    vector<int> income = {729941, 690933, 23569, 47082, 8377, 895228, 240289, 319693, 288970, 437816, 303675, 781859, 647503, 619152, 463809, 887083, 752004, 834138, 211528, 137489, 92116, 557788, 227856, 359733, 198105, 14478, 496397, 662310, 204510, 481109, 942240, 788130, 69340, 935242, 181789, 985559, 307904, 211311, 402565, 809699, 240034, 162751, 804620, 684823, 11854};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 8709;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {919, 577, 827, 759, 819, 84, 531, 721, 439, 916, 468, 708, 511, 272, 396, 219, 587, 77, 369, 195, 380, 317, 69, 203, 490, 709, 488, 494, 48, 552, 996, 383, 53, 690, 501, 2, 193, 854, 466, 241, 627, 878, 56, 612, 291, 872, 728, 880};
    vector<int> y = {268, 436, 795, 298, 495, 469, 59, 62, 479, 331, 357, 531, 157, 90, 694, 584, 625, 334, 660, 909, 924, 313, 798, 846, 745, 820, 837, 510, 417, 615, 45, 319, 477, 499, 203, 616, 888, 209, 552, 259, 18, 187, 596, 37, 759, 249, 542, 920};
    vector<int> income = {526122, 907065, 322873, 827151, 953395, 203995, 747084, 805056, 298925, 900833, 562626, 813348, 397125, 527249, 915290, 232472, 188883, 363874, 730377, 296233, 645028, 278204, 910193, 633880, 817135, 580723, 625956, 50066, 321762, 522064, 365796, 755894, 788309, 546311, 509158, 370514, 422677, 318849, 987401, 115430, 724250, 133457, 191906, 72734, 527888, 66242, 1524, 711323};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 15964;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626, 626};
    vector<int> y = {311, 183, 588, 540, 640, 99, 474, 861, 945, 984, 569, 940, 390, 637, 60, 98, 210, 502, 414, 938, 161, 915, 251, 649, 688, 671, 65, 33, 450, 409, 914, 362, 534, 471, 593, 839, 866, 196, 926, 456, 174, 94, 905, 280};
    vector<int> income = {469774, 346312, 920865, 471883, 727799, 758846, 843798, 11006, 713329, 617173, 188330, 545278, 920230, 255801, 175079, 68548, 58574, 68381, 412245, 612310, 788010, 631411, 944997, 677800, 833492, 327320, 688113, 25239, 86314, 776615, 471192, 587837, 579719, 686962, 613560, 576647, 448820, 766686, 859875, 379078, 849449, 910201, 536730, 352800};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 206986;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971, 971};
    vector<int> y = {351, 340, 471, 927, 272, 242, 188, 395, 834, 152, 280, 888, 944, 862, 545, 596, 447, 352, 418, 261, 565, 601, 535, 751, 694, 311, 353, 233, 70, 156, 508, 207, 949, 870, 505, 776, 165, 68, 19, 111, 802, 363, 44};
    vector<int> income = {867931, 538873, 610547, 740031, 768418, 886557, 160599, 110550, 786091, 716961, 788780, 600669, 728402, 998368, 898250, 982893, 654130, 568313, 727953, 404580, 7398, 882821, 164826, 503261, 336523, 522017, 233027, 237491, 764479, 51050, 777319, 764357, 174811, 783162, 116322, 975276, 102908, 916143, 286417, 681926, 323774, 71140, 358671};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 515733;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778, 778};
    vector<int> y = {557, 222, 11, 855, 743, 790, 821, 137, 744, 933, 82, 329, 600, 467, 930, 553, 493, 615, 69, 689, 485, 206, 765, 60, 452, 64, 507, 937, 68, 410, 192, 728, 214, 761, 314, 276, 499, 208, 272, 403, 281, 352, 290, 920, 488, 419, 475, 916};
    vector<int> income = {729086, 795894, 507319, 961536, 639510, 89407, 579111, 566680, 762909, 344187, 372179, 968964, 298539, 967052, 260561, 278021, 241211, 166813, 570790, 143176, 962015, 316774, 923489, 220493, 729303, 33217, 694301, 404596, 333566, 916362, 487670, 565783, 138672, 400158, 79944, 74770, 856535, 843248, 805954, 645862, 357907, 800328, 741633, 516514, 40750, 275375, 914669, 644761};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 132318;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {220, 212, 775, 103, 807, 444, 145, 293, 11, 952, 167, 669, 101, 993, 92, 622, 944, 703, 113, 416, 721, 932, 719, 614, 545, 949, 563, 739, 583, 59, 997, 686, 518, 350, 648, 277};
    vector<int> y = {187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187};
    vector<int> income = {271485, 911776, 1319, 178988, 300945, 720952, 954793, 289032, 452104, 348944, 162810, 658803, 446458, 149956, 323381, 762120, 256646, 300849, 678328, 221091, 969926, 304818, 633630, 3104, 272793, 627747, 90588, 428825, 414944, 778372, 243761, 301025, 753221, 765244, 782077, 32783};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 87998;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {779, 782, 791, 855, 753, 601, 90, 540, 196, 306, 62, 343, 158, 458, 203, 248, 157, 270, 950, 468, 762, 861, 474, 308, 958, 678, 761, 920, 889, 605, 210, 104, 938, 538, 443, 624, 713, 321};
    vector<int> y = {716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716, 716};
    vector<int> income = {849287, 620572, 878334, 423544, 344769, 482314, 373822, 155526, 57598, 466959, 948317, 245554, 348027, 873066, 52142, 950754, 779702, 621201, 957105, 571223, 195919, 926751, 462907, 214126, 536401, 815478, 301277, 56859, 44888, 338482, 766193, 458491, 448001, 372140, 959636, 638888, 780518, 13828};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 51825;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {792, 66, 1000, 845, 831, 123, 287, 543, 507, 816, 557, 217, 44, 689, 699, 641, 314, 69, 533, 376, 99, 293, 493, 569, 924, 851, 106, 455, 273, 335, 647, 109, 95, 900, 518, 972, 742, 112, 134, 82, 372};
    vector<int> y = {466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466, 466};
    vector<int> income = {361856, 765477, 583251, 962552, 990431, 737945, 777719, 161010, 492255, 134814, 175883, 120811, 25373, 486353, 808427, 262205, 270838, 419789, 585204, 736264, 513285, 134829, 524864, 559143, 184422, 893135, 601964, 344628, 688757, 395598, 556629, 987340, 750607, 449543, 129302, 909516, 401294, 102740, 370187, 85326, 632081};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 100803;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {617, 42, 115, 65, 461, 550, 306, 889, 18, 615, 166, 347, 869, 303, 987, 576, 207, 246, 536, 458, 96, 103, 570, 221, 390, 447, 6, 189, 595, 648, 125, 452, 755, 168, 514, 861, 605, 958, 839, 276, 107, 808};
    vector<int> y = {617, 42, 115, 65, 461, 550, 306, 889, 18, 615, 166, 347, 869, 303, 987, 576, 207, 246, 536, 458, 96, 103, 570, 221, 390, 447, 6, 189, 595, 648, 125, 452, 755, 168, 514, 861, 605, 958, 839, 276, 107, 808};
    vector<int> income = {956113, 771056, 722545, 597471, 481154, 447949, 54858, 571156, 322492, 778881, 759611, 856975, 64410, 242856, 890206, 833641, 34424, 853215, 680590, 802626, 989107, 273472, 766569, 106293, 619941, 590731, 781148, 204012, 254710, 990413, 30612, 593443, 843201, 60623, 294073, 125605, 327016, 93991, 612241, 137925, 516221, 202747};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 706991;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {433, 420, 56, 921, 621, 195, 179, 334, 620, 479, 374, 604, 493, 372, 977, 238, 398, 244, 278, 706, 845, 295, 116, 693, 89, 771, 263, 894, 243, 159, 126, 406, 301, 773, 590, 385, 952, 153, 829, 966, 565, 39, 774, 732, 871, 134};
    vector<int> y = {433, 420, 56, 921, 621, 195, 179, 334, 620, 479, 374, 604, 493, 372, 977, 238, 398, 244, 278, 706, 845, 295, 116, 693, 89, 771, 263, 894, 243, 159, 126, 406, 301, 773, 590, 385, 952, 153, 829, 966, 565, 39, 774, 732, 871, 134};
    vector<int> income = {455963, 98033, 239902, 55730, 321742, 579289, 684457, 741500, 174303, 211876, 615439, 430344, 117321, 160719, 572556, 577747, 461897, 659225, 232990, 203480, 699163, 52602, 898943, 544853, 569850, 992752, 893483, 578948, 541667, 124343, 33696, 301538, 777810, 90186, 989272, 55593, 163970, 231527, 181072, 910808, 907568, 528007, 296131, 989738, 482776, 330537};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 20242;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {255, 778, 10, 707, 508, 817, 802, 288, 180, 498, 1000, 798, 718, 656, 58, 179, 3, 668, 383, 99, 748, 337, 559, 174, 902, 653, 351, 875, 457, 763, 477, 237, 253, 648, 727};
    vector<int> y = {255, 778, 10, 707, 508, 817, 802, 288, 180, 498, 1000, 798, 718, 656, 58, 179, 3, 668, 383, 99, 748, 337, 559, 174, 902, 653, 351, 875, 457, 763, 477, 237, 253, 648, 727};
    vector<int> income = {476878, 122065, 742890, 246316, 12665, 129451, 730312, 281584, 147601, 82449, 978689, 794384, 539827, 583071, 896689, 796708, 340602, 19697, 531381, 346892, 954690, 946916, 560233, 139809, 889703, 474579, 53736, 704064, 434694, 30413, 183686, 362488, 163413, 156597, 923405};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 462755;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {202, 987, 898, 93, 131, 771, 625, 662, 990, 40, 9, 28, 720, 195, 290, 646, 371, 402, 127, 813, 693, 144, 973, 852, 285, 280, 73, 288, 197, 589, 349, 696, 224, 324, 408, 243, 915, 690, 878};
    vector<int> y = {202, 987, 898, 93, 131, 771, 625, 662, 990, 40, 9, 28, 720, 195, 290, 646, 371, 402, 127, 813, 693, 144, 973, 852, 285, 280, 73, 288, 197, 589, 349, 696, 224, 324, 408, 243, 915, 690, 878};
    vector<int> income = {377440, 489051, 175215, 908324, 902247, 615349, 300624, 773675, 168481, 156824, 688577, 789066, 241922, 743808, 90190, 352605, 621037, 20551, 541281, 319319, 466903, 550163, 720175, 508275, 263289, 978144, 280182, 283055, 895186, 133032, 624431, 975877, 879005, 436266, 89369, 248561, 61908, 861602, 644654};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 24979;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {798, 486, 366, 592, 540, 436, 791, 171, 54, 940, 551, 591, 217, 241, 924, 593, 981, 876, 292, 971, 525, 408, 186, 500, 896, 163, 612, 963, 491, 138, 728, 492, 70, 744, 991, 55, 788, 199, 852, 882, 975, 362, 264, 889, 363, 923, 157};
    vector<int> y = {798, 486, 366, 592, 540, 436, 791, 171, 54, 940, 551, 591, 217, 241, 924, 593, 981, 876, 292, 971, 525, 408, 186, 500, 896, 163, 612, 963, 491, 138, 728, 492, 70, 744, 991, 55, 788, 199, 852, 882, 975, 362, 264, 889, 363, 923, 157};
    vector<int> income = {793373, 357071, 393340, 455975, 132050, 176869, 845093, 384611, 947432, 336748, 981374, 159611, 415162, 187837, 170017, 110220, 192356, 982581, 957225, 292083, 21762, 137713, 636171, 46065, 658124, 91165, 778736, 374155, 336546, 643328, 84221, 592046, 617167, 814970, 956561, 312950, 986863, 977765, 816188, 399071, 850463, 959480, 662944, 364090, 614083, 602562, 10555};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 112128;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {449, 99, 409, 0, 0, 0, 0, 0, 640, 289, 17, 0, 0, 245, 0, 272, 0, 301, 0, 0, 0, 350, 871, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 357};
    vector<int> y = {0, 0, 0, 917, 64, 789, 979, 0, 0, 0, 0, 545, 923, 0, 881, 0, 760, 0, 682, 382, 562, 0, 0, 961, 266, 40, 688, 538, 103, 0, 948, 962, 670, 903, 0};
    vector<int> income = {339062, 339781, 355157, 121775, 990842, 788363, 923686, 274716, 111009, 503920, 935976, 213746, 289569, 287136, 399900, 585570, 459384, 867810, 914927, 246675, 301045, 333637, 171853, 689376, 524091, 566146, 13375, 152866, 491290, 834202, 140383, 541708, 155951, 994471, 371119};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 17357;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {682, 973, 80, 676, 224, 0, 804, 0, 0, 599, 900, 0, 142, 588, 0, 0, 858, 529, 901, 929, 699, 0, 510, 780, 0, 0, 415, 0, 0, 0, 0, 638, 0, 0, 872, 0, 0, 7, 0};
    vector<int> y = {0, 0, 0, 0, 0, 898, 0, 167, 607, 0, 0, 655, 0, 0, 509, 769, 0, 0, 0, 0, 0, 0, 0, 0, 950, 977, 0, 536, 687, 603, 708, 0, 599, 32, 0, 188, 398, 0, 822};
    vector<int> income = {611244, 286719, 729377, 962822, 782099, 763235, 524632, 720583, 124965, 474217, 226722, 918662, 115928, 209154, 543785, 677380, 911477, 681881, 613474, 313916, 652813, 608529, 865962, 268633, 240807, 812609, 479484, 328548, 311252, 146680, 280660, 212196, 210676, 238426, 454892, 594919, 640454, 723609, 912036};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 647;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {672, 959, 0, 68, 0, 0, 664, 0, 28, 67, 0, 182, 0, 745, 0, 410, 0, 107, 0, 0, 531, 0, 615, 0, 222, 354, 301, 0, 339, 631, 0, 0, 472, 0, 885};
    vector<int> y = {0, 0, 554, 0, 0, 187, 0, 523, 0, 0, 473, 0, 884, 0, 522, 0, 287, 0, 361, 293, 0, 234, 0, 310, 0, 0, 0, 174, 0, 0, 201, 783, 0, 194, 0};
    vector<int> income = {797603, 135484, 21281, 857045, 505195, 353275, 640019, 32874, 589686, 508558, 981603, 907075, 548023, 591613, 15956, 702566, 394660, 703396, 734968, 278892, 514814, 648232, 406399, 426472, 21205, 257689, 433367, 197746, 598927, 706866, 611950, 317729, 406148, 995484, 487965};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 9149;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {260, 0, 0, 700, 0, 399, 824, 230, 775, 0, 0, 371, 8, 0, 0, 0, 829, 0, 201, 0, 0, 520, 0, 524, 828, 0, 0, 211, 239, 498, 552, 0, 0, 499, 207};
    vector<int> y = {0, 446, 640, 0, 659, 0, 0, 0, 0, 362, 994, 0, 0, 884, 990, 826, 0, 150, 0, 908, 0, 0, 590, 0, 0, 692, 897, 0, 0, 0, 0, 863, 930, 0, 0};
    vector<int> income = {402412, 715308, 620747, 183916, 990532, 468218, 516011, 216385, 27257, 312637, 36152, 876674, 759947, 755346, 153146, 68582, 992688, 367089, 790931, 128456, 586994, 477725, 783758, 162895, 117057, 749988, 949975, 928766, 466430, 309386, 406595, 907757, 95372, 177823, 239512};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 12535;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {23, 802, 0, 0, 66, 0, 966, 699, 0, 0, 887, 0, 679, 0, 334, 175, 0, 833, 0, 0, 0, 979, 896};
    vector<int> y = {0, 0, 12, 889, 0, 526, 0, 0, 544, 135, 0, 754, 0, 0, 0, 0, 928, 0, 94, 490, 563, 0, 0};
    vector<int> income = {425914, 758222, 369662, 882266, 880613, 146178, 14167, 34641, 789580, 714315, 675981, 541010, 613914, 435857, 638537, 622636, 429690, 742357, 355311, 45893, 809484, 760366, 301342};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 88884;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {1000, 1000, 1000, 0, 727, 297, 1000, 1000, 790, 623, 683, 650, 631, 713, 244, 1000, 316, 477, 916, 39, 1000, 925, 829, 0, 1000, 970, 194, 1000, 0, 617, 205, 0, 0, 403, 1000, 1000, 912, 483, 669, 88, 0, 588};
    vector<int> y = {377, 576, 1000, 899, 1000, 0, 818, 927, 1000, 0, 1000, 1000, 0, 0, 0, 986, 1000, 0, 1000, 0, 965, 0, 1000, 0, 40, 1000, 1000, 551, 885, 1000, 0, 121, 524, 1000, 963, 638, 1000, 1000, 0, 1000, 832, 0};
    vector<int> income = {347896, 370902, 114484, 811037, 208960, 812546, 434783, 12112, 941618, 319180, 455647, 564021, 564726, 486221, 812112, 959538, 844118, 425584, 258424, 443298, 655845, 585051, 998644, 601078, 782992, 85328, 847320, 330329, 901549, 173616, 876448, 431750, 73086, 562310, 330976, 144862, 541121, 817106, 444701, 297349, 619834, 264482};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 32610;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {271, 1000, 682, 688, 47, 0, 1000, 1000, 1000, 597, 0, 231, 0, 439, 244, 610, 1000, 406, 524, 842, 538, 663, 0, 305, 0, 0, 0, 0, 701, 0, 744, 0, 0, 183, 169, 437, 888};
    vector<int> y = {0, 704, 1000, 0, 1000, 182, 1000, 51, 138, 1000, 980, 0, 749, 0, 0, 0, 764, 0, 0, 1000, 0, 1000, 109, 1000, 137, 551, 0, 206, 1000, 167, 1000, 95, 21, 1000, 0, 1000, 0};
    vector<int> income = {269715, 184166, 608314, 516680, 848577, 539106, 449479, 281554, 747598, 117458, 260831, 404255, 571792, 458163, 132372, 769704, 428516, 302625, 810376, 767371, 954355, 709242, 150243, 620533, 975027, 638209, 603123, 365356, 806689, 32763, 92970, 264677, 603396, 867572, 916856, 311080, 807891};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 23896;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {127, 1000, 1000, 1000, 0, 0, 855, 256, 1000, 1000, 670, 1000, 451, 936, 1000, 1000, 642, 0, 0, 877, 1000, 1000, 1000};
    vector<int> y = {1000, 131, 1000, 539, 859, 486, 1000, 1000, 804, 809, 1000, 59, 0, 1000, 86, 525, 0, 653, 0, 0, 508, 104, 290};
    vector<int> income = {848806, 239157, 837517, 370257, 474265, 693532, 518947, 497841, 893973, 267005, 42436, 802588, 435216, 403292, 350351, 87612, 145377, 717412, 628057, 155006, 76114, 735052, 201917};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 62172;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {1000, 7, 430, 1000, 486, 303, 0, 231, 0, 868, 139, 266, 0, 615, 1000, 48, 927, 163, 660, 0, 108, 162, 960, 1000, 1000, 0, 1000, 0, 313, 213, 587, 550, 233, 0, 1000, 48, 993};
    vector<int> y = {134, 0, 1000, 1000, 1000, 1000, 437, 0, 400, 1000, 1000, 1000, 402, 0, 741, 1000, 1000, 1000, 1000, 113, 1000, 0, 1000, 213, 923, 50, 105, 0, 1000, 1000, 1000, 0, 0, 648, 21, 0, 1000};
    vector<int> income = {679196, 57343, 44840, 419507, 35381, 823153, 182649, 548322, 926183, 814430, 309553, 514001, 991752, 747336, 728074, 767685, 740226, 245838, 655851, 600667, 554218, 709583, 491252, 675329, 287282, 121988, 849553, 256986, 425508, 953710, 376387, 537254, 50997, 554139, 423078, 329971, 504196};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 27728;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {0, 1000, 0, 423, 455, 1000, 952, 335, 0, 1000, 552, 607, 0, 231, 0, 1000, 1000, 1000, 974, 0, 1000, 1000, 750, 0, 0, 0, 0, 1000, 1000, 0, 1000, 0, 393, 0, 1000, 0, 0, 795, 1000, 225, 0, 10, 1000, 949, 578};
    vector<int> y = {291, 534, 487, 1000, 0, 65, 0, 1000, 682, 710, 0, 1000, 0, 1000, 405, 331, 620, 261, 0, 584, 264, 908, 0, 925, 413, 559, 324, 347, 1000, 745, 156, 123, 0, 183, 104, 294, 884, 1000, 122, 1000, 99, 0, 245, 0, 1000};
    vector<int> income = {707419, 764666, 695240, 773599, 102654, 28500, 201340, 774506, 480268, 13665, 704001, 109238, 649039, 348449, 488070, 927441, 624651, 926417, 568907, 960379, 705120, 502305, 790410, 128619, 407269, 64784, 934160, 907480, 483074, 156110, 328173, 372970, 99584, 775423, 214050, 282591, 59955, 26934, 785734, 967851, 527980, 700792, 500649, 373726, 557937};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 4549;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {970, 485, 324, 419, 280, 490, 485, 738, 485, 708, 485, 85, 991, 485, 161, 324, 321, 55, 321, 321, 978, 819, 485, 485, 409, 324, 324, 832, 321, 637, 324, 652, 903, 312, 231, 321, 485, 321, 485, 321, 485};
    vector<int> y = {453, 361, 447, 453, 453, 201, 851, 201, 659, 453, 397, 231, 453, 4, 201, 295, 28, 231, 675, 615, 201, 201, 163, 382, 201, 219, 866, 231, 406, 201, 250, 201, 453, 453, 453, 953, 746, 878, 306, 359, 600};
    vector<int> income = {360562, 320904, 764916, 634285, 382249, 67648, 940506, 25771, 654976, 48340, 148178, 708206, 697014, 284157, 515587, 894277, 244224, 523113, 466737, 744940, 332868, 608910, 575433, 43685, 738657, 248940, 473840, 961623, 477372, 369289, 276313, 304977, 370866, 272416, 442544, 842752, 192937, 910453, 437898, 808850, 207676};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 1541;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {321, 324, 485, 116, 324, 693, 9, 435, 626, 321, 324, 232, 649, 324, 269, 485, 775, 324, 367, 816, 485, 991, 352, 493, 557, 321, 569, 321, 827, 485, 321, 324, 61, 237, 321, 919, 293, 513, 680, 473, 247, 987, 324, 738, 321, 730, 485, 485, 527};
    vector<int> y = {944, 902, 902, 201, 325, 453, 453, 453, 231, 286, 222, 453, 231, 815, 453, 12, 231, 696, 453, 453, 939, 231, 453, 231, 201, 510, 453, 664, 453, 572, 259, 965, 201, 201, 990, 231, 453, 453, 201, 201, 453, 453, 457, 231, 315, 201, 103, 689, 201};
    vector<int> income = {97326, 817866, 74132, 876677, 14498, 61441, 230574, 196572, 479136, 55956, 508344, 879742, 760180, 78833, 138732, 231128, 314936, 936823, 398475, 853439, 571519, 26861, 933259, 413293, 573825, 700309, 690073, 505878, 380730, 642469, 228976, 230382, 407599, 967816, 513459, 416823, 354055, 932423, 213143, 790501, 623975, 199615, 787496, 994279, 720540, 372251, 764955, 332504, 8738};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 31196;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {3, 4, 995, 0, 995, 999, 3, 997, 3, 999, 5, 5, 2, 1000, 0, 995, 4, 2, 998, 995, 998, 6, 2, 2, 999, 1000, 997, 1, 6, 6, 5, 5, 1, 999, 0, 997, 1000, 2, 996, 998, 996, 5, 5, 999, 1000, 995, 999, 997, 1, 998};
    vector<int> y = {4, 1, 1000, 4, 997, 995, 0, 1000, 5, 998, 5, 1, 5, 996, 5, 999, 6, 0, 998, 995, 996, 2, 2, 4, 997, 999, 996, 5, 6, 0, 0, 6, 3, 1000, 6, 999, 1000, 1, 995, 999, 997, 2, 4, 996, 998, 998, 999, 997, 4, 997};
    vector<int> income = {369429, 911689, 566590, 930777, 97799, 513446, 267028, 808514, 555717, 564281, 756797, 708711, 23163, 611040, 827729, 205814, 190986, 423644, 88666, 949613, 371200, 216309, 19493, 777296, 725166, 286046, 187905, 569178, 384920, 491361, 177897, 935067, 762531, 37804, 418608, 371465, 458068, 766751, 617284, 456023, 11679, 491398, 37164, 593727, 222633, 248807, 356639, 35066, 440311, 778211};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 6688;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {5, 999, 2, 1, 0, 0, 997, 6, 2, 998, 997, 997, 0, 997, 995, 1, 997, 5, 998, 2, 4, 3, 996, 1, 996, 999, 996, 997, 6, 5, 998, 998, 2, 3, 1, 999, 0, 3, 996, 995, 999, 1000, 5, 995, 0, 995, 4, 4, 1000, 1000};
    vector<int> y = {6, 999, 4, 2, 2, 0, 1000, 3, 3, 997, 996, 998, 6, 999, 996, 6, 997, 2, 996, 6, 0, 1, 997, 3, 996, 1000, 999, 995, 4, 4, 1000, 995, 5, 5, 1, 995, 5, 2, 998, 997, 998, 997, 0, 995, 1, 999, 4, 3, 995, 1000};
    vector<int> income = {762250, 416668, 236691, 105259, 290023, 241535, 492178, 969981, 703894, 152862, 602329, 939139, 539434, 308411, 530753, 514340, 901567, 995020, 99768, 647284, 285574, 720516, 187812, 636522, 976001, 426959, 278691, 969491, 120499, 153339, 685186, 776961, 412883, 933251, 456252, 761279, 231042, 210837, 160112, 244543, 564680, 655687, 523061, 498116, 467995, 921674, 813226, 999563, 671981, 306146};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 2481;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {3, 995, 998, 1000, 2, 996, 1000, 995, 996, 999, 3, 4, 0, 4, 0, 997, 996, 997, 1000, 2, 2, 4, 997, 0, 2, 1, 3, 3, 1, 5, 5, 997, 2, 995, 0, 995, 1, 998, 998, 5, 996, 997, 5, 996, 998, 1000, 0, 0, 996, 998};
    vector<int> y = {10, 9, 0, 5, 3, 5, 3, 5, 3, 10, 9, 6, 5, 8, 1, 2, 1, 9, 8, 4, 9, 3, 0, 8, 7, 10, 8, 7, 3, 4, 10, 5, 6, 6, 9, 10, 8, 7, 10, 0, 10, 1, 5, 9, 3, 4, 2, 10, 8, 5};
    vector<int> income = {626822, 91737, 508219, 559226, 425528, 502493, 646694, 996943, 305873, 204036, 256219, 729276, 131670, 29099, 65799, 643186, 32554, 16334, 743351, 127737, 678163, 467136, 603025, 381565, 838995, 743619, 67823, 892972, 903654, 578004, 486644, 154315, 554403, 990550, 820126, 510827, 944468, 12663, 308067, 832139, 140454, 45124, 859345, 738885, 998873, 994639, 267578, 223008, 494937, 928575};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 5150;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {5, 5, 995, 1, 3, 995, 997, 1000, 5, 3, 996, 1000, 3, 996, 5, 1000, 0, 997, 2, 997, 3, 1000, 5, 2, 995, 1000, 995, 999, 998, 999, 4, 5, 996, 1, 4, 1, 0, 996, 0, 3, 995, 995, 995, 998, 3, 3, 996, 0, 997, 2};
    vector<int> y = {10, 8, 2, 6, 9, 7, 2, 6, 6, 1, 9, 2, 3, 0, 5, 7, 8, 6, 0, 10, 0, 10, 7, 4, 9, 8, 6, 4, 6, 9, 8, 1, 7, 5, 1, 4, 9, 8, 5, 4, 0, 5, 3, 9, 8, 5, 3, 10, 0, 10};
    vector<int> income = {370644, 94440, 405184, 370599, 814838, 572039, 9917, 67136, 169960, 940256, 810090, 931337, 171894, 173995, 545488, 833615, 241670, 745939, 355638, 40691, 660812, 826443, 258422, 832599, 902515, 969831, 501, 49829, 996351, 207764, 498538, 448336, 758250, 739495, 159008, 288307, 673745, 396458, 24092, 846854, 464224, 96519, 517310, 774363, 711891, 582122, 655495, 210850, 697065, 93271};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 5938;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {219, 85, 362, 278, 357, 203, 482, 13, 322, 442, 409, 274, 467, 133, 151, 334, 406, 9, 280, 397, 246, 340, 283, 200, 348, 486, 297, 440, 415, 463, 364, 129, 252, 400, 256, 32, 382, 188, 113, 328, 176, 337, 351, 233, 413, 23, 305, 265, 194};
    vector<int> y = {441, 173, 727, 559, 717, 409, 967, 29, 647, 887, 821, 551, 937, 269, 305, 671, 815, 21, 563, 797, 495, 683, 569, 403, 699, 975, 597, 883, 833, 929, 731, 261, 507, 803, 515, 67, 767, 379, 229, 659, 355, 677, 705, 469, 829, 49, 613, 533, 391};
    vector<int> income = {804785, 287254, 402900, 644217, 256738, 569302, 156966, 362439, 295382, 561499, 330375, 927873, 456301, 282680, 947836, 542272, 98661, 816956, 46706, 215066, 808606, 215123, 497516, 262682, 233590, 224152, 136286, 55032, 304916, 769592, 313591, 669996, 858905, 571609, 581071, 889891, 473290, 249230, 579724, 704565, 357572, 351605, 850142, 433656, 637430, 509960, 527613, 846549, 144463};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 537451;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {83, 13, 87, 8, 14, 92, 27, 16, 62, 33, 76, 65, 47, 63, 38, 17, 73, 9, 37, 40, 99, 72, 18, 45, 90, 41, 57, 61, 4, 19, 66, 59, 98, 23, 53, 29, 3, 30, 80};
    vector<int> y = {827, 127, 867, 77, 137, 917, 267, 157, 617, 327, 757, 647, 467, 627, 377, 167, 727, 87, 367, 397, 987, 717, 177, 447, 897, 407, 567, 607, 37, 187, 657, 587, 977, 227, 527, 287, 27, 297, 797};
    vector<int> income = {372095, 848317, 714458, 90034, 632353, 213459, 826064, 823849, 140022, 134370, 989699, 724106, 925511, 344749, 299048, 510174, 264987, 499102, 412537, 558601, 126171, 10033, 110332, 681978, 74894, 893890, 330112, 985151, 113196, 781262, 498487, 361361, 442624, 620254, 356933, 758547, 106137, 517410, 115728};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 862919;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {326, 301, 890, 506, 497, 674, 383, 668, 176, 401, 209, 626, 149, 575, 218, 47, 446, 126, 526, 531, 141, 419, 473, 587, 556, 41, 726, 731, 671, 44, 256, 641, 35, 119, 863, 26};
    vector<int> y = {401, 371, 591, 335, 329, 447, 253, 443, 115, 491, 137, 761, 97, 381, 143, 29, 295, 161, 641, 647, 179, 277, 313, 389, 677, 25, 881, 485, 815, 27, 317, 425, 21, 77, 573, 15};
    vector<int> income = {58764, 260218, 503819, 583576, 13983, 990842, 810428, 798476, 625385, 612381, 178645, 732081, 46995, 66592, 51768, 701175, 331638, 108425, 396564, 397709, 733882, 610221, 645163, 850777, 801711, 461909, 407369, 631500, 308678, 843114, 149946, 160123, 703980, 8548, 610853, 555933};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 1559;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {113, 77, 23, 158, 5, 14, 140, 149, 32, 86, 131, 59, 68, 95, 50, 122, 41};
    vector<int> y = {63, 47, 23, 83, 15, 19, 75, 79, 27, 51, 71, 39, 43, 55, 35, 67, 31};
    vector<int> income = {5614, 913020, 232236, 447207, 12281, 42649, 327675, 535925, 293692, 925976, 625032, 965626, 139073, 839742, 439894, 517545, 353919};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 832326;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {158, 95, 14, 104, 131, 5, 23, 59, 32, 423, 122, 121, 141, 41, 657, 22, 167, 77, 837, 904, 140, 86, 513, 113, 68, 952, 149, 8};
    vector<int> y = {83, 55, 19, 59, 71, 15, 23, 39, 27, 651, 67, 297, 465, 31, 484, 948, 87, 47, 605, 382, 75, 51, 632, 63, 43, 692, 79, 843};
    vector<int> income = {681699, 346385, 223879, 352769, 234942, 876321, 656285, 627604, 850397, 344618, 564518, 64779, 637870, 747279, 939824, 99934, 154658, 450917, 500677, 21058, 16845, 97885, 745036, 123698, 992066, 698397, 360843, 642674};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 20505;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {905, 941, 122, 771, 409, 684, 698, 664, 925, 985, 543, 662, 374, 224, 558, 338, 393, 397, 906, 882, 676, 735, 176, 75, 934, 919, 940, 808, 607, 93, 430, 584, 487, 889, 216, 494, 595, 893, 195, 701, 784, 548, 398, 427, 799, 775, 678, 834, 821, 564};
    vector<int> y = {905, 941, 122, 771, 409, 684, 698, 664, 925, 985, 543, 662, 374, 224, 558, 338, 393, 397, 906, 882, 676, 735, 176, 75, 934, 919, 940, 808, 607, 93, 430, 584, 487, 889, 216, 494, 595, 893, 195, 701, 784, 548, 398, 427, 799, 775, 678, 834, 821, 564};
    vector<int> income = {756202, 662445, 419551, 14100, 732770, 114175, 391275, 630460, 625735, 457068, 508379, 778498, 21882, 481927, 143157, 945658, 913576, 275824, 817650, 150539, 69372, 29798, 72030, 785346, 795202, 787507, 241495, 572484, 756201, 222557, 828702, 372284, 738029, 244148, 731962, 484395, 354077, 570086, 713836, 993945, 267689, 410932, 712752, 911094, 602247, 399799, 864293, 445880, 489027, 533746};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 299548;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {153, 50, 110, 95, 174, 38, 447, 961, 929, 691, 642, 513, 171, 103, 748, 657, 477, 790, 686, 29, 2, 179, 809, 436, 584, 522, 856, 484, 337, 360, 699, 324, 210, 238, 382, 723, 738, 944, 74, 779, 386, 172, 756, 961, 755, 876, 553, 674, 932, 814};
    vector<int> y = {152, 50, 109, 94, 174, 38, 447, 961, 928, 691, 641, 513, 172, 102, 748, 657, 476, 789, 687, 30, 1, 178, 810, 436, 585, 523, 856, 483, 336, 360, 698, 324, 210, 238, 381, 723, 737, 944, 74, 780, 385, 173, 755, 960, 755, 876, 553, 675, 932, 815};
    vector<int> income = {223845, 251686, 37664, 449214, 827091, 808554, 489220, 668313, 978458, 868490, 13244, 962710, 500809, 860292, 739656, 988138, 914872, 107620, 140762, 189410, 311359, 66739, 78144, 620043, 337968, 895237, 571648, 8103, 115441, 875702, 544413, 628292, 349736, 786639, 977013, 291936, 550664, 750340, 8190, 342518, 442451, 507955, 750045, 741293, 496214, 371671, 867844, 788221, 683448, 775603};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 57592;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {287, 11, 466, 103, 179, 777, 270, 248, 838, 243, 403, 326, 526, 820, 746, 203, 141, 38, 914, 917, 844, 335, 396, 20, 808, 96, 987, 131, 482, 980, 597, 762, 175, 878, 276, 294, 257, 426, 714, 641, 761, 917, 61, 6, 833, 54, 892, 338, 1, 705};
    vector<int> y = {286, 9, 468, 104, 181, 779, 271, 249, 836, 245, 405, 327, 526, 821, 745, 203, 143, 40, 915, 916, 845, 337, 398, 21, 809, 98, 987, 130, 483, 980, 597, 764, 176, 879, 278, 293, 255, 427, 713, 642, 760, 915, 63, 8, 834, 52, 893, 340, 3, 707};
    vector<int> income = {989043, 633305, 813059, 382876, 726056, 851595, 632272, 963864, 303222, 64243, 424477, 695344, 435727, 24678, 583125, 381161, 590871, 147245, 766488, 432541, 142320, 1506, 112290, 48443, 997163, 445556, 949526, 420732, 647472, 817580, 906853, 832234, 872084, 936591, 56451, 882157, 60115, 116914, 683291, 23499, 976620, 978342, 53362, 695631, 173415, 517161, 432381, 136620, 216823, 351276};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 8436;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {711, 898, 959, 814, 635, 383, 104, 968, 661, 149, 26, 13, 811, 448, 76, 859, 729, 355, 491, 963, 284, 408, 142, 113, 421, 461, 513, 126, 685, 901, 769, 909, 586, 369, 736, 415, 76, 160, 149, 609, 372, 197, 644, 792, 278, 286, 647, 998, 802, 212};
    vector<int> y = {711, 898, 961, 815, 634, 380, 104, 967, 664, 151, 27, 10, 813, 445, 73, 857, 726, 356, 489, 961, 282, 406, 143, 112, 418, 464, 512, 126, 682, 900, 771, 906, 588, 366, 734, 415, 75, 163, 152, 610, 375, 196, 647, 795, 277, 286, 650, 998, 801, 212};
    vector<int> income = {406267, 735759, 930778, 482330, 574431, 95388, 899851, 759092, 471966, 770737, 5509, 384301, 523916, 750069, 169859, 508267, 421644, 708114, 827677, 584655, 365241, 865406, 599321, 78558, 470210, 722418, 826824, 604503, 826280, 9381, 339199, 563375, 206637, 187585, 428869, 572508, 863205, 309430, 96753, 951645, 411406, 639829, 937409, 289282, 167338, 407846, 974675, 303528, 596223, 801839};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 1225;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {427, 145, 384, 927, 945, 799, 965, 310, 117, 212, 589, 778, 93, 28, 865, 547, 662, 765, 748, 623, 756, 632, 438, 22, 86, 821, 716, 804, 200, 837, 92, 835, 78, 198, 994, 605, 969, 229, 650, 55, 528, 276, 422, 97, 461, 722, 153, 805, 13, 340};
    vector<int> y = {426, 148, 380, 927, 942, 795, 965, 314, 119, 208, 592, 778, 89, 32, 868, 549, 665, 763, 750, 626, 754, 635, 439, 20, 90, 820, 717, 802, 204, 841, 93, 837, 74, 195, 992, 607, 966, 230, 646, 58, 525, 273, 426, 94, 457, 723, 157, 802, 15, 340};
    vector<int> income = {998929, 560373, 30587, 663884, 950669, 229451, 627223, 428021, 841595, 509305, 91832, 382698, 339944, 19039, 968562, 146225, 16914, 361899, 562213, 141673, 795171, 835944, 23557, 92809, 888543, 225198, 837615, 395400, 376967, 542052, 884053, 696690, 725321, 82129, 97842, 989850, 950338, 335711, 92734, 791659, 17397, 797983, 200560, 5993, 847325, 998450, 986201, 59488, 209432, 92742};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 61808;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {0, 1, 2, 3, 4, 5};
    vector<int> y = {0, 0, 1, 1, 2, 2};
    vector<int> income = {5, 3, 10, 5, 1, 2};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
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
    vector<int> x = {4, 10, 5, 6};
    vector<int> y = {10, 7, 7, 9};
    vector<int> income = {1, 10, 6, 7};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {1, 2, 3};
    vector<int> y = {3, 2, 1};
    vector<int> income = {1, 1000000, 1};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {4, 2, 4, 2, 3, 6, 3, 5};
    vector<int> y = {1, 2, 4, 3, 3, 2, 4, 5};
    vector<int> income = {4, 5, 2, 6, 7, 4, 2, 4};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {958, 76, 92, 399, 206, 814, 178, 412, 240, 974, 573, 895, 258, 277, 964, 540, 857, 693, 51, 510, 670, 826, 577, 153, 441, 847, 626, 369, 152, 588, 206, 874, 716, 741, 757, 649, 648, 222, 285, 519, 654, 699, 857, 62, 888, 964, 768, 468, 792, 321};
    vector<int> y = {958, 732, 880, 54, 114, 909, 999, 663, 747, 435, 359, 100, 468, 156, 76, 778, 866, 668, 311, 111, 96, 251, 886, 958, 283, 991, 93, 438, 557, 780, 111, 810, 76, 560, 661, 508, 686, 283, 394, 10, 403, 788, 688, 274, 374, 239, 315, 466, 473, 321};
    vector<int> income = {598674, 870261, 739833, 522440, 519717, 704291, 909617, 762409, 960030, 518152, 516102, 823455, 666907, 988258, 925933, 628389, 838160, 700995, 989674, 647306, 961733, 958394, 932891, 703796, 779978, 563626, 765829, 503936, 906424, 507420, 642009, 731656, 915494, 716880, 948002, 782366, 790980, 737039, 718861, 526549, 617048, 591004, 950165, 964638, 949235, 929961, 694059, 786000, 671726, 748197};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 2711;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {0, 1000, 0, 1000};
    vector<int> y = {0, 0, 1000, 1000};
    vector<int> income = {23452, 52345, 6545, 77656};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 4686;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {41, 467, 334, 500, 169, 724, 478, 358, 962, 464, 705, 145, 281, 827, 961, 491, 995, 942, 827, 436, 391, 604, 902, 153, 292, 382, 421, 716, 718, 895, 447, 726, 771, 538, 869, 912, 667, 299, 35, 894, 703, 811, 322, 333, 673, 664, 141, 711, 253, 868};
    vector<int> y = {547, 644, 662, 757, 37, 859, 723, 741, 529, 778, 316, 35, 190, 842, 288, 106, 40, 942, 264, 648, 446, 805, 890, 729, 370, 350, 6, 101, 393, 548, 629, 623, 84, 954, 756, 840, 966, 376, 931, 308, 944, 439, 626, 323, 537, 538, 118, 82, 929, 541};
    vector<int> income = {4834, 31116, 4640, 29659, 22705, 9931, 13978, 2307, 31674, 22387, 5022, 28746, 26925, 19073, 6271, 5830, 26778, 15574, 5098, 16513, 23987, 13291, 9162, 18637, 22356, 24768, 23656, 15575, 4032, 12053, 27351, 1151, 16942, 21725, 13967, 3431, 31108, 30192, 18008, 11338, 15458, 12288, 27754, 10384, 14946, 8910, 32210, 9759, 24222, 18589};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 343;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {4, 2, 4, 2, 3, 6, 3, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> y = {1, 2, 4, 3, 3, 2, 4, 5, 123, 12, 18, 193, 23, 25, 239, 131, 16, 46, 78, 4, 1, 444, 888, 74, 88, 125, 789, 987, 687, 879};
    vector<int> income = {4, 5, 2, 6, 7, 4, 2, 4, 898789, 898789, 898789, 898789, 898789, 898789, 898789, 898789, 898789, 898789, 898789, 898789, 898789, 898789, 898789, 898789, 898789, 898789, 898789, 898789, 898789, 898789};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {564, 127, 380, 748, 585, 376, 897, 289, 450, 198, 870, 591, 265, 327, 620, 577, 323, 835, 233, 640, 303, 998, 53, 679, 543, 662, 959, 477, 847, 558, 417, 57, 617, 648, 498, 409, 704, 535, 95, 7, 846, 830, 712, 576, 50, 469, 427, 821, 363, 997};
    vector<int> y = {183, 288, 873, 280, 901, 837, 632, 876, 794, 668, 296, 473, 647, 192, 406, 922, 245, 813, 961, 772, 481, 929, 279, 436, 341, 300, 174, 887, 912, 933, 522, 347, 395, 528, 346, 531, 277, 698, 489, 716, 208, 58, 796, 132, 59, 576, 827, 529, 152, 681};
    vector<int> income = {140981, 252477, 89341, 869006, 570623, 871006, 184300, 528922, 822295, 602249, 644693, 214755, 958069, 594690, 678325, 67425, 865519, 65805, 16221, 365903, 820072, 304366, 707400, 940394, 307638, 749743, 37476, 809610, 646117, 499967, 223810, 144124, 136415, 557932, 288234, 356148, 864498, 422887, 599613, 539612, 298993, 472215, 167893, 829727, 11653, 179461, 394606, 834372, 854793, 1000000};
    TreesDivision* pObj = new TreesDivision();
    clock_t start = clock();
    int result = pObj->minDifference(x, y, income);
    clock_t end = clock();
    delete pObj;
    int expected = 24458;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22766988&rd=13694&pm=9873
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
#define PB push_back
#define MP make_pair
#define ST first
#define ND second
#define INF 1000000100
#define det(a,b,c) (( a.ST*(b.ND-c.ND) + b.ST*(c.ND-a.ND) + c.ST*(a.ND-b.ND) ) )
using namespace std;
typedef pair<int,int> pi;
typedef long long int lld;
typedef vector<int> vi;
typedef double lf;
 
class TreesDivision {
public:
  int minDifference(vector <int>, vector <int>, vector <int>);
};
vector<int> X,Y,V;
bool op(int a,int b){
  return MP(X[a],Y[a])<MP(X[b],Y[b]);
}
int wynik=INF,lol1,lol2,suma,dot,dot2;
 
int TreesDivision::minDifference(vector <int> x, vector <int> y, vector <int> il) {
X=x;
Y=y;
  for(int i=0;i<x.size();i++){
    for(int j=i+1;j<x.size();j++){
      V.clear();
      V.PB(i);
      V.PB(j);
      lol1=lol2=suma=dot=dot2=0;
      suma=il[i]+il[j];
      for(int k=0;k<x.size();k++)
        if(k!=i && k!=j)
          if(det(MP(x[i],y[i]),MP(x[j],y[j]),MP(x[k],y[k]))>0)
            lol1+=il[k];
          else if(det(MP(x[i],y[i]),MP(x[j],y[j]),MP(x[k],y[k]))<0)
            lol2+=il[k];
          else{
            V.PB(k);
            suma+=il[k];
          }
      sort(V.begin(),V.end(),op);
      wynik=min(wynik,abs(lol1-(lol2+suma)));
      for(int i=0;i<V.size();i++){
        dot+=il[V[i]];
        wynik=min(wynik,abs((lol1+dot)-(lol2+suma-dot)));
      }
      wynik=min(wynik,abs((lol1+suma)-lol2));
      for(int i=0;i<V.size();i++){
        dot2+=il[V[i]];
        wynik=min(wynik,abs((lol1+suma-dot2)-(lol2+dot2)));
      }
      
    }
  }  
  
  return wynik;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/