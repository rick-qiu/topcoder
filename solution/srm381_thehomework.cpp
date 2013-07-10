/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8415
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

class TheHomework {
public:
    int transform(vector<int> first, vector<int> second);
};

int TheHomework::transform(vector<int> first, vector<int> second) {
    int ret;
    return ret;
}


int test0() {
    vector<int> first = {1, 2, 3};
    vector<int> second = {2, 3, 4};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> first = {0};
    vector<int> second = {1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> first = {5, 2, 7, 999, 7};
    vector<int> second = {7, 7, 2, 999, 5};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
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
    vector<int> first = {12, 13};
    vector<int> second = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> first = {7, 7, 7};
    vector<int> second = {8, 8, 8, 8};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> first = {490, 429, 819, 966};
    vector<int> second = {966, 29};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> first = {711, 299, 713, 541, 85, 528, 369, 616, 350};
    vector<int> second = {369, 85, 91, 528, 616, 915};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> first = {602};
    vector<int> second = {32, 567};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> first = {338, 618, 637, 624, 319};
    vector<int> second = {319, 637, 624, 191, 44, 618};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
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
    vector<int> first = {171, 819, 979, 285, 62, 223};
    vector<int> second = {206, 171, 62, 285};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> first = {231};
    vector<int> second = {451, 406, 318, 917, 949};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> first = {766, 187, 666};
    vector<int> second = {187, 666, 531};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> first = {827, 949, 110, 621, 237, 455, 826, 652};
    vector<int> second = {827, 237, 480, 949};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> first = {798, 486, 13, 637};
    vector<int> second = {809, 798, 35, 637, 512, 844};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
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
    vector<int> first = {455, 524, 113, 634, 908, 632};
    vector<int> second = {455, 580, 770};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> first = {429, 819};
    vector<int> second = {490, 819, 429};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> first = {980, 152};
    vector<int> second = {881, 331, 632, 415, 980, 152, 806};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> first = {385, 858};
    vector<int> second = {858, 294, 757, 385, 753};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> first = {989, 567, 909, 805};
    vector<int> second = {805, 909, 32, 567, 989};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> first = {16, 567};
    vector<int> second = {16, 637, 700, 567, 770, 152};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> first = {172};
    vector<int> second = {640, 485, 172, 843, 587};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> first = {441};
    vector<int> second = {429, 994, 441, 224, 418, 528};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> first = {410, 91, 350, 933, 599, 359, 713, 711, 299, 541};
    vector<int> second = {711, 350, 560, 410, 819, 599, 29, 966, 541, 713, 359, 91, 490, 299, 429, 933};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> first = {700, 319, 637, 152, 770, 618};
    vector<int> second = {700, 44, 624, 371, 331, 770, 795, 217, 994, 319, 637, 338, 152, 191, 905, 618};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> first = {128, 429, 441, 135, 169, 528, 994, 178};
    vector<int> second = {525, 79, 441, 128, 178, 626, 994, 169, 418, 429, 79, 135, 936, 528, 224};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> first = {827, 949, 901, 819, 827};
    vector<int> second = {819, 901, 621, 827, 826, 949, 480, 237, 827};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> first = {702, 169, 632, 952, 634, 233, 469, 560};
    vector<int> second = {634, 952, 702, 233, 560, 35, 798, 637, 844, 169, 378, 469, 632};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> first = {407, 782, 605, 71, 55, 895, 902, 593};
    vector<int> second = {410, 895, 605, 288, 583, 91, 842, 338, 481, 407, 71, 902, 945, 593, 55, 277, 782};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> first = {462, 540, 897, 384};
    vector<int> second = {924, 476, 462, 482, 540, 384, 897, 997, 924, 454, 66};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> first = {795, 331, 371, 624, 994, 338, 191, 44, 905, 618};
    vector<int> second = {91, 795, 599, 541, 867, 819, 85, 490, 624, 29, 338, 385, 757, 528, 915, 719, 371, 905, 294, 299, 217, 359, 369, 713, 44, 753, 331, 616, 994, 711, 429, 191, 166, 858, 926, 350, 410, 966, 933, 618, 560, 147};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> first = {191, 598, 581, 620};
    vector<int> second = {347, 853, 620, 476, 89, 581, 440, 598, 676, 996, 178, 282, 226, 56, 441, 680, 91, 169, 598, 756, 581, 128, 90, 637, 379, 242, 191, 128, 591, 842, 812, 377, 639, 79, 260, 341, 135};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> first = {924, 540, 462, 482, 897, 384, 924, 66, 476};
    vector<int> second = {476, 454, 158, 661, 479, 989, 518, 482, 187, 687, 92, 423, 781, 788, 661, 385, 760, 759, 133, 255, 721, 91, 540, 403, 525, 377, 891, 782, 924, 440, 66, 66, 997, 986, 866, 384, 957, 462, 960, 682, 13, 251, 897, 924, 245};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> first = {437, 98, 101, 910};
    vector<int> second = {811, 686, 925, 130, 462, 840, 501, 81, 993, 443, 910, 65, 101, 98, 607, 686, 437, 958, 704, 316, 875, 796, 245, 495, 579, 423, 329, 121, 583, 102, 1000, 329, 219, 601};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> first = {733, 442, 693, 825, 870, 754, 533, 633, 823, 400};
    vector<int> second = {825, 287, 633, 777, 920, 363, 889, 467, 870, 733, 823, 400, 511, 384, 362, 754, 924, 195, 207, 678, 77, 693, 77, 147, 847, 572, 599, 793, 784, 203, 442, 839, 4, 833, 505, 665, 84, 204, 924, 533, 504};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> first = {792, 58, 223, 154, 409, 924, 196, 968, 507};
    vector<int> second = {326, 636, 959, 149, 507, 971, 506, 154, 462, 225, 72, 137, 223, 313, 857, 210, 729, 462, 351, 130, 792, 432, 447, 921, 409, 334, 871, 84, 866, 506, 924, 429, 268, 735, 58, 511, 968, 262, 196, 494, 429, 877, 809, 797, 325};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> first = {682, 79, 328, 708, 825};
    vector<int> second = {110, 393, 602, 657, 543, 189, 682, 769, 339, 567, 514, 968, 112, 48, 974, 825, 328, 476, 708, 406, 770, 792, 973, 503, 24, 44, 494, 385, 526, 784, 0, 645, 961, 968, 970, 472, 232, 221, 526, 79, 784};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> first = {319};
    vector<int> second = {350, 44, 624, 338, 385, 753, 294, 713, 410, 319, 541, 147, 490, 29, 429, 618, 867, 994, 757, 599, 915, 166, 795, 858, 331, 966, 819, 528, 369, 711, 191, 91, 85, 616, 905, 933, 926, 371, 719, 299, 560, 359, 217};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> first = {610};
    vector<int> second = {169, 637, 191, 639, 680, 341, 528, 79, 91, 282, 347, 610, 598, 178, 89, 90, 581, 996, 842, 377, 260, 242, 994, 441, 379, 135, 440, 598, 128, 581, 812, 853, 226, 476, 429, 756, 56, 676, 620, 591, 128};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> first = {673};
    vector<int> second = {350, 174, 371, 36, 277, 895, 826, 494, 228, 561, 593, 338, 605, 908, 163, 961, 842, 407, 847, 91, 673, 902, 782, 410, 308, 481, 49, 583, 84, 177, 627, 940, 273, 945, 118, 912, 774, 288, 71, 119, 55, 770, 503, 77, 836, 301, 379};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> first = {286};
    vector<int> second = {462, 7, 799, 672, 753, 767, 933, 361, 781, 895, 660, 498, 312, 470, 315, 169, 8, 517, 588, 305, 60, 794, 112, 621, 286, 670, 415, 533, 405, 19, 736, 77, 672, 673, 165, 829, 630, 560, 223, 245, 642};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> first = {126};
    vector<int> second = {949, 35, 98, 773, 552, 777, 551, 812, 126, 165, 345, 854, 891, 726, 308, 46, 334, 621, 870, 513, 815, 462, 749, 748, 26, 919, 768, 787, 14, 738, 283, 769, 715, 592, 626, 868, 196, 541, 329, 917, 766, 897, 386, 494};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> first = {713};
    vector<int> second = {616, 778, 711, 161, 91, 599, 606, 931, 769, 237, 374, 458, 992, 83, 852, 574, 110, 770, 701, 88, 482, 361, 475, 195, 503, 496, 713, 558, 217, 500, 684, 561, 622, 190, 832, 893, 858, 924, 927, 439, 705};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> first = {887};
    vector<int> second = {784, 440, 781, 209, 879, 887, 15, 63, 553, 968, 721, 20, 739, 684, 352, 962, 533, 27, 752, 426, 121, 510, 704, 803, 367, 318, 617, 871, 0, 369, 971, 735, 470, 350, 206, 938, 171, 524, 339, 506, 187, 784, 924, 431};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> first = {490};
    vector<int> second = {753, 166, 713, 359, 757, 217, 429, 29, 867, 915, 294, 926, 599, 819, 369, 719, 541, 994, 147, 191, 616, 624, 319, 858, 528, 795, 711, 338, 44, 91, 350, 966, 385, 637, 371, 618, 85, 560, 331, 299, 905, 933, 410};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> first = {528};
    vector<int> second = {581, 598, 591, 996, 17, 135, 637, 994, 377, 128, 853, 98, 341, 533, 610, 336, 686, 79, 812, 242, 842, 680, 91, 191, 476, 347, 178, 440, 756, 598, 89, 226, 379, 282, 639, 650, 441, 676, 68, 620, 581, 90, 56, 128, 260, 169};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> first = {760};
    vector<int> second = {591, 462, 924, 158, 73, 661, 721, 207, 518, 187, 66, 66, 661, 989, 687, 960, 91, 476, 423, 540, 294, 709, 245, 384, 891, 897, 924, 997, 454, 759, 479, 682, 5, 620, 255, 196, 986, 539, 788, 512, 385, 65, 440, 578, 371, 482, 186};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> first = {423};
    vector<int> second = {343, 835, 796, 245, 530, 121, 273, 101, 698, 579, 958, 583, 968, 806, 910, 462, 392, 316, 294, 650, 840, 836, 607, 488, 429, 686, 437, 637, 498, 1000, 130, 98, 925, 102, 601, 686, 360, 819, 948, 630, 811};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> first = {287};
    vector<int> second = {637, 924, 121, 593, 777, 442, 504, 144, 979, 969, 754, 77, 400, 787, 825, 231, 399, 924, 384, 811, 734, 847, 733, 735, 777, 823, 533, 92, 870, 662, 833, 839, 871, 633, 443, 751, 283, 629, 693, 581, 820, 508, 431, 784, 35};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> first = {561};
    vector<int> second = {328, 91, 945, 622, 616, 606, 374, 893, 701, 83, 331, 931, 595, 503, 558, 778, 943, 2, 409, 475, 540, 616, 500, 259, 927, 88, 139, 711, 846, 959, 769, 439, 665, 713, 47, 571, 361, 858, 924, 992, 770, 634, 852, 917, 462, 526, 209};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> first = {879};
    vector<int> second = {730, 546, 564, 684, 506, 532, 187, 203, 968, 810, 321, 781, 252, 0, 440, 385, 369, 226, 648, 15, 982, 350, 749, 460, 845, 550, 735, 887, 778, 97, 121, 976, 68, 973, 374, 871, 739, 547, 893, 533, 77, 962, 391, 431, 752, 945, 518};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> first = {359, 637, 44, 757, 933, 915, 713, 371, 319, 616, 624, 819, 599, 711, 217, 905, 299, 29, 91, 147, 85, 795, 719, 700, 926, 152, 369, 966, 753, 338, 385, 994, 490, 191, 867, 618, 294, 350, 567, 331, 166, 560, 410, 858, 429, 528, 541, 770};
    vector<int> second = {16};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> first = {632, 378, 621, 515, 819, 666, 481, 110, 469, 844, 323, 949, 908, 827, 994, 896, 901, 486, 512, 826, 827, 560, 233, 237, 455, 469, 702, 952, 634, 113, 141, 187, 798, 897, 809, 637, 766, 652, 524, 13, 169, 480, 455, 610, 35, 531, 38};
    vector<int> second = {580};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> first = {897, 294, 186, 157, 454, 196, 518, 476, 924, 245, 661, 661, 91, 709, 926, 788, 721, 462, 385, 452, 540, 924, 482, 158, 73, 5, 578, 384, 371, 66, 65, 242, 620, 655, 539, 512, 591, 187, 140, 997, 144, 207, 891, 255, 986, 66, 322};
    vector<int> second = {637};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> first = {1000, 806, 316, 910, 948, 836, 925, 203, 630, 678, 498, 889, 488, 796, 587, 650, 835, 530, 429, 920, 392, 101, 360, 467, 362, 968, 294, 4, 601, 686, 211, 207, 273, 811, 77, 840, 819, 607, 637, 437, 343, 511, 698, 665, 98, 958, 572};
    vector<int> second = {793};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> first = {110, 811, 823, 787, 684, 796, 662, 217, 161, 979, 637, 663, 377, 190, 890, 283, 549, 735, 629, 237, 847, 969, 532, 399, 693, 231, 121, 780, 734, 35, 777, 581, 820, 508, 144, 832, 92, 905, 490, 195, 482, 733, 871, 751, 443, 431, 593};
    vector<int> second = {458};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> first = {206, 784, 524, 63, 938, 959, 971, 665, 784, 769, 540, 917, 948, 352, 20, 931, 846, 943, 617, 439, 2, 328, 171, 713, 409, 209, 259, 558, 367, 927, 595, 47, 704, 470, 616, 462, 339, 634, 138, 526, 318, 331, 945, 803, 139, 571, 510};
    vector<int> second = {553};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> first = {518, 778, 567, 399, 550, 844, 607, 648, 518, 767, 532, 385, 109, 97, 973, 460, 77, 730, 252, 976, 68, 845, 564, 722, 749, 527, 547, 573, 945, 203, 226, 208, 144, 450, 692, 391, 992, 83, 546, 321, 992, 893, 178, 374, 726, 1, 611, 982};
    vector<int> second = {194};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> first = {299, 147, 770, 410, 490, 905, 166, 331, 429, 858, 294, 719, 926, 637, 994, 624, 599, 528, 915, 359, 338, 371, 85, 933, 757, 541, 369, 191, 319, 385, 795, 618, 711, 713, 616, 753, 350, 44, 91, 29, 867, 217, 560, 966, 819};
    vector<int> second = {152};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> first = {56, 598, 191, 336, 341, 79, 135, 91, 581, 598, 686, 842, 128, 377, 169, 379, 178, 812, 637, 756, 347, 68, 128, 676, 440, 581, 282, 650, 17, 680, 639, 533, 996, 89, 620, 260, 90, 98, 226, 476, 242, 853, 591, 478, 610};
    vector<int> second = {956, 455};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> first = {539, 196, 924, 891, 66, 66, 454, 73, 255, 661, 721, 540, 788, 91, 960, 661, 245, 384, 682, 462, 578, 5, 986, 897, 385, 620, 476, 924, 482, 479, 687, 440, 65, 591, 997, 186, 187, 512, 158, 709, 518, 207, 989, 371};
    vector<int> second = {294};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> first = {670, 7, 245, 829, 980, 533, 147, 286, 673, 405, 19, 210, 621, 119, 676, 165, 736, 803, 630, 199, 114, 169, 77, 588, 819, 315, 895, 517, 415, 799, 470, 851, 112, 643, 672, 39, 753, 794, 781, 361, 560, 312, 60, 462};
    vector<int> second = {916};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> first = {924, 442, 581, 633, 77, 637, 833, 924, 777, 823, 144, 825, 754, 662, 979, 871, 811, 92, 384, 847, 443, 504, 400, 787, 399, 733, 777, 431, 870, 121, 629, 751, 734, 593, 231, 735, 905, 693, 283, 35, 508, 820, 533, 969};
    vector<int> second = {890};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> first = {968, 924, 809, 409, 990, 102, 326, 877, 507, 429, 506, 602, 538, 20, 951, 112, 431, 149, 665, 971, 679, 466, 98, 462, 154, 119, 873, 225, 759, 103, 918, 223, 743, 792, 58, 560, 196, 36, 72, 227, 866, 249, 226, 7};
    vector<int> second = {891};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> first = {547, 68, 810, 962, 15, 391, 781, 187, 648, 518, 369, 945, 440, 778, 77, 550, 749, 0, 431, 27, 752, 887, 121, 321, 374, 739, 506, 684, 976, 968, 350, 209, 879, 735, 982, 924, 460, 203, 730, 533, 226, 97, 385, 893, 871};
    vector<int> second = {532};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> first = {299, 147, 770, 410, 490, 905, 166, 331, 429, 858, 294, 719, 926, 637, 994, 152, 599, 528, 915, 359, 338, 371, 85, 933, 757, 541, 369, 191, 319, 385, 795, 618, 711, 713, 616, 753, 350, 44, 91, 29, 867, 217, 560, 966, 819, 624};
    vector<int> second = {152};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> first = {35, 141, 949, 896, 897, 798, 480, 237, 884, 187, 455, 515, 743, 652, 666, 610, 469, 560, 994, 233, 323, 512, 809, 621, 197, 38, 826, 486, 827, 702, 455, 637, 469, 110, 13, 976, 481, 844, 766, 531, 901, 378, 819, 827};
    vector<int> second = {702};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> first = {379, 183, 36, 673, 826, 902, 350, 944, 713, 118, 895, 774, 664, 961, 503, 782, 71, 119, 174, 940, 799, 396, 177, 49, 163, 847, 836, 605, 228, 371, 301, 912, 494, 593, 277, 55, 749, 624, 407, 84, 273, 507, 770, 561, 308, 908, 77};
    vector<int> second = {664};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> first = {315, 147, 77, 673, 672, 462, 621, 60, 245, 588, 736, 916, 470, 980, 676, 361, 169, 803, 861, 533, 643, 19, 670, 415, 312, 851, 819, 799, 895, 114, 517, 210, 165, 119, 39, 199, 781, 642, 7, 405, 560, 112, 630, 814, 753, 829, 794, 286};
    vector<int> second = {642};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> first = {629, 399, 431, 777, 734, 121, 442, 820, 633, 508, 693, 144, 969, 400, 377, 905, 637, 384, 811, 663, 823, 787, 870, 693, 847, 92, 581, 35, 754, 593, 871, 979, 825, 549, 533, 443, 283, 662, 735, 751, 231, 733, 890, 77};
    vector<int> second = {663};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> first = {326, 227, 431, 503, 225, 267, 7, 295, 560, 506, 891, 466, 249, 58, 679, 951, 112, 102, 971, 866, 36, 538, 265, 743, 792, 154, 223, 20, 918, 968, 759, 119, 873, 462, 990, 196, 226, 602, 511, 974, 409, 877, 103, 98, 507, 665, 924};
    vector<int> second = {503};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> first = {232, 725, 430, 44, 9, 686, 221, 328, 620, 411, 621, 721, 107, 66, 968, 943, 79, 291, 91, 917, 749, 682, 265, 567, 661, 769, 459, 189, 88, 403, 825, 252, 472, 708, 511, 645, 278, 616, 777, 440, 877, 339, 539, 717};
    vector<int> second = {411};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> first = {359, 637, 44, 757, 933, 915, 713, 371, 319, 616, 624, 819, 599, 711, 217, 905, 299, 29, 91, 147, 85, 795, 719, 700, 926, 152, 369, 966, 753, 338, 385, 994, 490, 191, 867, 618, 294, 350, 567, 331, 166, 560, 410, 858, 429, 528, 541, 770};
    vector<int> second = {16};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> first = {901, 455, 766, 110, 610, 480, 481, 187, 949, 38, 515, 827, 237, 827, 621, 469, 896, 897, 141, 455, 666, 826, 994, 323, 819, 531, 652};
    vector<int> second = {13, 113, 781, 378, 133, 92, 634, 377, 866, 770, 251, 580, 525, 486, 469, 560, 702, 233, 637, 119, 908, 782, 759, 844, 35, 512, 632, 169, 952, 957, 760, 455, 62, 798, 544, 861, 423, 13, 524, 809, 403};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> first = {266, 993, 371, 539, 637, 495, 81, 207, 5, 512, 65, 423, 655, 242, 322, 157, 443, 452, 329, 73, 65, 762, 926, 140, 329, 168, 175, 501, 132, 704, 294, 875, 709, 434, 219, 144};
    vector<int> second = {102};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> first = {315, 829, 165};
    vector<int> second = {169, 843, 642, 749, 621, 916, 850, 777, 14, 147, 814, 308, 854, 891, 26, 861, 924, 236, 283, 868, 851, 560, 643, 165, 917, 114, 386, 465, 39, 896, 199, 210, 672, 949, 819, 728, 119, 919, 345, 980, 286, 513, 592, 803, 676};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> first = {511, 351, 923, 735, 22, 506, 972, 154, 137, 455, 231, 111, 429, 334, 130, 805, 857, 84, 432, 636, 169, 959, 325, 121, 126, 724, 601, 857, 797, 674, 306};
    vector<int> second = {447, 871, 225, 462, 72, 506, 866, 409, 268, 154, 494, 729, 429, 58, 262, 462, 210, 921, 877, 149, 968, 326, 223, 313, 971, 924, 809};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> first = {645, 110, 221, 189, 339, 770, 792, 602, 526, 567, 267, 494, 503, 476, 526, 44, 48, 112, 784, 24, 961, 968, 784, 974, 472, 514, 0, 232, 970, 393, 682, 708, 543, 973, 769, 406, 385, 968, 657};
    vector<int> second = {621, 539, 9, 328, 88, 661, 825, 717, 252, 403, 79};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> first = {342, 286, 256, 827, 819, 108, 371, 448, 678, 701, 129, 361, 652, 135, 644, 377, 648};
    vector<int> second = {624};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> first = {624, 926, 700, 85, 858, 147, 915, 795, 994, 933, 152, 91, 319, 541, 16, 966, 637, 44, 905, 867, 490, 385, 299, 711, 217, 599, 338, 331, 495, 560, 429, 819, 567, 618, 359, 166, 770, 371, 191, 719, 616, 528, 294, 757, 350, 369, 410, 753, 713, 29};
    vector<int> second = {91, 56, 936, 996, 242, 640, 79, 79, 764, 128, 547, 282, 587, 843, 90, 626, 581, 79, 429, 260, 853, 461, 525, 441, 224, 440, 680, 455, 128, 994, 842, 676, 226, 476, 485, 172, 418, 756, 341, 528, 598, 639, 379, 178, 135, 319, 169, 89, 591, 377};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> first = {726, 336, 77, 507, 163, 183, 826, 687, 561, 119, 749, 49, 308, 912, 664, 371, 350, 847, 273, 228, 177, 713, 36, 770, 490, 908, 967, 305, 984, 396, 673, 940, 836, 799, 301, 992, 624, 503, 774, 944, 749, 379, 931, 452, 174, 986, 273, 682, 324, 118};
    vector<int> second = {588, 312, 736, 165, 630, 305, 642, 315, 560, 621, 829, 415, 405, 672, 60, 895, 114, 643, 286, 670, 199, 112, 781, 533, 933, 8, 753, 147, 462, 799, 7, 223, 77, 361, 672, 660, 676, 322, 794, 19, 470, 735, 169, 851, 673, 245, 210, 767, 517, 498};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> first = {506, 306, 429, 154, 432, 22, 921, 552, 511, 429, 857, 455, 169, 325, 871, 768, 494, 805, 334, 231, 724, 137, 262, 959, 541, 351, 121, 268, 462, 923, 46, 636, 126, 313, 797, 735, 130, 72, 815, 857, 329, 766, 210, 972, 447, 84, 729, 674, 111, 601};
    vector<int> second = {665, 866, 295, 112, 951, 560, 462, 503, 968, 784, 792, 20, 809, 58, 506, 891, 225, 103, 877, 98, 511, 119, 227, 265, 267, 974, 466, 249, 990, 154, 431, 743, 36, 759, 679, 149, 971, 223, 507, 7, 226, 924, 918, 602, 102, 538, 196, 409, 326, 873};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
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
    vector<int> first = {448, 361, 943, 777, 563, 342, 725, 470, 66, 411, 221, 377, 721, 371, 756, 91, 749, 413, 291, 769, 129, 701, 256, 678, 648, 107, 629, 100, 265, 827, 919, 624, 278, 135, 66, 286, 644, 108, 97, 469, 968, 877, 620, 436, 656, 459, 62, 819, 652, 916};
    vector<int> second = {944, 312, 509, 107, 598, 935, 22, 882, 289, 680, 242, 810, 888, 33, 532, 128, 70, 823, 541, 874, 459, 253, 683, 661, 899, 194, 407, 578, 820, 242, 630, 391, 979, 101, 447, 792, 872, 389, 106, 53, 574, 965, 966, 400, 490, 0, 714, 910, 941, 176};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> first = {864, 264, 853, 62, 225, 60, 663, 260, 48, 855, 493, 97, 29, 956, 732, 56, 476, 667, 166, 357, 375, 203, 702, 605, 826, 137, 912, 643, 889, 430, 916, 105, 950, 468, 656, 792, 216, 880, 447, 734, 679, 312, 147, 199, 469, 649, 929, 247, 836, 946};
    vector<int> second = {35, 468, 362, 762, 166, 621, 377, 670, 460, 968, 541, 652, 519, 535, 844, 644, 485, 301, 140, 462, 493, 693, 614, 78, 231, 716, 77, 522, 325, 448, 677, 211, 343, 131, 657, 422, 364, 704, 844, 728, 806, 994, 868, 283, 572, 429, 825, 28, 967, 87};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> first = {961, 299, 413, 671, 104, 377, 230, 354, 235, 880, 893, 819, 497, 847, 517, 20, 66, 909, 867, 63, 1000, 297, 660, 399, 504, 26, 701, 130, 545, 544, 699, 726, 495, 312, 403, 644, 247, 138, 657, 457, 611, 862, 824, 715, 273, 845, 511, 830, 474, 117};
    vector<int> second = {413, 953, 543, 864, 929, 680, 439, 712, 890, 291, 721, 357, 836, 627, 894, 137, 91, 74, 113, 939, 314, 290, 250, 613, 741, 441, 377, 340, 266, 848, 13, 260, 65, 514, 492, 763, 869, 724, 814, 366, 79, 224, 114, 456, 172, 317, 680, 768, 569, 60};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> first = {757, 940, 749, 275, 516, 166, 949, 465, 476, 307, 981, 755, 6, 826, 890, 994, 364, 741, 961, 175, 287, 616, 443, 483, 138, 91, 343, 822, 671, 182, 13, 22, 62, 116, 272, 264, 974, 216, 326, 328, 987, 273, 782, 419, 97, 69, 107, 707, 234, 987};
    vector<int> second = {352, 682, 819, 780, 416, 56, 662, 868, 862, 607, 520, 755, 763, 545, 625, 290, 273, 305, 187, 595, 373, 748, 318, 308, 338, 780, 797, 17, 166, 510, 485, 310, 344, 141, 93, 554, 70, 18, 399, 660, 212, 879, 403, 170, 35, 605, 670, 679, 644, 183};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> first = {461, 640, 224, 933, 79, 350, 495, 994, 528, 966, 843, 490, 79, 599, 359, 485, 547, 525, 172, 319, 455, 152, 567, 91, 429, 711, 637, 764, 770, 819, 29, 541, 16, 319, 560, 587, 915, 624, 410, 713, 85, 528, 429, 626, 936, 700, 369, 299, 418, 618};
    vector<int> second = {319, 867, 905, 385, 79, 485, 936, 994, 764, 191, 224, 528, 166, 700, 719, 371, 455, 152, 770, 567, 616, 319, 418, 495, 16, 79, 637, 461, 757, 795, 926, 624, 640, 338, 994, 429, 331, 217, 626, 44, 294, 147, 858, 525, 172, 618, 547, 587, 843, 753};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> first = {836, 984, 624, 183, 301, 174, 774, 799, 288, 673, 739, 336, 945, 379, 305, 726, 299, 56, 396, 49, 91, 277, 944, 350, 375, 749, 790, 371, 627, 912, 481, 713, 177, 338, 407, 452, 77, 583, 378, 435, 672, 0, 842, 507, 273, 36, 410, 770, 908, 664};
    vector<int> second = {664, 273, 895, 71, 163, 379, 371, 902, 782, 605, 55, 673, 84, 713, 984, 118, 908, 396, 836, 961, 177, 774, 228, 119, 49, 350, 305, 452, 726, 770, 507, 749, 593, 940, 77, 561, 494, 336, 944, 912, 799, 36, 826, 847, 174, 503, 183, 308, 301, 624};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> first = {738, 35, 766, 897, 329, 748, 621, 715, 916, 22, 494, 121, 787, 114, 843, 46, 210, 891, 814, 861, 812, 643, 199, 334, 773, 676, 98, 552, 541, 126, 803, 642, 924, 819, 870, 39, 815, 462, 980, 626, 286, 769, 851, 768, 196, 726, 119, 147, 728, 551};
    vector<int> second = {812, 98, 26, 768, 919, 126, 386, 726, 715, 513, 870, 777, 465, 891, 462, 334, 46, 787, 748, 621, 14, 850, 773, 766, 308, 749, 22, 345, 854, 626, 494, 551, 815, 35, 329, 738, 283, 917, 769, 121, 896, 949, 897, 165, 236, 541, 592, 868, 196, 552};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> first = {602, 110, 472, 665, 466, 560, 679, 119, 0, 645, 769, 227, 385, 507, 526, 873, 112, 918, 770, 393, 196, 543, 58, 339, 102, 221, 792, 36, 567, 784, 743, 968, 792, 476, 924, 226, 431, 189, 48, 961, 24, 970, 973, 232, 514, 968, 406, 494, 602, 44};
    vector<int> second = {265, 44, 103, 961, 973, 990, 267, 792, 645, 511, 769, 112, 951, 189, 295, 526, 232, 7, 526, 784, 968, 20, 891, 602, 385, 503, 567, 543, 0, 657, 494, 974, 393, 514, 770, 24, 98, 784, 476, 110, 406, 759, 221, 249, 970, 538, 472, 48, 112, 339};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> first = {968, 407, 62, 469, 242, 129, 509, 714, 97, 253, 910, 53, 935, 820, 371, 447, 470, 899, 874, 919, 888, 176, 629, 578, 242, 819, 70, 0, 101, 756, 630, 940, 624, 413, 106, 810, 652, 342, 66, 644, 436, 853, 966, 312, 532, 792, 22, 965, 459, 490};
    vector<int> second = {541, 101, 680, 872, 53, 389, 661, 107, 882, 910, 176, 194, 400, 941, 810, 106, 979, 853, 714, 888, 289, 792, 578, 391, 630, 33, 574, 965, 242, 944, 0, 509, 242, 683, 128, 459, 823, 874, 532, 22, 407, 940, 935, 899, 70, 820, 447, 312, 253, 598};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> first = {716, 312, 912, 605, 844, 60, 994, 216, 656, 679, 468, 166, 62, 522, 493, 469, 667, 231, 868, 343, 460, 29, 28, 663, 929, 734, 649, 643, 853, 147, 211, 670, 468, 702, 880, 572, 362, 35, 260, 264, 131, 78, 77, 203, 448, 377, 916, 792, 247, 166};
    vector<int> second = {994, 448, 77, 131, 48, 716, 211, 362, 956, 137, 950, 476, 430, 670, 166, 855, 836, 844, 35, 912, 166, 231, 447, 357, 889, 78, 343, 468, 105, 572, 826, 493, 260, 56, 732, 792, 493, 864, 377, 97, 460, 522, 225, 28, 916, 868, 199, 734, 216, 643};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> first = {90, 922, 935, 671, 399, 847, 537, 198, 230, 267, 207, 511, 987, 474, 844, 247, 893, 504, 819, 885, 457, 880, 511, 701, 273, 957, 830, 66, 657, 26, 715, 235, 138, 471, 644, 238, 354, 117, 1000, 699, 867, 629, 653, 961, 403, 104, 845, 20, 0, 978};
    vector<int> second = {945, 867, 474, 657, 643, 20, 504, 845, 495, 185, 691, 511, 893, 644, 726, 16, 338, 544, 545, 235, 830, 457, 247, 104, 130, 726, 26, 862, 354, 273, 364, 117, 715, 819, 230, 517, 847, 312, 403, 660, 66, 961, 671, 63, 701, 497, 699, 138, 1000, 880};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> first = {128, 490, 178, 441, 541, 843, 819, 135, 933, 455, 560, 299, 172, 764, 369, 753, 528, 429, 319, 994, 936, 528, 915, 169, 79, 461, 485, 547, 711, 616, 418, 599, 385, 350, 294, 587, 359, 410, 429, 640, 757, 713, 79, 29, 626, 91, 224, 966, 525, 85};
    vector<int> second = {331, 217, 455, 567, 224, 128, 719, 79, 528, 795, 764, 441, 485, 994, 547, 371, 626, 135, 16, 319, 44, 587, 770, 172, 867, 700, 843, 338, 152, 618, 637, 994, 147, 905, 178, 429, 624, 166, 936, 191, 858, 525, 169, 319, 461, 79, 926, 640, 418, 495};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> first = {992, 673, 593, 299, 273, 324, 410, 984, 407, 55, 84, 494, 664, 336, 605, 452, 945, 687, 490, 507, 713, 895, 91, 961, 682, 944, 749, 782, 967, 986, 583, 624, 378, 71, 288, 790, 338, 183, 799, 277, 902, 726, 396, 931, 375, 305, 749, 627, 481, 842};
    vector<int> second = {163, 986, 228, 682, 826, 371, 774, 664, 503, 847, 305, 177, 984, 713, 940, 749, 273, 490, 507, 118, 749, 967, 931, 908, 624, 770, 396, 687, 183, 301, 36, 350, 992, 379, 944, 912, 799, 273, 119, 49, 308, 77, 324, 726, 836, 561, 174, 336, 673, 452};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> first = {924, 121, 642, 815, 465, 861, 39, 850, 843, 14, 805, 165, 306, 325, 552, 592, 46, 308, 601, 329, 777, 432, 119, 386, 916, 455, 236, 111, 154, 980, 896, 231, 345, 814, 724, 868, 126, 169, 674, 283, 923, 728, 768, 857, 972, 766, 22, 919, 26, 541};
    vector<int> second = {815, 857, 726, 306, 769, 768, 854, 812, 541, 724, 462, 949, 22, 325, 972, 738, 787, 748, 169, 121, 626, 513, 432, 126, 111, 674, 891, 35, 897, 494, 766, 917, 805, 715, 154, 334, 455, 552, 749, 329, 231, 196, 551, 98, 621, 773, 923, 46, 601, 870};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> first = {189, 917, 759, 657, 430, 661, 20, 891, 9, 717, 538, 567, 88, 665, 686, 232, 511, 682, 265, 951, 621, 602, 295, 784, 503, 103, 974, 616, 526, 825, 112, 252, 328, 440, 873, 79, 472, 539, 98, 990, 249, 7, 560, 102, 511, 645, 968, 267, 708, 403};
    vector<int> second = {708, 686, 403, 645, 970, 621, 252, 221, 514, 328, 48, 9, 539, 189, 0, 511, 825, 430, 682, 961, 24, 792, 472, 494, 784, 476, 567, 110, 232, 602, 770, 406, 79, 385, 661, 526, 616, 543, 112, 968, 393, 973, 968, 769, 440, 917, 717, 339, 44, 88};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> first = {289, 546, 253, 364, 290, 142, 586, 874, 431, 341, 598, 194, 128, 496, 872, 195, 932, 991, 280, 979, 33, 541, 400, 66, 935, 683, 872, 70, 531, 280, 759, 944, 482, 275, 410, 391, 616, 107, 661, 574, 680, 941, 823, 889, 58, 416, 389, 882, 8, 53};
    vector<int> second = {509, 810, 482, 280, 280, 8, 142, 290, 616, 407, 410, 364, 58, 459, 586, 932, 991, 341, 578, 431, 532, 416, 714, 888, 546, 312, 853, 66, 106, 176, 630, 0, 242, 242, 22, 965, 940, 792, 496, 899, 195, 872, 759, 910, 275, 101, 531, 820, 889, 447};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> first = {541, 956, 137, 844, 994, 105, 912, 283, 56, 950, 643, 519, 87, 447, 301, 216, 861, 260, 493, 476, 693, 704, 535, 430, 864, 325, 806, 968, 585, 225, 728, 485, 621, 826, 614, 422, 677, 916, 734, 78, 967, 762, 792, 855, 644, 140, 166, 357, 732, 462};
    vector<int> second = {967, 131, 825, 231, 35, 377, 166, 652, 362, 844, 493, 325, 728, 364, 519, 644, 657, 541, 460, 844, 670, 806, 716, 614, 677, 140, 485, 77, 28, 693, 301, 572, 585, 343, 422, 868, 968, 211, 522, 704, 621, 283, 535, 462, 429, 861, 87, 468, 448, 762};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> first = {63, 929, 357, 26, 867, 413, 517, 456, 137, 819, 613, 260, 497, 65, 545, 247, 671, 114, 660, 172, 1000, 312, 961, 848, 113, 953, 712, 657, 724, 104, 680, 763, 495, 266, 741, 845, 864, 893, 474, 273, 726, 569, 314, 492, 74, 862, 511, 66, 403, 79};
    vector<int> second = {830, 172, 266, 741, 864, 399, 909, 413, 613, 299, 260, 357, 250, 74, 457, 699, 848, 79, 724, 492, 137, 20, 138, 880, 456, 680, 569, 297, 929, 117, 91, 712, 953, 763, 377, 65, 413, 230, 114, 715, 235, 354, 113, 824, 644, 701, 504, 611, 847, 314};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> first = {711, 541, 994, 359, 79, 169, 915, 547, 525, 753, 528, 29, 764, 429, 528, 224, 616, 966, 587, 936, 178, 135, 455, 79, 385, 294, 299, 350, 819, 429, 599, 85, 843, 757, 626, 490, 319, 933, 713, 172, 640, 418, 369, 441, 91, 560, 485, 410, 461};
    vector<int> second = {461, 926, 191, 455, 169, 587, 331, 626, 485, 44, 700, 624, 152, 867, 858, 319, 79, 637, 547, 719, 166, 217, 795, 371, 936, 905, 994, 843, 994, 640, 429, 338, 79, 495, 319, 441, 764, 172, 528, 147, 16, 567, 224, 525, 770, 135, 178, 418, 618};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> first = {288, 56, 583, 407, 273, 605, 739, 71, 324, 375, 912, 481, 664, 944, 490, 713, 305, 396, 986, 452, 984, 749, 299, 55, 624, 91, 782, 992, 790, 961, 593, 902, 379, 842, 726, 749, 799, 687, 507, 673, 895, 183, 378, 627, 945, 336, 410, 277, 338};
    vector<int> second = {371, 163, 273, 847, 228, 336, 770, 273, 308, 118, 49, 992, 494, 301, 452, 84, 836, 940, 174, 749, 561, 119, 507, 305, 673, 726, 490, 379, 912, 944, 799, 624, 396, 183, 177, 324, 350, 749, 986, 664, 826, 687, 774, 36, 984, 908, 77, 713, 503};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> first = {119, 329, 676, 766, 919, 22, 46, 552, 345, 642, 39, 165, 924, 386, 674, 154, 769, 923, 126, 850, 815, 455, 861, 857, 169, 199, 843, 980, 868, 26, 805, 812, 724, 728, 819, 738, 803, 773, 916, 777, 111, 972, 236, 121, 541, 465, 896, 814, 768};
    vector<int> second = {897, 513, 121, 455, 46, 724, 787, 22, 870, 308, 949, 283, 541, 462, 196, 766, 592, 621, 768, 748, 923, 169, 738, 805, 35, 329, 854, 726, 551, 812, 769, 972, 126, 154, 674, 815, 773, 334, 626, 917, 98, 857, 14, 891, 715, 749, 111, 494, 552};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> first = {560, 221, 539, 112, 511, 295, 891, 9, 7, 102, 265, 968, 951, 538, 339, 472, 249, 682, 20, 431, 79, 873, 189, 990, 717, 708, 88, 825, 226, 645, 0, 679, 403, 98, 44, 466, 621, 328, 602, 103, 494, 665, 514, 661, 232, 567, 759, 743, 918};
    vector<int> second = {9, 44, 221, 267, 24, 602, 825, 792, 79, 88, 769, 472, 645, 717, 961, 232, 973, 189, 403, 968, 708, 110, 567, 503, 970, 339, 494, 543, 112, 526, 770, 784, 657, 393, 48, 526, 539, 514, 682, 385, 621, 974, 406, 476, 968, 0, 784, 328, 661};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> first = {889, 574, 242, 364, 101, 8, 941, 940, 944, 490, 661, 616, 532, 966, 509, 431, 195, 598, 275, 991, 482, 531, 289, 541, 759, 629, 979, 882, 756, 546, 391, 66, 128, 400, 22, 436, 853, 820, 823, 413, 872, 496, 107, 968, 280, 683, 919, 33, 194};
    vector<int> second = {820, 195, 630, 8, 546, 275, 810, 447, 482, 853, 616, 389, 680, 496, 101, 532, 888, 66, 280, 53, 106, 940, 509, 792, 531, 759, 714, 176, 364, 242, 910, 0, 431, 242, 22, 899, 874, 872, 991, 253, 965, 935, 407, 459, 70, 889, 312, 872, 578};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> first = {836, 652, 657, 364, 679, 649, 864, 728, 614, 855, 889, 447, 968, 131, 137, 670, 422, 469, 48, 325, 826, 87, 56, 60, 644, 430, 225, 35, 535, 732, 211, 950, 844, 476, 462, 105, 468, 97, 825, 357, 956, 693, 762, 493, 199, 429, 541, 572, 283};
    vector<int> second = {343, 643, 131, 844, 231, 916, 535, 377, 211, 493, 260, 644, 283, 792, 657, 994, 614, 78, 762, 825, 422, 216, 448, 728, 572, 522, 77, 35, 166, 468, 693, 362, 868, 541, 166, 670, 325, 844, 87, 716, 429, 460, 652, 734, 28, 912, 462, 968, 364};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> first = {691, 266, 544, 741, 909, 273, 517, 643, 945, 399, 65, 830, 474, 545, 137, 629, 726, 377, 495, 63, 413, 364, 185, 862, 893, 726, 297, 497, 824, 91, 338, 312, 413, 511, 660, 492, 611, 712, 848, 74, 260, 250, 456, 299, 357, 845, 130, 880, 16};
    vector<int> second = {230, 909, 91, 848, 66, 403, 741, 137, 117, 880, 138, 712, 354, 377, 511, 644, 399, 867, 456, 457, 413, 1000, 65, 26, 657, 715, 611, 492, 847, 504, 74, 104, 20, 297, 235, 819, 830, 266, 250, 299, 961, 247, 701, 260, 671, 357, 824, 413, 699};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> first = {933, 719, 567, 770, 599, 757, 429, 29, 616, 44, 711, 560, 624, 495, 299, 528, 867, 369, 410, 819, 926, 637, 359, 294, 858, 191, 85, 541, 152, 331, 966, 147, 795, 713, 166, 915, 700, 618, 490, 91, 319, 371, 350, 994, 905, 16, 217, 385, 753, 338};
    vector<int> second = {44, 495, 217, 191, 429, 560, 926, 85, 29, 541, 711, 410, 599, 624, 994, 294, 490, 637, 858, 867, 933, 16, 359, 966, 147, 385, 757, 618, 905, 166, 915, 719, 567, 91, 319, 338, 616, 371, 152, 331, 299, 369, 713, 770, 350, 528, 819, 795, 700, 753};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> first = {478, 91, 277, 760, 338, 650, 432, 481, 782, 739, 375, 620, 961, 895, 533, 17, 686, 581, 55, 435, 610, 902, 191, 299, 98, 410, 627, 68, 56, 84, 378, 598, 956, 407, 494, 790, 605, 593, 672, 842, 71, 336, 455, 945, 347, 0, 583, 288, 909, 648};
    vector<int> second = {902, 620, 432, 68, 627, 435, 347, 378, 593, 648, 191, 909, 842, 790, 605, 494, 533, 961, 55, 0, 455, 650, 610, 375, 17, 581, 583, 98, 598, 895, 84, 299, 336, 410, 478, 288, 91, 782, 277, 56, 760, 672, 945, 956, 739, 481, 686, 407, 71, 338};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> first = {533, 315, 470, 670, 165, 767, 312, 517, 7, 199, 415, 588, 286, 794, 361, 630, 643, 673, 851, 819, 736, 933, 621, 560, 660, 672, 77, 405, 895, 305, 169, 245, 8, 60, 223, 462, 112, 753, 642, 114, 799, 672, 147, 781, 210, 803, 19, 676, 498, 829};
    vector<int> second = {315, 112, 114, 621, 673, 210, 933, 405, 642, 245, 517, 462, 588, 77, 199, 803, 60, 630, 767, 794, 165, 8, 643, 670, 470, 305, 147, 286, 676, 799, 19, 560, 781, 819, 672, 7, 736, 753, 672, 498, 415, 533, 312, 660, 169, 895, 361, 829, 851, 223};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> first = {429, 149, 447, 210, 601, 455, 972, 84, 724, 169, 72, 130, 313, 126, 154, 805, 432, 334, 351, 506, 809, 857, 674, 541, 815, 268, 137, 494, 923, 921, 768, 262, 111, 325, 306, 46, 429, 462, 729, 959, 121, 511, 735, 766, 231, 871, 857, 636, 22, 797};
    vector<int> second = {805, 313, 494, 797, 429, 149, 511, 126, 22, 268, 334, 857, 121, 262, 447, 429, 210, 154, 351, 768, 84, 506, 137, 325, 766, 130, 724, 541, 857, 959, 455, 306, 674, 462, 46, 231, 972, 601, 729, 169, 871, 636, 923, 815, 809, 921, 72, 432, 735, 111};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> first = {189, 682, 708, 567, 616, 476, 784, 112, 24, 968, 769, 440, 686, 877, 0, 645, 252, 511, 770, 79, 526, 328, 792, 917, 459, 339, 232, 968, 9, 403, 717, 385, 970, 221, 973, 539, 393, 430, 88, 661, 621, 602, 406, 110, 44, 494, 472, 825, 48, 514};
    vector<int> second = {406, 514, 973, 221, 784, 430, 539, 661, 189, 708, 825, 769, 792, 472, 877, 79, 0, 88, 970, 770, 717, 459, 526, 252, 328, 112, 339, 48, 440, 232, 385, 968, 511, 24, 476, 917, 602, 393, 44, 567, 682, 110, 645, 686, 968, 9, 616, 494, 403, 621};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> first = {22, 106, 759, 407, 70, 792, 391, 242, 53, 680, 965, 683, 574, 509, 874, 810, 107, 578, 823, 312, 532, 661, 541, 944, 253, 0, 888, 935, 882, 176, 459, 872, 940, 910, 714, 853, 899, 820, 389, 289, 101, 242, 447, 941, 979, 400, 598, 872, 33, 630};
    vector<int> second = {400, 532, 289, 312, 940, 598, 176, 389, 447, 899, 253, 33, 22, 874, 759, 882, 792, 944, 459, 935, 810, 872, 578, 714, 101, 107, 53, 965, 0, 979, 574, 106, 853, 941, 661, 888, 820, 823, 70, 910, 541, 872, 509, 683, 407, 242, 391, 630, 242, 680};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> first = {56, 855, 994, 60, 950, 264, 78, 312, 77, 48, 62, 912, 956, 105, 656, 702, 649, 853, 260, 29, 826, 663, 137, 225, 357, 447, 216, 166, 430, 468, 166, 476, 147, 679, 836, 605, 792, 667, 734, 97, 199, 643, 469, 889, 247, 916, 732, 864, 880, 493};
    vector<int> second = {912, 77, 225, 60, 137, 667, 880, 430, 493, 792, 468, 247, 956, 643, 826, 147, 29, 166, 853, 836, 476, 649, 48, 199, 78, 994, 950, 166, 889, 105, 264, 469, 679, 447, 732, 855, 62, 260, 56, 312, 357, 663, 916, 702, 605, 864, 97, 656, 734, 216};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> first = {764, 966, 371, 819, 369, 753, 933, 711, 867, 624, 528, 567, 637, 495, 385, 166, 152, 191, 994, 299, 599, 795, 147, 338, 294, 616, 350, 926, 217, 319, 713, 560, 410, 905, 541, 490, 331, 29, 85, 915, 858, 91, 770, 359, 700, 16, 44, 719, 757, 618};
    vector<int> second = {560, 618, 166, 294, 385, 359, 338, 369, 926, 299, 770, 147, 331, 29, 541, 350, 713, 528, 371, 91, 495, 624, 711, 637, 757, 44, 700, 16, 867, 599, 915, 410, 819, 933, 217, 795, 858, 905, 85, 966, 616, 567, 319, 994, 152, 719, 191, 753, 429, 764};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
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
    vector<int> first = {581, 627, 533, 455, 336, 299, 895, 956, 902, 0, 620, 407, 610, 650, 790, 84, 593, 826, 435, 55, 605, 375, 191, 228, 945, 760, 686, 91, 432, 583, 288, 17, 739, 909, 410, 672, 648, 98, 478, 277, 378, 71, 481, 56, 842, 961, 494, 338, 782, 68};
    vector<int> second = {826, 583, 375, 0, 909, 672, 91, 407, 627, 648, 581, 956, 533, 739, 410, 945, 961, 455, 610, 842, 288, 56, 55, 598, 650, 98, 494, 686, 71, 432, 895, 481, 338, 790, 68, 593, 191, 902, 435, 760, 17, 336, 782, 84, 378, 478, 299, 277, 605, 228};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> first = {621, 119, 673, 819, 112, 736, 114, 415, 643, 753, 19, 533, 642, 829, 462, 223, 803, 980, 39, 77, 660, 199, 60, 315, 165, 312, 405, 630, 245, 799, 286, 7, 210, 498, 794, 933, 851, 169, 361, 670, 895, 672, 781, 147, 676, 517, 588, 470, 8, 560};
    vector<int> second = {199, 819, 415, 286, 672, 736, 794, 781, 312, 470, 803, 799, 517, 753, 147, 676, 361, 672, 895, 77, 673, 642, 315, 851, 7, 223, 643, 210, 19, 630, 114, 245, 933, 60, 980, 405, 560, 498, 670, 165, 829, 39, 169, 621, 588, 119, 660, 112, 462, 533};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> first = {729, 735, 121, 432, 126, 169, 511, 972, 149, 137, 871, 805, 154, 494, 636, 262, 455, 809, 210, 857, 268, 429, 815, 351, 22, 797, 506, 334, 225, 601, 857, 231, 429, 130, 306, 72, 111, 724, 462, 313, 959, 921, 923, 674, 325, 447, 462, 506, 84, 971};
    vector<int> second = {636, 735, 674, 149, 462, 126, 871, 84, 325, 971, 511, 429, 429, 111, 601, 268, 729, 262, 805, 210, 231, 121, 334, 959, 462, 455, 506, 494, 306, 541, 857, 809, 432, 972, 72, 923, 130, 857, 169, 797, 447, 506, 351, 22, 137, 313, 225, 154, 724, 921};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> first = {494, 661, 252, 645, 440, 430, 406, 459, 682, 616, 265, 970, 686, 44, 770, 112, 825, 769, 539, 784, 48, 721, 717, 79, 511, 403, 621, 221, 725, 339, 476, 0, 968, 877, 385, 472, 232, 24, 708, 769, 968, 88, 567, 328, 917, 514, 943, 189, 602, 9};
    vector<int> second = {526, 970, 339, 943, 769, 825, 9, 682, 567, 232, 539, 44, 79, 476, 616, 385, 968, 602, 511, 494, 514, 725, 88, 221, 877, 968, 784, 252, 0, 406, 189, 721, 48, 769, 265, 440, 621, 661, 472, 328, 645, 459, 112, 24, 917, 708, 403, 686, 430, 717};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> first = {22, 759, 979, 578, 872, 853, 823, 407, 532, 910, 431, 253, 944, 714, 312, 280, 53, 459, 574, 8, 70, 820, 598, 33, 389, 899, 195, 400, 792, 810, 541, 496, 872, 106, 935, 447, 242, 680, 941, 0, 965, 364, 940, 874, 101, 242, 888, 630, 176, 509};
    vector<int> second = {447, 176, 253, 888, 8, 714, 872, 400, 106, 459, 389, 630, 940, 979, 680, 242, 0, 431, 965, 312, 941, 935, 280, 820, 242, 759, 574, 195, 541, 944, 598, 823, 853, 53, 22, 899, 910, 810, 532, 407, 70, 874, 792, 101, 872, 364, 509, 391, 578, 496};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> first = {476, 166, 732, 663, 667, 679, 447, 994, 836, 868, 702, 880, 493, 643, 468, 649, 225, 469, 916, 97, 260, 950, 855, 468, 78, 864, 430, 56, 48, 448, 522, 889, 199, 792, 216, 716, 734, 137, 357, 956, 853, 656, 460, 60, 912, 77, 826, 166, 105, 343};
    vector<int> second = {868, 679, 97, 643, 166, 716, 468, 468, 343, 199, 78, 469, 734, 56, 260, 916, 60, 912, 430, 792, 667, 357, 476, 137, 956, 105, 77, 855, 48, 29, 880, 493, 826, 225, 950, 448, 166, 522, 460, 656, 649, 853, 447, 864, 663, 216, 889, 994, 732, 836};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> first = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> second = {0};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> first = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> second = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> first = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> second = {0};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> first = {0, 0, 0};
    vector<int> second = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> first = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> second = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> first = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> second = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> first = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> second = {0};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> first = {0, 0, 0};
    vector<int> second = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> first = {0, 0, 0};
    vector<int> second = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> first = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> second = {0, 0, 0};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> first = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> second = {0, 0, 0};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> first = {867, 966, 152, 29, 338, 91, 560, 753, 294, 350, 331, 711, 369, 567, 926, 299, 410, 819, 385, 16, 637, 795, 541, 44, 905, 528, 713, 624, 770, 994, 147, 319, 915, 217, 618, 371, 933, 599, 700, 191, 719, 757, 858, 85, 429, 996, 616, 490, 166, 359};
    vector<int> second = {178, 525, 495, 429, 169, 90, 128, 587, 996, 455, 485, 341, 591, 135, 640, 79, 441, 528, 994, 598, 319, 172, 79, 461, 843, 128, 626, 224, 764, 547, 936, 418};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> first = {378, 481, 627, 842, 593, 790, 299, 945, 91, 0, 375, 410, 739, 56};
    vector<int> second = {288, 605, 583, 277, 55, 407, 895, 593, 71, 338};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> first = {371, 794, 673, 624, 940, 912, 379, 177, 36, 507, 183, 77, 774, 273, 664, 799, 336, 749, 984, 350, 396, 301, 836, 49, 944, 908, 305, 174, 713, 770};
    vector<int> second = {19, 895, 794, 736, 749, 361, 470, 462, 415, 490, 533, 660, 223, 992, 687, 682, 670, 452, 799, 735, 630, 753, 405, 642, 673, 517, 322, 767, 672, 726, 986, 77, 305, 7, 933, 112, 324, 8, 498, 60, 245, 273, 588, 931, 967, 781};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> first = {592, 891, 98, 462, 14, 636, 196, 749, 854, 748, 917, 308, 949, 626, 870, 513};
    vector<int> second = {897, 735, 552, 169, 769, 306, 923, 766, 959, 22, 812, 494, 726, 35, 972, 601, 636, 325, 231, 432, 46, 455, 429, 787, 334, 724, 857, 674, 334, 541, 511, 715, 111, 130, 126, 621, 121, 154, 738, 351, 773, 768, 815, 329, 551, 805};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> first = {538, 20, 232, 112, 119, 7, 511, 679, 431, 196, 103, 249, 226, 602, 102, 98, 665, 891, 560, 265, 759, 36, 743, 295, 267, 918, 227, 951, 990, 507, 873, 466};
    vector<int> second = {476, 339, 961, 968, 784, 970, 494, 503, 406, 44, 385, 770, 221, 784, 514, 543, 112, 110, 0, 393, 602, 24, 567, 657, 526, 973, 526, 769, 792, 232, 974, 48};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> first = {411, 221, 278, 701, 656, 563, 916, 777, 91, 470, 620, 100, 108};
    vector<int> second = {97, 827, 644, 286, 361, 377, 256, 624, 66, 448, 678, 648, 819, 470, 135, 342, 371, 652, 129};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
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
    vector<int> first = {0, 176, 391, 714, 792, 389, 400, 53, 888, 312, 598, 872, 810, 935, 253, 680, 459, 979, 874, 965, 407, 944, 531, 70, 630, 823, 910, 541, 941, 574, 106, 899};
    vector<int> second = {991, 532, 531, 482, 578, 280, 101, 242, 22, 616, 872, 242, 496, 853, 8, 509, 820, 447, 66, 364, 195, 759, 889, 431, 546, 940};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> first = {429, 490, 994};
    vector<int> second = {369, 91, 528, 85, 299, 350, 713, 819, 560, 858, 331, 147, 385, 753, 294, 966, 166, 757, 616, 867, 926, 711, 359, 719, 217, 994, 933, 410, 915, 599, 541, 29};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> first = {979, 480};
    vector<int> second = {976, 171, 688, 480, 285, 141, 652, 451, 318, 187, 420, 897, 531, 666, 766, 206, 197, 406, 826, 78, 481, 38, 908, 107, 589, 884, 231, 110, 949, 515, 62, 290, 621, 917, 743, 323, 455};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> first = {478, 17};
    vector<int> second = {478, 533};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
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
    vector<int> first = {648, 561};
    vector<int> second = {503, 782, 288, 277, 561, 842, 826, 338, 407, 481, 583, 432, 55, 605, 739, 299, 91, 378, 228, 56, 895, 961, 790, 902, 0, 945, 118, 71, 410, 672, 593, 494, 84, 375, 627, 435};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> first = {799, 735};
    vector<int> second = {682, 992, 273, 624, 305, 726, 183, 336, 749, 713, 396, 967, 944, 664, 735, 984, 452, 324, 687, 507, 490, 986, 749, 931};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> first = {210, 533};
    vector<int> second = {672, 781, 560, 851, 286, 312, 315, 753, 7, 245, 895, 470, 210, 165, 462, 673, 169, 670, 19, 794, 361, 405, 829, 621, 799, 415, 588, 114, 630};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> first = {443, 4};
    vector<int> second = {283, 833, 287, 204, 734, 442, 678, 505, 400, 733, 147, 693, 665, 825, 969, 823, 443, 754, 924, 784, 533, 399, 77, 924, 629, 777, 793, 870, 504, 384, 431, 820, 847, 777, 633, 920, 599, 195, 593, 84, 889, 508, 839, 363};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> first = {12, 13};
    vector<int> second = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> first = {1, 2, 3, 4, 5, 5};
    vector<int> second = {5, 5, 7, 8, 9, 10, 11};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> first = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> second = {1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> first = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> second = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> first = {0, 0, 0, 1};
    vector<int> second = {1, 1, 1, 1, 1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> first = {1, 2, 3, 4};
    vector<int> second = {1, 5, 6, 7, 8};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> first = {1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> second = {2, 2, 2, 2, 2, 2};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
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
    vector<int> first = {2, 623, 5, 3, 6, 21, 5, 56, 7, 2, 6, 4, 7, 24, 6, 43};
    vector<int> second = {1, 1, 1, 1, 56, 3, 6, 2, 7, 5, 7, 34, 76, 4, 63};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> first = {1, 2, 3};
    vector<int> second = {5, 5, 5, 5, 5};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> first = {12, 13, 34, 2, 43, 2, 1, 23, 123, 2, 123, 12, 2, 213, 12, 12, 12, 123, 12, 12, 132, 12, 12, 123, 1, 43};
    vector<int> second = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> first = {1, 1, 1, 1, 1};
    vector<int> second = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> first = {1, 2};
    vector<int> second = {3, 4};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
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
    vector<int> first = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51};
    vector<int> second = {103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> first = {1, 2};
    vector<int> second = {3, 2};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> first = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> second = {10, 11, 12, 13, 14, 15, 16};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> first = {1, 3, 3};
    vector<int> second = {2, 2, 2};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> first = {1, 2, 3};
    vector<int> second = {1, 2, 3, 4};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> first = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 50, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> second = {51};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> first = {1, 2, 3, 4};
    vector<int> second = {5, 6};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> first = {1, 2, 3, 4};
    vector<int> second = {4, 5, 6, 7, 8};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> first = {3, 4, 5, 6, 7, 8};
    vector<int> second = {1, 3, 4, 5, 6, 7};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> first = {1, 0, 2, 2, 3, 2, 3, 1, 3, 2, 3, 2, 0, 1, 1, 0, 3, 1, 3, 2, 1, 3};
    vector<int> second = {0, 3, 3, 2, 0, 2, 1, 0, 1, 1, 2};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> first = {1, 2, 3, 4, 5, 6, 7};
    vector<int> second = {8, 9, 10, 11, 12, 13, 14};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> first = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> second = {12, 13, 14, 15};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> first = {12, 13, 34, 3, 2, 3, 3, 3, 2, 2, 3, 23, 23, 32, 23, 4, 34, 43, 45, 43, 45, 453, 4, 4};
    vector<int> second = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
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
    vector<int> first = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> second = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> first = {1, 1, 1, 1};
    vector<int> second = {1, 1, 1, 1, 1, 2};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> first = {5, 1, 2, 3};
    vector<int> second = {5, 5, 5, 5, 5};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> first = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> second = {1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> first = {1, 2, 3};
    vector<int> second = {4, 5, 6};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> first = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
    vector<int> second = {1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> first = {0};
    vector<int> second = {1, 2, 3};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> first = {1};
    vector<int> second = {1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> first = {1, 2, 3, 4, 5, 6};
    vector<int> second = {5, 6, 7, 8, 9, 10, 11};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> first = {1, 1, 1};
    vector<int> second = {2};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> first = {810, 445, 31, 930, 456, 275, 642, 854, 924, 916, 479, 999, 854, 379, 169, 664, 380, 44, 165, 405, 769, 251, 627, 978, 460, 962, 70, 765, 556, 766, 522, 416};
    vector<int> second = {235, 783, 292, 374, 438};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> first = {0, 2, 1, 1, 3};
    vector<int> second = {2, 3, 2, 1, 0, 0, 1, 2, 1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> first = {3};
    vector<int> second = {9, 5, 8, 9, 9, 3};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> first = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> second = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> first = {5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1};
    vector<int> second = {6, 6};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> first = {3, 3, 3, 4, 4, 4};
    vector<int> second = {3, 3, 3, 3, 3, 3};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> first = {10, 10, 2, 0, 4, 1, 5};
    vector<int> second = {6, 4, 7, 4, 7, 6, 8, 1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> first = {2};
    vector<int> second = {1, 1, 1, 1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> first = {0, 0, 2, 1, 2, 1, 0, 0, 2, 2, 1, 0, 1, 2, 0, 2, 2, 0, 2, 0, 2, 2, 1, 0, 1, 2, 2, 2, 0, 2, 2, 0, 0, 1, 2, 0, 0, 1, 1, 0, 0, 1, 0, 2, 0, 0, 2, 0};
    vector<int> second = {1, 2, 2, 2, 0, 2, 0};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> first = {0};
    vector<int> second = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> first = {1, 2, 3, 4, 5, 6};
    vector<int> second = {12, 6, 7, 8, 9, 10, 11};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> first = {1, 2, 3, 4, 5, 6, 7, 10};
    vector<int> second = {8, 9, 11};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> first = {1, 1, 1, 1, 9, 9, 9, 9, 6, 6, 6, 6};
    vector<int> second = {9, 9, 9, 9, 9, 6, 6, 6, 1, 1, 1, 1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> first = {5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, 7, 7, 7, 5, 5, 4, 9};
    vector<int> second = {6, 6, 4, 4, 4, 3, 3, 3, 7, 2, 2, 1, 1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> first = {1, 1, 1, 1};
    vector<int> second = {2, 2};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> first = {1, 2, 2, 2, 2};
    vector<int> second = {1, 1, 1, 1, 1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> first = {4, 5, 1, 8, 4, 7};
    vector<int> second = {8, 4, 9, 2};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> first = {1, 1, 1};
    vector<int> second = {2, 2, 2};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> first = {1, 1};
    vector<int> second = {1, 2};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> first = {1, 1, 1, 1, 1, 1, 1};
    vector<int> second = {2, 2, 2, 2, 2, 2, 2};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> first = {1, 1, 1, 2, 2, 2, 2};
    vector<int> second = {1, 1, 1, 1, 1, 1, 1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> first = {1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> second = {51, 51};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> first = {1, 2};
    vector<int> second = {1, 2, 3};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> first = {2, 1, 1, 1};
    vector<int> second = {2, 2, 2, 2, 2};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> first = {6, 6, 6, 6, 6, 6};
    vector<int> second = {3, 3, 3};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> first = {1, 1, 1, 1, 1, 2};
    vector<int> second = {2, 2, 2, 2, 2, 2, 2};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> first = {1, 2, 3, 4, 5};
    vector<int> second = {6, 7, 8, 9, 10};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> first = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> second = {51, 432, 766, 45, 345, 3, 656, 87, 765, 454};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> first = {1, 2, 4, 5, 6, 7};
    vector<int> second = {1, 10, 11, 12, 13, 14, 15};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> first = {1, 2, 3, 6};
    vector<int> second = {1, 3, 2, 7};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> first = {1, 2, 3};
    vector<int> second = {4};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> first = {2, 3};
    vector<int> second = {1, 1, 1};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> first = {0, 0, 1, 2, 1, 3, 1, 1, 0, 1, 1, 0, 1, 0, 3, 3, 2, 1, 2, 1, 2, 3, 3, 1, 3, 2, 1, 1, 3, 0, 1, 0, 2};
    vector<int> second = {0, 3, 2, 1, 2, 1, 0, 1, 3, 0, 2, 1, 3, 3, 0, 1, 1, 3, 0, 2, 3, 2, 2, 2, 0, 1, 3, 3};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> first = {8, 8, 89, 8, 8, 8, 8, 8, 8, 9, 9, 9};
    vector<int> second = {8, 9, 10, 11, 12, 9, 9, 8, 8, 47, 555};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> first = {0, 0, 0, 0};
    vector<int> second = {1, 2, 3, 4, 5};
    TheHomework* pObj = new TheHomework();
    clock_t start = clock();
    int result = pObj->transform(first, second);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310333&rd=10804&pm=8415
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <vector> 
 
using namespace std;  
 
 
int memo[51][51][51]; 
 
struct TheHomework { 
    
   int rec( int good, int extra, int missing ) { 
      if( extra == 0 && missing == 0 ) return 0; 
 
      int n = good + extra; 
 
      int &ret = memo[good][extra][missing]; 
      if( ret >= 0 ) return ret; 
 
      ret = 1000000; 
 
      { // delete 
         int m = min( extra, n/2 ); 
         for( int i = 1; i <= m; ++i ) 
            ret <?= 1 + rec( good, extra-i, missing ); 
      } 
       
      { // insert 
         int m = min( missing, n ); 
         for( int i = 1; i <= m; ++i ) 
            ret <?= 1 + rec( good+i, extra, missing-i ); 
      } 
       
      { // change  
         int m = min( min( extra, missing ), n/2 ); 
         for( int i = 1; i <= m; ++i )  
            ret <?= 1 + rec( good+i, extra-i, missing-i ); 
      } 
 
      return ret; 
   } 
 
   int transform( vector <int> first, vector <int> second ) { // caret here 
      int good = 0; 
      int extra = 0; 
      int missing = 0; 
 
      for( int i = 0; i < first.size(); ++i ) { 
         int found = 0; 
         for( int j = 0; j < second.size(); ++j ) { 
            if( first[i] == second[j] ) { 
               found = 1; 
               second.erase( second.begin() + j ); 
               break; 
            } 
         } 
         if( found ) ++good; 
         if( !found ) ++extra; 
      } 
      missing = second.size(); 
 
      memset( memo, -1, sizeof memo ); 
 
      return rec( good, extra, missing ); 
   } 
}; 
 
 
 
  
 
 
 
// Powered by FileEdit
// Powered by moj 4.0 alpha 5 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/