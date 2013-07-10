/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3485
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

class Triangulation {
public:
    vector<string> triangulate(vector<int> x, vector<int> y);
};

vector<string> Triangulation::triangulate(vector<int> x, vector<int> y) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 10, 10, 0};
    vector<int> y = {0, 0, 10, 10};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {0, 10, 10, 8};
    vector<int> y = {0, 0, 10, 2};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 3"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {0, 5, 10, 10, 0};
    vector<int> y = {10, 5, 10, 0, 0};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 3", "1 4"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {0, 1, 1, 0, 0, 1, 1, 0, -1, -1};
    vector<int> y = {0, 1, 2, 2, 3, 3, 4, 5, 4, 1};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 3", "0 8", "3 8", "4 6", "4 7", "4 8"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {0, 1, 1, 0, 1, 1, 0, -1, -1};
    vector<int> y = {0, 1, 2, 2, 3, 4, 5, 4, 1};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 3", "0 7", "3 5", "3 6", "3 7"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {-850, -412, -618, 80, -231, -320, -568, -996, -611, -795, -678, -534, -781, -781, -910, -825, -438, -579, -574, -765, -893};
    vector<int> y = {-29, -900, 0, 579, 527, 797, 922, 400, 133, 254, -83, -385, -159, 108, 86, -946, -940, -738, -820, -867, -54};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 12", "0 13", "0 14", "1 11", "1 12", "2 4", "2 5", "2 6", "2 8", "2 9", "2 10", "2 11", "6 8", "14 20", "15 18", "15 19", "15 20", "16 18"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {530, -959, 85, 761, 975, -355, 112, -41, 339, 977, 800, 520, 319, -767};
    vector<int> y = {-747, -382, 741, -268, -320, -281, -525, -389, -505, -574, -973, -804, -741, -694};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 5", "0 6", "0 7", "0 8", "0 9", "0 10", "0 11", "0 12", "1 5", "2 5", "3 5"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {851, -83, 812, 587, 723, 998, 341, 371, -612, -866, -975, -586, -415, 328, 868, 300, 132, -152};
    vector<int> y = {346, 781, 663, 530, 607, 287, -666, 315, 563, 708, 812, 824, 629, 327, 246, 388, 639, 797};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 3", "0 4", "0 5", "0 14", "0 15", "0 16", "1 3", "5 14", "6 14", "7 13", "7 14", "8 10", "8 11", "8 12", "8 13"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {21, 394, -557, 624, 758, 299, 300, 272, 279, -973, -210, 98, 253};
    vector<int> y = {750, -364, 582, -684, 355, 126, 720, 586, 850, 709, 661, 27, -96};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 3", "0 5", "0 7", "0 8", "0 9", "0 10", "0 11", "1 3", "3 5", "5 7"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {-591, -853, 179, 136, -628, 67, 38};
    vector<int> y = {518, 769, 356, -696, 618, -775, -946};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 4", "0 5", "1 4", "2 4"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {-591, -853, 179, 136, -628, 67, 38, -581, -533, -800, -421, -242, -346, -338, -391, -752, -707};
    vector<int> y = {518, 769, 356, -696, 618, -775, -946, -74, -121, 646, -190, -452, -87, -207, 44, 630, 573};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 4", "0 5", "0 6", "0 14", "1 4", "2 4", "6 8", "6 10", "6 11", "6 12", "6 14", "8 10", "12 14", "14 16"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {632, -229, -712, 775, -598, 448, 481, 763, 908, -581, -665, 708, 702, 640, -252, 22, -804, 282, 229};
    vector<int> y = {35, 180, -396, -884, -386, -591, -231, -805, 504, 977, 388, 389, -641, 198, 273, 235, 328, 162, 152};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 4", "0 6", "0 12", "0 13", "0 17", "2 4", "4 6", "6 12", "7 11", "7 12", "8 10", "8 11", "13 15", "13 17", "15 17"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {545, -433, -683, -631, -132, -469, -936, -124, 438};
    vector<int> y = {-962, 315, -389, -376, -166, -774, -767, -825, -946};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 4", "0 7", "1 3", "1 4", "4 7", "5 7"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {-698, 940, -62, -356, -335, -865, -542, -509, -159, 350, -699, 134, -596, -673, -410, -369, -250, 21};
    vector<int> y = {-135, 556, -688, -154, -957, -677, 613, 100, 157, 311, -53, 228, -35, -103, 19, 36, 88, 184};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 3", "0 4", "0 5", "0 10", "0 13", "0 14", "0 15", "0 16", "1 3", "5 10", "6 10", "7 10", "8 10", "10 12", "10 13"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {-732, -997, -395, 108, 464, -825, -708, -660, -279, -293, -671, -738, -910, -812, -843, -892, -794, -773, -726, -751, -930, -784, -950};
    vector<int> y = {-215, 715, 226, 134, -782, 379, 208, 212, -470, -873, 34, -511, -968, -428, -141, 270, -148, -439, -388, -283, 451, -63, 543};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 5", "0 6", "0 7", "0 10", "0 18", "0 19", "0 21", "1 4", "1 5", "2 4", "7 9", "7 10", "10 18", "11 13", "11 17", "11 18", "13 16", "13 17", "14 16", "19 21"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {319, -593, 166, -151, 108, 896, 563, -296, 212, -53, 595, -204, -486, 447, -236, -380, 335, -998, -823};
    vector<int> y = {-52, -396, -801, -432, -318, -540, 866, 970, 677, 190, 160, 152, -209, -8, -318, -328, -47, -452, -458};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 15", "0 16", "0 17", "1 3", "1 4", "1 14", "1 15", "4 13", "4 14", "5 10", "5 13", "6 8", "6 9", "6 10", "10 12", "10 13"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {-920, 650, -297, -101, -578, -778};
    vector<int> y = {325, 773, -379, 390, -972, -68};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 3", "1 3", "3 5"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {150, -182, -81, -838, 324, 951, 506, 394, 777, 975, 66, 6, 851, -741, 50, -759, -668};
    vector<int> y = {598, 427, 470, -125, -39, -73, -25, 314, 126, 373, 429, 422, 987, 708, 642, 456, 338};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 3", "0 11", "0 12", "0 14", "0 15", "3 6", "3 7", "3 10", "3 11", "4 6", "7 9", "7 10", "12 14"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {461, -721, 301, 998, -611, 851};
    vector<int> y = {-255, -349, 970, 58, -232, 14};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 4", "1 4", "2 4"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {461, -721, 301, 998, -611, 851, 936, 425};
    vector<int> y = {-255, -349, 970, 58, -232, 14, -926, -585};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 4", "0 5", "0 6", "1 4", "2 4"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {647, -76, -837, -832, 151, -382, -179, 504, -252, 560, -62, 340, 164, 425, 424, 994, 795, 766, 129, 874, 132, -179};
    vector<int> y = {347, -685, -352, 352, 171, 418, 572, 495, -561, 401, -369, 50, -323, 198, 72, 979, -115, 300, -639, 759, -626, -957};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 12", "0 14", "0 15", "0 19", "0 20", "1 8", "1 10", "1 11", "1 12", "2 4", "2 8", "4 6", "4 7", "4 8", "8 10", "12 14", "15 17", "15 18", "15 19"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {847, 246, -373, 296, 583, 760, 359, -140, 178, 903, 880, -757, -488, -708, -100, 371};
    vector<int> y = {127, -74, 582, 557, 499, 256, 494, 509, 61, 267, -905, -811, -771, -527, -571, -715};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 8", "0 9", "0 10", "1 7", "1 8", "2 4", "2 6", "2 7", "4 6", "10 12", "10 13", "10 14", "10 15"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {-693, 470, -305, -537, -577, -770, -581, -935, 213, 958, 731, 375, 343, 307, -56, 258, -709, 21, -736, 65, 324, 99};
    vector<int> y = {625, 109, -129, -457, -931, -592, 150, 760, 866, 974, 449, 640, 176, 259, 725, 854, 724, 773, 622, 246, 133, 245};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 6", "1 20", "1 21", "2 5", "2 6", "3 5", "6 18", "6 19", "6 20", "7 15", "7 16", "7 18", "8 15", "9 11", "9 14", "9 15", "11 13", "11 14", "16 18"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {-536, 726, 754, -913, 79, 478, -145, -745, -456, 671, 276, 258, 155, 37, 30, -86, -132, -198, -37};
    vector<int> y = {456, -129, -630, 306, -10, -258, 265, 365, 518, 967, 122, 737, 293, 536, 489, 348, 586, 343, 228};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 6", "0 7", "0 8", "0 9", "0 11", "0 16", "0 17", "1 5", "1 6", "2 4", "2 5", "9 11", "11 13", "11 16", "13 15", "13 16"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {-172, -145, -337, -1000, 814, 188, 941, 891};
    vector<int> y = {646, -368, 188, -637, -475, -225, -241, 141};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 5", "0 6", "1 3", "1 4", "1 5"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {-486, 209, 692, 803, -530, -610, -687, -48};
    vector<int> y = {318, -446, -854, -157, 369, 325, -175, -179};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 3", "0 4", "0 5", "0 6"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {-431, 560, 513, -718, -401, 344, 481, -212, -464, -537, -85, -124, 942, -199, -448, 444, -398};
    vector<int> y = {-709, -836, -459, -586, -633, -634, -779, -637, -669, -955, -872, -792, -919, -757, -729, -827, -714};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 6", "0 7", "0 8", "0 14", "1 5", "1 6", "2 4", "2 5", "8 14", "9 11", "9 13", "9 14", "11 13", "14 16"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {-265, -604, 258, -567};
    vector<int> y = {949, -158, 973, 960};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {-265, -604, 258, -567, -885, -890, -504, -601, -542, -310, -853, -878, -843, -810, -729, -670, -380};
    vector<int> y = {949, -158, 973, 960, -232, -658, 611, 520, 777, 869, -747, -967, -938, -678, -454, -323, 624};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 3", "0 8", "0 9", "3 5", "3 7", "3 8", "5 7", "9 13", "9 14", "9 15", "9 16", "10 12", "10 13"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {178, 269, -231, -867, -607, -122, -56, -122, -79, 137, -718, -842};
    vector<int> y = {-735, 80, 706, -403, -300, -176, -228, 211, 162, -185, -650, -640};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 9", "0 10", "1 7", "1 8", "1 9", "2 4", "2 5", "2 6", "2 7"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {434, 308, 763, 899, 686, -536, 131, 252};
    vector<int> y = {613, -920, 355, 449, 868, -6, -291, -712};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 3", "0 4", "0 5", "0 6"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {-359, 692, 538, 63, 127, 6, 453, 501, 171, 598, -333, -892, -270, -703, -142, -185, 12, 468, -417, 598, 42, -544, 108, 148, 911};
    vector<int> y = {-621, 397, -207, -441, -460, -465, -192, -155, -291, 245, -809, -562, -683, -459, 796, 274, 217, 407, -321, 505, 38, -460, 64, -35, 788};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 9", "0 12", "0 13", "0 21", "0 22", "0 23", "1 7", "1 9", "2 5", "2 6", "2 7", "3 5", "7 9", "9 12", "10 12", "13 15", "13 16", "13 17", "13 18", "13 21", "18 20", "18 21"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {77, -264, -338, 497, 100, -71};
    vector<int> y = {-315, -174, 326, 323, -613, -344};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 3", "0 4"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> y = {0, 1, 0, 1, 0, 1, 0, 1, -1};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "2 4", "2 8", "4 6", "4 8", "6 8"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {5, 16, 15, 18, 16, 11, 7, 12, 11, 7, 5, 8, 10, 13, 12, 9, 7, 6, 7, 0, 1, 15, 19, 6, 18, 19, 16, 14, 8, 19, 18, 14, 12, 16, 14, 11, 6, 5, 6, 4, 4, 1, 5, 1, 2, 0, 2, 4, 5, 2};
    vector<int> y = {7, 12, 14, 11, 16, 11, 8, 14, 14, 9, 10, 12, 17, 16, 18, 18, 16, 13, 17, 13, 17, 19, 11, 7, 10, 10, 7, 8, 5, 6, 3, 5, 4, 2, 2, 3, 2, 1, 4, 3, 2, 4, 4, 7, 7, 10, 9, 7, 5, 13};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 3", "0 22", "0 23", "0 28", "0 38", "0 48", "1 3", "3 21", "3 22", "4 6", "4 7", "4 8", "4 13", "4 14", "4 21", "8 11", "8 12", "8 13", "9 11", "14 21", "15 18", "15 20", "15 21", "16 18", "18 20", "23 25", "23 27", "23 28", "25 27", "28 31", "28 32", "28 33", "28 34", "28 35", "28 36", "28 37", "28 38", "29 31", "38 42", "38 43", "38 44", "38 48", "39 41", "39 42", "44 46", "44 47", "44 48"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {13, 12, 13, 16, 11, 14, 10, 18, 15, 15, 17, 19, 18, 8, 16, 5, 14, 19, 9, 12, 11, 8, 6, 7, 10, 18, 12, 16, 7, 10, 4, 8, 7, 5, 1, 4, 2, 2, 1, 0, 0, 3, 9, 2, 5, 10, 5, 10, 11, 11};
    vector<int> y = {19, 16, 17, 18, 13, 15, 11, 13, 13, 15, 18, 17, 12, 10, 7, 11, 7, 4, 9, 6, 5, 7, 10, 7, 5, 2, 2, 0, 4, 4, 7, 2, 2, 3, 0, 5, 15, 12, 9, 15, 18, 14, 12, 18, 17, 17, 16, 12, 15, 17};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 6", "0 47", "0 48", "1 3", "1 4", "1 6", "4 6", "6 12", "6 13", "6 15", "6 41", "6 42", "6 47", "7 9", "7 10", "7 11", "7 12", "13 15", "15 18", "15 19", "15 22", "15 23", "15 30", "15 36", "15 40", "15 41", "16 18", "19 21", "19 22", "23 29", "23 30", "24 26", "24 29", "26 28", "26 29", "30 32", "30 33", "30 35", "30 36", "33 35", "36 38", "36 39", "36 40", "42 46", "42 47", "43 46", "44 46"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {19, 17, 18, 15, 13, 10, 10, 11, 6, 19, 19, 18, 19, 18, 18, 16, 15, 16, 15, 9, 12, 15, 8, 9, 2, 1, 0, 1, 2, 3, 3, 7, 7, 4, 11, 10, 7, 3, 4, 8, 5, 6, 12, 16, 10, 12, 15, 12, 17, 14};
    vector<int> y = {15, 12, 14, 12, 13, 7, 10, 12, 3, 12, 8, 11, 5, 0, 1, 7, 1, 9, 3, 4, 1, 0, 2, 0, 5, 6, 5, 16, 8, 8, 10, 19, 17, 11, 18, 16, 9, 7, 6, 8, 6, 4, 14, 15, 15, 18, 16, 19, 15, 19};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 3", "0 4", "0 42", "0 48", "4 6", "4 7", "4 42", "7 41", "7 42", "8 11", "8 17", "8 19", "8 20", "8 22", "8 23", "8 24", "8 25", "8 28", "8 37", "8 38", "8 40", "8 41", "9 11", "11 14", "11 15", "11 17", "12 14", "15 17", "17 19", "20 22", "25 27", "25 28", "28 37", "29 33", "29 34", "29 35", "29 36", "29 37", "30 32", "30 33", "38 40", "42 48", "43 45", "43 46", "43 48", "46 48"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {0, 9, 6, 7, 3, 1, 5, 0, 4, 10, 12, 11, 10, 17, 14, 18, 0, 14, 13, 3, 18, 1, 8, 8, 5, 11, 0, 16, 10, 1, 5, 10, 14, 18, 19, 12, 18, 18, 19, 19, 17, 19, 13, 16, 15, 12, 10, 10, 11, 4};
    vector<int> y = {17, 16, 16, 12, 16, 11, 9, 9, 7, 13, 17, 12, 11, 14, 12, 14, 4, 11, 10, 5, 12, 4, 7, 6, 4, 6, 2, 1, 3, 2, 3, 5, 4, 6, 6, 7, 8, 10, 12, 16, 15, 18, 19, 17, 16, 19, 16, 17, 19, 18};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 46", "0 47", "0 48", "1 3", "1 9", "1 46", "3 5", "3 6", "3 8", "3 9", "6 8", "9 45", "9 46", "10 13", "10 15", "10 40", "10 44", "10 45", "11 13", "13 15", "15 17", "15 18", "15 20", "15 38", "15 39", "15 40", "18 20", "20 22", "20 23", "20 24", "20 35", "20 37", "20 38", "24 35", "25 29", "25 30", "25 31", "25 32", "25 33", "25 35", "26 29", "27 29", "33 35", "35 37", "40 43", "40 44", "41 43"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {0, 11, 9, 8, 7, 1, 11, 3, 9, 5, 3, 5, 4, 7, 1, 2, 2, 1, 1, 5, 4, 3, 16, 11, 17, 6, 6, 10, 11, 2, 4, 11, 2, 4, 16, 6, 19, 16, 16, 15, 10, 18, 14, 8, 14, 15, 12, 7, 1, 12};
    vector<int> y = {1, 6, 7, 7, 5, 4, 10, 6, 13, 12, 13, 11, 10, 11, 6, 9, 10, 10, 13, 16, 14, 14, 13, 14, 13, 15, 16, 15, 15, 17, 17, 16, 18, 19, 15, 19, 14, 9, 1, 6, 0, 13, 12, 11, 11, 12, 4, 2, 1, 5};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 6", "1 44", "1 45", "1 49", "2 6", "3 5", "3 6", "6 43", "6 44", "7 43", "8 10", "8 21", "8 22", "8 42", "8 43", "10 12", "10 15", "10 16", "10 17", "10 18", "10 21", "12 14", "12 15", "18 21", "19 21", "22 24", "22 42", "24 26", "24 27", "24 28", "24 31", "24 34", "24 36", "24 41", "24 42", "28 30", "28 31", "31 33", "31 34", "34 36", "36 40", "36 41", "37 39", "37 40", "45 49", "46 48", "46 49"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {17, 19, 18, 18, 11, 9, 13, 11, 10, 8, 8, 5, 10, 17, 3, 4, 6, 5, 3, 1, 1, 6, 10, 13, 6, 5, 1, 8, 14, 10, 6, 4, 6, 11, 18, 18, 19, 19, 16, 15, 18, 17, 17, 14, 13, 11, 15, 16, 12, 12};
    vector<int> y = {13, 15, 17, 18, 10, 9, 15, 13, 18, 14, 10, 8, 6, 2, 8, 8, 18, 18, 19, 12, 3, 6, 4, 3, 5, 4, 2, 3, 2, 1, 2, 2, 1, 0, 0, 3, 1, 8, 12, 11, 9, 6, 9, 5, 6, 7, 9, 9, 10, 11};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 3", "3 49", "4 12", "4 45", "4 46", "4 47", "4 48", "4 49", "5 7", "5 8", "5 9", "5 10", "5 11", "5 12", "12 35", "12 43", "12 44", "12 45", "13 21", "13 22", "13 23", "13 25", "13 27", "13 28", "13 29", "13 33", "13 34", "13 35", "14 16", "14 17", "14 18", "14 19", "14 20", "14 21", "23 25", "25 27", "29 31", "29 32", "29 33", "35 37", "35 40", "35 41", "35 43", "37 40", "38 40", "41 43"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {0, 2, 1, 8, 1, 1, 5, 6, 4, 2, 3, 3, 9, 12, 16, 18, 18, 19, 6, 9, 13, 14, 17, 17, 19, 16, 14, 14, 13, 13, 12, 7, 12, 3, 10, 12, 11, 2, 9, 8, 11, 1, 8, 9, 6, 1, 3, 3, 5, 1};
    vector<int> y = {4, 13, 7, 9, 5, 4, 7, 3, 6, 1, 0, 2, 1, 1, 3, 5, 2, 9, 2, 8, 7, 13, 13, 12, 10, 16, 19, 15, 15, 10, 9, 8, 10, 9, 13, 13, 14, 12, 14, 14, 15, 13, 15, 17, 16, 18, 17, 16, 15, 16};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 41", "1 37", "1 38", "1 39", "1 40", "1 41", "2 33", "2 37", "3 6", "3 31", "3 32", "3 33", "4 6", "6 19", "6 30", "6 31", "7 11", "7 18", "7 19", "8 11", "9 11", "11 13", "11 18", "13 15", "13 17", "13 18", "15 17", "19 30", "20 27", "20 29", "20 30", "21 25", "21 27", "22 24", "22 25", "25 27", "27 29", "33 36", "33 37", "34 36", "41 48", "41 49", "42 44", "42 45", "42 46", "42 47", "42 48"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {2, 1, 1, 3, 3, 8, 10, 5, 9, 6, 0, 4, 6, 8, 5, 12, 12, 6, 16, 10, 8, 16, 15, 16, 11, 12, 10, 10, 16, 12, 14, 13, 17, 15, 19, 14, 19, 15, 19, 17, 14, 8, 14, 13, 18, 7, 8, 7, 6, 5};
    vector<int> y = {19, 4, 3, 15, 7, 14, 16, 8, 10, 7, 2, 5, 0, 1, 4, 13, 11, 5, 14, 7, 4, 13, 10, 10, 3, 6, 4, 1, 6, 1, 3, 1, 7, 0, 9, 6, 11, 8, 15, 16, 15, 17, 17, 16, 18, 17, 19, 19, 18, 12};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 3", "3 49", "4 41", "4 49", "5 41", "6 8", "6 15", "6 18", "6 40", "6 41", "8 14", "8 15", "9 11", "9 14", "11 14", "12 14", "15 18", "16 18", "18 20", "18 21", "18 38", "18 39", "18 40", "21 23", "21 38", "23 27", "23 37", "23 38", "24 26", "24 27", "27 32", "27 34", "27 35", "27 37", "28 30", "28 31", "28 32", "32 34", "35 37", "41 44", "41 45", "41 49", "42 44", "45 47", "45 48", "45 49"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {15, 15, 16, 16, 19, 17, 16, 16, 13, 19, 19, 17, 18, 13, 2, 13, 4, 5, 0, 1, 3, 4, 5, 2, 5, 3, 6, 5, 7, 11, 12, 5, 1, 4, 3, 15, 15, 5, 13, 13, 14, 11, 12, 4, 8, 10, 5, 6, 13, 13};
    vector<int> y = {5, 4, 1, 2, 1, 6, 6, 3, 16, 2, 10, 14, 9, 19, 17, 17, 14, 12, 16, 15, 8, 9, 9, 12, 10, 13, 10, 13, 12, 14, 14, 8, 5, 7, 0, 0, 1, 2, 5, 3, 8, 6, 8, 2, 7, 10, 4, 8, 12, 15};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 3", "0 7", "0 8", "3 5", "3 7", "5 7", "8 12", "8 15", "8 16", "8 27", "8 28", "8 29", "8 30", "8 49", "9 12", "10 12", "12 15", "13 15", "16 27", "17 19", "17 25", "17 26", "17 27", "19 23", "19 24", "19 25", "20 23", "21 23", "30 33", "30 47", "30 48", "30 49", "31 33", "33 43", "33 46", "33 47", "34 36", "34 37", "34 43", "37 41", "37 42", "37 43", "38 40", "38 41", "43 45", "43 46"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {2, 14, 18, 17, 9, 2, 1, 6, 5, 10, 10, 12, 8, 2, 3, 7, 5, 9, 7, 10, 3, 2, 1, 1, 2, 2, 6, 14, 18, 16, 7, 11, 13, 14, 16, 8, 15, 13, 17, 14, 16, 19, 16, 14, 8, 13, 12, 14, 15, 12};
    vector<int> y = {18, 17, 11, 17, 19, 19, 11, 14, 13, 12, 13, 11, 12, 11, 3, 10, 4, 9, 5, 6, 2, 10, 6, 4, 2, 1, 1, 2, 1, 2, 4, 6, 4, 4, 3, 10, 5, 7, 5, 7, 11, 0, 12, 9, 17, 12, 15, 10, 11, 17};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 3", "0 4", "0 5", "0 6", "0 7", "0 9", "0 10", "0 44", "1 3", "7 9", "10 44", "11 13", "11 15", "11 35", "11 37", "11 39", "11 43", "11 44", "13 15", "15 17", "15 35", "17 19", "17 31", "17 32", "17 33", "17 34", "17 35", "19 25", "19 30", "19 31", "20 22", "20 23", "20 24", "20 25", "25 27", "25 30", "27 29", "27 30", "35 37", "37 39", "39 42", "39 43", "40 42", "44 46", "44 49", "46 48", "46 49"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {-119, -419, 445, 145, 128, -142, 5, -130, 428, 121, 226, 650, 670, 825, 680, 361, 370, 783, 598, 691, 698, 960, 921, 622, 251, -54, 524, -520, -730, -688, -795, -764, -719, -702, -411, -578, -621, -172, -566, -675, -489, 352, -849, -573, -475, -507, -250, -149, 216, 510};
    vector<int> y = {232, -33, 82, -445, -39, -7, -622, -754, -500, -481, -419, -296, -454, -599, -154, 697, 887, -223, 748, 681, 482, 14, -857, -401, -592, -818, -877, -999, -910, -428, -483, 558, -92, -388, 114, -112, 59, 333, 191, 328, 418, 446, 582, 701, 789, 701, 889, 710, 724, 226};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 34", "0 36", "0 37", "0 41", "1 5", "1 6", "1 7", "1 27", "1 28", "1 29", "1 33", "1 34", "2 4", "2 5", "7 24", "7 25", "7 27", "8 10", "8 11", "8 23", "8 24", "11 23", "12 22", "12 23", "13 16", "13 17", "13 21", "13 22", "14 16", "17 20", "17 21", "18 20", "25 27", "29 33", "30 32", "30 33", "34 36", "37 39", "37 40", "37 41", "41 43", "41 45", "41 47", "41 48", "41 49", "43 45", "45 47"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {495, 245, 278, 439, 655, 731, 168, -220, 549, 394, 584, 214, 849, 382, -27, -62, -740, -816, -963, -792, -747, -600, -602, -259, -642, -498, -337, -162, 29, -288, 243, 32, -245, 312, -59, 102, 161, -189, 353, 74, 269, 211, 961, 874, 904, 923, 896, 913, 454, 726};
    vector<int> y = {437, -79, 89, 386, 769, 791, 647, 562, 746, 740, 807, 796, 952, 905, 644, 949, 977, 72, 198, -552, -434, 111, 727, 541, -191, -552, -372, -563, -991, 362, -904, -213, 281, -406, 64, 80, 319, 249, 647, 394, 461, -261, -909, 12, -471, -735, -505, -707, 149, 346};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 41", "0 48", "1 38", "1 40", "1 41", "2 38", "3 38", "4 6", "4 38", "6 23", "6 29", "6 32", "6 37", "6 38", "7 9", "7 10", "7 14", "7 15", "7 16", "7 22", "7 23", "10 14", "11 13", "11 14", "16 19", "16 20", "16 21", "16 22", "17 19", "23 25", "23 29", "25 29", "26 29", "27 29", "29 32", "30 32", "32 34", "32 35", "32 37", "35 37", "38 40", "41 45", "41 47", "41 48", "42 44", "42 45", "45 47"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {169, -127, 110, -255, -354, -275, 875, 931, 378, 382, 453, -438, 836, 633, 319, 436, -289, -298, -307, -363, 852, 273, 664, -291, 367, 853, 467, 485, 934, -397, 632, 892, 872, -5, -750, -546, -941, -448, -436, -886, -708, -823, -805, -827, -825, -31, -628, -261, 588, 444};
    vector<int> y = {672, 388, 711, 402, 231, 288, 869, 837, 550, 586, 632, 100, 281, -25, -145, -28, -334, -77, -386, -443, -81, -265, -616, -511, -720, -675, -731, -766, -871, -627, -879, -941, -952, -920, -594, -344, -628, 346, 388, -451, -36, -17, 105, 377, 456, 731, 698, 784, 981, 681};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 48", "2 37", "2 38", "2 43", "2 44", "2 45", "2 47", "2 48", "3 11", "3 36", "3 37", "4 6", "4 10", "4 11", "6 8", "6 9", "6 10", "11 13", "11 15", "11 17", "11 18", "11 19", "11 29", "11 35", "11 36", "13 15", "15 17", "19 21", "19 22", "19 23", "19 29", "23 27", "23 29", "24 26", "24 27", "27 29", "29 32", "29 33", "29 34", "29 35", "30 32", "38 40", "38 41", "38 42", "38 43", "45 47"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {-541, -705, -998, -516, -504, -402, -335, -450, -79, 11, 75, 170, 243, -269, -226, -404, 271, -119, -229, 580, 166, -100, -103, 15, 54, 635, 643, 520, 599, 240, 726, 563, 887, 645, 956, 663, 957, 840, 688, 753, 393, 292, 923, 925, 374, 307, 318, -532, -403, -552};
    vector<int> y = {-845, -878, 606, 884, 897, 724, 961, 487, 799, 874, 509, 742, 721, -91, 561, -348, 700, -57, -287, 835, 171, -296, -486, -648, -704, 918, 861, 596, 615, -334, 445, 464, 753, 486, 654, 68, 558, -186, -282, -223, -232, -301, -553, -947, -341, -320, -945, -280, -633, -229};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "2 5", "2 7", "2 15", "2 49", "3 5", "5 7", "7 9", "7 14", "7 15", "9 13", "9 14", "10 12", "10 13", "15 17", "15 18", "15 21", "15 22", "15 23", "15 24", "15 46", "15 47", "15 49", "18 20", "18 21", "24 27", "24 28", "24 29", "24 30", "24 41", "24 45", "24 46", "25 27", "30 33", "30 34", "30 35", "30 40", "30 41", "31 33", "35 37", "35 39", "35 40", "37 39", "41 44", "41 45", "42 44", "47 49"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {404, -367, -266, -77, 3, -195, -416, -589, -386, -380, -115, -32, -322, -792, -644, -945, -705, 77, -438, -598, -228, -333, -95, -593, -335, 59, 2, 37, 113, 268, 139, 80, 208, 669, 168, 343, 175, 486, 524, 343, 454, 998, 737, 887, 773, 432, 845, 681, 602, 559};
    vector<int> y = {821, 779, 571, 788, 19, 216, 838, 829, 288, 364, 60, -168, 238, -814, 599, -999, -995, -809, -869, -605, -619, -491, -547, -388, -281, -208, -118, 214, -902, -927, -554, 494, 598, 275, 264, 261, 125, 218, 94, 23, -951, -747, -673, 596, 209, -539, 730, 956, 716, 357};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 3", "0 31", "0 32", "1 3", "3 27", "3 31", "4 9", "4 10", "4 11", "4 26", "4 27", "5 7", "5 9", "7 9", "11 24", "11 25", "11 26", "12 23", "12 24", "13 15", "13 16", "13 18", "13 19", "13 23", "16 18", "19 21", "19 23", "21 23", "27 30", "27 31", "28 30", "32 49", "33 35", "33 36", "33 37", "33 38", "33 45", "33 46", "33 47", "33 48", "33 49", "38 45", "39 45", "40 42", "40 43", "40 44", "40 45"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {-338, -843, 64, -680, 43, 236, 106, 546, 688, 771, 942, 752, 599, 610, 670, 629, 533, 603, 570, 292, 440, 434, 479, 92, 639, 383, 79, -152, 9, 125, 193, -160, -72, -93, -207, -80, -360, -500, -244, -87, -388, -353, -890, -668, -841, -912, -856, 242, -351, 384};
    vector<int> y = {509, 672, 553, 714, 624, 862, 583, 624, 453, 877, -820, -965, 271, 172, -561, -317, 211, -470, -406, -172, -258, 281, 501, -375, -619, -979, -875, -827, -388, 53, 234, -113, 54, 159, 151, 234, 444, 207, -141, -618, -86, -433, 600, -487, -831, 931, 652, 266, 480, 396};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 22", "2 4", "2 5", "2 6", "2 7", "2 22", "7 10", "7 12", "7 13", "7 14", "7 15", "7 16", "7 20", "7 21", "7 22", "8 10", "10 12", "16 18", "16 20", "18 20", "22 27", "22 28", "22 29", "22 49", "23 25", "23 26", "23 27", "29 47", "29 49", "30 32", "30 33", "30 34", "30 35", "30 36", "30 46", "30 47", "36 42", "36 46", "37 39", "37 40", "37 41", "37 42", "42 44", "42 45", "42 46", "47 49"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {-105, -334, -137, -310, -259, -548, -294, -604, -392, -773, -881, -732, -970, -424, -912, -193, 556, -385, -326, -103, 607, 636, 753, 784, 650, 850, 992, 854, 512, 190, 338, 410, 450, 253, 405, 853, 228, 972, -28, -197, 777, -409, -289, 105, 162, 25, -18, -256, 117, -129};
    vector<int> y = {-123, 693, -134, 569, 213, 565, -188, 589, -753, 97, -407, 836, -507, -813, -934, -830, -739, -769, -680, -305, -297, -416, -81, 82, -976, -962, -124, 463, -298, -240, -266, -112, -171, 487, 389, 575, 551, 965, 544, 777, 944, 813, 758, 428, 3, -163, -295, -278, 85, 286};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 6", "0 47", "0 48", "2 4", "2 5", "2 6", "6 8", "6 17", "6 18", "6 47", "8 10", "8 12", "8 13", "8 17", "10 12", "13 15", "13 16", "13 17", "18 47", "19 28", "19 46", "19 47", "20 22", "20 23", "20 27", "20 28", "23 25", "23 26", "23 27", "28 46", "29 31", "29 33", "29 36", "29 44", "29 45", "29 46", "31 33", "33 35", "33 36", "36 38", "36 43", "36 44", "38 42", "38 43", "39 41", "39 42"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {320, -902, -909, -835, -890, -719, -898, 83, -875, -343, -804, -461, -531, -883, -166, -909, 235, 190, 991, 445, 205, 226, 871, 229, -145, 409, -226, -728, -277, 370, -475, 515, 16, 170, 996, 314, 719, -44, 911, -57, 290, 877, 883, 94, 642, 174, 72, 262, -530, -414};
    vector<int> y = {-239, -893, -480, 560, -727, 421, -863, -155, -762, -151, 663, 99, 301, 899, -284, 943, 519, 861, 85, 431, 498, 399, 42, 313, 642, 139, 410, 756, 396, -89, 277, -280, -589, -574, -128, -557, -530, -710, -528, -726, -762, -563, -626, -811, -844, -818, -926, -945, -910, -737};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 6", "0 7", "0 30", "0 31", "0 32", "0 48", "1 3", "1 4", "1 6", "4 6", "7 14", "7 30", "8 14", "9 11", "9 12", "9 14", "12 14", "14 30", "15 19", "15 24", "15 25", "15 26", "15 27", "15 30", "16 19", "17 19", "19 24", "20 23", "20 24", "21 23", "27 30", "28 30", "32 36", "32 37", "32 39", "32 48", "33 35", "33 36", "37 39", "39 43", "39 46", "39 48", "40 42", "40 43", "43 45", "43 46", "46 48"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {-401, -537, -375, -601, -747, -235, 258, 711, 453, 842, 963, 827, 382, 895, 969, 913, 890, 557, 749, 150, 694, 15, 347, -448, 303, 580, -762, -554, 213, -842, -688, -907, -538, 318, -781, 53, -400, -569, -334, -650, -567, 454, 337, -300, 191, 543, 20, -67, 894, 808};
    vector<int> y = {8, -195, 131, -72, -322, -97, 157, 409, 570, 779, 928, 58, -156, -85, -601, -331, -910, -769, -512, -109, 50, -112, -258, -212, -436, -676, -361, -469, -887, -992, -707, -44, 193, 592, 287, 528, 544, 657, 498, 364, 864, 993, 889, 743, 676, 816, 718, 793, 937, 912};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 33", "2 31", "2 32", "2 33", "3 31", "4 23", "4 24", "4 25", "4 26", "4 31", "5 20", "5 21", "5 22", "5 23", "6 11", "6 20", "7 9", "7 10", "7 11", "11 19", "11 20", "12 15", "12 18", "12 19", "13 15", "15 17", "15 18", "26 28", "26 30", "26 31", "28 30", "33 35", "33 36", "33 37", "33 43", "33 44", "33 45", "33 49", "37 39", "37 40", "37 41", "37 43", "41 43", "45 47", "45 49", "47 49"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {-457, -94, -421, 4, 28, -484, -576, -334, -849, -791, -181, -968, -749, -923, -881, -494, -375, -259, -363, -520, -590, -633, -810, -617, -564, -370, -270, -224, -288, 29, -183, 65, 157, 317, 164, 244, 417, 294, 525, 718, 838, 127, 633, -156, 140, -308, 289, -328, -370, -879};
    vector<int> y = {837, 705, 847, 680, 624, 671, 736, 549, 568, 401, 569, 334, 390, -146, -31, -822, -667, 17, -543, -98, -112, -89, -32, 144, -37, -15, 315, 344, -793, -59, 5, 244, 68, -461, -851, -878, -448, 391, -903, -91, 359, 494, 593, 500, 610, 564, 648, 824, 964, 945};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 48", "2 46", "2 47", "2 48", "3 46", "4 45", "4 46", "5 7", "5 45", "7 9", "7 10", "7 45", "10 12", "10 14", "10 22", "10 23", "10 24", "10 26", "10 27", "10 28", "10 30", "10 43", "10 44", "10 45", "12 14", "14 16", "14 18", "14 20", "14 21", "14 22", "16 18", "18 20", "24 26", "28 30", "30 41", "30 43", "31 37", "31 41", "32 36", "32 37", "33 35", "33 36", "37 39", "37 40", "37 41", "41 43"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {-1000, -999, -997, -994, -990, -985, -979, -972, -964, -955, -945, -934, -922, -909, -895, -880, -864, -847, -829, -810, -790, -769, -747, -724, -700, -675, -649, -622, -594, -565, -535, -504, -472, -439, -405, -370, -334, -297, -259, -220, -180, -139, -97, -54, -10, 35, 81, 128, 176, 225};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 3", "0 4", "0 5", "0 6", "0 7", "0 8", "0 9", "0 10", "0 11", "0 12", "0 13", "0 14", "0 15", "0 16", "0 17", "0 18", "0 19", "0 20", "0 21", "0 22", "0 23", "0 24", "0 25", "0 26", "0 27", "0 28", "0 29", "0 30", "0 31", "0 32", "0 33", "0 34", "0 35", "0 36", "0 37", "0 38", "0 39", "0 40", "0 41", "0 42", "0 43", "0 44", "0 45", "0 46", "0 47", "0 48"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {-533, 101, 149, 510, 525, 231};
    vector<int> y = {559, -108, 284, -363, -390, 728};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "2 5", "3 5"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {-1000, -1, 997, 1000};
    vector<int> y = {-1000, 0, 999, -1000};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 3"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {-1000, -2, 997, 1000};
    vector<int> y = {-1000, -1, 999, -1000};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {-10, -1, 7, 10};
    vector<int> y = {-10, 0, 9, -10};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 3"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {-5, -1, 2, 3};
    vector<int> y = {-5, 0, 4, -3};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 3"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {0, 2, 6, 10, 12, 12, 3, 3, 2, 1, 1, 0};
    vector<int> y = {0, 2, -2, 2, 0, -3, -3, -1, 1, -1, -3, -3};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 8", "0 9", "0 10", "1 7", "1 8", "2 4", "2 5", "2 6", "2 7"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {0, 2, 2, 0, 0, 1, 1, 0};
    vector<int> y = {0, 0, 3, 3, 2, 2, 1, 1};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 6", "1 5", "1 6", "2 4", "2 5"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {0, 1, 1, 0, 1, 1, 0, -1, -1};
    vector<int> y = {0, 1, 2, 2, 3, 4, 5, 4, 1};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 3", "0 7", "3 5", "3 6", "3 7"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {0, -1, 0, -1, 0, 1, 3, 2, 3, 2, 3, 2, 3, 4, -1};
    vector<int> y = {0, 1, 2, 3, 4, 0, 0, 1, 2, 3, 4, 5, 6, -1, -1};
    Triangulation* pObj = new Triangulation();
    clock_t start = clock();
    vector<string> result = pObj->triangulate(x, y);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0 2", "0 5", "0 13", "2 4", "2 5", "5 13", "6 8", "6 13", "8 10", "8 13", "10 12", "10 13"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=5871&pm=3485
