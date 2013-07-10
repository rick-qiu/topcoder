/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9978
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

class CollectingUsualPostmarks {
public:
    int numberOfPostmarks(vector<int> prices, vector<int> have);
};

int CollectingUsualPostmarks::numberOfPostmarks(vector<int> prices, vector<int> have) {
    int ret;
    return ret;
}


int test0() {
    vector<int> prices = {13, 10, 14, 20};
    vector<int> have = {3, 0, 2, 1};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> prices = {7, 5, 9, 7};
    vector<int> have = {};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
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
    vector<int> prices = {4, 13, 9, 1, 5};
    vector<int> have = {1, 3, 2};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> prices = {16, 32, 13, 2, 17, 10, 8, 8, 20, 17};
    vector<int> have = {7, 0, 4, 1, 6, 8};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> prices = {103319, 56341, 86810, 6759, 22569, 73426, 43476, 54173, 73949, 15507, 153082, 71186, 62462, 56242, 25423, 9339, 126400, 96946, 82740, 138962, 50488, 54254, 59483};
    vector<int> have = {21, 4, 9, 18, 3, 20, 7, 1, 5, 15, 12, 0, 6, 8};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> prices = {20343, 20390, 240836, 94600, 693632, 24522, 608039, 224277, 540108, 414594, 458479, 149909, 37111, 173868, 641523, 143418, 651536, 540258, 440576, 491412, 685917, 303761, 582368, 659209, 690503, 658103, 217070, 393702, 709325, 172748, 366941, 615694, 477519, 135654, 452175, 109092, 141561, 388818, 409356, 720944, 96799, 504675, 71947, 141441, 242150};
    vector<int> have = {42, 36, 7, 34, 25, 29, 18, 24, 41, 5, 17, 0, 9, 12, 21, 33, 35, 14, 40, 19, 4, 8, 2, 28, 15, 22, 13, 43, 1, 16, 44, 23, 11};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> prices = {384923, 228142, 503182, 426507, 629133, 340795, 183483, 413157, 939641, 301870, 837511, 527730, 556242, 9218, 929366, 829650, 468141, 716482, 705112, 583883, 304237, 796144, 394250, 925626, 633214, 254054, 142755, 474168, 814256, 584274, 156159, 329216, 943665, 211582, 519734, 310643, 731373, 670450, 871464, 585716, 47380, 50138, 191319, 260698, 470478, 870842, 564088, 180809, 947283, 124300};
    vector<int> have = {32, 40, 42, 30, 23, 8, 20, 19, 47, 35, 14, 6, 28, 43, 9, 27, 5, 36, 46, 48, 13, 16, 3, 21};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> prices = {41230, 3138, 53780, 30461, 26158, 32513, 43438, 61753, 29392, 52155, 55214, 35321, 16215, 45394, 17983, 58178, 10439, 40972, 11658, 21777, 47671, 4015, 2701, 56535, 41677, 8595, 51522, 27109, 906, 46432, 8572, 58805, 40225, 38520, 56029, 49578, 37157, 46605, 37348, 13900, 20035, 5988, 16352, 54503, 47514, 26131, 53035, 27539};
    vector<int> have = {37, 5, 43, 32, 0, 36, 8, 41, 21, 29, 15, 9, 22, 11, 28, 14, 26, 23, 1, 10, 27, 44, 34, 19, 38, 7, 16};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> prices = {182499, 162394, 1179, 466802, 795122, 793352, 746704, 310415, 304928, 486631, 424560, 561694, 319177, 211164, 688570, 188156, 763764, 482142, 441761, 319020, 267534, 556524, 347097, 508741, 300570, 576613, 685827, 675173, 170104, 96039, 439522, 443119, 580371, 186153, 805077, 793140, 159462, 797487, 509506, 663852, 368246, 264176, 814759};
    vector<int> have = {7, 18};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> prices = {3756, 111311, 14892, 251839, 552588, 293067, 742990, 343647, 836347, 94997, 857745, 330615, 632994, 646421, 421960, 107296, 154761, 718517, 181252, 90283, 290288, 682897, 504960, 409230, 315114, 373536, 225908, 564256, 261924, 629047, 612200, 859134, 242072, 783223, 420496, 182089, 436402, 40143, 85809, 485152, 30794, 190045, 728859, 847761, 822210, 250916, 770499, 829056, 101122, 461555};
    vector<int> have = {23, 6, 13, 30, 43, 38, 10, 12, 19, 5, 17, 16, 28, 33, 26, 3, 37, 22, 41, 34, 11, 24, 46, 44, 48, 14, 47, 7, 36, 18, 31, 29};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> prices = {87861, 206512, 82621, 87952, 221974, 222512, 135512, 51238, 205847, 65431, 169176, 132773, 66919, 32369, 116070, 177693, 212426, 204198, 26422, 39683, 203253, 157840, 78129, 190742, 120780, 197105, 37567, 221189, 203996, 91736, 64573, 182057, 87001, 31071, 30930, 196094, 223922, 94804};
    vector<int> have = {8, 35, 26, 6};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> prices = {507972, 95626, 395248, 841402, 648889, 263925, 37894, 664264, 202819, 252558, 168774, 396110, 795548, 87126, 91724, 324089, 22375, 99173, 482779};
    vector<int> have = {3, 12, 2, 18, 11, 13, 1, 16};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> prices = {779522, 513355, 581112, 297301, 596527, 566518, 78725, 360589, 509956, 18340, 540558, 28698, 528389, 379511, 655815, 280120, 458666, 440996, 147658, 779089, 499598, 636020, 670117, 98296, 331327, 446377};
    vector<int> have = {15, 3, 10, 19, 7, 13, 24, 14, 17, 11, 0, 23, 6, 4, 5, 1, 22, 9, 12, 25, 16, 8};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> prices = {8440, 15417, 768, 2288, 9194, 17726, 14976, 17905, 17413, 386, 1901, 11987, 2162};
    vector<int> have = {9, 8, 2, 10, 0, 7, 11, 12, 3, 1, 5};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> prices = {134415, 68275, 35617, 271294, 111763, 127441, 38259, 191802, 37061, 31887, 2018, 27499, 86181, 266353};
    vector<int> have = {7, 3};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> prices = {390458, 246047, 396739, 210876, 347395, 13112, 351961, 258801, 209692, 342123, 262053, 98145, 299673, 36113, 139183, 102413, 367005, 316308, 209556, 334757, 296976, 366641, 362752, 30544, 200176, 353605, 235414, 267690, 8225, 299492, 402242, 160410, 321640, 21225, 273987, 173074, 133780, 225571};
    vector<int> have = {22, 21, 26, 35, 0, 28, 6, 20, 5, 19, 12, 9, 8, 16, 24, 17, 14, 27, 11};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> prices = {142093, 229746, 391652, 134181, 817360, 672989, 48004, 412262, 751333, 144000, 390081, 552995, 464750, 105011, 201609, 2160, 427480, 754270, 919973, 794247, 505932, 178563, 296140, 509054, 763172, 307888, 286945, 899621, 925859, 250420, 46399, 137297, 399368};
    vector<int> have = {4, 11, 30, 19, 6, 13, 14, 31, 2, 28, 10, 22, 12, 8, 20, 21, 1, 24, 15, 3, 0, 32, 23, 17, 7, 5, 29, 18, 26, 27, 9};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> prices = {456005, 185374, 234544, 252441, 463848, 483905, 192074, 226313, 37481, 489472, 66132};
    vector<int> have = {1, 10, 0, 3, 2, 8, 5, 6, 4, 9, 7};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
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
    vector<int> prices = {640385, 495148, 732535, 428048, 32192, 469306, 125083, 518770, 576245, 84723, 240952, 184043, 134757, 263285, 475567, 707737, 700356, 501695, 163140, 282025, 28150, 521319, 681611, 485399, 146110, 341476, 706530};
    vector<int> have = {25, 5};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> prices = {499822, 308408, 494250, 127369, 291396, 166540, 770993, 212129, 487289, 1911, 476273, 8643};
    vector<int> have = {0, 10, 9, 8, 2, 3, 1, 4};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> prices = {83697, 9013, 7777, 149903, 140520, 43400, 90669, 57921, 64838, 108884, 151696, 78685, 59993, 45714, 14996, 12566, 91757, 83252, 34681, 83119, 10124, 122947, 1358, 141815, 93435, 148136, 169168, 168845, 91426, 51081, 72611, 36937, 72032, 52484, 40641, 68440, 3432, 36423, 134700, 1805, 148627, 189929, 66327};
    vector<int> have = {1, 21, 19, 38, 28, 2, 8, 24, 40, 15, 13, 25, 11, 17, 26, 35, 30, 31, 0, 14, 5};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> prices = {301709, 29759, 204257, 433212, 159301, 65665, 40177, 249761, 198373, 285007, 233582, 173040, 127310, 298558, 369201, 65622, 207953, 138189, 7597, 366491, 170978, 108770, 214272, 215850, 205183, 10441, 203743, 41783, 263532, 222431, 227340, 160589, 202391, 402664, 140630, 315354, 284834, 286963, 16816, 364131, 46554, 34102, 110312, 153816, 329213, 65310, 199539, 329771, 366861, 319771};
    vector<int> have = {33, 46, 16, 27, 38, 22, 41, 8, 36, 48, 31, 4, 11, 32, 21, 0, 2, 13, 17, 39, 35, 42, 5, 49, 30, 45, 25, 10, 6, 34, 14, 44, 37, 19, 18, 1, 15, 26, 29, 12, 3, 28};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> prices = {274528, 255067, 14660, 90124, 152308, 356201, 305652, 341480, 160770, 62856, 631738, 657333, 619822, 191466, 483098, 137213, 65763, 17783, 548351, 457248, 270549, 476051, 385913, 516885, 26909, 156224, 357706, 245003, 479246, 553385, 260094, 228411, 50447, 258177, 242991, 577546, 16497, 467810, 694420, 572587, 74085, 340643, 50416, 652505, 405548, 684396, 540768, 685353, 589252, 340325};
    vector<int> have = {45, 23, 25, 9, 3, 33, 18, 8, 49, 27, 20, 46, 44, 26, 17, 32, 14, 15, 0, 30, 48, 35, 42, 1, 39, 13, 2, 6, 47, 21, 22, 5, 28, 7, 43, 37, 40, 38, 10, 31, 36, 12, 34, 19, 4, 11, 29, 24, 41};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> prices = {185755, 394387, 782629, 252325, 883375, 498859, 92099, 641366, 362524, 442584, 433500, 719610, 685597, 379231};
    vector<int> have = {3, 8, 2, 1, 0, 7, 4, 11, 12, 9, 13, 6};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> prices = {471790, 2148, 688866, 290681, 84695, 518822, 279751, 76115, 603810, 276026, 608821, 322375, 112218, 256279, 47921, 177026, 205134};
    vector<int> have = {16, 2, 12, 15, 11, 0, 5, 6, 13, 8, 1, 10, 3, 14};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> prices = {51591, 205093, 53439, 91406, 42151, 140814, 12977, 15270, 15876, 167981, 135992, 133618, 100084, 152700, 41526, 147207, 48047, 2596, 4800, 28126, 116483, 175936, 10930, 160495, 128259, 85197};
    vector<int> have = {};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> prices = {79646, 288839, 238473, 152251, 745989, 437272, 65558, 664354, 468661, 33737, 909476, 58817, 760593, 245474, 571543, 837494, 579294, 318290, 22603, 118002, 384176, 276356, 750724, 882059, 815701, 861545, 323467, 317735, 422804, 771794, 788038, 881393};
    vector<int> have = {31, 30, 26, 17, 19, 3, 2, 6, 22, 10, 20, 25, 18, 23, 14, 9, 29, 11, 12, 16, 1, 0, 27, 28, 5, 15, 7, 8, 4, 21};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> prices = {359292, 128078, 48244, 464091, 163569, 249091, 245518, 219778, 90610, 252345, 443147, 252056, 523028, 25110, 399935, 57664, 190842, 33135, 393806, 478453, 49352, 219596, 37124, 412687, 264337, 386165, 327617, 232345, 78711, 88260, 250831, 327276};
    vector<int> have = {28, 21, 13, 11, 23, 9, 6, 26, 27, 18, 4, 2, 30, 5, 29, 24, 12, 8, 16};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> prices = {413436, 673583, 145203, 92256, 31886, 101460, 468244, 94717, 211916, 47672, 35368, 97837, 500102, 9619};
    vector<int> have = {12, 7, 1, 5, 9, 11, 3, 13, 2, 0, 4, 8, 10, 6};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> prices = {77834, 27799, 106658, 124165, 329252, 351057, 477058, 85572, 251168, 370337, 155773, 69820, 168484, 331332, 464194, 461180, 350962, 466017, 186087, 162353, 447376, 244185, 166987, 432845, 231037, 7114, 457074, 35034, 97624, 460925, 286383, 192914, 102882, 3875, 126972, 426692, 68566, 419421, 176807, 447064, 129194, 130223, 384785, 341927};
    vector<int> have = {2, 16, 18, 24, 10, 0, 21, 17, 7, 19, 20};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> prices = {73756, 91858, 26089, 1135, 29577, 90579, 80496, 75613, 39042, 91186, 34188, 69149, 26622, 21686, 58070, 76889, 90079, 80388, 25228, 22926, 45460, 84666, 63857, 84672, 86293, 73508, 45752, 66471, 87012, 9281};
    vector<int> have = {1, 25, 27, 14, 11, 2, 7, 5, 24, 28, 9, 29, 6, 15, 3, 23, 0};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> prices = {383004, 148377, 76650, 238250, 198637, 368652, 346100, 351885, 400061, 279238, 359604, 100926, 202123, 136179, 232342, 118817, 435213, 12953, 87959, 370761, 222701, 429352, 325017, 55011, 288325, 23031, 189547, 100079, 106139, 276655, 237407, 369918, 289479, 381088, 167628, 327792, 190570, 273746, 218894, 426126, 113074, 285434, 174620, 456893, 135563, 154790, 149111};
    vector<int> have = {7, 10, 36, 19, 20, 9, 1, 44, 39, 41};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> prices = {365880, 340614, 336111, 359138, 74043, 343366, 350090, 42977, 302521, 72726, 57022, 379834, 67872, 357884};
    vector<int> have = {6, 9, 4};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> prices = {286827, 492407, 391572, 523552, 474681, 234711, 170454, 121660, 391827, 141182, 21888, 40286, 4092, 252952, 356764, 216496, 281217, 62647, 336605, 227276, 528686, 65250, 41432, 139627, 341593, 260013, 243198, 99369, 304362, 308107, 280381, 475005, 108601, 287612, 177910, 327163, 189016, 517029, 170529, 408572, 211396, 105325, 31800, 18431, 38176, 391224, 166410};
    vector<int> have = {43, 46, 22, 26, 42, 17, 36, 14, 31, 23, 37, 24, 41, 8, 39, 11, 32, 4, 9, 5, 19, 12, 21, 18, 44};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> prices = {112307, 36139, 151699, 104980, 157140, 141827, 128101, 90920, 205102, 168766, 206492, 120036, 19385, 211519, 65580, 109816, 199372, 113972, 212020, 151230, 90322, 88015, 152221, 131814, 28062, 52661, 109065, 156747, 5103, 148862, 97093, 121075, 173999, 113632, 9214, 139145, 188312, 21004, 189524, 7766, 194686, 95726, 74644, 127588, 65710, 158253, 78321, 92376, 122593, 233872};
    vector<int> have = {37, 31, 14, 34, 5, 28, 25, 22, 43, 2, 30, 12, 46, 21, 42, 47, 29, 26, 27, 18, 13, 8, 10, 20, 49, 9, 6, 33, 19, 15, 4, 32, 40, 39};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> prices = {283494, 430462, 45079, 403429, 186670, 105272, 30127, 456729, 277279, 83864, 458509, 388044, 12875, 435163, 481690, 45814, 204072, 377356, 417446, 495847, 366058, 407093, 377076, 238467};
    vector<int> have = {10, 13, 17, 11, 20, 15, 7, 8, 14, 0, 16, 18, 5, 12, 23, 4, 21, 6};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> prices = {715646, 75447, 698698, 906166, 898387, 88470, 169799, 319822, 474709, 751582, 822047, 447843, 325654, 22544, 724819, 135624, 132194, 440449, 765611, 678381, 35490, 780591, 560479, 460659, 926446, 320027, 250064, 473162, 500587, 583644, 591795, 77304, 749995, 8377, 425332, 132045, 314639, 369636, 610945, 417399, 288657, 84833, 438691, 742532, 466394, 181400, 567535};
    vector<int> have = {44, 12, 24, 4, 3, 0, 19, 2, 25, 39, 11, 7};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> prices = {18692, 25358, 72208, 86435, 51745, 35747, 71303, 88305, 16964, 24965, 52472, 33275, 88881, 89899, 116967, 55888, 133952, 84773, 31846};
    vector<int> have = {5, 1, 18, 14, 12, 8, 10, 3, 17, 2, 11, 6, 7, 4, 0, 9, 16, 15};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> prices = {747590, 585507, 128338, 399407, 733979, 226498, 610843, 299982, 134585, 115084, 72882, 472147, 554603, 557874, 666405, 615435, 59489, 97949};
    vector<int> have = {11, 5};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
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
    vector<int> prices = {143276, 160250, 854, 174560, 158163, 130580, 79182, 110064, 41541, 103387, 120025, 48021, 93859, 64721, 44395, 13977, 165055, 161016, 72325, 117800, 120051, 45729, 27549, 47621, 23392, 21088, 30718, 138817, 171763, 178829, 168784, 137448, 110346, 193133, 140592, 48263, 25407, 25502, 53857, 140657};
    vector<int> have = {3, 20, 26, 11, 31, 30, 27, 25, 19, 7, 12, 0, 9, 5, 34, 36, 35, 32, 8, 1, 39, 16};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> prices = {504422, 421688, 106431, 179450, 11688, 607617, 222597, 312800, 318062, 430180, 853349, 29451, 36406, 164451, 194277, 828595, 20358, 226447, 285649, 159731, 519334, 352753, 324562, 305127, 356697, 775576, 763948, 511734, 385089, 662351, 375451, 177352, 750582, 143755, 610221, 622881, 69625, 664352, 95140, 328471, 886758, 88200, 714537, 189805, 342173, 242401, 457092, 293497, 422822, 861363};
    vector<int> have = {10, 49, 6, 29, 5, 32, 15, 7, 1, 42};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> prices = {19094, 59007, 28624, 44147, 6804, 21091, 71378, 3501, 39781, 36809, 71727, 50088, 35076, 50903, 47174, 47985, 30649, 68366, 3625, 19859, 48761, 48408, 45752, 44522, 6136, 22712, 57485, 57325, 6175, 38480, 17504, 3479, 61556, 44064, 42410};
    vector<int> have = {};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> prices = {127796, 65184, 60091, 70817, 114375, 33426, 27150, 124258, 33413, 103045, 118250, 35464, 28488, 72177, 35099, 53754, 18231, 107263, 98422};
    vector<int> have = {3, 16};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
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
    vector<int> prices = {563942, 144635, 166541, 250223, 593391, 122256, 335251, 494016, 294682, 367100, 289954, 377333, 522087, 594095, 164279, 568141, 594013, 540280, 550459, 187737, 60969, 513021, 304627, 135484, 442114, 233294, 278623, 74855, 207089, 295044, 291719, 108322, 329710, 68834, 366331, 471445, 119766, 250981, 471024, 598589, 534858, 48139, 323127, 528764, 352998, 179613, 49172, 452338, 369831, 505528};
    vector<int> have = {10, 22, 12};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> prices = {397582, 348931, 13178, 189108, 266839, 491651, 45378, 537540, 471567, 189430, 57147, 464895, 533133, 481147, 231257, 375363, 154184, 63931, 304497, 376833, 204603, 87402, 218265, 210098, 60741, 64683, 196156};
    vector<int> have = {22, 24, 7, 16, 1};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> prices = {21559, 24223, 15915, 891, 6298, 28890, 25212, 28827, 25018, 40289, 31783, 24573, 19889, 36856, 27947, 22269, 35746, 6296, 34128, 39007, 30512, 14803, 32158, 8982, 21839, 33122, 8171, 33292, 879, 1491, 34456, 6985, 6546, 16168, 19844, 18058, 39525, 31887, 21970, 16925, 26420, 14178, 36486, 37406, 17319, 33440, 20291, 20100, 21365, 35622};
    vector<int> have = {20, 7, 31, 6, 21, 9, 36, 2, 1, 48, 38, 12, 42, 26, 16, 11, 29, 41, 46, 27, 0, 25, 47, 8, 19, 32, 30, 15, 24, 39, 4, 22, 17, 23, 28, 3, 5, 44, 18, 10, 45, 33, 49, 14, 13, 34, 40, 37, 35, 43};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> prices = {289529, 30079, 422290, 357929, 409258, 315525, 174371, 147234, 48201, 413147, 301050, 42548, 333801, 85708, 12739, 241834, 73420, 133066, 189087, 350513, 235079, 411870, 328659, 146980, 116112, 402002, 208600, 90895, 429911, 350512, 384341, 18210, 97545, 165396, 380147, 417881, 211428, 214427, 339140};
    vector<int> have = {30, 28, 8, 4};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> prices = {73974, 165732, 220542, 306734, 203493, 220941, 144237, 36288, 253844, 198827, 110872, 197187, 95603, 94075, 153840, 294098, 40909, 22249, 220746, 272003, 275305, 141920, 221887, 318112, 228224, 11084, 75812, 195103, 214183, 52239, 120800, 309772, 246676, 264912, 27856, 116112, 90916, 86458, 195288, 16938, 43227, 49487, 307102, 286830, 39424, 249551, 256714, 227861, 149149, 14783};
    vector<int> have = {43, 34, 15, 26, 30, 33, 19, 3, 1, 44, 20, 0, 10, 41, 46, 39, 47, 48, 38, 28, 49, 45, 27, 37, 16, 7, 13, 35, 25, 14, 11, 23, 22, 36, 21, 12, 40, 29, 8, 31, 4, 6, 2, 5, 32, 17};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> prices = {124, 1970, 2639, 311, 5263, 2478, 267, 1472, 5750, 2715, 2712, 2373, 418, 2446, 1459, 2701, 4007, 2013, 1302, 1339, 3704, 1677, 5031, 821, 1652, 2373, 4238, 385, 356, 5325, 3784, 5950, 1578, 4986, 1124, 3658, 1252, 2861, 1682, 2031, 3526, 2715, 5007, 234, 4771, 4344, 354, 2406, 3927, 3591};
    vector<int> have = {18, 41, 27, 11, 12, 34, 9, 39, 17, 43, 10, 47, 21, 30, 4, 46, 35, 22, 45, 25, 19, 40, 38, 29, 23, 31};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> prices = {963647, 729520, 9182, 949, 565583, 170915, 932910, 618993, 844221, 171119, 511755};
    vector<int> have = {5, 10, 0, 8, 3, 4};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> prices = {63889, 99511, 357008, 212023, 228106, 313403, 278039, 134145, 297325, 245047, 203248, 480877, 560689, 544562, 110176, 358085, 523774, 44201, 442193, 359642, 515924, 299285, 149253, 136838, 253569, 423474, 397842, 567316, 186999, 210166, 190269, 203770, 531022, 178733, 85982, 169703, 568098, 116131, 496087, 186271, 89399, 201723, 563042, 549878, 522485, 309153, 509182, 109491, 75156, 52791};
    vector<int> have = {40, 27, 20, 35, 33, 1, 45, 37, 26, 41, 5, 10, 34, 16, 17, 48, 39, 0, 15, 31, 36, 28, 42, 9, 11};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> prices = {252535, 5009, 464149, 231233, 391225, 159056, 499614, 237775, 363980, 154712, 416290, 97681, 349317, 350307};
    vector<int> have = {12, 4, 8, 13, 11};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> prices = {24686, 365437, 221588, 83303, 222741, 332054, 58111, 181366, 346273, 279006, 285640, 180225, 264922};
    vector<int> have = {11, 3, 4};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> prices = {96568, 93449, 244386, 247933, 266814, 376907, 338971, 60546, 210995, 409048, 82987, 280890, 124006, 130500, 444638, 415228, 147250, 322509, 175414, 226384, 33962, 419661, 110763, 253815, 247526, 195427, 414056, 296103, 381274, 186957, 147762, 182229, 284501, 233568, 76180, 137777};
    vector<int> have = {4, 21, 25, 22, 14, 26, 28, 30, 7, 27, 6, 33, 24, 5};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> prices = {133494, 385959, 64832, 62846, 427961, 427047, 99089, 130048, 384889, 301281, 295014, 101828, 258049, 160197, 43496, 435956, 382705, 418317, 374479, 5583, 105543, 103259, 283820, 29706, 9612};
    vector<int> have = {15, 10, 22, 20, 6, 19, 11, 3, 14, 5, 7, 2, 8, 17};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> prices = {280224, 118869, 97544, 152094, 245785, 288958, 379734, 349347, 208064, 311607, 343990, 204088};
    vector<int> have = {0, 9, 11, 7, 3, 4, 1, 2};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> prices = {24362, 95953, 165409, 194410, 188521, 108774, 260639, 104444, 35496, 226730, 88250, 14748, 215581, 199225, 141585, 268348, 145174, 136061, 39794, 145728, 181871, 253946, 272240, 216356, 263174, 229722, 57682, 88814, 12852};
    vector<int> have = {1, 2, 25, 10, 22, 20, 16, 19, 24, 12, 18, 7, 0, 15, 17, 5, 3, 8, 26, 23, 6, 14, 9, 27, 28};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> prices = {319864, 771784, 144457, 226987, 352216, 128779, 178607, 436712, 761527, 430738, 749705, 398606, 607702, 726221, 414270, 706005, 377909, 379472, 580700, 611534};
    vector<int> have = {1, 7, 4, 13, 5, 16, 9, 18, 3, 10, 14, 12, 19, 6, 0, 8, 11, 17};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> prices = {523141, 238233, 483338, 618983, 47955, 44659, 241186, 105277, 119317, 562163, 480933, 198658, 627544, 317994, 456504, 536675, 320408, 485394, 565671, 366719, 111413, 400894, 294486, 611499, 603263, 85434, 25798, 208752, 39344, 295298, 248367, 103354, 558242, 132474, 364341, 291, 385644, 431326, 416491, 584196, 326668, 248795, 439191};
    vector<int> have = {42, 21, 35, 27, 23, 2, 24, 4, 12, 38, 32, 22, 19, 20, 0, 39, 31, 40, 16, 26, 14, 3};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> prices = {161941, 211342, 609530, 555417, 538082, 223162, 280320, 438258, 312804, 417359, 477748, 288045, 29686, 272166, 219050, 150883, 473708, 227634, 438984, 414701, 15453, 488212, 597883, 656745, 628472, 573021, 129641, 42913, 635382, 440048, 223345, 519284, 106282, 642752, 600936, 55789, 475617, 561723, 158353, 197485};
    vector<int> have = {13, 25, 6, 8, 23, 14, 28, 39, 20, 30, 7, 31, 24, 0, 12};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> prices = {198165, 78335, 77226, 219365, 7504, 371385, 379158, 74782, 135682, 309032, 244905, 214820, 345103, 207062, 341803, 70557, 131895, 408040, 145171, 247384, 398626, 114295, 380528, 385827, 27534, 313199, 40903, 404006, 143480, 16844, 87708, 89010, 332909, 122513, 227983, 193059, 95197, 30816, 246695, 125802, 393701, 298066, 80648, 206205, 153842, 209470, 50067, 137629, 238112, 70353};
    vector<int> have = {49, 5, 38, 10, 42, 26, 17, 36, 14, 23, 45, 44, 34, 20, 32, 47, 13, 1, 11, 35, 8, 19, 43, 15, 9, 21, 22};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> prices = {446113, 177741, 322086, 294037, 379300, 149057, 300364, 50072, 362640, 354868, 253508, 6058, 199849, 505164, 361865, 67839, 168887, 336860, 279135, 404131, 65585, 100961, 138224, 130485, 410080, 298463, 174224, 9488, 127664, 26934, 163057, 151081, 374480, 319970, 419359, 510723, 520743};
    vector<int> have = {17, 9, 16, 14, 18, 27, 6, 10, 24, 1, 28, 36, 15, 13, 25, 2, 0, 22, 34, 12, 4, 8, 30, 7, 33, 32, 23, 29};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> prices = {373947, 408318, 399460, 57598, 35679, 104399, 381849, 289817, 335218, 125850, 109016, 133271, 396311, 32520, 247974, 63222, 21781, 144212};
    vector<int> have = {7, 6, 3, 10, 17, 11, 15, 16, 12, 5, 4, 13, 14, 2};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> prices = {304223, 595601, 232202, 159249, 420329, 225534, 380428, 89245, 493313, 245754, 141417, 216523, 500367, 230968, 178724, 420308, 491613, 26568, 9201, 211614, 134618, 117797, 587138, 398036, 291825, 102639, 584974, 343749, 175811, 614798, 227165, 561832, 234016, 58984, 471582, 100019, 405127, 173061, 247737, 63033, 253492, 390398, 194766, 277337, 322760, 219827, 127820, 270321, 172403, 14919};
    vector<int> have = {41, 28, 29, 7, 40, 24, 48, 47, 6, 25, 12};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> prices = {271407, 328157, 42359, 497197, 936685, 131238, 66836, 294692, 764324, 588254, 947102, 717545, 888954, 501842, 661929, 339348, 799466, 942062, 336395, 867092, 747938, 140608, 663104, 895785, 909804, 187130, 536985, 113026, 651124, 129434};
    vector<int> have = {2, 28, 27, 18, 14, 7, 10, 19};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> prices = {249688, 59429, 273691, 39065, 171444, 243015, 234135, 264430, 168272, 236705, 36127, 110619, 286794, 40580, 310999};
    vector<int> have = {0, 6, 13, 1};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
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
    vector<int> prices = {221860, 303369, 364920, 70215, 390932, 403907, 156037, 126500, 160219, 232265, 355810, 287171, 183037, 510616, 454761, 224262, 395248, 449077, 8457, 429455, 435995, 440947, 496758, 250495, 473637, 255158};
    vector<int> have = {19, 8, 20, 3, 10, 5, 14, 0, 18, 2};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> prices = {213441, 406114, 34014, 90477, 689161, 350538, 867156, 191964, 544847, 123214, 137470, 296413, 708378, 515330, 402476, 172725, 673226, 226475, 519391, 574153, 161397, 625260, 634053, 467016, 185752, 160641, 423752, 583074, 519200, 418296, 695558, 409358, 699169, 740875, 480204, 3392, 469896, 387952, 444431, 792080, 364290, 441215, 17041, 868867, 360767, 17386};
    vector<int> have = {15, 1, 32, 33, 7, 0, 17, 20, 42, 3};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> prices = {324265, 264807, 306113, 391965, 225306, 191898, 250915, 443684, 429437, 358753, 37993, 195318, 298042, 45438, 251128, 140610, 19381, 462042, 99906, 419024, 36290, 232709, 236371, 324498, 438761, 363358, 404253, 149723, 416794, 68260, 168565, 415330, 316644, 49752, 154396, 255818};
    vector<int> have = {0, 18, 9, 14, 23, 24, 31, 35, 5, 13, 3, 6, 12, 1, 4, 7, 26, 11, 2, 29, 8, 21, 19};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> prices = {67252, 79864, 165432, 42912, 34515, 137997, 41625, 67090, 148051, 72258, 27062, 157703, 154060, 135003, 86135};
    vector<int> have = {8, 3, 13, 14, 7, 11, 6, 2};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> prices = {846043, 16350, 818555, 163549, 26866, 276053, 734027, 371271, 156749, 178349, 30245, 183392, 39984, 629694, 578694, 827645, 284134, 533167, 16934, 253922, 463520, 427071, 321008, 216559, 159357, 630787, 656784, 769712, 357866, 823419, 752821, 807887, 485724, 151674, 317026, 309801, 287727, 580073, 217933, 504686, 750630, 752543};
    vector<int> have = {34, 1, 24, 6, 21, 29, 14, 20, 40, 41, 16, 5};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> prices = {304643, 544106, 321589, 259371, 620140, 56130, 453633, 427157, 825179, 600967, 747308, 695922, 581331, 810890, 488832, 588766, 8771};
    vector<int> have = {8, 3, 16, 2, 5, 13};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
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
    vector<int> prices = {42165, 13763, 173795, 66177, 120852, 16633, 393606, 500279, 200126, 146353, 118267, 106331, 434696, 257854, 545478, 103234};
    vector<int> have = {6, 1, 13, 15, 11};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> prices = {377738, 237201, 370755, 197651, 400080, 41393, 277983, 101336, 258574, 379188, 108150, 220389, 70141, 91740, 212808, 346868, 221782, 167261};
    vector<int> have = {};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> prices = {16, 32, 13, 2, 17, 10, 8, 8, 20, 17};
    vector<int> have = {7, 0, 4, 1, 6, 8};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> prices = {7, 13, 9, 1, 7, 8};
    vector<int> have = {1, 3, 2};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> prices = {1, 2, 3, 4, 5, 6, 7, 111, 21211, 1211, 13, 21};
    vector<int> have = {3, 5, 7, 1};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> prices = {1, 2, 3, 4};
    vector<int> have = {0, 1};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
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
    vector<int> prices = {2, 3, 5, 10};
    vector<int> have = {3};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> prices = {2, 2, 2, 2, 4, 4};
    vector<int> have = {4, 5};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> prices = {3, 1, 1, 1};
    vector<int> have = {0};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> prices = {1, 2, 3, 4, 5, 6, 7, 12, 16};
    vector<int> have = {7, 8};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> prices = {1, 1, 10};
    vector<int> have = {2};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
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
    vector<int> prices = {1, 100, 200};
    vector<int> have = {0};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> prices = {1000000, 1000000, 1000000, 1000000, 999999, 1};
    vector<int> have = {0};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
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
    vector<int> prices = {3, 5, 7, 8, 9, 4654, 345, 34567, 5, 4};
    vector<int> have = {2, 4, 7};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> prices = {21, 4, 4, 5, 4, 4};
    vector<int> have = {0};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> prices = {22, 88, 77, 999, 1000000, 8888, 1, 8888, 555555, 8666, 88888};
    vector<int> have = {1, 6, 8, 2, 3};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> prices = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 10, 1, 1, 1, 1};
    vector<int> have = {1};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
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
    vector<int> prices = {23, 32, 45, 657, 465, 435, 65, 65, 4, 56, 64};
    vector<int> have = {4, 3, 1, 2};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> prices = {4, 9, 9, 1, 5};
    vector<int> have = {1, 3, 2};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> prices = {2, 4};
    vector<int> have = {0};
    CollectingUsualPostmarks* pObj = new CollectingUsualPostmarks();
    clock_t start = clock();
    int result = pObj->numberOfPostmarks(prices, have);
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22736467&rd=13506&pm=9978
********************************************************************************
#include<vector>
#include<list>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<sstream>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
using namespace std;
#define inf 1e8
#define f(i,a,b)for(int i=a;i<b;i++)
#define rep(i,n)f(i,0,n)
#define all(a)a.begin(),a.end()
 
 
class CollectingUsualPostmarks {
 public:
  int numberOfPostmarks(vector <int>, vector <int>);
};
 
 
 
int CollectingUsualPostmarks::numberOfPostmarks(vector <int> prices, vector <int> have){
 
  int money=0;
 
  int N=have.size(),K=prices.size();
  rep(i,N){
    int m=have[i];
    money+=prices[m];
  }
 
  sort(all(prices));
 
  int res=0;
  while(money>0){
    money-=prices[res];
    res++;
  }
 
  if(money<0) return res-1;
  return res;
}
    
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/