/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1845
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

class HardDequeSort {
public:
    int minDeques(vector<int> data);
};

int HardDequeSort::minDeques(vector<int> data) {
    int ret;
    return ret;
}


int test0() {
    vector<int> data = {50, 45, 55, 60, 45, 65, 40, 70, 70, 35, 30, 75};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
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
    vector<int> data = {3, 6, 0, 9, 6, 3};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
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
    vector<int> data = {0, 2, 1, 4, 3, 6, 5, 8, 7, 9};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> data = {100, 100, 100, -100, -100, -100, -50, -50, -50};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> data = {1, 2, 5, 3, 1, 0, 5, 4, 1, 7, 3, 6, 0, 2, 5, 5, 9, 5, 10, 5, 10, 7, 9, 8, 9, 7, 5, 1, 10, 1, 2, 7, 6, 5, 4, 6, 6, 8, 9, 5, 10, 5, 5, 2, 3, 4, 5, 5, 3};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> data = {454, 537, 7, 976, 537, 908, 976, 908, -94, 454, 908, 64, 454, -731, 908, -646, 537};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> data = {724, 724, 724, 724, 724, -471, -471, 802, -481, 343, 65, -471, 343, 994, 994, -806, 318};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> data = {226, 226, 226, 778, 226, 226, 778, 778, -308, -960, 12, 893, -960, 245, 608, 226, 893, 88, -988, -988, -248, 778, -43, -708, 84, -495, -117, -960, -708, -792};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> data = {902, 878, 895, 860, 869, 791, 829, 772, 784, 731, 759, 651, 665, 541, 586, 409, 534, 264, 405, 230, 247, 159, 224, 36, 124, -5, 31, -177, -58, -327, -194, -357, -340, -474, -391, -494, -492, -508, -505, -577, -554, -723, -662, -824, -768, -908, -880, -975, -930, -993};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> data = {-858, -790, -791, -750, -769, -571, -746, -464, -509, -439, -449, -416, -426, -388, -412, -369, -378, -316, -364, -279, -287, -123, -194, -48, -71, 61, 28, 304, 94, 346, 311, 411, 387, 460, 453, 547, 527, 604, 580, 665, 621, 730, 718, 802, 733, 871, 809, 921, 884, 985};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> data = {-790, -791, -750, -769, -571, -746, -464, -509, -439, -449, -416, -426, -388, -412, -369, -378, -316, -364, -279, -287, -123, -194, -48, -71, 61, 28, 304, 94, 346, 311, 411, 387, 460, 453, 547, 527, 604, 580, 665, 621, 730, 718, 802, 733, 871, 809, 921, 884, 985};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> data = {860, 869, 791, 829, 772, 784, 731, 759, 651, 665, 541, 586, 409, 534, 264, 405, 230, 247, 159, 224, 36, 124, -5, 31, -177, -58, -327, -194, -357, -340, -474, -391, -494, -492, -508, -505, -577, -554, -723, -662, -824, -768, -908, -880, -975, -930, -993};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> data = {902, 878, 895, 860, 869, 791, 829, 772, 784, 731, 759, 651, 665, 541, 586, 409, 534, 264, 405, 230, 247, 159, 224, 36, 124, -5, 31, -177, -58, -327, -194, -357, -340, -474, -391, -494, -492, -508, -505, -577, -554, -723, -662, -824, -768, -908, -880, -975, -930};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> data = {902, 878, 895, 860, 869, 791, 829, 772, 784, 731, 759, 651, 665, 541, 586, 409, 534, 264, 405, 230, 247, 159, 224, 36, 124, -5, 31, -177, -58, -327, -194, -357, -340, -474, -391, -494, -492, -508, -505, -577, -554, -723, -662, -824, -768, -908, -880, -975, 930};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> data = {-330, -628, -730, 289, -189, -538};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
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
    vector<int> data = {-571, -538, 956, 354, 174, -188, -708, -989};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> data = {451, -333, -266, -148, -513, 396, -726, -694};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> data = {721, 172, 334};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
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
    vector<int> data = {-263, 983, -45, 880, 558, -393, -20, -419, -87, -466, 115, 37, 393, -529, 138, 303, -444, -296, 190, -641, -883, -249, 122, -950, 974, 240, 227, 100, 266, 434, 240, -913, -968};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> data = {832, -73, -386, -648, 228, -3, -878, 734, 927, -83, -570, -783, -84, 918, 182, -503, -166, 526, 62, -147, 246, -749, -169, -522, -280, -969, -650, -327};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> data = {334, 351, 959, -631, -57, -326, -147, -168, 4, -627, -939, 632, -455, -764, -650, -894, -62, -417, 543, 668, -918, -294, 644, -460, -546, 94};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> data = {-604, -441, 270, 773, 87, -898, -997, 115, -278, -700, -135, -98, -954, -126, -567, -471, -404, 427, 648, -968, 794, -6, 143, -532, -490, 193, -526, -231, 743, 49, -850, -964, -578, 152, 867, -74, 764, -535, -197};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> data = {-331, 950, 957, 236, 83, 578, 66, -455, 94, -835, -878, -116, -108, -207, 29, 475, -853, -954, -880, 160, 428, -405, 897};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> data = {697, -704, 915, 182, -724, 146, 180, -273, -436, 976, 993, 732, 387, -267, 360, 540, -724, 747, -365, -584, -689, 553, -718, 642, -459};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> data = {-583, 693, 410, -153, -243, 13, -318, -949, 917, -32, -973, 873, 381, 494, -449, -612, 148, -442, 638, -271, 831, 903, 409, 306, -282, -275, 447, 872, -751, -485, -388, 941, 328, -262, 833, -160, 311, 200};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> data = {679, 549, 912, 399, 593, -477, -609, -662, 901, 468, -992, 231, -327, 235, -372, -372, -545, -6, -308, 939, 438, 552, 20, 380, -431, 366, 461, 850, 677, -229};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> data = {884, 66, -476, 68, 998, 427, -86, 214, 626, -970, -445, -81, 427, -739, 98, -318, -104, 986, -13, -570, 614, -438, 253, 113, -996, 490, -564, -886, -524};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> data = {685, -270, -175, -9, -170, 874, 218, 422, 983, 14, -798, 377, -507, -974, 524, -846, -235, 945, 942, 254, -687, -463, -398, -751, 773, -525, 888, -561, -241, -772, -943, -590, 807, 981, 608, 931, -11, -47, 383, 50, 253, 655, 419, 82, -706, 233};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> data = {8, -10, 6, -4, -5, 9, 6, 0, 3, -10, 10, -5, -4, -7, 8, 2, -6, -7, -1, -1, -1, 3, -6, -6, 8, -9, -5, 9, 3, -8, 3, -4, -9, -1, 3, 2, 1, -3, 0, 4, 5, 7};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> data = {-8, 4, 8, -3, -4, -2, 2, 5, 3, -2, 2, -5, -8, 7, 2, 9, -9, -10, 9, 5, 8, 0, -3, 10, -9, -6, 3, -7, 1, -5, -3, -10, 4, 1, 9, 10, 6, 1, 3, -6, -1, 4, -6, -5, 1, -5, 3, -5, 3, -3};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> data = {10, -2, 10, 8, 2, -5, 7, 3, 6, 5, -4, 0, -9, -6, -1, 1, -2, 4, -7, 1, -6, -3, 8, 7, -1, 5, -10, 9, -10, 6, 3, -5, -10, 4, 4, -1, -4, 1, 10, 0, -1, -9, -8, 8, -9, 10, -3};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
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
    vector<int> data = {0, 10, -9, -1, -2, 10, 4, -6, -9, 7, 1, -1, 0, -3, -2, 5, -1, -9, 5, 6, -5, -1, 10, 3, -1, -5, 9, -2, 7, -8, -7, -9, 1, 0, 6, -9, -2, -1, 7, 6, 4, 7};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> data = {-3, 6, -4, -7, 0, -3, 9, 4, -9, 2, 9, 4, 2, 4, 3, 3, -7, 0, 7, -3, -2, 2, -10, 6, 3, -1, 4, 3, -4, 0, 6, 0, -7, 10, -2, -2, -4, -1, 0, 3};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> data = {3, -10, -9, 1, -2, 1, 8, 6, 2, 4, -6, -5, 3, 1, 7, 0, 6, 5, 9, -1, 0, 7, 0, -2, 0, -8, 6, -7, -6, -4, -1, 7, 0, -6, -3, -10, -6, 7, 6, 1, 5, -9, 10, 9, -4};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> data = {1, 0, -6, 7, 3, 4, -3, 9, 0, 6, -7, -3, 1, -2, 2, 5, 1, 7, -1, -8, 6, 5, 1, 3, -1, -6, 3, -8, -9, -4, 6, -2, 2, -9, -5, 1, 2, -8, -6, 6, -10, 4, -6, 8, 8, 5, -6, 2, 9};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> data = {1, -6, 1, -2, -5, -10, -10, -1, -3, -4, -1, -9, -2, -9, -6, -7, -10, 3, 1, -4, -9, -2, 5, 6, -10, 10, -2, 3, -1, -1, -2, -9, -5, 2, -2, 7, 5, -5, 10, -6, 8};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> data = {-1, 5, 8, -4, -6, -9, 10, -6, -3, 3, -2, -2, 9, 7, 1, -4, -10, -4, 0, 1, 6, -6, -4, -3, 9, 3, 0, -4, 5, -2, -8, 1, -10, -9, 8, -9, -4, 0, 7, -7, 6, -6, 3, -9, -4, -8, 5, 0, -5};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> data = {10, 2, -5, -5, 7, -8, -5, 1, 7, -10, 6, -7, 4, 7, 1, -4, 4, -3, -10, -1, -5, 0, 9, 8, 10, -10, 1, -8, 5, 8, -10, 1, 3, 7, 0, -7, 5, -10, -5, 3, 7, 6, 9, 6};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> data = {2, 3, 4, 4, 3, 3, 2, 2, 3, 0, 2, 0, 0, 2, 3, 1, 2, 1, 4, 1, 5, 4, 0, 5, 2, 2, 4, 5, 5, 1, 5, 0, 2, 0, 5, 2, 0, 4, 4, 5, 2, 0, 5, 4, 4, 1, 2};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> data = {0, 3, 0, 2, 1, 1, 4, 0, 2, 5, 3, 3, 5, 4, 1, 5, 4, 3, 2, 4, 3, 4, 2, 1, 0, 1, 0, 4, 2, 2, 1, 5, 3, 4, 0, 5, 1, 1, 4, 4, 1, 3, 5, 5, 1, 3, 5, 1};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> data = {3, 0, 2, 1, 0, 3, 5, 0, 5, 5, 0, 1, 2, 4, 4, 3, 3, 0, 4, 4, 2, 1, 1, 1, 0, 0, 2, 0, 5, 5, 5, 2, 5, 0, 2, 3, 0, 5, 5, 3, 4, 5, 5, 3, 4, 3};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> data = {1, 5, 5, 1, 5, 3, 1, 1, 4, 1, 1, 4, 5, 4, 0, 1, 3, 4, 5, 4, 1, 2, 2, 5, 5, 2, 4, 3, 2, 3, 5, 5, 5, 3, 4, 4, 0, 1, 1, 4, 5, 1, 5, 3, 1};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> data = {1, 3, 3, 3, 5, 3, 3, 1, 4, 3, 2, 0, 1, 0, 5, 0, 3, 1, 5, 1, 5, 3, 3, 5, 0, 2, 3, 0, 0, 3, 3, 3, 2, 1, 0, 1, 4, 5, 5, 1, 1, 3, 2, 3};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> data = {0, 2, 2, 4, 0, 2, 4, 2, 3, 1, 2, 0, 1, 2, 0, 3, 4, 0, 5, 2, 5, 1, 1, 5, 3, 2, 5, 3, 1, 4, 4, 2, 5, 2, 5, 5, 0, 2, 3, 3, 0, 1, 4};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> data = {1, 0, 5, 3, 4, 1, 0, 2, 4, 2, 4, 1, 2, 5, 2, 1, 1, 0, 3, 5, 1, 1, 4, 0, 4, 1, 1, 4, 5, 0, 2, 2, 2, 3, 5, 4, 3, 5, 1, 2, 3, 1, 0, 4, 0, 3, 1, 4, 2};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> data = {3, 3, 2, 5, 4, 3, 4, 1, 1, 1, 1, 2, 4, 1, 5, 1, 3, 3, 4, 5, 3, 0, 2, 1, 0, 5, 5, 1, 1, 3, 4, 1, 5, 2, 1, 3, 0, 5, 3, 1, 4, 0, 0, 5, 0, 2};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> data = {3, 3, 1, 5, 3, 4, 5, 2, 2, 0, 5, 1, 0, 5, 2, 1, 2, 0, 4, 4, 3, 5, 1, 4, 0, 1, 1, 4, 1, 3, 1, 5, 2, 0, 2, 0, 1, 1, 0, 5, 1, 4, 0, 4, 5, 0, 0, 1, 5};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> data = {4, 1, 5, 2, 5, 1, 0, 0, 0, 4, 2, 4, 3, 4, 4, 4, 4, 5, 5, 3, 2, 3, 4, 3, 1, 5, 1, 4, 1, 0, 4, 4, 1, 2, 2, 2, 4, 4, 5, 2, 5, 2, 4, 2, 5, 1};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> data = {902, 878, 895, 860, 869, 791, 829, 772, 784, 731, 759, 651, 665, 541, 586, 409, 534, 264, 405, 230, 247, 159, 224, 36, 124, -5, 31, -177, -58, -327, -194, -357, -340, -474, -391, -494, -492, -508, -505, -577, -554, -723, -662, -824, -768, -908, -880, -975, -930, -993};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> data = {-858, -790, -791, -750, -769, -571, -746, -464, -509, -439, -449, -416, -426, -388, -412, -369, -378, -316, -364, -279, -287, -123, -194, -48, -71, 61, 28, 304, 94, 346, 311, 411, 387, 460, 453, 547, 527, 604, 580, 665, 621, 730, 718, 802, 733, 871, 809, 921, 884, 985};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> data = {-858, -750, -769, -571, -746, -464, -509, -439, -449, -416, -426, -388, -412, -369, -378, -316, -364, -279, -287, -123, -194, -48, -71, 61, 28, 304, 94, 346, 311, 411, 387, 460, 453, 547, 527, 604, 580, 665, 621, 730, 718, 802, 733, 871, 809, 921, 884, 985};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> data = {902, 878, 895, 860, 869, 791, 829, 772, 784, 731, 759, 651, 665, 541, 586, 409, 534, 264, 405, 230, 247, 159, 224, 36, 124, -5, 31, -177, -58, -327, -194, -357, -340, -474, -391, -494, -492, -508, -505, -577, -554, -723, -662, -824, -768, -880, -908, -975, -993};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> data = {-79, -86, -70, -61, -44, -221, -16, 11, -222, -225, 93, 140, 207, -261, 230, -269, 254, -377, -559, -589, -623, 257, -659, 284, 299, -671, 358, -752, -765, 373, 397, -784, 424, -840, 494, -856, 525, -882, -886, -890, 648, 670, -904, -909, -920, 687, 743, 791, 839, -963};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> data = {-672, -883, 944, -883, -412, -672, -802, -672, -321, 944, 944, -802, -883, -321, -354};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> data = {433, 359, 359, 876, -642, -960, 809, -699, 638, 319, 751, 900, 22, 586, -639, 973, -300, 22, 638, -699, -566, 842, -828, -562, 881, 433, 470, -1000, 913, -960, -49, 913, 928, -828, -392, -642, 359, 470, -362, 11, -574, 1000, -642, 982, 778, 961, 11, 614};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> data = {23, 488, -533, -457, 250};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> data = {291, -613, 511, -918, 473, -920, -48, -37, -551, 442, 550, -902, -412, 937, 558, 511, 545, -920, 718, -197, 777, -918, -1000, 136, -551, -309, 1000, 718, -218, 230, -138, -48, -613, -37, -412, 291, -640, -551, -309, -218, 563, 373, 373, -269, 136, 1000, -269, 563, 718};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> data = {-793, 930, 64, 868, 204, 930, 64, -615, 271, -282, 773, 187, 208};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> data = {407, -607, -607, 607, 407, 863, 296, 848, -294, -117, -148, -869, 135, -180, 53, 135, 848, 391, -641, 622, -25, 102, 841, -419};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> data = {-506, -943, -946, -360, -6, 6, -668, 835, -554, 69, 871, 82, -760, 542, -173, -1000, 1000, -367, -857, 445, 204, 462, -41, -351, 986, 110, -544, -610, 211, -544, 257, -967, -688, -982, -941, 633, -857, 108, -73, -87, -262, 734, 50, 495};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> data = {295, 466, 466, 466, 295, 295, 466, 404, -1000, 295, 295, 295, -576, 295, -576, 295, 295, 1000, 1000, 404, 466, 1000, 466, -576};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> data = {716, 716, -973, -241, 716, -241, -241, -241, 137, -241, -241, 0, -334, -659, -973, -973, -563, 137, -973, -241, -522, -241, 816, 549, -224, 816, -511, -241};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> data = {172, -766, 172, 172, 172, 172, -766, -766};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> data = {-818, -497, -57, -717, 629, -340, -407, -560, 266, -197, -57, -407, -468, -497, -143, 415, 868, -287, 1000, 333, 868, 261, 437, 860, -1000, 646, -287, -407, 1000, 415, -1000, 498};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> data = {-395, -37, -433, -120, -220, 703, 228, 1000, -825, -812, 966, -177, -1000, -338, 999, 82, 568, -148, -84, 28, -968, 503, 544, -329, -812, 937, -162, -1000, 657, 51, -482, 387, 729, 387, -695, -565, 580, -44};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> data = {-469, 1000, 1000, -692, -692, -397, -692, -765, 1000, 363, -158, 1000, 363, 363, -397, -1000, 363, -314, 1000, -469, -158, -692, -469, 1000, -765, -1000, -397};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> data = {-947, -571, -1000, -296, -482, 161, 287, 919, 817, 520, 1000, -350, 828, 536, -309, -350, -831, -641, -947, -387, -724, -154, -154, -152, -426, 449, -152, 161, -641, -406, 504, 817, -571, 555, -296, 555, 253, -615, -406, 551, 449, -715};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> data = {25, 941, 1000, 471, -265, 1000, -284, -1000, 25, 471, -928, 471, -265, 1000, -1000, 1000, 941, -265, -265, 471, -618, 967, -284, 471, -742};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> data = {362, 362, -839, 362, -612, -839, -839, -170, 913, 804, -788, -249, 787, 913};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> data = {797, 976, 976, 976, -105, 699, 764, 376, 689, -254, -920, -197, -888, 81, -949, 756, 699, 764, 745, -920, -90, 887, -92, -410, 150, 392, 738, 122, 392, -216, 150, 376, -920, 9, 9, 939, 376, 887, 376, -341, -493, -251, -504, 742, -619, 865};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> data = {-471, -471, -471, -471, -471, -471, -471, -471, -471, -471, -471, -471, -471, -471};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> data = {16, -522, 8, -93, 657, 994, -785, -21, 980, -409, 584, -415, -484, -351, -750, 312, 708, 402, -327};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
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
    vector<int> data = {-973, 572, -918, 114, -910, 896, -889, 513, 1000, 829, 399, 52, -211, 372, -284, -717, 501, 65, 126, -1000, 896, -624, -510, 337, 357, -622, 822, -143, -452, 231, 147, -729, -944, 966, 733, 891, -833, -618, -43, 896, 673, 513, 191};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> data = {-710, -190, -763, 1000, 563, 51, 573, -956, -595, -507, 345, -595, 292, -696, -435, -190, -956, 448, 532, -956, -1000, -595, -595, -435, 1000, 448};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> data = {-350, 295, 730, -784, -163, 707, 756, -942, 707, 889, 611, 737, 744, 564, 228, 833, -164, -465, -975, 572, -371, -673, 638, 41, 707, -91, 475, 1000, 890, 647, 375, -711, -805, -891, -495, 830, -1000, 85, -774, 158, -902, 44, -627, -578, 227, 728, -392, -774, -740};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> data = {-1000, -1000, 91, -892, -892, -429, 276, 590, -792, 1000, 162, 944, 91, 944, -938, 50, 876, -39, -464, -890, 916, -238, -934, 730, 752, 102, -184, -464};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> data = {-1000, 643, -1000, -680, 255, -680, 708, 297, -240, 257, -240, 94, -384, -46, 94, -843, 227, 255, 1000, 255, -901, -966, 1000, -575, -1000, 1000, -533, 1000, -4, -533, -575, -46, -345, -901, -843, -405, 708, -535, 255, -345, -240, -680, 257, -666, 444, 643, 444, -345, 94, 257};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> data = {-1000, 1000, 901, -42, 901, 1000, 901, 901};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> data = {770, -869, 770, -183, 322, -183, 140, 770, -869, 798, -39, -39, -646, 605, 142};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> data = {227, 411, 770, 107, -949, -826, 118, -749, 845, 155, 275, 322, 266, -664, -400, -444, 1000, -622, -614, 792, 78, -1000, 169, -818, -241, 407, -885, 390, -279, -232, -443, -670};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> data = {-835, 300, 300, 643, -835, -561, 300, -730, -730, 694, -314, -730, -387, 228, -98, -566, -788, 308, -561, 724, -32, -314, 435};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> data = {-492, -492, -492, -492, -492, -492, -492, -492, -492, 996, 287, 35, 112, -210, 227, -432, -465, 32, -492, -492, -492, -332, 114, 114, 951, -210, 996, -465, -492, 504, -634};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> data = {320, 893, 659, 28, -544, 893, -951, 711, 774, -791};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> data = {748, 748, 174, 680, 174, 174, 748, -379, 680, 680, -656, -379, 174, 680, -379, 482};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> data = {177, 177, 304, -675, 304, 304, 401, 304, -675, -203, 304, 304, 407, 216, 304, 262, 881, -84, 704, -675, -699, -458, -399, 179, -886, -458, -699, 409, 177, 454, 454, -209, 881, -399};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> data = {-837, 218, 218, -837, -837, -837, -837, 659, 659, 611, 611, -837, -304, 218, -289, -304, 346, -304, -121, -861, -837, -837, 176, 218, -289, 783, 176, -747, -861, 260, 659, 611, -304, 260, -747, -121, -121, -304, 611, 58, 260, 659, -747, 58};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> data = {-234, 365, 624, 287, 228, 941, -1000, 673, -960, -847, -847, 228, 673, 287, 165, -300, -599, 109, 287, 673, 1000, 718, 871, -1000, -105, -770, 941, 358, 624, -92, -847, 425, -92, -234, -770, 158, 881, -300, 624, 350};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> data = {249, 766, 733, -109, -408, -523, 990, 878, -638, -666, 881, 71, 940, 940, -1000, -666, 71, -523, -848, -761, -1, 406, 910, -928, -141, 809, -197, -928, -409, -873, 733, -718, -693, 1000, -96, 170, -599, -693, -874, 580, 659, -523, -408, 303, -718};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> data = {-685, -685, -685, -685, 94, -683, -683, 94, 226, -683, 96};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> data = {1000, 576, -791, -189, 691, 710, 417, -1000, -757, 576, 576, 691, -791, -1000, -256, 691, -189, 130, 710, -757, -124, -596, -899, -593, -596, -189, -17, -467, 268, -1000, 320, 456, 268, -596, 157, -899, -596, -1000, 320, -443, 130, -443};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> data = {-69, -69, -69, -69, 852, 852, -69, -348, 688, -69, -141, 843, -69, 852, -192, 477, 747, 587, -961, -961, 758, 21, 600, 688, 491, -643};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> data = {-1000, 123, -160, 750, 750, 750, -160, -160, -535, 750, -258, -1000, -258, 750, -1000, -312, -312, 123, -160, -160, 123, 1000, 1000};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> data = {-112, -387, -216, -1000, 811, 163, -533, -387, -6, -436, 1000, 163, -1000, -436, 568, -387, -984, 163, -155, -216, -785, 810, 234, 810, -387, -922, -155, -6, 1000, 163, -1000, 744, 811, 731, -159, 336, -785, 811, 568, -159};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> data = {-625, 875, -625, 600, 875, -559, 600, -116, -356, 875, -559, 875, 271, 875, 875, 875, -434, -559, 600, -677, 271, -322, -434, 881, 982, 271, -116, 875, -349, -275, -625, -434, -220, 881, -625, -625, 413, -538, -116, 982, -434, 121, -625, -538, -322, -349, -349, -220, -677};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> data = {-884, -884, -884, -884, 262, 52, -623, 262, 156, 690, 690, 538, 52, 563, 364, 690, -404, 355, 538, 673, 683, 156, 355, 683, -201, 673, 262, 135, 52, 355, 683, 262, 878, 355, 364, -884, 52, -201, 690, -674, 878, 878, -135, 378};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> data = {94, 94, 94, 94, 94, 94, 94, 94, -11, -11, 644, -11, -11, 644, -11, -11, -11, 94, 644, -11, 94, 94, 94, 644, 644, 644, 94, -11, 206, 206, 259, 94, 206, -778};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> data = {44, 347, 176, 733, 192, 782, -411, 465, 344, -35, -190, 571, 118, 986, 901, 672, 519, -226, -206, 716, 544, -62, 1000, -1000, -259, 150, 535, -740, -68, -694, -532, 19, 966, -106, 311, -710, 540, 745, -242, -497, 646, 917, 142, -694};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> data = {-1, -2, 0, -3, -2, -1};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> data = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
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
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> data = {7, 4, 9, 10, 9, 7, 3, 7, 8, 2, 10, 7, 4, 10, 8, 9, 8, 2, 7, 10, 1, 3, 6, 8, 8, 3, 7, 8, 8, 9, 9, 1, 6, 2, 5, 6, 2, 9, 6, 4, 4, 10, 7, 5, 5, 1, 4, 9, 5, 6};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> data = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> data = {-70, -639, -270, 811, 915, -82, 830, 678, -52, 878, -994, 633, -38, 574, -140, -154, 180, -479, -626, 800, -696, 179, 111, -885, -980, 366, -350, 638, -201, 165, 501, -122, -521, 672, -792, 399, -432, -580, 863, 244, 767, -164, -266, -3, -347, 556, -741, -422, -987, 966};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> data = {0, -1, -2, -3, -4, -5, -6, 100, 99, 98, 97, 96, 95, 94, 200, 199, 198, 197, 196, 195, 194, 300, 299, 298, 297, 296, 295, 294, 400, 399, 398, 397, 396, 395, 394, 500, 499, 498, 497, 496, 495, 494, 600, 599, 598, 597, 596, 595, 594, 596};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> data = {454, 537, 7, 976, 537, 908, 976, 908, -94, 454, 908, 64, 454, -731, 908, -646, 537};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> data = {0, 2, 1, 4, 3, 6, 5, 8, 7, 10, 9, 12, 11, 14, 13, 16, 15, 18, 17, 20, 19, 22, 21, 24, 23, 26, 25, 28, 27, 30, 29, 32, 31, 34, 33, 36, 35, 38, 37, 40, 39, 42, 41, 44, 43, 46, 45, 48, 47, 49};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> data = {50, 45, 55, 60, 45, 65, 40, 70, 70, 35, 30, 75};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> data = {914, -235, 704, -448, 174, -275, 368, 20, -29, 240, -877, -394, -546, 276, 737, 425, 573, 470, -673, 695, 898, 256, -832, -281, -442, -101, -241, 152, -250, 937, -654, -121, 738, 127, 386, -324, -774, -655, -154, -64, 881, 680, -221, -207, 573, 710, -461, -517, -310, 159};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> data = {95, 94, 92, 82, 78, 73, 69, 69, 68, 67, 67, 64, 61, 53, 47, 45, 41, 38, 36, 35, 34, 33, 27, 27, 26, 24, 21, 18, 3, 2, 0, 4, 5, 11, 11, 12, 16, 22, 41, 42, 53, 58, 62, 64, 71, 81, 91, 91, 95, 99};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> data = {-289, 261, -448, 282, -468, 411, 491, 971, 163, -95, 123, -230, 776, 722, 127, 123, -856, -629, -9, -275, 203, -139, 88, 524, 7, 648, -979, -228, -788, -248, -661, -529, -511, 782, 692, 783, 486, 948};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> data = {454, 537, 7, 976, 537, 908, 976, 908, -94, 454, 908, 64, 454, -731, 908, -646, 537, 123, 123, 123, 56, 231, 123, 123, 666, 454, 537, 7, 976, 537, 908, 976, 908, -94, 454, 908, 64, 454, -731, 908, -646, 537, 123, 123, 123, 56, 231, 123, 123, 666};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> data = {95, 210, 690, 566, 722, 882, 330, 456, 840, 314, 112, 805, 285, 159, 80, 261, 512, 52, 863, 100, 500, 39, 580, 859, 303, 31, 808, 972, 373, 10, 468, 319, 199, 238, 542, 26, 825, 483, 76, 481, 120, 878, 793, 380, 699, 97, 322, 196, 591, 719};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> data = {2, 3, 2, 1, 2};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> data = {1, 10, 2, 9, 5, 234, 2, 23, 313, 31, 35, 135, 341, 234, 531, 324, 1, 35, 234, 43, 123, 67, 23, 65, 123, 54, 54, 23, 654, 32, 43, 57, 234, 45, 123, 46, 23, 54, 324, 21, 56, 23, 76, 23, 567, 23, 435, 1, 3, 2};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> data = {3, 4, 2, 3, 4, 2, 3, 4, 2};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> data = {3, 6, 0, 9, 6, 3};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 3, 4, 5, 2, 8, 10, 45, 9, 8, 10, 45, 9, 7, 1000, -1000, 1000, 999, -999, 999, -999, 998, 996, 995, 995, 994, 995, 1000, -1000, 982, 384, 283, 381, 192, 281, 291, -122, 198, 291, 312, 1, 0, 1, 0, 2};
    HardDequeSort* pObj = new HardDequeSort();
    clock_t start = clock();
    int result = pObj->minDeques(data);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8394868&rd=7997&pm=1845
