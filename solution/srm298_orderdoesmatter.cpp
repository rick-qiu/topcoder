/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6157
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

class OrderDoesMatter {
public:
    int getOrder(vector<int> N, vector<int> M);
};

int OrderDoesMatter::getOrder(vector<int> N, vector<int> M) {
    int ret;
    return ret;
}


int test0() {
    vector<int> N = {7, 3, 3};
    vector<int> M = {3, 7, 3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> N = {3, 5, 5};
    vector<int> M = {5, 1, 5};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {3, 5, 5};
    vector<int> M = {5, 2, 4};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {5, 2, 3};
    vector<int> M = {2, 5, 3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> M = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> N = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> M = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> N = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> M = {2, 3, 4, 5, 6, 7, 8, 9, 1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> N = {1};
    vector<int> M = {1000};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> N = {1000};
    vector<int> M = {1000};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> N = {1000};
    vector<int> M = {1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> N = {1000, 1};
    vector<int> M = {1, 1000};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> N = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    vector<int> M = {2, 2, 2, 2, 2, 1, 2, 3, 4, 5};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> N = {101, 202, 303, 404, 505, 101, 202, 303, 404, 505, 101, 202, 303, 404, 505, 101, 202, 303, 404, 505};
    vector<int> M = {202, 303, 404, 505, 101, 303, 404, 505, 101, 202, 404, 505, 101, 202, 303, 101, 202, 303, 404, 505};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 255025;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> N = {101, 202, 303, 404, 505, 101, 202, 303, 404, 505, 101, 202, 303, 404, 505, 101, 202, 303, 404, 505, 1000, 303, 202};
    vector<int> M = {202, 303, 404, 505, 101, 303, 404, 505, 101, 202, 404, 505, 101, 202, 303, 101, 202, 303, 404, 505, 303, 909, 202};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 909000;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> N = {1, 1000};
    vector<int> M = {1, 1000};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> N = {1, 1};
    vector<int> M = {5, 5};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> N = {1, 1, 1, 5, 5, 5, 4, 6};
    vector<int> M = {4, 5, 6, 1, 2, 3, 2, 3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {1, 3, 1, 4};
    vector<int> M = {2, 4, 3, 2};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {507, 759, 158, 759, 438, 438, 507, 461, 507, 461, 759, 767, 438, 158, 438, 461, 759, 158, 507, 759, 767, 767, 767, 759, 767, 158, 158, 158, 507, 759, 759, 759};
    vector<int> M = {158, 759, 461, 767, 767, 438, 767, 507, 461, 158, 507, 759, 759, 767, 461, 759, 767, 158, 507, 158, 767, 759, 507, 767, 507, 438, 767, 461, 759, 461, 438, 767};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> N = {381, 630, 388, 431, 515, 725, 221, 820, 188, 903, 133, 384, 132, 975, 709, 882, 471, 923, 383, 366, 133, 525, 67, 367, 691, 429};
    vector<int> M = {133, 691, 133, 384, 525, 882, 366, 630, 923, 221, 429, 367, 820, 431, 188, 471, 975, 515, 381, 709, 903, 383, 725, 67, 132, 388};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> N = {211, 96, 41, 131, 303, 503, 348, 292, 96, 131, 903, 292, 812, 406, 903, 406, 76, 775, 41, 775, 895, 292, 418, 418, 819, 440, 195, 41, 812, 903, 131, 430, 67, 406, 440, 48, 348, 794, 857};
    vector<int> M = {857, 418, 41, 292, 418, 348, 903, 76, 794, 96, 303, 775, 406, 195, 67, 895, 440, 41, 430, 41, 406, 131, 440, 812, 503, 96, 775, 903, 819, 292, 406, 812, 131, 903, 48, 211, 292, 348, 131};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 815409;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> N = {735, 469, 890, 245, 469, 245, 855, 53, 890, 469, 763, 909, 53, 20, 763, 320, 735, 635, 909, 580, 469, 855, 53, 245, 735, 635, 635, 635, 53, 580, 405, 469};
    vector<int> M = {53, 855, 890, 635, 635, 245, 405, 635, 469, 909, 245, 20, 245, 320, 469, 469, 855, 735, 53, 909, 890, 53, 735, 763, 735, 53, 580, 469, 635, 580, 469, 763};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 826281;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> N = {362, 269, 269, 914, 701, 269, 709, 21, 709, 362, 269, 269, 789, 914, 789, 621, 529, 993, 529, 529, 21, 789, 709, 993, 53, 529, 21, 993, 789};
    vector<int> M = {21, 914, 21, 789, 269, 362, 53, 269, 269, 709, 621, 269, 709, 529, 914, 529, 789, 21, 993, 993, 789, 529, 362, 789, 701, 993, 709, 529, 269};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 986049;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> N = {416, 18, 746, 18, 738, 746, 632, 946, 764, 18, 416, 960, 985, 764, 416, 788, 985, 985, 163, 18, 746, 788, 18, 960, 985, 59, 788, 985, 946, 416, 946};
    vector<int> M = {985, 985, 764, 18, 746, 18, 764, 163, 18, 746, 632, 416, 416, 946, 960, 960, 946, 416, 788, 18, 985, 59, 946, 746, 18, 788, 985, 985, 788, 416, 738};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 970225;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> N = {513, 763, 632, 632, 422, 143, 763, 799, 546, 928, 939, 546, 939, 939, 928, 608, 143, 799, 231, 231, 143, 763, 763, 231, 608, 608, 939, 231};
    vector<int> M = {231, 546, 763, 928, 763, 143, 608, 422, 763, 632, 546, 939, 939, 928, 608, 799, 231, 143, 939, 231, 231, 632, 939, 763, 143, 608, 513, 799};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 881721;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> N = {874, 746, 263, 455, 345, 392, 807, 455, 345, 345, 807, 345, 968, 263, 20, 345, 746, 882, 746, 455, 79, 807, 746, 867, 807, 807, 874, 79, 758, 387, 872, 746, 392, 79, 392};
    vector<int> M = {807, 455, 263, 345, 807, 345, 872, 345, 455, 874, 392, 746, 746, 455, 392, 79, 79, 882, 807, 807, 746, 345, 807, 263, 79, 874, 746, 345, 867, 20, 746, 387, 758, 968, 392};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> N = {928, 604, 892, 841, 892, 841, 892, 841, 841, 604, 928, 632, 632, 632, 281, 604};
    vector<int> M = {281, 632, 841, 632, 892, 604, 841, 892, 841, 604, 632, 892, 928, 928, 841, 604};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 861184;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> N = {639, 639, 981, 747, 482, 747, 747, 423, 639, 981, 747, 747, 639, 747, 747, 482, 482, 482, 747, 423, 423, 423, 423, 747, 639, 981, 423, 639, 747, 981, 423, 747, 639, 981, 747, 639, 482, 423};
    vector<int> M = {639, 747, 639, 423, 639, 981, 747, 747, 747, 423, 747, 639, 482, 482, 747, 981, 639, 639, 423, 423, 482, 482, 747, 747, 747, 423, 423, 423, 423, 482, 747, 639, 981, 981, 747, 747, 639, 981};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 962361;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> N = {438, 375, 91, 91, 640, 886, 640, 91, 561, 438, 375, 783, 438, 174, 91, 561, 640, 621, 375};
    vector<int> M = {91, 174, 91, 640, 375, 438, 783, 621, 640, 640, 91, 375, 886, 561, 375, 91, 438, 561, 438};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 784996;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> N = {181, 181, 181, 308, 181, 181, 146, 308, 146, 308, 146, 308, 181, 146, 146, 146, 181, 308, 181, 181, 146, 181, 181, 308, 308, 308, 181};
    vector<int> M = {308, 181, 146, 146, 181, 308, 146, 181, 181, 308, 181, 308, 181, 181, 146, 308, 308, 181, 308, 146, 181, 308, 146, 181, 181, 146, 181};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 94864;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> N = {734, 654, 453, 311, 734, 377, 377, 311, 304, 734, 734, 304, 311, 453, 654, 453, 304, 311, 304, 377, 453, 311, 654, 304, 377, 654, 311, 377, 654, 377, 377, 654, 377, 453, 654, 734, 304, 377, 654, 453, 734, 453};
    vector<int> M = {311, 654, 377, 734, 304, 734, 453, 734, 304, 453, 654, 734, 377, 377, 377, 654, 311, 304, 654, 304, 453, 654, 311, 453, 734, 654, 377, 377, 311, 377, 377, 311, 304, 304, 654, 654, 311, 453, 453, 453, 377, 734};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 538756;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> N = {350, 397, 397, 356, 632, 249, 350, 606, 397, 505, 606, 356, 591, 632, 356, 632, 606, 606, 356, 591};
    vector<int> M = {350, 397, 606, 591, 606, 606, 249, 505, 632, 356, 397, 356, 632, 350, 356, 356, 397, 632, 591, 606};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 399424;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> N = {691, 39, 835, 203, 39, 691, 705, 691, 203, 203, 203, 705, 203, 16, 705, 835, 203, 705, 705, 16, 705, 16, 691, 705, 203, 691, 691, 39, 691, 705, 705, 705, 835, 16, 16, 691, 835, 203, 39, 16};
    vector<int> M = {705, 691, 203, 691, 705, 691, 203, 16, 39, 39, 835, 835, 835, 705, 16, 39, 16, 203, 691, 705, 705, 691, 16, 705, 705, 835, 203, 203, 203, 203, 691, 203, 39, 705, 705, 16, 691, 691, 705, 16};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 697225;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> N = {232, 183, 869, 177, 403, 869, 452, 395, 403, 792, 637, 477, 919, 416, 452, 383, 232, 919, 792, 869, 183, 626, 416, 637, 792, 416, 477, 477, 280, 626, 626, 280, 452, 637, 416, 704, 383, 869, 280, 792, 547, 350, 177, 383, 183, 183};
    vector<int> M = {177, 547, 869, 452, 416, 183, 792, 704, 232, 183, 403, 477, 637, 637, 232, 626, 919, 395, 792, 477, 869, 350, 626, 177, 183, 416, 280, 280, 383, 183, 792, 477, 919, 383, 403, 452, 383, 869, 452, 626, 792, 637, 280, 869, 416, 416};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 844561;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> N = {977, 977, 838, 488, 838, 838, 838, 488, 977, 488, 977, 977, 838, 977, 488, 838, 488, 977, 977, 977, 838, 977, 977, 838, 838};
    vector<int> M = {977, 838, 838, 977, 977, 488, 977, 977, 977, 977, 977, 838, 838, 838, 838, 488, 977, 488, 838, 488, 838, 977, 838, 977, 488};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 954529;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> N = {540, 266, 266, 266, 266, 266, 266, 266, 266, 947};
    vector<int> M = {947, 266, 540, 266, 266, 266, 266, 266, 266, 266};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 896809;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> N = {435, 435, 147, 147, 253, 26, 253, 253, 943, 26, 26, 147, 435, 435, 253, 435, 435, 26, 435, 253, 943, 435, 26, 26, 435, 435, 943, 435, 943, 943, 253, 26, 147, 26, 253, 943, 943, 943, 435, 147, 147, 943, 253, 435, 147, 26};
    vector<int> M = {435, 435, 435, 435, 26, 435, 435, 26, 26, 943, 147, 26, 435, 253, 253, 147, 147, 253, 435, 147, 943, 943, 147, 943, 26, 435, 435, 253, 435, 435, 147, 943, 253, 26, 26, 943, 253, 26, 253, 147, 943, 435, 253, 943, 26, 943};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 889249;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> N = {168, 870, 870, 219, 374, 870, 374, 374, 870, 702, 151, 374, 870, 151, 870, 702, 151, 168, 870, 151, 702, 702, 168, 219, 168, 374, 151, 870, 168, 168, 374, 219, 870, 702, 168, 702, 870, 374, 168};
    vector<int> M = {870, 374, 219, 168, 168, 151, 702, 702, 151, 374, 702, 219, 870, 870, 870, 374, 374, 870, 168, 168, 168, 151, 870, 870, 219, 702, 168, 870, 702, 374, 702, 870, 151, 168, 374, 151, 374, 870, 168};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 756900;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> N = {99, 703, 703, 855, 703, 202, 855, 807, 99, 807, 703, 855, 202, 752, 752, 202, 202, 807, 703, 202, 807, 703, 807, 855};
    vector<int> M = {807, 99, 855, 202, 703, 703, 752, 703, 807, 202, 855, 99, 807, 855, 855, 202, 202, 703, 703, 202, 703, 807, 807, 752};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 731025;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> N = {584, 206, 129, 129, 200, 584, 206, 71, 879, 476, 538, 879, 671, 538, 476, 206, 206, 71, 671, 69, 584, 739, 838, 476};
    vector<int> M = {879, 584, 206, 879, 671, 69, 538, 671, 206, 538, 71, 584, 739, 584, 71, 129, 200, 476, 206, 838, 129, 206, 476, 476};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 772641;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> N = {840, 612, 218, 90, 200, 292, 516, 483, 612, 620, 612, 304, 556, 531, 90, 46, 483, 200, 556, 840, 830, 292, 218, 90, 516, 417, 556, 200, 271, 528, 620, 46, 620, 304, 840, 556, 840, 516, 304, 528, 304};
    vector<int> M = {483, 531, 218, 840, 620, 528, 90, 516, 292, 556, 556, 200, 528, 612, 620, 840, 200, 516, 556, 271, 612, 516, 620, 292, 417, 840, 304, 840, 90, 483, 304, 612, 218, 46, 830, 200, 304, 556, 90, 46, 304};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 705600;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> N = {7};
    vector<int> M = {7};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> N = {114, 18, 151, 501, 59, 389, 151, 18, 59, 255, 654, 18, 384, 389, 528, 59, 199, 18, 199, 151, 151, 701, 528, 389, 59, 114, 114, 111, 199, 59, 151, 111, 501, 501, 151, 18, 111, 111, 501, 59, 114, 528, 501};
    vector<int> M = {389, 18, 151, 18, 59, 151, 114, 501, 151, 59, 111, 501, 501, 255, 59, 199, 114, 528, 114, 199, 501, 199, 528, 701, 111, 114, 501, 151, 59, 151, 528, 111, 59, 151, 654, 384, 384, 59, 389, 18, 111, 389, 18};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 6912;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> N = {64, 64, 64, 346, 346, 64, 552, 64, 260, 346};
    vector<int> M = {260, 346, 346, 64, 346, 64, 260, 64, 552, 64};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 16640;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> N = {623, 594, 251, 20, 726, 20, 251, 623, 259, 623, 726, 251, 517, 317, 43, 594, 43, 517, 259, 113, 317, 405, 405, 113, 594, 251, 20, 517, 44, 317, 726, 44, 405, 517, 20, 113, 317};
    vector<int> M = {317, 20, 317, 44, 405, 44, 20, 726, 594, 726, 594, 20, 317, 113, 405, 20, 517, 43, 623, 113, 623, 405, 517, 517, 259, 44, 259, 251, 251, 517, 726, 251, 317, 113, 43, 251, 594};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 27412;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> N = {342, 896, 734, 460, 896, 610, 533, 442, 442, 610, 610, 896, 40, 610, 342, 734, 896, 610, 533, 460};
    vector<int> M = {342, 442, 460, 610, 896, 896, 610, 533, 342, 533, 896, 896, 610, 610, 40, 734, 610, 460, 442, 896};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 657664;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> N = {170, 817, 170, 170, 170, 170, 817, 83, 817, 817, 817, 817};
    vector<int> M = {83, 170, 83, 170, 817, 817, 817, 170, 817, 817, 170, 817};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 14110;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> N = {623, 623, 623, 87, 805, 895, 623, 805, 137, 87, 87, 623, 805, 428, 137, 895, 137, 805, 902, 805, 502, 895, 805, 137, 902, 623, 895, 137, 902, 895, 902, 87, 428, 137, 902, 805, 137, 137};
    vector<int> M = {805, 623, 623, 137, 428, 895, 902, 502, 895, 902, 87, 137, 895, 805, 805, 902, 805, 623, 805, 137, 137, 895, 137, 87, 623, 895, 137, 87, 902, 87, 623, 137, 137, 428, 805, 623, 502, 805};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 452804;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> N = {700, 153, 764, 551, 700, 881, 551, 896, 419, 700, 764, 881, 153, 896, 842, 842, 201, 201, 712, 842, 896, 764, 896, 896, 201, 317};
    vector<int> M = {842, 764, 881, 896, 700, 712, 842, 201, 317, 881, 896, 153, 764, 896, 551, 764, 551, 201, 201, 700, 842, 700, 419, 153, 896, 712};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 637952;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> N = {445, 828, 809, 289, 269, 269, 546, 809, 809, 856, 546, 269, 289, 809, 809, 445, 856, 856, 108, 289, 289, 546, 546, 269, 828, 856, 445, 546, 108, 828, 856, 856};
    vector<int> M = {445, 289, 269, 269, 809, 856, 546, 445, 856, 856, 809, 108, 809, 856, 269, 809, 289, 289, 828, 762, 828, 546, 856, 269, 856, 546, 445, 828, 546, 108, 809, 289};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 416052;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> N = {56, 56, 625, 50, 398, 625, 56, 50, 647, 147, 647, 50, 625, 398, 625, 56, 748, 147, 398};
    vector<int> M = {50, 50, 398, 56, 748, 625, 398, 147, 50, 398, 625, 625, 398, 647, 647, 625, 147, 56, 56};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 22288;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> N = {167, 603, 603, 603, 904, 167, 167, 603};
    vector<int> M = {904, 167, 603, 603, 904, 603, 167, 603};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 150968;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> N = {472, 568, 472, 894, 568, 472, 568, 630, 992, 992, 827, 992, 433, 663, 992, 663, 321, 827, 992, 472, 558, 894, 433, 415, 663, 123, 558, 472};
    vector<int> M = {894, 472, 663, 992, 992, 568, 472, 630, 663, 827, 321, 992, 894, 663, 568, 472, 123, 433, 472, 992, 827, 415, 992, 558, 663, 568, 558, 433};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {834, 755, 755, 755, 834};
    vector<int> M = {119, 834, 755, 834, 755};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 89845;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> N = {689, 427, 846, 689, 299, 427, 92, 846, 62, 689, 92, 846, 689, 92, 92, 2, 62, 2, 299, 92, 215};
    vector<int> M = {689, 689, 846, 215, 92, 846, 299, 92, 427, 846, 92, 427, 689, 92, 62, 62, 92, 2, 2, 299, 92};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 63388;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> N = {759, 304, 759, 32, 304, 69, 163, 450, 829, 69, 748, 163, 304, 829, 759, 748, 69, 304, 870, 163, 829, 32, 69, 422, 163, 748, 69, 761, 32, 32, 759, 748, 163, 759, 761, 748};
    vector<int> M = {69, 69, 759, 32, 829, 304, 32, 759, 32, 759, 759, 759, 422, 163, 69, 32, 829, 304, 748, 450, 163, 304, 748, 69, 761, 829, 748, 163, 422, 748, 761, 163, 163, 870, 304, 69};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 315656;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> N = {850, 131, 735, 850, 867, 36, 131, 850, 64, 867, 64, 258, 867, 735, 258, 372, 372, 64, 867, 561, 561, 131, 867, 867, 70, 561, 867, 735, 36, 36, 258, 372, 70, 850, 561};
    vector<int> M = {867, 850, 867, 64, 850, 867, 70, 735, 131, 258, 561, 131, 131, 258, 867, 36, 561, 64, 258, 867, 561, 850, 36, 372, 70, 561, 867, 36, 735, 735, 64, 372, 372, 36, 867};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 30600;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> N = {714, 627, 991, 761, 991, 834, 539, 118, 400, 761, 714, 627, 128, 761, 761, 118, 118, 400, 705, 834, 539, 714, 627, 445, 834, 664, 714, 539, 664, 761, 705, 539, 128};
    vector<int> M = {128, 539, 118, 118, 627, 445, 627, 400, 539, 714, 834, 705, 714, 118, 627, 400, 761, 664, 539, 761, 991, 761, 118, 714, 664, 705, 714, 539, 834, 991, 761, 761, 834};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 15104;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> N = {119, 152, 152, 119, 119, 811, 152, 147, 152, 961, 903, 152, 906, 147};
    vector<int> M = {152, 119, 961, 147, 903, 906, 152, 119, 811, 152, 152, 147, 903, 119};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 137256;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> N = {725, 363, 370, 725, 363, 363, 259, 363, 89, 832, 259, 363, 482, 301, 725, 301, 414, 364, 364, 482, 259, 482, 301, 725, 414, 725, 364, 89, 301, 370, 363, 414, 414, 259, 832, 370, 414, 89, 832, 482};
    vector<int> M = {89, 482, 370, 725, 725, 301, 301, 482, 364, 363, 832, 414, 725, 363, 725, 363, 301, 832, 301, 89, 414, 370, 370, 725, 482, 259, 370, 363, 89, 363, 832, 259, 364, 364, 414, 259, 414, 482, 259, 414};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 134310;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> N = {380, 380};
    vector<int> M = {380, 978};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 371640;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> N = {489, 933, 47, 865, 430, 379, 47, 345, 865, 808, 667, 865, 422, 379, 489, 70, 47, 933, 808, 808, 379, 933};
    vector<int> M = {808, 379, 70, 268, 430, 808, 667, 379, 933, 865, 47, 865, 865, 47, 379, 808, 489, 933, 933, 47, 489, 345};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> N = {598, 290, 983, 520, 188, 598, 894, 439, 319, 276, 698, 260, 439, 520, 894, 32, 260, 32, 951, 104, 783, 41, 988, 290, 301, 276, 762, 698, 698, 54, 54, 290, 785, 894, 785, 785, 894, 41, 319, 785, 894, 598, 188, 260, 598, 32, 54};
    vector<int> M = {520, 188, 276, 785, 698, 951, 319, 762, 32, 983, 54, 301, 783, 54, 290, 785, 41, 41, 969, 785, 894, 698, 439, 260, 54, 260, 104, 32, 439, 520, 988, 894, 598, 276, 598, 290, 260, 598, 785, 698, 188, 319, 894, 598, 894, 894, 32};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 281010;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> N = {330, 714, 13, 111, 661, 194, 839, 663, 904, 412, 86, 386, 726, 83, 738, 351, 444, 911, 374, 570, 103, 766, 436, 515};
    vector<int> M = {570, 351, 83, 904, 111, 436, 330, 194, 911, 13, 839, 412, 766, 444, 386, 86, 726, 663, 738, 515, 714, 103, 374, 194};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 128234;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> N = {980, 32, 311, 416, 404, 3, 398, 759, 887, 759, 616, 46, 600, 555};
    vector<int> M = {416, 232, 555, 887, 759, 759, 980, 46, 311, 404, 600, 398, 3, 32};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 142912;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> N = {633, 335, 300, 720, 301, 594, 751, 661, 15, 906, 74, 913, 964, 65, 276, 619, 972, 92, 19, 568, 913, 75, 944, 655, 382, 503, 416, 572, 872, 910, 537, 975, 641};
    vector<int> M = {975, 972, 910, 65, 641, 92, 572, 382, 661, 276, 594, 751, 655, 239, 872, 720, 913, 633, 301, 335, 15, 964, 537, 913, 906, 75, 503, 74, 619, 19, 568, 944, 416};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 71700;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> N = {344, 180, 282, 849, 563, 240, 281};
    vector<int> M = {240, 344, 670, 282, 180, 849, 563};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 188270;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> N = {50, 160, 849, 460, 591, 727, 926, 404, 253, 608, 253, 34, 268, 707, 540, 960, 375, 109, 932, 56, 856, 122, 288, 544, 665, 967, 638, 128, 53, 958, 294, 227, 484, 704, 520, 579, 744};
    vector<int> M = {294, 484, 375, 109, 707, 288, 268, 608, 727, 128, 253, 591, 958, 122, 544, 856, 460, 253, 404, 638, 704, 50, 540, 926, 932, 53, 513, 579, 34, 520, 160, 56, 744, 227, 967, 960, 665};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 435537;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> N = {152, 466, 906};
    vector<int> M = {466, 906, 152};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 820836;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> N = {169, 375, 549, 42, 32, 861, 94, 693, 215, 855, 407, 98, 903, 46, 172, 731, 19, 815, 9, 149, 861, 876};
    vector<int> M = {407, 215, 731, 9, 98, 169, 861, 876, 861, 19, 42, 903, 693, 172, 549, 149, 32, 94, 46, 855, 815, 375};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 815409;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> N = {625, 768, 357, 534, 900, 393, 853, 938, 532, 442, 302, 70, 386, 235, 151, 194, 332, 687, 64};
    vector<int> M = {151, 687, 386, 302, 357, 625, 938, 900, 442, 393, 768, 235, 64, 194, 534, 532, 853, 332, 70};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 879844;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> N = {206, 897, 476, 198, 356, 613, 534, 208, 37, 268, 92, 450, 658, 152};
    vector<int> M = {613, 198, 37, 268, 208, 152, 658, 450, 206, 534, 356, 476, 92, 897};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 804609;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> N = {158, 671, 723, 170, 367, 766, 485, 588, 655, 723, 590, 493, 522, 148, 923};
    vector<int> M = {522, 493, 588, 367, 723, 148, 766, 158, 590, 170, 723, 923, 671, 655, 485};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 851929;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> N = {1000, 1, 1};
    vector<int> M = {1, 999, 1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 999000;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> N = {1, 1000, 1000};
    vector<int> M = {1000, 2, 1000};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> N = {1000, 999};
    vector<int> M = {1000, 999};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> N = {119, 152, 152, 119, 119, 811, 152, 147, 152, 961, 903, 152, 906, 147, 1, 1000, 1000};
    vector<int> M = {152, 119, 961, 147, 903, 906, 152, 119, 811, 152, 152, 147, 903, 119, 1000, 2, 1000};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> N = {442, 675, 391, 420, 903, 265, 820, 343, 213, 564, 18, 874, 653, 644, 56, 704, 569, 46, 879, 893, 131, 100};
    vector<int> M = {675, 704, 46, 644, 18, 100, 879, 820, 56, 653, 893, 564, 213, 569, 391, 131, 903, 265, 442, 874, 343, 420};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> N = {447, 386, 893, 520, 810, 302, 688, 735, 385, 723, 584, 801, 804, 651, 794, 465, 609};
    vector<int> M = {385, 810, 735, 609, 386, 520, 723, 651, 794, 801, 447, 302, 688, 804, 465, 893, 584};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> N = {477, 264, 381};
    vector<int> M = {477, 381, 264};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> N = {644, 709, 470, 796, 810, 400, 790, 399, 414, 528, 74, 543, 925, 694, 595, 920, 156, 263, 619, 482, 231};
    vector<int> M = {231, 470, 619, 74, 920, 644, 156, 543, 790, 595, 925, 796, 482, 709, 810, 694, 400, 528, 414, 399, 263};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> N = {222, 272, 633, 251, 275, 308, 304, 407, 970};
    vector<int> M = {970, 251, 275, 308, 407, 272, 222, 304, 633};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> N = {833, 601, 252, 179, 540, 568, 466, 174, 748, 213, 422, 591, 510, 887};
    vector<int> M = {540, 179, 833, 992, 213, 422, 568, 252, 887, 748, 591, 466, 601, 510};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> N = {213, 196, 574, 490, 311};
    vector<int> M = {574, 196, 311, 912, 490};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> N = {508, 455, 646, 816, 980, 764, 576, 152, 157, 465, 376, 590, 686, 768, 648, 424, 689, 410, 595, 708, 905, 373, 265, 972, 284, 159};
    vector<int> M = {768, 590, 708, 576, 764, 159, 284, 401, 595, 157, 508, 648, 424, 410, 980, 905, 455, 816, 686, 465, 972, 265, 646, 152, 373, 689};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> N = {485, 428, 322, 96, 587, 402, 625, 242, 82, 510, 54, 987, 130, 410, 230, 280, 147, 470, 521, 34, 629, 695, 35, 336, 798, 275, 915, 496, 520, 910, 405, 509, 33, 73, 917, 666, 153, 900, 802, 631, 255, 900, 19, 192, 3, 295};
    vector<int> M = {859, 520, 509, 322, 3, 915, 900, 275, 987, 242, 402, 33, 485, 280, 54, 521, 35, 410, 405, 631, 147, 470, 802, 428, 917, 496, 666, 230, 695, 629, 625, 130, 587, 96, 900, 295, 73, 82, 255, 798, 19, 336, 34, 153, 910, 192};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> N = {995, 492, 76, 383, 410, 386, 508, 327, 61, 687, 601};
    vector<int> M = {327, 601, 995, 386, 300, 61, 508, 492, 410, 76, 383};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> N = {91, 91, 49, 91, 91, 49, 91, 49, 91, 91, 49, 91, 91, 49, 91, 91, 91, 49, 91, 91, 49, 91};
    vector<int> M = {91, 49, 91, 91, 49, 49, 49, 49, 91, 91, 91, 49, 49, 91, 91, 91, 91, 49, 49, 49, 49, 49};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> N = {275, 793, 920, 793, 920, 793, 275, 793, 920, 275, 793, 920, 920, 920, 920, 275, 275, 920, 275, 793, 793, 275};
    vector<int> M = {275, 793, 275, 275, 793, 920, 275, 275, 793, 793, 275, 793, 275, 920, 920, 793, 920, 920, 920, 275, 275, 920};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> N = {187, 653, 653, 715, 653, 715, 187, 187, 187, 715, 715, 715, 715, 715, 653, 653, 653, 715, 187, 187, 187, 653, 187};
    vector<int> M = {715, 653, 715, 715, 187, 653, 715, 653, 187, 715, 715, 187, 715, 715, 715, 715, 187, 715, 187, 653, 715, 187, 715};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {812, 234, 234, 234, 812, 234, 234, 234, 812, 812, 234, 234, 812, 234, 812, 812, 812, 812, 812, 812, 812, 812, 234, 234, 812, 234, 812, 234, 812, 234, 812, 812, 234, 812, 234, 812, 234, 234, 812, 234};
    vector<int> M = {234, 234, 812, 234, 812, 812, 812, 812, 812, 234, 812, 234, 234, 234, 812, 812, 234, 812, 812, 234, 812, 234, 812, 234, 234, 812, 234, 812, 812, 234, 812, 812, 812, 812, 234, 234, 234, 234, 812, 812};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 190008;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> N = {257, 392, 357, 392, 392, 257, 357, 392, 257, 257, 392, 183, 357, 392, 392, 257, 183, 357, 392, 257, 746, 746, 392, 257, 183, 746, 357, 257, 257, 392, 392};
    vector<int> M = {257, 357, 746, 746, 257, 257, 257, 257, 392, 257, 257, 392, 357, 746, 392, 746, 183, 183, 183, 257, 357, 357, 257, 392, 746, 746, 357, 257, 257, 257, 357};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {111, 222, 333, 111, 444, 777, 555, 111, 777, 666, 666, 111, 444, 333, 999};
    vector<int> M = {333, 111, 222, 444, 666, 999, 111, 555, 555, 777, 555, 444, 111, 999, 333};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {50, 100, 150, 50, 50};
    vector<int> M = {100, 150, 100, 150, 50};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {1000, 100, 10, 10};
    vector<int> M = {1, 1, 100, 1000};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {1, 1000, 1, 1000, 80};
    vector<int> M = {80, 1, 1000, 80, 80};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {10, 1, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 2, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> M = {1, 10, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 6, 6, 6, 6, 6, 6, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 7, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {47, 49, 43, 41, 17, 29, 47, 49, 43, 41, 17, 29, 47, 49, 43, 41, 17, 29, 47, 49, 43, 41, 17, 29, 47, 49, 43, 41, 17, 29, 47, 49, 43, 41, 17, 29, 47, 49, 43, 41, 17, 29, 47, 49, 43, 41, 17, 29, 29};
    vector<int> M = {17, 43, 29, 47, 49, 41, 17, 43, 29, 47, 49, 41, 17, 43, 29, 47, 49, 41, 17, 43, 29, 47, 49, 41, 17, 43, 29, 47, 49, 41, 17, 43, 29, 47, 49, 41, 17, 43, 29, 47, 49, 41, 17, 43, 29, 47, 49, 41, 17};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 493;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> N = {20, 21, 20, 22, 21, 22, 20, 23, 21, 23, 22, 23, 20, 24, 21, 24, 22, 24, 23, 24, 20, 25, 21, 25, 22, 25, 2, 3, 25, 24, 25, 20, 26, 21, 26, 22, 26, 23, 26, 24, 26, 25, 26, 20, 27, 21, 27, 22, 27, 23};
    vector<int> M = {21, 20, 22, 20, 22, 21, 23, 20, 23, 21, 23, 22, 24, 20, 24, 21, 24, 22, 24, 23, 25, 20, 25, 21, 25, 22, 2, 5, 23, 25, 24, 26, 20, 26, 21, 26, 22, 26, 23, 26, 24, 26, 25, 27, 20, 27, 21, 27, 22, 27};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {5, 3, 8, 4, 6, 7, 8, 9, 8, 5, 3, 2, 5, 3, 8, 4, 6, 7, 8, 9, 8, 5, 3, 2, 5, 3, 8, 4, 6, 7, 8, 9, 8, 5, 3, 2, 5, 3, 8, 4, 6, 7, 8, 9, 8, 5, 3, 2};
    vector<int> M = {3, 8, 4, 6, 7, 8, 9, 8, 5, 3, 2, 5, 3, 8, 4, 6, 7, 8, 9, 8, 5, 3, 2, 5, 3, 8, 4, 6, 7, 8, 9, 8, 5, 3, 2, 5, 3, 8, 4, 6, 7, 8, 9, 8, 5, 3, 2, 5};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> N = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    vector<int> M = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> N = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    vector<int> M = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 25, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 25, 1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> N = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1};
    vector<int> M = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> N = {5};
    vector<int> M = {5};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> N = {5, 3, 7, 6, 4, 8};
    vector<int> M = {3, 7, 5, 4, 8, 6};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> N = {8, 1, 8, 7, 1, 6, 8, 7, 8, 7, 6, 3, 4, 6, 2, 2, 6, 5, 1, 4, 2, 6, 3, 4, 4, 2, 2, 7, 7, 5, 6, 4, 4, 2, 7, 4, 1, 4, 2, 4, 8, 5, 7, 1, 1, 2, 2, 3, 2, 6};
    vector<int> M = {1, 5, 6, 5, 6, 4, 4, 4, 6, 5, 2, 8, 8, 4, 2, 4, 2, 3, 4, 8, 1, 8, 3, 6, 7, 2, 4, 5, 2, 5, 4, 4, 2, 3, 2, 7, 3, 5, 5, 6, 4, 3, 7, 7, 7, 1, 2, 8, 2, 3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> N = {2};
    vector<int> M = {3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> N = {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 7};
    vector<int> M = {2, 3, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 2, 3, 4, 5, 6, 7, 2, 3, 4, 5, 6, 7, 2, 3, 4, 5, 6, 7, 8, 2, 3, 4, 5, 6, 7, 3, 2, 5, 6, 7, 2, 3, 4, 5, 6, 7};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> N = {1000, 2, 5, 4};
    vector<int> M = {2, 1000, 4, 5};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {990, 997, 996, 995, 994, 993, 992, 991, 998, 899, 898, 897, 896, 895, 894, 893, 892, 891, 890, 799, 798, 797, 796, 795, 794, 793, 792, 791, 790, 699, 698, 697, 696, 695, 694, 693, 692, 691, 690, 599, 598, 597, 596, 595, 594, 593, 592, 591, 590, 999};
    vector<int> M = {999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 899, 898, 897, 896, 895, 894, 893, 892, 891, 890, 799, 798, 797, 796, 795, 794, 793, 792, 791, 790, 699, 698, 697, 696, 695, 694, 693, 692, 691, 690, 599, 598, 597, 596, 595, 594, 591, 592, 593, 590};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {1, 3, 5};
    vector<int> M = {3, 1, 5};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {5, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 8, 7, 6, 97, 98, 99, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928};
    vector<int> M = {6, 5, 4, 97, 98, 99, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 3, 8, 7, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 861184;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> N = {3, 5, 3, 5, 7};
    vector<int> M = {5, 7, 5, 3, 7};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> N = {1};
    vector<int> M = {1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> N = {1, 2, 3, 4};
    vector<int> M = {2, 1, 4, 3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
    vector<int> M = {2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 3, 3};
    vector<int> M = {3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 5, 6};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> N = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
    vector<int> M = {2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> N = {2};
    vector<int> M = {1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> N = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    vector<int> M = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 625;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> N = {1, 3, 6};
    vector<int> M = {5, 1, 3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> N = {1, 2, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 5, 1, 1, 2, 1, 7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 6, 7, 8, 5, 1, 4};
    vector<int> M = {1, 4, 15, 1, 1, 1, 1, 1, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {1, 1000, 1, 1000, 1, 1000};
    vector<int> M = {1000, 1000, 1000, 1, 1, 1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> N = {1000, 1, 1, 2, 3, 2, 4, 2, 5, 2, 6, 2, 7, 2, 8, 2, 9, 2, 10, 2, 11, 2, 12, 2, 13, 2, 14, 2, 15, 2, 16, 2, 17, 2, 18, 2, 19, 2, 20, 2, 21, 2, 22, 2, 23, 2, 24, 2, 25, 2};
    vector<int> M = {1, 1000, 2, 3, 2, 4, 2, 5, 2, 6, 2, 7, 2, 8, 2, 9, 2, 10, 2, 11, 2, 12, 2, 13, 2, 14, 2, 15, 2, 16, 2, 17, 2, 18, 2, 19, 2, 20, 2, 21, 2, 22, 2, 23, 2, 24, 2, 25, 2, 2};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> N = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4};
    vector<int> M = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 2};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> N = {1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> M = {1, 2, 3, 4, 5, 6, 7, 8, 2, 3, 4, 5, 6, 7, 8, 1, 3, 4, 5, 6, 7, 8, 1, 2, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 1, 2, 3, 4, 5, 6, 7, 8};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> N = {5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 7, 3, 7, 3, 7, 3};
    vector<int> M = {3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 5, 3, 7, 3, 7};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> N = {2, 1};
    vector<int> M = {3, 2};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> N = {1, 2};
    vector<int> M = {1, 1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> N = {1, 2, 3, 5};
    vector<int> M = {2, 1, 5, 3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {7, 7, 7, 3};
    vector<int> M = {3, 3, 3, 7};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> N = {1};
    vector<int> M = {5};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> N = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    vector<int> M = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7};
    vector<int> M = {1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> N = {1, 3, 4};
    vector<int> M = {2, 4, 3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> N = {2, 1};
    vector<int> M = {1, 3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> N = {2};
    vector<int> M = {2};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> N = {1, 2, 1, 3, 1, 4, 1, 5, 1, 6, 1, 7, 1, 8, 1, 9, 1, 10, 1, 11, 1, 12, 1, 13, 1, 14, 1, 15, 1, 16, 1, 17, 1, 18, 1, 19, 1, 20, 1, 21, 1, 22, 1, 23, 1, 24, 1, 25, 1, 26};
    vector<int> M = {2, 1, 3, 1, 4, 1, 5, 1, 6, 1, 7, 1, 8, 1, 9, 1, 10, 1, 11, 1, 12, 1, 13, 1, 14, 1, 15, 1, 16, 1, 17, 1, 18, 1, 19, 1, 20, 1, 21, 1, 22, 1, 23, 1, 24, 1, 25, 1, 26, 1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 676;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> N = {2, 2};
    vector<int> M = {3, 3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {3, 5};
    vector<int> M = {1, 3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {1};
    vector<int> M = {2};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> N = {1, 1};
    vector<int> M = {2, 3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> N = {990, 990, 991, 991, 992, 992, 993, 993, 994, 994};
    vector<int> M = {991, 992, 992, 993, 993, 994, 994, 990, 990, 991};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 988036;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> N = {2, 1};
    vector<int> M = {1, 2};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> N = {3, 3};
    vector<int> M = {4, 4};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> N = {2, 1, 2, 5};
    vector<int> M = {1, 2, 5, 2};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> N = {7, 7};
    vector<int> M = {3, 3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> N = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    vector<int> M = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> N = {1, 1, 1, 1, 2};
    vector<int> M = {1, 1, 1, 1, 2};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {2, 2, 2, 3, 3, 3};
    vector<int> M = {3, 3, 3, 2, 2, 2};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> N = {1, 1};
    vector<int> M = {1, 1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
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
    vector<int> N = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3};
    vector<int> M = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> N = {2, 2};
    vector<int> M = {5, 5};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> N = {1, 2, 2};
    vector<int> M = {2, 1, 1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> N = {1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7};
    vector<int> M = {1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> N = {3, 3, 5};
    vector<int> M = {5, 5, 3};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> N = {1, 2};
    vector<int> M = {3, 1};
    OrderDoesMatter* pObj = new OrderDoesMatter();
    clock_t start = clock();
    int result = pObj->getOrder(N, M);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=9819&pm=6157
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
 
const int maxm=1000;
 
class OrderDoesMatter {
public:
  int n,deg[1010];
  bool appear[1010];
  int father[1010];
  int getfather(int v)
  {
    return (father[v]==0)?v:(father[v]=getfather(father[v]));
  }
  void merge(int u,int v)
  {
    u=getfather(u);
    v=getfather(v);
    if (u!=v)
      father[u]=v;
  }
  int getOrder(vector<int> A, vector<int> B)
  {
    n=A.size();
    memset(deg,0,sizeof(deg));
    memset(appear,false,sizeof(appear));
    memset(father,0,sizeof(father));
    int i,C1,C2;
    for (i=0;i<n;i++)
    {
      deg[A[i]]++;
      deg[B[i]]--;
      appear[A[i]]=appear[B[i]]=true;
      merge(A[i],B[i]);
    }
    C1=C2=0;
    for (i=1;i<=1000;i++)
    {
      if (appear[i] && father[i]==0)
        C1++;
      if (deg[i]!=0)
        C2++;
      if (abs(deg[i])>1)
        return -1;
    }
    if (C1>1 || C2>2)
      return -1;
    if (C2==0)
    {
      int result=0;
      for (i=1;i<=1000;i++)
        if (appear[i] && i>result)
          result=i;
      return result*result;
    }
    else
    {
      int S=0,T=0;
      for (i=1;i<=1000;i++)
      {
        if (deg[i]==1)
          S=i;
        if (deg[i]==-1)
          T=i;
      }
      return S*T;
    }
  }
};

********************************************************************************
*******************************************************************************/