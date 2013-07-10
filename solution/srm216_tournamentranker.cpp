/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2985
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

class TournamentRanker {
public:
    vector<string> rankTeams(vector<string> names, vector<string> lostTo);
};

vector<string> TournamentRanker::rankTeams(vector<string> names, vector<string> lostTo) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> names = {"RODDICK", "SCHUETTLER", "FERREIRA", "AGASSI"};
    vector<string> lostTo = {"SCHUETTLER", "AGASSI", "AGASSI", ""};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AGASSI", "SCHUETTLER", "FERREIRA", "RODDICK"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> names = {"DUKE", "SETON HALL", "ILLINOIS", "CINCINNATI", "NORTH CAROLINA", "TEXAS", "XAVIER", "MISSISSIPPI STATE"};
    vector<string> lostTo = {"", "DUKE", "DUKE", "ILLINOIS", "TEXAS", "XAVIER", "DUKE", "XAVIER"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DUKE", "XAVIER", "ILLINOIS", "TEXAS", "SETON HALL", "MISSISSIPPI STATE", "CINCINNATI", "NORTH CAROLINA"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> names = {"JAVA", "VISUAL BASIC"};
    vector<string> lostTo = {"VISUAL BASIC", ""};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VISUAL BASIC", "JAVA"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> names = {"A", "B"};
    vector<string> lostTo = {"B", ""};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "A"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA"};
    vector<string> lostTo = {"L", "T", "L", "FA", "A", "AA", "M", "M", "G", "L", "H", "S", "P", "H", "J", "S", "BA", "P", "", "P", "N", "P", "CA", "S", "M", "R", "S", "CA", "S", "Z", "R", "J"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "P", "L", "M", "CA", "R", "J", "H", "AA", "T", "A", "G", "BA", "Z", "FA", "N", "X", "V", "C", "Y", "W", "EA", "O", "K", "F", "B", "E", "I", "Q", "DA", "D", "U"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P"};
    vector<string> lostTo = {"N", "D", "B", "", "B", "D", "A", "M", "N", "E", "A", "D", "N", "D", "K", "L"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"D", "N", "B", "A", "L", "M", "E", "K", "F", "I", "C", "G", "P", "H", "J", "O"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> names = {"A", "B"};
    vector<string> lostTo = {"", "A"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "B"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H"};
    vector<string> lostTo = {"H", "A", "F", "H", "B", "H", "A", ""};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"H", "A", "F", "B", "D", "G", "C", "E"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H"};
    vector<string> lostTo = {"H", "F", "E", "", "D", "D", "D", "E"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"D", "E", "F", "H", "G", "C", "B", "A"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P"};
    vector<string> lostTo = {"M", "L", "J", "H", "L", "L", "F", "F", "E", "", "M", "J", "J", "J", "C", "A"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"J", "L", "M", "F", "C", "E", "A", "H", "N", "B", "K", "G", "O", "I", "P", "D"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> names = {"A", "B", "C", "D"};
    vector<string> lostTo = {"D", "C", "D", ""};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"D", "C", "A", "B"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> names = {"A", "B", "C", "D"};
    vector<string> lostTo = {"D", "", "B", "B"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "D", "C", "A"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P"};
    vector<string> lostTo = {"K", "", "J", "P", "D", "M", "H", "B", "N", "B", "J", "B", "N", "B", "P", "J"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "J", "N", "P", "H", "K", "M", "D", "L", "C", "I", "O", "G", "A", "F", "E"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA"};
    vector<string> lostTo = {"AA", "X", "", "R", "J", "V", "Y", "C", "N", "C", "N", "S", "N", "C", "V", "O", "FA", "C", "C", "S", "I", "I", "DA", "S", "I", "J", "DA", "T", "Z", "N", "K", "X"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C", "N", "S", "I", "J", "DA", "X", "V", "R", "K", "T", "Y", "Z", "AA", "FA", "O", "H", "M", "L", "U", "E", "W", "B", "F", "D", "EA", "BA", "G", "CA", "A", "Q", "P"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H"};
    vector<string> lostTo = {"G", "A", "E", "E", "", "G", "E", "D"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"E", "G", "D", "A", "C", "F", "H", "B"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P"};
    vector<string> lostTo = {"P", "F", "B", "N", "D", "", "H", "P", "B", "N", "F", "F", "C", "F", "L", "N"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"F", "N", "B", "P", "L", "D", "C", "H", "K", "J", "I", "A", "O", "E", "M", "G"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H"};
    vector<string> lostTo = {"", "D", "A", "E", "A", "A", "E", "F"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "E", "F", "D", "C", "G", "H", "B"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P"};
    vector<string> lostTo = {"K", "M", "M", "B", "D", "G", "M", "N", "B", "D", "M", "E", "", "B", "F", "G"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"M", "B", "G", "D", "K", "N", "F", "E", "C", "I", "P", "J", "A", "H", "O", "L"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA"};
    vector<string> lostTo = {"Q", "F", "D", "A", "CA", "U", "V", "EA", "U", "Y", "CA", "M", "Q", "E", "T", "R", "U", "EA", "W", "Y", "Y", "T", "Y", "O", "", "T", "Q", "A", "U", "FA", "Y", "V"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Y", "U", "T", "Q", "EA", "CA", "V", "A", "W", "F", "O", "M", "R", "E", "FA", "D", "J", "I", "Z", "AA", "H", "K", "G", "BA", "S", "B", "X", "L", "P", "N", "DA", "C"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H"};
    vector<string> lostTo = {"", "G", "F", "E", "A", "A", "E", "A"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "E", "F", "G", "H", "D", "C", "B"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H"};
    vector<string> lostTo = {"D", "", "B", "B", "G", "H", "H", "B"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "H", "D", "G", "C", "F", "A", "E"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA"};
    vector<string> lostTo = {"G", "CA", "E", "FA", "BA", "H", "B", "BA", "P", "G", "AA", "BA", "A", "V", "T", "CA", "B", "B", "K", "H", "CA", "BA", "R", "CA", "U", "I", "H", "CA", "", "P", "AA", "E"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CA", "BA", "B", "H", "P", "E", "G", "AA", "U", "V", "R", "T", "I", "FA", "A", "K", "X", "L", "Q", "F", "DA", "C", "J", "EA", "Y", "N", "W", "O", "Z", "D", "M", "S"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H"};
    vector<string> lostTo = {"C", "D", "", "C", "D", "E", "C", "A"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C", "D", "A", "E", "G", "B", "H", "F"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA"};
    vector<string> lostTo = {"H", "CA", "F", "O", "N", "O", "H", "", "B", "G", "F", "X", "G", "G", "H", "O", "C", "J", "H", "CA", "L", "E", "X", "N", "N", "DA", "DA", "AA", "H", "G", "D", "S"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"H", "G", "O", "N", "CA", "DA", "F", "X", "S", "J", "D", "E", "B", "AA", "C", "L", "A", "M", "P", "Y", "T", "Z", "K", "W", "FA", "R", "EA", "V", "I", "BA", "Q", "U"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P"};
    vector<string> lostTo = {"B", "E", "M", "I", "", "L", "K", "B", "M", "A", "M", "E", "E", "E", "D", "I"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"E", "M", "B", "I", "L", "K", "A", "D", "N", "C", "H", "P", "F", "G", "J", "O"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P"};
    vector<string> lostTo = {"D", "A", "B", "", "J", "D", "M", "L", "O", "D", "D", "A", "B", "A", "J", "F"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"D", "A", "J", "B", "F", "L", "O", "M", "K", "N", "E", "C", "P", "H", "I", "G"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA"};
    vector<string> lostTo = {"D", "A", "P", "", "AA", "D", "V", "I", "D", "N", "T", "Z", "S", "D", "AA", "A", "AA", "DA", "B", "N", "N", "D", "Q", "E", "G", "J", "N", "V", "B", "Q", "A", "J"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"D", "N", "A", "AA", "V", "J", "B", "Q", "I", "T", "P", "E", "G", "Z", "S", "DA", "F", "U", "EA", "O", "BA", "FA", "CA", "W", "H", "K", "C", "X", "Y", "L", "M", "R"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA"};
    vector<string> lostTo = {"C", "I", "O", "V", "J", "P", "Q", "Q", "V", "S", "CA", "J", "CA", "M", "P", "X", "X", "X", "", "G", "P", "S", "U", "S", "AA", "S", "X", "Z", "J", "S", "E", "O"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "X", "J", "P", "V", "Q", "CA", "O", "Z", "AA", "E", "U", "I", "G", "M", "C", "DA", "R", "L", "F", "D", "H", "K", "FA", "BA", "Y", "EA", "W", "B", "T", "N", "A"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H"};
    vector<string> lostTo = {"H", "F", "D", "F", "F", "", "B", "D"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"F", "D", "B", "H", "E", "C", "G", "A"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA"};
    vector<string> lostTo = {"R", "F", "X", "A", "CA", "O", "T", "R", "Q", "D", "A", "W", "R", "M", "M", "D", "A", "", "R", "Z", "H", "J", "M", "N", "O", "O", "M", "N", "R", "H", "DA", "Z"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"R", "M", "A", "O", "H", "N", "D", "Z", "CA", "W", "Q", "F", "DA", "X", "J", "T", "S", "AA", "K", "Y", "U", "BA", "P", "FA", "E", "L", "I", "B", "EA", "C", "V", "G"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA"};
    vector<string> lostTo = {"R", "P", "BA", "B", "FA", "I", "O", "T", "R", "I", "BA", "T", "L", "C", "P", "T", "V", "L", "FA", "", "EA", "R", "L", "P", "O", "F", "M", "L", "G", "S", "T", "T"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"T", "L", "P", "R", "FA", "BA", "O", "I", "EA", "M", "B", "V", "S", "C", "G", "F", "H", "W", "X", "A", "E", "K", "Y", "J", "U", "AA", "D", "Q", "DA", "N", "CA", "Z"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA"};
    vector<string> lostTo = {"P", "X", "S", "V", "J", "X", "J", "L", "Y", "C", "S", "P", "B", "X", "G", "B", "C", "S", "X", "K", "FA", "C", "S", "", "B", "K", "F", "T", "F", "CA", "R", "X"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X", "S", "B", "C", "F", "K", "P", "J", "FA", "R", "Y", "V", "CA", "T", "L", "G", "N", "W", "M", "Q", "AA", "Z", "A", "E", "U", "EA", "I", "D", "DA", "BA", "H", "O"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P"};
    vector<string> lostTo = {"L", "N", "N", "M", "J", "E", "C", "O", "L", "", "A", "M", "J", "J", "M", "J"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"J", "M", "N", "L", "E", "O", "C", "A", "P", "D", "B", "I", "F", "H", "G", "K"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA"};
    vector<string> lostTo = {"N", "DA", "DA", "AA", "Y", "P", "D", "I", "Y", "C", "D", "AA", "J", "AA", "P", "", "FA", "U", "P", "B", "CA", "F", "K", "CA", "CA", "C", "P", "DA", "AA", "P", "S", "S"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"P", "AA", "DA", "CA", "S", "D", "C", "Y", "F", "N", "B", "U", "FA", "K", "J", "I", "O", "L", "BA", "X", "EA", "G", "Z", "E", "V", "A", "T", "R", "Q", "W", "M", "H"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H"};
    vector<string> lostTo = {"F", "H", "F", "F", "C", "", "D", "C"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"F", "C", "D", "H", "A", "E", "G", "B"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P"};
    vector<string> lostTo = {"P", "M", "K", "B", "D", "M", "I", "K", "K", "F", "", "B", "K", "M", "H", "H"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"K", "M", "H", "B", "I", "F", "P", "D", "C", "N", "O", "L", "G", "J", "A", "E"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P"};
    vector<string> lostTo = {"I", "H", "I", "C", "O", "", "L", "I", "F", "P", "B", "O", "H", "F", "F", "F"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"F", "I", "O", "H", "P", "C", "L", "B", "N", "A", "E", "M", "J", "D", "G", "K"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P"};
    vector<string> lostTo = {"L", "N", "K", "L", "A", "J", "H", "L", "A", "K", "", "K", "P", "P", "E", "K"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"K", "L", "P", "A", "J", "H", "N", "E", "C", "D", "M", "I", "F", "G", "B", "O"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P"};
    vector<string> lostTo = {"", "A", "O", "N", "N", "G", "K", "E", "A", "B", "A", "M", "A", "M", "M", "K"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "M", "K", "N", "B", "O", "G", "E", "I", "L", "P", "D", "J", "C", "F", "H"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H"};
    vector<string> lostTo = {"G", "A", "F", "G", "H", "G", "", "A"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"G", "A", "F", "H", "D", "B", "C", "E"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA"};
    vector<string> lostTo = {"B", "W", "K", "T", "B", "O", "W", "W", "W", "AA", "I", "O", "A", "Y", "Y", "L", "K", "G", "C", "Z", "FA", "FA", "", "BA", "W", "K", "I", "Y", "I", "U", "Z", "I"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"W", "I", "Y", "K", "B", "FA", "O", "Z", "G", "AA", "BA", "C", "A", "U", "L", "T", "H", "CA", "N", "Q", "E", "V", "F", "EA", "R", "J", "X", "S", "M", "DA", "P", "D"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA"};
    vector<string> lostTo = {"Y", "BA", "D", "Y", "A", "Y", "L", "B", "BA", "AA", "B", "", "Z", "J", "BA", "Z", "P", "H", "J", "AA", "L", "D", "N", "G", "BA", "L", "L", "L", "AA", "I", "T", "C"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"L", "BA", "AA", "Y", "Z", "B", "J", "D", "G", "I", "T", "A", "P", "H", "N", "C", "U", "O", "CA", "F", "M", "K", "S", "V", "X", "DA", "EA", "E", "Q", "R", "W", "FA"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA"};
    vector<string> lostTo = {"B", "", "EA", "C", "B", "Z", "R", "FA", "T", "EA", "E", "R", "S", "U", "Z", "M", "E", "Z", "Z", "X", "AA", "K", "AA", "E", "G", "B", "B", "F", "S", "X", "S", "B"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "Z", "E", "S", "AA", "R", "X", "EA", "FA", "F", "K", "M", "U", "G", "T", "C", "A", "O", "Q", "CA", "W", "L", "DA", "J", "H", "BA", "V", "P", "N", "Y", "I", "D"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H"};
    vector<string> lostTo = {"B", "", "G", "B", "A", "B", "F", "F"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "F", "A", "G", "D", "H", "E", "C"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA"};
    vector<string> lostTo = {"T", "N", "FA", "L", "BA", "D", "S", "Z", "U", "Z", "L", "", "N", "U", "J", "C", "E", "U", "T", "D", "L", "BA", "F", "B", "K", "L", "D", "FA", "I", "FA", "L", "D"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"L", "D", "U", "FA", "Z", "T", "N", "BA", "K", "F", "I", "C", "J", "S", "B", "E", "EA", "AA", "R", "DA", "H", "A", "M", "V", "Y", "W", "CA", "P", "O", "G", "X", "Q"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H"};
    vector<string> lostTo = {"", "E", "D", "A", "A", "E", "F", "A"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "E", "D", "F", "H", "B", "C", "G"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AA", "BA", "CA", "DA", "EA", "FA"};
    vector<string> lostTo = {"O", "M", "U", "CA", "B", "R", "R", "", "CA", "BA", "N", "X", "CA", "EA", "H", "M", "D", "H", "FA", "P", "BA", "R", "EA", "P", "H", "V", "M", "CA", "H", "F", "H", "V"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"H", "CA", "R", "M", "EA", "BA", "V", "P", "O", "D", "F", "B", "N", "U", "FA", "X", "Y", "I", "G", "AA", "W", "J", "Z", "T", "A", "Q", "DA", "E", "K", "C", "S", "L"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> names = {"AZEDURV CYZI VOVKTTPAAEYBGYFBBDXGMRZGUYBICWZHPJLI", "BAIQQKU V WMODOQYQHNMQXMEUNVTWXRKHBRAWZUZJXBHETKPR", "BWGDBUVR VWCZVKBATQX IYWARAPACJWBXFBJMGXBLHQTYWNMQ", "CZRVZRORQCOZMMOWHZQLIGTW NPKXIAIOVFJSMOY SRW RWPSY", "DB NEBTQRIJDFYYEROEVTTXQWOCQUCQJQTKQWTABPNNBV ARQV", "DGPY KBQVSBSYPER IBYPXZYSYMNEPRAUFCDQJSUHSBR GFQXC", "EFEIXTCLQYKVTMNOZTLMUWMWSWQHHGFCRB SEEBZISPVMIXOVI", "EV ASCADISAFGVJZZKMZPEHILGEBVOVNFYBUMROM SIIMTETVC", "FAILQJHRKILZXOWWJTQKGVPELIH BZQXANMOFUB JWPJAKKWUJ", "FHKEFQXEWNDMQEUODNTUZISQOQLSFIPIGMQBXXGMYZAJUBNQYI", "H OYEBEK GYRQZIUAXLDIJEXNCOELMLLOGIYDIHCEXNBVIRYPT", "HDQYGYRUQVQJFGWBMOMSIDETI OGIWESUGBXQDJVYHUJWBEFTO", "HIPEZLPKJSCQF XAMZQNSJZHE KWJWV JHZIAKAZMZLRGKOYG", "ITLAMJAZMXQXFIGVBNAJTRNCIIHTUGESLKLUHYZJHXDBGXJPGC", "JZAWCHGAGIKZY PKMNOEN TJHBS CWKJ YXYQGJMLEMBIVPCI", "KAN QNWXMBESYCKARZ IMYVGLQWPEJVQUWPFYKLXPNHLGSUONS", "KFFUTKF IPKFMDHEPTOAPIJZKFFZBJILDVMVWUGJMERUQHHOXT", "KSWFZKIKKENXSUNHBVPWRKATOJSFLRCSATFMNBDTUNYUTQKUNH", "LCHEC GL NZCDVPUCLDSAGQMSOLZXOBGMSGXNVARBVWOCDPJOZ", "LPPAZCQYETAHMEOR QCJIAG APRNMZQZBNRBMAHSFGQOWWPDZV", "PZGIDEOVF NECG EUINXOZSOCEQHOA RTSUYMPPLXNF RVORBX", "QZWMTDLHZZGKELWGLTKI A ZUHGPAFYFTUKXVG SLHAALWGJB", "RANDIOWNESJBDBQOEVOCBSFX YACUFBYVNJIRXHROOJIKOEKEL", "RJGJTFFXZCBBS PJGTTZYVSBJZOVLZQRERHTTCPLGPKPA PQBC", "ROQCHKZYTCGX GLEBRUNTQTSTWSFNDZWMJENPTCJVOXSADLKNP", "SLYKSWKBKULIDIXDLTGHSNMXSNLNSNPEEXRGTPKOIXVSUMWA U", "SXDDTBMQKLMHBBZIFUXMEEPR TDWCCRTHXEWWFXUQMAAQAKRML", "TOVJGRDHERWQWUIVKZELSCDNQDH DWEJMZOCIZUTYYCANZSKOG", "UNFDVZUENYWQ CPMJWZMZALGEOLLTSGDTAWUJVNI TVHSBCOR ", "WPNWFWWPZH QPERCEOZSPAHVFMG YMJUABD LNSFTQBBMOZAZG", "WQXBVCOMZWZWFXDPAUQTZVPJQRLDESWYIFXBARAAPHYUMOLYZY", "YIG TOTBIZVZZFVQBYBWTTSUTDOZFG RZMOOTXNHEOSMGWULIG"};
    vector<string> lostTo = {"SXDDTBMQKLMHBBZIFUXMEEPR TDWCCRTHXEWWFXUQMAAQAKRML", "ROQCHKZYTCGX GLEBRUNTQTSTWSFNDZWMJENPTCJVOXSADLKNP", "RJGJTFFXZCBBS PJGTTZYVSBJZOVLZQRERHTTCPLGPKPA PQBC", "FHKEFQXEWNDMQEUODNTUZISQOQLSFIPIGMQBXXGMYZAJUBNQYI", "", "LCHEC GL NZCDVPUCLDSAGQMSOLZXOBGMSGXNVARBVWOCDPJOZ", "TOVJGRDHERWQWUIVKZELSCDNQDH DWEJMZOCIZUTYYCANZSKOG", "KAN QNWXMBESYCKARZ IMYVGLQWPEJVQUWPFYKLXPNHLGSUONS", "TOVJGRDHERWQWUIVKZELSCDNQDH DWEJMZOCIZUTYYCANZSKOG", "ROQCHKZYTCGX GLEBRUNTQTSTWSFNDZWMJENPTCJVOXSADLKNP", "WPNWFWWPZH QPERCEOZSPAHVFMG YMJUABD LNSFTQBBMOZAZG", "DGPY KBQVSBSYPER IBYPXZYSYMNEPRAUFCDQJSUHSBR GFQXC", "JZAWCHGAGIKZY PKMNOEN TJHBS CWKJ YXYQGJMLEMBIVPCI", "H OYEBEK GYRQZIUAXLDIJEXNCOELMLLOGIYDIHCEXNBVIRYPT", "H OYEBEK GYRQZIUAXLDIJEXNCOELMLLOGIYDIHCEXNBVIRYPT", "WPNWFWWPZH QPERCEOZSPAHVFMG YMJUABD LNSFTQBBMOZAZG", "LCHEC GL NZCDVPUCLDSAGQMSOLZXOBGMSGXNVARBVWOCDPJOZ", "WPNWFWWPZH QPERCEOZSPAHVFMG YMJUABD LNSFTQBBMOZAZG", "DB NEBTQRIJDFYYEROEVTTXQWOCQUCQJQTKQWTABPNNBV ARQV", "DB NEBTQRIJDFYYEROEVTTXQWOCQUCQJQTKQWTABPNNBV ARQV", "WPNWFWWPZH QPERCEOZSPAHVFMG YMJUABD LNSFTQBBMOZAZG", "DB NEBTQRIJDFYYEROEVTTXQWOCQUCQJQTKQWTABPNNBV ARQV", "FAILQJHRKILZXOWWJTQKGVPELIH BZQXANMOFUB JWPJAKKWUJ", "KAN QNWXMBESYCKARZ IMYVGLQWPEJVQUWPFYKLXPNHLGSUONS", "TOVJGRDHERWQWUIVKZELSCDNQDH DWEJMZOCIZUTYYCANZSKOG", "LPPAZCQYETAHMEOR QCJIAG APRNMZQZBNRBMAHSFGQOWWPDZV", "YIG TOTBIZVZZFVQBYBWTTSUTDOZFG RZMOOTXNHEOSMGWULIG", "DB NEBTQRIJDFYYEROEVTTXQWOCQUCQJQTKQWTABPNNBV ARQV", "PZGIDEOVF NECG EUINXOZSOCEQHOA RTSUYMPPLXNF RVORBX", "DB NEBTQRIJDFYYEROEVTTXQWOCQUCQJQTKQWTABPNNBV ARQV", "YIG TOTBIZVZZFVQBYBWTTSUTDOZFG RZMOOTXNHEOSMGWULIG", "H OYEBEK GYRQZIUAXLDIJEXNCOELMLLOGIYDIHCEXNBVIRYPT"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DB NEBTQRIJDFYYEROEVTTXQWOCQUCQJQTKQWTABPNNBV ARQV", "WPNWFWWPZH QPERCEOZSPAHVFMG YMJUABD LNSFTQBBMOZAZG", "TOVJGRDHERWQWUIVKZELSCDNQDH DWEJMZOCIZUTYYCANZSKOG", "H OYEBEK GYRQZIUAXLDIJEXNCOELMLLOGIYDIHCEXNBVIRYPT", "LCHEC GL NZCDVPUCLDSAGQMSOLZXOBGMSGXNVARBVWOCDPJOZ", "KAN QNWXMBESYCKARZ IMYVGLQWPEJVQUWPFYKLXPNHLGSUONS", "ROQCHKZYTCGX GLEBRUNTQTSTWSFNDZWMJENPTCJVOXSADLKNP", "YIG TOTBIZVZZFVQBYBWTTSUTDOZFG RZMOOTXNHEOSMGWULIG", "LPPAZCQYETAHMEOR QCJIAG APRNMZQZBNRBMAHSFGQOWWPDZV", "PZGIDEOVF NECG EUINXOZSOCEQHOA RTSUYMPPLXNF RVORBX", "FAILQJHRKILZXOWWJTQKGVPELIH BZQXANMOFUB JWPJAKKWUJ", "JZAWCHGAGIKZY PKMNOEN TJHBS CWKJ YXYQGJMLEMBIVPCI", "DGPY KBQVSBSYPER IBYPXZYSYMNEPRAUFCDQJSUHSBR GFQXC", "RJGJTFFXZCBBS PJGTTZYVSBJZOVLZQRERHTTCPLGPKPA PQBC", "FHKEFQXEWNDMQEUODNTUZISQOQLSFIPIGMQBXXGMYZAJUBNQYI", "SXDDTBMQKLMHBBZIFUXMEEPR TDWCCRTHXEWWFXUQMAAQAKRML", "QZWMTDLHZZGKELWGLTKI A ZUHGPAFYFTUKXVG SLHAALWGJB", "KSWFZKIKKENXSUNHBVPWRKATOJSFLRCSATFMNBDTUNYUTQKUNH", "EFEIXTCLQYKVTMNOZTLMUWMWSWQHHGFCRB SEEBZISPVMIXOVI", "ITLAMJAZMXQXFIGVBNAJTRNCIIHTUGESLKLUHYZJHXDBGXJPGC", "KFFUTKF IPKFMDHEPTOAPIJZKFFZBJILDVMVWUGJMERUQHHOXT", "EV ASCADISAFGVJZZKMZPEHILGEBVOVNFYBUMROM SIIMTETVC", "BAIQQKU V WMODOQYQHNMQXMEUNVTWXRKHBRAWZUZJXBHETKPR", "WQXBVCOMZWZWFXDPAUQTZVPJQRLDESWYIFXBARAAPHYUMOLYZY", "SLYKSWKBKULIDIXDLTGHSNMXSNLNSNPEEXRGTPKOIXVSUMWA U", "UNFDVZUENYWQ CPMJWZMZALGEOLLTSGDTAWUJVNI TVHSBCOR ", "RANDIOWNESJBDBQOEVOCBSFX YACUFBYVNJIRXHROOJIKOEKEL", "HIPEZLPKJSCQF XAMZQNSJZHE KWJWV JHZIAKAZMZLRGKOYG", "HDQYGYRUQVQJFGWBMOMSIDETI OGIWESUGBXQDJVYHUJWBEFTO", "BWGDBUVR VWCZVKBATQX IYWARAPACJWBXFBJMGXBLHQTYWNMQ", "CZRVZRORQCOZMMOWHZQLIGTW NPKXIAIOVFJSMOY SRW RWPSY", "AZEDURV CYZI VOVKTTPAAEYBGYFBBDXGMRZGUYBICWZHPJLI"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> names = {"JFWVWRAXWGBOYLQYVXFFSOFSWETXXQPZZ QKTRUWWFGQZYCAGW", "KYNYXPNFWJRLATEURKBPLLNQEJVBXE D WVGB VFCMHRTUQ AN", "NFMZHVDLKMAFTGRSPXFJXXXJQWPDSNIMICCBKGEUFRNOZDLCUL", "OXQQOQIHTNOJUPNWTGQAERJ IVKKDZEVFHEFQSTGB DRZIJLRB", "PMJQNQCPPSYZ RINF MQWENAMORMZIWSAVFHWGCBBQGYXET KC", "S EMGHYZLPEHDTSENGUFZUOJCUALCFMAFKVDGTPMFSXJFECWIO", "TSBYVRRBAZRGCAPEPPEXNEKSYWCWF MSKJMTMPUELWNOBPAROL", "UOJOIZMZEMPR RCKW BFMYF KKNVKGLCJHFG CEOLEIWAVEQPQ"};
    vector<string> lostTo = {"NFMZHVDLKMAFTGRSPXFJXXXJQWPDSNIMICCBKGEUFRNOZDLCUL", "PMJQNQCPPSYZ RINF MQWENAMORMZIWSAVFHWGCBBQGYXET KC", "", "UOJOIZMZEMPR RCKW BFMYF KKNVKGLCJHFG CEOLEIWAVEQPQ", "NFMZHVDLKMAFTGRSPXFJXXXJQWPDSNIMICCBKGEUFRNOZDLCUL", "PMJQNQCPPSYZ RINF MQWENAMORMZIWSAVFHWGCBBQGYXET KC", "S EMGHYZLPEHDTSENGUFZUOJCUALCFMAFKVDGTPMFSXJFECWIO", "NFMZHVDLKMAFTGRSPXFJXXXJQWPDSNIMICCBKGEUFRNOZDLCUL"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NFMZHVDLKMAFTGRSPXFJXXXJQWPDSNIMICCBKGEUFRNOZDLCUL", "PMJQNQCPPSYZ RINF MQWENAMORMZIWSAVFHWGCBBQGYXET KC", "UOJOIZMZEMPR RCKW BFMYF KKNVKGLCJHFG CEOLEIWAVEQPQ", "S EMGHYZLPEHDTSENGUFZUOJCUALCFMAFKVDGTPMFSXJFECWIO", "JFWVWRAXWGBOYLQYVXFFSOFSWETXXQPZZ QKTRUWWFGQZYCAGW", "KYNYXPNFWJRLATEURKBPLLNQEJVBXE D WVGB VFCMHRTUQ AN", "OXQQOQIHTNOJUPNWTGQAERJ IVKKDZEVFHEFQSTGB DRZIJLRB", "TSBYVRRBAZRGCAPEPPEXNEKSYWCWF MSKJMTMPUELWNOBPAROL"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> names = {"BRKZBGL JKTJXSUN IPIYS RFXJBZHRCJONZZCLTWNISTMKCMK", "C VMNZUHLKQPPNUJMPAUINQJXMLWTRHBEMYWGXGHHIJGGXYWW", "CRMAMVOGTCXPWJCXFMFOOFFNVIRHUEWTULGNROFDVORNEERNJZ", "G OFSPKBXZDBKZDQLBQTLVJJDYPNMLIKVIKPBKBLQJOZCUVTWR", "HQWUQCFBLGKDONDZKZPAXVKYLSBLPKQZJW YBOSMPFAQFCGXGO", "IKQCFWKARIVSMAJ UXTAVVHQQSINUGR AEATV DYGLWHJLKHWZ", "LPIFQYK EXGBFBYWDXEIAJNHOLZLABEIEYMCKUNVAYSRLYHPJS", "M DEUGF DOVHAPTAZZCYJLMNFCINVNVDTNXE HZLIFZLLUQKO", "NSTHWOLGQUGMCUXNQKXXHHSVKOQYCEVTAUC TDTCECPBKFCBRE", "QAFEDVMMZCVMDINDJCNNUXZOMRUDTKPVC PWRGLBMFDMMEHUU ", "SWVSWKLWNYSLJXDA LGVHXKJUKOLADOHE QFXDVTOHQ XVKSAK", "TYXSXFBKVOGCHYQKWYUNLWCKYVXOHKWWUIJEQOZEFJLXCMRQYL", "XSMCQLRACQUTXYXESCSY VEDZQEYHTPFPWIMJPLEDYFSHCWHRR", "XUGEYDAPPRIPVYEJYMFMT JCYVFUJMQICWLAHEMMJUOEQXHS W", "YDKRLTGWCLTYQYRCUNBCPYN S UUFVXSKF KOTYCRBRIINZYVU", "YSZPIZWWYKIORDEJRMZQJWLSRHQWLNMUASSDXVQJCYXBNCKCFC"};
    vector<string> lostTo = {"SWVSWKLWNYSLJXDA LGVHXKJUKOLADOHE QFXDVTOHQ XVKSAK", "CRMAMVOGTCXPWJCXFMFOOFFNVIRHUEWTULGNROFDVORNEERNJZ", "SWVSWKLWNYSLJXDA LGVHXKJUKOLADOHE QFXDVTOHQ XVKSAK", "YSZPIZWWYKIORDEJRMZQJWLSRHQWLNMUASSDXVQJCYXBNCKCFC", "XUGEYDAPPRIPVYEJYMFMT JCYVFUJMQICWLAHEMMJUOEQXHS W", "YSZPIZWWYKIORDEJRMZQJWLSRHQWLNMUASSDXVQJCYXBNCKCFC", "IKQCFWKARIVSMAJ UXTAVVHQQSINUGR AEATV DYGLWHJLKHWZ", "YDKRLTGWCLTYQYRCUNBCPYN S UUFVXSKF KOTYCRBRIINZYVU", "TYXSXFBKVOGCHYQKWYUNLWCKYVXOHKWWUIJEQOZEFJLXCMRQYL", "BRKZBGL JKTJXSUN IPIYS RFXJBZHRCJONZZCLTWNISTMKCMK", "", "SWVSWKLWNYSLJXDA LGVHXKJUKOLADOHE QFXDVTOHQ XVKSAK", "SWVSWKLWNYSLJXDA LGVHXKJUKOLADOHE QFXDVTOHQ XVKSAK", "CRMAMVOGTCXPWJCXFMFOOFFNVIRHUEWTULGNROFDVORNEERNJZ", "TYXSXFBKVOGCHYQKWYUNLWCKYVXOHKWWUIJEQOZEFJLXCMRQYL", "CRMAMVOGTCXPWJCXFMFOOFFNVIRHUEWTULGNROFDVORNEERNJZ"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SWVSWKLWNYSLJXDA LGVHXKJUKOLADOHE QFXDVTOHQ XVKSAK", "CRMAMVOGTCXPWJCXFMFOOFFNVIRHUEWTULGNROFDVORNEERNJZ", "TYXSXFBKVOGCHYQKWYUNLWCKYVXOHKWWUIJEQOZEFJLXCMRQYL", "YSZPIZWWYKIORDEJRMZQJWLSRHQWLNMUASSDXVQJCYXBNCKCFC", "BRKZBGL JKTJXSUN IPIYS RFXJBZHRCJONZZCLTWNISTMKCMK", "XUGEYDAPPRIPVYEJYMFMT JCYVFUJMQICWLAHEMMJUOEQXHS W", "YDKRLTGWCLTYQYRCUNBCPYN S UUFVXSKF KOTYCRBRIINZYVU", "IKQCFWKARIVSMAJ UXTAVVHQQSINUGR AEATV DYGLWHJLKHWZ", "XSMCQLRACQUTXYXESCSY VEDZQEYHTPFPWIMJPLEDYFSHCWHRR", "C VMNZUHLKQPPNUJMPAUINQJXMLWTRHBEMYWGXGHHIJGGXYWW", "NSTHWOLGQUGMCUXNQKXXHHSVKOQYCEVTAUC TDTCECPBKFCBRE", "G OFSPKBXZDBKZDQLBQTLVJJDYPNMLIKVIKPBKBLQJOZCUVTWR", "QAFEDVMMZCVMDINDJCNNUXZOMRUDTKPVC PWRGLBMFDMMEHUU ", "HQWUQCFBLGKDONDZKZPAXVKYLSBLPKQZJW YBOSMPFAQFCGXGO", "M DEUGF DOVHAPTAZZCYJLMNFCINVNVDTNXE HZLIFZLLUQKO", "LPIFQYK EXGBFBYWDXEIAJNHOLZLABEIEYMCKUNVAYSRLYHPJS"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> names = {"DUKE", "SETON HALL", "ILLINOIS", "CINCINNATI", "NORTH CAROLINA", "TEXAS", "XAVIER", "MISSISSIPPI STATE"};
    vector<string> lostTo = {"", "DUKE", "DUKE", "ILLINOIS", "TEXAS", "XAVIER", "DUKE", "XAVIER"};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DUKE", "XAVIER", "ILLINOIS", "TEXAS", "SETON HALL", "MISSISSIPPI STATE", "CINCINNATI", "NORTH CAROLINA"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> names = {"RODDICK", "SCHUETTLER", "FERREIRA", "AGASSI"};
    vector<string> lostTo = {"SCHUETTLER", "AGASSI", "AGASSI", ""};
    TournamentRanker* pObj = new TournamentRanker();
    clock_t start = clock();
    vector<string> result = pObj->rankTeams(names, lostTo);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AGASSI", "SCHUETTLER", "FERREIRA", "RODDICK"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10362313&rd=5862&pm=2985
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <cmath> 
using namespace std; 
 
vector<string> split( const string& s, const string& delim =" " ) { 
    vector<string> res; 
    string t; 
    for ( int i = 0 ; i != s.size() ; i++ ) { 
        if ( delim.find( s[i] ) != string::npos ) { 
            if ( !t.empty() ) { 
                res.push_back( t ); 
                t = ""; 
            } 
        } else { 
            t += s[i]; 
        } 
    } 
    if ( !t.empty() ) { 
        res.push_back(t); 
    } 
    return res; 
} 
 
vector<int> splitInt( const string& s, const string& delim =" " ) { 
    vector<string> tok = split( s, delim ); 
    vector<int> res; 
    for ( int i = 0 ; i != tok.size(); i++ ) 
        res.push_back( atoi( tok[i].c_str() ) ); 
    return res; 
} 
 
int better(int i,int j,vector<int> wins,vector<string> names,vector<string> lostTo){ 
    if(wins[i]>wins[j])return 1; 
    if(wins[i]<wins[j])return 0; 
    int newi=-1,newj=-1; 
    for(int k=0; k<names.size(); k++){ 
        if(names[k]==lostTo[i])newi=k; 
        if(names[k]==lostTo[j])newj=k; 
    } 
    if((newi!=-1)&&(newj!=-1))return better(newi,newj,wins,names,lostTo); 
    return 0; 
}     
class TournamentRanker { 
public: 
    vector <string> rankTeams(vector <string> names, vector <string> lostTo) { 
        vector <string> res; 
        vector <int> wins(names.size(),0); 
        for(int i=0; i<lostTo.size(); i++) 
                for(int j=0; j<names.size(); j++) 
                                if(lostTo[i]==names[j])wins[j]++; 
        for(int i=0; i<names.size(); i++) 
                for(int j=0; j<names.size(); j++) 
                                if(better(i,j,wins,names,lostTo)) 
                                { 
                                    int k=wins[i]; 
                                    wins[i]=wins[j]; 
                                    wins[j]=k; 
                                    string s=names[i]; 
                                    names[i]=names[j]; 
                                    names[j]=s; 
                                    s=lostTo[i]; 
                                    lostTo[i]=lostTo[j]; 
                                    lostTo[j]=s; 
                                }                                     
        res=names;         
        return res; 
    } 
 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/