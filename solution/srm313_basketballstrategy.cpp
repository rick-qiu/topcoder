/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6546
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

class BasketballStrategy {
public:
    double scoreProbability(vector<string> team, vector<string> rivals, double Cp, double Cs);
};

double BasketballStrategy::scoreProbability(vector<string> team, vector<string> rivals, double Cp, double Cs) {
    double ret;
    return ret;
}


int test0() {
    vector<string> team = {"50 50", "35 60", "70 15"};
    vector<string> rivals = {"75 5", "72 25", "45 17"};
    double Cp = 1.0;
    double Cs = 1.0;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6100612919616956;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> team = {"50 4"};
    vector<string> rivals = {"50 5"};
    double Cp = 0.99;
    double Cs = 0.5;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3825461314703953;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> team = {"50 4"};
    vector<string> rivals = {"50 3"};
    double Cp = 0.5;
    double Cs = 0.5;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> team = {"50 50", "40 50", "40 40", "40 30", "50 20"};
    vector<string> rivals = {"50 41", "44 29", "48 27", "45 41", "48 64"};
    double Cp = 0.999999;
    double Cs = 0.8;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25546407305110735;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> team = {"50 50", "50 25"};
    vector<string> rivals = {"40 40", "60 20"};
    double Cp = 1.0;
    double Cs = 0.7;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.20631213370921644;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> team = {"50 4", "50 2"};
    vector<string> rivals = {"50 99", "40 99"};
    double Cp = 0.9;
    double Cs = 0.85;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8039744032940197;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> team = {"98 98", "34 63", "34 64", "99 89", "90 91", "12 15", "52 55", "10 11", "10 50", "50 10"};
    vector<string> rivals = {"82 41", "10 10", "20 40", "55 51", "15 15", "49 49", "12 54", "69 12", "69 69", "99 99"};
    double Cp = 1.0;
    double Cs = 0.7;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2465880592521011;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> team = {"90 80", "1 1"};
    vector<string> rivals = {"70 40", "50 1"};
    double Cp = 0.01;
    double Cs = 1.0;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3536287556896943E-4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> team = {"50 2", "99 99"};
    vector<string> rivals = {"49 1", "1 1"};
    double Cp = 1.0;
    double Cs = 1.0;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.618503137801576;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> team = {"50 1"};
    vector<string> rivals = {"50 2"};
    double Cp = 1.0;
    double Cs = 0.0010;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> team = {"51 1"};
    vector<string> rivals = {"50 2"};
    double Cp = 1.0;
    double Cs = 1.0;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8308154796334271;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> team = {"45 4", "46 1", "47 1", "48 1", "49 1", "50 1", "45 1", "45 2", "45 3"};
    vector<string> rivals = {"95 4", "96 1", "97 1", "98 1", "99 1", "90 1", "95 1", "95 2", "95 3"};
    double Cp = 0.9999;
    double Cs = 0.99;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9989004595337047;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> team = {"12 93", "40 40", "31 61", "95 97", "3 6", "93 96", "42 11", "90 5", "58 21", "6 28", "56 58", "35 30", "86 9"};
    vector<string> rivals = {"56 98", "75 66", "40 41", "91 53", "4 32", "54 44", "32 83", "35 31", "95 43", "21 60", "11 26", "86 62", "98 89"};
    double Cp = 0.9999;
    double Cs = 0.9999;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5585738759246522;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> team = {"57 85", "93 63", "52 78", "75 7", "37 2", "96 49", "9 75", "30 83", "26 60", "24 58", "10 26", "70 64", "45 38", "49 58", "40 87", "64 31", "77 49", "17 88", "86 49", "21 21", "16 20", "95 87", "28 86", "2 52"};
    vector<string> rivals = {"28 2", "38 4", "69 28", "19 82", "21 99", "94 29", "31 31", "55 72", "96 11", "90 87", "29 47", "10 18", "12 77", "99 6", "25 76", "46 5", "52 66", "9 32", "77 75", "73 11", "42 78", "76 9", "16 32", "61 24"};
    double Cp = 0.9999;
    double Cs = 0.9999;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3821271315154455;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> team = {"43 34", "30 24", "82 89", "65 8", "4 52", "39 62", "90 95", "21 96", "90 25", "24 87", "20 85", "77 46", "87 64", "95 13", "36 69", "35 2", "24 69", "51 2", "64 31", "3 14", "14 43", "61 42", "44 88", "13 36", "98 56", "61 89", "59 97", "74 69", "28 22", "71 59", "96 26", "71 64", "38 23", "49 87", "40 52", "75 33", "1 81", "31 94", "79 72", "55 4", "5 33", "18 50", "67 53"};
    vector<string> rivals = {"74 39", "80 85", "20 13", "98 2", "90 1", "23 9", "11 94", "38 18", "5 19", "90 32", "45 70", "69 41", "36 23", "60 82", "53 58", "30 26", "66 20", "3 9", "39 44", "50 73", "17 97", "61 61", "99 79", "55 77", "28 63", "76 58", "87 28", "44 65", "43 19", "64 32", "4 27", "13 51", "24 72", "21 56", "96 5", "71 63", "40 46", "75 9", "78 93", "26 61", "94 89", "33 2", "62 76"};
    double Cp = 0.9999;
    double Cs = 0.9999;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8208318593815758;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> team = {"49 99", "76 20", "60 25", "49 32", "22 17", "61 23", "7 73", "43 90", "53 66", "11 55", "32 68", "2 91", "9 33", "50 57", "19 43", "90 1", "97 76", "8 42", "67 81", "77 69", "72 1", "61 89", "16 85", "15 23", "51 69", "73 83", "18 23", "82 99", "10 35", "88 19", "97 41", "66 8", "15 88", "79 48", "81 31", "13 49", "28 27", "82 9", "58 97", "35 52", "96 51", "40 22", "53 16", "84 99", "86 24", "64 83", "41 44", "4 49", "69 39", "93 37"};
    vector<string> rivals = {"61 41", "96 54", "15 70", "72 68", "12 22", "80 51", "99 82", "53 8", "87 97", "50 40", "92 36", "42 50", "5 33", "70 56", "95 48", "79 16", "21 95", "60 7", "47 90", "17 95", "85 54", "81 60", "18 69", "31 23", "40 53", "49 37", "33 98", "51 60", "10 81", "10 5", "16 78", "8 96", "69 26", "77 63", "83 68", "60 27", "28 20", "75 52", "3 35", "53 38", "65 42", "39 20", "89 93", "57 95", "67 55", "82 60", "8 35", "13 85", "62 34", "97 69"};
    double Cp = 0.9999;
    double Cs = 0.9999;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.31210371329838366;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> team = {"12 95", "54 68", "46 37", "61 19", "63 66", "17 58", "80 87", "1 5", "78 1", "50 63", "92 70", "91 26", "35 88", "95 69", "25 67", "83 64", "95 47", "85 62", "6 87", "53 57", "77 60", "41 18", "74 30", "79 6", "6 59", "29 7", "84 71", "20 30", "67 16", "39 28", "22 21", "70 67", "82 22", "14 5", "86 68"};
    vector<string> rivals = {"92 25", "86 26", "73 82", "84 2", "53 85", "52 16", "69 45", "46 22", "95 68", "94 93", "13 54", "82 81", "39 87", "37 67", "75 63", "88 29", "66 88", "4 54", "56 56", "77 93", "17 16", "26 37", "98 23", "19 71", "81 61", "78 11", "7 38", "79 72", "6 85", "84 91", "32 14", "47 26", "62 60", "24 27", "20 93"};
    double Cp = 0.9999;
    double Cs = 0.9999;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.43372314531139733;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> team = {"22 97", "82 41", "16 61", "87 64", "9 94", "57 54", "76 32", "11 65", "31 7", "34 2", "52 93", "43 24", "25 80", "80 34", "83 36", "70 97", "61 59", "2 91", "94 41", "47 61", "5 78", "26 59", "19 9", "18 51", "46 78", "37 28", "95 49", "92 16", "72 61", "97 13", "29 82", "60 44", "52 56", "20 83", "7 23", "47 10", "91 32", "64 24", "60 19", "32 64", "15 52", "1 4", "38 92", "97 57", "93 77", "14 12", "45 18", "9 8", "49 26", "86 48"};
    vector<string> rivals = {"47 53", "95 70", "44 38", "30 57", "60 23", "66 5", "14 70", "37 41", "82 89", "39 83", "19 3", "78 7", "6 64", "29 40", "95 8", "97 87", "18 43", "94 14", "97 21", "63 1", "51 4", "73 14", "34 3", "9 59", "80 97", "1 54", "11 17", "53 66", "48 44", "58 26", "72 12", "45 98", "25 87", "60 84", "31 21", "33 66", "15 67", "92 56", "46 90", "22 59", "84 23", "23 80", "89 35", "20 58", "4 27", "87 27", "91 86", "13 28", "52 67", "8 67"};
    double Cp = 0.9999;
    double Cs = 0.9999;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.23007804612225674;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> team = {"3 98", "52 14", "15 56", "7 35", "38 79", "2 10", "22 8", "92 63", "67 79", "70 95", "38 96", "78 12", "31 70", "30 32", "83 61"};
    vector<string> rivals = {"19 71", "49 61", "38 84", "99 93", "31 58", "82 60", "34 38", "74 64", "10 35", "85 62", "23 58", "2 32", "6 9", "59 32", "70 30"};
    double Cp = 0.9999;
    double Cs = 0.9999;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5885931766785137;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> team = {"81 88", "36 62", "51 52", "27 53", "13 82", "12 23", "77 81", "68 42", "49 52", "42 20", "75 45", "24 64", "62 49", "30 59", "33 47", "55 66", "86 66", "67 4"};
    vector<string> rivals = {"67 12", "70 33", "59 86", "53 66", "38 15", "76 96", "33 46", "66 90", "24 30", "13 79", "45 24", "96 9", "80 85", "33 72", "50 57", "85 74", "26 89", "30 55"};
    double Cp = 0.9999;
    double Cs = 0.5;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04672193094900425;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> team = {"62 94", "43 67", "11 18", "68 28", "78 45", "86 64", "14 86", "96 31", "53 46", "76 71", "21 1", "65 33", "70 3", "58 93", "8 53", "1 1", "15 43", "26 64", "47 5", "56 19", "29 82", "7 61", "60 35", "74 62", "29 31", "4 74", "48 43", "97 35", "89 57", "16 57", "98 47", "71 51", "49 31", "32 38", "30 76", "2 5", "41 70", "45 26", "45 4", "36 67", "75 75", "81 20", "40 11", "57 53", "31 88", "61 8", "72 39", "22 71", "23 45"};
    vector<string> rivals = {"96 81", "58 90", "25 3", "28 33", "99 32", "59 89", "22 81", "55 71", "15 87", "71 68", "97 75", "44 83", "6 31", "12 48", "29 34", "10 48", "52 57", "8 17", "21 17", "81 83", "42 18", "70 26", "90 11", "79 4", "32 15", "20 83", "66 24", "46 1", "3 86", "31 25", "78 39", "15 26", "75 77", "36 70", "62 65", "47 79", "56 48", "63 91", "40 21", "60 75", "1 98", "30 27", "74 43", "74 79", "36 65", "89 7", "68 65", "49 20", "45 24"};
    double Cp = 0.9999;
    double Cs = 0.8;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21610262072027708;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> team = {"75 99", "93 74", "38 42", "65 28", "85 91", "8 60", "69 68", "1 32", "27 71", "59 10", "67 95", "54 7", "96 97", "28 61", "72 43", "12 50", "96 62", "44 44", "14 31", "57 24", "32 51", "83 53", "18 75", "63 68", "63 82", "82 89", "50 45", "84 16", "62 72", "86 90", "29 48", "21 8", "37 48", "3 57", "6 3", "51 29", "25 76", "76 85", "74 98", "35 26", "47 25"};
    vector<string> rivals = {"31 33", "28 82", "53 83", "70 41", "18 66", "59 11", "34 34", "35 97", "75 14", "87 36", "66 6", "68 39", "20 87", "83 27", "86 57", "50 51", "79 13", "85 21", "74 51", "63 35", "96 76", "47 64", "63 71", "45 38", "83 83", "55 46", "37 58", "28 20", "25 57", "43 84", "26 14", "99 23", "12 39", "64 89", "1 33", "58 21", "4 11", "76 70", "12 65", "96 15", "6 58"};
    double Cp = 0.9999;
    double Cs = 0.7;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22480927764470046;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> team = {"50 98", "50 67", "50 89", "50 7", "50 35", "50 39", "50 27", "50 43", "50 84", "50 55", "50 12", "50 90", "50 94", "50 79", "50 21", "50 50", "50 71", "50 91", "50 31", "50 83", "50 4", "50 63", "50 61", "50 80", "50 41", "50 49", "50 66", "50 8", "50 65", "50 88", "50 68", "50 86", "50 18", "50 60", "50 5", "50 17", "50 32", "50 77", "50 40", "50 16", "50 19", "50 74", "50 11", "50 29", "50 24", "50 23", "50 64", "50 47", "50 2", "50 14"};
    vector<string> rivals = {"1 45", "99 46", "1 44", "1 73", "1 22", "1 89", "1 18", "99 7", "99 73", "1 42", "99 81", "99 17", "1 46", "1 55", "1 80", "1 51", "1 39", "99 71", "99 30", "99 40", "99 59", "99 91", "1 7", "99 48", "1 14", "99 82", "1 2", "99 13", "99 74", "99 28", "1 56", "99 5", "1 81", "99 79", "1 36", "99 78", "99 58", "99 76", "99 86", "1 79", "99 68", "1 4", "99 24", "1 6", "1 66", "1 83", "99 65", "1 12", "99 22", "99 94"};
    double Cp = 0.9;
    double Cs = 0.5;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3822637751085262;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> team = {"50 98", "50 67", "50 89", "50 7", "50 35", "50 39", "50 27", "50 43", "50 84", "50 55", "50 12", "50 90", "50 94", "50 79", "50 21", "50 50", "50 71", "50 91", "50 31", "50 83", "50 4", "50 63", "50 61", "50 80", "50 41", "50 49", "50 66", "50 8", "50 65", "50 88", "50 68", "50 86", "50 18", "50 60", "50 5", "50 17", "50 32", "50 77", "50 40", "50 16", "50 19", "50 74", "50 11", "50 29", "50 24", "50 23", "50 64", "50 47", "50 2", "50 14"};
    vector<string> rivals = {"1 45", "99 46", "1 44", "1 73", "1 22", "1 89", "1 18", "99 7", "99 73", "1 42", "99 81", "99 17", "1 46", "1 55", "1 80", "1 51", "1 39", "99 71", "99 30", "99 40", "99 59", "99 91", "1 7", "99 48", "1 14", "99 82", "1 2", "99 13", "99 74", "99 28", "1 56", "99 5", "1 81", "99 79", "1 36", "99 78", "99 58", "99 76", "99 86", "1 79", "99 68", "1 4", "99 24", "1 6", "1 66", "1 83", "99 65", "1 12", "99 22", "99 94"};
    double Cp = 0.99;
    double Cs = 0.5;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.487093986151809;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> team = {"50 99", "50 24", "50 49", "50 4", "50 44", "50 68", "50 87", "50 43", "50 75", "50 14", "50 56", "50 37", "50 59", "50 84", "50 86", "50 98", "50 41", "50 89", "50 26", "50 91", "50 65", "50 70", "50 7", "50 15", "50 35", "50 3", "50 18", "50 32", "50 23", "50 6", "50 25", "50 12", "50 2", "50 97", "50 45", "50 95", "50 78", "50 85", "50 60", "50 55", "50 83", "50 11", "50 81", "50 66", "50 90", "50 10", "50 28", "50 20", "50 42", "50 93"};
    vector<string> rivals = {"99 91", "1 9", "99 49", "1 12", "1 49", "1 51", "99 97", "1 65", "1 17", "99 64", "1 38", "1 79", "99 81", "99 42", "1 81", "99 94", "1 29", "99 4", "99 36", "1 64", "99 95", "1 34", "1 61", "1 78", "1 66", "1 31", "99 5", "1 59", "99 72", "1 97", "99 18", "1 33", "99 14", "1 1", "1 36", "99 96", "1 62", "99 80", "1 24", "99 34", "1 8", "1 84", "99 32", "99 7", "1 60", "99 47", "99 22", "99 62", "1 54", "99 69"};
    double Cp = 1.0;
    double Cs = 0.7;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6482515582131133;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> team = {"50 99", "50 3", "50 30", "50 35", "50 89", "50 19", "50 16", "50 32", "50 9", "50 39", "50 60", "50 98", "50 81", "50 49", "50 36", "50 50", "50 59", "50 14", "50 61", "50 38", "50 55", "50 47", "50 4", "50 46", "50 10", "50 69", "50 75", "50 48", "50 79", "50 92", "50 87", "50 85", "50 65", "50 43", "50 62", "50 63", "50 34", "50 40", "50 7", "50 73", "50 52", "50 74", "50 53", "50 77", "50 91", "50 45", "50 71", "50 51", "50 29", "50 25"};
    vector<string> rivals = {"1 8", "1 35", "99 1", "1 68", "1 62", "99 82", "99 6", "99 46", "1 49", "1 66", "1 82", "1 92", "1 91", "1 5", "99 73", "99 34", "99 96", "99 47", "99 69", "99 99", "99 15", "99 62", "1 18", "1 33", "1 95", "1 79", "99 60", "1 34", "99 31", "1 23", "99 41", "99 20", "99 39", "1 51", "1 14", "99 72", "99 44", "1 87", "1 83", "99 37", "99 3", "99 51", "99 57", "99 52", "1 36", "99 9", "1 30", "1 98", "1 13", "1 86"};
    double Cp = 1.0;
    double Cs = 0.01;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005252698401368916;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> team = {"50 97", "50 18", "50 29", "50 8", "50 1", "50 6", "50 11", "50 48", "50 53", "50 30", "50 77", "50 34", "50 36", "50 35", "50 15", "50 61", "50 24", "50 43", "50 58", "50 44", "50 84", "50 10", "50 20", "50 37", "50 78", "50 73", "50 88", "50 21", "50 74", "50 49", "50 56", "50 7", "50 65", "50 5", "50 75", "50 71", "50 91", "50 45", "50 64", "50 40", "50 26", "50 93", "50 79", "50 22", "50 52", "50 66", "50 54", "50 82", "50 60", "50 17"};
    vector<string> rivals = {"60 99", "14 99", "74 99", "3 99", "12 99", "95 99", "6 99", "42 99", "17 99", "39 99", "38 99", "50 99", "5 99", "68 99", "19 99", "15 99", "37 99", "18 99", "30 99", "52 99", "90 99", "79 99", "24 99", "82 99", "88 99", "45 99", "13 99", "86 99", "76 99", "91 99", "33 99", "96 99", "57 99", "29 99", "97 99", "31 99", "70 99", "78 99", "55 99", "67 99", "8 99", "56 99", "28 99", "10 99", "34 99", "43 99", "99 99", "41 99", "47 99", "93 99"};
    double Cp = 1.0;
    double Cs = 0.7;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9890355948087801;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> team = {"50 94", "50 75", "50 44", "50 31", "50 12", "50 89", "50 91", "50 58", "50 88", "50 14", "50 30", "50 64", "50 26", "50 4", "50 13", "50 51", "50 60", "50 47", "50 66", "50 56", "50 38", "50 11", "50 65", "50 21", "50 86", "50 53", "50 7", "50 69", "50 36", "50 77", "50 87", "50 78", "50 1", "50 63", "50 57", "50 93", "50 81", "50 59", "50 19", "50 17", "50 73", "50 70", "50 79", "50 10", "50 15", "50 27", "50 9", "50 2", "50 22", "50 54"};
    vector<string> rivals = {"98 99", "1 99", "10 99", "96 99", "68 99", "61 99", "46 99", "59 99", "22 99", "4 99", "53 99", "33 99", "13 99", "5 99", "31 99", "11 99", "36 99", "72 99", "58 99", "77 99", "83 99", "89 99", "74 99", "78 99", "48 99", "66 99", "90 99", "27 99", "28 99", "41 99", "88 99", "49 99", "26 99", "57 99", "69 99", "82 99", "87 99", "60 99", "29 99", "16 99", "84 99", "76 99", "3 99", "44 99", "81 99", "34 99", "42 99", "17 99", "71 99", "38 99"};
    double Cp = 0.999999;
    double Cs = 0.5;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9889421922883432;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> team = {"30 10", "98 98", "98 2"};
    vector<string> rivals = {"40 5", "64 6", "74 49"};
    double Cp = 0.9;
    double Cs = 0.8;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.041415400438408766;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> team = {"30 10", "98 98", "98 2"};
    vector<string> rivals = {"40 5", "64 6", "75 49"};
    double Cp = 0.9345;
    double Cs = 0.4234;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003793820830003908;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> team = {"30 10", "98 98", "98 2"};
    vector<string> rivals = {"40 5", "64 6", "98 95"};
    double Cp = 0.9989;
    double Cs = 0.3936;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.596247184127275E-4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> team = {"50 2", "99 99"};
    vector<string> rivals = {"50 1", "98 98"};
    double Cp = 0.1;
    double Cs = 0.9;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4418573753428816E-5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> team = {"50 50", "17 50", "8 50", "96 50", "85 50", "59 50", "16 50", "75 50", "88 50", "35 50", "45 50", "60 50", "68 50", "89 50", "77 50", "79 50", "41 50", "11 50", "21 50", "36 50", "20 50", "87 50", "24 50", "1 50", "63 50", "93 50", "26 50", "27 50", "86 50", "43 50", "3 50", "19 50", "69 50", "99 50", "67 50", "10 50", "37 50", "98 50", "90 50", "14 50", "64 50", "81 50", "2 50", "94 50", "22 50", "52 50", "84 50", "48 50", "6 50", "57 50"};
    vector<string> rivals = {"64 49", "34 49", "53 49", "17 49", "46 49", "24 49", "48 49", "28 49", "51 49", "94 49", "49 49", "96 49", "87 49", "63 49", "18 49", "83 49", "26 49", "50 49", "38 49", "71 49", "2 49", "6 49", "12 49", "81 49", "8 49", "68 49", "15 49", "52 49", "20 49", "77 49", "86 49", "60 49", "27 49", "84 49", "55 49", "21 49", "92 49", "1 49", "58 49", "66 49", "57 49", "91 49", "73 49", "95 49", "79 49", "23 49", "36 49", "33 49", "61 49", "30 49"};
    double Cp = 1.0;
    double Cs = 0.5;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.011038457125028989;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> team = {"68 99", "55 23", "5 40", "55 66", "12 73", "75 63", "51 51", "42 20", "22 95", "15 5", "45 36", "27 30", "79 11", "60 24", "52 84", "38 45", "28 35", "90 97", "23 25", "7 9", "4 22", "11 54", "89 40", "62 21", "92 47", "39 75", "35 89", "46 90", "58 23", "33 78", "97 67", "81 23", "16 82", "83 40", "43 44", "9 87", "85 40", "49 57", "67 66", "71 29", "35 43", "2 19", "63 89", "24 30", "8 85", "47 18", "65 98", "77 44", "40 76", "25 6"};
    vector<string> rivals = {"23 32", "99 28", "15 34", "39 41", "2 64", "35 79", "10 20", "83 63", "30 67", "9 85", "55 65", "61 87", "70 86", "22 96", "13 54", "53 17", "7 18", "92 13", "81 39", "65 24", "43 34", "27 14", "60 3", "63 61", "46 47", "57 54", "12 26", "49 73", "45 24", "27 97", "79 51", "6 1", "68 97", "38 43", "24 36", "47 92", "20 34", "88 60", "76 25", "77 99", "46 96", "97 13", "51 66", "40 45", "34 67", "72 6", "89 47", "41 11", "4 33", "67 38"};
    double Cp = 0.9999;
    double Cs = 0.9999;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2500106388826978;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> team = {"52 86", "41 82", "78 16", "84 57", "69 3", "3 42", "65 80", "26 78"};
    vector<string> rivals = {"32 16", "60 88", "74 89", "68 65", "47 29", "95 44", "80 49", "20 68"};
    double Cp = 0.7;
    double Cs = 0.5;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.051104890204598394;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> team = {"46 99", "17 85", "7 91", "32 66", "61 39", "74 4", "67 67", "75 95", "35 75", "77 34", "1 23", "60 24", "73 43", "96 73", "91 48", "56 21", "82 3", "49 6", "38 67", "6 74", "23 86", "86 15", "84 61", "5 20"};
    vector<string> rivals = {"23 91", "54 90", "76 37", "5 63", "10 25", "60 77", "4 25", "45 13", "97 48", "58 91", "85 36", "35 2", "6 76", "74 74", "73 47", "67 40", "93 90", "47 70", "77 42", "69 95", "84 32", "19 87", "90 35", "36 56"};
    double Cp = 0.9;
    double Cs = 0.4;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07855716204482449;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> team = {"75 90", "94 44", "21 3", "3 84", "81 80", "41 6", "86 66", "10 44", "1 46", "71 22", "8 1", "59 84", "92 74", "32 25", "38 59", "56 65", "50 56", "26 53", "23 50", "53 26", "76 76"};
    vector<string> rivals = {"74 13", "1 91", "92 91", "76 67", "38 72", "64 85", "80 75", "52 93", "37 54", "57 14", "86 40", "88 17", "42 26", "54 78", "27 1", "9 14", "18 47", "21 87", "95 40", "24 26", "5 57"};
    double Cp = 0.9999;
    double Cs = 0.1;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0022731790744545143;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> team = {"69 88", "1 17", "40 6", "52 42", "96 5", "39 3", "16 44", "23 3", "60 36", "33 15", "79 54", "53 67", "5 63", "14 32", "36 62", "70 85", "26 18", "20 69"};
    vector<string> rivals = {"26 53", "70 29", "44 24", "88 80", "25 15", "60 91", "76 50", "22 76", "16 37", "58 32", "99 19", "34 2", "16 61", "38 12", "39 38", "13 55", "4 14", "52 49"};
    double Cp = 0.9999;
    double Cs = 0.3;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.025765856103543767;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> team = {"64 99", "53 36", "46 54", "75 33", "74 92", "44 94", "13 42", "99 25", "28 27", "46 5", "83 53", "26 86", "66 66", "70 71", "77 94", "1 6", "63 76", "41 69", "98 17", "28 89", "26 42", "73 10", "76 3", "47 70", "93 1", "39 38", "53 39", "90 66", "30 10", "31 16", "15 58", "87 73", "6 48", "89 58", "10 41", "58 45", "88 35", "61 43", "31 77", "57 54", "52 82", "93 96"};
    vector<string> rivals = {"99 92", "30 15", "26 66", "53 44", "67 75", "74 54", "31 64", "96 48", "13 30", "41 62", "45 89", "93 51", "89 6", "72 59", "38 77", "63 80", "2 44", "46 45", "88 31", "74 97", "90 55", "60 78", "85 66", "53 38", "18 69", "50 17", "42 89", "57 78", "75 59", "91 46", "14 22", "98 71", "29 75", "77 51", "66 62", "52 87", "46 85", "83 13", "63 57", "27 96", "28 28", "7 9"};
    double Cp = 0.9999;
    double Cs = 0.8;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3233537705783413;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> team = {"89 98", "87 9", "78 4", "21 32", "27 25", "73 43", "31 16", "5 30", "22 59", "47 69", "38 10", "5 37", "7 65", "97 16", "81 43", "91 96", "18 75", "30 66", "54 77", "2 2", "45 6", "15 23", "69 11", "64 55", "13 19", "99 34", "18 92", "26 5", "18 31", "35 58", "24 84", "9 96", "77 31", "19 62", "63 12", "15 49", "76 36", "50 89", "96 58"};
    vector<string> rivals = {"18 40", "11 51", "21 75", "66 66", "78 13", "83 19", "4 71", "64 4", "76 44", "93 80", "91 79", "26 29", "77 70", "36 75", "71 78", "75 5", "18 15", "88 32", "20 64", "48 67", "55 27", "99 16", "14 97", "23 90", "19 5", "28 8", "25 7", "33 23", "5 34", "8 73", "97 10", "30 71", "99 56", "54 43", "6 80", "42 7", "47 23", "15 24", "18 88"};
    double Cp = 0.2;
    double Cs = 0.1;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.738035718639185E-4;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> team = {"89 96", "55 6", "73 78", "37 18", "69 77", "71 63", "31 85", "48 66", "56 30", "29 64", "14 77", "64 39", "18 49", "76 85", "10 1", "92 65", "50 81", "39 59", "75 47", "2 75", "87 41", "80 50", "27 7", "10 94", "60 36", "23 53", "88 68", "50 29", "5 34", "46 60", "51 10", "83 33", "93 77", "16 30"};
    vector<string> rivals = {"76 82", "48 16", "12 99", "56 24", "50 44", "53 41", "15 35", "70 37", "10 41", "39 14", "60 40", "36 66", "99 68", "88 38", "30 75", "91 90", "28 64", "66 80", "5 28", "77 92", "73 34", "42 11", "25 39", "88 72", "21 61", "50 95", "87 23", "74 85", "57 63", "93 1", "83 31", "50 21", "8 39", "16 92"};
    double Cp = 0.3;
    double Cs = 0.8;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10975918844670107;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> team = {"5 97", "24 64", "57 73", "96 89", "55 41", "91 64", "19 61", "17 77", "56 20", "66 44", "81 64", "23 89", "30 40", "27 72", "34 86", "8 70", "78 64", "49 14", "34 11", "21 39", "57 29", "12 75", "43 9", "60 95", "25 93", "64 11", "40 24", "37 46", "94 3", "82 87", "3 76", "23 43", "71 1", "67 76"};
    vector<string> rivals = {"47 79", "21 35", "41 34", "85 38", "79 29", "57 18", "67 69", "55 93", "36 77", "34 51", "82 64", "75 18", "22 57", "93 10", "97 61", "26 52", "70 35", "57 47", "96 77", "5 34", "12 20", "64 97", "18 30", "13 1", "53 3", "24 44", "30 44", "6 18", "25 19", "28 4", "61 67", "60 40", "23 57", "37 58"};
    double Cp = 0.5;
    double Cs = 0.6;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.030858611033431616;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> team = {"9 91", "72 1", "13 77", "94 22", "22 19", "62 54", "11 82", "25 8", "25 90", "35 73", "79 81", "64 38", "42 23", "44 36", "54 27", "28 21", "61 11", "80 64", "89 13", "67 9", "84 65", "69 11", "37 81", "65 45", "70 70", "99 72", "19 10", "48 79", "73 89", "77 11", "7 43", "20 69", "53 63", "2 85", "32 22"};
    vector<string> rivals = {"69 67", "46 81", "78 36", "63 53", "43 37", "93 98", "71 95", "30 52", "5 79", "20 37", "62 30", "32 36", "22 63", "21 71", "65 57", "17 44", "25 24", "41 7", "67 60", "99 86", "7 51", "86 95", "98 81", "54 8", "80 11", "10 55", "52 48", "13 72", "36 9", "76 20", "65 22", "27 5", "54 99", "73 71", "81 54"};
    double Cp = 0.9999;
    double Cs = 0.9999;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3788221377448042;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> team = {"1 99", "67 45", "83 80", "8 22", "76 12", "4 92", "48 48", "84 80", "79 77", "44 60", "39 64", "60 30", "43 51", "96 1", "85 16", "98 15", "86 7", "57 29", "17 49", "91 20", "49 88", "96 22", "97 18", "38 65", "62 97", "9 81", "12 69", "14 8", "25 27", "30 57", "57 62", "41 58", "76 74", "54 31", "71 16", "1 14", "26 66", "65 65", "66 29", "35 37", "45 98", "37 77"};
    vector<string> rivals = {"42 80", "1 75", "98 54", "39 37", "22 78", "44 10", "65 48", "38 37", "85 79", "3 30", "9 52", "61 24", "57 44", "90 40", "29 73", "14 90", "54 70", "53 94", "73 62", "41 39", "7 37", "92 19", "97 56", "48 88", "58 7", "35 19", "67 8", "76 71", "96 17", "84 71", "47 9", "79 1", "11 65", "85 11", "69 65", "66 27", "26 26", "97 8", "45 15", "80 64", "13 59", "35 49"};
    double Cp = 0.9999;
    double Cs = 0.9999;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4141665088899444;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> team = {"20 98", "60 6", "32 37", "80 9", "52 98", "66 71", "83 77", "7 60", "75 75", "9 72", "70 6", "86 76", "41 65", "25 43", "95 27", "36 75", "68 98", "27 70", "67 25", "22 64", "72 30", "16 8", "50 65", "47 62"};
    vector<string> rivals = {"55 16", "74 22", "69 54", "30 66", "22 74", "37 27", "67 7", "25 99", "48 15", "12 85", "91 88", "68 72", "81 46", "77 90", "70 62", "34 42", "45 19", "85 27", "22 41", "52 2", "60 32", "95 43", "9 35", "17 80"};
    double Cp = 0.9;
    double Cs = 0.7;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09250448169502971;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> team = {"49 98", "39 8", "86 87", "70 75", "18 96", "66 25", "81 20"};
    vector<string> rivals = {"43 66", "84 17", "97 10", "29 34", "68 2", "50 9", "73 65"};
    double Cp = 0.8;
    double Cs = 0.4;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.025525068054161822;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> team = {"60 99", "74 49", "22 68", "79 68", "14 53", "68 61", "7 12", "36 92", "51 25", "59 10", "99 1", "59 73", "80 36", "47 3", "41 38", "4 15", "62 55", "29 88", "77 17", "30 50", "54 26", "70 37", "97 95", "87 62", "48 63", "49 30", "88 90", "12 40", "54 19", "44 42", "58 57", "19 76", "48 13", "9 39", "17 70", "93 80", "31 98", "39 34", "72 68", "24 12", "2 17", "15 14"};
    vector<string> rivals = {"46 20", "68 4", "78 55", "52 96", "27 48", "40 38", "60 15", "98 27", "54 22", "17 5", "93 44", "37 8", "47 18", "70 75", "58 96", "79 92", "3 80", "48 47", "49 23", "50 43", "30 10", "99 71", "21 77", "10 23", "18 97", "6 88", "62 5", "13 30", "14 73", "88 33", "76 82", "73 12", "9 16", "23 6", "59 29", "83 28", "33 77", "31 1", "69 49", "43 92", "57 37", "95 69"};
    double Cp = 1.0;
    double Cs = 0.7;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.23161411602527426;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> team = {"50 99", "85 25", "82 10", "12 64", "6 85", "89 77", "38 72", "80 33", "98 44", "7 70", "37 24", "16 1", "8 61", "97 54", "57 41", "31 46", "89 52", "54 36", "66 9", "97 75", "61 93", "18 43", "37 46", "47 2", "19 32", "22 79", "49 2", "57 59", "43 15", "49 67", "4 15", "55 22", "79 34", "20 38", "83 4", "14 84", "3 71", "43 51", "1 3", "21 35", "46 49", "73 38", "98 67", "93 26", "37 89"};
    vector<string> rivals = {"50 10", "80 89", "19 94", "97 83", "98 65", "57 45", "20 73", "85 5", "16 8", "44 67", "69 40", "7 83", "51 42", "4 95", "37 61", "37 42", "35 18", "89 16", "77 48", "65 90", "6 89", "58 16", "15 78", "55 14", "97 63", "99 47", "79 65", "3 79", "89 61", "46 81", "49 13", "48 88", "31 37", "38 22", "3 13", "95 15", "13 43", "82 16", "21 36", "42 97", "90 76", "56 92", "9 27", "43 19", "18 89"};
    double Cp = 1.0;
    double Cs = 1.0;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.44673871384427893;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> team = {"52 97", "33 90", "90 94", "15 37", "91 39", "76 45", "69 84", "45 82", "28 17", "95 97", "63 75", "59 71", "41 65", "65 11", "2 46", "78 84", "8 49", "81 36", "71 40", "26 73", "98 94", "56 5"};
    vector<string> rivals = {"99 90", "53 64", "94 70", "29 3", "10 72", "25 63", "76 75", "46 17", "4 6", "70 79", "98 3", "26 87", "80 56", "65 34", "43 38", "64 82", "58 1", "72 48", "62 35", "34 15", "91 30", "82 5"};
    double Cp = 1.0;
    double Cs = 1.0;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4151672437686899;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> team = {"79 90", "52 65", "32 63", "39 76", "59 80", "36 70", "25 45", "27 49", "18 73", "85 8", "72 14", "25 67", "10 85", "37 12", "68 33", "14 75", "3 59", "91 67", "87 30", "74 44", "57 52", "2 55", "61 46", "29 83"};
    vector<string> rivals = {"52 89", "76 25", "91 97", "37 18", "27 19", "68 55", "60 29", "31 93", "50 87", "35 75", "73 23", "16 12", "21 94", "85 70", "25 65", "3 78", "36 78", "58 22", "83 71", "90 10", "27 86", "12 38", "63 23", "3 14"};
    double Cp = 0.1;
    double Cs = 0.01;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 7.589105994713434E-8;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> team = {"17 98", "92 85", "97 3", "83 97", "2 9", "64 12", "72 67", "52 98", "44 12", "99 3", "33 22", "34 8", "66 25", "68 84", "26 64", "91 88", "43 5", "87 47", "35 52", "86 59", "21 17", "23 17", "40 12", "85 38", "60 92", "4 23", "28 65", "30 29", "71 18", "15 72", "19 81", "11 81", "9 19", "57 55", "76 25", "60 45", "96 3", "88 62", "10 13", "93 19", "96 72", "29 48", "75 28", "9 35", "38 79", "31 37", "51 66", "80 15", "37 7", "29 8"};
    vector<string> rivals = {"79 33", "96 78", "43 33", "39 19", "21 46", "3 77", "72 89", "88 7", "35 95", "60 71", "40 71", "96 22", "47 4", "90 48", "16 36", "85 49", "33 79", "34 37", "93 15", "99 35", "97 24", "92 5", "72 47", "87 6", "7 31", "58 34", "52 75", "9 21", "38 15", "32 38", "76 16", "63 95", "26 78", "20 99", "29 64", "53 40", "29 29", "81 66", "31 6", "24 77", "69 98", "68 9", "65 6", "28 66", "93 66", "9 77", "83 99", "14 8", "19 35", "11 7"};
    double Cp = 0.7728;
    double Cs = 0.0332;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 6.658776107056332E-5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> team = {"73 99", "60 40", "48 67", "79 47", "26 8", "89 6", "21 31", "14 10", "65 60", "3 65", "82 78", "39 50", "78 55", "9 69", "61 20", "23 26", "16 6", "76 14", "27 26", "3 14", "86 15", "56 35", "42 46", "12 1", "82 8", "74 82", "1 31", "55 62", "6 13", "8 74", "91 34", "55 35", "73 88", "31 90", "6 44", "36 39", "64 91", "50 51", "44 77", "18 94", "61 86", "12 30"};
    vector<string> rivals = {"52 46", "73 90", "39 88", "36 57", "45 4", "28 41", "12 25", "4 18", "20 66", "16 47", "26 45", "6 40", "78 54", "63 57", "71 57", "56 23", "80 50", "3 26", "50 24", "97 22", "21 87", "74 62", "8 87", "90 42", "2 87", "74 99", "65 21", "11 1", "55 49", "12 56", "57 80", "87 75", "8 50", "60 95", "42 98", "79 26", "84 6", "35 35", "15 11", "82 42", "25 54", "61 84"};
    double Cp = 0.5436;
    double Cs = 0.3579;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0056775613994314664;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> team = {"47 94", "29 87", "23 78", "12 89", "63 57"};
    vector<string> rivals = {"77 58", "21 67", "43 94", "27 30", "58 95"};
    double Cp = 0.9718;
    double Cs = 0.6438;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11959193450297302;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> team = {"90 96", "10 23", "32 14", "6 67", "1 3", "5 26", "50 43", "40 55", "66 92", "34 89", "11 19", "38 32", "21 80", "90 21", "48 86", "61 55", "36 4", "98 75", "58 21", "59 90", "87 38", "48 4", "21 40", "55 47", "25 78", "41 55", "83 10", "68 82", "82 53", "56 75", "74 25", "33 85", "35 53", "19 28", "80 11", "28 92", "62 7", "31 12", "21 20", "13 72"};
    vector<string> rivals = {"35 29", "82 55", "79 25", "11 13", "17 86", "27 95", "90 50", "21 41", "5 29", "81 76", "61 52", "58 11", "24 3", "32 84", "38 66", "30 2", "59 47", "11 74", "7 64", "89 69", "56 49", "99 3", "61 99", "35 63", "95 47", "67 35", "74 21", "1 84", "49 15", "44 36", "54 68", "40 86", "31 34", "86 28", "62 95", "48 66", "21 32", "33 96", "19 34", "37 4"};
    double Cp = 0.9846;
    double Cs = 0.9094;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.37039942816694105;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> team = {"18 87", "25 27"};
    vector<string> rivals = {"21 53", "76 76"};
    double Cp = 0.9109;
    double Cs = 0.5831;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05370118471464302;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> team = {"21 98", "26 10", "18 33", "93 94", "15 11", "2 44", "43 19", "41 93", "8 80", "1 56", "28 26", "44 9", "60 59", "76 14", "48 68", "67 14", "61 86", "55 36", "15 67", "36 6", "27 80", "69 7", "7 82", "40 60", "77 98", "63 66", "12 69", "65 50", "31 15", "70 63", "6 84", "50 49", "90 30", "73 94", "68 69", "69 73", "95 94", "4 87", "9 31", "30 12", "38 30", "80 90", "1 16", "51 94", "24 20", "26 49", "91 2", "84 33", "54 65", "98 98"};
    vector<string> rivals = {"32 14", "39 31", "13 17", "51 96", "69 97", "44 41", "31 3", "27 90", "50 91", "8 21", "15 52", "99 5", "27 33", "1 98", "50 42", "72 5", "68 84", "9 30", "69 18", "15 79", "78 36", "84 2", "86 43", "29 78", "59 22", "6 13", "44 4", "64 38", "26 48", "90 53", "68 41", "77 75", "41 63", "1 46", "75 13", "4 16", "95 90", "9 47", "43 12", "66 59", "54 76", "19 42", "22 37", "36 52", "24 79", "92 67", "62 29", "61 20", "7 81", "97 7"};
    double Cp = 0.9901;
    double Cs = 0.0252;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8052255517599092E-5;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> team = {"2 96", "27 66", "71 23", "19 39", "61 24", "15 10", "20 47", "18 77", "23 61", "59 10", "57 14", "40 70", "11 29", "34 65", "24 7", "3 36", "77 14", "91 79", "6 31", "36 59", "39 60", "79 1", "85 49", "33 49", "25 60", "37 59", "29 22", "51 36", "89 12", "38 38", "17 80", "66 71", "4 37", "79 49", "60 60", "50 46", "42 54", "79 4", "9 52", "94 87", "50 36", "5 36", "63 26", "29 65", "69 12", "53 45", "22 87", "5 69"};
    vector<string> rivals = {"23 95", "14 64", "97 95", "5 91", "90 81", "77 53", "50 89", "53 74", "45 17", "65 16", "9 84", "38 92", "6 73", "71 94", "17 96", "23 38", "69 23", "50 40", "29 49", "33 9", "37 96", "60 24", "34 20", "41 56", "27 46", "5 34", "85 32", "19 63", "61 8", "19 22", "53 13", "67 97", "3 2", "5 41", "37 54", "40 41", "21 97", "36 24", "28 45", "17 26", "58 10", "86 75", "94 33", "25 25", "62 22", "3 37", "79 6", "79 3"};
    double Cp = 0.9835;
    double Cs = 0.5037;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.024925885487871603;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> team = {"48 98", "16 9", "89 45", "30 67", "93 98", "13 63", "34 59", "4 79", "26 14", "74 67", "17 29", "26 59", "20 57", "12 40", "14 4", "70 64", "9 70", "57 79", "37 83", "69 92", "54 14", "96 96", "61 33", "95 15", "22 77", "86 24", "21 20", "39 90", "44 88", "3 70", "38 86", "98 72", "22 9", "32 73", "48 56", "76 85", "38 13", "91 47", "8 32", "68 52", "67 31", "46 59", "77 36", "41 83", "98 37", "81 78", "64 72"};
    vector<string> rivals = {"98 59", "94 86", "12 81", "6 63", "16 28", "70 26", "4 47", "50 27", "74 41", "42 39", "38 42", "28 53", "48 58", "98 10", "56 34", "31 32", "36 34", "40 89", "15 56", "68 50", "76 67", "21 71", "77 7", "89 61", "87 20", "11 51", "20 88", "8 35", "46 62", "26 21", "18 67", "85 42", "13 93", "81 25", "95 51", "68 65", "37 96", "45 27", "63 94", "34 20", "99 7", "61 3", "92 65", "39 65", "65 59", "22 57", "25 24"};
    double Cp = 0.4687;
    double Cs = 0.291;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006705718942874147;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> team = {"67 99", "81 20", "42 78", "1 11", "38 84", "71 75", "11 6", "71 22", "32 3", "29 37", "2 74", "80 74", "15 13", "17 45", "96 23", "20 89", "22 44", "18 64", "17 84", "63 63", "98 15", "83 86", "23 40", "35 80", "1 69", "78 63", "5 49", "79 49", "25 18", "45 3", "60 38", "95 69", "73 12", "49 38", "77 2", "87 23"};
    vector<string> rivals = {"84 8", "72 2", "77 12", "12 65", "70 64", "34 86", "22 72", "80 90", "18 37", "54 89", "79 96", "1 50", "9 2", "43 97", "82 86", "2 47", "17 83", "45 82", "30 2", "20 48", "41 72", "79 32", "3 53", "21 6", "74 1", "16 2", "95 73", "90 81", "27 44", "97 5", "60 91", "66 76", "99 62", "71 33", "24 7", "37 53"};
    double Cp = 0.6861;
    double Cs = 0.0749;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003261565327935732;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> team = {"10 98", "84 25", "8 17", "71 92", "19 74", "87 9", "1 16", "69 24", "6 12", "24 66", "16 15", "83 27", "87 81", "90 45", "40 44", "52 43", "73 21"};
    vector<string> rivals = {"87 50", "20 69", "29 43", "85 22", "60 50", "6 45", "11 10", "76 40", "16 74", "5 21", "90 71", "69 81", "72 34", "9 6", "47 72", "90 21", "83 78"};
    double Cp = 0.9372;
    double Cs = 0.5566;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06812945771707667;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> team = {"45 97", "58 64", "25 59", "52 52", "37 25", "21 38", "54 93", "60 28", "93 24", "76 62", "90 82", "13 89", "82 22", "19 2", "28 34", "42 8", "74 19", "57 49", "42 57", "18 74", "95 60", "67 93", "69 36", "78 17", "94 45", "40 87", "47 31", "92 4", "67 27", "11 45", "38 6", "84 86", "51 19", "63 6", "75 83", "2 21", "88 89", "9 1"};
    vector<string> rivals = {"57 55", "55 56", "97 92", "94 62", "17 91", "24 78", "65 81", "19 43", "43 99", "59 50", "52 30", "75 93", "4 18", "10 91", "67 80", "53 45", "12 86", "60 97", "41 79", "83 57", "47 32", "47 12", "39 49", "77 63", "37 99", "92 88", "42 27", "91 3", "89 39", "31 19", "18 89", "74 49", "78 46", "85 42", "71 9", "26 1", "94 41", "68 35"};
    double Cp = 0.4277;
    double Cs = 0.2898;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005792203063367545;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> team = {"27 95", "25 68", "4 71", "72 43", "93 1", "86 85", "9 79", "18 50", "14 10", "32 85", "80 82", "52 5", "23 79", "11 91", "88 32", "94 45", "43 58", "62 18", "53 78", "85 34", "39 91", "70 44", "57 38", "27 72", "49 76"};
    vector<string> rivals = {"74 97", "50 55", "10 69", "5 84", "17 23", "64 60", "13 44", "72 27", "96 15", "86 30", "53 59", "37 26", "83 81", "42 67", "59 97", "27 77", "24 99", "22 91", "44 92", "28 89", "27 10", "94 7", "91 8", "56 78", "87 20"};
    double Cp = 0.8113;
    double Cs = 0.1205;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.008754638702327662;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> team = {"76 99", "63 29", "35 15", "66 67", "15 41", "32 18", "86 35", "91 32", "10 48", "25 87", "89 60", "23 78", "69 74", "73 45", "87 95", "46 33", "5 72", "87 40", "97 75", "65 30", "28 47", "9 10", "22 88", "27 18", "15 22", "54 51", "64 51", "66 85", "94 12", "57 26", "53 18", "40 62", "51 45", "19 79", "9 78", "2 24", "71 19", "59 23", "59 93", "74 50", "38 47", "80 90"};
    vector<string> rivals = {"47 74", "57 37", "65 98", "52 97", "64 92", "57 21", "66 76", "25 15", "96 81", "15 27", "27 71", "33 66", "98 96", "81 4", "70 44", "77 1", "26 86", "86 47", "74 78", "10 23", "90 89", "89 56", "28 49", "68 35", "54 3", "72 85", "37 19", "94 1", "19 66", "23 38", "11 81", "39 41", "74 41", "45 91", "64 7", "20 72", "8 98", "87 85", "59 44", "4 23", "9 59", "60 95"};
    double Cp = 0.8878;
    double Cs = 0.6344;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07375435593799028;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> team = {"2 92", "93 50", "75 24", "44 57", "66 39", "36 42", "68 16"};
    vector<string> rivals = {"65 66", "92 92", "26 33", "96 63", "38 64", "73 75", "66 95"};
    double Cp = 0.9564;
    double Cs = 0.9842;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5662547934206716;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> team = {"84 99", "50 41", "69 97", "42 15", "90 38", "30 86", "48 28", "8 33", "2 92", "40 11"};
    vector<string> rivals = {"78 66", "35 99", "48 27", "3 98", "62 67", "41 33", "25 53", "96 78", "87 6", "48 89"};
    double Cp = 0.8506;
    double Cs = 0.4905;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06204504002987707;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> team = {"64 99", "94 66", "31 91", "16 54", "39 59", "15 38", "86 56", "20 63", "72 21", "4 5", "77 54", "76 97", "53 74", "8 76", "68 60", "79 92", "90 2", "7 86", "66 55", "21 82", "70 51", "24 67", "16 31", "11 70", "15 11", "31 15", "1 32", "96 4", "49 64", "12 4", "53 9", "46 10", "15 25", "74 61", "28 48", "30 6", "6 30", "85 77", "47 21", "3 12", "34 22", "91 7", "82 10", "62 3", "36 18", "18 9", "57 25", "42 89", "59 86", "9 91"};
    vector<string> rivals = {"77 15", "70 88", "95 28", "58 71", "51 25", "16 47", "22 98", "35 19", "32 12", "8 49", "9 51", "56 60", "20 38", "29 85", "15 35", "46 26", "3 13", "62 41", "83 28", "30 93", "1 87", "53 50", "15 16", "67 97", "93 15", "12 37", "15 42", "11 98", "16 87", "68 92", "47 65", "46 3", "80 63", "7 6", "88 29", "61 91", "85 79", "31 23", "20 85", "42 77", "36 57", "25 24", "75 78", "73 40", "98 96", "78 99", "11 44", "5 53", "65 74", "90 8"};
    double Cp = 0.9727;
    double Cs = 0.9922;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4007206730473857;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> team = {"38 98", "12 23", "98 19", "53 30", "79 11", "62 69", "15 51", "10 93", "3 6", "19 62", "31 36", "87 82", "32 43", "76 98", "5 66", "1 44", "72 95", "7 42", "48 33", "49 9", "58 8", "60 56", "98 78", "36 97", "12 96", "22 71", "86 17", "4 27", "14 83", "93 11", "83 73", "57 20", "75 88", "49 62", "63 68", "34 94", "28 83", "29 69", "46 47", "20 86", "52 7", "58 37", "68 90", "55 43", "59 27", "17 90", "58 71", "89 73", "40 7", "33 42"};
    vector<string> rivals = {"33 10", "84 41", "88 49", "35 79", "54 32", "71 55", "28 17", "13 77", "4 58", "34 62", "60 2", "55 93", "19 95", "49 16", "58 38", "3 39", "77 33", "91 32", "49 63", "98 36", "32 7", "52 40", "86 88", "48 40", "61 1", "40 72", "29 2", "7 26", "73 92", "9 33", "11 69", "1 94", "58 21", "94 21", "37 85", "46 79", "68 55", "57 22", "19 18", "99 30", "80 41", "31 20", "39 71", "16 42", "76 31", "22 18", "63 58", "59 3", "12 80", "15 35"};
    double Cp = 0.9998;
    double Cs = 0.6093;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1602961674147664;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> team = {"71 90", "77 16", "79 58", "81 73", "68 71", "67 61", "27 52", "86 26", "69 25", "52 74", "94 73", "99 39", "7 3", "13 80", "24 82", "34 3", "39 3", "47 22", "36 3", "39 63", "2 11", "90 10", "17 77", "30 43", "84 27", "63 45"};
    vector<string> rivals = {"42 60", "99 54", "19 51", "87 67", "50 45", "83 71", "56 97", "28 37", "34 58", "68 16", "81 44", "36 5", "95 31", "5 45", "68 94", "31 93", "64 93", "85 3", "75 16", "17 50", "39 39", "91 49", "78 62", "71 12", "26 69", "10 69"};
    double Cp = 0.9394;
    double Cs = 0.9099;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.42754118754563575;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> team = {"15 93", "31 74", "42 81", "86 92", "65 34", "6 92", "93 57"};
    vector<string> rivals = {"16 54", "90 8", "66 79", "15 67", "35 84", "48 28", "99 35"};
    double Cp = 0.9537;
    double Cs = 0.7424;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.17321025402632176;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> team = {"2 93", "51 38", "69 10", "83 9"};
    vector<string> rivals = {"83 36", "50 26", "56 21", "77 40"};
    double Cp = 0.984;
    double Cs = 0.7137;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.17132786399670247;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> team = {"72 99", "19 50", "61 91", "36 41", "92 92", "45 2", "6 20", "72 33", "44 65", "26 95", "46 68", "13 9", "49 32", "71 64", "65 7", "33 31", "94 41", "20 34", "94 72", "95 16", "47 60", "3 42", "17 95", "2 68", "96 14", "56 93", "99 18", "91 52", "27 56", "58 5", "80 32", "82 23", "13 94", "16 47", "38 87", "97 41", "89 35", "62 50", "42 67", "58 51", "4 82", "10 48", "21 60", "30 15", "70 77", "96 54", "87 47", "40 58", "48 39", "70 37"};
    vector<string> rivals = {"71 30", "10 72", "34 15", "27 93", "39 56", "94 92", "90 38", "57 85", "51 54", "41 2", "97 6", "27 6", "45 35", "44 91", "21 44", "18 33", "47 82", "58 98", "72 50", "62 16", "70 38", "97 63", "96 15", "13 81", "95 64", "87 63", "4 6", "6 40", "49 14", "93 94", "63 19", "31 57", "94 56", "58 9", "91 93", "38 16", "85 87", "71 71", "80 57", "16 2", "24 96", "17 85", "65 10", "19 52", "44 18", "99 94", "80 12", "47 10", "3 41", "5 5"};
    double Cp = 0.0541;
    double Cs = 0.4261;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00695511999875945;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> team = {"3 95", "18 51", "15 48", "13 27", "8 13", "68 62", "27 18", "52 95", "36 42", "98 81", "99 66", "17 3", "38 95", "67 54", "11 22", "91 34", "6 28", "81 51", "69 64", "10 49", "47 51", "20 75", "22 50", "67 73", "65 51", "95 82", "26 12", "79 57", "50 94", "86 62", "52 33", "39 44", "1 56", "12 4", "85 43", "77 19", "45 50", "14 89", "49 46", "37 58", "66 55", "30 6", "32 52", "97 55", "54 31", "72 23", "62 7", "59 41", "21 85"};
    vector<string> rivals = {"51 7", "88 2", "45 82", "14 25", "68 25", "69 38", "11 58", "38 98", "57 64", "29 59", "67 65", "74 15", "38 86", "99 81", "6 24", "65 53", "14 98", "60 16", "41 47", "7 21", "95 8", "62 33", "18 50", "32 16", "53 62", "99 52", "16 48", "18 66", "70 77", "47 83", "10 94", "12 90", "83 23", "81 3", "35 43", "25 36", "2 67", "9 71", "86 59", "97 96", "22 26", "52 57", "77 64", "66 96", "49 61", "21 60", "96 35", "37 57", "26 94"};
    double Cp = 0.8229;
    double Cs = 0.9066;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21606667936725782;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> team = {"13 90", "78 35", "12 14", "37 5", "23 62", "21 21", "29 77", "62 53", "7 82", "8 80", "88 15", "47 68", "65 2", "52 9", "58 34", "91 14", "2 41", "35 76", "19 65", "5 57", "94 61"};
    vector<string> rivals = {"21 77", "80 82", "49 70", "2 91", "92 10", "57 64", "10 83", "78 20", "40 7", "64 36", "16 99", "90 59", "31 89", "35 99", "96 82", "8 12", "62 6", "24 41", "12 30", "20 73", "6 15"};
    double Cp = 0.0468;
    double Cs = 0.7359;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006816769495552547;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> team = {"40 97", "21 61", "64 54", "50 4", "33 63", "53 38", "87 78", "95 91", "47 9", "55 52", "41 26", "97 77", "70 41", "69 12", "5 51", "77 74", "90 35", "4 85", "9 14", "85 67", "31 21", "59 73", "39 32", "25 96", "94 21", "63 25", "52 16", "35 35", "42 86", "92 87", "45 57", "65 65", "44 53", "46 37", "93 56", "60 45", "35 57", "50 70", "62 26", "88 42", "13 37", "82 38", "48 94", "15 67", "66 23", "2 61", "31 76", "23 93", "47 85", "17 3"};
    vector<string> rivals = {"40 2", "51 91", "29 74", "65 98", "55 57", "88 1", "38 52", "95 17", "49 58", "71 36", "93 90", "64 89", "93 8", "86 73", "50 20", "41 22", "89 2", "15 53", "3 65", "61 29", "47 47", "59 81", "53 16", "41 58", "21 98", "46 30", "35 38", "63 21", "69 66", "68 64", "48 56", "31 96", "90 72", "44 18", "5 17", "31 31", "44 76", "46 96", "12 51", "54 28", "24 31", "98 24", "79 19", "63 62", "34 47", "19 69", "16 60", "6 72", "82 82", "96 81"};
    double Cp = 0.9971;
    double Cs = 0.5881;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1918683239612444;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> team = {"49 98", "20 54", "81 2", "60 74", "44 77", "70 39", "42 69", "92 41", "95 68", "22 22", "78 49", "74 91", "91 32", "16 30", "7 73"};
    vector<string> rivals = {"20 83", "47 6", "73 94", "98 95", "12 99", "16 52", "92 50", "67 77", "78 79", "23 21", "92 29", "44 36", "82 81", "54 16", "75 5"};
    double Cp = 0.9959;
    double Cs = 0.9727;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.36948595743777013;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> team = {"51 95", "93 93", "38 19", "29 25", "62 48", "8 48", "46 57", "40 65", "88 19", "98 1", "54 43"};
    vector<string> rivals = {"40 99", "8 77", "34 87", "60 16", "40 55", "47 31", "89 80", "79 29", "94 44", "99 50", "53 45"};
    double Cp = 0.8873;
    double Cs = 0.9999;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.509752368919822;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> team = {"8 94", "71 41", "41 18", "58 21", "50 86", "42 86", "20 82", "21 73", "85 93", "17 61", "63 15", "83 47", "6 50", "32 28"};
    vector<string> rivals = {"14 95", "7 4", "21 57", "41 89", "85 68", "61 17", "17 70", "40 75", "47 52", "76 85", "27 24", "66 94", "91 97", "51 53"};
    double Cp = 0.9777;
    double Cs = 0.5793;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10068101010931951;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> team = {"15 99", "3 70", "34 35", "40 72", "78 52", "71 89", "75 31", "87 15", "43 8", "15 10", "33 84", "38 77", "49 64", "85 8", "59 71", "32 37", "77 38", "88 87", "9 46", "52 5", "96 15", "69 43", "45 44", "4 36", "72 62", "8 59", "22 33", "93 47", "39 89", "11 88", "76 81", "97 58", "81 66", "23 27", "55 86", "92 45", "68 47", "90 96", "20 54", "63 11", "21 1", "1 91"};
    vector<string> rivals = {"33 35", "97 23", "77 21", "2 50", "88 77", "90 84", "83 7", "21 34", "14 33", "19 99", "73 14", "39 9", "94 31", "10 58", "72 9", "50 72", "92 65", "85 98", "80 62", "42 9", "3 95", "76 23", "91 60", "15 46", "39 93", "23 1", "47 12", "33 89", "55 63", "31 15", "20 99", "5 66", "97 73", "44 15", "58 53", "37 90", "71 57", "77 56", "68 85", "64 81", "8 83", "61 19"};
    double Cp = 0.725;
    double Cs = 0.9498;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21154556413939984;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> team = {"86 98", "14 10", "16 40", "44 96", "8 96", "38 94", "42 56", "82 2", "70 4", "98 24", "28 56", "10 16", "94 78", "60 36", "36 76", "66 2", "30 20", "34 92", "62 10", "10 44", "28 12", "10 18", "64 20", "2 60", "90 26", "34 54", "22 24", "94 38", "82 68", "80 6", "38 32", "70 6", "88 30", "96 10", "68 8", "48 80", "54 42", "96 28", "90 42", "10 12", "68 86", "26 46", "12 6", "28 84", "2 92", "92 96", "78 96", "80 80", "96 22", "96 78"};
    vector<string> rivals = {"69 15", "32 5", "44 16", "30 8", "39 6", "46 28", "43 38", "65 3", "72 39", "40 10", "58 1", "70 13", "52 21", "74 12", "73 14", "31 3", "42 46", "59 43", "39 28", "66 1", "30 6", "65 40", "39 42", "68 49", "64 48", "59 4", "44 47", "73 5", "60 2", "71 48", "55 18", "49 40", "30 22", "29 48", "56 5", "72 19", "26 30", "42 27", "60 3", "73 39", "33 20", "30 9", "57 10", "73 11", "26 47", "38 23", "70 21", "36 12", "47 48", "66 34"};
    double Cp = 0.9491;
    double Cs = 0.8722;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> team = {"24 94", "40 42", "52 32", "40 60", "8 42", "98 92", "82 72", "4 20", "18 92", "76 2", "42 26", "54 38", "8 22", "74 34", "42 90", "22 56", "76 86", "34 24", "16 6", "16 36", "60 90", "40 10", "92 48", "42 4", "66 74", "84 8", "44 80", "82 30", "6 82", "98 70", "8 78", "62 74", "6 92", "98 36", "18 86", "66 8", "20 10", "86 78", "86 14", "26 80"};
    vector<string> rivals = {"68 7", "74 35", "29 21", "52 19", "63 43", "37 47", "47 40", "74 18", "46 2", "29 11", "36 28", "66 15", "29 39", "38 40", "28 41", "33 3", "46 45", "51 16", "35 5", "74 46", "45 30", "33 18", "46 13", "34 43", "63 1", "71 24", "27 10", "58 37", "68 39", "66 36", "45 5", "45 21", "34 46", "62 17", "42 12", "58 4", "28 46", "55 45", "56 37", "67 4"};
    double Cp = 0.4141;
    double Cs = 0.7284;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> team = {"30 96", "90 44", "84 8", "44 48", "72 70", "60 38", "62 14", "68 56", "54 46", "88 66", "54 66", "62 48", "48 40", "62 78", "52 34"};
    vector<string> rivals = {"70 22", "40 48", "47 24", "55 19", "61 35", "56 39", "51 17", "49 20", "56 7", "69 33", "52 23", "67 4", "56 24", "52 33", "59 28"};
    double Cp = 0.8426;
    double Cs = 0.5129;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> team = {"8 96", "90 4", "58 42", "2 48", "76 80", "68 84", "68 18", "38 82", "18 70", "86 60", "44 86", "12 20", "66 94", "42 58", "96 86", "64 52", "42 50", "76 4", "88 52", "40 4", "20 74", "80 20", "8 46", "54 78", "64 92", "60 4", "8 50", "48 78", "92 24", "90 28", "74 46", "84 10", "14 68", "56 26", "58 64", "86 2", "24 16", "90 34", "24 36", "70 52", "18 72", "12 6", "70 40", "44 68", "92 52", "12 4", "86 32", "64 26", "72 50", "40 26"};
    vector<string> rivals = {"52 39", "54 21", "63 40", "62 23", "57 26", "68 16", "34 35", "47 34", "69 26", "55 2", "31 2", "68 30", "63 2", "57 13", "44 41", "34 36", "31 10", "59 9", "54 32", "37 8", "47 43", "60 26", "31 3", "60 20", "67 5", "65 10", "73 43", "71 26", "26 24", "70 2", "37 18", "57 46", "45 2", "8 97", "59 42", "70 17", "46 25", "46 29", "53 13", "71 12", "68 1", "29 25", "29 23", "35 37", "61 25", "70 14", "45 13", "58 47", "32 34", "49 39"};
    double Cp = 0.914;
    double Cs = 0.511;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 1.775424064948732E-5;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> team = {"2 86", "26 58", "44 84", "94 26", "62 20", "58 44", "88 68", "70 76", "56 68", "56 86"};
    vector<string> rivals = {"72 13", "47 42", "2 87", "38 29", "69 34", "53 34", "60 38", "54 22", "53 43", "56 10"};
    double Cp = 0.7226;
    double Cs = 0.2928;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0011736260090394264;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> team = {"34 90", "34 20", "18 32", "40 8", "72 86", "46 82", "54 8", "88 8", "52 6", "54 20", "74 36", "80 76", "44 18", "88 2", "64 26", "56 76", "62 52", "52 44", "94 18", "80 2", "34 82", "62 16", "82 24", "50 6", "22 38", "8 22", "42 58", "84 28", "2 30", "64 18", "22 8", "86 42", "44 46", "64 4", "46 40", "28 18", "74 40", "92 14", "90 42", "16 76", "92 64", "66 42", "46 2", "26 76", "72 66", "20 54", "42 12", "86 78", "36 16", "80 36"};
    vector<string> rivals = {"25 83", "53 88", "34 86", "61 46", "63 77", "26 61", "54 63", "49 47", "43 67", "48 71", "37 49", "30 83", "44 55", "62 66", "21 56", "40 65", "45 83", "31 54", "44 49", "38 74", "38 51", "64 54", "57 63", "49 54", "18 60", "43 48", "42 48", "60 84", "28 49", "48 53", "49 58", "58 57", "40 46", "42 45", "63 52", "40 86", "57 83", "59 59", "34 55", "60 66", "39 54", "53 78", "28 64", "57 46", "27 72", "50 66", "39 68", "35 53", "61 49", "54 65"};
    double Cp = 0.9726;
    double Cs = 0.2668;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> team = {"36 98", "6 4", "24 24", "84 26", "96 72", "26 82", "92 70", "26 46", "12 12", "76 58", "40 16", "96 40", "16 16", "12 62", "26 28", "42 78", "44 92", "92 76", "78 34", "4 2", "86 86", "24 6", "28 96", "72 66", "28 56", "62 36", "18 12", "30 2", "50 30", "4 32", "14 36", "42 18", "52 8", "16 94", "44 62", "68 94", "46 52", "12 82", "46 42", "14 40", "70 10"};
    vector<string> rivals = {"32 97", "32 77", "64 84", "21 51", "49 67", "26 96", "54 82", "39 88", "52 96", "31 90", "66 69", "25 69", "27 55", "31 63", "53 54", "25 67", "57 66", "40 80", "24 80", "24 55", "26 57", "60 62", "44 53", "24 90", "43 64", "20 65", "30 61", "56 78", "41 75", "31 72", "61 92", "43 49", "20 50", "64 87", "66 85", "41 70", "40 95", "38 57", "39 58", "30 52", "33 50"};
    double Cp = 0.9116;
    double Cs = 0.2518;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> team = {"18 92", "50 28", "58 74", "26 80", "14 44", "58 60", "70 12", "94 76", "34 36", "64 18", "6 34", "32 14", "2 64", "8 76", "38 88", "28 90", "52 36", "86 72", "62 26", "78 26", "34 64", "50 8", "68 36", "28 78", "22 24", "32 36", "34 76", "24 8", "96 6", "24 30", "74 62"};
    vector<string> rivals = {"23 85", "12 63", "13 84", "38 76", "25 64", "23 91", "43 64", "52 82", "34 50", "28 91", "16 68", "46 77", "21 50", "56 84", "34 60", "48 59", "10 78", "40 59", "20 58", "26 78", "38 83", "26 64", "57 49", "21 61", "44 52", "26 84", "41 55", "35 64", "34 46", "22 86", "25 53"};
    double Cp = 0.905;
    double Cs = 0.1407;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> team = {"24 99", "8 16", "28 4", "59 22", "92 56", "57 4", "64 52", "39 30", "89 94", "28 19", "77 29", "4 97", "58 23", "53 36", "16 83", "28 92", "21 88", "38 11", "48 70", "42 66", "35 77", "44 12", "62 95", "65 37", "33 42", "2 95", "2 6", "20 64", "31 37", "4 12", "74 42", "82 13", "86 66", "81 48", "9 71", "55 70", "23 31", "67 72", "12 4", "80 83", "6 41", "7 98", "72 12", "37 28", "13 35", "51 39", "54 88", "92 8", "66 73", "35 28"};
    vector<string> rivals = {"72 56", "4 18", "52 40", "37 69", "53 88", "27 28", "22 88", "20 91", "7 38", "97 34", "19 90", "44 68", "57 19", "55 33", "58 48", "90 15", "40 9", "31 29", "83 39", "2 55", "92 17", "3 99", "81 61", "28 17", "75 66", "28 36", "64 92", "8 14", "61 17", "34 63", "24 68", "56 75", "43 20", "12 78", "33 31", "5 1", "38 51", "68 82", "11 35", "63 57", "14 5", "36 96", "66 3", "77 60", "67 44", "50 30", "8 26", "81 45", "86 71", "35 70"};
    double Cp = 0.9176;
    double Cs = 0.4962;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0827737417458536;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> team = {"18 69", "94 52", "58 10"};
    vector<string> rivals = {"21 45", "90 17", "97 10"};
    double Cp = 0.8751;
    double Cs = 0.6114;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1770938419759998;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> team = {"62 42", "23 15", "2 5"};
    vector<string> rivals = {"2 46", "36 74", "70 96"};
    double Cp = 0.8948;
    double Cs = 0.2528;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006761171220317228;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> team = {"1 99", "3 97", "5 95", "7 93", "9 91", "11 89", "13 87", "15 85", "17 83", "19 81", "21 79", "23 77", "25 75", "27 73", "29 71", "31 69", "33 67", "35 65", "37 63", "39 61", "41 59", "43 57", "45 55", "47 53", "49 51", "99 99", "97 97", "95 95", "93 93", "91 91", "89 89", "87 87", "85 85", "83 83", "81 81", "79 79", "77 77", "75 75", "73 73", "71 71", "69 69", "67 67", "65 65", "63 63", "61 61", "59 59", "57 57", "55 55", "53 53"};
    vector<string> rivals = {"2 98", "4 96", "6 94", "8 92", "10 90", "12 88", "14 86", "16 84", "18 82", "20 80", "22 78", "24 76", "26 74", "28 72", "30 70", "32 68", "34 66", "36 64", "38 62", "40 60", "42 58", "44 56", "46 54", "48 52", "50 50", "98 98", "96 96", "94 94", "92 92", "90 90", "88 88", "86 86", "84 84", "82 82", "80 80", "78 78", "76 76", "74 74", "72 72", "70 70", "68 68", "66 66", "64 64", "62 62", "60 60", "58 58", "56 56", "54 54", "52 52"};
    double Cp = 0.8;
    double Cs = 0.9;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003409467477737866;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> team = {"50 50", "40 50", "40 49", "40 9", "50 20", "50 21", "13 34", "34 34", "43 89", "56 89", "34 7", "34 56", "89 67", "45 90", "1 67"};
    vector<string> rivals = {"50 41", "44 29", "48 27", "45 41", "48 64", "34 67", "67 78", "23 67", "12 34", "56 90", "9 90", "34 87", "12 43", "67 3", "89 3"};
    double Cp = 0.999999;
    double Cs = 0.8;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.40326558314315625;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> team = {"99 99", "96 67", "97 77", "98 88", "77 52", "89 92", "61 5", "1 93", "55 16", "69 74", "57 9", "21 38", "41 49", "49 33", "98 55", "81 6", "85 25", "35 19", "49 98", "66 87", "39 43", "60 16", "46 28", "88 25", "43 39", "1 67", "36 69", "37 69", "51 58", "25 48", "27 64", "90 22", "71 82", "7 36", "69 81", "43 56", "50 81", "35 13", "48 5", "91 13", "61 24", "90 58", "55 13", "69 15", "88 65", "68 91", "72 17", "60 74", "53 38", "44 63"};
    vector<string> rivals = {"28 83", "22 87", "32 70", "21 73", "41 70", "98 50", "95 21", "54 60", "56 86", "7 46", "75 78", "19 50", "83 62", "9 78", "8 14", "8 22", "49 32", "52 40", "93 52", "79 82", "5 63", "30 17", "75 69", "15 85", "48 99", "33 44", "54 5", "99 50", "63 71", "4 69", "60 43", "65 27", "62 77", "7 63", "68 14", "66 4", "7 24", "45 11", "47 2", "75 13", "47 24", "30 8", "80 63", "67 43", "32 1", "76 21", "48 10", "22 57", "98 3", "54 98"};
    double Cp = 0.9;
    double Cs = 0.2;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012301499427098846;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> team = {"50 2", "50 4", "50 8", "50 16", "50 32"};
    vector<string> rivals = {"48 2", "45 4", "43 16", "47 32", "49 8"};
    double Cp = 1.0;
    double Cs = 1.0;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7549928526243724;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> team = {"23 3", "23 2", "23 4", "22 25", "21 24", "23 15", "23 21", "12 12", "67 65", "54 67", "43 2", "65 86", "34 43", "23 54", "1 1", "7 7"};
    vector<string> rivals = {"25 67", "67 5", "56 8", "56 5", "89 7", "9 7", "98 7", "89 76", "89 54", "45 9", "43 98", "76 5", "43 65", "47 43", "87 78", "78 67"};
    double Cp = 0.8;
    double Cs = 0.9;
    BasketballStrategy* pObj = new BasketballStrategy();
    clock_t start = clock();
    double result = pObj->scoreProbability(team, rivals, Cp, Cs);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4869479161772932;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=9993&pm=6546
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
 
class BasketballStrategy {
public:
  int n,m,X1[100],Y1[100],BX[100],BY[100];
  int sqr(int X)
  {
    return X*X;
  }
  double sqr(double X)
  {
    return X*X;
  }
  int distr(int X1,int Y1,int X2,int Y2)
  {
    return sqr(X1-X2)+sqr(Y1-Y2);
  }
  double calcdist(int X1,int Y1,int X2,int Y2)
  {
    double result=1e100;
    double a=Y1-Y2;
    double b=-(X1-X2);
    double c=X1*Y2-X2*Y1;
    for (int i=0;i<m;i++)
    {
      int d1=distr(X1,Y1,BX[i],BY[i]);
      int d2=distr(X2,Y2,BX[i],BY[i]);
      int d0=distr(X1,Y1,X2,Y2);
      if (abs(d1-d2)<=d0)
      {
        double t=fabs(a*BX[i]+b*BY[i]+c)/sqrt(a*a+b*b);
        if (t<result)
          result=t;
      }
    }
    return result;
  }
  double scoreProbability(vector <string> T1, vector <string> T2, double Cp, double Cs)
  {
    double f[100];
    bool vis[100];
    n=T1.size();
    m=T2.size();
    int i,j;
    for (i=0;i<n;i++)
      sscanf(T1[i].c_str(),"%d%d",&X1[i],&Y1[i]);
    for (i=0;i<m;i++)
      sscanf(T2[i].c_str(),"%d%d",&BX[i],&BY[i]);
    for (i=0;i<n;i++)
      f[i]=0;
    memset(vis,false,sizeof(vis));
    f[0]=1;
    double result=0;
    while (1)
    {
      int k=-1;
      double max=-1;
      for (i=0;i<n;i++)
        if (!vis[i] && f[i]>max)
        {
          max=f[i];
          k=i;
        }
      if (k==-1)
        break;
      vis[k]=true;
      double ls=sqrt(sqr(X1[k]-50)+sqr(Y1[k]));
      double dr=calcdist(X1[k],Y1[k],50,0);
      double p0=pow(Cs*dr/(dr+1),log(ls));
      if (p0*max>result)
        result=p0*max;
      for (i=0;i<n;i++)
        if (!vis[i])
        {
          double dr=calcdist(X1[k],Y1[k],X1[i],Y1[i]);
          double ls=sqrt(sqr(X1[k]-X1[i])+sqr(Y1[k]-Y1[i]));
          p0=Cp*(1-sqr(ls/150.0))*dr/(dr+1);
          if (p0*max>f[i])
            f[i]=p0*max;
        }
    }
    return result;
  }
};

********************************************************************************
*******************************************************************************/