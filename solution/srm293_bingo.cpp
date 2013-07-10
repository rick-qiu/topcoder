/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4499
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

class Bingo {
public:
    string winner(vector<string> card, vector<string> calls);
};

string Bingo::winner(vector<string> card, vector<string> calls) {
    string ret;
    return ret;
}


int test0() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B12", "B3", "I16", "N40", "B2", "O70", "B1", "B9", "O71", "B4", "B7", "B11", "O68", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B12,B3,B1,B9,B4";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B12", "B3", "I16", "N40", "B2", "O70", "B1", "B9", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"O63", "G48", "I23", "B9", "B1", "B4", "B3", "B7", "B12", "G49", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "O63,G48,I23,B12";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B12", "B3", "N40", "B2", "O70", "B1", "B9", "O71", "N34", "B7", "B11", "O66", "G52", "I16", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B3,O66,G52,I16";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> card = {" B I N G O", " 9 23 34 52 72", " 2 22 33 55 66", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B12", "B9", "B1", "B4", "B15", "B3", "I16", "G55", "O72", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B3,I16,G55,O72";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> card = {" B I N G O", " 9 23 34 52 72", " 2 22 33 55 66", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B2", "B12", "B9", "B1", "B4", "B15", "B3", "I16", "G55", "O72", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B2,B9,B1,B4,B3";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> card = {" B I N G O", " 9 23 34 52 72", " 2 22 33 55 66", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"I23", "N34", "G52", "O66", "O71", "O75", "O61", "O63", "B12", "B9", "B1", "B4", "B15", "B3", "I16", "G55", "O72", "O70", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "I23,N34,G52,B9,O72";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> card = {" B I N G O", " 9 23 34 52 72", " 2 22 33 55 66", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"I19", "I18", "G52", "I23", "N34", "O66", "O71", "O75", "O61", "O63", "B12", "B9", "B1", "B4", "B15", "B3", "I16", "G55", "O72", "O70", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "G52,I23,N34,B9,O72";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> card = {" B I N G O", " 9 23 34 52 72", " 2 22 33 55 66", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"I19", "I18", "O71", "G52", "I23", "N34", "O66", "O75", "O61", "O63", "B12", "B9", "B1", "B4", "B15", "B3", "I16", "G55", "O72", "O70", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "O71,O66,O61,O63,O72";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> card = {" B I N G O", " 9 23 34 52 62", " 2 22 33 50 66", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"O61", "G59", "N33", "N34", "N35", "N41", "G48", "I16", "B4", "N40", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "O61,G48,I16,B4,N40";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> card = {" B I N G O", " 9 23 34 52 62", " 2 22 33 50 66", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"G59", "N33", "N34", "N35", "N41", "G48", "O61", "I16", "B4", "N40", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "N33,N34,N41,N40";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> card = {" B I N G O", " 9 23 34 52 62", " 2 22 33 50 66", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"G59", "N33", "N34", "N35", "N41", "G48", "O61", "I16", "B4", "I17", "I19", "I20", "I21", "I25", "I26", "I27", "I28", "I29", "I30", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> card = {" B I N G O", " 9 23 34 52 62", " 2 22 33 50 66", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"G59", "N33", "N34", "N35", "I22", "B9", "O63", "N41", "G48", "O61", "I16", "B4", "I17", "I19", "I20", "I21", "I25", "I26", "I27", "I28", "I29", "I30", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "I22,B9,O63,G48";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> card = {" B I N G O", " 1 23 34 52 62", " 2 22 33 50 66", " 3 24 F 59 71", " 4 16 40 48 61", " 9 18 41 49 63"};
    vector<string> calls = {"G59", "N33", "N34", "N35", "I22", "B9", "O63", "N41", "G48", "O61", "I16", "B4", "I17", "I19", "I20", "I21", "I25", "I26", "I27", "I28", "I29", "I30", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"I22", "I23", "N33", "G55", "G48", "O66", "O63", "B12", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "I22,N33,G55,O66,B12";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> card = {" B I N G O", " 9 23 34 52 72", " 2 22 33 55 66", " 1 24 F 54 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"O63", "G48", "B9", "I22", "I20", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "O63,G48,B9,I22";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 75", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 43 49 72"};
    vector<string> calls = {"I19", "I18", "G52", "I23", "N34", "O66", "O71", "O75", "O61", "O63", "B12", "B11", "B1", "B4", "B15", "B3", "I16", "G55", "O72", "O70", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "G52,O66,B3,I16";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> card = {" B I N G O", " 1 23 31 51 63", " 2 22 33 50 65", " 3 21 F 49 67", " 4 16 34 48 70", " 5 18 35 47 73"};
    vector<string> calls = {"I22", "I18", "G52", "I23", "N34", "O66", "O67", "I21", "B8", "B2", "O75", "O61", "O63", "B12", "B11", "B1", "B4", "B15", "B3", "I16", "G55", "O72", "I19", "O70", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "I22,I18,I23,I21,I16";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> card = {" B I N G O", " 5 18 44 48 64", " 12 19 45 56 61", " 14 27 F 57 68", " 6 23 37 54 65", " 15 25 31 59 63"};
    vector<string> calls = {"O70", "B3", "B9", "I23", "N43", "B13", "B7", "G52", "O71", "G56", "N37", "O64", "G59", "B6", "B12", "N45", "B11", "N32", "G49", "I25", "N36", "N40", "I18", "O66", "I16", "G55", "G60", "B4", "G47", "N38", "I24", "B2", "B10", "O73", "N39", "N44", "G54", "O62", "I21", "I17", "N33", "O63", "I22", "O65", "B14", "N35", "G51", "I29", "B15", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "I23,N37,B6,G54,O65";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> card = {" B I N G O", " 15 28 37 50 70", " 8 27 36 54 75", " 9 23 F 49 62", " 5 22 44 46 74", " 12 25 33 55 73"};
    vector<string> calls = {"N36", "N40", "N41", "B6", "N43", "B15", "B13", "G53", "O70", "I29", "N35", "I23", "O66", "N37", "B1", "G58", "I27", "I18", "B4", "O71", "O63", "N44", "O62", "N34", "G50", "B11", "O64", "O67", "G54", "I26", "G49", "G59", "I22", "N31", "I30", "G47", "B12", "B14", "I21", "I19", "N38", "G55", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "O70,G54,I22,B12";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> card = {" B I N G O", " 7 24 44 59 65", " 9 26 40 46 68", " 2 29 F 56 62", " 11 23 33 60 72", " 3 16 42 54 69"};
    vector<string> calls = {"G56", "G52", "B8", "I16", "I23", "G54", "I24", "G55", "O75", "G51", "N44", "I27", "N32", "G46", "O74", "O71", "O70", "G47", "B10", "B7", "B11", "O67", "N43", "I21", "I19", "I22", "B5", "B14", "N35", "I26", "G60", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> card = {" B I N G O", " 11 25 39 54 64", " 2 27 31 52 75", " 9 16 F 58 65", " 12 29 38 47 61", " 4 18 36 46 71"};
    vector<string> calls = {"G60", "G57", "I29", "B1", "N35", "O63", "I20", "O61", "G53", "N33", "I26", "B12", "O66", "B7", "N41", "I16", "I22", "O72", "I23", "N45", "O73", "I19", "N32", "B6", "B15", "N34", "B3", "N44", "N39", "B10", "G58", "I24", "O64", "B5", "I25", "N42", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> card = {" B I N G O", " 7 25 43 46 62", " 4 27 45 54 68", " 10 20 F 50 61", " 14 22 37 55 72", " 6 28 31 57 67"};
    vector<string> calls = {"G48", "I22", "O64", "O74", "G59", "N41", "I21", "B2", "I17", "B11", "O66", "N43", "G55", "B14", "I23", "I27", "I16", "I18", "I26", "B6", "I20", "N39", "O75", "B4", "G47", "N33", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> card = {" B I N G O", " 6 17 42 55 71", " 2 25 39 58 74", " 14 22 F 50 73", " 11 21 38 47 75", " 10 24 35 49 68"};
    vector<string> calls = {"N40", "N36", "G60", "I27", "O68", "N45", "I28", "I22", "N32", "N39", "G55", "O69", "G57", "O73", "G59", "G50", "O72", "O64", "G54", "O65", "N35", "I17", "G51", "I20", "B11", "O63", "G48", "B9", "O61", "N42", "N33", "I30", "G47", "B3", "B13", "B2", "O71", "B6", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "G55,I17,N42,O71,B6";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> card = {" B I N G O", " 10 23 42 54 73", " 12 19 34 56 70", " 4 25 F 51 67", " 11 24 32 57 71", " 5 21 38 53 64"};
    vector<string> calls = {"I24", "N34", "B2", "B8", "I20", "B10", "O73", "B1", "I18", "N40", "G49", "N43", "I16", "O72", "B3", "G55", "O65", "I23", "I17", "I29", "I27", "N42", "I22", "N37", "G51", "O70", "B14", "G52", "O68", "I26", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> card = {" B I N G O", " 12 17 41 52 73", " 2 22 33 58 70", " 8 21 F 50 68", " 5 24 43 59 74", " 13 18 31 49 69"};
    vector<string> calls = {"N34", "G52", "B13", "I30", "I19", "G46", "O66", "N36", "O65", "N42", "I28", "N31", "G53", "G48", "G58", "O75", "N38", "I21", "I24", "I29", "I23", "N44", "O72", "B3", "I25", "B7", "B2", "O69", "I16", "N35", "N37", "I18", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> card = {" B I N G O", " 3 23 40 57 71", " 10 17 43 50 66", " 9 20 F 58 64", " 8 16 36 46 68", " 13 30 33 60 61"};
    vector<string> calls = {"B15", "N33", "I22", "B5", "I21", "N39", "B14", "I28", "I26", "B4", "B7", "I29", "O72", "O74", "I19", "B8", "O62", "O71", "G49", "O75", "G51", "B13", "O63", "I27", "B6", "N45", "I24", "N38", "G52", "B11", "G57", "B9", "O65", "O70", "B10", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> card = {" B I N G O", " 3 27 45 59 68", " 15 19 38 58 72", " 13 29 F 56 61", " 11 25 43 55 67", " 14 23 37 51 71"};
    vector<string> calls = {"B1", "G55", "I20", "I21", "B11", "G49", "N37", "G59", "I18", "O69", "G51", "B7", "I24", "O74", "B15", "N41", "I22", "B8", "I28", "O64", "N32", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> card = {" B I N G O", " 10 26 41 58 75", " 1 17 43 51 72", " 9 22 F 50 73", " 5 20 44 53 74", " 14 28 34 48 66"};
    vector<string> calls = {"G56", "I16", "I30", "B3", "B15", "I17", "N42", "O69", "N31", "G58", "O64", "G59", "G60", "N34", "G52", "B7", "I22", "N44", "G48", "G47", "I19", "B10", "N39", "G51", "O62", "O66", "G54", "B6", "B11", "N32", "I28", "G55", "B12", "O73", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> card = {" B I N G O", " 10 26 44 51 70", " 8 27 38 52 65", " 12 25 F 50 61", " 15 28 40 47 72", " 5 19 37 49 66"};
    vector<string> calls = {"I28", "N45", "N36", "G57", "I29", "B8", "O67", "N42", "O68", "B11", "B5", "O64", "O73", "I27", "I17", "B7", "B10", "N38", "I24", "O69", "G60", "I25", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> card = {" B I N G O", " 3 23 44 55 74", " 15 22 39 47 70", " 8 19 F 60 64", " 4 20 32 49 72", " 2 27 34 59 68"};
    vector<string> calls = {"I26", "N33", "G60", "I21", "B8", "N36", "I17", "N31", "N41", "O63", "O72", "I22", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> card = {" B I N G O", " 4 30 44 49 75", " 8 27 35 46 68", " 14 18 F 60 67", " 11 25 36 56 65", " 6 24 31 59 70"};
    vector<string> calls = {"N45", "G48", "G51", "I16", "N36", "I30", "O75", "N44", "N41", "N34", "G52", "N40", "B11", "B5", "I29", "G60", "B2", "B6", "B14", "I27", "G47", "O71", "O73", "I23", "O68", "O63", "O74", "N37", "N38", "G53", "G54", "I28", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> card = {" B I N G O", " 2 16 37 49 61", " 10 21 39 50 75", " 1 30 F 55 67", " 11 27 44 53 69", " 3 28 41 47 74"};
    vector<string> calls = {"G57", "B13", "I20", "I27", "O72", "G46", "O65", "B2", "O70", "B14", "I26", "O73", "O66", "G52", "G50", "B11", "O74", "O63", "I30", "B1", "N43", "G48", "G51", "B6", "G47", "G56", "N34", "B4", "O67", "I28", "N39", "G53", "B5", "G49", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> card = {" B I N G O", " 1 26 33 46 74", " 5 23 42 54 75", " 4 19 F 50 66", " 2 21 45 57 72", " 8 16 36 60 69"};
    vector<string> calls = {"O64", "G57", "I21", "N41", "O66", "B9", "B1", "O67", "O72", "G55", "N32", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> card = {" B I N G O", " 5 27 39 46 70", " 2 23 33 60 64", " 6 26 F 57 72", " 8 18 43 58 65", " 13 29 35 47 62"};
    vector<string> calls = {"B8", "B2", "I24", "O74", "G55", "I27", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> card = {" B I N G O", " 1 24 31 59 72", " 14 29 37 57 74", " 2 17 F 60 70", " 6 18 39 47 65", " 11 16 36 51 62"};
    vector<string> calls = {"I17", "G51", "B4", "B5", "N41", "O66", "I20", "I26", "B12", "B2", "O68", "N37", "N33", "I18", "N45", "G59", "G57", "N40", "O67", "I29", "G60", "I27", "O69", "B15", "B3", "G49", "O75", "I21", "G50", "I24", "G53", "B11", "N32", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> card = {" B I N G O", " 1 20 39 59 66", " 6 21 42 46 62", " 3 28 F 55 67", " 12 25 33 56 68", " 7 26 37 58 70"};
    vector<string> calls = {"N38", "N41", "G56", "I28", "O71", "B7", "G49", "N44", "I23", "I26", "N33", "O69", "B10", "B6", "I22", "G47", "N35", "I27", "I25", "O75", "N31", "B9", "B2", "G59", "B12", "I30", "O72", "I18", "B13", "N32", "G48", "O70", "O66", "O67", "N43", "G46", "O64", "I17", "N42", "N37", "O61", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B7,I25,O66,G46";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> card = {" B I N G O", " 3 25 37 50 67", " 9 24 34 53 65", " 15 29 F 52 71", " 10 23 40 60 66", " 5 28 33 58 75"};
    vector<string> calls = {"N40", "I23", "B5", "I26", "G47", "N36", "G59", "I17", "I28", "B4", "N41", "O68", "O61", "N43", "G56", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> card = {" B I N G O", " 3 24 35 52 74", " 5 26 45 46 62", " 12 18 F 54 70", " 15 20 41 47 64", " 8 19 31 60 71"};
    vector<string> calls = {"N41", "B12", "O66", "B1", "G56", "G47", "O72", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> card = {" B I N G O", " 15 25 42 52 73", " 8 30 43 59 72", " 10 28 F 56 68", " 6 19 38 57 64", " 14 18 39 51 75"};
    vector<string> calls = {"I25", "I30", "I29", "N43", "G51", "B8", "O65", "B10", "B2", "O69", "I16", "B7", "O72", "B15", "O74", "I24", "N42", "B3", "B12", "N33", "G55", "G56", "B6", "B9", "N31", "I21", "I17", "O63", "B13", "I19", "N44", "N41", "G50", "I18", "B4", "G60", "N37", "O62", "O68", "B14", "I23", "N34", "N35", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B8,B10,B15,B6,B14";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> card = {" B I N G O", " 6 23 31 55 63", " 12 16 34 52 73", " 1 22 F 57 72", " 4 27 33 53 71", " 10 21 42 47 69"};
    vector<string> calls = {"I21", "O66", "B13", "O75", "O61", "B3", "I29", "B1", "I19", "I24", "O63", "O72", "G51", "O70", "B5", "G60", "O67", "N44", "B10", "N36", "I17", "G52", "G58", "N37", "N39", "I25", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> card = {" B I N G O", " 7 30 32 46 68", " 11 25 39 50 72", " 3 17 F 60 69", " 5 23 45 55 63", " 9 22 35 48 61"};
    vector<string> calls = {"O67", "I29", "I16", "N44", "G50", "N40", "N32", "I24", "G46", "O63", "B6", "B12", "G52", "G51", "G47", "I30", "I18", "N34", "G48", "B10", "O72", "O66", "B3", "N33", "O64", "O71", "I25", "N38", "B14", "N37", "B1", "N35", "B15", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> card = {" B I N G O", " 3 18 42 56 73", " 12 25 39 59 68", " 1 28 F 50 65", " 2 20 31 47 69", " 5 23 45 53 63"};
    vector<string> calls = {"O62", "N44", "G55", "O68", "I22", "N39", "B10", "N41", "I29", "I17", "I27", "O66", "I19", "G46", "I23", "G54", "I25", "N38", "O65", "N32", "N45", "G59", "N42", "B1", "O64", "N36", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> card = {" B I N G O", " 5 24 32 48 75", " 1 20 45 59 66", " 13 27 F 49 62", " 15 18 35 55 72", " 9 16 37 56 73"};
    vector<string> calls = {"I22", "I21", "G60", "G48", "O71", "G55", "I23", "I16", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> card = {" B I N G O", " 4 27 37 56 73", " 3 20 34 58 67", " 6 23 F 60 72", " 12 19 43 54 68", " 10 30 45 57 62"};
    vector<string> calls = {"N36", "O75", "B11", "G55", "I18", "N32", "G47", "I24", "N37", "I30", "N34", "G57", "G52", "N31", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> card = {" B I N G O", " 9 25 44 60 73", " 14 23 40 54 64", " 11 19 F 52 71", " 13 18 35 59 65", " 7 30 45 56 72"};
    vector<string> calls = {"N44", "G59", "N32", "G48", "B4", "G52", "G58", "B5", "N39", "B11", "O68", "I30", "G51", "B12", "O74", "I24", "N35", "G47", "N45", "N36", "O72", "N41", "I28", "B14", "I20", "I27", "G49", "O75", "G57", "B8", "B13", "I18", "B2", "N40", "N34", "B1", "B15", "I25", "O61", "I22", "O73", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "N44,N35,N45,N40";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> card = {" B I N G O", " 9 21 37 57 64", " 7 20 35 60 73", " 12 28 F 59 75", " 3 22 39 48 74", " 11 18 45 56 70"};
    vector<string> calls = {"N33", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> card = {" B I N G O", " 11 30 44 53 75", " 12 21 40 52 69", " 10 28 F 51 66", " 3 17 32 56 67", " 2 16 38 58 74"};
    vector<string> calls = {"N42", "B9", "B10", "O74", "O75", "G58", "I28", "G48", "N38", "O62", "I30", "I27", "N37", "I29", "B13", "N43", "O64", "B8", "G56", "N41", "I23", "G60", "O67", "N33", "N31", "N39", "N35", "G55", "I19", "G50", "G53", "O72", "I22", "I21", "G46", "O69", "O65", "I16", "G57", "O61", "I24", "O71", "B4", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> card = {" B I N G O", " 3 30 36 49 75", " 5 24 34 54 66", " 2 17 F 59 73", " 4 25 39 53 69", " 10 20 44 55 61"};
    vector<string> calls = {"B12", "G46", "G48", "B9", "O75", "G57", "B14", "G59", "N39", "O70", "N43", "I29", "I21", "I23", "G60", "B4", "B3", "G52", "B8", "N34", "O72", "B7", "N31", "N41", "I20", "O62", "G55", "I28", "I22", "N37", "I18", "N42", "G58", "I24", "N35", "G56", "G53", "N40", "O68", "I27", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> card = {" B I N G O", " 15 26 34 53 67", " 7 30 40 50 64", " 3 25 F 55 65", " 10 18 38 47 72", " 12 20 37 59 68"};
    vector<string> calls = {"N36", "O67", "I19", "B14", "N42", "O66", "O71", "N38", "G60", "I22", "G53", "O63", "G49", "N33", "O75", "I30", "I28", "I24", "N34", "G54", "N41", "B3", "B6", "O74", "B9", "G48", "G50", "B2", "N43", "O69", "O70", "G55", "O64", "I23", "G47", "N32", "B13", "I26", "B10", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> card = {" B I N G O", " 13 17 33 58 67", " 2 21 32 47 74", " 11 22 F 59 72", " 12 28 36 54 73", " 5 23 44 56 64"};
    vector<string> calls = {"N43", "G55", "B8", "G54", "O70", "N33", "B12", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> card = {" B I N G O", " 8 19 34 58 61", " 6 25 35 54 64", " 2 18 F 47 75", " 1 29 32 52 63", " 7 30 36 59 74"};
    vector<string> calls = {"B9", "G60", "G47", "O69", "N42", "B10", "G58", "N39", "B1", "I28", "B2", "G56", "O67", "G52", "N33", "I16", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> card = {" B I N G O", " 1 24 33 54 70", " 12 29 45 55 75", " 7 22 F 51 66", " 15 23 34 59 68", " 2 16 32 49 63"};
    vector<string> calls = {"O68", "I30", "I27", "G48", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> card = {" B I N G O", " 14 20 40 49 74", " 13 22 36 57 69", " 8 19 F 54 61", " 4 23 33 47 62", " 10 27 43 52 66"};
    vector<string> calls = {"B13", "O61", "I22", "I17", "B9", "O73", "B5", "O70", "B1", "B4", "O67", "O64", "N45", "G57", "N44", "O75", "G60", "N38", "N31", "I21", "B15", "I27", "B10", "N33", "O62", "O71", "O63", "N39", "O66", "I18", "B6", "O72", "G51", "G49", "I23", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> card = {" B I N G O", " 10 27 34 60 63", " 6 20 43 55 70", " 2 28 F 59 69", " 5 23 31 58 62", " 15 18 39 48 64"};
    vector<string> calls = {"B3", "O65", "N45", "I26", "I23", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> card = {" B I N G O", " 5 25 39 57 63", " 10 23 37 48 64", " 2 20 F 53 71", " 3 27 43 55 65", " 9 30 41 60 73"};
    vector<string> calls = {"O63", "B9", "N38", "O62", "B3", "N41", "N44", "G60", "B4", "I21", "B15", "O70", "I23", "I27", "I26", "O69", "N34", "B5", "G52", "B2", "G48", "I25", "N35", "B13", "I20", "I29", "N33", "O74", "N45", "G49", "I18", "I24", "O66", "G47", "O68", "N32", "I16", "B10", "O75", "O64", "B1", "O71", "G46", "G53", "O67", "N40", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "O63,B9,I27,G48";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> card = {" B I N G O", " 5 29 41 59 72", " 6 21 44 56 62", " 15 17 F 50 65", " 13 16 37 46 70", " 1 20 40 60 61"};
    vector<string> calls = {"G51", "I25", "B15", "B12", "B11", "G58", "N38", "B9", "I24", "O68", "G47", "O63", "B14", "B6", "I27", "O74", "G55", "N36", "N43", "I23", "G57", "I17", "O72", "I21", "B4", "N32", "O73", "I28", "N44", "G59", "I20", "G60", "O65", "B3", "N34", "I18", "O66", "O69", "O67", "N33", "B2", "O62", "I26", "N40", "G50", "I16", "O70", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B15,I17,O65,G50";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> card = {" B I N G O", " 10 20 38 56 68", " 11 26 37 51 72", " 14 29 F 59 67", " 1 16 44 50 65", " 12 24 35 49 66"};
    vector<string> calls = {"N40", "G52", "B2", "B11", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> card = {" B I N G O", " 2 25 41 49 75", " 10 16 43 57 74", " 9 19 F 53 72", " 12 23 40 47 64", " 13 21 35 52 68"};
    vector<string> calls = {"I27", "B12", "O63", "B15", "G46", "O70", "N38", "B11", "N32", "O62", "B3", "G53", "O66", "I19", "B8", "I18", "N45", "O74", "G59", "I21", "G58", "G50", "I26", "N36", "O64", "B1", "N37", "I30", "N33", "G56", "G57", "G51", "N35", "N40", "I22", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> card = {" B I N G O", " 8 22 42 57 61", " 7 19 38 56 70", " 1 24 F 55 72", " 6 18 37 54 64", " 15 27 39 52 66"};
    vector<string> calls = {"B9", "O64", "I30", "I28", "B3", "O75", "O62", "B4", "O67", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> card = {" B I N G O", " 2 29 45 56 70", " 4 28 36 51 71", " 14 19 F 49 61", " 7 17 32 58 73", " 6 21 38 59 64"};
    vector<string> calls = {"B13", "B9", "G48", "G56", "I24", "N44", "N43", "O61", "I22", "O66", "I17", "O71", "B12", "N38", "B6", "G53", "O72", "I30", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> card = {" B I N G O", " 10 29 41 50 63", " 15 23 43 49 67", " 11 21 F 46 72", " 9 18 40 56 66", " 6 17 34 54 69"};
    vector<string> calls = {"B9", "G53", "O74", "B14", "I24", "B5", "B12", "N33", "G49", "G46", "I17", "G57", "O63", "O75", "B1", "O62", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> card = {" B I N G O", " 14 26 33 52 63", " 12 30 41 60 66", " 10 18 F 53 71", " 2 20 31 54 74", " 4 22 45 58 72"};
    vector<string> calls = {"O73", "N31", "B3", "B15", "G47", "N39", "O70", "O71", "O67", "N32", "N38", "I22", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> card = {" B I N G O", " 7 16 39 53 62", " 13 25 42 57 66", " 1 18 F 47 69", " 3 26 32 46 74", " 4 28 33 60 67"};
    vector<string> calls = {"G60", "B7", "N32", "G47", "G57", "O63", "B2", "O69", "I19", "I17", "I16", "I25", "B1", "G48", "N42", "I21", "N36", "I28", "I27", "G49", "O71", "G59", "O61", "I20", "I22", "B4", "N33", "G54", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> card = {" B I N G O", " 8 17 31 58 66", " 7 25 43 48 74", " 11 23 F 59 67", " 9 26 44 54 61", " 10 29 33 53 64"};
    vector<string> calls = {"G53", "O66", "B15", "I23", "G46", "O68", "I29", "N35", "B5", "B7", "O75", "I28", "O73", "N40", "N41", "O71", "N43", "N34", "I26", "G49", "B9", "G57", "B2", "N44", "N32", "G60", "B10", "O72", "I17", "G50", "B14", "N42", "N33", "I24", "O64", "I27", "G58", "G55", "B11", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "G53,I29,B10,N33,O64";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> card = {" B I N G O", " 6 21 34 46 73", " 3 27 39 60 64", " 11 25 F 50 75", " 12 23 43 54 67", " 9 22 37 47 66"};
    vector<string> calls = {"G59", "I28", "G51", "O65", "I24", "O72", "G49", "I30", "B4", "O67", "B6", "G52", "N37", "G56", "O62", "N38", "O70", "G48", "N35", "I29", "N31", "G53", "N34", "G57", "N39", "I16", "O75", "I19", "B7", "I18", "B14", "I21", "O74", "B5", "G46", "N44", "G60", "I26", "B9", "O63", "G47", "N32", "B3", "B1", "N41", "G50", "O61", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> card = {" B I N G O", " 12 22 40 53 66", " 8 18 44 52 65", " 4 24 F 46 69", " 1 26 33 54 68", " 6 21 34 49 63"};
    vector<string> calls = {"O62", "B15", "G56", "I17", "N32", "N40", "B9", "G57", "O63", "G53", "G46", "I24", "B8", "G51", "O67", "I25", "I20", "G48", "N44", "B4", "B6", "N36", "O71", "B5", "O72", "O74", "B12", "O68", "G58", "O73", "I23", "G50", "B1", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B8,B4,B6,B12,B1";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> card = {" B I N G O", " 3 19 35 47 74", " 14 30 36 54 72", " 13 25 F 58 62", " 6 20 40 60 61", " 10 28 44 56 64"};
    vector<string> calls = {"G57", "G54", "N37", "O74", "B11", "B5", "I20", "I26", "I19", "N31", "I22", "B9", "I24", "N42", "B13", "N41", "B7", "G56", "I23", "N40", "G49", "G51", "I30", "O71", "G60", "B10", "N45", "G46", "O61", "I16", "O65", "G59", "O75", "O69", "B15", "O73", "N39", "G55", "G58", "O64", "N44", "B4", "N33", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "G54,O74,I20,B10";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B12", "B9", "I23", "N34", "G52", "O72", "I22", "N33", "G55", "O66", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B9,I23,N34,G52,O72";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"O63", "G48", "I23", "B9", "B1", "B4", "B3", "B7", "B12", "G49", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "O63,G48,I23,B12";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B12", "B3", "I16", "N40", "B2", "O70", "B1", "B9", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B1", "I24", "G59", "O71", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B1,I24,G59,O71";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"O66", "B3", "B4", "B1", "B9", "O63", "G48", "I23", "G55", "N33", "I22", "B12", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "O66,G55,N33,I22,B12";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"O63", "G48", "I23", "B9", "B1", "B4", "B3", "B7", "G49", "I24", "I16", "I18", "I22", "B12", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "I23,I24,I16,I18,I22";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 15 30 F 60 62", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B15", "I30", "G60", "O62", "B2", "O70", "B1", "B9", "O71", "B4", "B7", "B11", "O68", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B15,I30,G60,O62";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"G55", "B1", "I24", "O71", "G52", "G48", "G49", "G59", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "G55,G52,G48,G49,G59";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B3", "I16", "G52", "O66", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B3,I16,G52,O66";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B9", "O63", "G48", "I23", "B1", "B4", "B3", "B7", "B12", "G49", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B9,B1,B4,B3,B12";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"O63", "I16", "G52", "O66", "G49", "N41", "I18", "B12", "B9", "B1", "B4", "B3", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "O63,G49,N41,I18,B3";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"I22", "G48", "I24", "I16", "I18", "B12", "O63", "I23", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "I22,I24,I16,I18,I23";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B1", "O63", "G48", "I23", "B9", "B4", "B3", "B7", "B12", "G49", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B1,B9,B4,B3,B12";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"G55", "G52", "G59", "G48", "G49", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "G55,G52,G59,G48,G49";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"O63", "G48", "B9", "B1", "B4", "B3", "B7", "B12", "G49", "I23", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B9,B1,B4,B3,B12";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 11 23 34 52 72", " 10 24 F 59 71", " 9 16 40 48 61", " 1 18 41 49 63"};
    vector<string> calls = {"N34", "G52", "N33", "G55", "B12", "I16", "B1", "O72", "O71", "O63", "I23", "O66", "B11", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "G52,I16,B1,O66";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> card = {" B I N G O", " 1 16 31 46 61", " 2 17 32 47 62", " 3 18 F 48 63", " 4 19 34 49 64", " 5 20 35 50 65"};
    vector<string> calls = {"B1", "I17", "G49", "O65", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B1,I17,G49,O65";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B12", "I23", "G48", "O63", "B2", "O70", "B1", "B9", "O71", "B4", "B7", "B11", "O68", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B12,I23,G48,O63";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"G48", "G55", "N33", "O72", "N34", "I23", "B9", "O71", "G59", "O61", "O66", "I16", "O63", "G49", "B3", "G52", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "O72,O71,O61,O66,O63";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"O66", "G52", "B12", "B4", "I16", "N40", "B2", "O70", "B1", "B9", "O71", "B3", "B7", "B11", "O68", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "O66,G52,I16,B3";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 11 23 34 52 72", " 10 24 F 59 71", " 9 16 40 48 61", " 1 18 41 49 63"};
    vector<string> calls = {"N34", "G52", "N33", "G55", "I22", "B12", "I16", "B1", "O72", "O71", "O61", "O63", "I23", "O66", "B11", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "G52,I16,B1,O66";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B6", "I19", "N42", "G51", "O68", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> card = {" B I N G O", " 1 16 31 46 61", " 2 17 32 47 62", " 3 18 F 48 63", " 4 19 34 49 64", " 5 20 35 50 65"};
    vector<string> calls = {"B5", "I20", "N35", "G50", "O65", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B5,I20,N35,G50,O65";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"O63", "G48", "I23", "B9", "B1", "B4", "B3", "B7", "B12", "G49", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "O63,G48,I23,B12";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B12", "B3", "I16", "N40", "B2", "O70", "B1", "B9", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B1", "I24", "G59", "O71", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B1,I24,G59,O71";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"O66", "B3", "B4", "B1", "B9", "O63", "G48", "I23", "G55", "N33", "I22", "B12", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "O66,G55,N33,I22,B12";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"O63", "G48", "I23", "B9", "B1", "B4", "B3", "B7", "G49", "I24", "I16", "I18", "I22", "B12", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "I23,I24,I16,I18,I22";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 15 30 F 60 62", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B15", "I30", "G60", "O62", "B2", "O70", "B1", "B9", "O71", "B4", "B7", "B11", "O68", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B15,I30,G60,O62";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"G55", "B1", "I24", "O71", "G52", "G48", "G49", "G59", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "G55,G52,G48,G49,G59";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B3", "I16", "G52", "O66", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B3,I16,G52,O66";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B9", "O63", "G48", "I23", "B1", "B4", "B3", "B7", "B12", "G49", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B9,B1,B4,B3,B12";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"O63", "I16", "G52", "O66", "G49", "N41", "I18", "B12", "B9", "B1", "B4", "B3", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "O63,G49,N41,I18,B3";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"I22", "G48", "I24", "I16", "I18", "B12", "O63", "I23", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "I22,I24,I16,I18,I23";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B1", "O63", "G48", "I23", "B9", "B4", "B3", "B7", "B12", "G49", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B1,B9,B4,B3,B12";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"G55", "G52", "G59", "G48", "G49", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "G55,G52,G59,G48,G49";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"O63", "G48", "B9", "B1", "B4", "B3", "B7", "B12", "G49", "I23", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B9,B1,B4,B3,B12";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 11 23 34 52 72", " 10 24 F 59 71", " 9 16 40 48 61", " 1 18 41 49 63"};
    vector<string> calls = {"N34", "G52", "N33", "G55", "B12", "I16", "B1", "O72", "O71", "O63", "I23", "O66", "B11", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "G52,I16,B1,O66";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> card = {" B I N G O", " 1 16 31 46 61", " 2 17 32 47 62", " 3 18 F 48 63", " 4 19 34 49 64", " 5 20 35 50 65"};
    vector<string> calls = {"B1", "I17", "G49", "O65", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B1,I17,G49,O65";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B12", "I23", "G48", "O63", "B2", "O70", "B1", "B9", "O71", "B4", "B7", "B11", "O68", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B12,I23,G48,O63";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"G48", "G55", "N33", "O72", "N34", "I23", "B9", "O71", "G59", "O61", "O66", "I16", "O63", "G49", "B3", "G52", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "O72,O71,O61,O66,O63";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"O66", "G52", "B12", "B4", "I16", "N40", "B2", "O70", "B1", "B9", "O71", "B3", "B7", "B11", "O68", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "O66,G52,I16,B3";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 11 23 34 52 72", " 10 24 F 59 71", " 9 16 40 48 61", " 1 18 41 49 63"};
    vector<string> calls = {"N34", "G52", "N33", "G55", "I22", "B12", "I16", "B1", "O72", "O71", "O61", "O63", "I23", "O66", "B11", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "G52,I16,B1,O66";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> card = {" B I N G O", " 12 22 33 55 66", " 9 23 34 52 72", " 1 24 F 59 71", " 4 16 40 48 61", " 3 18 41 49 63"};
    vector<string> calls = {"B6", "I19", "N42", "G51", "O68", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "YOU LOSE";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> card = {" B I N G O", " 1 16 31 46 61", " 2 17 32 47 62", " 3 18 F 48 63", " 4 19 34 49 64", " 5 20 35 50 65"};
    vector<string> calls = {"B5", "I20", "N35", "G50", "O65", "BINGO"};
    Bingo* pObj = new Bingo();
    clock_t start = clock();
    string result = pObj->winner(card, calls);
    clock_t end = clock();
    delete pObj;
    string expected = "B5,I20,N35,G50,O65";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7462740&rd=9814&pm=4499
********************************************************************************
#include <string>
#include <vector>
#include <cmath>
#include <cctype>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <utility>
#include <numeric>
 
using namespace std;
 
int sx[] = {0, 1, 2, 3, 4, 0, 0, 0, 0, 0, 0, 4};
int sy[] = {0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 0, 0};
int dx[] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, -1};
int dy[] = {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1};
 
class Bingo {
  public:
  string winner(vector <string> card, vector <string> calls) {
 
    calls.pop_back();
    vector <int> ans;
    ans.push_back(100);
    int best = 100;
    for (int i = 0; i < 12; i++)
      {
        vector <int> tmp;
        int ctr = 0;
        for (int k = 0; k < 5; k++)
    {
      int x = sx[i] + k*dx[i], y = sy[i] + k*dy[i];
      string key;
      key += card[0][3*y+2];
      if (card[x+1][3*y+1] != ' ')
        key += card[x+1][3*y+1];
      key += card[x+1][3*y+2];
      for (int j = 0; j < calls.size(); j++)
        if (calls[j] == key)
          {
      tmp.push_back(j);
      ctr++;
          }
      if (x == 2 && y == 2) ctr++;
    }
        if (ctr == 5)
    {
      sort(tmp.begin(), tmp.end());
      int last = tmp.back();
      if (last < best || last == best && tmp < ans)
        {
          best = last;
          ans = tmp;
        }
    }
      }
    if (best == 100)
      return "YOU LOSE";
    string ret;
    for (int i = 0; i < ans.size(); i++)
      {
        ret += calls[ans[i]];
        if (i+1 != ans.size())
    ret += ",";
      }
    return ret;
    
  }
};
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/