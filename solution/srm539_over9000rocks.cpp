/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11855
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

class Over9000Rocks {
public:
    int countPossibilities(vector<int> lowerBound, vector<int> upperBound);
};

int Over9000Rocks::countPossibilities(vector<int> lowerBound, vector<int> upperBound) {
    int ret;
    return ret;
}


int test0() {
    vector<int> lowerBound = {9000};
    vector<int> upperBound = {9001};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
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
    vector<int> lowerBound = {9000, 1, 10};
    vector<int> upperBound = {9000, 2, 20};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> lowerBound = {1001, 2001, 3001, 3001};
    vector<int> upperBound = {1003, 2003, 3003, 3003};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> lowerBound = {9000, 90000, 1, 10};
    vector<int> upperBound = {9000, 90000, 3, 15};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> lowerBound = {1, 1, 1, 1, 1, 1};
    vector<int> upperBound = {3, 4, 5, 6, 7, 8};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> lowerBound = {9001, 9002, 9003};
    vector<int> upperBound = {9001, 9002, 9003};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> lowerBound = {9001};
    vector<int> upperBound = {9001};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
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
    vector<int> lowerBound = {9000, 3, 11, 50, 100, 900007, 90007, 102, 7, 11, 307, 9007, 1, 997, 56};
    vector<int> upperBound = {9000, 5, 13, 54, 100, 1000000, 100007, 104, 9, 11, 309, 9013, 1000000, 1009, 57};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 2110691;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> lowerBound = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14991000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> lowerBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> lowerBound = {177258, 439976, 996972, 281567, 782547, 998375, 491481, 707710, 146177, 889410};
    vector<int> upperBound = {293261, 559909, 997946, 410135, 784021, 998581, 925665, 743314, 626775, 943659};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 7137090;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> lowerBound = {315272, 887545, 64836, 497408, 974365, 395811, 835917, 822205, 763313, 796755, 541406, 250512, 772146};
    vector<int> upperBound = {661956, 905285, 360731, 694427, 999269, 834462, 889010, 984734, 976200, 992732, 952893, 904500, 853930};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 10945294;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> lowerBound = {712946};
    vector<int> upperBound = {871563};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 158618;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> lowerBound = {177389, 865455, 133264, 739109, 390897, 157563, 399400, 426007, 864298, 612059, 287649};
    vector<int> upperBound = {373901, 975109, 898401, 993324, 565760, 949001, 700614, 750652, 959908, 874621, 820179};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 8728207;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> lowerBound = {16859, 287723};
    vector<int> upperBound = {287608, 630151};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 900787;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> lowerBound = {77505, 104830, 58303, 574406, 229438};
    vector<int> upperBound = {658755, 961848, 273053, 966870, 779624};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 3581848;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> lowerBound = {647998, 431340, 617093, 930533, 861479, 198561};
    vector<int> upperBound = {830560, 870972, 893128, 997538, 943907, 264651};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 4435508;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> lowerBound = {729521, 788949, 148221, 3423, 231974, 569820, 332636};
    vector<int> upperBound = {951408, 974213, 708093, 720084, 459786, 620622, 497059};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 4922265;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> lowerBound = {650057, 270366, 180570, 698312, 338872, 62431, 15948, 547413, 828153, 205852, 755374, 289622};
    vector<int> upperBound = {963292, 607214, 849697, 707788, 505320, 833352, 906522, 861732, 832867, 882648, 836582, 514521};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9285588;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> lowerBound = {7814, 60843, 695305, 390426, 879303, 209688, 58403, 407967, 120378, 886777};
    vector<int> upperBound = {577125, 986686, 971243, 392645, 896113, 953189, 828267, 946013, 314552, 929027};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 7785860;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> lowerBound = {80969, 466757, 904767, 106216, 562016, 870595, 886461, 425044, 224701, 417318};
    vector<int> upperBound = {162285, 598837, 928929, 442628, 617607, 928392, 891079, 587088, 467202, 759924};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 6303003;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> lowerBound = {633261, 151066, 677628, 28480, 666116, 190295, 443690, 304836, 47375, 729836, 264290, 549776};
    vector<int> upperBound = {674277, 707113, 790488, 489728, 799813, 473682, 970799, 765743, 560994, 965435, 957783, 590809};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 8718185;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> lowerBound = {82160, 853398, 875890, 77842, 932128, 336944, 194062, 149117, 933699};
    vector<int> upperBound = {580520, 989107, 966779, 242532, 940316, 876494, 953510, 677091, 991468};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 7139976;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> lowerBound = {409251, 99538, 871775, 363786, 43957};
    vector<int> upperBound = {983987, 338409, 938943, 892886, 576468};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 3686737;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> lowerBound = {784275, 330854, 628295, 405112, 317668, 784207, 74353, 102753};
    vector<int> upperBound = {863846, 339275, 979607, 645592, 739902, 805014, 95161, 211513};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 4586974;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> lowerBound = {274874, 221460, 292130, 246617, 186677, 353497, 485281};
    vector<int> upperBound = {583911, 672584, 730676, 380829, 855188, 746775, 507997};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 4291284;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> lowerBound = {425785, 201968, 869280, 653990, 495155, 491951, 711748, 246375, 818210, 738463, 679178, 229828};
    vector<int> upperBound = {629164, 617611, 907753, 705915, 899563, 649561, 956880, 273803, 973764, 965920, 681190, 589929};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 8649086;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> lowerBound = {976450, 95080, 795474, 771972, 285458, 819403};
    vector<int> upperBound = {997914, 307461, 904666, 890524, 292447, 858785};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 3911579;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> lowerBound = {467261, 313018, 599921, 681293};
    vector<int> upperBound = {542669, 408021, 642233, 855205};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1958177;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> lowerBound = {926794, 111826};
    vector<int> upperBound = {965194, 529658};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 912467;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> lowerBound = {737698, 711627};
    vector<int> upperBound = {932146, 972130};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 715456;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> lowerBound = {83236, 489004};
    vector<int> upperBound = {412666, 891679};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1144773;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> lowerBound = {483961, 404107, 39322, 489707, 50082, 946144, 750029, 935461, 921277, 46459, 904585, 665132};
    vector<int> upperBound = {783504, 490638, 239283, 931380, 514006, 957780, 812575, 986086, 935428, 120468, 911693, 903225};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 8546745;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> lowerBound = {94983, 298655, 833138, 236480, 237270, 143125, 68677, 934715, 321856, 546225, 915637, 465282, 66162};
    vector<int> upperBound = {132302, 895307, 912018, 400106, 901768, 624079, 287815, 953342, 378623, 864415, 952164, 806394, 348192};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 8390364;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> lowerBound = {974969, 805241, 739803, 866190, 638362};
    vector<int> upperBound = {992129, 995480, 953933, 888003, 865695};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 3175327;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> lowerBound = {230278, 209436, 439387};
    vector<int> upperBound = {631123, 796195, 583394};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1801277;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> lowerBound = {660899, 97798, 199286, 669088};
    vector<int> upperBound = {672354, 310972, 511562, 903894};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 2300985;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> lowerBound = {789006, 400519, 904491, 931026, 622039};
    vector<int> upperBound = {822647, 743268, 927521, 959138, 949966};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 3938603;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> lowerBound = {704001, 75987};
    vector<int> upperBound = {706999, 182667};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 219359;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> lowerBound = {379148, 378238};
    vector<int> upperBound = {608520, 602356};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 683774;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> lowerBound = {772791, 627669, 413070};
    vector<int> upperBound = {772798, 627669, 413080};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> lowerBound = {508657, 660261, 959192, 321186, 533351, 372883, 768502, 188585, 447067, 424727, 399176};
    vector<int> upperBound = {508659, 660264, 959193, 321196, 533361, 372888, 768510, 188586, 447069, 424736, 399178};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 55783;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> lowerBound = {25545, 164282, 230067};
    vector<int> upperBound = {25555, 164283, 230069};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> lowerBound = {427728, 715349, 550924, 176187};
    vector<int> upperBound = {427728, 715358, 550925, 176192};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> lowerBound = {268748, 131052, 669187, 620952};
    vector<int> upperBound = {268756, 131061, 669190, 620960};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 239;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> lowerBound = {31443};
    vector<int> upperBound = {31445};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
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
    vector<int> lowerBound = {404765, 884161, 186908, 888425, 914964, 238311, 494838, 228860, 633161, 528474, 270319, 305496, 421562, 214922};
    vector<int> upperBound = {404773, 884169, 186912, 888434, 914970, 238312, 494846, 228860, 633163, 528481, 270320, 305505, 421565, 214929};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 573477;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> lowerBound = {747339, 274438, 848042, 44720, 394591, 354897, 496062, 107528, 769842, 101271, 938414, 645403, 264660};
    vector<int> upperBound = {747339, 274442, 848046, 44720, 394592, 354902, 496065, 107537, 769844, 101281, 938415, 645409, 264668};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 212711;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> lowerBound = {388348, 602772, 593196, 488573, 318390};
    vector<int> upperBound = {388351, 602776, 593200, 488577, 318396};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 367;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> lowerBound = {918531, 249906, 48102, 344093, 658377, 535257};
    vector<int> upperBound = {918533, 249911, 48103, 344095, 658386, 535261};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 799;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> lowerBound = {417442, 583965, 620401, 796053, 963096, 345467, 261271, 752631, 849165, 198969, 558585, 930284, 916362, 902104, 370229};
    vector<int> upperBound = {417446, 583966, 620402, 796063, 963096, 345471, 261274, 752634, 849167, 198972, 558589, 930288, 916369, 902107, 370239};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 870962;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> lowerBound = {341350, 309044, 676894, 94612, 118726, 117772, 2479, 493144, 445031, 680505, 211883, 350980};
    vector<int> upperBound = {341358, 309048, 676895, 94614, 118728, 117777, 2489, 493153, 445039, 680514, 211891, 350982};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 141986;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> lowerBound = {806210, 870589, 111298, 726329, 947364, 77661, 988113, 648605, 494064};
    vector<int> upperBound = {806217, 870596, 111305, 726339, 947374, 77665, 988122, 648613, 494066};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 16895;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> lowerBound = {335704, 53128, 963116, 590539, 205027, 878578, 5086, 630550, 422438, 6316};
    vector<int> upperBound = {335711, 53138, 963119, 590547, 205035, 878584, 5095, 630559, 422439, 6321};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 34799;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> lowerBound = {216017, 506975, 101724};
    vector<int> upperBound = {216019, 506980, 101728};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> lowerBound = {328033, 534976, 979340, 960007, 93448, 665819, 691076, 952522, 790719, 186616, 920446, 746017, 158026, 533315};
    vector<int> upperBound = {328113, 535018, 979417, 960049, 93500, 665898, 691088, 952595, 790762, 186678, 920544, 746058, 158047, 533401};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 3770844;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> lowerBound = {629096, 972742, 306995, 121574, 421451, 503168, 958158, 542102, 673008, 92046, 315040, 626250, 988856};
    vector<int> upperBound = {629132, 972760, 307051, 121601, 421533, 503240, 958207, 542169, 673030, 92075, 315138, 626291, 988944};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 2075200;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> lowerBound = {107194, 81106, 735120, 604912, 125702, 966051, 735850, 850155, 237366, 190388, 477449, 277165, 222903, 384202};
    vector<int> upperBound = {107245, 81189, 735206, 604982, 125730, 966065, 735870, 850166, 237438, 190459, 477537, 277190, 222915, 384249};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 2748209;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> lowerBound = {750007, 790786, 74424, 216462, 754449, 255224, 920106, 901841, 390459, 486313, 496152, 917692, 492513, 970754, 925193};
    vector<int> upperBound = {750082, 790877, 74470, 216555, 754472, 255305, 920152, 901940, 390548, 486357, 496204, 917729, 492584, 970804, 925240};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 5227218;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> lowerBound = {784819, 665863, 509769, 377749, 708171, 595337, 108611, 661431, 88909, 117450, 497745, 904717, 218610, 668930};
    vector<int> upperBound = {784849, 665928, 509821, 377826, 708220, 595415, 108630, 661444, 88940, 117534, 497833, 904730, 218691, 668950};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 3029784;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> lowerBound = {201987, 89468, 221660, 707736, 865128, 27204, 454373, 141368, 175264, 241700, 887798, 501005, 744634, 728267, 231239};
    vector<int> upperBound = {202060, 89500, 221739, 707761, 865189, 27292, 454461, 141393, 175294, 241751, 887808, 501042, 744718, 728277, 231281};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 3865414;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> lowerBound = {769490, 612904, 609247, 103825, 891314, 900240, 436228, 240810, 353121, 497063, 735053, 789000, 692330};
    vector<int> upperBound = {769524, 612986, 609299, 103874, 891408, 900317, 436239, 240846, 353155, 497119, 735145, 789032, 692355};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1872511;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> lowerBound = {931027, 168521, 89715, 3878, 961708, 542837, 147691, 13631, 932041, 1496, 46369, 747033, 512340, 409559, 906490};
    vector<int> upperBound = {931083, 168599, 89805, 3965, 961758, 542915, 147755, 13682, 932137, 1582, 46441, 747124, 512399, 409631, 906585};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 4750129;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> lowerBound = {424868, 429296, 310382, 804682, 714618, 19875, 986172, 314287, 662473, 154680, 443408, 931086, 582493, 86918, 232398};
    vector<int> upperBound = {424926, 429331, 310429, 804713, 714695, 19955, 986186, 314326, 662569, 154768, 443458, 931114, 582514, 86938, 232421};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 4171242;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> lowerBound = {480547, 799834, 966873, 817221, 819882, 422752, 30367, 444246, 440690, 90628, 882833, 171915, 405481};
    vector<int> upperBound = {480610, 799898, 966887, 817319, 819968, 422846, 30394, 444323, 440771, 90655, 882867, 171951, 405570};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 2294581;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> lowerBound = {179155, 499161, 762544, 805764, 978254, 506623, 194452, 369561, 678260, 615220, 745440, 206496, 921692, 721468, 533158};
    vector<int> upperBound = {179321, 499310, 763214, 806171, 979173, 507551, 194953, 370539, 678566, 615710, 746101, 207206, 921858, 721573, 533486};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 6737147;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> lowerBound = {783623, 997157, 916082, 400237, 823559, 284217, 398651, 675823, 514964, 502726, 929379, 621560, 923712, 23517, 193249};
    vector<int> upperBound = {784582, 997435, 916647, 400381, 823992, 284511, 399223, 676219, 515442, 503289, 930348, 622190, 924276, 23624, 193615};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 6891835;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> lowerBound = {343117, 407953, 959207, 198844, 171581, 66611, 42199, 917613, 559836, 244540, 692942, 112221, 13442, 66544};
    vector<int> upperBound = {343297, 408240, 959853, 199606, 172535, 67002, 43056, 918132, 560226, 245194, 693521, 112676, 13729, 67370};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 4369791;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> lowerBound = {640356, 496592, 685025, 63590, 596841, 909812, 451671, 227604, 642752, 203960, 924815, 786768, 416312, 778863};
    vector<int> upperBound = {640646, 497500, 685446, 64324, 597457, 909972, 452590, 227900, 643663, 204230, 925147, 787650, 416829, 779405};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 5733242;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> lowerBound = {267328, 609467, 164970, 73962, 714741, 250338, 519122, 392805, 456605, 524380, 770443, 761558, 83892, 954807};
    vector<int> upperBound = {267543, 609772, 165940, 74091, 715670, 250886, 519233, 393052, 457082, 524674, 771077, 762488, 84637, 955507};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 5163651;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> lowerBound = {227669, 493216, 459411, 720235, 782007, 373684, 632256, 961409, 285364, 162022, 521907, 648492, 812599, 250586, 760939};
    vector<int> upperBound = {228373, 493729, 459781, 721046, 782727, 373897, 633058, 961825, 285509, 162274, 522238, 649060, 813573, 251147, 761321};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 6337844;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> lowerBound = {555799, 663109, 796694, 91621, 438209, 965729, 104113, 618851, 217010, 723355, 661471, 68576, 546056, 851502};
    vector<int> upperBound = {556336, 663591, 797572, 92582, 438951, 966422, 104418, 619072, 217645, 724173, 662378, 68820, 546608, 851929};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 5744993;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> lowerBound = {485387, 14041, 213524, 974412, 447224, 854563, 197466, 47590, 589957, 550077, 428419, 349404, 424378, 209020};
    vector<int> upperBound = {485648, 14537, 213908, 975000, 448093, 855235, 198112, 47810, 590707, 550902, 429005, 350383, 425317, 209725};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 4779948;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> lowerBound = {950878, 682337, 423320, 370242, 374986, 584714, 360686, 829069, 26174, 594787, 915882, 366681, 141636, 226549};
    vector<int> upperBound = {951326, 682480, 423653, 370404, 375233, 585699, 361428, 830027, 26870, 595483, 916811, 367308, 141924, 226716};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 5279424;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> lowerBound = {783833, 108829, 607906, 741108, 416803, 690782, 520143, 377060, 991664, 87830, 127999, 331355, 290128, 677158, 650237};
    vector<int> upperBound = {784456, 109014, 608632, 741318, 417785, 690895, 521118, 377806, 992420, 88427, 128176, 332007, 290298, 677871, 650576};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 5962317;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> lowerBound = {17422, 29202, 869368, 938444, 977076, 418229, 664521, 130243, 2787, 32501, 454656, 824176, 839522};
    vector<int> upperBound = {767176, 707900, 932463, 953888, 988458, 650543, 711959, 621343, 762857, 824514, 593492, 997584, 883706};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 10386883;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> lowerBound = {444561, 610971, 777845, 657713, 340863, 21870, 142267, 965948, 808909, 908493, 125533, 842096, 172979, 354612};
    vector<int> upperBound = {905491, 707168, 832600, 823539, 699188, 831481, 508572, 998744, 933759, 931567, 733133, 964699, 202017, 890427};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 10940516;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> lowerBound = {853707, 869383, 496552, 752551, 306931, 819053, 402968, 239874, 783257, 217419, 560262, 890596, 719666};
    vector<int> upperBound = {932399, 883787, 999024, 994264, 723086, 900250, 896250, 956311, 856296, 672766, 843452, 918643, 945296};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 11304406;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> lowerBound = {233469, 536227, 862195, 446673, 60772, 795171, 589289, 27831, 775819, 259558, 196931, 946562, 592829};
    vector<int> upperBound = {282061, 927005, 987936, 816197, 629271, 932391, 981509, 462044, 992665, 982909, 503236, 971139, 854840};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 10295373;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> lowerBound = {822059, 198353, 562576, 123314, 787664, 758718, 224042, 390821, 111373, 904750, 912907, 502586, 72090, 572312, 711249};
    vector<int> upperBound = {941980, 839561, 827082, 590563, 938497, 964706, 272662, 667575, 752787, 998760, 978156, 704565, 291270, 937412, 826905};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 11460392;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> lowerBound = {877065, 927423, 92023, 918732, 295910, 212325, 76621, 333871, 85651, 315239, 375235, 169249, 758977, 177780};
    vector<int> upperBound = {998659, 989799, 446518, 997296, 415419, 662550, 736078, 466576, 512546, 906836, 846075, 664160, 776125, 244282};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9586299;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> lowerBound = {153777, 629792, 870364, 963356, 393480, 926417, 123336, 102332, 372103, 475383, 23309, 933334, 284249, 675446};
    vector<int> upperBound = {292647, 672419, 922726, 975874, 465837, 975055, 715788, 438615, 826998, 819290, 887746, 991758, 354629, 779638};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 10095712;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> lowerBound = {515995, 518377, 35315, 472611, 187648, 610846, 196258, 744577, 99018, 427298, 843432, 190704, 831209};
    vector<int> upperBound = {859515, 717231, 324465, 698217, 460207, 685435, 985142, 851098, 655086, 619476, 987107, 815325, 917284};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9540274;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> lowerBound = {644764, 614460, 718449, 545135, 695991, 901889, 548404, 890164, 218201, 620163, 542056, 736496, 651017, 983008, 817021};
    vector<int> upperBound = {958996, 777539, 764408, 832415, 983391, 999365, 931834, 916779, 897808, 902143, 622779, 935789, 927826, 997153, 914116};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 13144141;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> lowerBound = {358630, 165126, 804877, 46841, 802425, 262451, 710675, 235561, 752869, 761221, 748508, 929276, 842134, 338841, 84023};
    vector<int> upperBound = {563457, 733582, 952703, 652768, 923335, 525813, 769424, 776394, 993198, 854433, 838822, 987837, 878780, 545066, 183106};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 11131878;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> lowerBound = {9000, 1, 10};
    vector<int> upperBound = {9000, 2, 20};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> lowerBound = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14991000;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> lowerBound = {1, 2};
    vector<int> upperBound = {60, 60};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> lowerBound = {195989, 839442, 500900, 27466, 572588, 531327, 843043, 657612, 842158, 109927, 314065, 286080, 140263, 834620, 600238};
    vector<int> upperBound = {195996, 839445, 500908, 27475, 572588, 531328, 843049, 657613, 842159, 109934, 314074, 286083, 140270, 834627, 600245};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1097366;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> lowerBound = {9008, 9010};
    vector<int> upperBound = {9030, 9015};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> lowerBound = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 133, 14, 15};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14991000;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> lowerBound = {9000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14865014;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> lowerBound = {173, 2, 1, 2, 1, 37, 11, 1, 1, 56, 1, 5, 1, 7, 124};
    vector<int> upperBound = {999003, 987050, 1000000, 876666, 936111, 778222, 781333, 947439, 931678, 835000, 791000, 835147, 888789, 777456, 666123};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 13022017;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> lowerBound = {20102, 21414, 1232, 1359, 32351, 19435, 30736, 17371, 11999, 15510, 28074, 21651, 10296, 3178, 18297};
    vector<int> upperBound = {43097, 34781, 27555, 25041, 41590, 25754, 35243, 49803, 27354, 15552, 37077, 31583, 41376, 30538, 38375};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 495719;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> lowerBound = {9005, 9030, 95000, 905300, 90040, 1000000, 22000, 94200, 94200, 90040, 90001, 90001, 9000, 9000, 900034};
    vector<int> upperBound = {900900, 900000, 1000000, 1000000, 105000, 1000000, 1000000, 800000, 600000, 1000000, 1000000, 1000000, 1000000, 800000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 13096900;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> lowerBound = {8986, 1, 9255, 9435, 4979, 11570, 5318, 5563, 10593, 13597, 10377, 9311, 12675, 2, 7438};
    vector<int> upperBound = {723319, 9368, 545971, 387793, 938001, 839382, 525629, 518949, 202239, 437546, 306317, 400360, 604182, 973540, 730282};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 8133878;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> lowerBound = {9000, 1000000, 888888, 111111, 222222, 333333, 444444, 555555, 123434, 1, 3546, 99999, 3, 14, 19};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 900000, 1000000, 1000000, 1000000, 1000000, 1000000, 20};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 13891020;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> lowerBound = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000};
    vector<int> upperBound = {2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 126000;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> lowerBound = {100, 101, 200, 301, 508, 88, 118, 182, 990, 9000, 9001, 9323, 23433, 23421, 123423};
    vector<int> upperBound = {1000000, 1000000, 1000000, 9000, 1000000, 1000000, 999999, 1000000, 923422, 900122, 912345, 998733, 928332, 234444, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 12897397;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> lowerBound = {1, 1, 1, 1, 1, 1, 11, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 999999, 978965, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14969964;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> lowerBound = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> upperBound = {999950, 999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14990355;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> lowerBound = {9001, 9001, 9001, 9001, 9001, 9001, 9001, 9001, 9001, 9001, 9001, 9001, 9001, 9001, 9001};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14991000;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> lowerBound = {9000, 100000, 800000};
    vector<int> upperBound = {90000, 200000, 900000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 661002;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> lowerBound = {9000, 1, 2, 3, 4, 5, 10};
    vector<int> upperBound = {9000, 1, 2, 3, 4, 5, 20};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> lowerBound = {9000, 9010, 9020, 9030, 9040, 9050, 9060, 9070, 9080, 9090, 9100, 9110, 9120, 9130, 9140};
    vector<int> upperBound = {10000, 10010, 10020, 10030, 10040, 10050, 10060, 10070, 10080, 10090, 10100, 10110, 10120, 10130, 10140};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 109058;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> lowerBound = {1};
    vector<int> upperBound = {1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 991000;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> lowerBound = {14595, 41226, 93016, 116912, 122421, 176209, 249228, 252239, 357100, 536211, 540525, 628605, 868812, 987944, 994686};
    vector<int> upperBound = {14865, 44665, 93241, 126111, 176208, 187652, 251378, 263717, 360304, 554034, 548001, 642144, 876927, 1000000, 997140};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 6027619;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> lowerBound = {9000, 1, 10, 18, 1, 10, 18, 1, 10, 18, 1, 10, 18, 1, 10};
    vector<int> upperBound = {9000, 5, 15, 23, 5, 15, 23, 5, 15, 23, 5, 15, 23, 5, 15};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 192;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> lowerBound = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 999999};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14990999;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> lowerBound = {1, 12, 13, 14, 15, 16, 997, 98, 99, 98, 99, 99, 33, 334, 555};
    vector<int> upperBound = {900000, 900000, 900000, 900000, 900000, 900000, 900000, 900000, 900000, 900000, 900000, 900000, 900000, 900000, 900000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 13491000;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> lowerBound = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14991000;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> lowerBound = {1, 10000};
    vector<int> upperBound = {1000000, 10005};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1001005;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> lowerBound = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> upperBound = {99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1490985;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> lowerBound = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> upperBound = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 2391000;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> lowerBound = {3};
    vector<int> upperBound = {9003};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> lowerBound = {9000, 6666, 3333, 7876, 7657, 9000};
    vector<int> upperBound = {9001, 9000, 9000, 9000, 9000, 9000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 44004;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> lowerBound = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 12, 14, 15};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14991000;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> lowerBound = {9002, 9001};
    vector<int> upperBound = {9002, 9001};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> lowerBound = {1, 1, 1};
    vector<int> upperBound = {1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 2991000;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> lowerBound = {9000, 101, 105};
    vector<int> upperBound = {9000, 110, 106};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> lowerBound = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> upperBound = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1490001;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> lowerBound = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> upperBound = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1491000;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> lowerBound = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> upperBound = {999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 13990986;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> lowerBound = {99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999, 99999};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14900002;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> lowerBound = {999967, 999667, 999790, 999224, 999862, 999758, 999668, 999800, 999465, 999862, 999173, 999868, 999266, 999125, 999148};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 69425;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> lowerBound = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> upperBound = {999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 9990990;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> lowerBound = {1, 1251, 2501, 5001, 7501, 10001, 125001, 250001, 500001, 625001, 750001, 875001, 900001};
    vector<int> upperBound = {1250, 2500, 5000, 7500, 10000, 125000, 250000, 500000, 625000, 750000, 875000, 900000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 5042250;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> lowerBound = {1066, 1055, 1062, 1073, 1080, 1064, 1064, 1089, 1019, 1092, 1054, 1061, 1034, 1027, 1032};
    vector<int> upperBound = {880543, 979681, 661162, 111481, 30367, 970173, 435905, 162684, 374059, 588060, 390438, 913584, 264589, 394196, 633246};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 7781168;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> lowerBound = {9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14991000;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> lowerBound = {9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000};
    vector<int> upperBound = {9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> lowerBound = {10000, 9000};
    vector<int> upperBound = {10000, 11000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 4001;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> lowerBound = {90001};
    vector<int> upperBound = {90001};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> lowerBound = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> upperBound = {1000000, 999999, 999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 999990, 999989, 999988, 999987, 999988};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14990897;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> lowerBound = {9500, 9501, 9503};
    vector<int> upperBound = {9505, 9502, 9507};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> lowerBound = {9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000, 9000};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 11991000;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> lowerBound = {8900, 1, 1, 50, 50, 100, 100};
    vector<int> upperBound = {9000, 100, 100, 150, 150, 200, 200};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> lowerBound = {10, 9010, 1000000, 1000000, 1000000, 1000000};
    vector<int> upperBound = {20, 9020, 1000000, 1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 203;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> lowerBound = {60, 120, 240, 480, 960, 1920, 3840, 7680, 15360, 30720, 61440, 122880, 245760, 491520, 983040};
    vector<int> upperBound = {60, 120, 240, 480, 960, 1920, 3840, 7680, 15360, 30720, 61440, 122880, 245760, 491520, 983040};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 32617;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> lowerBound = {9001, 9002, 10000};
    vector<int> upperBound = {15000, 9003, 15000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 27001;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> lowerBound = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14991000;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> lowerBound = {9001, 9002, 9050};
    vector<int> upperBound = {9010, 9005, 9100};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 197;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> lowerBound = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384};
    vector<int> upperBound = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 23767;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> lowerBound = {80000, 90000, 110000};
    vector<int> upperBound = {130000, 100000, 120000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 200003;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> lowerBound = {9000, 1, 1, 1, 1, 1, 300};
    vector<int> upperBound = {9001, 1, 1, 1, 1, 1, 500};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 213;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> lowerBound = {500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14991000;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> lowerBound = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 900000, 999000};
    vector<int> upperBound = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 900000, 999000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 14890000;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> lowerBound = {10000, 11000};
    vector<int> upperBound = {15000, 12000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 11002;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> lowerBound = {9001, 9005};
    vector<int> upperBound = {9010, 9006};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> lowerBound = {9001, 19001, 29001, 39001, 49001, 59001, 69001, 79001, 89001, 99001, 10001, 20001, 30001, 40001, 50001};
    vector<int> upperBound = {9500, 19500, 29500, 39500, 49500, 59500, 69500, 79500, 89500, 99500, 10500, 20500, 30500, 40500, 50500};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 539045;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> lowerBound = {8995, 8991, 8991, 9005, 8997, 9001, 8992, 9002, 8991, 9008, 8997, 9001, 8999, 8997, 9005};
    vector<int> upperBound = {9000, 8998, 8992, 9007, 9003, 9005, 8995, 9004, 8997, 9013, 9003, 9009, 9001, 9006, 9009};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 1260;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> lowerBound = {661397, 450280, 69413, 622139};
    vector<int> upperBound = {772690, 843467, 300873, 836437};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 2534649;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> lowerBound = {10000, 20000};
    vector<int> upperBound = {10000, 20000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
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
    vector<int> lowerBound = {10000, 15000};
    vector<int> upperBound = {20000, 17000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 22002;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> lowerBound = {20, 95, 9000};
    vector<int> upperBound = {100, 96, 9000};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 163;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> lowerBound = {32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288};
    vector<int> upperBound = {32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 32486;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> lowerBound = {9000, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384};
    vector<int> upperBound = {9000, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384};
    Over9000Rocks* pObj = new Over9000Rocks();
    clock_t start = clock();
    int result = pObj->countPossibilities(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    int expected = 16383;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22840511&rd=14731&pm=11855
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
vector<int> low, high;
int n;
 
vector<pair<int, int> > events;
 
void dfs(int at, int l, int r) {
  if (at == n) {
    l = max(l, 9001);
    if (l <= r) {
      events.push_back(make_pair(l, 1));
      events.push_back(make_pair(r + 1, -1));
    }
    return;
  }
  dfs(at + 1, l, r);
  dfs(at + 1, l + low[at], r + high[at]);
}
 
class Over9000Rocks {
public:
  int countPossibilities(vector<int> lowerBound, vector<int> upperBound) {
    low = lowerBound;
    high = upperBound;
    n = low.size();
    events.clear();
 
    dfs(0, 0, 0);
 
    int ans = 0;
    sort(events.begin(), events.end());
 
    int cnt = 0;
    for (int i = 0; i < events.size(); ++i) {
      if (i > 0 && cnt > 0) {
        ans += events[i].first - events[i - 1].first;
      }
      cnt += events[i].second;
    }
 
    return ans;
  }
};
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/