********************************************************************************
// Warning: less successful challenges against me than against tomek. 
// I'm now automatically removing unused stuff. 
 
#include <algorithm> 
#include <string> 
#include <vector> 
#include <iostream> 
#include <complex> 
using namespace std; 
 
typedef long long ll; 
typedef vector<int> vi; 
typedef vector<string> vs; 
typedef complex<ll> cll; 
 
#define LS < 
#define Size(x) (int(x.size())) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
#define INF 1000000000 
 
// cross product 
template <class T> T operator ^ (complex<T> x, complex<T> y) { 
  return (x*conj(y)).imag(); 
  } 
 
// Operators missing from GCC... 
template<class T> T& operator >?= (T& x, T y) {if(y>x) x=y; return x;} 
template<class T> T& operator <?= (T& x, T y) {if(y<x) x=y; return x;} 
 
#line 3 "Triangulation.cc" 
 
int next[60]; 
 
vector<pair<int,int> > res; 
 
vi gx, gy; 
 
 
bool dsign(int a, int b) { 
  return (a>=0 && b<=0) || (a<=0 && b>=0); 
  } 
 
bool crosses(int ax1, int ay1, int ax2, int ay2, 
  int bx1, int by1, int bx2, int by2, bool d) { 
 
  cll a1(ax1, ay1); 
  cll a2(ax2, ay2); 
  cll b1(bx1, by1); 
  cll b2(bx2, by2); 
   
  return dsign((a2-a1) ^ (b1-a1), (a2-a1) ^ (b2-a1)) 
   && dsign((b2-b1) ^ (a1-b1), (b2-b1) ^ (a2-b1)); 
  } 
 
