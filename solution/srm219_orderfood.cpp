/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3115
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

class OrderFood {
public:
    int selectEntrees(vector<int> entrees, vector<string> favorites);
};

int OrderFood::selectEntrees(vector<int> entrees, vector<string> favorites) {
    int ret;
    return ret;
}


int test0() {
    vector<int> entrees = {100, 150, 300, 425, 200};
    vector<string> favorites = {"0 1 3", "0 2 3 4", "0 3 4"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 450;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> entrees = {100, 200, 300, 400};
    vector<string> favorites = {"0 1", "1 2", "0 1 2"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> entrees = {10, 20, 40, 80, 160, 320, 640};
    vector<string> favorites = {"0 2 5", "0 2 6", "0 3 5", "1 3 6", "1 4", "1 4"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 310;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> entrees = {100, 200, 300, 400};
    vector<string> favorites = {"1 1"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
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
    vector<int> entrees = {1000, 90, 80, 70, 60, 50, 40};
    vector<string> favorites = {"0 1 2", "0 00 000 3 4", "0 5 6", "0 1 4", "0 2 5", "0 3 6"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 390;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> entrees = {10124, 540045, 236111, 977928, 199927, 379085, 743650, 631339, 961617, 178242, 343492, 89869, 61858, 700029, 560602, 341127, 850320, 957934, 167013, 631513};
    vector<string> favorites = {"4 16 16 2 18 10 13 14 4 18", "12 4 19 1 1 12 18 7 18", "6 15 19 13", "5 10 5 16 15 14 15 8", "13 2 15 8 5", "8 2 15 3 1", "9 18 2"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 1792343;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> entrees = {758855, 684904, 65878, 383100, 238501, 688593, 976930};
    vector<string> favorites = {"1 6 1 1 4 5 4 3 1"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 621601;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> entrees = {297575, 496052, 913012, 312460, 100628, 964089, 127307, 64351, 910628, 587069, 349433, 374779, 298924, 713440};
    vector<string> favorites = {"5 11 11 7 12 7 8", "9 3 11", "12 1 1 9 12 4 3 5 3", "4 8 5 8 8 1", "6 11 12 9 4 1 10 2 13", "12 6 4 2 1 10 2 8 5 10", "4 4 9 10 7", "13 11 5 2 11 4", "7 11 2 6 7 4 1", "3 10 5 7"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
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
    vector<int> entrees = {686106, 666154, 145627, 135857, 816715, 6990, 175118, 141376, 768176, 498557, 912576, 542529, 974141, 902390, 885892, 318137, 810649, 152876, 104406, 2683, 986745, 185378};
    vector<string> favorites = {"13 4 1 2", "21 3 10", "18 8 8 17 6 19 16 17", "16 18 17 11", "3 15 15 2 13 21 1 12", "11 1 2 14", "17 21 13 11", "11 9 11 14 9 2 2 13", "18 13 6 2", "2 21 19 16 12 8 10 10", "11 17 12 2 6", "2 21 3 15", "15 17 19 20 17 5 10 1", "6 17 9 5 5 4 17 11 17", "5 10 18 14 4 11 21 10 5 11"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> entrees = {863469, 677644, 105419, 398691, 226578, 307308, 309443, 757567, 487107, 764247, 473050, 913475, 329198, 558531, 378528, 582052, 418439, 255895, 641172, 979911};
    vector<string> favorites = {"18 7 18 5 17 19 2 3 10 9", "15 12 3 11 2 17 8 10", "15 3 14", "10 4 3 10 14 12 12", "5 13 2 2 4 2", "4 19 15", "19 18 11 16", "3 6 2 10 16 3 18 2 1", "4 17 10 7 5 16 19 5 14 4", "18 12 13 9 8 18 12 17"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> entrees = {837557, 162056, 869649, 141097};
    vector<string> favorites = {"3 1 1 2", "3 3 2 1 2 1 3 3", "1 1 1 2 1 2", "2 3 1 3", "3 3 2 3 1 1 2 1 1", "2 3 3 1 1 3 2", "1 3 2 2 2 3 2 1"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 1031705;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> entrees = {100806, 155085, 104735, 105823, 989947, 362905, 105542};
    vector<string> favorites = {"3 2 6 4 3 4 5 5 4 5", "5 1 5 3 4 2 6", "6 2 1 5 3 1 2 2 2", "4 6 5 2 1 4 4 1 4", "5 1 3 5 2 3 2", "1 2 1 1 3 2 1 6", "6 2 1", "5 3 1", "6 2 2 1 2 2 3", "4 6 5 2 1 5", "1 5 6 6 5", "5 6 6 5 5 1", "4 1 6"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
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
    vector<int> entrees = {390820, 696358, 434469, 693463, 183998, 847342, 639964, 351636, 635505, 464745, 121983, 152894, 739787, 877730, 955537, 684701, 296953, 998468, 466616, 781591, 365903, 962760, 310310, 290792};
    vector<string> favorites = {"5 6 12", "2 8", "0 11", "2 10", "4 6", "4 9", "1 10", "4 10 14 16", "2 10 12 16 18 22", "4 11", "0 7", "3 9", "0 10"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 5613177;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> entrees = {207080, 533895, 250410, 697485, 503904, 829215, 57077, 449601, 981197, 446407, 308283, 637634, 842146, 838415, 457701, 463062, 794819, 943530, 502951, 495524, 442793, 13523, 501223, 125952};
    vector<string> favorites = {"5 10", "4 8 12", "3 9", "1 7", "3 9", "2 6", "2 9", "4 6 14 17 19 21", "3 10", "2 9 13"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 4918423;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> entrees = {789751, 177118, 772035, 903727, 196821, 940526, 777954, 247543, 330656, 293171, 707567, 746057, 223055, 702156, 472069, 728186, 699763, 252745, 128161, 86326, 896094, 101496, 518677, 354474};
    vector<string> favorites = {"0 7", "2 6", "1 9", "4 7", "2 10", "3 11", "1 7 13", "0 11"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 5611744;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> entrees = {397508, 144189, 812290, 21059, 943030, 969781, 199039, 520238, 717224, 82013, 807898, 106990, 966978, 552724, 985853, 52861, 940154, 450823, 88677, 603031, 963718, 607912, 184059, 866933};
    vector<string> favorites = {"4 9", "0 7", "2 8", "3 10", "0 6", "0 10 14 15 19 23", "4 11", "0 9", "5 9 12", "4 9", "5 11", "5 8 13", "0 8", "1 7 13", "1 6"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 5721259;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> entrees = {287575, 567068, 576916, 689888, 860922, 5473, 36359, 237586, 689751, 353215, 740449, 133372, 228225, 310304, 401651, 802355, 513513, 827731, 979498, 928433, 806419, 185585, 446219, 157421, 482004, 321184, 802363};
    vector<string> favorites = {"2 11 9 8", "18 3 26 14", "26 11 20", "26 12 9 11 20 24 25 17 20 24", "11 13 20 17 12 6", "6 1 23 21 20 5 14", "10 23 8 5 5 15", "26 25 23 15 26 10 20 13 11 16", "16 13 21 25 6 3", "11 1 25 11 17 23 8 26 6 8", "22 12 8 22", "8 17 12 18 9", "3 26 14 10 14 10 7", "23 3 14 4"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
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
    vector<int> entrees = {336418, 686163, 422757, 542992, 129736, 714656, 361936, 901481, 776192, 859516, 924669, 471339, 542449, 383257, 135919, 740175, 278176, 799365, 267721, 454389, 56678, 950432, 604803, 322293, 65515, 336274, 460215, 967239, 747131, 692061};
    vector<string> favorites = {"2 5 14 19 21 27", "0 5 13 15 21 28 21 29 23", "3 5 10 18 22 24 21 20 26", "1 9 11 15 29 20 21 21 29 29", "1 9 13 17 20 24 26 27 24 29 22", "4 9 10 18 27 27 26 29", "0 6 13 15 26 27 23 20 29", "4 7 10 16 24 24 23 21 23 21", "1 6 12 18 25 26 20", "2 5 10 16 21 21 21 24 29 29 27", "4 5 11 19 29 28 24 25 26 20 26", "1 8 12 18 21 21 28 21 23 24 21", "4 9 13 19 26 28 21 29 23", "3 7 11 17 20 20"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 3654478;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> entrees = {140552, 490985, 794117, 758929, 429372, 160904, 425231, 192979, 395044, 710419, 687086, 926212, 888950, 397892, 367097, 908884, 122819, 400631, 495843, 361759, 496858, 330514, 800190, 416735, 677878, 999612, 406421, 7466, 927414};
    vector<string> favorites = {"2 5 13 15 28 25 23 25 20 20", "0 6 10 19 23 24 27 26 24 20", "3 7 12 15 27 28 20 28", "2 6 14 15 23 22 21 28 23", "4 8 13 16 24 24 20 25 22 20", "1 9 11 18 25 20 20 25", "0 6 12 19 27 20", "1 6 10 17 22 20 20 27 27", "0 6 12 17 21 23 22 28", "0 6 14 16 26 27 20 27 23", "3 7 10 16 25 22 28 21 26 24", "3 5 13 18 25 27 23 20 24", "2 5 13 17 27 26 22 24 21 20", "1 8 11 15 26 22 28 20 28 26"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 3307385;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> entrees = {155317, 586400, 151243, 569934, 911701, 280383, 429892, 902201, 660261, 48618, 333438, 816809, 290707, 284478, 494266, 979100, 119506, 101061, 385581, 531960, 30507, 909317, 587036, 298935, 865569, 246171, 300350, 237361, 65183, 852652};
    vector<string> favorites = {"0 7 10 15 25 29", "3 8 12 19 29 21 23", "3 5 12 17 26 29 25 24 24 23 28", "1 7 12 16 25 25 20 22 27 28", "1 6 11 15 25 22 26 27 27 20", "4 6 11 17 27 28 22 23", "0 7 14 16 28 21 27", "1 9 14 16 21 27 23 20 22 26 29", "3 8 12 16 22 24 27 26 22", "4 9 12 16 21 20 22 25 21", "3 9 12 15 23 29", "2 5 10 17 24 24 21 26 20", "0 6 12 16 20 29 27 25 21 27 21"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 2680067;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> entrees = {913536, 423559, 804318, 617058, 251288, 318751, 643399, 775840, 996865, 666249, 98222, 169428, 791930, 603563, 568750, 160433, 861154, 519183, 702017, 370252, 652839, 130699, 157751, 382199, 729547, 812929};
    vector<string> favorites = {"3 9 10 15 25 23 25 21 21 24", "3 5 10 16 21 24", "1 9 10 16 21 24 25 23 20", "3 7 10 18 23 22 24", "3 5 10 18 21 22 22 24 25 21 22", "2 6 14 15 23 21 25 25 22 25", "0 9 14 19 20 25 25", "1 7 12 19 24 25 22 23 24", "1 8 14 19 24 25 22 21 24 24 23", "1 7 13 17 22 23 20", "0 6 11 15 20 20", "1 9 11 18 21 23 20 25", "3 6 11 15 24 25 24 20 22 20 20", "0 8 12 17 20 23 21 23 21 22", "1 5 11 15 21 25 23 25 21"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 4844932;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> entrees = {388660, 819843, 525500, 598409, 247543, 384063, 660234, 962030, 103210, 227461, 148838, 689823, 589024, 12453, 316568, 868516, 257290, 644616, 759190, 773317, 94888, 725819, 983599, 946036, 288888, 257343, 298451, 523209, 242185, 593008};
    vector<string> favorites = {"4 8 12 15 20 23 26 29 22 22 26", "0 9 13 15 20 23 22 21 24 28", "4 7 10 16 21 29 20 29 21", "0 9 10 17 21 23 20 27 21 28 24", "3 8 12 18 21 23 25 23", "1 8 12 16 26 23 28 27 22 29 26", "1 7 13 17 24 20 29 26 22 24", "2 6 10 15 29 28 22", "1 5 11 16 20 23 27 20 23 20 25", "3 5 11 15 20 24 26 22 28", "3 5 13 15 25 28 24", "0 5 13 19 29 25 27", "2 5 12 18 24 26 29 25 24", "4 7 10 17 22 29 26 20", "3 9 12 15 20 20"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 3579021;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> entrees = {189355, 873385, 560491, 219084, 271075, 469291, 499581, 471394, 555404, 742523, 551223, 952453, 454270, 269802, 547755, 477750, 583700, 15545, 158426, 352035, 91949, 347489, 842527, 509939, 237622, 302315, 52510, 906601, 217802, 101277};
    vector<string> favorites = {"4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22", "3 6 12 18 25 24 20 20", "4 6 10 18 27 24 27 29 26", "2 8 10 17 22 25 26", "0 8 13 18 27 20 22 22", "0 5 14 15 26 27 21", "4 9 14 16 23 29 29 20 29 20 21", "1 7 14 18 20 27 23", "0 7 13 17 26 21 22", "3 5 12 15 22 28 25 21 20", "1 9 13 17 25 24 25 28 28 20 26", "3 8 13 19 26 23 25 28", "2 7 10 16 24 24", "4 7 13 17 25 27 20"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> entrees = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    vector<string> favorites = {"0 1", "0 2", "0 3", "0 4", "0 5", "0 6", "0 7", "0 8", "0 9", "0 1", "0 2", "0 3", "0 4", "0 5", "0 6"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> entrees = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> favorites = {"0 1 2", "1 2 3", "2 3 4", "3 4 5", "4 5 6", "5 6 7", "6 7 8", "7 8 9", "8 9 10", "9 10 11", "10 11 12", "11 12 13", "12 13 14", "13 14 0", "14 0 1"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> entrees = {30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<string> favorites = {"0 1 2 3", "0 1 2 3", "4 5 6 7", "4 5 6 7", "8 9 10 11", "8 9 10 11", "12 13 14 15", "12 13 14 15", "16 17 18 19", "16 17 18 19", "20 21 22 23", "20 21 22 23", "24 25 26 27", "24 25 26 27", "28 29"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 220;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> entrees = {641848, 970314, 64255, 814905, 504435, 906607, 239979, 301749, 136570, 998474, 540318, 691264, 345563, 861235, 85593, 251263, 368597, 12190, 925377, 720333, 289311, 179100, 482675, 426960, 665299, 420154, 37438, 51303, 713206, 742855};
    vector<string> favorites = {"0 1 2 3 4 6 7 9 10 11 12 13 14 15 16 17 18 19 21", "0 1 2 3 5 6 7 8 9 11 12 13 14 15 16 18 20 21 22", "0 1 3 4 5 6 7 9 10 11 13 17 18 19 20 21 23 24 25", "1 2 4 5 6 7 8 9 10 11 12 13 14 15 17 18 19 22 23", "0 1 3 4 7 9 11 12 13 14 16 17 18 19 20 21 22 23", "0 1 2 3 4 7 8 9 11 13 15 17 18 19 21 22 24 25 26", "0 1 3 5 6 7 8 9 10 11 12 14 18 19 20 21 22 23 24", "0 2 4 5 6 8 9 10 11 13 14 15 16 19 20 21 22 23 24", "0 1 2 3 4 5 6 7 8 9 11 12 13 14 15 16 17 19 20 21", "0 1 2 3 5 6 7 8 9 10 11 12 14 15 16 17 18 21 22", "0 2 5 6 8 10 12 14 17 19 20 21 23 24 25 27 28 29", "2 3 4 5 6 7 9 10 11 12 13 14 16 17 19 20 22 23 24", "0 1 5 6 8 9 10 11 12 14 15 16 17 19 20 21 22 23", "1 3 4 5 6 8 9 10 11 13 14 15 16 17 18 22 23 28 29", "0 1 2 3 5 6 7 12 13 15 16 17 19 20 21 22 23 24 26"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> entrees = {146934, 627509, 532739, 543828, 139162, 543420, 651406, 841500, 776720, 295864, 16332, 94160, 764653, 498158, 254930, 681145, 179024, 526308, 624404, 368450, 801015, 940271, 434515, 777120, 140285, 930150, 851619, 973196, 590260, 628471};
    vector<string> favorites = {"0 1 3 5 9 12 13 18 19 21 23", "1 3 5 6 11 14 15 16 18 20 24 25 26 28 29", "1 2 3 4 6 11 14 15 17 28", "1 6 8 9 11 13 17 23 28 29", "2 3 5 6 8 9 10 11 13 14 18 19 20 21 25 27 28 29", "1 3 4 5 6 7 8 10 12 13 14 15 19 20 22 27", "0 3 7 11 13 16 23 25 26 28", "0 1 4 6 9 10 12 13 17 19 20 27 28 29", "0 4 5 7 8 13 14 17 24 28 29", "2 5 6 9 13 18 20", "1 9 11 14 16 18 19 20 23 24 27 29", "0 1 2 3 7 8 11 13 20 22 25 28", "1 2 9 11 13 18 21 24 25 28", "3 4 6 9 12 15 24 25 26 27 28 29", "0 3 4 6 7 8 9 10 12 14 19 20 21 27"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> entrees = {285530, 606305, 592272, 932852, 837286, 929279, 153657, 256928, 718098, 446551, 475273, 22308, 537580, 967881, 463053, 29074, 576245, 475928, 722222, 949201, 760536, 316890, 520314, 908065, 66632, 513673, 694925, 511548, 585205, 399480};
    vector<string> favorites = {"0 3", "2 15 16 17 18 29", "5 7 10 16", "0 9 14 22 28", "3 4 12", "2 11 25", "6 20 22", "0 13", "11 13 19", "19", "4 5 14", "0 10 15 23", "6 25 26", "0 18", "8 10"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> entrees = {461737, 533322, 867573, 369759, 133061, 683215, 853267, 860480, 79807, 119070, 635885, 361164, 988641, 530488, 401925, 340106, 317655, 349231, 488678, 594762, 422311, 443349, 115441, 468514, 338893, 839126, 789382, 854612, 417655, 278882};
    vector<string> favorites = {"3 4 13 26", "15", "5 8 20", "4 6 12 20", "9 17 19 25 27", "5 11 14 15", "9 11 27", "8 10 15", "5 7 16", "0 7 21 25", "1 10 15 16 18 20 29", "0 3 16 18 29", "0 1 3", "12 14 19 24 25", "9 13 28"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> entrees = {548490, 356108, 947257, 780789, 878561, 636722, 218460, 441794, 388777, 209886, 966163, 438378, 416078, 956368, 922069, 585010, 761065, 128727, 340794, 112564, 212822, 496748, 987690, 537926, 270516, 93531, 102567, 46139, 586104, 918812};
    vector<string> favorites = {"0 2 3 4 6 7 8 9 14 16 21 26 27", "1 6 9 11 12 13 17 18 26 27 28 29", "3 7 14 16 20 21 29", "1 3 4 6 7 10 13 15 16 17 19 27 29", "0 2 5 8 13 14 15 16 17 21 23 26", "4 8 13 15 16 23 24 25 28 29", "2 4 5 7 13 15 16 17 23 24 25 27 29", "0 3 5 6 9 10 15 18 19 21 24 25 29", "0 2 3 5 7 9 14 15 16 21 22 23 28 29", "0 3 5 10 14 18 20 21 22 26 27", "7 11 12 13 15 17 18 20 22 25 27 29", "2 4 5 7 17 18 19 20 21 24 29", "0 4 9 11 13 16 17 20 24 26 27", "1 2 10 11 12 14 17 18 20 21 25", "2 3 6 10 11 16 21 24 26 29"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 2071067;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> entrees = {425638, 5165, 281606, 45107, 764318, 693220, 443883, 359987, 597541, 679314, 872515, 245494, 212197, 54979, 732321, 274526, 956892, 383292, 204852, 641046, 136344, 552167, 380888, 124949, 174417, 505705, 821560, 89984, 819491, 343952};
    vector<string> favorites = {"1 2 6 7 11 12 20 21 27 29", "0 2 5 7 10 12 14 16 17 20 21 22 23", "0 1 4 8 10 11 13 14 17 18 19 21 24 25 26", "4 5 8 13 15 18 19 20 22 24 27 29", "3 4 5 6 9 10 11 12 13 14 15 17 20 23 25", "1 2 4 5 6 10 14 17 18 19 20 21 25 26 29", "0 1 2 4 6 11 13 14 17 19 20 22 25 26", "5 6 9 15 16 17 19 21 22 23 25 28 29", "1 2 4 6 9 11 12 13 15 16 17 18 19 21 27 29", "1 2 4 5 6 7 9 13 14 18 28 29", "0 4 5 8 14 15 17 20 21 23 29", "0 2 4 5 6 7 8 9 10 19 22 26 28", "0 1 2 3 4 5 8 9 10 14 18 19 28", "0 2 4 5 7 9 10 12 13 20 21 22 26 28 29", "0 1 3 5 6 7 12 19 20 22 24 27 29"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> entrees = {385317, 719711, 427154, 377942, 159105, 267081, 876215, 827274, 608641, 537388, 286699, 785621, 417987, 802138, 16552, 609655, 632392, 103194, 776160, 246925, 739720, 294013, 292329, 868847, 173808, 223247, 596294, 852793, 516025, 613993};
    vector<string> favorites = {"6 7 8 9 10 11 12 16 24 28 29", "4 5 9 12 13 19 21 22 25 26 29", "0 3 10 13 18 20 22 24 25 26 28", "0 3 4 6 8 10 11 12 14 18 25", "1 2 3 9 11 15 17 18 22 23 26 28 29", "2 4 7 8 13 15 19 22 24 27", "1 3 6 7 8 12 15 19 20 22", "3 7 8 9 10 11 13 14 15 16 19 21 22 27", "1 4 5 6 10 11 12 15 21 24 25 29", "0 6 7 13 18 23 25 26", "0 1 2 3 8 10 13 14 15 16 22 23 24 27 29", "1 3 5 12 13 14 15 17 19 20 23 29", "0 2 3 7 9 10 13 15 17 19 22 24 26 27 28 29", "1 2 5 14 15 17 18 20 21 23 24 25 28", "2 4 6 7 8 11 13 16 18 19 20 22 26"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> entrees = {455621, 432329, 467315, 526179, 914654, 362598, 405596, 60109, 177648, 160922, 35976, 739998, 271720, 743239, 479748, 963094, 251649, 64556, 972173, 10501, 288762, 313106, 506463, 38346, 604332, 237598, 165788, 762805, 473802, 510535};
    vector<string> favorites = {"0 1 2 3 4 5 12 15 16 19 21 25 27 28", "1 2 3 9 11 12 13 14 19 20 21 22 23 24 28", "0 1 3 5 7 9 10 13 14 17 19 20 21 22 27 28", "0 1 2 4 5 10 12 13 14 15 17 19 23 26", "3 5 6 7 9 10 11 13 14 19 20 22 23 26 27 28", "3 7 8 10 11 14 15 16 17 18 19 21 25 26", "0 1 3 5 7 8 10 11 12 13 15 17 19 22 23 24 25 26", "6 8 10 16 18 19 23 27 29", "3 4 7 8 9 11 14 16 20 21 22 23 26 28 29", "0 1 4 5 7 8 9 13 17 19 20 22 24 27 28 29", "1 2 4 5 6 7 8 9 11 12 13 17 19 21 22 23 24 25 28", "0 1 2 3 4 6 11 15 16 20 23 24 25 26 27 28", "1 2 3 4 5 7 9 12 14 17 18 19 21 22 24 25 27 28 29", "0 2 3 6 7 9 17 18 19 20 23 25 26 27 29", "1 3 4 5 6 8 10 13 14 16 20 24 27 28 29"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> entrees = {939127, 1283, 180760, 106498, 307924, 341286, 436539, 933620, 267363, 402503, 388600, 843962, 245125, 179791, 489690, 367934, 326811, 408962, 513416, 821093, 844257, 875146, 745256, 413237, 219620, 709804, 918702, 695377, 264801, 37532};
    vector<string> favorites = {"14 15 21", "3 7 16", "12 17", "1 21 24 25 27", "2 18 21 22", "0", "1 4 6 12 27", "15", "0 4 19", "11 17 26", "6 8 12 23 26 28", "6 11 17 28", "0 1 14 16 19 20 22 23", "2 26", "6 11 12 21"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> entrees = {740021, 381969, 401164, 791356, 999751, 629699, 754936, 896791, 104970, 469680, 419644, 494797, 481515, 590515, 483752, 184592, 522374, 810731, 819604, 638076, 322049, 723091, 929419, 553404, 49285, 569776, 418579, 163468, 662746, 453923};
    vector<string> favorites = {"0 1 2 4 5 7 9 10 11 13 14 16 17 19 20 22 23 24 25", "0 1 2 5 6 7 9 10 11 12 14 15 16 17 18 19 20 21 22", "3 4 5 7 8 9 10 11 12 13 14 15 17 19 20 21 22 23", "1 2 3 4 5 6 7 8 9 11 12 13 14 16 18 19 20 21 22", "0 5 6 7 8 10 11 12 13 14 15 17 19 20 21 22 23 25", "0 5 6 8 9 10 11 12 13 14 15 18 19 20 21 22 24 25", "0 1 2 4 5 6 7 9 10 11 12 13 14 16 19 20 22 23 24", "0 1 2 3 5 6 8 10 11 12 13 14 15 17 18 19 20 21 22", "0 1 2 3 4 6 7 8 9 10 12 13 14 15 16 17 18 19 20", "0 1 2 3 4 5 6 7 8 10 11 12 13 14 15 16 17 18 19", "0 1 2 3 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 3 5 6 7 8 9 10 12 13 14 15 16 17 18 19 20 23 24", "0 1 2 4 5 6 7 9 10 11 12 13 14 15 16 17 18 21 22", "0 1 2 3 4 5 7 8 9 11 12 13 15 16 17 19 21 22 24", "0 1 2 4 5 6 7 8 9 10 12 13 14 15 16 18 19 20 21"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> entrees = {119141, 898477, 226477, 369331, 198822, 649432, 433525, 297948, 233515, 798734, 912741, 279433, 553351, 865410, 959828, 860864, 870159, 428855, 689302, 498393, 228790, 498506, 867107, 996764, 22920, 893673, 475239, 241799, 494783, 610530};
    vector<string> favorites = {"6 8 12 23 24 27", "7 16 23 29", "12 19 24 25 27", "2 13 17", "19 25 28", "0 8 10 11 12 21", "6 11 20 21 24", "11 19", "0 2 4 10 14 22", "6 8 15 19 28", "3 21", "2 11 28", "2 12 13", "14", "4 9 17 21 27"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> entrees = {641848, 970314, 64255, 814905, 504435, 906607, 239979, 301749, 136570, 998474, 540318, 691264, 345563, 861235, 85593, 251263, 368597, 12190, 925377, 720333, 289311, 179100, 482675, 426960, 665299, 420154, 37438, 51303, 713206, 742855};
    vector<string> favorites = {"0 1 2 3 4 6 7 9 10 11 12 13 14 15 16 17 18 19 21", "0 1 2 3 5 6 7 8 9 11 12 13 14 15 16 18 20 21 22", "0 1 3 4 5 6 7 9 10 11 13 17 18 19 20 21 23 24 25", "1 2 4 5 6 7 8 9 10 11 12 13 14 15 17 18 19 22 23", "0 1 3 4 7 9 11 12 13 14 16 17 18 19 20 21 22 23", "0 1 2 3 4 7 8 9 11 13 15 17 18 19 21 22 24 25 26", "0 1 3 5 6 7 8 9 10 11 12 14 18 19 20 21 22 23 24", "0 2 4 5 6 8 9 10 11 13 14 15 16 19 20 21 22 23 24", "0 1 2 3 4 5 6 7 8 9 11 12 13 14 15 16 17 19 20 21", "0 1 2 3 5 6 7 8 9 10 11 12 14 15 16 17 18 21 22", "0 2 5 6 8 10 12 14 17 19 20 21 23 24 25 27 28 29", "2 3 4 5 6 7 9 10 11 12 13 14 16 17 19 20 22 23 24", "0 1 5 6 8 9 10 11 12 14 15 16 17 19 20 21 22 23", "1 3 4 5 6 8 9 10 11 13 14 15 16 17 18 22 23 28 29", "0 1 2 3 5 6 7 12 13 15 16 17 19 20 21 22 23 24 26"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> entrees = {641848, 970314, 64255, 814905, 504435, 906607, 239979, 301749, 136570, 998474, 540318, 691264, 345563, 861235, 85593, 251263, 368597, 12190, 925377, 720333, 289311, 179100, 482675, 426960, 665299, 420154, 37438, 51303, 713206, 742855};
    vector<string> favorites = {"0 1 2 3 4 6 7 9 10 11 12 13 14 15 16 17 18 19 21", "0 1 2 3 5 6 7 8 9 11 12 13 14 15 16 18 20 21 22", "0 1 3 4 5 6 7 9 10 11 13 17 18 19 20 21 23 24 25", "1 2 4 5 6 7 8 9 10 11 12 13 14 15 17 18 19 22 23", "0 1 3 4 7 9 11 12 13 14 16 17 18 19 20 21 22 23", "0 1 2 3 4 7 8 9 11 13 15 17 18 19 21 22 24 25 26", "0 1 3 5 6 7 8 9 10 11 12 14 18 19 20 21 22 23 24", "0 2 4 5 6 8 9 10 11 13 14 15 16 19 20 21 22 23 24", "0 1 2 3 4 5 6 7 8 9 11 12 13 14 15 16 17 19 20 21", "0 1 2 3 5 6 7 8 9 10 11 12 14 15 16 17 18 21 22", "0 2 5 6 8 10 12 14 17 19 20 21 23 24 25 27 28 29", "2 3 4 5 6 7 9 10 11 12 13 14 16 17 19 20 22 23 24", "0 1 5 6 8 9 10 11 12 14 15 16 17 19 20 21 22 23", "1 3 4 5 6 8 9 10 11 13 14 15 16 17 18 22 23 28 29", "0 1 2 3 5 6 7 12 13 15 16 17 19 20 21 22 23 24 26"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> entrees = {285530, 606305, 592272, 932852, 837286, 929279, 153657, 256928, 718098, 446551, 475273, 22308, 537580, 967881, 463053, 29074, 576245, 475928, 722222, 949201, 760536, 316890, 520314, 908065, 66632, 513673, 694925, 511548, 585205, 399480};
    vector<string> favorites = {"0 3", "2 15 16 17 18 29", "5 7 10 16", "0 9 14 22 28", "3 4 12", "2 11 25", "6 20 22", "0 13", "11 13 19", "19", "4 5 14", "0 10 15 23", "6 25 26", "0 18", "8 10"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> entrees = {285530, 606305, 592272, 932852, 837286, 929279, 153657, 256928, 718098, 446551, 475273, 22308, 537580, 967881, 463053, 29074, 576245, 475928, 722222, 949201, 760536, 316890, 520314, 908065, 66632, 513673, 694925, 511548, 585205, 399480};
    vector<string> favorites = {"0 3", "2 15 16 17 18 29", "5 7 10 16", "0 9 14 22 28", "3 4 12", "2 11 25", "6 20 22", "0 13", "11 13 19", "19", "4 5 14", "0 10 15 23", "6 25 26", "0 18", "8 10"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> entrees = {461737, 533322, 867573, 369759, 133061, 683215, 853267, 860480, 79807, 119070, 635885, 361164, 988641, 530488, 401925, 340106, 317655, 349231, 488678, 594762, 422311, 443349, 115441, 468514, 338893, 839126, 789382, 854612, 417655, 278882};
    vector<string> favorites = {"3 4 13 26", "15", "5 8 20", "4 6 12 20", "9 17 19 25 27", "5 11 14 15", "9 11 27", "8 10 15", "5 7 16", "0 7 21 25", "1 10 15 16 18 20 29", "0 3 16 18 29", "0 1 3", "12 14 19 24 25", "9 13 28"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> entrees = {1188, 761848, 77032, 584412, 678301, 218568, 711963, 916202, 613894, 95391, 105448, 594952, 988693, 621121, 412198, 69128, 49444, 495626, 764851, 576482, 343194, 88015, 669485, 4834, 535353, 395427, 542985, 856255, 101316, 121141};
    vector<string> favorites = {"8 22", "12 28", "2 3 6 9 10 15 18 25", "4 5 6 7 10 17 18 21 24", "0 4 5 8 9 15 16 25", "21 24 28", "4 9 10 15 18 20 26", "11 12 14 16 21 24 27", "2 9 16", "11 13 18 27", "5 19 23 24 26", "0 2 10 19 20 25 26 27", "11 16 26 27", "3 5 6 10 15 17", "0 9 12 13 17 20 23 28"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> entrees = {865929, 664938, 723023, 901568, 932043, 723904, 821191, 481152, 996160, 583138, 464217, 973633, 34821, 698805, 473624, 809480, 971070, 422998, 173948, 246685, 897726, 810750, 419483, 978816, 210191, 615873, 652488, 57657, 271454, 762609};
    vector<string> favorites = {"7 8 16", "11 16 22", "1 2 13", "10 25 27", "16 19 22", "2 5 8 12 13 14 21 24", "17 27", "1 2 4 8 16", "5", "9 19", "8 15", "23 28", "17", "29", "4 15"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> entrees = {493392, 701432, 388084, 936792, 734691, 793235, 953599, 29003, 95387, 426456, 439427, 690976, 430702, 10344, 921872, 399378, 696851, 378807, 813953, 213778, 116057, 342968, 676572, 329985, 652180, 202472, 135569, 989640, 465970, 139124};
    vector<string> favorites = {"2", "18", "0", "1 25", "7", "14", "26", "9", "8", "22", "10 23 29", "20 21", "17", "2 17", "25"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> entrees = {632653, 25617, 738599, 335919, 825841, 955759, 681918, 968966, 698088, 257033, 591265, 579857, 280315, 5991, 714756, 539206, 472084, 173770, 205187, 421038, 692690, 473550, 532678, 633124, 281917, 815928, 217663, 97452, 146835, 663138};
    vector<string> favorites = {"5 14 20 26 29", "12 14 16 17 20", "0 9 13 15 21", "2 10 11 15 28", "14 21 23", "8 19 23 24", "14 16 24 25 26 27", "0 1 4 10 20 23", "0 18 19 23", "7 9 15 20 28", "0 3 10 22 25 29", "0 3 4 8 20", "7 12 13 20 24", "2 6 14 23", "10 15 25 26"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 4086176;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> entrees = {443838, 266880, 533995, 205373, 603229, 209847, 655217, 884270, 786410, 80762, 344140, 57722, 716466, 695147, 810546, 562680, 668861, 916183, 172249, 156366, 844192, 381604, 155354, 922027, 785455, 156503, 374769, 869725, 73295, 442048};
    vector<string> favorites = {"6 21", "1 3", "4 29", "1 6 8 13", "22 27", "2 21", "18", "28", "17", "8 25", "3 8 12", "18 20", "4", "23", "24"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> entrees = {689724, 643472, 79348, 371188, 2461, 983979, 717897, 520368, 937155, 161210, 320705, 826980, 628077, 2395, 485511, 318260, 157534, 563755, 715125, 806637, 394686, 228034, 169482, 77203, 388318, 987342, 532475, 368902, 412057, 696207};
    vector<string> favorites = {"1 12 17 21", "17 19", "11 16 23 25", "0 1 8 11 15", "12 18 24 27", "1 7 10 16 18", "6 15", "8 24 26 27 28", "4 5 9 16", "0 19", "3 12 16", "18 20 25 26", "8 12 14 26 29", "9 14 16 20 25", "3 13 20"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 5580711;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> entrees = {448373, 33407, 474555, 332568, 649672, 97578, 591216, 84539, 122746, 549099, 383180, 46520, 884978, 615476, 124086, 744267, 873298, 519005, 123323, 741973, 138961, 860100, 236782, 432017, 660711, 771422, 999338, 80367, 857121, 245407};
    vector<string> favorites = {"0 14 20", "8 24", "16 23", "2", "13", "18", "10", "1 27", "29", "9 18", "14 16", "0 5 14 26", "15", "14 23", "8"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> entrees = {429616, 488062, 430463, 947157, 646140, 725686, 854968, 190275, 681991, 155978, 864647, 407488, 881732, 870322, 830216, 112277, 620279, 237015, 998516, 934739, 171001, 670221, 641452, 328732, 443528, 637920, 732325, 431994, 542088, 313671};
    vector<string> favorites = {"1 15 20", "13", "22", "5 11 24", "4 5", "1 7 14 15 18", "11 15 25", "3 19", "8", "14 17", "10", "22", "28", "7 19 23", "0 29"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> entrees = {236910, 873233, 649189, 755912, 275172, 115688, 457356, 78380, 857482, 721372, 267375, 990251, 935728, 378209, 773770, 970465, 661577, 969627, 98882, 267970, 356795, 414738, 640006, 670735, 212951, 152241, 261138, 755892, 499043, 401403};
    vector<string> favorites = {"0 2 4 8 9 10 11 12 13 14 17 18 19 20 21 22 23 24", "0 3 5 6 8 9 11 12 14 15 16 18 19 24 25 26 27 29", "0 1 2 6 10 11 12 16 17 18 20 21 26 27 28 29", "0 2 4 7 8 9 10 11 12 13 14 15 17 18 19 20 24 25", "0 1 2 4 5 6 11 13 14 15 16 17 18 19 21 22 23 24", "0 1 2 3 4 5 6 7 11 13 15 17 18 19 21 23 25 27 28", "0 1 3 8 10 11 13 14 16 17 18 19 20 21 22 23 26 27", "0 2 3 4 6 7 8 9 10 11 12 14 16 17 18 19 20 21 22", "0 3 4 5 9 11 12 14 15 16 19 20 21 22 23 25 26 27", "0 3 4 6 7 8 9 10 11 13 14 15 17 18 20 22 23 25 26", "2 5 8 9 10 11 12 14 15 18 19 21 24 25 26 27 29", "1 2 3 4 5 6 7 8 9 11 12 13 14 15 16 17 19 21 22", "0 2 4 6 7 8 9 10 11 14 15 17 19 22 23 26 27 28", "0 3 5 8 9 11 12 16 17 18 19 20 21 24 25 26 27", "0 2 6 9 10 11 12 13 14 15 17 18 19 21 22 23 25 28"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> entrees = {286334, 837741, 634428, 827510, 586297, 599926, 761752, 487701, 787891, 755210, 344637, 218874, 763857, 609539, 588825, 79858, 591374, 974896, 934393, 717014, 733235, 206536, 987091, 337926, 886134, 944380, 770415, 599638, 835309, 56293};
    vector<string> favorites = {"4 6 9 12 17 24 28", "2 8 18 21 28", "13 29", "10 15", "11 17 21", "2 7 18", "1 13 22", "7 9", "11 23", "25 29", "5 14", "19 29", "19", "11 12 25 27", "2 27"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
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
    vector<int> entrees = {745644, 398737, 891744, 159686, 784551, 314989, 518330, 229607, 857, 964122, 489233, 258927, 921391, 869963, 958104, 315272, 499510, 680115, 539441, 587542, 925927, 359941, 680080, 656777, 221459, 19667, 653549, 752274, 890604, 551576};
    vector<string> favorites = {"12 19 23", "27", "2 18", "2 18 23", "7 22 26", "14 16", "10 15 17", "12 18 21 27", "6 19 23", "28 29", "6 9 14 26", "3 8 14 23", "7", "11 15", "0 23 25"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
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
    vector<int> entrees = {653508, 164259, 622067, 137275, 985179, 803855, 321147, 875818, 847354, 670341, 533544, 693518, 789, 751978, 524079, 558920, 551328, 232055, 666915, 687959, 559542, 383764, 703599, 564167, 49119, 331808, 32880, 738503, 144449, 202062};
    vector<string> favorites = {"2 3 5 7 8 9 10 11 12 13 16 17 18 19 22 23 24 26", "0 3 4 5 6 8 9 10 11 12 15 16 17 19 20 22 23 24 25", "2 5 6 7 9 10 11 12 13 14 15 16 17 18 19 20 21 22", "0 1 2 3 4 8 10 11 12 13 15 16 17 18 19 20 21 24", "1 4 5 6 10 11 12 14 15 16 17 18 19 20 21 23 24 25", "0 1 2 3 4 5 6 7 8 10 11 13 14 15 16 17 18 19 21", "1 2 3 4 5 7 8 9 10 11 12 14 15 16 17 19 21 22 23", "0 2 5 6 9 10 11 12 14 15 16 17 20 21 22 23 24 25", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19", "0 1 3 4 5 6 8 9 10 16 17 19 20 22 23 25 26 27 28", "0 1 3 4 5 7 8 9 10 11 12 13 14 16 18 19 21 22 23", "0 1 2 3 4 5 6 7 8 10 14 15 16 17 18 19 20 21 22", "0 1 2 3 4 5 6 8 10 11 12 13 14 15 16 17 18 20 21", "0 1 2 3 4 5 7 8 9 10 11 14 16 17 18 20 21 22 23", "1 2 4 5 6 9 11 12 14 15 16 17 18 19 20 21 23 24"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
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
    vector<int> entrees = {119141, 898477, 226477, 369331, 198822, 649432, 433525, 297948, 233515, 798734, 912741, 279433, 553351, 865410, 959828, 860864, 870159, 428855, 689302, 498393, 228790, 498506, 867107, 996764, 22920, 893673, 475239, 241799, 494783, 610530};
    vector<string> favorites = {"6 8 12 23 24 27", "7 16 23 29", "12 19 24 25 27", "2 13 17", "19 25 28", "0 8 10 11 12 21", "6 11 20 21 24", "11 19", "0 2 4 10 14 22", "6 8 15 19 28", "3 21", "2 11 28", "2 12 13", "14", "4 9 17 21 27"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
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
    vector<int> entrees = {55};
    vector<string> favorites = {"00000000000000000000000000000000000000000000000000"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> entrees = {10124, 540045, 236111, 977928, 199927, 379085, 743650, 631339, 961617, 178242, 343492, 89869, 61858, 700029, 560602, 341127, 850320, 957934, 167013, 631513};
    vector<string> favorites = {"4 16 16 2 18 10 13 14 4 18", "12 4 19 1 1 12 18 7 18", "6 15 19 13", "5 10 5 16 15 14 15 8", "13 2 15 8 5", "8 2 15 3 1", "9 18 2"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 1792343;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> entrees = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> favorites = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> entrees = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<string> favorites = {"28 29", "27 28", "27 28 29", "27 28", "27 28", "27 28", "27 28", "27 28", "27 28", "27 28", "27 28", "27 28", "27 28", "27 28", "27 28"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
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
    vector<int> entrees = {10124, 540045, 236111, 977928, 199927, 379085, 743650, 631339, 961617, 178242, 343492, 89869, 61858, 700029, 560602, 341127, 850320, 957934, 167013, 631513, 243423, 234232, 122234, 212, 23424, 55555, 5555, 5555, 5555, 55555};
    vector<string> favorites = {"4 16 16 2 18 10 13 14 4 18", "12 4 19 1 1 12 18 7 18", "6 15 19 13", "5 10 5 16 15 14 15 8", "13 2 15 8 5", "8 2 15 3 1", "9 18 2", "1 29", "28 24", "23 25", "22 21", "21 20", "21 27", "13 14", "1 2 3 4 5 6 21 23 24 25"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> entrees = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<string> favorites = {"0 1", "2 3", "4 5", "6 7", "8 9", "10 11", "12 13", "14 15", "16 17", "18 19", "20 21", "22 23", "24 25", "26 27", "28 29"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 300000;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> entrees = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<string> favorites = {"1 2", "3 4", "5 6", "7 8", "9 10", "11 12", "13 14", "15 16", "17 18", "19 20", "21 22", "23 24", "25 26", "27 28", "29 0"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 3000;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> entrees = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<string> favorites = {"0 1", "2 3", "4 5", "6 7", "8 9", "10 11", "12 13", "14 15", "16 17", "18 19", "20 21", "22 23", "24 25", "26 27", "28 29"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> entrees = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 100};
    vector<string> favorites = {"0 15 29", "1 16 29", "2 17 29", "3 18 29", "4 19 29", "5 20 29", "6 21 29", "7 22 29", "8 23 29", "9 24 29", "10 25 29", "11 26 29", "12 27 29", "13 28 29", "14 29 29"};
    OrderFood* pObj = new OrderFood();
    clock_t start = clock();
    int result = pObj->selectEntrees(entrees, favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=5865&pm=3115
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
#include <map> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
vector<string> tokenize(string s, string ch) { 
  vector<string> ret; 
  for( int p = 0, p2; p < s.size(); p = p2+1 ) { 
    p2 = s.find_first_of(ch, p); 
    if( p2 == -1 ) p2 = s.size(); 
    if( p2-p > 0 ) ret.push_back( s.substr(p, p2-p) ); 
  } 
  return ret; 
} 
 
vector<int> tokint(string s, string ch) { 
  vector<int> ret; 
  vector<string> p = tokenize(s, ch); 
  for( int i = 0; i < p.size(); i++ ) 
    ret.push_back( atoi(p[i].c_str()) ); 
  return ret; 
} 
 
vector<vector<int> > tokmat(vector<string> s, string ch) { 
  vector<vector<int> > ret; 
  for( int i = 0; i < s.size(); i++ ) 
    ret.push_back( tokint(s[i], ch) ); 
  return ret; 
} 
 
int pref[15][30]; 
 
class OrderFood { 
public: 
int selectEntrees(vector <int> a, vector <string> b) { 
  int i, j, k, x, y, z, n; 
 
  VVI t = tokmat(b, " "); 
  for( i = 0; i < t.size(); i++ ) 
  for( j = 0; j < t[i].size(); j++ ) 
    pref[i][t[i][j]] = 1; 
  n = a.size()/2; 
  map<VI, int> m; 
  for( i = 0; i < (1<<n); i++ ) { 
    VI v(t.size()); 
    for( j = 0; j < n; j++ ) if( i&(1<<j) ) 
    for( k = 0; k < t.size(); k++ ) 
      v[k] += pref[k][j]; 
    for( j = 0; j < t.size(); j++ ) if( v[j] > 2 ) break; 
    if( j < t.size() ) continue; 
    x = 0; 
    for( j = 0; j < n; j++ ) if( i&(1<<j) ) 
      x += a[j]; 
    if( m.count(v) ) 
      m[v] <?= x; 
    else 
      m[v] = x; 
  } 
  int n2 = a.size()-n; 
  int ret = 1000000000; 
  for( i = 0; i < (1<<n2); i++ ) { 
    VI v(t.size(), 2); 
    for( j = 0; j < n2; j++ ) if( i&(1<<j) ) 
    for( k = 0; k < t.size(); k++ ) 
      v[k] -= pref[k][j+n]; 
    for( j = 0; j < t.size(); j++ ) if( v[j] < 0 ) break; 
    if( j < t.size() ) continue; 
    x = 0; 
    for( j = 0; j < n2; j++ ) if( i&(1<<j) ) 
      x += a[j+n]; 
    if( !m.count(v) ) continue; 
    ret <?= x + m[v]; 
  } 
  if( ret == 1000000000 ) return -1; 
  return ret; 
} 
};

********************************************************************************
*******************************************************************************/