/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4754
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

class BuyingCheap {
public:
    int thirdBestPrice(vector<int> prices);
};

int BuyingCheap::thirdBestPrice(vector<int> prices) {
    int ret;
    return ret;
}


int test0() {
    vector<int> prices = {10, 40, 50, 20, 70, 80, 30, 90, 60};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> prices = {10, 10, 10, 10, 20, 20, 30, 30, 40, 40};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> prices = {10};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> prices = {80, 90, 80, 90, 80};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
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
    vector<int> prices = {1000};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
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
    vector<int> prices = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
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
    vector<int> prices = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
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
    vector<int> prices = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> prices = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> prices = {1, 1, 1, 1, 1, 1, 1, 1000, 1, 1, 1, 1, 1, 2, 1, 1, 1, 999, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> prices = {1, 2, 3};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> prices = {1, 3, 2};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> prices = {2, 1, 3};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> prices = {2, 3, 1};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
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
    vector<int> prices = {3, 1, 2};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> prices = {3, 2, 1};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> prices = {1, 1};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> prices = {89, 98};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> prices = {997, 998, 997, 998, 997, 1000, 997, 997, 999, 998};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> prices = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 911, 912, 913, 914, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 911, 912, 913, 914, 7, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 911, 912, 913, 914};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> prices = {384, 887, 778, 916, 794, 336, 387, 493, 650, 422, 363, 28, 691, 60, 764, 927, 541, 427, 173, 737, 212, 369, 568, 430, 783, 531, 863, 124, 68, 136, 930, 803, 23, 59, 70, 168, 394, 457, 12, 43, 230, 374, 422, 920, 785, 538, 199, 325, 316, 371};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> prices = {414, 527, 92, 981, 957, 874, 863, 171, 997, 282, 306, 926, 85, 328, 337, 506, 847, 730, 314, 858, 125, 896, 583, 546, 815, 368, 435, 365, 44, 751, 88, 809, 277, 179, 789, 585, 404, 652, 755, 400, 933, 61, 677, 369, 740, 13, 227, 587, 95, 540};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> prices = {796, 571, 435, 379, 468, 602, 98, 903, 318, 493, 653, 757, 302, 281, 287, 442, 866, 690, 445, 620, 441, 730, 32, 118, 98, 772, 482, 676, 710, 928, 568, 857, 498, 354, 587, 966, 307, 684, 220, 625, 529, 872, 733, 830, 504, 20, 271, 369, 709, 716};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> prices = {341, 150, 797, 724, 619, 246, 847, 452, 922, 556, 380, 489, 765, 229, 842, 351, 194, 501, 35, 765, 125, 915, 988, 857, 744, 492, 228, 366, 860, 937, 433, 552, 438, 229, 276, 408, 475, 122, 859, 396, 30, 238, 236, 794, 819, 429, 144, 12, 929, 530};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> prices = {777, 405, 444, 764, 614, 539, 607, 841, 905, 819, 129, 689, 370, 918, 918, 997, 325, 744, 471, 184, 491, 500, 773, 726, 645, 591, 506, 140, 955, 787, 670, 83, 543, 465, 198, 508, 356, 805, 349, 612, 623, 829, 300, 344, 747, 569, 341, 423, 312, 811};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> prices = {606, 802, 662, 731, 879, 306, 321, 737, 445, 627, 523, 466, 709, 417, 283, 259, 925, 638, 63, 625, 601, 37, 453, 900, 380, 551, 469, 72, 974, 132, 882, 931, 934, 895, 661, 164, 200, 982, 900, 997, 960, 774, 814, 669, 191, 96, 927, 467, 85, 341};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> prices = {91, 685, 377, 543, 937, 108, 446, 757, 180, 419, 888, 413, 349, 173, 660, 10, 337, 211, 343, 588, 207, 302, 714, 373, 322, 256, 820, 600, 722, 905, 940, 812, 941, 668, 706, 229, 128, 151, 985, 659, 921, 225, 423, 270, 397, 82, 631, 85, 293, 973};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> prices = {673, 851, 626, 386, 223, 300, 641, 43, 899, 714, 299, 191, 525, 591, 210, 582, 820, 337, 733, 156, 995, 5, 380, 770, 274, 777, 851, 256, 861, 143, 580, 885, 994, 206, 622, 568, 505, 614, 962, 755, 327, 260, 945, 203, 203, 507, 785, 22, 843, 869};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> prices = {529, 190, 873, 909, 959, 499, 37, 809, 754, 249, 304, 334, 134, 649, 891, 755, 568, 747, 369, 530, 501, 47, 789, 798, 250, 991, 304, 34, 364, 498, 254, 893, 687, 126, 153, 997, 976, 189, 158, 730, 437, 461, 415, 922, 461, 305, 29, 28, 51, 749};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> prices = {557, 903, 795, 698, 700, 44, 40, 3, 429, 404, 501, 682, 648, 539, 160, 152, 536, 135, 340, 693, 216, 128, 505, 630, 50, 965, 286, 430, 344, 336, 178, 901, 239, 972, 950, 290, 368, 989, 293, 796, 744, 145, 830, 391, 683, 341, 542, 570, 827, 233};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> prices = {262, 43, 361, 118, 24, 762, 82, 310, 191, 426, 997, 368, 678, 235, 691, 627, 525, 58, 615, 169, 206, 359, 313, 387, 101, 347, 727, 995, 917, 553, 579, 530, 947, 291, 648, 971, 52, 81, 632, 594, 858, 628, 313, 887, 215, 356, 513, 91, 413, 480};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> prices = {611, 970, 190, 275, 356, 642, 621, 434, 988, 889, 339, 567, 771, 285, 857, 418, 607, 261, 850, 238, 206, 60, 218, 519, 946, 784, 874, 459, 874, 638, 290, 484, 608, 479, 758, 315, 472, 730, 101, 460, 619, 439, 26, 389, 75, 234, 158, 682, 494, 359};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> prices = {271, 700, 418, 840, 570, 364, 623, 795, 174, 848, 432, 463, 683, 391, 293, 792, 58, 116, 522, 158, 575, 492, 948, 952, 232, 22, 538, 741, 55, 31, 99, 326, 82, 517, 517, 3, 232, 140, 797, 405, 339, 581, 219, 22, 971, 863, 813, 380, 978, 686};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> prices = {537, 905, 177, 484, 208, 760, 858, 745, 500, 912, 128, 951, 237, 561, 819, 106, 564, 50, 245, 712, 806, 935, 292, 376, 956, 615, 590, 769, 994, 919, 806, 883, 823, 983, 718, 31, 94, 575, 127, 594, 487, 254, 544, 75, 815, 714, 180, 378, 763, 776};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> prices = {89, 920, 711, 733, 295, 18, 347, 236, 138, 692, 154, 944, 574, 329, 926, 292, 711, 19, 218, 837, 964, 56, 91, 859, 131, 905, 572, 662, 634, 686, 790, 74, 605, 852, 806, 251, 869, 504, 486, 7, 196, 640, 950, 121, 968, 227, 764, 678, 597, 982};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> prices = {866, 561, 37, 956, 771, 519, 212, 343, 533, 197, 380, 322, 271, 985, 173, 428, 235, 41, 284, 73, 399, 831, 64, 348, 951, 31, 574, 715, 60, 523, 48, 925, 83, 436, 233, 205, 955, 444, 899, 487, 641, 279, 160, 263, 263, 684, 42, 849, 724, 325};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> prices = {273, 123, 155, 336, 822, 458, 366, 748, 172, 777, 270, 219, 702, 704, 654, 934, 908, 960, 729, 807, 798, 721, 85, 309, 335, 699, 992, 377, 899, 716, 53, 172, 190, 560, 507, 11, 17, 225, 110, 540, 1, 379, 110, 54, 82, 115, 339, 990, 427, 68};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> prices = {148, 224, 788, 232, 533, 123, 282, 876, 851, 180, 591, 255, 351, 132, 814, 858, 495, 182, 82, 604, 721, 434, 983, 182, 488, 416, 297, 826, 405, 723, 893, 552, 298, 33, 135, 182, 507, 416, 58, 709, 596, 1000, 963, 298, 484, 777, 155, 978, 310, 588};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> prices = {933, 383, 22, 267, 564, 861, 683, 212, 686, 87, 286, 931, 991, 584, 315, 477, 117, 821, 893, 526, 529, 840, 526, 491, 137, 361, 619, 644, 338, 929, 583, 622, 311, 956, 889, 226, 816, 571, 438, 854, 9, 723, 784, 351, 658, 98, 828, 127, 270, 72};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> prices = {652, 150, 911, 529, 640, 399, 889, 611, 394, 578, 891, 977, 200, 553, 932, 88, 778, 100, 658, 567, 953, 18, 642, 736, 369, 299, 185, 196, 777, 806, 267, 429, 955, 529, 309, 594, 279, 198, 556, 673, 775, 446, 1, 326, 998, 284, 413, 128, 383, 422};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> prices = {694, 335, 440, 335, 422, 160, 986, 958, 355, 762, 763, 973, 542, 717, 853, 851, 663, 483, 400, 218, 155, 174, 16, 507, 852, 365, 791, 264, 492, 173, 38, 538, 860, 829, 872, 281, 988, 857, 591, 342, 971, 353, 666, 512, 70, 518, 362, 84, 352, 113};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> prices = {301, 507, 639, 668, 365, 490, 33, 155, 105, 876, 680, 142, 413, 539, 970, 637, 171, 957, 845, 761, 650, 815, 466, 315, 327, 887, 184, 40, 970, 536, 153, 622, 394, 791, 290, 110, 632, 674, 265, 736, 549, 296, 878, 314, 834, 199, 950, 356, 156, 794};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> prices = {469, 157, 961, 934, 824, 287, 172, 359, 678, 141, 246, 182, 762, 991, 324, 51, 101, 955, 76, 365, 43, 625, 660, 920, 290, 845, 470, 239, 552, 977, 384, 20, 134, 344, 305, 957, 982, 476, 667, 12, 968, 913, 193, 730, 903, 869, 132, 3, 175, 208};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> prices = {719, 217, 184, 378, 488, 473, 574, 958, 63, 126, 934, 798, 497, 419, 142, 154, 727, 475, 981, 394, 486, 949, 306, 31, 30, 560, 899, 161, 563, 425, 720, 281, 642, 903, 11, 481, 727, 584, 790, 141, 709, 724, 939, 558, 494, 432, 711, 221, 906, 691};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> prices = {614, 392, 639, 271, 422, 668, 830, 672, 181, 744, 96, 900, 25, 89, 155, 387, 570, 233, 970, 711, 374, 31, 434, 664, 588, 280, 95, 650, 500, 352, 340, 465, 743, 331, 87, 516, 350, 916, 187, 882, 12, 635, 134, 388, 723, 288, 774, 644, 520, 743};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> prices = {355, 245, 125, 140, 260, 64, 419, 354, 713, 270, 706, 405, 734, 800, 735, 820, 316, 436, 88, 854, 670, 451, 488, 803, 838, 563, 90, 611, 206, 961, 705, 912, 558, 830, 404, 817, 893, 822, 523, 606, 444, 580, 362, 529, 379, 448, 701, 46, 883, 788};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> prices = {900, 552, 590, 387, 354, 427, 949, 795, 37, 507, 108, 93, 418, 665, 922, 821, 481, 167, 995, 355, 124, 438, 934, 485, 318, 313, 932, 18, 710, 166, 157, 609, 70, 746, 996, 423, 172, 296, 570, 560, 802, 677, 653, 572, 341, 926, 744, 173, 92, 90};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> prices = {528, 567, 879, 813, 51, 197, 125, 334, 214, 187, 500, 371, 795, 569, 116, 142, 343, 640, 438, 264, 199, 591, 940, 203, 514, 632, 129, 258, 805, 572, 347, 684, 139, 226, 496, 541, 422, 973, 227, 635, 159, 726, 357, 953, 646, 473, 447, 340, 112, 884};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> prices = {604, 662, 826, 543, 217, 340, 175, 345, 597, 331, 268, 295, 14, 758, 520, 861, 651, 293, 833, 877, 280, 991, 954, 636, 296, 599, 108, 742, 938, 571, 977, 541, 585, 802, 84, 801, 493, 610, 497, 441, 940, 764, 736, 305, 874, 607, 165, 524, 252, 350};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> prices = {752, 531, 340, 705, 166, 987, 303, 626, 80, 592, 548, 408, 485, 132, 562, 920, 932, 54, 529, 428, 495, 820, 544, 582, 124, 769, 188, 640, 644, 439, 989, 395, 321, 681, 99, 487, 19, 753, 464, 99, 696, 11, 506, 180, 143, 67, 99, 426, 473, 979};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> prices = {998, 999, 1000};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> prices = {999, 1000};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
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
    vector<int> prices = {999, 999, 1000};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
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
    vector<int> prices = {1000, 1000, 1000};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
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
    vector<int> prices = {10};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
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
    vector<int> prices = {10, 40, 50, 20, 70, 80, 30, 90, 60};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> prices = {10, 10, 10, 10, 20, 20, 30, 30, 40, 40};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> prices = {1, 2, 3};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> prices = {30, 30, 30, 40, 40, 40};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> prices = {3, 2, 1};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> prices = {30, 20, 10};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> prices = {20, 30, 40};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> prices = {1, 1, 2};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> prices = {10, 10, 10, 10, 70, 80, 10, 10, 10};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> prices = {11, 12, 13};
    BuyingCheap* pObj = new BuyingCheap();
    clock_t start = clock();
    int result = pObj->thirdBestPrice(prices);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11904660&rd=8067&pm=4754
********************************************************************************
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
class BuyingCheap { 
public: 
  int thirdBestPrice(vector <int> v) { 
    int l = v.size(); 
    sort(v.begin(), v.end()); 
    int t = unique(&v[0], &v[l]) - &v[0]; 
    if (t < 3) return -1; 
    else return v[2]; 
  } 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/