/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4755
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

class SalesmansDilemma {
public:
    string bestRoute(int towns, int origin, int destination, vector<string> travelCosts, vector<int> profits);
};

string SalesmansDilemma::bestRoute(int towns, int origin, int destination, vector<string> travelCosts, vector<int> profits) {
    string ret;
    return ret;
}


int test0() {
    int towns = 5;
    int origin = 0;
    int destination = 4;
    vector<string> travelCosts = {"0 1 10", "1 2 10", "2 3 10", "3 1 10", "2 4 10"};
    vector<int> profits = {0, 10, 10, 110, 10};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int towns = 5;
    int origin = 0;
    int destination = 4;
    vector<string> travelCosts = {"0 1 13", "1 2 17", "2 4 20", "0 3 22", "1 3 4747", "2 0 10", "3 4 10"};
    vector<int> profits = {0, 0, 0, 0, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -32";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int towns = 3;
    int origin = 0;
    int destination = 2;
    vector<string> travelCosts = {"0 1 10", "1 0 10", "2 1 10"};
    vector<int> profits = {1000, 1000, 47000};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int towns = 2;
    int origin = 0;
    int destination = 1;
    vector<string> travelCosts = {"0 1 1000", "1 1 10"};
    vector<int> profits = {11, 11};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int towns = 1;
    int origin = 0;
    int destination = 0;
    vector<string> travelCosts = {"0 0 10"};
    vector<int> profits = {7};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 7";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int towns = 2;
    int origin = 1;
    int destination = 0;
    vector<string> travelCosts = {"1 0 100", "1 0 50", "1 0 200"};
    vector<int> profits = {0, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -50";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int towns = 50;
    int origin = 13;
    int destination = 13;
    vector<string> travelCosts = {"12 46 123456", "21 12 1243", "0 1 10", "1 0 10"};
    vector<int> profits = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 0";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int towns = 5;
    int origin = 0;
    int destination = 4;
    vector<string> travelCosts = {"1 2 10", "2 3 10", "3 4 10", "1 4 10", "2 4 10", "3 4 10", "1 0 10"};
    vector<int> profits = {1000000, 1000000, 1000000, 1000000, 1000000};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int towns = 3;
    int origin = 0;
    int destination = 2;
    vector<string> travelCosts = {"0 0 1", "1 1 1", "1 2 1"};
    vector<int> profits = {1000000, 1000000, 1000000};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int towns = 1;
    int origin = 0;
    int destination = 0;
    vector<string> travelCosts = {"0 0 47"};
    vector<int> profits = {47};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 47";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int towns = 5;
    int origin = 0;
    int destination = 4;
    vector<string> travelCosts = {"0 1 13", "1 2 17", "2 4 20", "0 3 22", "1 3 4747", "2 0 10", "3 4 10"};
    vector<int> profits = {8, 10, 20, 1, 100000};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 99988";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int towns = 50;
    int origin = 13;
    int destination = 14;
    vector<string> travelCosts = {"5 47 257", "26 32 424", "40 8 114", "13 20 491", "8 22 759", "42 22 288", "9 16 966", "30 20 564", "29 14 513", "48 8 320", "32 13 447", "12 13 100", "31 33 654", "3 37 247", "11 14 597", "35 45 922", "38 16 497", "41 33 578", "18 14 917", "44 47 462", "22 25 143", "24 2 27", "39 33 478", "36 45 938", "10 25 324", "1 37 781", "45 16 434", "6 22 39", "15 14 557", "27 8 707", "47 45 73", "37 47 963", "46 25 371", "16 32 932", "17 11 534", "4 11 895", "20 8 757", "0 13 346", "28 2 200", "34 2 870", "21 37 35", "14 33 269", "49 11 398", "23 32 952", "2 11 638", "19 20 399", "7 22 144", "25 2 433", "33 37 932", "43 25 241"};
    vector<int> profits = {429, 768, 956, 363, 734, 442, 538, 79, 814, 980, 353, 966, 895, 681, 496, 243, 353, 900, 623, 820, 93, 852, 720, 445, 800, 100, 821, 767, 698, 681, 732, 480, 449, 688, 843, 535, 483, 733, 966, 297, 66, 319, 264, 961, 1, 112, 205, 354, 365, 180};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 1008";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int towns = 50;
    int origin = 13;
    int destination = 14;
    vector<string> travelCosts = {"30 20 707", "22 4 19", "48 31 889", "6 4 460", "7 34 921", "8 48 625", "11 6 826", "1 34 832", "12 31 475", "42 20 392", "43 10 105", "18 37 134", "28 37 849", "37 47 511", "2 47 461", "35 47 454", "39 25 98", "47 14 445", "34 6 356", "27 39 168", "45 10 225", "21 14 454", "24 34 12", "17 31 398", "49 4 616", "32 19 654", "36 6 266", "4 10 9", "44 3 668", "33 6 235", "19 39 94", "20 37 164", "5 14 162", "10 3 712", "0 4 814", "15 48 808", "16 10 115", "46 14 370", "40 47 373", "38 25 628", "9 37 699", "25 20 979", "23 25 364", "41 39 41", "29 20 104", "3 48 64", "14 34 104", "13 19 880", "31 19 54", "26 3 943"};
    vector<int> profits = {18, 285, 775, 197, 305, 543, 188, 134, 142, 444, 283, 198, 495, 64, 581, 656, 990, 394, 805, 226, 262, 687, 622, 911, 21, 188, 278, 622, 95, 601, 114, 113, 238, 241, 662, 543, 784, 850, 30, 279, 647, 665, 477, 494, 81, 58, 150, 71, 804, 308};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int towns = 50;
    int origin = 13;
    int destination = 14;
    vector<string> travelCosts = {"30 20 707", "22 4 19", "48 31 889", "6 4 460", "7 34 921", "8 48 625", "11 6 826", "1 34 832", "12 31 475", "42 20 392", "43 10 105", "18 37 134", "28 37 849", "37 47 511", "2 47 461", "35 47 454", "39 25 98", "47 14 445", "34 6 356", "27 39 168", "45 10 225", "21 14 454", "24 34 12", "17 31 398", "49 4 616", "32 19 654", "36 6 266", "4 10 9", "44 3 668", "33 6 235", "19 39 94", "20 37 164", "5 14 162", "10 3 712", "0 4 814", "15 48 808", "16 10 115", "46 14 370", "40 47 373", "38 25 628", "9 37 699", "25 20 979", "23 25 364", "41 39 41", "29 20 104", "3 48 64", "14 34 104", "13 19 880", "31 19 54", "26 3 943"};
    vector<int> profits = {18, 285, 775, 197, 305, 543, 188, 134, 142, 444, 283, 198, 495, 64, 581, 656, 990, 394, 805, 226, 262, 687, 622, 911, 21, 188, 278, 622, 95, 601, 114, 113, 238, 241, 662, 543, 784, 850, 30, 279, 647, 665, 477, 494, 81, 58, 150, 71, 804, 308};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int towns = 50;
    int origin = 13;
    int destination = 13;
    vector<string> travelCosts = {"48 24 71", "10 29 318", "29 33 5", "28 32 593", "17 7 589", "7 16 946", "34 13 337", "22 14 468", "45 26 890", "21 25 785", "38 30 606", "41 29 741", "6 37 351", "12 25 74", "30 14 296", "23 24 707", "39 30 537", "25 32 757", "16 25 554", "33 24 153", "15 13 39", "2 37 876", "35 14 844", "44 25 388", "36 16 16", "1 32 851", "27 33 902", "24 7 539", "47 7 48", "49 30 432", "43 16 719", "11 26 119", "4 15 815", "40 15 871", "19 13 668", "14 29 726", "26 37 240", "18 33 848", "32 15 954", "37 30 849", "31 13 675", "13 26 536", "3 26 857", "46 16 363", "42 29 443", "8 37 776", "0 33 72", "20 7 985", "5 14 109", "9 24 779"};
    vector<int> profits = {898, 846, 900, 900, 947, 123900, 291, 202, 900, 359, 719, 0, 25, 0, 522, 0, 600, 469, 660, 22, 847, 497, 233, 475, 853, 954, 410, 19, 902, 790, 236, 652, 288, 97, 627, 687, 94, 919, 242, 649, 630, 961, 502, 7, 690, 376, 311, 291, 845, 971};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 0";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int towns = 50;
    int origin = 13;
    int destination = 13;
    vector<string> travelCosts = {"48 24 71", "10 29 318", "29 33 5", "28 32 593", "17 7 589", "7 16 946", "34 13 337", "22 14 468", "45 26 890", "21 25 785", "38 30 606", "41 29 741", "6 37 351", "12 25 74", "30 14 296", "23 24 707", "39 30 537", "25 32 757", "16 25 554", "33 24 153", "15 13 39", "2 37 876", "35 14 844", "44 25 388", "36 16 16", "1 32 851", "27 33 902", "24 7 539", "47 7 48", "49 30 432", "43 16 719", "11 26 119", "4 15 815", "40 15 871", "19 13 668", "14 29 726", "26 37 240", "18 33 848", "32 15 954", "37 30 849", "31 13 675", "13 26 536", "3 26 857", "46 16 363", "42 29 443", "8 37 776", "0 33 72", "20 7 985", "5 14 109", "9 24 779"};
    vector<int> profits = {398, 146, 509, 623, 47, 997, 291, 202, 555, 359, 719, 500, 25, 377, 522, 952, 600, 469, 660, 22, 847, 497, 233, 475, 853, 954, 410, 19, 902, 790, 236, 652, 288, 97, 627, 687, 94, 919, 242, 649, 630, 961, 502, 7, 690, 376, 311, 291, 845, 971};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int towns = 50;
    int origin = 13;
    int destination = 13;
    vector<string> travelCosts = {"33 34 605", "49 31 221", "34 10 868", "31 1 16", "41 46 678", "8 44 590", "23 9 790", "35 24 289", "48 36 922", "47 43 544", "25 29 381", "11 41 521", "6 42 318", "39 26 76", "4 48 440", "45 33 840", "18 28 468", "16 4 141", "10 25 517", "7 45 348", "1 13 175", "22 12 751", "26 49 274", "30 17 959", "38 2 463", "29 23 943", "40 6 197", "24 15 322", "46 39 424", "12 7 427", "13 37 516", "37 21 514", "44 35 688", "20 38 153", "32 5 272", "3 16 975", "27 0 156", "9 30 953", "5 19 704", "28 40 824", "15 22 841", "14 11 179", "43 3 893", "21 32 881", "42 20 381", "2 27 106", "19 47 617", "36 8 972", "17 18 317", "0 14 738"};
    vector<int> profits = {638, 106, 105, 578, 555, 89, 822, 667, 390, 533, 602, 239, 334, 415, 253, 120, 0, 54, 32, 498, 621, 392, 148, 288, 488, 623, 895, 72, 54, 494, 982, 692, 952, 87, 271, 508, 528, 93, 527, 918, 979, 129, 509, 313, 544, 762, 434, 896, 169, 818};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 415";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int towns = 50;
    int origin = 13;
    int destination = 13;
    vector<string> travelCosts = {"33 34 605", "49 31 221", "34 10 868", "31 1 16", "41 46 678", "8 44 590", "23 9 790", "35 24 289", "48 36 922", "47 43 544", "25 29 381", "11 41 521", "6 42 318", "39 26 76", "4 48 440", "45 33 840", "18 28 468", "16 4 141", "10 25 517", "7 45 348", "1 13 175", "22 12 751", "26 49 274", "30 17 959", "38 2 463", "29 23 943", "40 6 197", "24 15 322", "46 39 424", "12 7 427", "13 37 516", "37 21 514", "44 35 688", "20 38 153", "32 5 272", "3 16 975", "27 0 156", "9 30 953", "5 19 704", "28 40 824", "15 22 841", "14 11 179", "43 3 893", "21 32 881", "42 20 381", "2 27 106", "19 47 617", "36 8 972", "17 18 317", "0 14 738"};
    vector<int> profits = {638, 106, 4902, 578, 555, 89, 822, 667, 390, 533, 602, 239, 334, 1, 253, 120, 0, 54, 32, 498, 621, 392, 148, 288, 488, 623, 895, 72, 44, 94, 982, 692, 952, 87, 271, 508, 528, 93, 527, 918, 979, 129, 509, 313, 544, 762, 434, 896, 169, 818};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int towns = 50;
    int origin = 13;
    int destination = 13;
    vector<string> travelCosts = {"33 34 605", "49 31 221", "34 10 868", "31 1 16", "41 46 678", "8 44 590", "23 9 790", "35 24 289", "48 36 922", "47 43 544", "25 29 381", "11 41 521", "6 42 318", "39 26 76", "4 48 440", "45 33 840", "18 28 468", "16 4 141", "10 25 517", "7 45 348", "1 13 175", "22 12 751", "26 49 274", "30 17 959", "38 2 463", "29 23 943", "40 6 197", "24 15 322", "46 39 424", "12 7 427", "13 37 516", "37 21 514", "44 35 688", "20 38 153", "32 5 272", "3 16 975", "27 0 156", "9 30 953", "5 19 704", "28 40 824", "15 22 841", "14 11 179", "43 3 893", "21 32 881", "42 20 381", "2 27 106", "19 47 617", "36 8 972", "17 18 317", "0 14 738"};
    vector<int> profits = {638, 106, 4901, 578, 555, 89, 822, 667, 390, 533, 602, 239, 334, 1, 253, 120, 0, 54, 32, 498, 621, 392, 148, 288, 488, 623, 895, 72, 44, 94, 982, 692, 952, 87, 271, 508, 528, 93, 527, 918, 979, 129, 509, 313, 544, 762, 434, 896, 169, 818};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 1";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int towns = 5;
    int origin = 0;
    int destination = 4;
    vector<string> travelCosts = {"0 1 1000000", "1 2 1", "2 3 1", "3 4 1", "4 0 1"};
    vector<int> profits = {1000, 1000, 1000, 1000, 1000};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -995003";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int towns = 5;
    int origin = 0;
    int destination = 4;
    vector<string> travelCosts = {"0 1 1000000", "1 2 1", "2 3 1", "3 4 1", "4 0 1"};
    vector<int> profits = {1000000, 0, 912455, 932424, 134542};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int towns = 5;
    int origin = 0;
    int destination = 4;
    vector<string> travelCosts = {"0 1 10", "1 2 10", "2 3 10", "3 1 10", "0 4 987654"};
    vector<int> profits = {1000, 1000, 1000, 1000, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -986654";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int towns = 50;
    int origin = 13;
    int destination = 14;
    vector<string> travelCosts = {"30 5 192", "0 14 132", "9 38 540", "7 44 232", "42 28 212", "24 18 55", "19 29 572", "48 8 864", "21 0 701", "44 42 762", "34 40 531", "11 30 471", "4 19 795", "1 10 648", "18 15 323", "16 11 628", "31 47 658", "38 33 443", "43 1 991", "6 2 942", "25 6 138", "29 37 6", "35 9 298", "49 26 724", "28 17 235", "32 13 680", "39 21 898", "5 22 403", "17 31 151", "3 7 687", "10 49 800", "13 25 107", "8 20 668", "23 43 270", "12 4 352", "33 24 651", "36 48 114", "40 3 734", "20 34 532", "27 16 835", "14 46 834", "41 36 881", "47 39 388", "26 12 848", "2 45 353", "37 32 775", "22 35 150", "45 41 516", "15 23 764", "46 27 548"};
    vector<int> profits = {655, 577, 487, 820, 621, 80, 748, 287, 663, 675, 104, 321, 287, 303, 817, 795, 119, 300, 210, 291, 371, 878, 301, 161, 52, 281, 648, 848, 126, 586, 769, 134, 163, 608, 954, 137, 688, 54, 424, 703, 729, 880, 24, 368, 183, 841, 163, 655, 493, 725};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 1584";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int towns = 50;
    int origin = 13;
    int destination = 14;
    vector<string> travelCosts = {"48 34 631", "31 16 681", "17 46 151", "21 43 9", "43 23 409", "10 24 956", "26 0 939", "44 36 498", "9 18 555", "42 35 675", "38 28 816", "4 27 913", "5 33 682", "6 12 813", "35 19 511", "8 32 19", "29 6 132", "39 15 676", "36 29 640", "18 2 644", "14 38 527", "3 39 369", "45 1 318", "30 11 432", "16 10 494", "13 8 686", "19 9 637", "22 45 319", "12 21 757", "15 13 24", "0 31 312", "33 20 861", "46 48 887", "11 42 7", "40 30 227", "49 7 836", "32 4 686", "28 49 161", "25 22 800", "7 25 665", "34 3 350", "37 44 309", "1 47 343", "41 26 693", "24 14 209", "2 5 176", "27 41 802", "20 37 953", "23 17 661", "47 40 663"};
    vector<int> profits = {88, 329, 211, 753, 852, 665, 936, 535, 307, 784, 370, 915, 108, 112, 201, 21, 423, 964, 57, 285, 257, 288, 374, 398, 47, 707, 130, 951, 86, 497, 586, 174, 826, 149, 279, 31, 815, 216, 566, 474, 0, 936, 389, 460, 401, 942, 481, 824, 259, 890};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -1973";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int towns = 50;
    int origin = 13;
    int destination = 14;
    vector<string> travelCosts = {"16 19 27117", "38 39 500046", "35 34 833204", "43 44 733848", "28 30 182112", "1 2 636281", "29 27 482272", "2 15 473068", "11 31 160384", "10 23 457173", "33 21 137001", "23 38 836916", "22 10 739293", "48 26 335194", "20 45 808806", "42 16 532572", "32 0 808949", "15 17 806225", "0 3 331670", "25 14 576403", "8 32 253827", "47 28 968702", "31 29 537759", "34 36 419585", "41 20 138378", "4 7 355648", "40 46 846137", "37 42 196386", "49 40 246138", "14 4 675331", "45 24 423487", "12 37 678279", "36 1 779109", "18 13 341193", "5 33 794010", "39 49 798912", "13 41 256252", "24 48 139927", "3 47 106425", "27 5 17928", "44 12 276927", "6 25 23979", "9 8 34559", "17 6 866383", "46 35 955809", "7 11 682827", "21 43 343086", "19 9 713751", "30 18 283093", "26 22 462539"};
    vector<int> profits = {753469, 139468, 407354, 288192, 203749, 828791, 165663, 1769, 7237, 720805, 513264, 235591, 928347, 574313, 13513, 586567, 430865, 704317, 167976, 915179, 207775, 451618, 699739, 31927, 243286, 613719, 200450, 119047, 886374, 586313, 278845, 639842, 725781, 204698, 446534, 929531, 33489, 612197, 449799, 40726, 851501, 963063, 794817, 298346, 537375, 326829, 403412, 968240, 549645, 571388};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -2691972";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int towns = 50;
    int origin = 13;
    int destination = 14;
    vector<string> travelCosts = {"0 35 652319", "25 18 952787", "7 29 139776", "16 38 951000", "33 0 735139", "9 22 115418", "26 11 619878", "10 30 731462", "37 4 592670", "3 15 687594", "38 42 991813", "22 25 489360", "30 45 555699", "45 3 24607", "40 13 272932", "29 6 212132", "4 7 853363", "13 16 811805", "36 49 771963", "27 41 2251", "47 5 272566", "19 10 565624", "24 27 917326", "20 17 488187", "43 28 541105", "34 47 78920", "49 24 872251", "35 20 876749", "48 1 921252", "14 46 364599", "17 19 320003", "18 2 397256", "44 33 391712", "2 37 680468", "8 23 120196", "1 36 409162", "5 26 821922", "32 43 996944", "31 44 637775", "41 31 753202", "28 34 266223", "21 8 777551", "15 40 582979", "23 12 52919", "11 48 960159", "42 14 713937", "39 9 519194", "12 32 429869", "46 39 562629", "6 21 801429"};
    vector<int> profits = {589643, 54364, 163473, 782918, 901098, 750973, 384922, 518018, 727333, 422728, 654579, 973895, 420721, 828036, 604325, 421839, 509260, 52127, 624080, 289581, 650241, 129501, 897704, 716507, 751886, 971168, 340408, 919242, 504864, 543754, 933982, 613006, 116618, 97455, 914423, 17715, 366927, 817845, 535733, 94259, 240572, 708811, 586654, 179792, 536846, 709478, 120130, 46106, 761606, 744211};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -404547";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int towns = 50;
    int origin = 13;
    int destination = 14;
    vector<string> travelCosts = {"32 12 7", "48 8 7", "17 33 5", "26 23 4", "28 43 5", "38 44 4", "15 37 8", "47 0 9", "36 5 5", "10 4 7", "7 49 9", "27 34 4", "45 30 2", "8 15 4", "16 40 7", "25 13 7", "13 41 8", "40 6 4", "9 16 10", "6 25 1", "30 7 7", "14 20 4", "49 39 4", "22 27 5", "39 46 3", "21 47 7", "24 38 5", "29 28 6", "5 14 3", "43 17 3", "18 42 1", "37 10 3", "4 32 1", "34 3 6", "41 31 7", "33 1 8", "1 18 3", "35 26 1", "31 22 8", "2 24 6", "46 21 6", "23 11 7", "11 2 1", "19 36 4", "44 19 2", "0 48 4", "42 35 7", "20 9 6", "3 45 6", "12 29 1"};
    vector<int> profits = {61015, 469601, 502741, 885097, 559358, 969494, 330809, 404002, 32625, 625248, 396848, 455609, 896379, 978606, 396124, 8557, 633100, 443888, 335768, 704739, 456684, 133277, 682839, 179656, 105265, 389701, 184262, 849413, 234593, 443284, 395028, 295608, 431384, 897769, 699205, 509241, 385762, 30013, 431743, 936887, 655262, 828591, 392495, 70139, 325696, 307118, 597196, 477295, 751006, 932965};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int towns = 50;
    int origin = 13;
    int destination = 14;
    vector<string> travelCosts = {"45 47 803102", "9 33 379724", "36 13 770352", "37 4 289136", "21 16 27528", "31 43 496488", "3 34 110360", "49 3 256218", "25 14 475832", "46 27 416157", "24 21 794937", "48 36 800097", "5 12 175323", "29 35 826952", "42 24 431032", "44 41 724270", "38 9 794317", "12 32 681515", "7 15 92710", "18 39 289609", "43 37 593778", "13 23 796253", "11 10 283035", "10 38 186795", "6 7 230469", "2 28 208832", "26 49 760696", "33 30 411141", "35 5 855780", "39 6 446830", "4 22 568323", "41 31 829613", "40 25 362117", "19 29 768820", "47 46 459938", "22 2 684849", "27 1 151634", "0 19 290670", "34 48 555632", "28 0 292870", "1 42 833100", "14 18 518538", "23 8 406504", "30 17 454647", "32 40 138814", "17 45 711932", "16 44 659992", "8 11 338212", "20 26 162977", "15 20 423119"};
    vector<int> profits = {1, 5, 0, 1, 5, 5, 3, 4, 1, 2, 7, 2, 7, 9, 2, 1, 4, 5, 3, 2, 8, 1, 7, 1, 9, 1, 9, 5, 0, 3, 0, 1, 8, 0, 3, 3, 8, 8, 9, 9, 0, 8, 3, 0, 8, 6, 3, 4, 3, 6};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -18603817";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int towns = 50;
    int origin = 13;
    int destination = 14;
    vector<string> travelCosts = {"49 0 589169", "21 10 960040", "46 22 579379", "17 20 492484", "31 18 255354", "12 36 891941", "1 6 195008", "6 41 670471", "16 37 270197", "43 38 322466", "23 35 389933", "42 32 760188", "9 12 438756", "14 11 606555", "2 43 818115", "35 8 966732", "29 19 562279", "19 21 349754", "37 1 933538", "4 14 899253", "25 40 473054", "28 49 461801", "0 7 187772", "20 28 484456", "40 26 391480", "10 17 697215", "32 2 442176", "41 29 227281", "26 24 985157", "45 9 57396", "39 15 800764", "48 39 536032", "38 3 308281", "7 4 559249", "34 45 670978", "27 46 702317", "13 31 48829", "47 16 657350", "22 25 803986", "11 34 728508", "33 23 514185", "30 44 805537", "5 47 318293", "44 5 573287", "24 13 140945", "3 48 778154", "18 42 74482", "15 33 262609", "8 30 73433", "36 27 344476"};
    vector<int> profits = {3, 2, 0, 3, 0, 4, 8, 9, 3, 7, 9, 6, 3, 1, 9, 6, 4, 9, 4, 3, 9, 0, 7, 7, 8, 9, 7, 1, 5, 1, 0, 8, 3, 0, 3, 3, 7, 1, 5, 0, 0, 4, 9, 4, 7, 8, 2, 2, 7, 8};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -18246007";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int towns = 50;
    int origin = 49;
    int destination = 14;
    vector<string> travelCosts = {"20 16 4", "29 0 7", "7 1 2", "15 8 8", "48 38 1", "19 27 9", "17 14 6", "43 19 2", "11 31 10", "47 32 6", "0 11 3", "46 2 8", "31 41 1", "39 30 9", "13 5 2", "22 45 7", "42 7 8", "40 6 1", "34 36 6", "16 10 4", "28 21 3", "1 43 4", "18 22 4", "5 48 4", "27 13 8", "3 23 8", "10 3 1", "4 47 6", "14 25 8", "41 34 4", "21 17 4", "6 46 10", "2 9 5", "35 12 7", "38 18 2", "24 39 6", "8 29 7", "45 35 3", "36 26 5", "44 40 8", "37 42 4", "9 24 9", "26 20 9", "12 15 10", "30 4 7", "32 37 3", "33 44 4", "25 33 10", "23 28 4"};
    vector<int> profits = {792115, 129247, 477669, 339533, 204429, 982580, 249601, 354508, 35469, 791144, 305068, 914930, 725017, 762443, 222495, 1608, 498955, 220090, 96167, 152757, 661484, 365453, 840054, 738920, 78778, 243388, 807886, 125606, 131171, 44803, 539595, 441785, 692551, 17264, 781318, 896980, 999844, 549418, 769987, 553813, 859062, 75054, 468742, 102577, 355997, 209736, 622686, 854952, 948326, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int towns = 50;
    int origin = 49;
    int destination = 14;
    vector<string> travelCosts = {"31 47 1", "8 25 1", "15 32 1", "22 48 1", "36 6 1", "18 1 1", "41 17 1", "42 22 1", "11 45 1", "13 42 1", "21 30 1", "34 2 1", "28 7 1", "6 46 1", "43 24 1", "9 13 1", "32 35 1", "48 23 1", "16 43 1", "10 40 1", "24 10 1", "47 5 1", "44 12 1", "1 9 1", "33 41 1", "7 15 1", "23 20 1", "37 34 1", "29 33 1", "46 37 1", "5 29 1", "14 28 1", "4 8 1", "38 39 1", "30 44 1", "25 26 1", "26 21 1", "19 18 1", "12 19 1", "35 27 1", "17 16 1", "45 31 1", "27 11 1", "3 36 1", "0 14 1", "39 4 1", "2 0 1", "20 3 1", "40 38 1"};
    vector<int> profits = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int towns = 5;
    int origin = 2;
    int destination = 1;
    vector<string> travelCosts = {"4 1 10312", "4 1 10186", "2 4 10883", "1 1 10047", "3 4 10262", "4 2 10593", "2 0 10199", "1 2 10368", "4 3 10932", "3 4 10977", "1 0 10503", "0 1 10116", "3 0 10776", "1 1 10419", "4 4 10248", "3 1 10652", "3 0 10983", "4 3 10057", "2 3 10287", "0 1 10173", "4 2 10513", "4 4 10907", "1 2 10417", "2 3 10799", "3 4 10355", "2 3 10928", "4 3 10815", "4 3 10189", "3 0 10029", "0 2 10305", "0 1 10869", "4 1 10033", "3 4 10687", "0 1 10010", "1 1 10107", "4 3 10535", "2 0 10295", "3 1 10883", "4 2 10019", "3 4 10986", "0 0 10115", "1 1 10908", "1 4 10482", "3 4 10965", "3 1 10776", "0 0 10517", "2 4 10839", "3 4 10725", "3 3 10937", "2 3 10114"};
    vector<int> profits = {10991, 10223, 10724, 10458, 10249};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int towns = 20;
    int origin = 16;
    int destination = 16;
    vector<string> travelCosts = {"1 1 10806", "5 13 10388", "5 7 10678", "3 19 10233", "10 3 10875", "2 5 10664", "7 12 10151", "4 14 10066", "2 2 10033", "7 13 10641", "3 14 10843", "2 11 10148", "10 16 10695", "0 11 10135", "13 2 10150", "0 16 10376", "5 4 10688", "16 0 10003", "14 3 10617", "19 10 10650", "13 5 10976", "8 7 10260", "16 9 10596", "11 9 10268", "18 2 10222", "9 15 10478", "17 0 10562", "5 8 10363", "0 14 10198", "9 6 10360", "11 19 10885", "8 19 10285", "8 15 10594", "16 18 10196", "16 9 10970", "18 10 10145", "17 7 10385", "11 4 10545", "6 5 10692", "4 6 10858", "4 18 10389", "10 18 10480", "7 18 10927", "1 14 10425", "9 11 10166", "0 1 10596", "5 18 10443", "3 2 10100", "0 8 10217", "12 13 10763"};
    vector<int> profits = {10442, 10017, 10741, 10183, 10379, 10479, 10663, 10026, 10237, 10942, 10620, 10964, 10720, 10409, 10927, 10886, 10521, 10348, 10483, 10427};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int towns = 17;
    int origin = 13;
    int destination = 2;
    vector<string> travelCosts = {"5 15 10284", "5 0 10271", "13 12 10447", "6 0 10633", "15 8 10055", "2 0 10784", "4 15 10020", "6 11 10778", "5 8 10900", "15 13 10948", "8 1 10830", "0 14 10733", "11 10 10895", "11 8 10166", "10 14 10075", "12 16 10907", "9 4 10821", "5 1 10127", "14 6 10518", "4 4 10777", "7 12 10947", "9 4 10232", "10 6 10947", "15 8 10747", "12 9 10256", "16 5 10944", "4 5 10203", "6 1 10842", "2 16 10396", "6 3 10701", "6 2 10957", "6 11 10506", "12 4 10267", "2 3 10688", "1 6 10105", "5 14 10871", "8 1 10826", "7 15 10287", "15 0 10383", "4 14 10718", "6 3 10241", "12 9 10134", "12 12 10427", "2 15 10070", "8 7 10229", "6 12 10980", "10 11 10582", "9 9 10209", "1 7 10339", "9 3 10492"};
    vector<int> profits = {10796, 10852, 10795, 10037, 10586, 10197, 10524, 10827, 10280, 10951, 10687, 10289, 10373, 10235, 10675, 10602, 10888};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int towns = 17;
    int origin = 13;
    int destination = 2;
    vector<string> travelCosts = {"5 15 10284", "5 0 10271", "13 12 10447", "6 0 10633", "15 8 10055", "2 0 10784", "4 15 10020", "6 11 10778", "5 8 10900", "15 13 10948", "8 1 10830", "0 14 10733", "11 10 10895", "11 8 10166", "10 14 10075", "12 16 10907", "9 4 10821", "5 1 10127", "14 6 10518", "4 4 10777", "7 12 10947", "9 4 10232", "10 6 10947", "15 8 10747", "12 9 10256", "16 5 10944", "4 5 10203", "6 1 10842", "2 16 10396", "6 3 10701", "6 2 10957", "6 11 10506", "12 4 10267", "2 3 10688", "1 6 10105", "5 14 10871", "8 1 10826", "7 15 10287", "15 0 10383", "4 14 10718", "6 3 10241", "12 9 10134", "12 12 10427", "2 15 10070", "8 7 10229", "6 12 10980", "10 11 10582", "9 9 10209", "1 7 10339", "9 3 10492"};
    vector<int> profits = {10796, 10852, 10795, 10037, 10586, 10197, 10524, 10827, 10280, 10951, 10687, 10289, 10373, 10235, 10675, 10602, 10888};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int towns = 20;
    int origin = 12;
    int destination = 6;
    vector<string> travelCosts = {"6 1 10565", "4 8 10844", "13 5 10442", "17 17 10262", "0 10 10287", "11 6 10031", "4 10 10443", "0 9 10238", "15 3 10636", "9 2 10669", "16 8 10502", "13 4 10383", "18 10 10308", "0 7 10185", "14 19 10027", "2 3 10673", "13 7 10215", "8 0 10716", "18 7 10299", "14 17 10061", "15 5 10401", "18 18 10278", "1 16 10148", "1 8 10415", "18 3 10527", "17 5 10990", "11 10 10589", "18 18 10989", "15 8 10837", "6 2 10594", "8 18 10959", "1 8 10849", "19 1 10406", "19 14 10774", "7 12 10217", "14 1 10374", "4 12 10924", "13 3 10014", "15 10 10882", "12 16 10517", "18 16 10587", "9 10 10947", "18 9 10980", "16 1 10994", "3 8 10878", "12 2 10659", "7 18 10364", "3 3 10559", "10 18 10609", "4 2 10517"};
    vector<int> profits = {10481, 10792, 10346, 10420, 10201, 10496, 10719, 10812, 10597, 10699, 10180, 10798, 10045, 10323, 10866, 10275, 10036, 10680, 10935, 10475};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int towns = 4;
    int origin = 3;
    int destination = 1;
    vector<string> travelCosts = {"1 3 10816", "0 2 10312", "2 0 10126", "0 1 10214", "2 2 10997", "2 2 10735", "0 2 10759", "0 0 10978", "0 2 10912", "2 1 10103", "3 2 10262", "0 3 10896", "0 1 10405", "3 1 10574", "1 3 10868", "2 2 10962", "2 2 10996", "1 3 10605", "0 3 10383", "0 1 10717", "3 0 10995", "1 0 10174", "1 1 10047", "2 0 10008", "0 1 10688", "0 0 10474", "3 2 10808", "3 3 10471", "0 3 10486", "0 3 10963", "1 2 10536", "0 3 10076", "3 1 10897", "2 3 10773", "3 0 10975", "3 0 10147", "1 3 10377", "1 3 10128", "1 3 10028", "3 3 10987", "3 0 10462", "3 1 10065", "3 0 10342", "1 2 10402", "2 1 10818", "1 0 10810", "0 1 10342", "1 3 10761", "2 0 10672", "2 3 10460"};
    vector<int> profits = {10453, 10862, 10192, 10267};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int towns = 5;
    int origin = 4;
    int destination = 3;
    vector<string> travelCosts = {"1 3 10607", "1 3 10581", "4 2 10335", "3 1 10289", "2 2 10311", "2 3 10528", "0 0 10758", "4 2 10189", "3 3 10819", "1 4 10431", "1 0 10334", "4 2 10788", "2 3 10702", "3 3 10463", "2 0 10792", "0 4 10315", "0 2 10557", "1 1 10490", "0 4 10045", "4 2 10729", "0 4 10817", "0 3 10571", "0 0 10706", "4 0 10874", "2 4 10867", "4 0 10261", "1 2 10260", "3 3 10721", "3 3 10085", "3 0 10823", "0 0 10499", "4 2 10017", "0 4 10014", "1 3 10827", "2 0 10391", "4 1 10371", "3 2 10999", "3 3 10384", "2 1 10013", "2 2 10408", "2 2 10000", "1 1 10773", "0 3 10217", "2 1 10036", "4 3 10043", "2 0 10032", "4 0 10316", "0 0 10454", "4 2 10288", "4 2 10510"};
    vector<int> profits = {10254, 10444, 10554, 10255, 10513};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int towns = 5;
    int origin = 3;
    int destination = 3;
    vector<string> travelCosts = {"3 2 10304", "1 3 10479", "1 0 10707", "2 1 10398", "1 2 10010", "3 3 10264", "4 3 10038", "0 0 10116", "2 2 10459", "3 3 10818", "2 3 10720", "3 4 10488", "3 1 10870", "2 0 10296", "1 2 10431", "1 0 10824", "3 1 10939", "1 1 10874", "3 0 10988", "4 4 10254", "2 3 10852", "0 1 10842", "0 1 10995", "1 4 10372", "2 0 10324", "0 3 10881", "4 1 10118", "4 3 10496", "0 3 10547", "1 2 10188", "0 2 10828", "4 4 10771", "3 1 10498", "0 4 10067", "3 4 10877", "2 4 10642", "1 4 10924", "4 0 10112", "2 2 10675", "1 3 10424", "4 0 10178", "4 2 10657", "1 0 10054", "4 1 10238", "3 4 10859", "2 3 10644", "4 4 10768", "3 0 10875", "2 3 10487", "4 4 10298"};
    vector<int> profits = {10409, 10611, 10208, 10587, 10620};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int towns = 3;
    int origin = 1;
    int destination = 0;
    vector<string> travelCosts = {"2 2 10755", "2 1 10900", "1 2 10918", "2 1 10847", "1 0 10643", "1 2 10705", "1 2 10870", "2 1 10928", "2 1 10143", "1 2 10237", "2 2 10665", "0 2 10118", "2 0 10071", "0 1 10414", "1 2 10744", "0 2 10910", "2 0 10143", "0 0 10853", "1 0 10802", "0 1 10730", "2 1 10809", "2 1 10988", "0 1 10141", "2 1 10172", "2 1 10638", "0 1 10727", "0 1 10207", "2 2 10029", "1 1 10205", "0 1 10155", "0 1 10983", "2 0 10740", "1 0 10381", "1 0 10824", "2 0 10917", "2 0 10007", "1 1 10094", "0 2 10105", "2 1 10616", "2 2 10122", "2 0 10860", "2 2 10847", "2 1 10203", "1 2 10997", "2 1 10997", "1 2 10297", "2 0 10809", "2 0 10675", "1 0 10748", "2 1 10831"};
    vector<int> profits = {10476, 10169, 10358};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int towns = 2;
    int origin = 0;
    int destination = 0;
    vector<string> travelCosts = {"1 0 10001", "1 0 10245", "1 0 10440", "1 1 10492", "1 1 10901", "0 1 10681", "0 1 10247", "0 1 10027", "1 1 10056", "1 1 10728", "1 0 10472", "0 1 10976", "1 1 10374", "0 0 10095", "0 0 10055", "1 0 10826", "1 0 10114", "0 0 10349", "1 1 10284", "1 0 10967", "1 1 10979", "1 0 10074", "1 1 10251", "0 1 10982", "1 1 10364", "0 1 10886", "1 0 10047", "1 0 10049", "0 0 10413", "0 1 10085", "1 1 10819", "0 0 10967", "0 0 10126", "0 0 10738", "0 1 10293", "0 0 10046", "0 1 10382", "1 0 10845", "1 0 10869", "0 0 10806", "1 1 10385", "0 1 10134", "1 1 10324", "0 1 10034", "0 1 10359", "1 1 10355", "0 0 10848", "0 1 10008", "1 0 10480", "0 0 10252"};
    vector<int> profits = {10461, 10960};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int towns = 1;
    int origin = 0;
    int destination = 0;
    vector<string> travelCosts = {"0 0 10415", "0 0 10158", "0 0 10002", "0 0 10967", "0 0 10954", "0 0 10710", "0 0 10795", "0 0 10633", "0 0 10814", "0 0 10958", "0 0 10566", "0 0 10268", "0 0 10870", "0 0 10520", "0 0 10850", "0 0 10721", "0 0 10082", "0 0 10288", "0 0 10333", "0 0 10263", "0 0 10571", "0 0 10052", "0 0 10810", "0 0 10940", "0 0 10580", "0 0 10629", "0 0 10592", "0 0 10185", "0 0 10389", "0 0 10821", "0 0 10063", "0 0 10234", "0 0 10491", "0 0 10486", "0 0 10536", "0 0 10301", "0 0 10787", "0 0 10844", "0 0 10754", "0 0 10683", "0 0 10591", "0 0 10394", "0 0 10362", "0 0 10067", "0 0 10327", "0 0 10992", "0 0 10486", "0 0 10245", "0 0 10204", "0 0 10048"};
    vector<int> profits = {10421};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int towns = 1;
    int origin = 0;
    int destination = 0;
    vector<string> travelCosts = {"0 0 10248", "0 0 10882", "0 0 10290", "0 0 10472", "0 0 10781", "0 0 10008", "0 0 10338", "0 0 10978", "0 0 10459", "0 0 10622", "0 0 10429", "0 0 10670", "0 0 10094", "0 0 10641", "0 0 10857", "0 0 10384", "0 0 10117", "0 0 10119", "0 0 10963", "0 0 10648", "0 0 10282", "0 0 10183", "0 0 10391", "0 0 10886", "0 0 10459", "0 0 10046", "0 0 10460", "0 0 10316", "0 0 10499", "0 0 10440", "0 0 10351", "0 0 10479", "0 0 10707", "0 0 10325", "0 0 10158", "0 0 10691", "0 0 10579", "0 0 10162", "0 0 10121", "0 0 10267", "0 0 10871", "0 0 10066", "0 0 10875", "0 0 10039", "0 0 10200", "0 0 10919", "0 0 10229", "0 0 10599", "0 0 10500", "0 0 10248"};
    vector<int> profits = {10117};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int towns = 8;
    int origin = 0;
    int destination = 1;
    vector<string> travelCosts = {"7 0 10993", "1 5 10728", "2 1 10016", "1 2 10775", "1 0 10435", "0 1 10387", "2 3 10804", "0 1 10183", "5 2 10172", "3 6 10517", "4 5 10973", "6 6 10394", "6 1 10636", "6 2 10694", "5 4 10286", "0 4 10991", "4 6 10306", "0 6 10147", "7 3 10909", "3 6 10203", "0 3 10129", "5 1 10279", "0 7 10408", "4 5 10875", "2 2 10431", "0 2 10299", "7 6 10041", "1 6 10119", "4 5 10562", "1 1 10848", "4 1 10107", "5 7 10684", "5 7 10307", "5 3 10640", "0 5 10162", "7 5 10309", "2 4 10819", "3 5 10498", "2 1 10879", "4 2 10784", "5 6 10434", "0 4 10449", "5 1 10928", "0 6 10507", "1 7 10232", "3 6 10741", "0 1 10025", "4 4 10094", "6 7 10391", "5 3 10881"};
    vector<int> profits = {1004, 1055, 1041, 1048, 1045, 1012, 1028, 1004};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -7966";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int towns = 6;
    int origin = 5;
    int destination = 1;
    vector<string> travelCosts = {"2 0 10683", "4 5 10663", "4 0 10809", "3 5 10827", "2 4 10980", "4 5 10253", "5 4 10709", "2 5 10027", "4 2 10046", "5 5 10741", "5 4 10377", "5 0 10188", "4 2 10684", "0 5 10123", "3 1 10539", "3 3 10211", "2 2 10303", "0 5 10857", "3 1 10945", "2 4 10794", "5 3 10046", "2 2 10498", "0 5 10428", "4 5 10275", "1 2 100078", "0 5 10824", "3 1 10752", "1 1 100779", "0 3 10806", "3 3 10585", "2 2 10094", "4 2 10335", "1 2 100618", "3 0 10105", "5 5 10975", "3 3 10856", "1 1 100705", "0 0 10233", "1 0 100818", "4 1 10859", "5 1 10745", "1 0 100909", "0 5 10835", "4 2 10263", "5 5 10316", "2 3 10885", "2 2 10182", "4 0 10510", "3 0 10430"};
    vector<int> profits = {10315, 10540, 10888, 10174, 10355, 10677};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int towns = 2;
    int origin = 0;
    int destination = 1;
    vector<string> travelCosts = {"0 1 1000000", "1 1 999999"};
    vector<int> profits = {47, 1000000};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int towns = 2;
    int origin = 0;
    int destination = 1;
    vector<string> travelCosts = {"0 1 1000000", "1 1 999999"};
    vector<int> profits = {47, 999999};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 46";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int towns = 50;
    int origin = 1;
    int destination = 0;
    vector<string> travelCosts = {"0 1 1000000", "1 1 999999"};
    vector<int> profits = {47, 999999, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int towns = 6;
    int origin = 5;
    int destination = 1;
    vector<string> travelCosts = {"2 0 10683", "4 5 10663", "4 0 10809", "3 5 10827", "2 4 10980", "4 5 10253", "5 4 10709", "2 5 10027", "4 2 10046", "5 5 10741", "5 4 10377", "5 0 10188", "4 2 10684", "0 5 10123", "3 1 10539", "3 3 10211", "2 2 10303", "0 5 10857", "3 1 10945", "2 4 10794", "5 3 10046", "2 2 10498", "0 5 10428", "4 5 10275", "1 1 100078", "0 5 10824", "3 1 1752", "1 1 100779", "0 3 10806", "3 3 10585", "2 2 10094", "4 2 10335", "1 1 100618", "3 0 10105", "5 5 10975", "3 3 10856", "1 1 100705", "0 0 10233", "1 1 100818", "4 1 900859", "5 1 10745", "1 1 100909", "0 5 10835", "4 2 10263", "5 5 10316", "2 3 10885", "2 2 10182", "4 0 10510", "3 0 10430"};
    vector<int> profits = {9315, 9540, 9888, 9174, 9355, 9677};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 16593";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int towns = 50;
    int origin = 0;
    int destination = 49;
    vector<string> travelCosts = {"0 1 1000000", "1 2 1000000", "2 3 1000000", "3 4 1000000", "4 5 1000000", "5 6 1000000", "6 7 1000000", "7 8 1000000", "8 9 1000000", "9 10 1000000", "10 11 1000000", "11 12 1000000", "12 13 1000000", "13 14 1000000", "14 15 1000000", "15 16 1000000", "16 17 1000000", "17 18 1000000", "18 19 1000000", "19 20 1000000", "20 21 1000000", "21 22 1000000", "22 23 1000000", "23 24 1000000", "24 25 1000000", "25 26 1000000", "26 27 1000000", "27 28 1000000", "28 29 1000000", "29 30 1000000", "30 31 1000000", "31 32 1000000", "32 33 1000000", "33 34 1000000", "34 35 1000000", "35 36 1000000", "36 37 1000000", "37 38 1000000", "38 39 1000000", "39 40 1000000", "40 41 1000000", "41 42 1000000", "42 43 1000000", "43 44 1000000", "44 45 1000000", "45 46 1000000", "46 47 1000000", "47 48 1000000", "48 0 1000000", "48 49 1000000"};
    vector<int> profits = {999999, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -1";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int towns = 50;
    int origin = 0;
    int destination = 49;
    vector<string> travelCosts = {"0 1 1000000", "1 2 1000000", "2 3 1000000", "3 4 1000000", "4 5 1000000", "5 6 1000000", "6 7 1000000", "7 8 1000000", "8 9 1000000", "9 10 1000000", "10 11 1000000", "11 12 1000000", "12 13 1000000", "13 14 1000000", "14 15 1000000", "15 16 1000000", "16 17 1000000", "17 18 1000000", "18 19 1000000", "19 20 1000000", "20 21 1000000", "21 22 1000000", "22 23 1000000", "23 24 1000000", "24 25 1000000", "25 26 1000000", "26 27 1000000", "27 28 1000000", "28 29 1000000", "29 30 1000000", "30 31 1000000", "31 32 1000000", "32 33 1000000", "33 34 1000000", "34 35 1000000", "35 36 1000000", "36 37 1000000", "37 38 1000000", "38 39 1000000", "39 40 1000000", "40 41 1000000", "41 42 1000000", "42 43 1000000", "43 44 1000000", "44 45 1000000", "45 46 1000000", "46 47 1000000", "47 48 1000000", "48 0 1", "48 49 1000000"};
    vector<int> profits = {0, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -1000000";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int towns = 7;
    int origin = 4;
    int destination = 4;
    vector<string> travelCosts = {"0 0 1", "0 1 1", "0 2 1", "0 3 1", "0 4 1", "0 5 1", "0 6 1", "1 0 1", "1 1 1", "1 2 1", "1 3 1", "1 4 1", "1 5 1", "1 6 1", "2 0 1", "2 1 1", "2 2 1", "2 3 1", "2 4 1", "2 5 1", "2 6 1", "3 0 1", "3 1 1", "3 2 1", "3 3 1", "3 4 1", "3 5 1", "3 6 1", "4 0 1", "4 1 1", "4 2 1", "4 3 1", "4 4 1", "4 5 1", "4 6 1", "5 0 1", "5 1 1", "5 2 1", "5 3 1", "5 4 1", "5 5 1", "5 6 1", "6 0 1", "6 1 1", "6 2 1", "6 3 1", "6 4 1", "6 5 1", "6 6 1"};
    vector<int> profits = {0, 0, 0, 0, 0, 0, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 0";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int towns = 17;
    int origin = 3;
    int destination = 10;
    vector<string> travelCosts = {"8 14 376", "0 12 648", "4 11 747", "12 13 443", "13 7 404", "11 16 172", "4 4 251", "10 2 215", "1 16 309", "9 14 504", "3 3 146", "9 2 541", "1 4 715", "14 12 297", "7 10 446", "8 12 368", "8 7 445", "2 5 691", "13 0 629", "6 4 597", "4 0 9", "11 0 393", "7 1 740", "0 5 504", "11 3 637", "15 4 188", "0 2 454", "14 3 500", "2 4 52", "16 6 444", "10 4 707", "6 8 242", "8 11 116", "8 4 708", "8 10 281", "5 16 442", "15 5 537", "4 6 421", "1 13 10", "16 10 231", "11 15 645", "5 3 388", "4 1 211", "14 8 171", "16 9 577", "15 15 498", "8 9 694", "8 5 745", "14 16 79", "8 8 714"};
    vector<int> profits = {672, 575, 52, 385, 615, 559, 292, 617, 562, 701, 744, 503, 552, 359, 286, 200, 762};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int towns = 17;
    int origin = 7;
    int destination = 10;
    vector<string> travelCosts = {"7 13 115", "16 15 266", "13 15 381", "12 12 38", "3 11 327", "9 1 139", "7 6 105", "12 4 81", "13 8 536", "5 7 557", "1 5 117", "12 1 484", "0 7 234", "11 12 196", "13 5 556", "5 2 122", "7 8 398", "6 3 134", "3 13 398", "14 16 185", "4 4 233", "12 4 8", "5 9 205", "8 2 245", "5 14 499", "7 12 241", "9 2 67", "9 12 321", "9 9 304", "9 2 63", "7 0 178", "9 14 448", "14 1 71", "15 6 470", "0 11 49", "7 2 346", "13 3 500", "10 8 447", "1 16 359", "3 7 233", "14 8 476", "0 2 133", "3 11 319", "6 2 562", "4 1 333", "13 3 195", "5 5 407", "2 4 56", "6 14 240", "15 11 459"};
    vector<int> profits = {498, 188, 23, 436, 524, 346, 26, 94, 304, 21, 41, 250, 247, 84, 360, 471, 455};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int towns = 24;
    int origin = 4;
    int destination = 5;
    vector<string> travelCosts = {"8 12 471", "20 1 16", "8 15 98", "23 1 259", "8 7 125", "17 18 180", "9 10 79", "7 17 194", "3 4 484", "7 2 10", "22 20 120", "4 1 59", "1 11 280", "0 10 152", "14 18 263", "8 17 460", "17 16 324", "9 13 437", "4 0 172", "6 2 304", "15 22 440", "3 20 285", "17 4 270", "13 18 467", "19 19 225", "22 23 96", "22 9 340", "7 6 401", "6 21 164", "14 10 72", "1 7 141", "7 20 61", "2 9 30", "8 2 67", "10 14 411", "16 2 229", "13 11 16", "23 11 269", "1 17 41", "11 15 364", "1 9 289", "15 16 159", "7 16 158", "0 21 184", "11 2 45", "3 22 364", "7 7 254", "21 2 456", "6 4 485", "10 6 263"};
    vector<int> profits = {411, 168, 20, 392, 14, 121, 255, 352, 379, 126, 191, 253, 258, 14, 121, 480, 32, 391, 210, 147, 83, 36, 396, 493};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int towns = 23;
    int origin = 16;
    int destination = 1;
    vector<string> travelCosts = {"19 15 377", "3 5 441", "15 22 262", "19 22 478", "1 4 308", "10 0 712", "8 18 480", "15 15 84", "6 3 143", "10 1 323", "3 3 593", "14 6 210", "12 3 644", "13 20 450", "16 5 649", "10 5 117", "16 13 470", "12 10 380", "20 18 335", "8 10 350", "2 8 723", "10 7 481", "4 16 206", "5 0 143", "4 2 592", "16 1 198", "4 17 88", "13 20 90", "6 1 643", "10 0 210", "7 21 38", "20 11 655", "10 9 688", "1 9 253", "12 9 291", "21 2 391", "14 6 281", "5 19 192", "1 22 26", "9 15 514", "13 17 133", "22 14 665", "20 14 512", "13 11 696", "10 3 484", "10 4 302", "14 1 294", "9 21 380", "13 15 138", "2 19 673"};
    vector<int> profits = {28, 74, 145, 111, 550, 227, 66, 197, 152, 200, 320, 338, 695, 237, 125, 106, 48, 384, 1, 288, 25, 390, 68};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int towns = 28;
    int origin = 23;
    int destination = 3;
    vector<string> travelCosts = {"21 13 124", "0 20 611", "25 1 693", "6 19 149", "6 14 698", "4 6 638", "15 3 799", "12 6 129", "10 0 731", "13 19 616", "4 12 560", "19 25 762", "20 25 208", "11 21 327", "17 5 832", "5 24 793", "3 14 618", "23 26 577", "19 12 673", "4 25 383", "12 17 758", "27 0 357", "4 26 658", "14 0 856", "2 19 855", "18 0 73", "20 27 821", "22 23 299", "7 18 594", "4 1 893", "26 15 842", "2 21 77", "21 12 76", "4 20 513", "24 13 783", "2 5 366", "18 12 54", "1 25 5", "16 11 186", "14 0 895", "20 26 774", "18 16 77", "2 1 558", "20 16 347", "21 19 811", "18 10 36", "23 9 175", "13 11 487", "7 22 502", "15 6 209"};
    vector<int> profits = {707, 665, 138, 400, 522, 840, 243, 626, 853, 870, 18, 149, 490, 451, 101, 439, 398, 757, 103, 205, 408, 392, 823, 595, 13, 389, 409, 429};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int towns = 35;
    int origin = 8;
    int destination = 18;
    vector<string> travelCosts = {"26 10 29", "34 22 478", "8 8 348", "13 32 721", "28 20 188", "34 22 363", "21 20 806", "0 32 707", "22 12 473", "10 24 110", "25 26 100", "19 27 443", "27 21 264", "26 2 37", "24 17 129", "8 18 774", "18 15 680", "10 33 898", "31 1 522", "1 14 13", "0 28 580", "3 4 678", "19 27 455", "7 22 243", "0 25 534", "20 16 884", "15 28 549", "6 13 386", "11 20 485", "2 23 557", "33 23 455", "18 8 594", "0 18 803", "28 13 311", "33 24 657", "15 18 80", "27 27 675", "31 7 47", "1 30 380", "0 3 894", "2 10 370", "32 31 598", "21 13 345", "10 10 596", "22 28 57", "1 31 67", "30 32 839", "6 3 145", "31 22 167", "6 27 278"};
    vector<int> profits = {227, 411, 328, 354, 293, 808, 334, 661, 355, 755, 793, 440, 861, 382, 794, 165, 143, 800, 225, 153, 403, 249, 715, 857, 533, 503, 688, 490, 106, 491, 796, 166, 80, 371, 201};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int towns = 27;
    int origin = 10;
    int destination = 10;
    vector<string> travelCosts = {"13 9 49", "25 18 102", "5 5 98", "11 15 78", "20 0 193", "10 8 78", "14 7 164", "3 5 178", "26 2 138", "2 7 132", "4 25 145", "24 7 150", "10 7 132", "6 5 198", "15 12 19", "5 23 148", "17 17 51", "14 20 74", "25 5 172", "10 14 143", "0 21 76", "9 3 175", "6 6 193", "11 8 165", "4 9 121", "9 20 164", "26 0 107", "13 24 95", "15 16 131", "18 14 24", "9 7 189", "13 14 199", "7 13 155", "21 9 59", "14 24 20", "19 8 14", "7 22 89", "11 2 159", "3 10 24", "7 25 196", "1 8 168", "23 12 83", "6 24 193", "21 9 133", "23 14 182", "21 4 162", "5 2 191", "12 16 33", "2 21 82", "6 22 35"};
    vector<int> profits = {177, 132, 182, 10, 48, 79, 161, 139, 27, 54, 65, 141, 180, 177, 20, 35, 18, 162, 145, 122, 0, 113, 0, 44, 46, 144, 143};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int towns = 37;
    int origin = 35;
    int destination = 25;
    vector<string> travelCosts = {"19 31 25", "0 19 12", "34 15 59", "11 25 27", "28 31 45", "2 7 24", "8 27 47", "15 27 51", "19 13 77", "17 16 76", "2 28 47", "24 27 21", "9 23 44", "7 3 11", "17 10 9", "4 25 66", "12 23 39", "18 12 74", "32 21 33", "7 19 77", "15 23 8", "25 30 74", "14 17 3", "3 33 42", "2 35 21", "8 23 76", "10 1 50", "4 26 42", "30 12 53", "6 4 60", "13 26 16", "13 9 9", "30 1 27", "18 25 3", "8 20 40", "31 32 24", "19 11 19", "10 3 34", "36 14 3", "10 34 26", "35 7 77", "9 25 61", "26 17 68", "24 26 42", "7 0 36", "28 7 79", "28 3 50", "23 4 46", "14 13 18", "5 8 78"};
    vector<int> profits = {46, 0, 73, 63, 1, 37, 7, 50, 43, 4, 51, 75, 23, 14, 39, 50, 33, 71, 37, 16, 19, 26, 1, 9, 0, 13, 36, 8, 47, 55, 69, 61, 17, 0, 46, 47, 58};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int towns = 35;
    int origin = 15;
    int destination = 18;
    vector<string> travelCosts = {"26 10 29", "34 22 478", "8 8 348", "13 32 721", "28 20 188", "34 22 363", "21 20 806", "0 32 707", "22 12 473", "10 24 110", "25 26 100", "19 27 443", "27 21 264", "26 2 37", "24 17 129", "8 18 774", "18 15 680", "10 33 898", "31 1 522", "1 14 13", "0 28 580", "3 4 678", "19 27 455", "7 22 243", "0 25 534", "20 16 884", "15 28 549", "6 13 386", "11 20 485", "2 23 557", "33 23 455", "18 8 594", "0 18 803", "28 13 311", "33 24 657", "15 18 80", "27 27 675", "31 7 47", "1 30 380", "0 3 894", "2 10 370", "32 31 598", "21 13 345", "10 10 596", "22 28 57", "1 31 67", "30 32 839", "6 3 145", "31 22 167", "6 27 278"};
    vector<int> profits = {227, 411, 328, 354, 293, 808, 334, 661, 355, 755, 793, 440, 861, 382, 794, 165, 143, 800, 225, 153, 403, 249, 715, 857, 533, 503, 688, 490, 106, 491, 796, 166, 80, 371, 201};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int towns = 35;
    int origin = 15;
    int destination = 8;
    vector<string> travelCosts = {"26 10 29", "34 22 478", "8 8 348", "13 32 721", "28 20 188", "34 22 363", "21 20 806", "0 32 707", "22 12 473", "10 24 110", "25 26 100", "19 27 443", "27 21 264", "26 2 37", "24 17 129", "8 18 774", "18 15 680", "10 33 898", "31 1 522", "1 14 13", "0 28 580", "3 4 678", "19 27 455", "7 22 243", "0 25 534", "20 16 884", "15 28 549", "6 13 386", "11 20 485", "2 23 557", "33 23 455", "18 8 594", "0 18 803", "28 13 311", "33 24 657", "15 18 80", "27 27 675", "31 7 47", "1 30 380", "0 3 894", "2 10 370", "32 31 598", "21 13 345", "10 10 596", "22 28 57", "1 31 67", "30 32 839", "6 3 145", "31 22 167", "6 27 278"};
    vector<int> profits = {227, 411, 328, 354, 293, 808, 334, 661, 355, 755, 793, 440, 861, 382, 794, 165, 143, 800, 225, 153, 403, 249, 715, 857, 533, 503, 688, 490, 106, 491, 796, 166, 80, 371, 201};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int towns = 30;
    int origin = 5;
    int destination = 5;
    vector<string> travelCosts = {"25 6 56", "15 19 862", "3 0 704", "29 4 854", "20 16 6", "24 27 373", "6 13 641", "3 18 94", "20 2 861", "24 13 936", "3 19 497", "19 18 449", "12 1 537", "26 24 474", "26 25 509", "19 25 523", "5 5 557", "20 11 168", "3 9 563", "25 17 14", "11 24 416", "5 3 840", "21 28 402", "24 23 519", "17 5 939", "7 17 123", "9 9 567", "24 18 742", "1 24 186", "4 16 289", "10 0 297", "7 2 434", "9 7 452", "24 28 306", "4 11 74", "15 8 723", "17 5 399", "22 24 340", "29 27 738", "24 11 178", "20 17 396", "9 12 912", "4 19 914", "16 2 195", "24 6 211", "0 1 551", "1 21 154", "5 28 556", "20 16 387", "23 24 842"};
    vector<int> profits = {912, 677, 284, 215, 344, 364, 584, 731, 231, 570, 921, 219, 765, 101, 709, 320, 586, 3, 148, 191, 720, 781, 659, 460, 823, 416, 626, 620, 941, 477};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int towns = 26;
    int origin = 19;
    int destination = 10;
    vector<string> travelCosts = {"1 13 9", "15 18 19", "11 20 24", "22 14 30", "18 6 26", "23 0 14", "9 3 11", "16 23 12", "25 20 34", "1 13 23", "24 2 7", "13 14 20", "5 25 5", "23 17 6", "20 24 14", "15 14 23", "14 5 37", "11 7 20", "9 22 31", "13 4 26", "25 23 13", "4 14 20", "9 12 33", "24 5 4", "2 15 11", "5 25 18", "21 24 6", "9 3 25", "9 25 32", "6 7 6", "12 21 21", "6 24 23", "4 16 11", "20 16 34", "23 25 22", "16 8 18", "8 10 30", "19 13 35", "7 13 2", "5 9 16", "5 24 37", "16 4 22", "24 15 21", "21 1 21", "1 4 33", "3 2 37", "20 0 2", "22 5 28", "11 25 35", "12 23 32"};
    vector<int> profits = {14, 27, 5, 34, 5, 10, 4, 16, 18, 26, 10, 24, 15, 11, 4, 2, 8, 15, 23, 27, 7, 29, 16, 16, 1, 16};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int towns = 35;
    int origin = 19;
    int destination = 6;
    vector<string> travelCosts = {"26 18 351", "34 4 577", "7 25 60", "20 24 334", "22 26 157", "34 5 610", "12 34 175", "3 19 394", "12 14 582", "10 16 358", "5 30 189", "16 15 413", "22 30 552", "4 6 341", "16 19 341", "22 2 352", "25 24 526", "16 17 439", "17 31 126", "25 16 68", "19 30 476", "10 30 576", "16 6 571", "29 19 64", "32 32 402", "15 19 447", "9 33 286", "3 15 108", "13 5 469", "10 29 156", "4 23 325", "25 28 587", "4 24 462", "9 21 9", "27 21 175", "10 10 317", "5 12 349", "21 20 638", "1 14 508", "18 6 476", "30 16 411", "8 12 355", "30 24 403", "24 25 470", "8 7 539", "18 30 569", "17 13 593", "11 34 531", "7 21 87", "23 5 171"};
    vector<int> profits = {402, 125, 201, 486, 448, 137, 607, 617, 95, 150, 488, 375, 536, 57, 392, 45, 1, 176, 471, 87, 577, 342, 365, 347, 59, 267, 73, 575, 393, 502, 637, 422, 182, 463, 139};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int towns = 26;
    int origin = 15;
    int destination = 18;
    vector<string> travelCosts = {"8 17 116", "6 16 168", "3 17 39", "11 9 238", "20 19 310", "4 2 241", "11 11 194", "1 23 116", "19 18 146", "18 21 314", "19 9 197", "24 25 18", "12 9 181", "2 6 212", "9 0 38", "19 5 157", "15 25 228", "2 14 206", "7 16 122", "12 7 313", "19 14 295", "25 12 231", "15 3 144", "13 5 283", "19 0 276", "22 11 228", "6 14 302", "5 5 296", "14 25 108", "22 10 288", "4 19 90", "7 23 178", "13 7 69", "8 2 247", "5 0 10", "5 12 86", "13 22 254", "15 15 233", "10 8 267", "24 8 243", "17 0 165", "6 19 112", "11 1 96", "13 15 169", "8 2 146", "6 25 282", "23 22 304", "10 14 229", "19 6 234", "4 3 316"};
    vector<int> profits = {314, 215, 209, 272, 154, 299, 8, 176, 128, 266, 128, 173, 236, 44, 113, 134, 101, 83, 80, 173, 169, 52, 226, 67, 136, 118};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int towns = 4;
    int origin = 0;
    int destination = 2;
    vector<string> travelCosts = {"0 1 1000000", "1 3 1000000", "3 1 1000000", "1 2 1000000", "3 3 1"};
    vector<int> profits = {0, 0, 0, 2};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int towns = 41;
    int origin = 28;
    int destination = 37;
    vector<string> travelCosts = {"35 37 258", "13 13 16", "40 29 94", "25 2 243", "14 39 351", "22 16 85", "34 5 228", "8 25 312", "32 0 299", "27 2 50", "1 36 174", "28 14 341", "26 21 8", "20 0 321", "7 20 195", "21 5 314", "23 2 354", "15 15 232", "12 19 75", "11 7 165", "22 6 206", "30 8 133", "11 10 123", "24 0 316", "11 32 301", "20 5 56", "13 1 169", "40 16 376", "1 22 360", "15 33 85", "32 0 19", "24 13 148", "19 24 342", "15 29 373", "28 7 165", "18 18 246", "13 35 173", "0 38 381", "32 32 235", "10 30 35", "17 31 391", "24 9 49", "0 25 73", "9 26 371", "31 20 358", "17 2 386", "22 17 311", "21 36 340", "28 35 121", "5 20 97"};
    vector<int> profits = {23, 167, 105, 29, 405, 275, 105, 351, 201, 27, 400, 61, 143, 332, 12, 129, 41, 376, 138, 401, 306, 219, 219, 144, 13, 322, 342, 145, 76, 297, 384, 396, 128, 123, 392, 35, 3, 316, 298, 310, 169};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 48";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int towns = 42;
    int origin = 18;
    int destination = 38;
    vector<string> travelCosts = {"14 40 430", "36 37 189", "9 38 96", "10 18 454", "15 31 101", "27 7 279", "17 0 336", "29 13 259", "7 3 363", "17 28 422", "1 18 430", "38 2 438", "12 35 274", "8 26 383", "0 35 477", "21 12 430", "32 18 119", "11 0 215", "28 16 32", "20 21 230", "38 32 464", "20 10 330", "36 19 285", "26 40 219", "27 29 484", "4 21 95", "28 8 249", "9 33 47", "7 9 135", "8 5 318", "18 15 422", "14 38 356", "29 36 73", "22 7 101", "22 19 332", "25 3 485", "8 7 251", "27 27 391", "21 4 380", "8 5 448", "33 26 76", "35 3 485", "3 8 383", "13 38 505", "23 24 44", "9 37 223", "21 10 9", "7 28 354", "16 29 366", "15 11 141"};
    vector<int> profits = {194, 128, 148, 179, 21, 505, 69, 383, 282, 202, 145, 142, 32, 153, 98, 142, 436, 216, 235, 86, 148, 500, 317, 185, 2, 208, 137, 450, 64, 198, 138, 399, 87, 484, 318, 142, 500, 369, 271, 43, 284, 230};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -433";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int towns = 7;
    int origin = 2;
    int destination = 2;
    vector<string> travelCosts = {"0 2 8", "4 2 220", "5 2 175", "0 3 170", "1 4 105", "3 0 2", "0 6 230", "1 1 28", "5 4 18", "4 3 158", "1 6 275", "6 5 31", "3 1 67", "4 1 223", "1 5 229", "0 0 191", "3 5 39", "1 4 185", "1 4 112", "0 1 213", "6 0 161", "5 0 96", "5 3 169", "1 3 262", "4 0 123", "1 3 54", "4 3 98", "0 1 108", "3 3 276", "5 5 58", "4 6 230", "0 1 31", "4 4 208", "4 0 44", "4 1 224", "3 6 161", "0 0 266", "4 6 275", "0 6 240", "1 4 116", "0 3 181", "1 4 85", "3 5 173", "4 1 91", "0 6 84", "2 2 239", "1 0 151", "3 3 261", "0 2 16", "3 0 259"};
    vector<int> profits = {147, 270, 117, 94, 141, 104, 224};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 117";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int towns = 7;
    int origin = 1;
    int destination = 1;
    vector<string> travelCosts = {"4 3 167", "0 4 95", "0 1 447", "3 0 116", "0 3 141", "5 3 369", "3 5 522", "3 5 228", "5 5 27", "6 4 441", "0 4 351", "0 1 570", "0 3 369", "4 2 318", "4 1 444", "5 2 264", "4 4 477", "3 2 398", "5 4 103", "0 2 76", "6 5 225", "5 6 383", "2 1 64", "5 1 500", "3 0 115", "0 3 334", "2 2 441", "6 3 234", "6 3 142", "3 4 455", "6 1 116", "4 5 186", "6 2 552", "2 4 430", "3 5 24", "2 4 592", "6 4 407", "4 0 538", "5 4 150", "0 5 589", "5 6 553", "4 2 533", "4 1 313", "4 4 34", "5 5 316", "6 6 412", "3 4 446", "4 0 583", "5 2 454", "6 6 107"};
    vector<int> profits = {400, 515, 342, 467, 62, 49, 56};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 515";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int towns = 7;
    int origin = 5;
    int destination = 5;
    vector<string> travelCosts = {"0 0 294", "0 1 141", "0 1 386", "0 2 166", "0 3 236", "0 4 190", "0 4 212", "0 4 743", "0 5 436", "0 5 510", "0 6 528", "1 0 530", "1 1 485", "1 1 734", "1 2 141", "1 2 754", "1 3 566", "1 4 13", "1 4 319", "1 5 76", "1 6 723", "2 0 556", "2 1 276", "2 4 333", "2 4 97", "2 5 648", "2 6 695", "3 1 136", "3 1 587", "3 2 280", "3 2 660", "3 3 648", "3 4 183", "3 4 523", "3 6 222", "3 6 410", "4 0 553", "4 1 389", "4 1 404", "4 4 657", "4 6 293", "4 6 60", "5 5 272", "5 5 563", "6 1 271", "6 1 453", "6 2 549", "6 2 68", "6 5 423", "6 5 552"};
    vector<int> profits = {361, 619, 642, 576, 422, 184, 284};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 184";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int towns = 7;
    int origin = 5;
    int destination = 5;
    vector<string> travelCosts = {"0 0 294", "0 1 141", "0 2 166", "0 3 236", "0 4 190", "0 5 436", "0 6 528", "1 0 530", "1 1 485", "1 2 141", "1 3 566", "1 4 13", "1 5 76", "1 6 723", "2 0 556", "2 1 276", "2 4 97", "2 5 648", "2 6 695", "3 1 136", "3 2 280", "3 3 648", "3 4 183", "3 6 222", "4 0 553", "4 1 389", "4 4 657", "4 6 60", "5 5 272", "6 1 271", "6 2 68", "6 5 423"};
    vector<int> profits = {361, 619, 642, 576, 422, 184, 284};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 184";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int towns = 3;
    int origin = 0;
    int destination = 0;
    vector<string> travelCosts = {"0 0 2", "1 2 2", "2 1 1", "2 0 1"};
    vector<int> profits = {1, 100, 100};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 1";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int towns = 5;
    int origin = 0;
    int destination = 4;
    vector<string> travelCosts = {"0 4 1", "0 1 1000000", "1 2 1", "2 3 1", "3 1 1", "3 4 1000000"};
    vector<int> profits = {0, 0, 4, 0, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int towns = 6;
    int origin = 0;
    int destination = 1;
    vector<string> travelCosts = {"0 1 10", "0 1 5", "0 1 10", "2 3 1", "3 2 1", "0 2 1", "0 3 1", "0 4 1", "4 4 1", "5 5 1", "5 1 1"};
    vector<int> profits = {100, 100, 100, 100, 100, 100};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 195";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int towns = 5;
    int origin = 0;
    int destination = 4;
    vector<string> travelCosts = {"0 1 10", "1 2 10", "2 3 10", "3 1 10", "0 4 10"};
    vector<int> profits = {0, 10, 10, 110, 10};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 0";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int towns = 2;
    int origin = 0;
    int destination = 1;
    vector<string> travelCosts = {"0 1 1", "0 1 10"};
    vector<int> profits = {1, 1};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 1";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int towns = 5;
    int origin = 0;
    int destination = 4;
    vector<string> travelCosts = {"0 1 13", "1 2 17", "2 4 20", "1 3 4747", "2 0 10", "3 4 10", "0 3 10", "0 3 22"};
    vector<int> profits = {0, 0, 0, 0, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -20";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int towns = 2;
    int origin = 1;
    int destination = 0;
    vector<string> travelCosts = {"1 1 1", "0 0 1"};
    vector<int> profits = {100, 100};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int towns = 2;
    int origin = 0;
    int destination = 1;
    vector<string> travelCosts = {"0 1 1", "0 1 2"};
    vector<int> profits = {0, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -1";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int towns = 5;
    int origin = 0;
    int destination = 4;
    vector<string> travelCosts = {"0 4 1", "0 1 1000000", "1 2 1", "2 3 1", "3 1 1"};
    vector<int> profits = {0, 0, 4, 0, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -1";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int towns = 5;
    int origin = 0;
    int destination = 2;
    vector<string> travelCosts = {"0 1 1", "1 2 1", "1 3 1", "3 4 1", "4 3 1"};
    vector<int> profits = {10, 10, 10, 10, 10};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 28";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int towns = 3;
    int origin = 0;
    int destination = 2;
    vector<string> travelCosts = {"0 1 1", "1 1 1", "0 2 1"};
    vector<int> profits = {0, 1000, 1000};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 999";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int towns = 7;
    int origin = 6;
    int destination = 3;
    vector<string> travelCosts = {"6 3 4", "6 3 5", "6 4 1", "4 5 1", "5 4 1", "1 2 1", "2 1 1", "2 3 1"};
    vector<int> profits = {0, 100, 100, 3, 2, 3, 10};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 9";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int towns = 3;
    int origin = 0;
    int destination = 1;
    vector<string> travelCosts = {"0 1 10", "0 2 10", "2 2 1000"};
    vector<int> profits = {0, 0, 5000};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -10";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int towns = 4;
    int origin = 0;
    int destination = 1;
    vector<string> travelCosts = {"0 1 1", "0 2 1", "2 3 1", "3 2 1"};
    vector<int> profits = {1, 1, 100, 100};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 1";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int towns = 4;
    int origin = 0;
    int destination = 3;
    vector<string> travelCosts = {"0 1 1", "1 2 1", "2 1 1", "0 3 1"};
    vector<int> profits = {10, 10, 10, 10};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 19";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int towns = 13;
    int origin = 0;
    int destination = 12;
    vector<string> travelCosts = {"0 1 1000000", "1 2 1000000", "2 3 1000000", "3 4 1000000", "4 5 1000000", "5 6 1000000", "6 7 1000000", "7 8 1000000", "8 9 1000000", "9 10 1000000", "10 11 1000000", "11 12 1000000"};
    vector<int> profits = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -12000000";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int towns = 2;
    int origin = 0;
    int destination = 0;
    vector<string> travelCosts = {"1 1 1"};
    vector<int> profits = {10, 20};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 10";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int towns = 1;
    int origin = 0;
    int destination = 0;
    vector<string> travelCosts = {"0 0 1", "0 0 2"};
    vector<int> profits = {2};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int towns = 4;
    int origin = 0;
    int destination = 1;
    vector<string> travelCosts = {"0 1 1", "0 2 1", "2 3 1", "3 2 1"};
    vector<int> profits = {0, 0, 2, 2};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -1";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int towns = 3;
    int origin = 0;
    int destination = 2;
    vector<string> travelCosts = {"0 1 1", "1 1 1", "0 2 1"};
    vector<int> profits = {0, 1000000, 1000000};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 999999";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int towns = 3;
    int origin = 0;
    int destination = 2;
    vector<string> travelCosts = {"0 1 1", "1 1 1", "0 2 1"};
    vector<int> profits = {10, 10, 10};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 19";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int towns = 50;
    int origin = 0;
    int destination = 1;
    vector<string> travelCosts = {"0 1 1", "1 2 1", "2 3 1", "3 4 1", "4 5 1", "5 6 1", "6 7 1", "7 8 1", "8 9 1", "9 10 1", "10 11 1", "11 12 1", "12 13 1", "13 14 1", "14 15 1", "15 16 1", "16 17 1", "17 18 1", "18 19 1", "19 20 1", "20 21 1", "21 22 1", "22 23 1", "23 24 1", "24 25 1", "25 26 1", "26 27 1", "27 28 1", "28 29 1", "29 30 1", "30 31 1", "31 32 1", "32 33 1", "33 34 1", "34 35 1", "35 36 1", "36 37 1", "37 38 1", "38 39 1", "39 40 1", "40 41 1", "41 42 1", "42 43 1", "43 44 1", "44 45 1", "45 46 1", "46 47 1", "47 48 1", "48 49 1", "49 0 1"};
    vector<int> profits = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int towns = 3;
    int origin = 0;
    int destination = 2;
    vector<string> travelCosts = {"0 1 1", "1 1 1", "0 2 1", "1 2 999999"};
    vector<int> profits = {0, 2, 1000000};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int towns = 3;
    int origin = 0;
    int destination = 2;
    vector<string> travelCosts = {"0 1 1", "1 1 1", "0 2 1"};
    vector<int> profits = {0, 100, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -1";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int towns = 6;
    int origin = 0;
    int destination = 2;
    vector<string> travelCosts = {"0 1 4", "1 2 4", "1 3 4", "3 4 4", "4 5 4", "5 3 4"};
    vector<int> profits = {100, 100, 100, 100, 100, 100};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: 292";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int towns = 5;
    int origin = 0;
    int destination = 1;
    vector<string> travelCosts = {"0 1 100", "2 3 1", "3 4 1", "4 2 1", "0 2 1"};
    vector<int> profits = {0, 0, 8, 8, 8};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -100";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int towns = 5;
    int origin = 0;
    int destination = 4;
    vector<string> travelCosts = {"0 1 13", "1 2 17", "2 4 20", "0 3 22", "1 3 4747", "2 0 10", "3 4 10"};
    vector<int> profits = {0, 0, 0, 0, 0};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -32";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int towns = 3;
    int origin = 0;
    int destination = 1;
    vector<string> travelCosts = {"0 1 10", "2 1 1", "2 2 1"};
    vector<int> profits = {0, 0, 100};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -10";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int towns = 1;
    int origin = 0;
    int destination = 0;
    vector<string> travelCosts = {"0 0 5", "0 0 10"};
    vector<int> profits = {7};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "ENDLESS PROFIT";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int towns = 3;
    int origin = 0;
    int destination = 1;
    vector<string> travelCosts = {"0 1 1", "0 2 1", "2 2 1"};
    vector<int> profits = {0, 0, 1000};
    SalesmansDilemma* pObj = new SalesmansDilemma();
    clock_t start = clock();
    string result = pObj->bestRoute(towns, origin, destination, travelCosts, profits);
    clock_t end = clock();
    delete pObj;
    string expected = "BEST PROFIT: -1";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9906197&rd=8067&pm=4755
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <list> 
#include <regex.h>  
using namespace std; 
 
// LIB CODE 
#define INFINT (999999999) 
#define FOR(i,a,b) for(int i=(a);i<int(b);++i) 
#define REP(i,n) FOR(i,0,n) 
#define SZ(v) ((int)(v).size()) 
#define FORSZ(i,a,v) FOR(i,a,SZ(v)) 
#define REPSZ(i,v) FORSZ(i,0,v) 
typedef vector<int> VI; 
template<class T, class U> T cast (U x) { T y; ostringstream a; a<<x; istringstream b(a.str()); b>>y; return y; } 
template<class T> vector<T> split(string s, string x=" ") { vector<T> r; REP(i,s.size()) { string c; while(i<(int)s.size()&&x.find(s[i])==string::npos) c+=s[i++]; if(c.size()) r.push_back(cast<T>(c)); } return r; } 
// REAL CODE 
 
int best[50][50]; 
 
 
class SalesmansDilemma { 
public: 
  string bestRoute(int n, int s, int e, vector <string> cost, vector <int> prof) { 
    REP(i,n) REP(j,n) best[i][j]=-INFINT; best[s][s]=0; 
    REPSZ(i,cost) { VI x=split<int>(cost[i]); best[x[0]][x[1]]>?=-x[2]+prof[x[1]]; } 
     
    REP(k,n) REP(i,n) REP(j,n) if(best[i][k]!=-INFINT&&best[k][j]!=-INFINT) best[i][j]>?=best[i][k]+best[k][j]; 
     
//    REP(i,n) REP(j,n) printf("%10d%c",best[i][j],j==n-1?'\n':' '); 
     
    if(best[s][e]==-INFINT) return "IMPOSSIBLE"; 
    REP(i,n) if(best[s][i]!=-INFINT&&best[i][i]>0&&best[i][e]!=-INFINT) return "ENDLESS PROFIT"; 
    return "BEST PROFIT: "+cast<string>(prof[s]+best[s][e]); 
  } 
   
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/