********************************************************************************
#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <numeric>
#include <algorithm>
 
using namespace std;
 
typedef vector<int> vi;
 
#define For(i,a,b) for(int i=(a); i<=(b); i++)
#define Rep(i,n) for(int i=0; i<(n); i++)
#define Size(x) (int(x.size()))
 
bool check(vi &v,int last)
{
  int cnt,mn,mx;
  cnt=mn=mx=0;
  Rep(i,Size(v)) 
    if(v[i]<v[last] || v[i]==v[last] && i>=last)
    {
      ++cnt;
      if(cnt==1) 
      {
        mn=mx=v[i];
      }
      if(mn<v[i] && v[i]<mx) return false;
      mn<?=v[i];
      mx>?=v[i];
    }
  return true;
}
 
vi doit(vi v)
{
  vi res;
  int k=-1;
  Rep(i,Size(v)) 
    if(check(v,i)) 
      if(k==-1 || v[i]>v[k]) k=i;
  assert(k!=-1);
  Rep(i,Size(v)) 
    if(!(v[i]<v[k] || v[i]==v[k] && i>=k))
      res.push_back(v[i]);
  return res;
}
 
struct HardDequeSort
{
  int minDeques(vi data)
  {
    int res=0;
    while(Size(data)) 
    {
      ++res;
      data=doit(data);
    }
    return res;
  }
};

********************************************************************************
*******************************************************************************/