int area(int t) { 
  int t1 = t; 
  int a = 0; 
  do { 
    a += (gy[t1] + gy[next[t1]]) * (gx[t1] - gx[next[t1]]); 
    t1 = next[t1]; 
    } while(t1 != t); 
  return a; 
  } 
 
void tri(int t) { 
  if(next[next[next[t]]] == t) return; 
   
  pair<int,int> best; 
   
  best.first = INF; 
  
  int t1 = t, t2, t3; 
   
//  int cyc = 0; 
   
  do { 
//  printf("t1 = %d\n", t1); fflush(stdout); 
    t2 = t; 
    do { 
//    printf("t2 = %d\n", t2); fflush(stdout); 
       
//    cyc++; if(cyc == 100) exit(0); 
  
      if(t1 == t2 || t1 == next[t2] || next[t1] == t2) { 
        t2 = next[t2]; continue; 
        } 
       
      bool ok = true; 
 
      int a1, a2, sav; 
 
      sav = next[t1]; next[t1] = t2; a1=area(t1); next[t1] = sav; 
   
      sav = next[t2]; next[t2] = t1; a2=area(t2); next[t2] = sav; 
       
      if(dsign(a1, a2)) ok = false; 
 
      t3 = t; 
       
      if(ok) do { 
        if(t3 == t1 || t3 == t2 || next[t3] == t1 || next[t3] == t2) { 
          t3 = next[t3]; 
          continue; 
          } 
 
        if(crosses(gx[t1], gy[t1], gx[t2], gy[t2], 
          gx[t3], gy[t3], gx[next[t3]], gy[next[t3]], 
           t1 == 0 && t2 == 3 && t3 == 1)) 
          ok = false; 
 
        t3 = next[t3]; 
        } while(t3 != t); 
       
      if(ok) best <?= make_pair(t1, t2); 
       
      t2 = next[t2]; 
      } while(t2 != t); 
 
    t1 = next[t1]; 
    } while(t1 != t); 
   
  t1 = best.first; t2 = best.second; 
   
  if(t1 != INF) { 
    int sav; 
     
//  printf("added (%d,%d)\n", t1, t2); 
    fflush(stdout); 
     
    res.push_back(best); 
     
    sav = next[t1]; next[t1] = t2; tri(t1); next[t1] = sav; 
 
    sav = next[t2]; next[t2] = t1; tri(t2); next[t2] = sav; 
    } 
     
  else printf("bug? [%d,%d,%d,%d,%d]\n", t, next[t], next[next[t]], next[next[next[t]]],next[next[next[next[t]]]]); 
  } 
 
class Triangulation { 
  public: 
  vector <string> triangulate(vector <int> x, vector <int> y) { 
    // !FDI 
    int N = Size(x); 
    FOR(n,0,N) next[n] = (n+1)%N; 
     
    res.clear(); 
     
    gx = x; gy = y; 
    tri(0); 
 
    sort(res.begin(), res.end()); 
     
    vs ress; 
    FOR(k,0,Size(res)) { 
      char buf[50]; 
       
      sprintf(buf, "%d %d", res[k].first, res[k].second); 
       
      ress.push_back(buf); 
      } 
       
    return ress; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/