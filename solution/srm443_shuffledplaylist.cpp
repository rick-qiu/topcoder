/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10486
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

class ShuffledPlaylist {
public:
    int count(vector<string> songs, vector<string> transitions, int minLength, int maxLength);
};

int ShuffledPlaylist::count(vector<string> songs, vector<string> transitions, int minLength, int maxLength) {
    int ret;
    return ret;
}


int test0() {
    vector<string> songs = {"0 3,1 2,0 2"};
    vector<string> transitions = {"YY", "YY"};
    int minLength = 2;
    int maxLength = 4;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> songs = {"0 3,1 2,0 2"};
    vector<string> transitions = {"YN", "NY"};
    int minLength = 2;
    int maxLength = 4;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> songs = {"0 9", ",1 8,", "2 3,2 5"};
    vector<string> transitions = {"YYY", "NYY", "NNY"};
    int minLength = 5;
    int maxLength = 9;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> songs = {"5 4,6 2,7 7,2 1,1 3,6 3,2 1,0 3,7 6,5 8,6 4,5 4,6 ", "5,4 9,0 4,1 4,6 4,3 1,2 1,6 5,2 4,7 7,6 7,5 1,5 8,", "1 8,7 3,1 1,3 5,0 3,4 4,5 8,6 7,5 7,7 7,5 1,7 6,1 ", "9,3 1,3 8,6 8,5 2,6 2,2 3,7 5,4 2,7 9,6 3,4 6,5 5,", "4 6,7 4,1 5,3 7,3 3,3 3,5 9,0 9,4 3,1 1,2 1,0 4,1 ", "8,6 1,5 8,7 1,6 6,6 9,4 1,6 2,7 5,6 6,1 7,1 7,7 2,", "0 3,6 1,4 5,0 1,4 3,4 1,4 3,1 2,5 6,1 4,0 6,6 1,3 ", "4,5 2,5 5,3 9,1 4,1 8,7 5,5 1,4 3,4 6,7 9,5 3,1 8,", "6 1,3 7,5 5,6 9,6 4,6 6,5 4,7 5,4 ", "7,4 4,3 7,7 5,0", " 3,3 4,0 6,6 1,2 7,7 3,2 1,6 6,", "0 2,4 5,2 4,2 1,0 8,0 7,4 2,5 9,0 6,2 1,7 8,3 1,7 ", "9,0 2,4 4,5 1,6 4,3 2,4 7,4 7,6 6,7 6,2 6,1 7,2 4,", "0 8,4 6,7 1,5 5,1 3,6 9,6 7,7 9,0 6,5 3,1 2,5 9,5 ", "7,6 9,6 7,4 9,4 8,0 1,4 6,0 7,4 4,5 1,2 1,7 1,2 1,", "4 2,1 8,4", " 2,2 2,1 3,5 5,0", " 9,7 7,7 3", ",6 8,5 1,5 9,5 9,2 1,0 6,7 5,5 2,4 4,", "4 7,6 4,2 7", ",1 4,7 ", "4,7 1,7 9,6 4,4 ", "1,7 8", ",1", " 1,2 9,1 1", ",4", " 4,6 ", "5,4 8,3 6,2 5,1 3,1 ", "2,6 7,3 5,0 6", ",1 ", "6,2", " ", "1,2", " 8,", "5", " ", "7", ",2 ", "4"};
    vector<string> transitions = {"YYNNNNYNN", "YYYNYNYYN", "YNYNNYNNY", "NNNYNYNNN", "YYNNYYNNN", "NYYNYYNYN", "NNNYNNYYN", "YYNYYNNYY", "NNYNNYYYY"};
    int minLength = 41;
    int maxLength = 901001009;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 318813055;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> songs = {"0", " ", "7", ",0 8,0 9,0 2", ",", "0", " ", "1"};
    vector<string> transitions = {"Y"};
    int minLength = 1;
    int maxLength = 100;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 300667430;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> songs = {"0", " ", "7", ",0 8,0 9,0 2", ",", "0", " ", "1"};
    vector<string> transitions = {"Y"};
    int minLength = 1;
    int maxLength = 1000000000;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 279273418;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> songs = {"0", " ", "7", ",0 8,0 9,0 2", ",", "0", " ", "1"};
    vector<string> transitions = {"Y"};
    int minLength = 999999999;
    int maxLength = 1000000000;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 489962188;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> songs = {"0 4,0 1,0 7,0 5,0 8,0 1,0 8,0 1,0 5,0 9,0 5,0 1,0 ", "4,0 3,0 9,0 8,0 9,0 4,0 7,0 2,0 7,0 7,0 1,0 9,0 2,", "0 1,0 5,0 4", ",0 1,0 7,0 3,0 4,0 1,0 7,0 2,0 3,0 4,0 8,0 3,0 8,0", " 5,0 9,0 4,0 5,0 3,0 5,0 9,0 1,0 3,0 8,0 7,0 5,0 4", ",0 1,0 1,0 8,0 1,0 8,0 2,0 2,0 9,0 8,0 2,0 6,0 8,0", " 3,0 6,0 4,0 9,0 4,0 4,0 1,0 6,0 4,0 2,0 8,0 9,0 3", ",0 2,0 7,0 4,0 5,0 4,0 6,0 5,0 4,0 8,0 7,0 4,0 5,0", " 9,0 3,0 8,0 9,0 5,0 6,0 6,0 5,0 5,0 7,0 8,0 4,0 7", ",0 2,0 8,0 1,0 8,0 1,0 2,0 3,0 9,0 6,0 7,0 7,0 1,0", " 1,0 1,0 7,0 4,0 1,0 7,0 9,0 1,0 5,0 3,0 1,0 7,0 8", ",0 6,0 1,0 6,0 8,0 1,0 1,0 9,0 5,0 9,0 8,0 4,0 9,0", " 2,0 1,0 5,0 1,0 8,0 9,0 6,0 3,0 5,0 4,0 3,0 7,0 7", ",0 8,0 9,0 3,0 1,0 4,0 6,0 3,0 8,0 5,0 8,0 2,0 7,0", " 8,0 9,0 5,0 6,0 4,0 5,0 7,0 4,0 6,0 8,0 9,0 6,0 3", ",0 5,0 1,0 3,0 6,0 1,0 6,0 1,0 3,0 6,0 1,0 2,0 7,0", " 3,0 8,0 5,0 5,0 7,0 7,0 4,0 4,0 1,0 7,0 1,0 4,0 5", ",0 5,0 7,0 1,0 4,0 7,0 1,0 3,0 4,0 3,0 2,0 8,0 1,0", " 6,0 6,0 6,0 9", ",0 5,0 2,0 2,0 1,0 7,0 2,0", " 3,0 2,0 9,0 4,0 4,0 9,0 2,0 2,0", " 5,0 9,0 4,0 4,0 7,0 2,0 9,0 1,0 3,0 5,0 9,0 6,0 9", ",0 9,0 2,0 7,0 7,0 1,", "0 2,0 5,0 6,0 9,0 3,0 5,0 8,0 2,0 2,0 2,0 6,0 1,0 ", "9,0 4,0 3,0 2,0 2,0 4,0 1,0 1,0 4,0 7,0 7,0 9,0 9,", "0 7,0 5,0 9,0 1,", "0 9,0", " 4,0", " 1,0 3,0 1,0 9,0 3,0 2,0 1,0 1,0 9,0 5,0 4,0 2,0 3", ",0 8,0 7,0 9,0 9,0 1,0 6,0 5,0 3,0 1,0 6,0 6,0 9,0", " 8,0 1,0 2,0 5,0 5,0 1,0 6,0 2,0 4,0 5,0 5,0 9,0 9", ",0 6,0 2,0 3,0 3,0 8,0 4,0 3,0 5,0 8,0 1,0 5,0 2,0", " 2,0 3,0 5,0 3,0 1,0 4,0 1,0 6,0 3,0 1,0 2,0 1,0 3", ",0 7,0 1,0 1,0 1,", "0 9,0 7,0 2,0 7,0 5,0 9,0 7,0 6,0 1,0 7,0 2,0 2,0 ", "5,0 3,0 9,0 1,0 8,0 6,0 ", "7,0 6,0 6,0 8,0 3,0 2,0 6,0 8,0 7,0 1,0 1,0 8,0 2,", "0 9,0 7,0 3,0 7,0 6,0 7,0 8,0 4,", "0 5,0", " 3,0 8,0 5,0 9,0 2,0 7,0 8,0 4,0 3", ",0 2,0", " ", "1"};
    vector<string> transitions = {"Y"};
    int minLength = 21;
    int maxLength = 25;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 252787385;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> songs = {"0 4,0 1,0 7,0 5,0 8,0 1,0 8,0 1,0 5,0 9,0 5,0 1,0 ", "4,0 3,0 9,0 8,0 9,0 4,0 7,0 2,0 7,0 7,0 1,0 9,0 2,", "0 1,0 5,0 4", ",0 1,0 7,0 3,0 4,0 1,0 7,0 2,0 3,0 4,0 8,0 3,0 8,0", " 5,0 9,0 4,0 5,0 3,0 5,0 9,0 1,0 3,0 8,0 7,0 5,0 4", ",0 1,0 1,0 8,0 1,0 8,0 2,0 2,0 9,0 8,0 2,0 6,0 8,0", " 3,0 6,0 4,0 9,0 4,0 4,0 1,0 6,0 4,0 2,0 8,0 9,0 3", ",0 2,0 7,0 4,0 5,0 4,0 6,0 5,0 4,0 8,0 7,0 4,0 5,0", " 9,0 3,0 8,0 9,0 5,0 6,0 6,0 5,0 5,0 7,0 8,0 4,0 7", ",0 2,0 8,0 1,0 8,0 1,0 2,0 3,0 9,0 6,0 7,0 7,0 1,0", " 1,0 1,0 7,0 4,0 1,0 7,0 9,0 1,0 5,0 3,0 1,0 7,0 8", ",0 6,0 1,0 6,0 8,0 1,0 1,0 9,0 5,0 9,0 8,0 4,0 9,0", " 2,0 1,0 5,0 1,0 8,0 9,0 6,0 3,0 5,0 4,0 3,0 7,0 7", ",0 8,0 9,0 3,0 1,0 4,0 6,0 3,0 8,0 5,0 8,0 2,0 7,0", " 8,0 9,0 5,0 6,0 4,0 5,0 7,0 4,0 6,0 8,0 9,0 6,0 3", ",0 5,0 1,0 3,0 6,0 1,0 6,0 1,0 3,0 6,0 1,0 2,0 7,0", " 3,0 8,0 5,0 5,0 7,0 7,0 4,0 4,0 1,0 7,0 1,0 4,0 5", ",0 5,0 7,0 1,0 4,0 7,0 1,0 3,0 4,0 3,0 2,0 8,0 1,0", " 6,0 6,0 6,0 9", ",0 5,0 2,0 2,0 1,0 7,0 2,0", " 3,0 2,0 9,0 4,0 4,0 9,0 2,0 2,0", " 5,0 9,0 4,0 4,0 7,0 2,0 9,0 1,0 3,0 5,0 9,0 6,0 9", ",0 9,0 2,0 7,0 7,0 1,", "0 2,0 5,0 6,0 9,0 3,0 5,0 8,0 2,0 2,0 2,0 6,0 1,0 ", "9,0 4,0 3,0 2,0 2,0 4,0 1,0 1,0 4,0 7,0 7,0 9,0 9,", "0 7,0 5,0 9,0 1,", "0 9,0", " 4,0", " 1,0 3,0 1,0 9,0 3,0 2,0 1,0 1,0 9,0 5,0 4,0 2,0 3", ",0 8,0 7,0 9,0 9,0 1,0 6,0 5,0 3,0 1,0 6,0 6,0 9,0", " 8,0 1,0 2,0 5,0 5,0 1,0 6,0 2,0 4,0 5,0 5,0 9,0 9", ",0 6,0 2,0 3,0 3,0 8,0 4,0 3,0 5,0 8,0 1,0 5,0 2,0", " 2,0 3,0 5,0 3,0 1,0 4,0 1,0 6,0 3,0 1,0 2,0 1,0 3", ",0 7,0 1,0 1,0 1,", "0 9,0 7,0 2,0 7,0 5,0 9,0 7,0 6,0 1,0 7,0 2,0 2,0 ", "5,0 3,0 9,0 1,0 8,0 6,0 ", "7,0 6,0 6,0 8,0 3,0 2,0 6,0 8,0 7,0 1,0 1,0 8,0 2,", "0 9,0 7,0 3,0 7,0 6,0 7,0 8,0 4,", "0 5,0", " 3,0 8,0 5,0 9,0 2,0 7,0 8,0 4,0 3", ",0 2,0", " ", "1"};
    vector<string> transitions = {"Y"};
    int minLength = 9888001;
    int maxLength = 22214125;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 542847808;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> songs = {"0 6,0 2,0 2,0 7,0 6,0 3,0 7,0 5,0 9,0 7,0 7,0 7,0 ", "5,0 5,0 4,0 2,0 4,0 7,0 5,0 9,0 6,0 6,0 3,0 9,0 2,", "0 6,0 9,0 9,0 5,0 1,0 2,0 3,0 7,0 9,0 2,0 3,0 4,0 ", "1,0 6,0 3,0 7,0 8,0 7,0 6,0 4,0 3,0 7,0 6,0 7,0 8,", "0 3,0 7,0 8,0 1,0 2,0 7,0 9,0 7,0 6,0 7,0 6,0 7,0 ", "8,0 7,0 2,0 9,0 3,0 7,0 5,0 1,0 9,0 7,0 3,0 7,0 6,", "0 7,0 4,0 9,0 4,0 6,0 8,0 8,0 5,0 8,0 6,0 5,0 8,0 ", "6,0 5,0 2,0 2,0 1,0 8,0 6,0 3,0 1,0 4,0 7,0 3,0 5,", "0 7,0 8,0 7,0 6,0 1,0 1,0 5,0 3,0 8,0 8,0 6,0 7,0 ", "9,0 8,0 7,0 2,0 2,0 9,0 9,0 4,0 1,0 6,0 7,0 4,0 6,", "0 4,0 8,0 7,0 7,0 8,0 5", ",0 3,0 4,0 2,0 5,0 3,0 3,0 7,0 1,0 4,0 1,0 3,0 7,0", " 6,0 3", ",0 8,0 3,0 7,0 6,0 9,0 2,0 2,0 7,0 1,0 ", "8,0 3,0 5,0 2,0 5,0 7,0 1,0 8,0 2,0 7,0 4,0 1,0 9,", "0 9,0 1,0 1,0 8,0 1,0 2,0 2,0 6,0 2,0 5,0 2,0 6,0 ", "2,0 6,0 1,0 2,0 1,0 7,0 7,0 2,0 1,0 3,0 3,0 7,0 5,", "0 5", ",0 6,0 5,0 3,0 2,0 7,0 5,0 1,0 7,0 8,0 8,0 1,0 6,0", " 4,0 4,0 9,0 8,0 6,0 5,0 6,0 4,0 4,0 3,0 9,0 4,0 5", ",0 2,0 5,0 6,0 8,0 6,0 5,0 9,0 3,0 1,0 5,0", " 2,0 8,0 4,0 5,0 7,0 6,0 5,0 4,0 5,0 6,0 2,0 3,0 5", ",0 6,0 7,0 7,0 1,0 4,0 8,0 1,0 4,0 9,0 8,0 5,0 6,0", " ", "8,0 1,0 ", "4,0 8,0 1,0 9", ",0 2,0 6,0 6,0 5,0 5,0 9,0 1,0 1,0 4,0 5,0 2,0 6,0", " 2,0 9,0 1,0 9,0 8,0 5,0 6,0 ", "3,0 3,0 1,0 2,0 5,0 5,0 6,0 2,0 7,0 7,0 3,0 2,0 9,", "0 1,0 5,0 6,0 8,0 ", "6,0 ", "6,0 3,0 ", "1,0", " 8,0", " 4,0 5,0 5,0 9,0 6,0 5,0 3", ",0", " 3,0 4,0 2,0 9,0 6", ",", "0 ", "9"};
    vector<string> transitions = {"Y"};
    int minLength = 99999999;
    int maxLength = 299999999;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 176449762;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> songs = {"0 9,0 4,0 4,0 3,0 5,0 7,0 8,0 2,0 8,0 4,0 9,0 1,0 ", "4,0 8,0 8,0 1,0 4,0 3,0 4,0 9,0 4,0 4,0 7,0 5,0 9,", "0 5,0 4,0 4,0 3,0 5,0 5,0 1,0 9,0 6,0 2,0 3,0 8,0 ", "5,0 1,0 7,0 1,0 1,0 5,0 3,0 6,0 8,0 5,0 2,0 2,0 5,", "0 7,0 8,0 3,0 3,0 9,0 5,0 6,0 7,0 7,0 3,0 9,0 1,0 ", "9,0 3,0 5,0 9,0 1,0 6,0 1,0 7,0 4,0 4,0 8,0 5,0 1,", "0 9,0 3,0 5,0 2,0 2,0 5,0 2,0 8,0 3,0 2,0 4,0 6,0 ", "8,0 2,0 7,0 5,0 4,0 6,0 9,0 7,0 6,0 8,0 7,0 4,0 2,", "0 6,0 6,0 2,0 1,0 8,0 9,0 4,0 1,0 2,0 7,0 9,0 6,0 ", "3,0 8,0 7,0 5,0 4,0 9,0 2,0 4,0 8,0 7,0 8,0 9,0 8,", "0 6,0 6,0 9,0 4,0 2,0 6,0 1,0 8,0 9,0 5,0 7,0 3,0 ", "7,0 4,0 8,0 5,0 3,0 8,0 5,0 8,0 6,0 5,0 7,0 4,0 4,", "0 9,0 7,0 5,0 3,0 7,0 3,0 9,0 4,0 1,0 9,0 7,0 4,0 ", "6,0 3,0 6,0 4,0 2,0 8,0 7,0 6,0 5,0 1,0 4,0 6,0 4,", "0 4,0 1,0 5,", "0 1,0 2,0 2,0 7,0 4,0 8,0 1,0 7,0 3,0 1,0 1,0 3,0 ", "6,0 3,0 4,0 1,0 7,0 3,0 4,0 6,0 4,0 8,0 2,0 6,0 2,", "0 7,0 7,0 7,0 7,0 2,0 1,0 9,0 5,0 7,0 9,0 8,0 7,0 ", "6,0 3,0 2,0 4,0 8,0 2,0 3,0 6,0 2,0 8,0 9,0 1,0", " 9,0 4,0 2,0 5,0 1,0 6,0 9,0 3,0 5,0 2,0 4,0 4,0 4", ",0 4,0 7,0 8,0 8,0 7,0 1,0 3,0 4,0 1,0 4,0 4,0 5,0", " 5,0 9,0 5,0 7,0 9,0 3,0 8,0 4,0 3,0 6,0 4,0 4,0 1", ",0 9,0 6,0 6,0 2,0 6,0 4,0 9,0 4,0 3,0 8,0 6,0 3,0", " 6,0 3,0 3,0 2,", "0 9,0 7,0 2,0 9,0 7,0 1,0 8,0 8,0 3,0 6,0 6,0 4", ",0 1,0 3,0 8,0 4,0 8,0 8,0 7,0 4,0 8,0 3,0 9,0 3,0", " 5,0 9,0 2,0 1,0 5,0", " 7,0 1,0 8,0 2,0 2,0 8,0", " 7,0 7,0 8,0 8,0 9,0 4,0 9,", "0 1,", "0", " ", "2"};
    vector<string> transitions = {"Y"};
    int minLength = 99999999;
    int maxLength = 999999999;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 390849334;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> songs = {"0 2,0 1,0 9,0 5,0 1,0 9,0 7,0 6,0 8,0 1,0 7,0 9,0 ", "3,", "0 8,0 1,0 6,0 1,0 7,0 2,0 6,0 7,0 5,0 4,0 8,0 1,0 ", "4,0 1,0 1,0 5,0 6,0 2,0 1,0 6,0 8,0 6,0 1,0 5,0 9,", "0 7,0 6,0 4,0 6,0 7,0 5,0 3,0 3,0 4,0 8,0 6,0 6,0 ", "1,0 6,0 4,0 1,0 1,0 3,0 8,0 1,0 4,0 9,0 6,0 1,0 4,", "0", " 7,0 9,0 2,0 3,", "0 1", ",0 7", ",0 5,0 5,0 8,0 ", "1,", "0", " 6,0", " 9", ",0", " ", "2"};
    vector<string> transitions = {"Y"};
    int minLength = 366;
    int maxLength = 58899989;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 362898015;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> songs = {"0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 ", "9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,", "0 9,0 9", ",0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0", " 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9", ",0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0 9,0", " 9,0 9,", "0 9,0 9,", "0 9,0 9,0 9,0 9,0", " 9,0 9,0 ", "9,", "0 ", "9"};
    vector<string> transitions = {"Y"};
    int minLength = 39997666;
    int maxLength = 58899989;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 528801439;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> songs = {"0 4,0 5,0 2,0 6,0 4,0 5,0 5,0", " 8,0 7,0 3,0 7,0 4,0 6,0 3,0 1,0 3,0 2,0 4,0 1,0 9", ",", "0 9,0 5,0 6,0 3,0 9,0 6,0 5,0 9,0 6,0 2,0 7,0 5,0 ", "4,0 1,0 9,", "0 7,0 6,0 3", ",", "0 1,0 2,0 3,0 6,0 8,0 8,0 2,0 5,0 2,0 2,0 1,0 4,0 ", "3,0 2,0 9,0 6,0 9,0 7,0 6,0 5,0 8,0 8,", "0 6,0 7,0 ", "3,0 5,", "0 6,0 6,0 2,0 6,0 9,0 6,0 6,0 1,0 1,0 9,0 4,0 5,", "0 6,", "0 7,0 6,0 8", ",0 7,0", " 8,", "0 7,0 ", "7,0 1", ",", "0 8,", "0 4,0 5,", "0 1"};
    vector<string> transitions = {"Y"};
    int minLength = 737292912;
    int maxLength = 737292912;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 13401706;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> songs = {"0 ", "9"};
    vector<string> transitions = {"Y"};
    int minLength = 32512512;
    int maxLength = 48848453;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1815104;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> songs = {"0", " ", "6"};
    vector<string> transitions = {"Y"};
    int minLength = 12512512;
    int maxLength = 48848453;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 6055990;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> songs = {"0 8,", "1 7", ",0 ", "2", ",", "1 ", "2"};
    vector<string> transitions = {"YN", "YY"};
    int minLength = 737292912;
    int maxLength = 737292912;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 169681976;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> songs = {"0 9", ",0 5,1 6,", "0 ", "8", ",0", " 2"};
    vector<string> transitions = {"YY", "NY"};
    int minLength = 1;
    int maxLength = 87006;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 265869643;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> songs = {"1 9,", "1 9,1 1,1 4,1 4,0 3,", "1 5,0 6,1 5,0 3,0 9,0 4,1 ", "4", ",0 9,1 1,0 3,0 3,1 2,1 8,1 2,0", " 9", ",1 3,0 4", ",1 8,", "0", " ", "7"};
    vector<string> transitions = {"YN", "YY"};
    int minLength = 1;
    int maxLength = 787578006;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 340650774;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> songs = {"1 3,1 3,1 9,0 9,1", " 7,1", " 9", ",", "1 1", ",0 3,1 6", ",1 5,", "0 3,0", " ", "1"};
    vector<string> transitions = {"YY", "YY"};
    int minLength = 9999321;
    int maxLength = 211252509;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 46101127;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> songs = {"0 2,0 3,1 8,1 8,1 3,0 6,0 7,1 5", ",0 2,0 9,0 3,0 4,1 4,0", " 3,0 3,0", " 8,0 9,1 7,0 8,0 1,1 9,0 8,0 9,0 6,0 ", "6,0 6,0 ", "4,1 3,0 5,0 7,1 5,1 3,0 5,1", " 1,1 6,1 8,1 9,0 4,0", " 9,", "1 ", "6", ",1", " 6,0 8,0 5,1 ", "6,0 ", "3,1 ", "2,1", " ", "6"};
    vector<string> transitions = {"YY", "YY"};
    int minLength = 1000000000;
    int maxLength = 1000000000;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 599541019;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> songs = {"0 6,0 3,0 1,1 2,0 6,1 8,0 2,0 2,1 6,1 4,1 1,0 4,1 ", "1,0 1,0 4,1 5,0 3,0 ", "4,1 7,1 2,1 6,0 9,0 5,1 8,1 4,1 3,1 8,0 5,0 1,0 6,", "0 9,1 7,1 2,1 1,1 8,1 5,1 3,1 6,1 4,1 6,0 4,0 3,1 ", "5,1 1,0 8,1 8,1 4,0 9,1 2,1 2,0 2,0 6,0 3,0 8,1 3,", "1 8,0 6,1 5,1 7,0 5,0 7,1 2,0 1,0 6,1 1,0 3,1 9,0 ", "4,1 7,1 2,1 3,0 5,0 6,1 8,0 6,0 7,0 6,0 4,0 8,1 4,", "1 3,1 4,0 5,1 4,1 8,0 6,1 1,1 6,0 6,1 8,0 5,1 3,1 ", "1,0 4,1 7,0 3,1 1,1 2,1 4,1 4,1 8,0 6,0 6,0 7,1 1,", "1 8,0 9,0 6,1 7,1 4,1 6,0 3,0 1,0 ", "5,1 4,0 8,0 7,1 5,1 8,0 6,0 3,1 6,1 9,1 1,1 4,0 5,", "1 9,0 1,0 6,1 1,1 4,1 6,1 5,1 2,1 3,0 4,0 4,0 6,0 ", "7,0 7,1 8,0 5,1 4,1 2,0 8,0 8,1 1,1 6,0 1,1 1,1 1,", "0 9,0 3,0 6,1 8,0 5,0 7,1 9,1 4,1 9,0 5,1 5,0 1,0 ", "8,0 5,0 1,0 7,0 3,1 4,0 3,1 4,0 3,0 6,1 1,0 4", ",1 1,0 1,0 3,0 ", "2,1 2,0 6,1 8,0 1,1 1,1 5,1 8,0 2,0 6,0 6,1 3,1 2,", "0 9,0 2,1 5,1 3,0 5,1 5,1 8,1 7,1 4,1 4,1 1,0 4,1 ", "8,0 2,0 9,1 2,1 9,0 1,0 8,0 7,1 4,1 6,0 3,1 2,1 9,", "1 3,1 1,1 7,1 7,1 8,0 8,1 5,1 4,1 7,0 8,1 8,1 4,0 ", "7,0 3,1 9,0 1,0 2,0 3,0 7,0 7,1 9,0 9,0 4,0 5,0 9,", "0 9,1 ", "1,0 7,0 3,0 8,1 6,0 8,0 2,1 9,1 3,0 9,1 4,1 5,1 8,", "0 7,1 9,1 6,1 2,0 7,0 6,1 6,1 4,1 6,0 6,1 9,", "0", " 3,0 2,0 1,1 3,0 7,0 8,0 4,1 4,1 2,1 3,1 9,1 8,1 5", ",0 8,0 4,1 9,1 3,1 9,0 3,1 5,0 3", ",1 4,0 1,1 7,0 1,0 6,1 7,1 3,1 5,1 6,1 5,0 2,1 7,1", " 3,0 4,1 3,0", " 6,0 8,0 6,0 8,1 5,1 8,0 2,0 8,0 8,1 2,1 1,1 2,1 3", ",0 2,0 8,1 1,0 5,1 7", ",1 3,1", " 6,1 4,0 4,0 8,1 4,1 5,0 9,0 9", ",1 1,1 5,1 4,0 5,0 1,0 9,0 1,1 6,", "1 7,0 1,0 7,1 1,0 7,1 5", ",", "1", " ", "4", ",", "1 5,", "0", " 3", ",", "0", " ", "5"};
    vector<string> transitions = {"YN", "YY"};
    int minLength = 49824169;
    int maxLength = 49824169;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 282434004;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> songs = {"0 6,0 3,0 1,1 2,0 6,1 8,0 2,0 2,1 6,1 4,1 1,0 4,1", " 1,0 1,0 4,1 5,0 3,0 ", "4,1 7,1 2,1 6,0 9,0 5,1 8,1 4,1 3,1 8,0 5,0 1,0 6,", "0 9,1 7,1 2,1 1,1 8,1 5,1 3,1 6,1 4,1 6,0 4,0 3,1 ", "5,1 1,0 8,1 8,1 4,0 9,1 2,1 2,0 2,0 6,0 3,0 8,1 3,", "1 8,0 6,1 5,1 7,0 5,0 7,1 2,0 1,0 6,1 1,0 3,1 9,0 ", "4,1 7,1 2,1 3,0 5,0 6,1 8,0 6,0 7,0 6,0 4,0 8,1 4,", "1 3,1 4,0 5,1 4,1 8,0 6,1 1,1 6,0 6,1 8,0 5,1 3,1 ", "1,0 4,1 7,0 3,1 1,1 2,1 4,1 4,1 8,0 6,0 6,0 7,1 1,", "1 8,0 9,0 6,1 7,1 4,1 6,0 3,0 1,0 ", "5,1 4,0 8,0 7,1 5,1 8,0 6,0 3,1 6,1 9,1 1,1 4,0 5,", "1 9,0 1,0 6,1 1,1 4,1 6,1 5,1 2,1 3,0 4,0 4,0 6,0 ", "7,0 7,1 8,0 5,1 4,1 2,0 8,0 8,1 1,1 6,0 1,1 1,1 1,", "0 9,0 3,0 6,1 8,0 5,0 7,1 9,1 4,1 9,0 5,1 5,0 1,0 ", "8,0 5,0 1,0 7,0 3,1 4,0 3,1 4,0 3,0 6,1 1,0 4", ",1 1,0 1,0 3,0 ", "2,1 2,0 6,1 8,0 1,1 1,1 5,1 8,0 2,0 6,0 6,1 3,1 2,", "0 9,0 2,1 5,1 3,0 5,1 5,1 8,1 7,1 4,1 4,1 1,0 4,1 ", "8,0 2,0 9,1 2,1 9,0 1,0 8,0 7,1 4,1 6,0 3,1 2,1 9,", "1 3,1 1,1 7,1 7,1 8,0 8,1 5,1 4,1 7,0 8,1 8,1 4,0 ", "7,0 3,1 9,0 1,0 2,0 3,0 7,0 7,1 9,0 9,0 4,0 5,0 9,", "0 9,1 ", "1,0 7,0 3,0 8,1 6,0 8,0 2,1 9,1 3,0 9,1 4,1 5,1 8,", "0 7,1 9,1 6,1 2,0 7,0 6,1 6,1 4,1 6,0 6,1 9,", "0", " 3,0 2,0 1,1 3,0 7,0 8,0 4,1 4,1 2,1 3,1 9,1 8,1 5", ",0 8,0 4,1 9,1 3,1 9,0 3,1 5,0 3", ",1 4,0 1,1 7,0 1,0 6,1 7,1 3,1 5,1 6,1 5,0 2,1 7,1", " 3,0 4,1 3,0", " 6,0 8,0 6,0 8,1 5,1 8,0 2,0 8,0 8,1 2,1 1,1 2,1 3", ",0 2,0 8,1 1,0 5,1 7", ",1 3,1", " 6,1 4,0 4,0 8,1 4,1 5,0 9,0 9", ",1 1,1 5,1 4,0 5,0 1,0 9,0 1,1 6,", "1 7,0 1,0 7,1 1,0 7,1 5", ",", "1", " ", "4", ",", "1 5,", "0", " 3", ",", "0", " ", "5"};
    vector<string> transitions = {"YN", "YY"};
    int minLength = 49824169;
    int maxLength = 49824170;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 84789268;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> songs = {"1 2,0 7,1 2,1 5,0 3,1 6,0 8,0 2,0 6,0 8,1 6,0 4,0 ", "7,1 2,0 9,1 3,1 1,1 3,0 4,0 9,0 5,0 2,1 4,1 7,0 1,", "1 6,1 1,0 8,0 9,1 5,1 5,1 6,1 5,0 5,1 6,1 7,1 7,0 ", "6,1 9,0 7,1 5,1 4,0 3,1 5,1 8,0 8,0 8,0 8,0 1,0 8,", "1 1,0 2,1 7,1 7,1 2,1 3,0 1,0 8,0 6,0 1,1 9,1 9,1 ", "1,0 2,0 8,0 8,1 2,1 9,0 2,1 6,1 9,0 6,1 5,1 5,0 4,", "1 2,0 6,0 6,0 9,1 4,1 5,1 4,0 2,0 9,0 2,0 7,0 7,1 ", "8,0 6,1 9,1 1,0 6,1 2,1 6,1 1,1 1,1 4,1 2,1 1,0 2,", "0 1,0 4,1 7,1 1,0 2,1 3,1 1,0 5,0 6,1 4,1 5,1 8,0 ", "2,0 7,0 3,1 2,1 3,1 9,1 2,0 9,1 6,1 7,0 1,1 1,0 9,", "0 1,1 7,0 4,1 1,1 2,0 3,1 8,0 1,1 8,0 9,0 7,0 9,1 ", "9,0 6,1 9,0 8,1 2,0 1,1 6,1 8,0 4,1 5,1 7,0 9,1 3,", "0 9,0 6,1 9,1 2,0 2,0 5,1 5,0 5,0 6,1 7,1 8,0 9,0 ", "1,1 2,0 7,1 9,0 9,1 1,0 1,1 8,1 2,1 4,0 3,1 9,1 7,", "1 5,1 1,0 4,1 7,0 9,0 4,0 7,1 2,1 9,1 7,1 8,1 4,1 ", "6,1 6,0 5,1 4,1 5,1 5,1 6,1 1,1 1,0 1,0 6,1 3,0 6,", "1 5,1 6,1 4,0 5,0 7,0 7,1 5,1 7,1 8,1 2,0 3,1 1,1 ", "3,1 6,0 6,0 8,0 5,0 9,0 2,0 4,0 9,1 5,1 8,0 7,1 9,", "0 8,0 3,1 8,0 7,0 9,0 3,0 2,1 2,1 7,1 5,0 1,1 8,1 ", "9,0 4,1 7,1 1,0 9,0 2,1 8,1 1,0 6,0 4,1 6,1 3,0 3,", "1 4,1 8,0 5,1 9,1 4,0 2,0 5,0 5,1 3,0 2,0 6,0 1,1 ", "7,0 3,1 4,0 5,0 4,1 8,0 2,1 5,0 5,1 9,1 2,0 3,0 7,", "1 1,0 1,1 8,0 1,1 8,0 9,1 5,1 1,0 3,0 7,1 2,1 7,0 ", "8,1 4,0 2,1 9,1 4,1 8,1 1,1 8,0 5,0 8,0 9,0 1,1 4", ",0 1,0 1,1 9,1 9,1 7,0 9,0 2,0 6,0 1,1 4,0 4,1 1,1", " 7,0 4,1 6,1 6,1 9,0 7,1 7,0 3,1 7,1 8,1 3,1 9,1 9", ",1 5,0 3,1 4,1 7,0 1,0 5,0 2,0 5,0 2,0 2,1 7,0 4,0", " 4,1 9,1 6,1 8,0 2,1 8,1 1,1 9,0 8,1 1,1 1,1 2,1 3", ",0 3,1 6,1 8,1 4,0 8,1 3,1 4,1 8,0 4,0 5,0 1,1 4,0", " 1,1 7,0 4,0 8,0 6,1 3,0 6,0 4,1 6,0 7,0 8,0 8,1 1", ",1 4,0 2,1 2,0 6,1 3,0 5,0 1,1 9,0 5,1 7,0 4,1 1,0", " 2,1 4,0 9,0 9,0 9,0 3,0 6,1 4,0 5,0 7,1 8,0 2,0 7", ",1 5,0 3,0 9,0 5,1 9,0 7,0 2,0 2,1 8,0 9,1 2,0 4,0", " 7,0 2,0 9,1 8,1 8,1 6,0 9,1 4,1 7,0 8,1 3,1 3,0 1", ",1 3,1 8,0 9,1 3,1 8,1 8,0 5,1 9,0 ", "8,1 4,0 2,1 4,1 1,0 8,1 4,1 8,0 2,1 3,1 9,1 1,", "1 1,0 4,0 5,", "1 9,0 9,0 6,0 5,1 6", ",1 7,1 5,1 1,0 7,1 2,1 ", "2", ",0 7,0 8,0 7,0 7,0 5,1 4,0 1,0 6,1 9,0 4,0 5,1 8,1", " 3", ",1 4,0 3,1 2,1 3,0 6,1 3,1 7,0 1,0 9,0 4,0 2,1 4,1", " 6,", "0 2,1 5,1 2,1 4,0 1,1 6,0 5,0 3,1 8,0 7", ",1 7,1 1", ",1 2,0 1,", "0", " ", "2"};
    vector<string> transitions = {"YY", "YY"};
    int minLength = 499281691;
    int maxLength = 998563382;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 285624325;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> songs = {"2 4,2 6,1 ", "8", ",", "1 7"};
    vector<string> transitions = {"YNY", "YYY", "NYY"};
    int minLength = 199281691;
    int maxLength = 996408455;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 392615002;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> songs = {"2 4,2 6,1 8,1 7,2 8", ",", "2 3", ",1 2", ",2 9,1 6,1 ", "8,0 9,0 ", "7,0 6,2 ", "7", ",", "2", " 5"};
    vector<string> transitions = {"YNY", "YYY", "NYY"};
    int minLength = 199281691;
    int maxLength = 996408455;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 373641059;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> songs = {"2 4,2 6,1 8,1 7,2 8,2 3,1 2,2 9,1 6,1 8,0 9,0 7,0 ", "6,2 7,2 5,1 9,0 2,1 2,0 ", "9,2 5,2 4,2 6,0 9,1 2,1 4,1 9,1 1,2 2,2 3,0 5,2 8,", "2 9,0 2,1 2,2", " 8,2 2,0 8,0 7,0 3,0 3,2 6,2 4,0 3,0 2,1 2,0 7,0 5", ",2 6,1 9,2 9,2 9,1 9,0", " 7,1 9,2 5,1 4,2 8,2 3,0 6,2 1,1 3,1 4,1 5,1 7,1 1", ",2 5,2 9,2 7,0 3,0 8,2 1,1 7,0 2,1 5,0 7,2 1,2 1,2", " 2,2 1,0 1,0 1,2 1,1 8,2 3,0 4,1 2,2 8,1 9,0 4,0 5", ",1 1,1 7,0 1,2 6,1 3,1 8,1 7,1 2,2 9,1 9,1 8,1 7,2", " 5,2 8,0 2,0 8,2 3,1 3,2 8,1 4,1 4,1", " 9,2 1,1 3,2 4,1 9,1 3,0 6,1 4,2 2,0 8,0 3,1 9,2 1", ",1 9,2 4,1 2,2 5,0 3,1 5,2 7,2 2,0 2,0 ", "6,2 5,2 8,1 8,1 8,", "1 6,0 8,0 4,2 5,0", " 8,1 6", ",0 4,1 2,0 3,0 3,1 2,1 4,0 4,1", " ", "4", ",1 7,1 3,", "1", " ", "6"};
    vector<string> transitions = {"YNY", "YYY", "NYY"};
    int minLength = 199281691;
    int maxLength = 996408455;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 250286690;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> songs = {"1 9,1 8,1 2,1 3,0 3,1 9,2 7,0 5,2 6,0 2,0 4,2 6,0 ", "3,0 6,2 6,0 4,0 1,0 4,2 4,1 6,1 2,2 7,0 5,0 8,0 4,", "0 3,0 6,2 4,0 5,0 5,1 2,0 3,2 7,1 5,2 5,1 5,1 5,1 ", "1,1 7,2 3,2 4,1 4,0 2,1 5,0 4,2 7,0 5,1 5,2 4,0 5,", "1 6,0 9,0 5,2 9,1 8,0 2,0 6,2 5,2 9,0 2,0 1,2 1,0 ", "5,1", " 2,0 6,2 2,1 5,2 9,0 9,1 3,0 7,2 6,0 2,2 5,0 5,0 2", ",0 2,2 8,1 3,0 9,2 7,2 7,0 9,2 5,2 7,1 6,0 6,1 5,2", " 5,2 6,2 9,2 4,0 2,1 6,2 1,1 7,2 4,1 9,2 8,2 5,1 1", ",1 7,1 4,2 2,0 7,2 2,0 6,1 8,1 1,2 5,", "0 4,0 3,2 4,0 2,1", " 2,2 2,2 6,2 7,0 8,1 3,2 3,2 8,1 2,1 2,0 8,0 9,2 2", ",0 ", "9,2 7,2 4,0 4,1 6,1 7,0 2,2 6,1 4,1 5,2 2,1 7,0 6,", "0 8", ",1 9,2 9,1 9,1 8,0 9,1 5,2 4,2 9,1 4,0 2,2 5,1 6,2", " 4,1 5,2 8,2 2,", "0 4,0 3,1 6,0 2,0 2,2 5,2 3,2 9,0 5,2 8,0 7,2 4,2 ", "8", ",1 3,1 7,0 7,0 ", "3,2 8,0 7,1 1,2 5,2 8,2 6,1 2,0 6,2 6,1 5,1 7,2 2,", "2 3,2 5,1 2,1 1,1 4,2 9,1 4,2 6,1 2,0 4,0 8,0 2,1 ", "9,1 1,0 3,2 7,0 6,0 8,0 ", "1,2 5,0 6,2 ", "1", ",", "1", " 4", ",0", " ", "9"};
    vector<string> transitions = {"YYY", "YYN", "NNY"};
    int minLength = 412;
    int maxLength = 90000000;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 365586158;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> songs = {"2 1,2 5,1 6,2 8,1 9,2 9,0 9,2 7,0 3,0 2,0 8,0 2,2 ", "2", ",2 8", ",2", " 1,2 ", "3,1 9,2 ", "2,1 6,1 ", "5,2 ", "3,", "2 2,2 5,1 4,0 2,2 2,2 6,2 7,", "0 ", "3,", "2", " ", "8"};
    vector<string> transitions = {"YNN", "NYN", "NYY"};
    int minLength = 32;
    int maxLength = 131072;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 395731626;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> songs = {"0 2,2 4,0 3", ",1 5,", "2 7,1 ", "6,0 1,0", " ", "4,", "0 1", ",", "2", " ", "8"};
    vector<string> transitions = {"YYN", "YYY", "NYY"};
    int minLength = 536870912;
    int maxLength = 536870912;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 41800631;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> songs = {"0 7,0 7,", "0 4,0 ", "8", ",2 8,1 ", "4", ",", "1 5,1 7,2 3,1", " 9,", "1 ", "2", ",2 ", "7"};
    vector<string> transitions = {"YYY", "YYY", "YYY"};
    int minLength = 1;
    int maxLength = 1000000000;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 433294630;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> songs = {"0 1,0 1,0 1,1 1,1", " 1,1 1,2 1,2 1,1 3,2 7", ",", "0 ", "4", ",0", " ", "8"};
    vector<string> transitions = {"YYN", "NYY", "NYY"};
    int minLength = 1;
    int maxLength = 1000000000;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 185961704;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> songs = {"0", " ", "5", ",", "1 ", "5,2 ", "9,", "1 ", "4"};
    vector<string> transitions = {"YYN", "NYN", "YNY"};
    int minLength = 13134;
    int maxLength = 57875444;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 191065939;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> songs = {"0 7,0 9,2 6,1 7,1 6,2 1,0 6,1 1,0 9,1 1,", "1", " 1,", "1 ", "3,", "1 ", "4,1 ", "5"};
    vector<string> transitions = {"YYY", "NYN", "NNY"};
    int minLength = 939610661;
    int maxLength = 978388759;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 99007435;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> songs = {"1 8,0 9,0 3,3 6,1 7", ",0 4,3 ", "5", ",2 ", "5"};
    vector<string> transitions = {"YNYN", "NYYN", "NYYN", "NYYY"};
    int minLength = 681287587;
    int maxLength = 851556641;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 538431872;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> songs = {"1", " 8,3 8,2 2,1 7,3 2,3 5,", "1", " 3,2 6,", "0 8", ",", "1 2,0 6,1", " 8,3 6,0 4,0 ", "7", ",2 2,", "0", " 9", ",", "2 ", "3"};
    vector<string> transitions = {"YYYY", "NYYY", "YYYY", "NYYY"};
    int minLength = 384393156;
    int maxLength = 801027619;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 81467452;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> songs = {"0 7,1 2,0 8,1 1,2 4,3 5,1 8,2 6,3 8,2 7,1 4,3 2,2 ", "1,3 2,0 4,1 3,1 2,2 ", "4", ",", "2 5", ",", "1 ", "6,", "1", " ", "3"};
    vector<string> transitions = {"YNNN", "NYYN", "NYYY", "YNNY"};
    int minLength = 815516055;
    int maxLength = 822258170;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 533497008;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> songs = {"1", " 8,0 7,3 4,3 9,0 5,0 4,2 7,3 1,3 3,", "0 8,0 7,2 6,2 4,0 8,2 3,3 ", "9,2 4,", "1 7,1 9,1 5,1 7,1 3,0 ", "4,0 ", "5,2 4,1", " ", "2,3 3,1 5,", "0 7,0 1,2", " 4"};
    vector<string> transitions = {"YYNY", "NYNN", "YYYN", "NNYY"};
    int minLength = 451760352;
    int maxLength = 721819686;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 561986197;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> songs = {"3 8,0 3,3 5,1", " 9,2 1,2 5,3 6,0 9,2 6", ",1 5,1 4,2 ", "7,2 9,0 3,3 5,2 3,0 6,3 7,3 6,1 7,1 ", "5,2 5,0 8,2 2,2 4,3 8,2 1,1 6,1 8,1 4,0 3,2 3,1 1,", "0 4,1 6,3 6,3 7,0 7,1 6,2 5,3 ", "6,2 6,2 5,1 4,3 9,3 4,2 8,3 4,0 3,1 1,1 ", "4,3 5,0 7,1 2,1 4,3 1,0 5,1 7,0 2,1 2,2 9,0 8,2 2,", "3 3,0 5,", "1 5,3 7,1 2,2 4,1 6,2 4,1 7,3 7,2 7,2 4", ",0 4,1 7,2", " ", "9,3 9,2 7,2 6,2 ", "6,1", " 9,2 ", "8,", "1 ", "4,3", " ", "1"};
    vector<string> transitions = {"YYYN", "NYNY", "YYYN", "NYNY"};
    int minLength = 892344058;
    int maxLength = 921394264;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 481916610;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> songs = {"0 6,1 2,0 5,1 3,2 3,0 6,1 4,3 7,3 2,2 6,0 3,3 8,0 ", "8,3 9,3 1,1 5,0 5,0 7,3 6,1 6,3 5,3 4,0 5,0 4,3 9,", "3 6,3 6,2 2,2 3,3 7,2 5,0 1,2 7,0 8,0 2,0 9,1 6,3 ", "4,2 7,3 8,1 9,1 6,0 3,1 1,3 9,2 9,0 2,1 5,3 5,1 9,", "3 4,1 3,3 3,3 2,0 3,2 6,0 3,0 7,0 6,1 5,1 6,1 3,0 ", "2,3 6,0 2,2 8,2 5,3 3,1 9,1 6,3 6,0 4,3 5,3 5,0 8,", "3 1,0 1,0 1,3 5,2 6,2 1,0 6,0 7,1 5,2 7,1 6,3 1,0 ", "1,1 7,2 7,3 2,2 4,3 7,2 1,2 4,0 2,0 9,0 2,0 3,3 7,", "1 7,2 6,1 7,0 8,1 4,1 8,3 9,3 4,1 1,1 3,1 2,2 2,2 ", "3,2 7,0 4,1 1,1 9,1 3,2 1,0 5,1 1,0 4,3 6,2 5,2 9,", "2 6,", "3 1,0 8,2 1,3 3,3 6,3 8,1 5,1 1,2 4,1 3,3 6,1 3,1 ", "6,2 5,0 9,3 7,2 4,1 5,3 1,3 6,2 3,1 7,2 4,0 6,2 3,", "3 6,3 6,1 5,0 8,2 4,0 5,1 5,0 3,0 8,0 8,1 9,0 7,0 ", "6,2 8,3 1,2 4,0 1,0 6,1 9,2 3,0 7,0 9,2 2,1 5,2 2,", "3 6,2 6,3 7,1 3,0 7,0 2,0 3,1 2,0 4,3 1,0 1,", "2 3,3 1,0 6,0 2,1 7,1 3,0 9,2 3,3 2,3 2,2 7,3 7,2 ", "8,1 2,2 4,1 6,3 8,1 7,0 1,1 7,1 3,2 6,3 6,3 7,3 4,", "1 5,1 7,3 4,0 3,3 5,", "1 1,0 9,3 4,3 9,0 2,2 4,2 4,3 5,0 7,1 1,2 8,2 6,0 ", "3,1 9,2 6,1 8,3 2,1 1,2", " 6,0 7,3 4,2 1,2 3,0 2,3 2,3 2,2 4,1 5,3 9,2 1,2 5", ",1 4,2 1,0 9,2 3,0 6,1 2,1 6,2 1,3 2,3 1,1 7,0 1,3", " 5,2 8,1 3,1 9,3 1,1 4,0 4,2 5,0 9,3 6,1 9,0 9,2 7", ",3 7,2 6,3 6,3 2,3 7,1 3,0 1,3 9,2 1,1 3,1 8,1 3,3", " 6,3 5,1 5,0 9,1 5,0 6,2 1,1 1,3 ", "5,1 3,0 4,1", " 7,1 5,0 2,2 2", ",1 9,0 4,0 9,3 9,1 7,1 6,0 ", "4,0 1", ",2 ", "8,0 8,", "1 ", "8", ",", "2", " 4"};
    vector<string> transitions = {"YYNY", "YYYY", "YNYY", "NYNY"};
    int minLength = 233068049;
    int maxLength = 257179170;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 290758344;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> songs = {"0 5,3 8,0 7,1 1,0 9,1 7,1 7,2 9,1 5,2 1,1 1,3 2,3 ", "2,3 1,1 9,1 8,3 2,2 1,2 1,1 7,1 6,0 6,3 6,2 9,2 8,", "3 7,0 7,3 2,0 9,3 5,3 3,0 8,0 1,0 4,3 8,0 6,1 3,2 ", "7,3 6,1 4,3 1,2 2,0 8,0 3,2 4,1 2,1 6,0 6,0 5,0 1,", "2 9,3 2,0 2,2 9,1 4,2 8,2 5,1 8,1 7,0 3,1 1,2 8,3 ", "5,1 3,2 7,3 9,0 5,1 4,3 2,3 3,1 8,1 3,3 8,2 6,2 9,", "0 1,2 9,0 6,1 1,1 1,2 4,1 5,0 7,2 9,3 7,3 3,3 1,3 ", "3,3 7,1 1,1 4,2 1,3 5,0 1,0 9,1 6,2 8,0 5,3 1,0 2,", "2 3,2 5,2 6,3 9,2 6,1 8,2 1,0 8,1 9,1 6,0 9,2 7,0 ", "1,0 3,0 8,0 3,3 4,3 8,3 4,1 7,2 9,0 3,2 2,3 7,3 3,", "0 8,3 5,0 4,0 1,1 5,1 7,1 1,1 4,0 2,0 1,2 1,1 2,3 ", "6,2 6,0 7,3 3,3 3,0 5,3 1,3 2,0 2,1 1,0 7,1 1,0 4,", "0 3,2 2,2 5,1 8,0 6,2 3,2 3,2 7,2 7,1 5,3 9,0 5,2 ", "8,2 3,1 9,0 6,1 4,3 4,0 6,1 8,1 6,0 3,0 1,1 1,1 7,", "3 8,2 2,2 5,0 9,2 5,3 7,2 8,0 2,3 7,3 5,1 6,3 1,2 ", "6,3 7,1 4,2 2,1 8,0 2,0 8,2 6,3 4,2 2,2 2,2 3,0 1,", "2 8,0 5,3 5,1 4,3 2,0 6,1 2,0 9,2 5,0 7,1 4,3 6,2 ", "6,0 3,0 4,2 2,3 7,2 3,0 9,0 7,1 9,3 9,1 1,2 9,1 3,", "2 8,2 1,1 6,2 4,3 5,2 1,3 4,3 6,1 5,2 4,3 6,2 3,1 ", "8,0 8,3 3,1 5,1 7,1 2,1 5,1 6,0 9,2 2,1 5,2 8,0 3,", "0 2,0 7,1 8,3 7,2 8,3 7,0 5,0 9,1 8,0 7,0 7,0 1,2 ", "6,2 4,0 6,1 6,3 7,1 7,2 7,0 5,1 7,1 6,0 1,1 3,2 6,", "1 6,0 8,1 3,3 8,0 5,0 8,1 7,0 7,0 7,1 4,3 6,3 5,1 ", "1,3 9,0 1,3 8,1 4,2 4,3 8,3 3,1 4,2 4,1 2,2 6,3 9,", "1 3,0 1,0 8,0 2,2 3,3 1,3 7,3 6,3 9,2 5,0 9,2 5,0 ", "3,1 7,3 2,3 8,1 5,3 2,2 9,3 6,0 4,0 8,2 8,", "2 9,0 1,0 5,3 2,3 9,2 5,3 6,1 7,3 4,2 2,2 4,1 4,3 ", "5", ",0 4,2 8,0 5,0 1,0 4,1 8,2 4", ",2 9,0 9,2 5,3 8,", "1 6,1 1,3 3,2 2,0 3,1 2,0 6,1 2,0 2,3 1,0 9,1 3,2 ", "3,1 7,2 6,2 9,3 2,3 3,0 9,2 1,1 1,2 9,1 8,3 3,1 7,", "0 5,1 4,2 6,1 4,3 6,3 9,2 7,2 3,0 2,2 9,3 3,2 7,1 ", "9,1 9,2 3,1 8,1 3,1 4,2 3,1 7,1 1,0 5,2 5,2 3,2 9,", "3 2,1 3,2 2,3 7,1 1,3 6,0 2,2 8,1 9,1 6,2 3,2 3,2 ", "7,0 5,0 2,2 7,3 2,2 8,1 7,3 1,3 5,0 2,2 6,0 4,3 6,", "1 2,1 2,3 6,0 6,3 7,0 5,1 1,3 8,3 2,1 3,1 2,3 1,3 ", "4,2 2,3 5,1 4,0 7,2 3,2 3,0 5,0 4,2 1,0 8,2 1,0 6,", "2 8,2 2,2 8,1 6,1 9,2 5,0 8,3 8,0 3,2 1,2 3,0 6,3 ", "9,2 1,3 7,3 8,3 5,0 9,2 3,2 4,0 7,2 3,2 8,3 6,3 4,", "3 1,0 6,1 5,3 7,2 8,2 5,0 2,0 3,3 2,3 6,0 3,2 6,1 ", "1,3 6,0 2,1 6,0 4,3 4,0 2,3 9,3 2,2 3,3 7,2 5,0 4,", "2 9,2 2,1 7,1 6,2 3,1 3,1 2,0 4,0 2,3 2,3 5,2 6,3 ", "1,3 1,1 3,3 9,2 2,2 9,1 4,1 7,2 2,1 7,1 4,3 3,3 2,", "0 2,1 4,2 2,0 2,0 7,3 8,0 9,2 2,0 1,2 4,2 6,2 7,2 ", "8,0 8,1 9,1 6,3 4,0 4,2 8,2 9,3 9,2 7,2 4,1 9,1 3,", "1 3,0 9,3 4,0 6,1 7,3 6,2 6,3 6,3 2,3 6,1 7,1 4,0 ", "7,2 7,2 3,3 9,1 8,2 6,1 6,1 8,3 6,3 8,1 2,3 2,2 5,", "0 7,2 6,3 5,2 1,1 7,0 7,0 2,2 4,0 1,0 6,2 6,0 4,0 ", "3,1 1,3 5,0 9,1 2,2 1,1 5,0 2,3 8,3 1,2 4,2 4,0 9"};
    vector<string> transitions = {"YNYN", "YYYY", "YYYY", "YYNY"};
    int minLength = 146371425;
    int maxLength = 778655693;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 382331643;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> songs = {"1 8,3", " 8,2 2,1 7,3 2,3 5,1 3,2 6,0 8,1 2,0 6,1 8,3 6,0 4", ",0 7,2 2,0 ", "9,2 3,2 1,3 3,0 4,0 9,0 5,0 2,2 4,2 7,1 1,2 6,3 1,", "0 8,0 9,3 5,3 5,2 6,2 5", ",0", " 5,2 6,2 7,3 7,1 6,3 9,1 7,3 5,3 4,1 3,3 5,3 8,0", " 8,0 8,0 8,0 1,1 8,3", " 1,0 2,2 7,2 7,3 2,3 3,1 1,1 8,1 6,1 1,3 9,2 9,2 1", ",1 2,0", " 8,1 8,2 2,2 9,0 2,3 6,2 9,0 6,3 5,2 5,0 4,2 2,0 6", ",1 6,1 9,3 4,2 5,3 4,1 2,1 9,1 2,", "0 7,1 7,2 8,1 6,3 9,3 1,0 6,3 2,3", " 6,2 1,3 1,2 4,3 2,3 1,0 2,0 ", "1,1 4,3 7,3 1,1 2,3 3,2 1,1 5,0 6,3 4,2 5,3 8,1 2,", "0 7", ",1 3,2 2,2 3,3 9,3 2,1 9", ",", "2 ", "6", ",2 7,", "0 ", "1"};
    vector<string> transitions = {"YNYY", "NYYN", "NYYY", "YYYY"};
    int minLength = 419045747;
    int maxLength = 488247460;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 175377571;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> songs = {"2 3,0 8,3 1,3 9,3 1,1 9,2 5", ",3 2,1 4,3 1,3 7,2 5,2 9,3 5,2 5,0 9,0 6", ",3 7,3 8,0 8,0 7,3 5,1 9,3 5,0 ", "6,2 8,2 4,0 8,3 5,2 3,3 2,1 7,3 1,1 6,1 3,2 8,3 7,", "3 1,1 1,2 5,1 1,1 5,1 7,3 5,2 4,3 3,0 4,3 6,0 ", "3,2 7,3 3,0 9,1 7,2 4,1 1,3 2,1 3,2 6,0 3,0 3,2 9,", "0 4,0 7", ",1 6,2 3,0 3,0 9,1 7,3 8,2 6,3 9,2 8,2 8,3 8", ",2 8,1 1,3 4,0 1", ",0 9,1 1,0 1,3 9,3 6,0 2,1 2,1 5,2 8,2 9,2 4,2 7,1", " 3,0 6,1 1,0 5,2 6,3 3,2 6,0 6,3 5,2 4,2 3,3 3,0 1", ",3 6,2 2,2 5,1 8,3 6,1 2,3 2,3 5,0 7,0 7,0 4,0 1,1", " 4,3 5,3", " 1,3 ", "2,2 3,2 7,3 ", "6,2 2,1", " ", "3", ",", "2", " ", "1"};
    vector<string> transitions = {"YNNY", "NYYY", "NYYY", "NYYY"};
    int minLength = 3;
    int maxLength = 694755497;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 203242931;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> songs = {"1 9", ",1 2,1 1,3 3,0 8,0 9,1 6,1 6,4 1,4 3,1 4", ",0 7,", "1 2,4 1,2 3,4", " ", "4,3 1,0 2,4 8,2", " 5,1 9,0", " 2,0", " 3,3 5", ",", "1", " ", "7"};
    vector<string> transitions = {"YYYYN", "YYYNY", "YNYNN", "YNNYN", "NYYYY"};
    int minLength = 791566432;
    int maxLength = 863146010;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 131693138;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> songs = {"3 2,3 ", "5"};
    vector<string> transitions = {"YYNNN", "NYNNY", "YYYNY", "YNNYY", "YNNNY"};
    int minLength = 610918105;
    int maxLength = 836425671;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 443731170;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> songs = {"2", " 8,4", " 8,3 2", ",1 7", ",4 2,3", " ", "5,2 3,3 6,", "0", " 8,", "1 ", "2", ",0 ", "6,1 8", ",", "3 ", "6"};
    vector<string> transitions = {"YYNYY", "NYNYY", "YYYNY", "YYYYY", "NYYYY"};
    int minLength = 676786602;
    int maxLength = 979755720;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 576047587;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> songs = {"2 6,2 3,", "3 1,3 5,4 9,3 5,4 6,0 3,3 3,1 9,1", " 1,0 9,0 1,3 2,2 9,1 8,0 3,1 2,", "0 2,4 8,0 6,4", " 7,3 1,4 2,2", " 1,2 5,0 8,4 7,", "1 ", "7", ",1 ", "4", ",", "3 4", ",", "3", " ", "5,", "3", " ", "5"};
    vector<string> transitions = {"YYYNY", "NYYNY", "YYYNY", "YYNYY", "NYYYY"};
    int minLength = 708064974;
    int maxLength = 773754764;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 237982868;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> songs = {"3 8,0 1,3 3,0 9,2 2,0 5,4 5,3 3,2 9,1 9,0 1,2 6,3 ", "4,3", " 1,1 5,4 1,0 2,2 2,0 3,3 7,3 1,1 8,1 5,4 7,4 5,4 1", ",2 7,4 6,3 2,4 9,1 8,1 9,0 4,1 5,4 4,3 3,2 6,1 7,1", " 2,0 3,3 5,4 6,3 6,0 1,1 8,3 9,4 2,0 3,1 6,1 7,0 4", ",0 4,3 7,4 8,4 8,4 4,4 1,4 4,1 3,4 5,4 4,3 2,0 2,4", " 7,1 7,2 3,0 2,1 8,4 6,3 9,0 9,2 3,4 9,1 7,4 1,1 5", ",", "2 8,1 7,3 6,4 4,4 7,2 2,4 5,0 5,4", " 6,4 6,4 6", ",1", " 6,4 1,4 ", "1,0 4,4 9,2 7,0 9,4 6,1 2,4", " 1,0 ", "7", ",", "2", " ", "9,", "1", " ", "9"};
    vector<string> transitions = {"YYYYY", "YYYYN", "NYYYY", "NNYYN", "YNNYY"};
    int minLength = 93112648;
    int maxLength = 256822221;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 138402019;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> songs = {"2 3,1", " 8,4 1,3 9,4 1,1 9,2 5,4 2,1", " 4,4 1,4 7,2 5,3 9,3 5,3 5,1 9,0 6,4 7,4 8,0 8,0 7", ",4 5,2 9,4 5,0 6,2 8,2 4,1 8,4 5,2 3,4 2,1 7,4 1,2", " 6,2 3,3 8,4 7,4 1,1 1,2 5,2 1,2 5,1 7,3 5,2 4,4 3", ",0 4,3 6,0 3,3 7,4 3,0 9,2 7,3 4,1 1,4 2,1 3,3 6,0", " 3,0 3,3", " 9,0 4,0 7,1 6,3 3,0 3,1 9,2 7,3 8,3 6,3 9,3 8,2 8", ",4 8,3 8,1 1,4 4,0 1,1 9,2 1,0 1,4 9,4 6,0 2,2 2,1", " 5,3 8,3 9,3 4,3 7,1 3,0 6,2 1,1 5,3 6,3 3,2 6,0 6", ",3 5,3 4,3 3,4 3,0 1,4 6,3 2,2 5,1 8,4 6,2 2,4 2,4", " 5,0", " 7,0 7,1 4,0 1,1 4,4 5", ",4 1,3 2,3 3,3 7,4 6,3 2,1 3,2 1", ",4 1,0 7,4 1,1 8,2 3,4 4,0 7,2 4,0 6,3", " 7,3 8,4 9,1 6,0 9,3 6,3 7,1 5,0 1,2 2,1 4,1 5,2 4", ",0 3,0 8,0 1,3 7,0 9,0 6,2 6,2 3,3 4,2 2,0 8,0 8,0", " 5,1 3,4 6,1 6,1 3,2 4,3 1,2 8,4 3,0 4,0 6,0 6,2 6", ",0 9,4 1,3 3,2 6,1 4,2 5,1 8,0 6,", "2 5,2", " 6,4 2,4 3,0 8,2 9,2 9,2 6,3 8,2 6,0 7,3 2", ",2 8,3 7,3", " ", "6,4 7,4 9,", "4", " 7", ",0 5,2", " ", "2"};
    vector<string> transitions = {"YYNYN", "YYNNY", "NYYYY", "YNNYY", "YYNYY"};
    int minLength = 929140389;
    int maxLength = 989139900;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 407883787;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> songs = {"0 7,2 2,0 8,2 1,3 4,5 5,2 8,3 6,5 8,3 7,1 4,5 2,4 ", "1,5 2,0 4,2 3,2 2,4 4,4 5,2 6,1 3,4 9,4 8,0 4,0 1,", "5 3,0 5,2 6,4 4,3 5,3 5,3 9,3 4,2 2,1 2,5 3,1 5,0 ", "6,4 4,0 1,4 ", "1,1 5,5 1,3 4,4 1,1 8,2 9,0 7,4 1,1 8,1 5,0 6,0 1,", "3 5,3 5,0 8,1 4,4 5,3 3,2 4,5 6,1 1,2 9,3 9,5 2,0 ", "6,0 2,3 8,4 1,5 8,5 6,0 2,1 2,3 3,5 6,3 7,5 9,1 2,", "2 6,0 1,3 5,3 7,2 2,3 2,4 1,5 7,3 4,2 1,3 3,5 5,1 ", "1,2 9,5 8,2 7,2 5,2 5,4 3,4 6,4 1,3 8,3 8,3 6,4 4,", "0 4,4 3,0 2,3 5,4 8,1 6,0 1,3 3,4 2,3 1,3 6,2 9,5 ", "1,5 4,", "4 2,4 5,4 3,2 8,4 1,5 4,1 9,5 4,0 8,3 2,4 8,5 1,2 ", "3,4 1,0 7,1 1,2 2,0 3,1 7,5 3,3 9,3 5,4 7,5 4,0 9,", "3 5,0 9,4 1,5 2,0 1,3 2,3 2,4 3,0 1,3 1,0 5,5 1,4 ", "8,5 6,4 5,5 4,2 3,1 7,3 7,1 1,3 4,5 2,4 2,2 8,1 2,", "3 5,1 8,3 1,4 9,3 9,2 3,0 5,5 1,5 3,3 8,2 5,5 7,4 ", "7,2 6,3 6,4 1,1 2,3 7,1 2,4 3,5 9,0 5,1 3,2 5,2 5,", "2 5,4 6,3 2,5 6,5 5,3 2,2 5,5 4,2 5,0 1,4 8,4 1,1 ", "3,2 7,0 8,4 2,2 9,1 2,5 8,4 9,1 6,4 8,0 3,2 7,5 8,", "2 5,2 1,4 2,2 8,5 7,3 2,0 5,5 6,2 5,0 2,0 9,5 4,4 ", "4,5 3,", "4 4,0 4,2 5,1 4,4 4,4 9,2 8,4 9,3 6,5 4,0 9,1 7,1 ", "2,0 4,2 6,0 6", ",1 9,4 1,3", " 7,0 5,1 8,5 3,0 7,0 8,4 5,4 3,1 2,0 3,2 6,2 9,4 1", ",0 8,2 5,1 8,1 8,0 8,0 5,0 8,1 1,4 9,2 4,5 3,5 ", "8,0 8,5 4,2 1,0 6,2 6,1 7,4 4,2 4,1 3,1 1,5 6,5 4,", "1 3,5 3,3 9,4 8,1 1,1 3,0 3,3 1,2 2,", "0 4,3 9,0 8,3 8,5 2,2 4,2 3,0 6,5 2,4 2,1 1,1 8,5 ", "8,4 8,2 6,4 8,4 8,4 2,4 4,0 9,4 5,0 7,5 9,0 9,0 2,", "0 3,3 3,1 2,4 7,3 6,0 2,4 1,0 6,2 4,4 1,4 9,0 5,5 ", "9,2 2,0 7,3 3,0 5,1 5,1 2,4 6,3 5,3 9,0 5,4 1,4 8,", "0 8,4 1,5 3,5 7,5 9,1 4,4 3,2 6,3 5,0 5,0 8,1 3,5 ", "9,0 3,4 7,5 3,3 4,4 ", "4,4 9,5 8,4 5,0 8,2 7,0", " 6,3 7,4 8,3 4,4 4,1 2,2 4,3 1,1 5,2 6,1 3,1 3,4 5", ",5 3,4 5,0 8,4 1,2 6,2 6,1 5,2 4,0 9,4 1,5 3,2 7,2", " 8,3 2,0 1,3 6,3 2,0 6,0", " 8,1 5,3 1,3 3,5 9,4 8,1 9,0 2,1 7,5 8,0 6,2 2,2 7", ",0 4,1 1,4 4,2 9,5 5,0 5,4 4,2 9,2 6,2 2,5 5,5 4,1", " ", "6,4 3,0 1,5 5,1 8,5 8,0 2,1 3,4 1,5 5,1 8,3 2,5 2,", "1 8,5 2,2 6,0 4,2 4,0 3,2 7,3 9,1 9,1 6,4 2,2 8,2 ", "2,0 6,0 3,2 6,4 1,0 6,0 1,1 6,0 5,5 9,5 4,4 5,1 2,", "1 8,2 9,5 8,4 6,1 5,3 5,4 2,1 2,3 4,2 5,", "2 1,4 9,3 4,0 4,2 1,5", " ", "7,4 7,5 2,1 ", "3,1 3,0 6,3 8,3 7,5 7,1 7,4 1,0 8,3 2", ",2 4,0 2,1 8,1 2,5 7,3 5,4 9,0 4,0 2,1 1"};
    vector<string> transitions = {"YYNNNN", "NYYYNN", "NYYYYY", "YYYYYN", "YNYYYY", "NYYYYY"};
    int minLength = 260254443;
    int maxLength = 896311953;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 19580657;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> songs = {"0 7,2 2,0 8,2 1,3 4,5 5,2 8,3 6,5 8,3 7,1 4,5 2,4 ", "1,5 2,0 4,2 3,2 2,4 4,4 5,2 6,1 3,4 9,4 8,0 4,0 1,", "5 3,0 5,2 6,4 4,3 5,3 5,3 9,3 4,2 2,1 2,5 3,1 5,0 ", "6,4 4,0 1,4 1,1 ", "5,5 1,3 4,4 1,1 8,2 9,0 7,4 1,1 8,1 5,0 6,0 1,3 5,", "3 5,0", " 8,1 4,4 5,3 3,2 4,5 6,1 1,2 9,3 9,5 2,0 6,0 2,3 8", ",4 1,5 8,5 6,0 2,1 2,3 3,5 6,3 7,5 9,1 2,2 6,0 1,3", " 5,3 7,2 2,3 2,", "4", " 1,5 7,3 4,2", " 1,3 3,5", " ", "5,1 1,2 9,5 8,2 ", "7,2 5,2 5", ",", "4 3,4 ", "6,", "4 1", ",", "3", " ", "8"};
    vector<string> transitions = {"YYYNNY", "YYYYYN", "NNYNNY", "NNNYNN", "NYYNYY", "YNYYYY"};
    int minLength = 123719156;
    int maxLength = 981497430;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 234910450;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> songs = {"0 7,2 2,0 8,2 1,3 4,5 5,2 8,3 6,5 8,3 7,1 4,5 2,4 ", "1,5", " 2,0 4,2 3,2 2,4 4,4 5,2 6,1 3,4 9,4 8,0 4,0 1,5 3", ",0 5,2 6,4 4,3 5,3 5,3 9,3 4,2 2,1 2,5 3,1 5,0 6,4", " 4,0 1,4 1,", "1 5,5", " ", "1,3 4,4 1,1 8,2 9,0 7,4 1,1 8,1 ", "5,", "0 6,0 1,3 5,3 5,0 8,1 4,4 ", "5,3 3,", "2", " ", "4"};
    vector<string> transitions = {"YYYYYY", "NYNYNN", "YNYYNN", "YNYYYY", "YNNNYN", "YNNNNY"};
    int minLength = 968910039;
    int maxLength = 995703341;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 98447550;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> songs = {"5 ", "9,2 1,2 4,3 8,1 2", ",5", " ", "8,", "0", " ", "2"};
    vector<string> transitions = {"YNYNYY", "YYNYNY", "NNYYYN", "NYYYNN", "NNYYYY", "NYYYNY"};
    int minLength = 682065428;
    int maxLength = 988104109;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 356636820;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> songs = {"4 4,0 4,3 9,1 2,5 5,5 ", "1,1 4,", "3 8,1 ", "2,4 6,", "1", " ", "7"};
    vector<string> transitions = {"YYNYYN", "YYYNNN", "YYYNNY", "NYYYYY", "YYYNYN", "NNNNNY"};
    int minLength = 253803313;
    int maxLength = 458020577;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 447488249;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> songs = {"4 4,0 4,3 9,1 2,5 5,5 1,1 4,3 8,1 2,4 6,1 7,5 5,1 ", "9,3 6,5 6,1 6,1 3,0 6,4 6,1 9,3 4,3 5,4 4,1 3,3 9,", "1 2,1 7,2 7,4 5,4 5,5 6,5 2,2 3,2 3,1 3,2 9,1 3,4 ", "7,0 9,5 8,0 3,3 5,0 9,5 7,4 1,2 3,1 5,0 8,3 3,0 1,", "0 9,4 4,5 5,5 3,4 8,4 3,0 5,1 3,4 5,5 8,1 5,1 3,0 ", "2,5 8,0 5,5 5,1 7,4 1,1 7,1 7,5 1,5 8,4 7,4 5,5 2,", "5 6,0 8,1 1,5 3,5 5,3 1,1 2,0 8,4 6,0 4,1 9,2 7,0 ", "4,3 3,2 9,1 8,4 6,4 2,4 4,0 4,2 7,4 6,3 5,3 5,1 9,", "1 8,5 1,2 6,3 6,2 9,2 5,1 4,0 3,4 7,0 3,2 8,1 3,5 ", "8,5 5,5 8,1 7,", "1 7,4 4,5 8,1 6,3 5,3 6,5 7,1 6,4 ", "4,0 6,5 9,3 3,0 5,4 4,1 4,3 4,0 6,4 8,0 7,0 7,1 3,", "0 8,5 2,1 8,3 9,2 9,1 3,3 4,1 8,0 6,1 2,2 5,4 1,3 ", "9,2 4,3 8,5 9,1 5,3 8,4 9,0 2,5 4,1 8,1 1,1 1,5 6,", "0 9,4 3,2 3,2 2,4 8,5 5,2 5,3 2,0 4,1 9,1 1,3 7,2 ", "6", ",1 3,3 3,1 7,1 7,1 5,5 2,1 5,0 3,5", " 2,5 4,2 4,1 1,0 6,2 9,1 3,5 2,4 9,5 9,5 5,3 3,3 3", ",2 1,4 9,0 9,1 1,0 6,0 7,0 6,5 7,0 3,5 1,2 3", ",4 4,1 3,1 3,2 3,2 ", "9", ",0 9,5 1,3 7,3 1,5 5,2 4,0 5,0 4,5 3,3 9,4 3,2 1,3", " 3,0 2,2 2,4 2,4 ", "6,4 3,5 ", "5", ",", "1 8,", "4", " 8,5 4,5 9,5 7,2 3,5 7,3 ", "2,4 2", ",", "2 8,", "0", " ", "9"};
    vector<string> transitions = {"YNYNNY", "NYYNYY", "NNYNNY", "NYNYNN", "NYYNYY", "NYYYNY"};
    int minLength = 194758475;
    int maxLength = 212172288;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 150545766;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> songs = {"2 4,0 6,3 7,2 3,3 9,2 5", ",0 3,5 8,3 2", ",5 4,4 6,1 7,1 2,2 4,4 3,5 4,0 2,1 7,5 1,1 9,0 9,2", " 8,3 9,4 5,1 3,0 2,2 1,5 4,5 6,1 3,3 6,1 8,3 6,1 1", ",5 8,1 7,0 8,2 ", "9,3 9,0 6,2 7,4 5,2", " 3,0 8,", "1", " 3,2 2,2 6,2 7,3 3,4 3,0", " ", "4,5 3,4 4", ",3", " 7,5 ", "4,", "5", " ", "8"};
    vector<string> transitions = {"YYYYYY", "NYNNYY", "NNYNYN", "NNYYYY", "NYNYYN", "NYYNNY"};
    int minLength = 842165530;
    int maxLength = 851039585;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 119214488;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> songs = {"0 7,3 6,2 2,4 5,0 5,2 7,5 2,3 2,5 1,2 9,1", " 9,4 8,0", " 9,0 9,2 5,4 4,5 5,3 7,1 3,0 3,2 9,0 3,3 6,0 9,3", " 8,1 7,5 ", "1,0 7,0 5,5 6,", "3 1,4 6,0 8,1 9,4 ", "9,2 5,1 3,3 5,3 1", ",", "1 4,", "4", " ", "4", ",2 6,", "5", " ", "6"};
    vector<string> transitions = {"YNYNYY", "YYYYYN", "NYYYYY", "YNNYNN", "YNYNYN", "YNYYYY"};
    int minLength = 610144318;
    int maxLength = 842430643;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 425405736;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> songs = {"3 2,1 3,4 9,4 8,2 8,5 4,2 1,4 4,5 7,1 4,0 5,2 8,4 ", "8,5 4,4 6,5 3,3 2,5 1,3 5,0 1,5 7,1 3", ",2 7,5 4,0 5,1 3,3 2,1 1,4 2,5 6,2 5,0 6,0 8,4 ", "5,0 ", "4,0 3,", "1 9,1 4,5 8,2 6", ",0 5,0 9,1 1,3 9,1 2,4", " 5,2 ", "4,", "1 ", "2", ",", "1", " ", "6"};
    vector<string> transitions = {"YNYYNY", "YYYNNN", "YNYNNY", "YNNYNY", "YYNNYN", "YYNNYY"};
    int minLength = 2;
    int maxLength = 183472456;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 482659252;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> songs = {"5 3,0 6,1 1,0 1,3 6,4 5,4 6,3 2,3 9,1 7,4 8,5 3,3 ", "1,2 8,5 2,0 4,1 4,3 5,0 5,0 4,2 7,1 7,5 1,0 1,2 4,", "2 6,1 3,1 2,2 1,1 7,3 1,5 2,2 1,5 2,3 2,5 8,2 1,3 ", "9,5 3,3 5,1 4,0 5,4 9,1 2,0 6,3 8,2 9,0 6,2 8,1 4,", "2 7,4 9,4 1,0 5,2 9,1 7,3 3,4 6,5 7,1 9,4 8,1 1,3 ", "2,1 6,4 6,0", " 1,2 6,1 1,1 8,5 8,5 2,5 7,4 2,3 3,3 8,3 3,5 3,4 5", ",5 7,2 5,2 2,1 4,3 9,4 5,4 6,1 3,5 1,2 4,3 4,4 2,4", " 3,0 2,2 6,0 5,4 1,4 6,0 9,2 5,3 9,4 4,5 1,5 9,0 2", ",0 1,0 7,0 9,1 2,2 2,1 9,2 7,5 7", ",5 2,0 4,", "1 7,2 4,1 6,5 4,1 7,3 4,3 4,5 5,1 9,1 6,1 ", "8,1 5,", "2 ", "1,2 1,0 6,4 9,4 4,2 1,4 9,1 7,4 8,2 ", "4,0 8,1 8,3 5,4 9,5 5,3 5,3 8,4 9,5 8,2 1,5 9,5 4,", "4 7,", "1 ", "3,0 8,", "5 3,4 9,5 8", ",5 3,3 4,0 1,4 7,4 8,5 4,4 1,0 8,3 9,2 2,0 6,5 3", ",5 4,5 7,3 8,0 9,1 4,1 3,0 9,5 1,5 9,4 4,2 1,5 2,3", " 8,4 8,2 4,1 6,1 4,1 6,1 5,3 8,2 3,4 8,1 7,", "5 6,4 1,4 9,3 4,2 4,1 4", ",5 8,2", " ", "4,1 1,2 ", "2,1 4,", "1", " ", "8"};
    vector<string> transitions = {"YYNYNY", "YYYYNN", "NNYNYY", "YYYYYN", "NYYNYN", "NNYNYY"};
    int minLength = 833503187;
    int maxLength = 841360610;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 39113587;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> songs = {"3 3,0 4,2 4,2 7,2 7,2 5,5 5,2 9,4 7,5 2,4 8,2 3,4 ", "9,5 7,3 9,2 6,4 6,0 ", "9,4 2,5 9,2 6,1 1,5 9,1 7,4 6,4 8,3 7,5 4,1 4,2 4,", "5 6,5 6,4 4,4 5,1 3,1 9,5 9,3 6,3 7,2 7,1 6,4 9,1 ", "5,0 3,0 8,3 1,1 3,2 3,0 4,2 1,0 3,5 3,0 3,0 1,3 7,", "0 6,5 9,1 2,", "0 7,0 3,4 2,5 2,3 3,0 1,0 2,0 3,5 7,1 6,1 1,3 9,4 ", "5,1 1,3 6,4 9", ",3 4,2 4,0 5,2 6,2 9,5 3,1 4,3 5,2 1,0 6,2 1,1 2,1", " 1,0 7,5 2,0 6,3 9,0 6,2 6,5 9,1 7,0 9,1 1,0 1,3 1", ",2 4,1 6,5 7,0 3,1 8,5 2,5 1,5 2,2 4,4 2,2 7,5 4,3", " 5,5 8,1 1,1 5,0 5,2 7,3 3,4 2,3 9,0 9,2 7,5 1,0 2", ",3 6,5 6,0 7,4 7,2 1,5 5,0 2,3 3,3 3,3 1,5 2,0 5,1", " 5,5 1,1 8,3 3,5 1,0 6,5 4,2 9,2 9,1 7,1 8,0 8,3 9", ",1 4,2 3,5 3,3 9,1 4,5 9,0 7,4 7,0 4,2 1,0 5,1 8,4", " 5,1 4,5 1,4 1,4 1,4 2,0 2,4 3,0 4,4 1,5 4,1 2,3 8", ",1 7,4 2,5 9,3 8,2 5,4 3,", "2 7,5 4,4 6,1 7,4 4,3 1,3 7,5 4,2 9,5 7,5 5,4 7,2 ", "8,0 3,1 8,0 9,1 9,1 1,2 1,1 3,2 3,0 9,4 8,3 8,1 2,", "3 9,1 1,4 3,0 2,2 4,4 2,4 8,1 6,0 9,4 3,4 2,5 5,2 ", "1,4 6,1 7,4 1,5 9,4 5,3 2,4 3,0 9,3 1,5 7,2 2,3 3,", "5 3,4 2,2 5,5 6,0 2,3 3,4 9,3 4,1 1,0 7,5 8,5 2,1 ", "8,0 1,2 1,1 3,3 8,2 2,0 1,4 3,4 6,4 4,1 8,3 6,0 8,", "5 9,1 8,4 8,0 2,3 6,2 3,5 2,5 9,0 9,3 1,3 3,5 1,5 ", "2,4 1,3 6,1 2,0 7,0 1,2 7,2 5,3 7,2 4,0 6,4 9,3 5,", "5 5,3 3,2 4,2 1,0 7,4 5,5 9,0 4,4 6,5 3,5 8,4 7,5 ", "2,5 3,1 6,4 1,3 5,0 2,1 7,1 6,4 7,4 2,2 7,2 6,4 3,", "2 8,1 2,5 9,0 8,4 5,2 4,2 4,5 3,3 6,3 8,3 7,3 4,1 ", "4,3 5,3 6,1 9,1 4,2 4,1 3,3 8,4 6,3 6,3 6,0 4,2 7,", "1", " 8,2 9,0 9,5 2,5 3", ",1 4,1 7,3 4,0 ", "3,3 6,0 7,0 2,5 7,1 8,2 6,5 9,0 6,0 6,0 4,4 4,0 7,", "5 1", ",0 2,3 6,1 2,4 6,4 3,3 2,4 9,2 7,3 8,0 5,1 8,4 3,3", " 5,3 4,2 2,0 4", ",2 5,3 2,1 5,4 9,4 1,1 1,2 1,1 9,3 9,1 ", "2,3 8,4 5,1 3,5 ", "5,3 ", "1,5 5,5 6,4 3,0 4,3 3,2 3,5 6,4 7,1 6,4 9,2 7,2 1,", "1 9,1 4,5 ", "7", ",", "3", " ", "4", ",1", " ", "4"};
    vector<string> transitions = {"YNYNYN", "YYYYNN", "YNYYYY", "YNNYYY", "NNYNYN", "YNNYYY"};
    int minLength = 769852937;
    int maxLength = 999269703;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 40948973;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> songs = {"0 2,2 3,2 7,6 5,0 3,5 9,6 1,3 1,0 8,3 5,5 5,1 2,6 ", "8,4 3,0 2,0 5,4 3,2 6,5 3,1 9,0 2,4 3,2 3,4 7,2 3,", "0 7,5 8,2 5,5 1,4 1,6 7,1 2,0 4,6 8,0 9,3 3,0 6,2 ", "6,0 4,1 7,6 3,3 8,4 4,2 4,2 9,1 7,5 3,3 7,4 7,0 3,", "5 5,2 4,5 4,6 6,4 5,4 7,0 4,4 9,5 1,0 1,5 2,3 9,6 ", "1,5 4,4 2,5 5,6 8,5 1,4 5,5 1,2 6,6 1,6 2,1 7,2 9,", "5 2,3 9,3 9,0 2,0 4,2 8,2 5,3 5,4 6,3 6,1 2,0 5,2 ", "1,1 6,0 3,2 9,5 8,0 2,1 8,4 5,1 2,2 2,6 4,6 2,4 5,", "2 6,5 3,0 3,4 9,1 3,1 7,4 4,2 9,0 2,4 8,4 2,1 8,1 ", "7,3 6,0 3,6 5,1 2,3 4,3 5,3 2,0 3,6 9,6 5,0 9,0 4,", "6 2,5 4,6 6,2 1,5 8,0 4,0 9,2 2,6 8,2 6,2 4,4 1,3 ", "8,2 6,3 5,4 1,0 9,6 1,1 6,0 4,0 7,0 1,0 9,2 7,3 3,", "0 5,3 6,6 9,3 9,0 5,1 8,4 6,3 9,4 6,4 2,0 5,6 9,0 ", "9,0 3,1 6,5 1,6 2,0 5,1 1,1 3,6 3,1 6,3 9,4 6,1 1,", "2 7,2 1,3 3,2 1,6 8,4 5,4 2,5 2,6 9,2 7,2 8,4 6,4 ", "8,4 2,0 6,0 4,6 5,1 9,4 7,2 8,1 4,6 2,4 4,5 6,6 9,", "5 3,5 7,3 5,0 7,1 9,5 7,2 1,3 5,5 6,5 9,3 1,4 1,5 ", "5,6 4,6 2,5 7,5 3,6 4,4 6,1 3,5 6,3 7,1 8,3 7,2 2,", "2 4,2 9,5 2,4 1,1 3,4 5,5 2,3 7,4 4,6 3,0 3,0 4,4 ", "4,2 9,3 8,3 2,3 8,4 8,5 5,5 8,3 5,4 5,4 4,2 7,1 2,", "5 6,4 1,3 5,4 4,1 7,6 5,1 5,6 3,4 4,1 7,0 9,6 1,3 ", "5,3 9,1 4,4 6,5 3,5 6,0 5,2 7,5 7,5 3,2 7,1 7,2 1,", "2 2,4 6,1 2,5 8,3 9,3 4,5 1,6 2,3 9,4 7,5 7,3 8,1 ", "7,1 7,3 4,4 6,5 4,3 2,2 3,1 2,6 4,2 5,2 3,3 8,4 2,", "3 9,2 6,1 5,6 6,5 9,2 1,0 4,6 8,2 3,6 1,4 2,3 7,2 ", "7,3 6,0 4,5 3,0 9,4 6,6 6,3 6,6 3,6 7,0 8,1 1,5 7,", "2 3,5 5,3 9,2 8,0 9,3 5,5 2,6 5,3 9,6 4,4 8,0 4,1 ", "6,0 3,4 7,2 5,1 7,6 2,6 5,4 7,6 6,1 5,5 7,2 1,6 5,", "3 4,0 6,3 2,4 1,4 7,5 7,3 2,3 9,1 1,4 3,1 8,5 9,3 ", "2,3 2,6 1,5 7,6 9,5 4,6 4,5 2,5 2,3 4,0 8,6 9,5 1,", "2 7,6 2,4 5,5 7,0 2,6 3,2 7,0 1,5 7,2 2,0 9,1 5,2 ", "6,2 3,3 9,4 4,3 3,5 2,5 1,0 1,3 6,6 6,0 3,6 1,2 5,", "2 6,4 4,0 1,5 6,5 8,4 1,2 5,0 2,0 8,6 5,4 2,0 4,1 ", "4,4 8,4 4,2 7,0 9,4 4,0 2,0 6,4 3,2 2,5 9,6 7,5 9,", "4 6,3 1,0 9,5 5,4 8,1 3,3 7,1 4,0 1,3 2,2 9,4 5,5 ", "8,0 8,0 5,3 4,4 5,3 6,4 2,6 9,5 3,3 6,2 5,6 1,1 6,", "5 7,1 8,4 7,5 2,3 6,4 8,3 8,0 5,2 6,1 5,6 8,5 8,5 ", "5,4 4,0 1,4 7,4 9,5 3,1 2,2 7,6 2,3 6,5 1,0 9,1 5,", "1 5,4 7,4 4,1 2,4 7,4 8,1 1,4 5,4 1,0 3,1 9,6 3,2 ", "4,1 2,0 7,5 8,6 3,0 7,3 9,0 6,6 1,1 7,0 8,6 5,0 8,", "0 1,6 7,5 3,6 9,6 6,1 4,5 9,1 9,5 9,4 3,2 7,6 3,1 ", "1,4 9,6 4,3 2,2 3,5 7,6 6,4 4,3 3,1 2,4 9,4 9,2 7,", "6 9,3 5,1 7,5 2,4 9,1 2,5 3,6 7,5 3,4 6,0 1,5 6,1 ", "2,2 9,6 2,3 1,4 4,1 5,4 9,1 9,4 7,5 1,6 5,4 9,2 4,", "3 6,2 6,1 3,2 4,3 9,6 2,0 6,4 8,6 2,1 1,5 4,3 2,5 ", "6,2 4,3 4,0 2,0 1,2 9,0 7,1 2,0 3,3 1,3 2,1 6,2 3,", "0 9,6 8,1 4,4 9,3 9,2 3,6 8,3 4,0 8,6 7,5 5,1 2,6 ", "8,5 9,3 7,0 5,0 3,2 7,1 9,4 9,5 1,6 4,5 2,4 7,3 9,", "4 5,0 4,0 1,0 6,5 8,5 9,0 4,1 4,0 4,3 5,5 3,3 2,5 ", "3,2 4,5 4,0 5,1 7,6 4,4 4,4 9,0 7,0 2,5 2,6 9,6 3"};
    vector<string> transitions = {"YYNYNYY", "YYNYYNY", "NNYYYNY", "NNNYNYY", "NYYNYYN", "NYNYNYN", "NNNYYNY"};
    int minLength = 853966177;
    int maxLength = 958403074;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 473841490;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> songs = {"4 4,2 4,5 4,4 2,5 3,4 9,2 1,5 3,5 7,6 2,1 9,6 4,2 ", "4,4 5,2 3,1 3,2 8,1 2,2 7,5 6,0 2,6 3,5 7,2 4,2 8,", "4 2,4 3,6 1,2 6,2 2,1 2,4 5,4 5,6 6,4 2,3 4,4 2,0 ", "8,6 5,4 5,2 2,4 4,5 9,0 5,4 5,2 9,5 3,3 8,2 9,3 7,", "3 1,1 2,1 9,2 3,6 7,0 9,0 7,5 7,3 5,5 1,0 4,1 5,5 ", "4,4 9,5 4,5 7,4 2,5 7,3 5,0 4,1 3,5 1,5 9,2 2,3 8,", "2 1,4 2,0 5,3 6,1 4,6 2,1 5,4 4,1 8,0 8,5 7,1 4,0 ", "9,5 5,2 5,3 4,2 3,6 5,4 7,4 2,6 4,2 6,5 5,4 4,1 1,", "4 3,5 2,1 3,0 8,1 8,5 8,1 8,1 5,4 7,1 8,2 3,2 2,5 ", "2,1 9,1 5,6 2,3 7,3 3,5 6,0 5,3 2,3 8,5 6,6 1,2 6,", "1 2,5 5,2 4,6 8,3 9,0 2,4 6,3 2,0 9,0 8,4 2,3 7,2 ", "2,3 4,0 5,2 7,3 6,4 5,5 1,5 2,2 8,4 6,5 4,1 3,1 5,", "6 1,5 3,2 6,3 6,6 8,4 6,3 2,0 4,1 3,5 9,1 4,1 7,2 ", "5,0 2,6 6,4 1,4 6,6 6,4 8,1 3,3 2,6 9,1 8,5 8,3 4,", "3 8,0 8,3 9,3 2,1 3,5 9,0 6,6 8,0 6,5 1,4 7,5 3,2 ", "9,2 2,4 1,4 2,1 1,6 7,6 3,1 3,3 5,0 1,4 4,0 3,3 9,", "2 7,1 6,0 2,0 7,6 6,6 7,0 2,4 3,1 6,0 4,3 4,4 4,0 ", "7,3 7,2 2,5 9,6 4,0 1,4 2,3 7,6 6,2 3,2 2,2 7,2 7,", "1 2,6 9,6 2,0 3,5 7,6 9,4 8,0 4,6 7,6 1,5 4,6 6,3 ", "3,0 1,6 9,2 3,5 9,4 1,3 2,2 6,1 7,2 5,6 4,3 6,4 8,", "4 4,4 9,2 6,4 9,6 3,6 5,1 4,1 9,3 1,2 7,0 9,2 7,3 ", "7,1 2,5 9,2 7,2 4,2 4,1 2,5 6,1 5,3 6,4 2,5 6,6 3,", "5 4,3 3,0 3,4 7,4 7,5 5,3 3,3 5,2 1,1 9,5 8,6 1,2 ", "3,6 9,1 1,2 1,6 9,4 9,3 2,5 7,2 7,5 4,4 1,3 2,4 5,", "4 4,6 7,5 4,4 6,5 7,4 6,6 7,0 4,1 6,2 6,1 3,5 1,2 ", "1,5 6,5 9,5 9,6 8,2 4,2 9,2 3,0 1,3 8,4 7,0 7,4 1,", "3 8,0 3,2 2,0 7,0 5,4 6,6 5,3 6,1 5,1 3,2 6,3 2,4 ", "7,2 3,4 1,5 3,5 4,5 9,0 5,0 5,3 7,4 4,3 8,6 4,3 6,", "0 8,0 1,5 9,4 9,6 2,1 9,2 1,2 4,0 7,3 6,5 2,6 3,2 ", "7,6 7,0 5,1 2,5 3,2 4,6 4,6 2,3 2,0 3,3 8,6 4,5 7,", "1 5,0 1,2 9,0 2,1 2,2 3,6 9,4 1,3 1,1 6,0 5,0 8,0 ", "3,1 6,5 4,3 6,4 5,1 7,2 8,0 2,2 8,6 2,2 6,0 2,1 7,", "0 2,6 8,0 3,5 6,3 2,2 9,5 4,4 8,4 6,0 9,2 8,6 2,6 ", "2,1 5,0 4,4 7,3 5,6 2,0 1,1 8,6 9,5 6,6 3,6 5,6 6,", "6 1,1 9,1 6,4 3,6 9,2 8,6 7,3 6,1 2,6 8,4 7,4 8,1 ", "2,5 2,3 6,1 1,6 9,5 5,0 1,4 7,1 4,3 1,5 2,1 3,1 5,", "3 1,0 3,3 8,4 1,6 6,6 5,2 5,2 8,3 4,1 4,5 2,4 4,2 ", "5,5 9,5 8,4 9,4 2,0 1,2 5,4 3,6 3,1 4,6 3,1 5,0 3,", "4 4,2 2,4 6,3 7,3 6,4 1,5 6,0 1,3 5,5 5,1 6,0 1,6 ", "6,0 8,2 9,3 9,3 7,6 8,1 8,5 1,4 1,6 2,3 6,2 5,6 6,", "0 3,1 1,6 5,5 4,1 3,5 4,2 2,4 2,0 6,2 2,4 7,1 6,4 ", "9,6 8,2 2,2 7,4 2,1 9,4 4,1 3,0 1,2 2,3 7,0 6,2 3,", "2 5,4 8,3 7,1 5,4 1,4 9,6 6,2 4,5 6,5 5,2 6,5 1,1 ", "9,0 8,4 6,5 1,5 3,0 2,5 8,0 8,0 4,6 9,2 8,4 6,5 8,", "3 8,1 8,5 9,4 9,5 7,4 3,5 9,5 6,0 1,4 6,0 3,3 7,6 ", "3,1 8,4 8,6 2,1 7,6 1,5 2,0 9,4 6,3 8,4 8,1 6,1 1,", "4 1,5 7,0 4,1 4,2 7,5 1,5 2,0 1,5 9,0 1,5 9,1 2,0 ", "3,2 5,0 5,0 9,2 5,6 7,2 8,4 2,1 6,1 5,1 6,6 5,6 1,", "0 9,2 4,5 9,6 8,6 3,5 8,4 6,1 8,2 9,4 8,6 9,6 5,2 ", "8,3 2,2 2,2 7,3 1,0 1,0 4,6 7,3 6,6 1,3 1,4 8,0 1"};
    vector<string> transitions = {"YYYYYNN", "NYYYNYN", "YNYNNNN", "YYYYYYY", "YNYNYNN", "NNNNYYN", "YYYNYNY"};
    int minLength = 915905536;
    int maxLength = 968260244;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 23062147;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> songs = {"1 5,", "5 2,0 7,3 2,1 8,6 6,4 4,0 1,3 8,4 2,4 6,6 4,4 9,6 ", "7,4 2,4 5,0 6,4 6,3 2,6 2,0 9,5 5,5 6,0 7,1 1,2 9,", "4 1,3 2,1 4,4 7,1 4,4 9,6 1,6 4,0 3,0 6,1 6,0 4,1 ", "7,2 9,0 9,1 8,6 6,1 8,0 4,0 6,6 5,4 8,1 9,4 2,3 4,", "3 1,1 9,1 4,2", " 2,4 5,5 9,6 4,4 5,3 3,3 6,2 2,4 2,4 6,2", " 5,0 6,2 3,3 3,2 1,3 8,3 8,5 1,1 1,5 1,6 4,3 2,1 8", ",1 7,3 7,5 6,1 1,4 8,0 9,4 2,4 4,5 6,5 4,4 8,2 4,2", " 6,3 5,1 8,3 4,4 3,2 9,3 2,6 1,0 8,0 7,1 6,4 6,2 7", ",5 6,4 3,1 5,3 8,3 5,0 7,1 8,6 4,0 8,3 5,4 9,0 7,3", " 9,1 6,3 3,3 1,1 5,3 7,2 1,1 8,0 9,0 5,4 7,1 2,0 3", ",5 2,3 2,6 7,3 4,1 6,2 3,5 9,6 3,3 1,1 4,5 4,3 8,1", " 4,1 6,1 7,3 5,6 2,3 3,2 5,5 ", "8,6 3,3 5,3 7,4 6,5 2,4 7,0 6,3 4,2 5,3 6", ",1 2,3 ", "2,5 5,6 8,6 6,2 3,5 5,5 5,1 3,6 5,1 4,6 9,0 7,6 1,", "5 4,0 5,3 8,2 4", ",1 6,6 6,3 7,3 6,0 9,1 1,4", " 8,5 3,0 2,6 2,0 8,", "5 8,1 3,2 2,1 4,0 8,3 3,4", " 8,4 1,2 3,4 6,1 8,0 4,5 4,2 9,0 1,6 1,3 1,1 4,1 7", ",", "5 5,3 5,3 5,4 2,5 5,1 3,1 6,0 8,4", " 7"};
    vector<string> transitions = {"YYYYYYN", "YYNYYNY", "NYYYYNY", "NYNYYNN", "YYYYYYY", "YNNNNYY", "NYYNYYY"};
    int minLength = 827300609;
    int maxLength = 899031098;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 80759387;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> songs = {"0 5,3 2,3 2,6 6,2 7,0 3,3 4,0 6,6 9,2 3,2 2,5 7,2 ", "8,0 8,0 2,0 1,5 5,2 1,4 9,6 7,3 1,3 3,5 5,2 3,6 7,", "6 7,4 1,1 6,3 3,2 7,1 7,4 2,2 7,2 6,6 4,2 6,5 4,0 ", "4,1 3,5 6,0 6,1 1,0 8,6 4,5 1,4 8,4 3,1 5,3 2,5 5,", "6 3,3 2,6 3,0 4,6 9,4 5,5 9,", "4 2,1 3,1 4,0 4,0 6,6 7,3 4,5 3,0 8,0 5,", "6 7,1 3,4 1,3 5,1 6,1 8,2 ", "9,4 1,0 3,5 2,4 6,6 6,6 8,5 9,2 9,2 1,3 4,3 6,6 9,", "3 2,2 7,6 7,0 4,1 5,6 4,5 6,4 3,2 8,5 7,3 8,5 9,5 ", "3,2 8,0 7,3 9,5 3,5 5,0 7,2 6,6 9,6 2,4 3", ",1 4,4 9,6 1,6 4,0 7,5 7,0 4,0 1,2 5,4 2,1 4,4 9,5", " 8,1 4", ",4 7,5 4,5 8,6 7,5 1,1 5,5 1,6 4,0 4,2 4,0 8,0 8,2", " 8,0 5,3 8,0 6,2 1,1 4,0 6,2 3,4 5,0 9,3", " 3,6 9,4 7,3", " 7,1 7,1 3,3 3,6 8,0 4,4 2,5 2,1 9,4 5,4 4,4", " 2,5 4,5 3,1 5,1", " 7,", "6 5,", "1", " 4,5", " ", "9"};
    vector<string> transitions = {"YYNYNYY", "YYNYNYN", "NNYYYYY", "YYNYYNN", "NYNYYYN", "NNYYYYY", "NNNNYYY"};
    int minLength = 664048374;
    int maxLength = 740241129;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 572082663;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> songs = {"0 7,3 ", "3,1 7,6 7,3 4,3 2,0 6,5 2,1 8,0 7,3 2,5 ", "5,6 3,1 6,6 3,3 8,1 1,2 1,2 5,4 9,4 6,3 4,1 ", "9,3 7,1 3,0 9,1 7,4 4,6 8,5 1,6 6,1", " 6,6 9,4 9,0 3,5 2,0 1,5 2,4 7,0 3,0 5,2 9,1 1,5 4", ",1 3,1 ", "2,0 2,1 7,1 9,2 3,3 ", "4,3 6,6 3,5", " 8", ",1 5,4 2,1", " 5,2 5,0 6,6 6,3 ", "7,", "4 ", "4"};
    vector<string> transitions = {"YYYYNYY", "YYNYNNY", "NNYNNYN", "YNNYNYN", "NYYNYYY", "NYNYYYN", "NNYYYNY"};
    int minLength = 109513224;
    int maxLength = 395786573;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 166136287;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> songs = {"5 4,5 7,3 5,2 ", "2,2 8,6 5,2 2,6 8,", "1", " 8,1 7,4 8,1 2,5 9,0 1,6 2", ",1 7,1 ", "7,6 5,2 2,3 9,1 3,1 6,3 ", "7", ",3 ", "3,", "1 ", "3"};
    vector<string> transitions = {"YNYNYYN", "NYYYNYN", "NNYNYYN", "YNNYNNN", "NNYYYYN", "YNYYNYN", "YYNYYNY"};
    int minLength = 701798499;
    int maxLength = 920329181;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 475536841;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> songs = {"0 1,", "6", " ", "3"};
    vector<string> transitions = {"YNNNYYNY", "NYYYNYNY", "YYYNYYNY", "YYNYNNNN", "NYYYYYYY", "YYNYYYNY", "NYYNYYYY", "NNYYNYYY"};
    int minLength = 826293290;
    int maxLength = 983030976;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 208983583;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> songs = {"4", " 8", ",", "4", " 4", ",", "6 6"};
    vector<string> transitions = {"YYYNYYNY", "NYYYYNYY", "YNYNNYYN", "YYNYNYNN", "NYYYYYYN", "YNNYNYNY", "NYYYYNYN", "NYNYYYYY"};
    int minLength = 830210984;
    int maxLength = 941171651;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 506277850;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> songs = {"2 7,0 1,1 4,2 1,4 4,3 9,6 9,5 4", ",5 5,6 6,6 ", "9,6 1,4 6,3 6,3 4,2 7,6 9,7 6,", "5", " 8,1 7,4 3,3 7,7 1,7 9,6 5,5 4,0 9,0 7,1 7,4 9,3 5", ",5 7,6 7,6 1,6 1,4 7,0 8,3 5,3 3,3 4,7 6,2 1", ",0 4,0", " 1,", "2 2", ",4 9,2", " ", "1", ",", "4", " ", "4"};
    vector<string> transitions = {"YNYYNNNN", "YYYYNNYY", "NNYNNYNY", "NYYYNNYY", "NNYNYNYN", "NNYNNYNN", "YYYNYYYN", "NNNNYYYY"};
    int minLength = 14775501;
    int maxLength = 876996037;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 80811668;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> songs = {"1 2,3 4,7 3,3 1,4 8,4 3,0 4,4 4,2 2,3 4,1 ", "6,4 4,3 8,7 8,4 2,7 7,6 5,7 2,0 6,5 2,3 8,1 3,2 6,", "4 2,4 9,2 7,7 1,0 9,1 9,1 7,4 1,3 1,1 9,7 7,7 5,5 ", "5,1 5,7 4,5 8,6 8,4 9,7 9,2 9,5 9,0 6,2 1,0 8,6 2,", "5 5,4 7,2 5,0 7,6 8,0 4,7 8,0 9,0 7,5 9,4 9,3 4,3 ", "2,5 3,5 8,0 6,4 5,3 5,7 1,0 1,5 8,0 9,4 9,0 5,3 5,", "2 9,0 1,7 9,5 3,3 1,0 6,4 9,3 1,3 2,1 7,1 9,7 2,7 ", "1,3 5,3 1,4 7,2 9,1 8,6 2,1 1,0 8,4 6,4 4,7 6,7 2,", "6 8,0 7,1 5,1 9,0 9,6 7,2 1,0 8,6 4,3 6,4 3,3 8,0 ", "3,0 1,0", " 6,5 7,7 9,1 4,2 2,4 8,0 5,7 8,", "4 3,4 3,5 7,2 6,2 9,3 5,4 1,5 5,5 9,7 1,1 4,0 5,2 ", "3,5 4,0 7,0 5,6 9,4 8,5 4,4 2,7 6,6 8,6 6,7 9,2 6,", "0 9,7 5,4 6,5 6,7 8,4 1,5 8,3 1,6 6,3 5,5 2,0 1,4 ", "1,5 8,6 9,0 6,5 7,5 3,1 9,5 7,2 6,2 3,0 4,5 1,5 9,", "6 7,7 4,3 7,2 7,6 7,3 1", ",2 5,6 5,5 7,5 4,3 5,3 1,4 6,3 7,1 1,5 1,2 7,4 9,1", " 6,6 4,2 6,2 3,1 5,2 1,4 5,7 1,0 1,1 9,5 4,4 8,1 3", ",6 5,3 4,0 5,3 1,5 3,4 8,3 3,1 2,0 1,4 6,5 9,2 7,5", " 9,4 7,1 9,0 9,4 3,5 9,1 4,2 5,0 8,0 3,0 9,0 4,0 9", ",6 6,0 1,4 9,1 4,0 4,6 7,7 8,4 1,6 9,2 5,6 9,5 9,4", " 1,1 8,6 9,3 3,0 8,2 5,3 8,5 1,6 3,7 1,1 2,5 6,0 1", ",6 4,7 5,7 1,4 5,3 1,7 2,3 1,5 1,4 2,4 9,6 4,4 9,7", " 3,6 1,3 9,0 9,6 4,7 2,1 2,4 1,2 7,4 9,7 6,4 7,0 6", ",1 3,7 3,2 8,1 2,2 9,4 8,7 7,6 1,7 3,4 6,4 2,3 5,4", " 6,7 2,4 4,0 5,7 6,6 2,1 2,1 1,2 7,1 6,3 3,1 1,2 5", ",1 8,0 5,2 4,5 1,3 7,2 6,6 6,6 4,1 1,4 1,6 4,7 2,6", " 8,0 9,3 6,6 7,6 6,3 3,5 8,0 8,7 4,5 3,4 2,4 7,6 2", ",5 5,0 8,1 5,2 7,6 2", ",", "5 1,6 9,7 7,3 3,5 3,7 8,6 4,4 1,3 9,7 7,4 2,4 7,4 ", "2,2 8,7 8,4 6,1 4,4 6,0 3,1 1,5 ", "4,0 5,1 5,0 7,0 7,5 6,0 3,3 6,3 4,6 2,2 9,3 7,3 4,", "6 9,2 4,3 7,6 1,7 6,7 6,4", " 7,4", " 5", ",1 8,4 7,0 2,6 5,4 4,1 9,2 2,2 1,3 4,5 9,6 6,", "6 8,3 1,2 7,", "5 3,7 1,6 7,1 8,1 2,2 ", "7,1 3,7 4,3 8,7 3,0 4,2 5,5 5,1 4,0 7,3 7,6 4,4 9,", "4 8,0 1,4 3,0 5,0 7,2 9,0 7,7 4,7 9,6 7,3 7,6 4,4 ", "6,5 5,0 3,2 2,6 6,3 8,6 8,0 6,5 7,2 6,4 2,4 7,7 8,", "0 7,3 3,0 7,1 5,3 4,2 1,6 8,6 4,7 8,0 4,2 4,4 8,6 ", "7,3 2,0 6,7 7,0 1,2 3,6", " ", "5,4 4,1 4,5 8,2 2,5 6,0 3,1 8,7 ", "8,1 7,0 ", "5,4 ", "2,1", " 2,4 3,0 4,3 8,6 4,4 9,6 2,1 7,2 2"};
    vector<string> transitions = {"YYYYNNYY", "NYNNNNNN", "YNYNYNYN", "NNNYNNNY", "YYNYYNNY", "YNYNYYYN", "YNYYYNYY", "YYNYNYNY"};
    int minLength = 73922772;
    int maxLength = 872597822;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 533628164;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> songs = {"7 3,6 7,0 6,0 3,0 1,", "6 2,0 6,6 8,0 2,1 2,6 6,5", " 4,5 1", ",3 4,7 1,2 1,3 4,7 5", ",1 3,3 4", ",7 7,5 2,7 6,0 9,3 5,7 8,6 4,7 3,4 8,2 5,3", " 1,3 6,0 9,7 7,4 ", "2,5 1,5 8,7 5,6 3,6 6,7 4,6 6,2 4,0 3,5 5,7 1", ",", "3 8,7", " 8,5 4,", "1", " ", "9"};
    vector<string> transitions = {"YNNYYNNN", "YYNNYYYN", "YNYYNYYY", "NYNYNYNN", "NYYNYNYN", "NNYNYYNY", "YNYYNYYY", "NYYNYNNY"};
    int minLength = 37313816;
    int maxLength = 552553503;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 580127013;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> songs = {"4 8,1 9,0 3,8 6,4 7,0 4,8 5,6 5,5 9,7 7,0 6,", "6 8,8 1,2 1,7 3,0 6,5 4,0 8,6 5,1 7,5 9,6 5,4 1,3 ", "4,7 8,0 7,3 9,0 9,0 5,4 9,5 1,1 9,0 7,5", " 6,7 2,", "5 ", "7,", "0 ", "6,4 5,8 4,6 9,", "5", " ", "2"};
    vector<string> transitions = {"YYNYNNNNN", "YYYNNNYYY", "YYYNNNYNY", "NNNYYNYYY", "NYYNYYNNY", "YYYNNYYNY", "YYNYYYYNN", "NYNYYNYYN", "NNNYNNNYY"};
    int minLength = 904182971;
    int maxLength = 940594817;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 130497303;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> songs = {"5 3,4 6,7 8,1 9,5 7,5 7,1 4,7 2,7 7,6 2,3 4,0 4,6 ", "6,5 7,5 9,2 9,5 6,6 1,4 8,7 1,5 9,5 4,", "5 9,1 8,", "5 4,6 6,6 2,6 3,3 6,4 7,2 5,1 8,3 7,4 3,2 7", ",3 9,1 3,3 9,2 5", ",8 6,1 1,0 1,5 4,1 4,8 4,", "6", " 2", ",3 8,5 9,8 4", ",", "4 5"};
    vector<string> transitions = {"YNYYYNYNY", "NYYNYNYYN", "NNYYYNNNY", "YYNYYNYNN", "NNNNYYYNY", "YNNNYYNNN", "YYNYNYYNN", "NNNYYYYYY", "YYYYNNYNY"};
    int minLength = 547076524;
    int maxLength = 988552389;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 74986690;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> songs = {"6 1,8 9,0 5,6 5,1 9,8 1,8 8,5 9,8 3,3 9,1 7,4 9,2 ", "3,6 3,4 8,4 2,7 6,7 5,5 1,5 1,7 1,7 7,4 6,1 3,4 5,", "0 6,3 2,0 7,1 9,2 9,8 3,8 7,3 4,5 1,8 4,2 7,3 4,8 ", "4,5 5,8 3,1 3,5 4,1 4,8 8,5 4,7 7,8 2,6 5,7 7,2 9,", "2 1,0 1,2 8,3 8,3 9,5 1,1 8,2 3,5 2,6 2,2 4,4 4,4 ", "6,4 4,0 5,5 6,8 2,7 4,2 8,4 7,1 6,4 3,6 2,7 4,5 5,", "4 ", "8,4 4,1 5,1 4,8 6,5 9,4 8,5 9,1 8,2 5,7 4,2 9,1 6,", "8 8,3 2,8 1,6 1,8 7,1 6,2 1,2 9,6 6,3 1,5 9,4 9,3 ", "3,8 2,7 9,0 7,1 8,2 9,1 6", ",7 9,1 4,0 9,2 ", "6,2 1", ",3 3,5 4,7 1,0 1,6 9,0 5,0 9,6 1,4 9,3 7,0 7,6 6,4", " 4,4 6,2 5,8 4,0 4,0 9,8 1,0", " 8,0 8,4 2,3 8,4 4,4 3,1 3,6 7,6 1,5 1,2 7,4 9,4 4", ",8 1,0 1,0 4,6 3,8 4,3 8,3 9,7 4,0 3,2 8,4 9,1 7,0", " 5,0 9,7 9", ",2 6,8 4,4 9,5 4,3 5,7 7,1 3,6 9,0 6,3 3,5 4,7 6,7", " 8,0 8,6 4,5 9,1 8,8 3,7 7,4 6,2 7,7 7,6 4,1 5,7 7", ",7 1,4 4,0 2,8 3,5 3,3 5,7 3,6 1,2 4,2 4,0 4,8 9,1", " 7,", "1 8,4 7,0 4,7 3,5 4,4 1,", "4 6,2 3,6 4,5", " 9,7 2,7 9,5 5,2 3,3 8,4 7,4 5,7 2,8 4,2 2,7 6,8 4", ",", "3 9,1 6,1 9,2", " 1,4 2,", "4 9,8 1,2 8,8 4,4 6,5 6,2 1,2", " 4,8 6,5 6,", "7 8,", "7 7,4 8,5 2,2 3", ",7 2,7 5,7 6,1 5,8 2,2 3", ",", "1 8,1 8,", "4 8,1 9", ",", "0", " ", "6"};
    vector<string> transitions = {"YYNNNYYNY", "NYYNYYYNN", "YNYNYYYNY", "YYYYNYNNN", "NNNYYYYNN", "NYNYNYNNY", "YNNNYNYNN", "NNYNNNYYY", "YNNNYNNYY"};
    int minLength = 882438124;
    int maxLength = 921453119;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 480949638;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> songs = {"6 8,1 1,6 3,1 9,4 2,1 5,7 5,6 3,4 9,1 9,0 1,4 6,5 ", "4,6 1,2 5,8 1,1 2,4 2,0 3,6 7,6 1,2 8,2 5,8 7,8 5,", "8 1,4 7,7 6,6 2,8 9,3 8,1 9,1 4,2 5,7 4,6 3,5 6,1 ", "7,2 2,0 3,6 5,7 6,6 6,1 1,2 8,6 9,8 2,0 3,2 6,3 7,", "1 4,1 4,5 7,8 8,8 8,8 4,8 1,8 4,2 3,8 5,8 4", ",5 2,0 2,7 7,2 7,4 3,0 2,3 8,7 6,6 9,0 9,4 3,8 9,3", " 7,7 1,2 5,4 8,3 7,6 6,8 4,8 7,4 2,8 5,1 5,8 6,8 6", ",8 6,2 6,8 1,8 1,0 4,8 9,4 7,0 9,8 6,2 2,7 1,0 7,3", " 9,2 9,8 3,0 1,4 5,3 7,3 5,4 8,8 8,0 1,6 4,4 3,1 2", ",4 4,7 8,7 4,0 1,2 2,1 6,1 8,7 3,5 2,0 1,5 3,5 6,4", " 8,8 6,3 8,5 4,4 5,0 8,5 ", "3,0 8,7 1,6 4,1 6,0 1,1 9,7 5,2 4,2 5,1 7,4 6,6 1,", "7 6,1 9,6 4,0 9,5 5,6 2,1 6,8 ", "2,8 3,7 8,3 8,5 8,4 9,7 6,4 4,0 2,1 9,7 5,8 5,2 1,", "3 8,1 1", ",1 9,6 4,3 2,4 1,8 1,4 9,3 7,7 1,5 9,1 6,4 2,3 7,7", " 1,0 7,8 1,1 3,3 3,4 8,2 5,2 7,8 9,8 9,2 8,2 7,1 8", ",7 7,6 2,0 2,0 8,8 2,5 4,7 5,0 9,7 5,7 5,3 4,1 5,0", " 1,8 4,4 8,4 2,8 6,7 1,7 4,2 7,1 3,5 6,7 1,3 7,0 1", ",6 3,7 7,4 2,1 9,2 9,1 4,7 4,3 5,2 6,6 7,4 6,3 8,3", " 4,0 1,0 8,6 9,1 9,6 3,0 7,1 8,8 9,6 9,8 2,1", " 9,7 7,6 7,7 1,6 3", ",2 1,2 4,3 7,6 1,5 6,6 3,4 3,5 2,4 2,2 9,4 2,7 5,5", " 3,5 4,4 8,6 4,1 6,2 4,5 6,4 9,3 3,7 1,7 9,7 1,0 3", ",8 3,0 4,4 3,4 4,6 9,4 1,7 9,3 2,2 5,5", " 8,7 9,7 2,5 8,0 6,5 1,0 2,0 5,1 5,2 2,4 3,3 4,6 7", ",3 6,7 6,0 5,7 6,1 5", ",6 4,2 2,8 6,8 3,3 8,4 6,4 9,4 9,4 2,2 9,7 1,5 8,1", " 2", ",6", " 4,2 5,0 9,8 5,1 1,5 3,3 7,3 7,6 1,6 1,8 7,2 8,2 9", ",0 7,3 2,1 1,3 9,6 5,4 5,8 5,5 7,5 7,3 7,6 5,4 8,8", " 3,6 7,3 3,5 1,1 8,7 6,5 3,3 9,1 8,7 7,3 7,1 6,2 2", ",0 6,8 4,2 7,0 4,7 2,6 4,6 4,4 5,2 8,8 4,2 1,0 2,4", " 7,4 6,2 5,5 4,", "5 9,8 4,3 8,6 9,7 8,4 7,2 7,2 ", "9,1 1,7 4,4 5,8 8,0 7,2 6,7 9,3 8,5 7,8 6,1 4,7 3,", "5 8,5 3,7 ", "1,3 8,4 6,3 6,1 8,2 2,8 8,7 4,0 6,1 7,5 2,1 8,2 2,", "4 6,1 3,2 5,3 3,3 8,8 9,6 9,6 ", "7,7 7", ",8 2,3 2,6 7,6 2,1 6,6 5,8 3,2 8,2 1,2 9,4 2,8 9,4", " 1,4 5,0 6,1 4,1 6,4 9,0 4,7 1,1 9,0 3,7 6,3", " 3,8 2,5 4,0 5,5 1,7 8,2 4,3 2,0 5,1 2,0 2,3 4,7 7", ",0 8,4 ", "7,5 5,7 5,", "7 6,2 1,7 1,6 7,", "5 ", "3,5 1,0 9,8 7,2 ", "9,3 1,4 8,4 6,0 2,6 6,5 8"};
    vector<string> transitions = {"YNNYYYYYN", "NYYNNNNYY", "YYYYYNYYY", "NYNYYNNYN", "YNYNYNNNY", "NYYNYYYYY", "YYYNNNYYY", "YNNYNNYYY", "NYYNNYNNY"};
    int minLength = 744697989;
    int maxLength = 945349318;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 542779328;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> songs = {"4 3,1 8,8 1,6 9,8 1", ",2 9,4 5,7 2,3 4,7 1,8 7,5 5,5 9,7 5,6 5,2 9,1 6,7", " 7,8 8,1 8,0 7,7 5,4 9,7 5,0 6,4 8,4 4,1 8,7 5,4 3", ",8 2,3 7,8 1,3 6,3 3,5 8,7 7,8 1,2 1,4 5,4 1,4 5,2", " 7,6 5,5 4,7 3,1 4,7 6,0 3,5 7,8 3,1 9,4 7,6 4,3 1", ",7 2,3 3,6 6,1 3,0 3,", "5 9,0 4,1 7,2 6,6 3,1", " 3,1 9,4 7,6 8,5 6,6 9,6 8,5 8,7 8,6 8,3 1,8 4,0 1", ",2 9,3 1,0 1,8 9,8 6,1 2,4 2,2 5,6 8,5 9,6 4,5 7,3", " 3,0 6,3 1,2 5,5 6,6 3,5 6,0 6,6 5,5 4,6 3,7 3,0 1", ",7 6,5 2,5 5,3 ", "8,8 6,3 2,7 2,8 5,0 7,0 7,2 4,0 1,3 4,7 5,8 1,6 2,", "5 3,5 7,7 6,6 2,3 3,4 1,7 1,1 7,8 1,2 8,5 3,8 4,0 ", "7,3 4,1 6,5 7,5 8,8 9,2 6,1 9,6 6,5 7,2 5,1 1,4 2,", "2 4,3 5,4 4,1 3,1 8,1 1,5 7,0 9,1 6,3 6,4 3,6 4,4 ", "2,0 8,0 8,0 5,2 3,8 6,2 6,1 3,4 4,6 1,4 8,7 3,0 4,", "1 6,1 6,4 6,0 9,8 1,5 3,4 6,3 4,3 5,3 8,1 6,5 5,5 ", "6,8 2,8 3,1 8,5 9,4 9,4 6,6 8,5 6,0 7,6 2,4 8,5 7,", "6 6,7 7,8 9,8 7,1 5,3 2,2 1,1 2,6 5,4 3,7 7,8 2,0 ", "6,2 7,1 5,5 2,8 6,0 1,3 2,4 2,3 4,3", " 5,4", " 7,6 8,3 7,3 2,5 9,4 5,3 1,8 5,", "2 3,2 4,6 9,8 5,5 3,3 9,2 7,0 5,6 2,0 9,2 7,7 7,6 ", "8,1 1,6 7,6 6,0 8,0 9,7 5,7 ", "3,2 5,2 6,4 2,6 9,5 4,3 8,5 5,7 4,0 6,7 2,", "6 2,8 7,4 5,0 5,0 7,1 2,8 2,5 7,6 3,2 2", ",3 8,3 5,4 5,8 6,0 6,8 5,5 1,3 2,3 8,5 5", ",0 ", "3,6 3,8 ", "4"};
    vector<string> transitions = {"YYYNNNYYY", "NYYNYNNNY", "NNYNYNNYY", "YYYYNNNNY", "YYNNYNYYN", "NNYYYYYNY", "YYNNYNYNN", "YNNNNYNYN", "YNNYNNYYY"};
    int minLength = 410570086;
    int maxLength = 884691433;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 415672129;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> songs = {"5 7,8 2,1 4,", "2 9,4 5,6 4,1 7,6 8,0 7,6 4,0 5,2 1,5 3,4 8,7 3,3 ", "8,8 1,7 1,7 3,4 4,7 5,4 4,0 9,1 6,5 1,3 2,5 5,0 4,", "1 3,5 2,8 3,4 4,6 5,3 6,8 8,7 7,6 3,5 6,6 1,", "3 9,5 9,6 7,1 6,2 6,2 7,7 7,4 8,2 5,0 3,2 1,7 2,0 ", "5,6 7,7 9,4 8,0 9,8 7,1 9,5 1,2 5,8 5,", "0 3,5 5,7", " 6,4 2,3 4,8 8,2 ", "4,5 9,5 7,", "0 3,5 1,5 9,8 1,4 3,1 8,2 7,1 4,1", " 1", ",5", " ", "6"};
    vector<string> transitions = {"YYNYYYNNY", "YYNYYYNNN", "YNYNNYNNN", "NYNYNYYNN", "NYYYYNYYN", "YYYYYYYNN", "YYNYYYYYY", "NNYNNYNYN", "YYNNYYNYY"};
    int minLength = 640440286;
    int maxLength = 855296770;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 49494089;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> songs = {"8 ", "5,", "8", " ", "6"};
    vector<string> transitions = {"YYNNNYYNY", "YYNNYYYNN", "NNYYYYYYN", "NNYYNYYYN", "NNNYYYYYN", "NNYNYYNNN", "YYNYYNYYY", "YNNYYYNYY", "NYNYNNYNY"};
    int minLength = 669141949;
    int maxLength = 761747741;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 578267692;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> songs = {"1 ", "1"};
    vector<string> transitions = {"YNNYYNYYY", "NYYNNNYYN", "YYYNNYYYN", "NNNYYYYYY", "NNNYYNYYY", "NNNNYYYYY", "NNNYNYYNN", "NYYNYYNYY", "YYNNYYYNY"};
    int minLength = 385524650;
    int maxLength = 986446296;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> songs = {"5", " ", "1"};
    vector<string> transitions = {"YNYNYYNYY", "YYYYYNNYN", "YNYNNNNNN", "NYNYYNYNN", "YYYYYNNNY", "NNYNYYNYY", "YNYYYNYNN", "NYNNYNYYN", "NNYNNYYNY"};
    int minLength = 174214935;
    int maxLength = 775136582;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> songs = {"6", " ", "1"};
    vector<string> transitions = {"YYNYNYY", "YYYYNYY", "YNYYYNN", "NNNYNNY", "NYYYYYN", "NYYNYYY", "YYNYNYY"};
    int minLength = 254540334;
    int maxLength = 855461979;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 600921646;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> songs = {"6 1,5 2,4 ", "3", ",3 4", ",2", " ", "5,", "1", " ", "6,0", " ", "7"};
    vector<string> transitions = {"YNNNNYY", "NYYNNYN", "YNYYNNY", "NYNYYNN", "NYYNYYY", "YNNYNYY", "YNNYYYY"};
    int minLength = 191024346;
    int maxLength = 791945991;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 220474260;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> songs = {"6 1,5 2,4 3,3 4,2", " 5,1 ", "6,0 7", ",2 5", ",2 8,3", " 9,3 9,3", " ", "9,3 9,4 9"};
    vector<string> transitions = {"YNYNNYY", "YYYNYYN", "YNYYYYY", "NYNYNNN", "NNNYYYY", "YYNNYYY", "NYYNNNY"};
    int minLength = 60968936;
    int maxLength = 275584053;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 418315987;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> songs = {"0 3,0 3,0 6,3 ", "8,2 2,3 2,", "2 2,3 9,3 7,0 7,0 3,1 8,2 1,4 6,0 4", ",0 4,1 ", "6,", "0 1,4 6,3", " 8", ",", "1", " ", "6"};
    vector<string> transitions = {"YYYYY", "YYYYY", "YYYYY", "YYYYY", "YYYYY"};
    int minLength = 347476066;
    int maxLength = 575210676;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 559166222;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> songs = {"2 5,2 9,3 4,1 4,5 7,3 9,3 1,1 4,1 4,1 8,2 6,0 5,3 ", "7", ",2 2,1 7,4 6,4 9,0 4,5 1,1 1,0 6,0 6,1 ", "1,0 2,2 4,5 6,5 2,4 4,3 4,3 3,1 5,1 5,2 9,4 6,3 7,", "0 1,5 5,5 9,1 4,0 9,5 9,5 7,4 6,3 7,3 3,1 6,0 9,1 ", "8,4 6,5 4,2 8,3 5,2 4,2 7,2 8,1 5,4 7,5", " 3,4 5,3 4,5 2,0 7,3 8,5 1,0 5,2 6,0 3,5", " 2,2 3,4 6,5 3,0 5,3 3,0 9,5 6,2 2,2 6,3 5,0 7,3 4", ",4 2,1 4,0 2,5 6", ",3 1,4 8,5 7,1 2,4 6,4 7,3 1,2 5,2 6,2 9,0 8,5 7,5", " 1,4 5,1 4,0 6,4 1,2 9,4 9,0 7,4 7,3 5,2 6,2 6,2 5", ",0", " 5,3 9,", "4 9,2 3", ",5 9,2 ", "7,3 6,1 1,2 9", ",4", " 5", ",5 1", ",", "4 ", "7"};
    vector<string> transitions = {"YYYYYY", "YYYYYY", "YYYYYY", "YYYYYY", "YYYYYY", "YYYYYY"};
    int minLength = 493036688;
    int maxLength = 542534882;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 561341405;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> songs = {"1 3,0 3,0 6,5 8,3 2,6 2,3 2,6 9,6 7,1 7,1 3,2 8,4 ", "1,7 6,1 4,1 4,2 6,1 1,8 6,5 8,2 6,5 3,4 3,5 9,6 4,", "0 9,5 8,3 5,8 1,2 4,7 6,3 4,1 5,8 9,1 6,4 5,8 2,8 ", "6,4 1,7 5,5 5,8 9,0 5,4 2,8 4,3 3,1 3,7 1,1 9,6 2,", "6 5,8 2,6 1,4 9,2 1,8 5,0 1,1 2,8 2,8 9,7 6,3 9,5 ", "1,2 5,1 8,6 9,3 7,6 6,4 5,3 5,4 1,7 7,5 1,2 2,5 4,", "5 9,1 1,1 5,0 5,7 1,2 5,3 5,0 8,4 4,6 8,6 9,8 9,7 ", "3,0 8,3 6,0 1,5 6,6 1,3 4,5 7,6 1,0 2,7 6,5 4,4 2,", "5 2,5 9,0 9,5 3,1 9,0 2,0 2,3 5,6 6,3 8,1 4,8 4,6 ", "6,4 4,4 9,0 6,0 9,4 6,5 4,4 3,3 8,4 6,7 1,3 5,7 8,", "0 1,7 1,4 3,2 1,3 4,0 4,5 1,4 2,4 2,2 5,5 8,6 4,8 ", "8,0 5,0 4,4 2,0 3,8 4,3 1,2 2,5 1,7 1,3 2,8 2,5 8,", "7 9,6 5,4 2,1 7,8 5,5 9,8 3,3 1,5 3,2 7,4 8,7 2,1 ", "6,8 9,3 3,2 2,5 1,1 9,7 5,4 4,1 5,8 7,4 9,7 5,7 6,", "0 2,2 7,1 4,1 2,3 7,2 5,1 7,4 2,3 6,1 5,0 4,1 2,0 ", "6,0 9,7 2,4 8,8 4,0 9,0 9,7 5,8 6,1 1,1 9,8 6,2 5,", "3 6,1 4,8 4,3 9,4 5,4 3,8 3,1 4,5 2,8 3,0 2,1 8,3 ", "8,8 9,1 4,2 7,7 6,5 3,8 4,3 4,0 6,0 7,1 3,6 9,1 6,", "2 4,3 9,1 7,8 4,7 7,1 2,6 6,0 2,5 8,1 4,8 4,3 1,5 ", "2,8 8,5 9,0 3,3 5,8 3,8 7,6 4,5 1,5 6,5 4,7 9,6 9,", "2 9,3 7,6 2,5 7,3 6,8 3,1 1,1 3,6 7,2 7,3 2,2 3,0 ", "2,0 7,0 3,1 1,5 7,5 6,3 8,4 3,2 1,6 7,6 3,4 2,5 2,", "4 6,6 3,1 1,8 1,2 5,2 1,4 4,4 3,3 9,6 6,3 3,7 2,7 ", "2,0 9,2 7,5 2,7 6,1 7,3 2,0 6,6 9,8 3,8 2,7 9,1 5,", "6 1,1 2,7 7,4 4,6 4,7 2,0 6,8 2,5 4,0 5,5 3,7 2,1 ", "4,2 7,8 2,3 2,6 5,2 9,0 3,6 5,3 8,1 6,7 2,2 4,3 5,", "1 4,7 3,5 5,6 9,0 5,8 1,7 8,1 2,6 2,6 7,5 7,2 7,0 ", "8,7 3,5 5,1 1,8 4,8 1,3 4,8 9,5 5,8 4,6 6,1 5,0 6,", "2 3,6 2,2 2,0 5,7 8,5 8,6 6,2 4,0 7,0 7,2 1,7 9,8 ", "4,4 7,5 8,7 5,4 5,3 7,6 6,2 6,8 2,3 3,3 6,7 7,2 8,", "0 4,2 4,4 1,6 9,3 8,4 6,4 3,7 6,7 3,0 7,2 4,0 9,5 ", "7,5 7,1 2,1 4,1 2,0 5,8 1,3 3,2 1,0 2,5 7,7 3,6 6,", "1 6,8 2,2 3,6 4,3 6,1 3,5 7,2 1,0 2,3 2,2 8,3 8,0 ", "4,4 9,8 8,3 8,0 4,2 8,1 3,6 8,1 1,5 3,6 7,0 6,3 4,", "0 5,1 9,3 9,8 9,4 6,3 7,0 3,6 9,8 1,0 5,0 8,6 2,1 ", "8,2 9,4 9,6 7,4 4,6 1,7 2,6 9,1 7,4 1,1 5,1 9,4 1,", "0 6,3 9,6 8,2 4,0 9,6 5,2 6,7 3,1 4,7 7,4 7,3 2,4 ", "2,1 2,2 9,4 5,4 8,4 7,0 7,3 8,8 9,7 7,8 2,1 7,5 1,", "5 4,4 8,1 3,5 1,7 9,8 2,6 2,7 7,5 7,0 7,4 6,3 2,5 ", "1,1 7,7 5,5 8,7 2,0 8,8 6,2 2,1 7,6 9,1 3,4 6,3 1,", "4 5,0 2,7 6,1 6,3 4,3 9,8 3,2 3,1 4,1 9,7 1,8 8,5 ", "2,4 5,3 2,7 8,8 4,7 8,6 3,6 8,5 4,2 9,3 4,1 1,3 3,", "4 4,1 8,8 1,8 5,6 2,3 8,6 2,5 4,7 8,2 2,2 4,0 1,2 ", "4,2 9,0 2,5 9,3 7,6 9,7 1,0 7,7 5,8 5,3 3,7 7,0 1,", "8 3,8 5,1 5,4 7,3 4,1 9,3 9,0 5,0 1,8 1,4 3,2 1,3 ", "2,2 9,8 6,0 9,6 3,3 8,4 7,8 8,2 7,1 4,0 5,3 7,6 5,", "4 6,8 3,8 2,7 8,1 1,6 9,6 1,6 8,4 4,4 3,3 9,5 2,5 ", "5,5 3,4 3,1 7,3 2,6 6,3 8,0 3,8 9,8 3,7 2,4 3,4 7,", "2 7,0 3,6 7,2 7,6 9,1 7,4 6,3 7,5 5,4 7,4 2,0 6,4 ", "9,1 3,4 6,1 4,4 8,8 4,3 3,3 8,8 6,5 7,7 7,3 8,3 9"};
    vector<string> transitions = {"YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY"};
    int minLength = 778789223;
    int maxLength = 883298847;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 502730975;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> songs = {"7 9,4 9,1 9,6 9,5 9,6 9,1 9,1 9,3 9,8 9,5 9,3 9,3 ", "9,4 9,2 9,6 9,3 9,7 9,5 9,2 9,1 9,6 9,0 9,0 9,8 9,", "3 9,6 9,3 9,2 9,6 9,2 9,2 9,7 9,5 9,6 9,3 9,2 9,6 ", "9,2 9,6 9,8 9,8 9,1 9,3 9,0 9,1 9,7 9,8 9,6 9,0 9,", "1 9,2 9,6 9,4 9,2 9,2 9,8 9,8 9,4 9,7 9,2 9,0 9,8 ", "9,2 9,0 9,0 9,0 9,7 9,2 9,8 9,6 9,2 9,4 9,8 9,2 9,", "1 9,2 9,8 9,7 9,6 9,5 9,6 9,7 9,1 9,4 9,6 9,1 9,6 ", "9,5 9,1 9,6 9,3 9,8 9,4 9,1 9,3 9,8 9,8 9,5 9,2 9,", "2 9,2 9,8 9,7 9,1 9,6 9,0 9,1 9,8 9,8 9,6 9,6 9,6 ", "9,5 9,8 9,8 9,2 9,7 9,4 9,8 9,0 9,5 9,0 9,0 9,0 9,", "2 9,7 9,4 9,3 9,8 9,5 9,7 9,8 9,3 9,7 9,3 9,1 9,1 ", "9,3 9,7 9,3 9,6 9,1 9,2 9,0 9,8 9,3 9,7 9,0 9,6 9,", "1 9,6 9,7 9,5 9,1 9,2 9,2 9,2 9,3 9,8 9,4 9,8 9,4 ", "9,2 9,8 9,0 9,4 9,4 9,2 9,4 9,6 9,0 9,5 9,3 9,1 9,", "5 9,8 9,6 9,5 9,3 9,3 9,8 9,1 9,2 9,0 9,2 9,4 9,5 ", "9,7 9,7 9,7 9,5 9,2 9,3 9,7 9,0 9,7 9,1 9,5 9,4 9,", "6 9,5 9,2 9,0 9,7 9,0 9,8 9,6 9,6 9,2 9,8 9,1 9,1 ", "9,8 9,8 9,3 9,4 9,7 9,1 9,0 9,0 9,3 9,2 9,6 9,8 9,", "5 9,2 9,5 9,2 9,8 9,3 9,7 9,6 9,5 9,8 9,4 9,0 9,4 ", "9,1 9,5 9,6 9,3 9,6 9,2 9,8 9,4 9,4 9,7 9,4 9,8 9,", "5 9,4 9,0 9,3 9,1 9,6 9,3 9,8 9,8 9,2 9,5 9,3 9,4 ", "9,6 9,6 9,6 9,7 9,4 9,3 9,6 9,2 9,2 9,6 9,5 9,7 9,", "6 9,0 9,5 9,8 9,3 9,0 9,2 9,3 9,0 9,1 9,0 9,4 9,3 ", "9,4 9,5 9,0 9,7 9,6 9,7 9,1 9,8 9,8 9,4 9,1 9,2 9,", "1 9,8 9,8 9,2 9,8 9,3 9,7 9,8 9,8 9,8 9,2 9,6 9,6 ", "9,5 9,1 9,5 9,6 9,1 9,6 9,3 9,6 9,7 9,5 9,5 9,3 9,", "7 9,5 9,7 9,7 9,4 9,4 9,7 9,6 9,1 9,6 9,5 9,3 9,4 ", "9,7 9,5 9,5 9,3 9,5 9,7 9,6 9,4 9,3 9,6 9,8 9,7 9,", "4 9,4 9,3 9,1 9,0 9,4 9,6 9,2 9,7 9,2 9,8 9,8 9,2 ", "9,4 9,5 9,2 9,1 9,1 9,2 9,8 9,1 9,3 9,4 9,3 9,4 9,", "8 9,1 9,5 9,4 9,3 9,6 9,2 9,1 9,1 9,3 9,2 9,2 9,1 ", "9,3 9,7 9,6 9,4 9,1 9,6 9,2 9,4 9,0 9,1 9,3 9,2 9,", "4 9,6 9,0 9,0 9,1 9,8 9,2 9,7 9,1 9,4 9,1 9,0 9,0 ", "9,6 9,7 9,0 9,5 9,5 9,1 9,6 9,6 9,4 9,4 9,3 9,7 9,", "6 9,8 9,6 9,4 9,8 9,8 9,5 9,4 9,8 9,6 9,4 9,5 9,2 ", "9,2 9,4 9,8 9,5 9,8 9,7 9,3 9,0 9,1 9,0 9,4 9,2 9,", "8 9,6 9,1 9,6 9,2 9,1 9,4 9,6 9,8 9,8 9,0 9,2 9,1 ", "9,8 9,6 9,0 9,0 9,1 9,2 9,8 9,3 9,5 9,0 9,8 9,4 9,", "6 9,6 9,8 9,0 9,4 9,4 9,7 9,2 9,7 9,6 9,8 9,5 9,7 ", "9,3 9,6 9,0 9,1 9,4 9,7 9,6 9,4 9,5 9,3 9,0 9,4 9,", "8 9,2 9,7 9,1 9,0 9,6 9,0 9,3 9,4 9,6 9,7 9,5 9,2 ", "9,2 9,3 9,0 9,1 9,8 9,8 9,0 9,6 9,3 9,2 9,6 9,3 9,", "4 9,1 9,6 9,2 9,2 9,0 9,3 9,0 9,4 9,7 9,3 9,8 9,4 ", "9,3 9,0 9,7 9,4 9,8 9,8 9,5 9,1 9,4 9,4 9,7 9,6 9,", "6 9,2 9,7 9,4 9,3 9,1 9,5 9,8 9,7 9,0 9,1 9,3 9,0 ", "9,0 9,2 9,1 9,8 9,0 9,7 9,1 9,5 9,6 9,4 9,2 9,0 9,", "8 9,7 9,0 9,5 9,7 9,2 9,8 9,7 9,6 9,2 9,5 9,7 9,0 ", "9,6 9,4 9,4 9,1 9,5 9,2 9,4 9,0 9,6 9,6 9,3 9,6 9,", "7 9,8 9,2 9,0 9,4 9,8 9,4 9,1 9,4 9,1 9,7 9,7 9,3 ", "9,0 9,6 9,5 9,0 9,8 9,4 9,8 9,6 9,7 9,6 9,0 9,1 9"};
    vector<string> transitions = {"YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY"};
    int minLength = 32061756;
    int maxLength = 362012983;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 136529373;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> songs = {"7 9,4 9,1 9,6 9,5 9,6 9,1 9,1 9,3 9,8 9,5 9,3 9,3 ", "9,4 9,2 9,6 9,3 9,7 9,5 9,2 9,1 9,6 9,0 9,0 9,8 9,", "3 9,6 9,3 9,2 9,6 9,2 9,2 9,7 9,5 9,6 9,3 9,2 9,6 ", "9,2 9,6 9,8 9,8 9,1 9,3 9,0 9,1 9,7 9,8 9,6 9,0 9,", "1 9,2 9,6 9,4 9,2 9,2 9,8 9,8 9,4 9,7 9,2 9,0 9,8 ", "9,2 9,0 9,0 9,0 9,7 9,2 9,8 9,6 9,2 9,4 9,8 9,2 9,", "1 9,2 9,8 9,7 9,6 9,5 9,6 9,7 9,1 9,4 9,6 9,1 9,6 ", "9,5 9,1 9,6 9,3 9,8 9,4 9,1 9,3 9,8 9,8 9,5 9,2 9,", "2 9,2 9,8 9,7 9,1 9,6 9,0 9,1 9,8 9,8 9,6 9,6 9,6 ", "9,5 9,8 9,8 9,2 9,7 9,4 9,8 9,0 9,5 9,0 9,0 9,0 9,", "2 9,7 9,4 9,3 9,8 9,5 9,7 9,8 9,3 9,7 9,3 9,1 9,1 ", "9,3 9,7 9,3 9,6 9,1 9,2 9,0 9,8 9,3 9,7 9,0 9,6 9,", "1 9,6 9,7 9,5 9,1 9,2 9,2 9,2 9,3 9,8 9,4 9,8 9,4 ", "9,2 9,8 9,0 9,4 9,4 9,2 9,4 9,6 9,0 9,5 9,3 9,1 9,", "5 9,8 9,6 9,5 9,3 9,3 9,8 9,1 9,2 9,0 9,2 9,4 9,5 ", "9,7 9,7 9,7 9,5 9,2 9,3 9,7 9,0 9,7 9,1 9,5 9,4 9,", "6 9,5 9,2 9,0 9,7 9,0 9,8 9,6 9,6 9,2 9,8 9,1 9,1 ", "9,8 9,8 9,3 9,4 9,7 9,1 9,0 9,0 9,3 9,2 9,6 9,8 9,", "5 9,2 9,5 9,2 9,8 9,3 9,7 9,6 9,5 9,8 9,4 9,0 9,4 ", "9,1 9,5 9,6 9,3 9,6 9,2 9,8 9,4 9,4 9,7 9,4 9,8 9,", "5 9,4 9,0 9,3 9,1 9,6 9,3 9,8 9,8 9,2 9,5 9,3 9,4 ", "9,6 9,6 9,6 9,7 9,4 9,3 9,6 9,2 9,2 9,6 9,5 9,7 9,", "6 9,0 9,5 9,8 9,3 9,0 9,2 9,3 9,0 9,1 9,0 9,4 9,3 ", "9,4 9,5 9,0 9,7 9,6 9,7 9,1 9,8 9,8 9,4 9,1 9,2 9,", "1 9,8 9,8 9,2 9,8 9,3 9,7 9,8 9,8 9,8 9,2 9,6 9,6 ", "9,5 9,1 9,5 9,6 9,1 9,6 9,3 9,6 9,7 9,5 9,5 9,3 9,", "7 9,5 9,7 9,7 9,4 9,4 9,7 9,6 9,1 9,6 9,5 9,3 9,4 ", "9,7 9,5 9,5 9,3 9,5 9,7 9,6 9,4 9,3 9,6 9,8 9,7 9,", "4 9,4 9,3 9,1 9,0 9,4 9,6 9,2 9,7 9,2 9,8 9,8 9,2 ", "9,4 9,5 9,2 9,1 9,1 9,2 9,8 9,1 9,3 9,4 9,3 9,4 9,", "8 9,1 9,5 9,4 9,3 9,6 9,2 9,1 9,1 9,3 9,2 9,2 9,1 ", "9,3 9,7 9,6 9,4 9,1 9,6 9,2 9,4 9,0 9,1 9,3 9,2 9,", "4 9,6 9,0 9,0 9,1 9,8 9,2 9,7 9,1 9,4 9,1 9,0 9,0 ", "9,6 9,7 9,0 9,5 9,5 9,1 9,6 9,6 9,4 9,4 9,3 9,7 9,", "6 9,8 9,6 9,4 9,8 9,8 9,5 9,4 9,8 9,6 9,4 9,5 9,2 ", "9,2 9,4 9,8 9,5 9,8 9,7 9,3 9,0 9,1 9,0 9,4 9,2 9,", "8 9,6 9,1 9,6 9,2 9,1 9,4 9,6 9,8 9,8 9,0 9,2 9,1 ", "9,8 9,6 9,0 9,0 9,1 9,2 9,8 9,3 9,5 9,0 9,8 9,4 9,", "6 9,6 9,8 9,0 9,4 9,4 9,7 9,2 9,7 9,6 9,8 9,5 9,7 ", "9,3 9,6 9,0 9,1 9,4 9,7 9,6 9,4 9,5 9,3 9,0 9,4 9,", "8 9,2 9,7 9,1 9,0 9,6 9,0 9,3 9,4 9,6 9,7 9,5 9,2 ", "9,2 9,3 9,0 9,1 9,8 9,8 9,0 9,6 9,3 9,2 9,6 9,3 9,", "4 9,1 9,6 9,2 9,2 9,0 9,3 9,0 9,4 9,7 9,3 9,8 9,4 ", "9,3 9,0 9,7 9,4 9,8 9,8 9,5 9,1 9,4 9,4 9,7 9,6 9,", "6 9,2 9,7 9,4 9,3 9,1 9,5 9,8 9,7 9,0 9,1 9,3 9,0 ", "9,0 9,2 9,1 9,8 9,0 9,7 9,1 9,5 9,6 9,4 9,2 9,0 9,", "8 9,7 9,0 9,5 9,7 9,2 9,8 9,7 9,6 9,2 9,5 9,7 9,0 ", "9,6 9,4 9,4 9,1 9,5 9,2 9,4 9,0 9,6 9,6 9,3 9,6 9,", "7 9,8 9,2 9,0 9,4 9,8 9,4 9,1 9,4 9,1 9,7 9,7 9,3 ", "9,0 9,6 9,5 9,0 9,8 9,4 9,8 9,6 9,7 9,6 9,0 9,1 9"};
    vector<string> transitions = {"YNNNNNNNN", "NYNNNNNNN", "NNYNNNNNN", "NNNYNNNNN", "NNNNYNNNN", "NNNNNYNNN", "NNNNNNYNN", "NNNNNNNYN", "NNNNNNNNY"};
    int minLength = 32061756;
    int maxLength = 362012983;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 169053589;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> songs = {"4 1,3 1,0 1,5 1,5 1,6 1,4 1,2 1,4 1,8 1,4 1,4 1,1 ", "1,2 1,7 1,7 1,5 1,1 1,8 1,3 1,6 1,5 1,1 1,6 1,2 1,", "1 1,3 1,3 1,7 1,2 1,8 1,3 1,0 1,1 1,2 1,6 1,7 1,0 ", "1,2 1,8 1,0 1,8 1,3 1,7 1,5 1,8 1,6 1,4 1,1 1,2 1,", "1 1,1 1,3 1,0 1,8 1,3 1,7 1,5 1,1 1,2 1,4 1,5 1,2 ", "1,7 1,4 1,5 1,1 1,0 1,7 1,7 1,2 1,6 1,1 1,7 1,4 1,", "8 1,5 1,8 1,0 1,5 1,4 1,6 1,6 1,4 1,3 1,2 1,0 1,7 ", "1,1 1,2 1,4 1,1 1,4 1,5 1,3 1,6 1,5 1,2 1,6 1,2 1,", "0 1,3 1,8 1,2 1,7 1,3 1,4 1,6 1,8 1,3 1,8 1,7 1,3 ", "1,2 1,4 1,1 1,4 1,5 1,3 1,8 1,3 1,4 1,5 1,3 1,8 1,", "1 1,0 1,0 1,6 1,6 1,3 1,0 1,6 1,5 1,7 1,0 1,5 1,6 ", "1,5 1,3 1,8 1,0 1,7 1,0 1,5 1,2 1,2 1,5 1,5 1,5 1,", "8 1,8 1,0 1,2 1,1 1,0 1,5 1,6 1,1 1,3 1,3 1,3 1,4 ", "1,0 1,3 1,2 1,6 1,1 1,8 1,8 1,3 1,6 1,0 1,8 1,7 1,", "2 1,2 1,5 1,5 1,4 1,1 1,2 1,7 1,0 1,8 1,7 1,2 1,1 ", "1,2 1,3 1,0 1,0 1,7 1,1 1,5 1,2 1,8 1,4 1,8 1,7 1,", "3 1,7 1,1 1,4 1,2 1,3 1,8 1,7 1,0 1,3 1,7 1,0 1,1 ", "1,2 1,5 1,5 1,5 1,3 1,4 1,8 1,0 1,4 1,0 1,2 1,2 1,", "1 1,4 1,0 1,3 1,1 1,8 1,2 1,0 1,3 1,2 1,2 1,6 1,2 ", "1,5 1,3 1,0 1,8 1,3 1,3 1,2 1,7 1,0 1,7 1,8 1,0 1,", "0 1,3 1,8 1,5 1,3 1,8 1,4 1,0 1,6 1,0 1,0 1,8 1,4 ", "1,3 1,3 1,0 1,6 1,3 1,8 1,2 1,7 1,2 1,4 1,8 1,6 1,", "2 1,8 1,7 1,7 1,5 1,0 1,6 1,6 1,1 1,2 1,8 1,0 1,2 ", "1,8 1,0 1,0 1,5 1,6 1,8 1,6 1,6 1,7 1,4 1,1 1,1 1,", "7 1,6 1,8 1,8 1,0 1,3 1,2 1,2 1,8 1,7 1,4 1,7 1,1 ", "1,7 1,5 1,1 1,6 1,2 1,4 1,0 1,4 1,5 1,7 1,6 1,2 1,", "4 1,0 1,7 1,1 1,8 1,8 1,5 1,6 1,5 1,5 1,4 1,8 1,4 ", "1,1 1,2 1,6 1,6 1,7 1,2 1,5 1,3 1,3 1,3 1,0 1,2 1,", "1 1,6 1,1 1,6 1,8 1,7 1,7 1,8 1,0 1,5 1,6 1,0 1,5 ", "1,4 1,0 1,1 1,2 1,0 1,0 1,0 1,8 1,5 1,2 1,6 1,8 1,", "8 1,1 1,7 1,8 1,8 1,5 1,4 1,7 1,3 1,4 1,3 1,1 1,4 ", "1,0 1,3 1,1 1,8 1,3 1,8 1,0 1,7 1,1 1,1 1,8 1,8 1,", "0 1,8 1,4 1,4 1,3 1,0 1,3 1,4 1,3 1,2 1,7 1,1 1,4 ", "1,4 1,0 1,2 1,7 1,3 1,4 1,2 1,2 1,2 1,1 1,0 1,4 1,", "5 1,0 1,4 1,5 1,2 1,1 1,2 1,6 1,3 1,8 1,1 1,4 1,2 ", "1,5 1,4 1,8 1,1 1,7 1,6 1,4 1,7 1,6 1,0 1,0 1,5 1,", "5 1,7 1,7 1,0 1,7 1,4 1,1 1,6 1,1 1,0 1,8 1,0 1,4 ", "1,7 1,1 1,6 1,0 1,4 1,4 1,5 1,3 1,6 1,3 1,3 1,0 1,", "0 1,7 1,3 1,7 1,5 1,5 1,1 1,4 1,8 1,8 1,4 1,8 1,6 ", "1,5 1,7 1,2 1,6 1,5 1,8 1,4 1,3 1,1 1,3 1,0 1,7 1,", "1 1,2 1,4 1,2 1,0 1,6 1,8 1,6 1,0 1,1 1,3 1,3 1,2 ", "1,7 1,3 1,6 1,5 1,8 1,5 1,7 1,0 1,5 1,7 1,1 1,5 1,", "8 1,1 1,6 1,2 1,0 1,7 1,5 1,8 1,8 1,8 1,0 1,2 1,6 ", "1,3 1,8 1,4 1,1 1,4 1,7 1,2 1,0 1,5 1,8 1,0 1,8 1,", "3 1,5 1,0 1,6 1,8 1,1 1,0 1,1 1,5 1,4 1,7 1,7 1,6 ", "1,6 1,3 1,2 1,2 1,5 1,5 1,1 1,0 1,5 1,6 1,8 1,3 1,", "3 1,1 1,0 1,6 1,8 1,4 1,1 1,3 1,3 1,4 1,0 1,1 1,4 ", "1,3 1,7 1,3 1,2 1,8 1,6 1,2 1,7 1,8 1,3 1,4 1,6 1,", "6 1,7 1,6 1,4 1,0 1,1 1,5 1,7 1,5 1,5 1,8 1,4 1,4 ", "1,4 1,3 1,7 1,2 1,8 1,5 1,7 1,0 1,8 1,3 1,1 1,2 1"};
    vector<string> transitions = {"YNNYYNNNN", "NYNNYYNNY", "NNYYYNNYN", "NYNYYYYNY", "NNNNYNYYY", "NYYNYYYNN", "YYNNNYYYN", "NYNYNNNYY", "YYYNYYYYY"};
    int minLength = 1;
    int maxLength = 1000000000;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 123837467;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> songs = {"4 1,3 1,0 1,5 1,5 1,6 1,4 1,2 1,4 1,8 1,4 1,4 1,1 ", "1,2 1,7 1,7 1,5 1,1 1,8 1,3 1,6 1,5 1,1 1,6 1,2 1,", "1 1,3 1,3 1,7 1,2 1,8 1,3 1,0 1,1 1,2 1,6 1,7 1,0 ", "1,2 1,8 1,0 1,8 1,3 1,7 1,5 1,8 1,6 1,4 1,1 1,2 1,", "1 1,1 1,3 1,0 1,8 1,3 1,7 1,5 1,1 1,2 1,4 1,5 1,2 ", "1,7 1,4 1,5 1,1 1,0 1,7 1,7 1,2 1,6 1,1 1,7 1,4 1,", "8 1,5 1,8 1,0 1,5 1,4 1,6 1,6 1,4 1,3 1,2 1,0 1,7 ", "1,1 1,2 1,4 1,1 1,4 1,5 1,3 1,6 1,5 1,2 1,6 1,2 1,", "0 1,3 1,8 1,2 1,7 1,3 1,4 1,6 1,8 1,3 1,8 1,7 1,3 ", "1,2 1,4 1,1 1,4 1,5 1,3 1,8 1,3 1,4 1,5 1,3 1,8 1,", "1 1,0 1,0 1,6 1,6 1,3 1,0 1,6 1,5 1,7 1,0 1,5 1,6 ", "1,5 1,3 1,8 1,0 1,7 1,0 1,5 1,2 1,2 1,5 1,5 1,5 1,", "8 1,8 1,0 1,2 1,1 1,0 1,5 1,6 1,1 1,3 1,3 1,3 1,4 ", "1,0 1,3 1,2 1,6 1,1 1,8 1,8 1,3 1,6 1,0 1,8 1,7 1,", "2 1,2 1,5 1,5 1,4 1,1 1,2 1,7 1,0 1,8 1,7 1,2 1,1 ", "1,2 1,3 1,0 1,0 1,7 1,1 1,5 1,2 1,8 1,4 1,8 1,7 1,", "3 1,7 1,1 1,4 1,2 1,3 1,8 1,7 1,0 1,3 1,7 1,0 1,1 ", "1,2 1,5 1,5 1,5 1,3 1,4 1,8 1,0 1,4 1,0 1,2 1,2 1,", "1 1,4 1,0 1,3 1,1 1,8 1,2 1,0 1,3 1,2 1,2 1,6 1,2 ", "1,5 1,3 1,0 1,8 1,3 1,3 1,2 1,7 1,0 1,7 1,8 1,0 1,", "0 1,3 1,8 1,5 1,3 1,8 1,4 1,0 1,6 1,0 1,0 1,8 1,4 ", "1,3 1,3 1,0 1,6 1,3 1,8 1,2 1,7 1,2 1,4 1,8 1,6 1,", "2 1,8 1,7 1,7 1,5 1,0 1,6 1,6 1,1 1,2 1,8 1,0 1,2 ", "1,8 1,0 1,0 1,5 1,6 1,8 1,6 1,6 1,7 1,4 1,1 1,1 1,", "7 1,6 1,8 1,8 1,0 1,3 1,2 1,2 1,8 1,7 1,4 1,7 1,1 ", "1,7 1,5 1,1 1,6 1,2 1,4 1,0 1,4 1,5 1,7 1,6 1,2 1,", "4 1,0 1,7 1,1 1,8 1,8 1,5 1,6 1,5 1,5 1,4 1,8 1,4 ", "1,1 1,2 1,6 1,6 1,7 1,2 1,5 1,3 1,3 1,3 1,0 1,2 1,", "1 1,6 1,1 1,6 1,8 1,7 1,7 1,8 1,0 1,5 1,6 1,0 1,5 ", "1,4 1,0 1,1 1,2 1,0 1,0 1,0 1,8 1,5 1,2 1,6 1,8 1,", "8 1,1 1,7 1,8 1,8 1,5 1,4 1,7 1,3 1,4 1,3 1,1 1,4 ", "1,0 1,3 1,1 1,8 1,3 1,8 1,0 1,7 1,1 1,1 1,8 1,8 1,", "0 1,8 1,4 1,4 1,3 1,0 1,3 1,4 1,3 1,2 1,7 1,1 1,4 ", "1,4 1,0 1,2 1,7 1,3 1,4 1,2 1,2 1,2 1,1 1,0 1,4 1,", "5 1,0 1,4 1,5 1,2 1,1 1,2 1,6 1,3 1,8 1,1 1,4 1,2 ", "1,5 1,4 1,8 1,1 1,7 1,6 1,4 1,7 1,6 1,0 1,0 1,5 1,", "5 1,7 1,7 1,0 1,7 1,4 1,1 1,6 1,1 1,0 1,8 1,0 1,4 ", "1,7 1,1 1,6 1,0 1,4 1,4 1,5 1,3 1,6 1,3 1,3 1,0 1,", "0 1,7 1,3 1,7 1,5 1,5 1,1 1,4 1,8 1,8 1,4 1,8 1,6 ", "1,5 1,7 1,2 1,6 1,5 1,8 1,4 1,3 1,1 1,3 1,0 1,7 1,", "1 1,2 1,4 1,2 1,0 1,6 1,8 1,6 1,0 1,1 1,3 1,3 1,2 ", "1,7 1,3 1,6 1,5 1,8 1,5 1,7 1,0 1,5 1,7 1,1 1,5 1,", "8 1,1 1,6 1,2 1,0 1,7 1,5 1,8 1,8 1,8 1,0 1,2 1,6 ", "1,3 1,8 1,4 1,1 1,4 1,7 1,2 1,0 1,5 1,8 1,0 1,8 1,", "3 1,5 1,0 1,6 1,8 1,1 1,0 1,1 1,5 1,4 1,7 1,7 1,6 ", "1,6 1,3 1,2 1,2 1,5 1,5 1,1 1,0 1,5 1,6 1,8 1,3 1,", "3 1,1 1,0 1,6 1,8 1,4 1,1 1,3 1,3 1,4 1,0 1,1 1,4 ", "1,3 1,7 1,3 1,2 1,8 1,6 1,2 1,7 1,8 1,3 1,4 1,6 1,", "6 1,7 1,6 1,4 1,0 1,1 1,5 1,7 1,5 1,5 1,8 1,4 1,4 ", "1,4 1,3 1,7 1,2 1,8 1,5 1,7 1,0 1,8 1,3 1,1 1,2 1"};
    vector<string> transitions = {"YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY", "YYYYYYYYY"};
    int minLength = 1;
    int maxLength = 1000000000;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 17714635;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> songs = {"0 1,6 1,5 1,5 1,3 1,1 1,7 1,4 1,0 1,4 1,3 1,6 1,8 ", "1,1 1", ",5 1,1 1,7 1,0 1,4 1,8 1,2 1,8 1,6 1,7 1,1 1,8 1,0", " 1,8 1,3 1,4 1,6 1,3 1,7 1,4 1,5 1,6 1,2 1,2 1,0 1", ",2 1,4 1,8 1,1 1,2 1,5 1,5 1,1 1", ",8 1,5 1,7 1,1 1,6 1,8 1,0 1,0 1,6 1,1 1,4 1,7 1,5", " 1,5 1,0 1,7 1,5 1,0 1,7 1,2 1,8 1,7 1,8 1,3 1,4 1", ",2 1,2 1,4 1,4 1,5 1,0 1,", "2 1,3 1,7 1,3 1,3 1,5 1,8 1,5 1,4 1,4 1,1 1,2 1,7 ", "1,4 1,1 1,4 1,6 1,2 1,7 1,4 1,8 1,4 1,0 1,1 1,3 1,", "5 1,0 1,0 1,2 1,2 1,5 1,1 1,6 1,7 1,1 1,4 1,2 1,4 ", "1,8 1,8 1,5 1,1 1,6 1,3 1,6 1,7 1,6 1,5 1,6 1,5 1,", "6 1,0 1,0 1,4 1,0 1,8 1,7 1,8 1,6 1,1 1,2 1,3 1,1 ", "1,0 1,5 1,4 1,5 1,4 1,8 1,3 1,5 1,3 1,5 1,7 1,8 1,", "6 1,5 1,5 1,3 1,0 1,0 1,2 1,7 1,3 1,5 1,7 1,5 1,5 ", "1,2 1,", "4 1,8 1,3 1,6 1,4 1,0 1,7 1,8 1,8 1,2 1,2 1,6 1,2 ", "1,4 1,0 1,1 1,7 1,1 1,4 1,0 1,2 1,8 1,4 1,3 1,3 1,", "6 1,0 1,3 ", "1", ",3 1,2 1,4 1,4 1,6 1,0 1,1 1,7 1,5 1,5", " 1,5 1,7 1,3 1,8 1,6 1,4 ", "1,8 1", ",", "8", " 1", ",", "1 1,6 ", "1"};
    vector<string> transitions = {"YNNYNYYNN", "YYNNYNYNN", "NYYNNNNYY", "YYNYNNYYN", "NYNYYYYYN", "NNNYYYNYY", "NNNYNNYYY", "YYYNNNNYN", "YNNYYNNNY"};
    int minLength = 72857726;
    int maxLength = 520055012;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 283763544;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> songs = {"7 1,2 1,3 1,0 1,4 1,6 1,7 1,2 1,5 1,5 1,5 1,8 1,7 ", "1,6 1,0 1,7 1,5 1,5 1,0 1,7 1,6 1,4 1,0", " 1,6 1,7 1,4 1,7 1,0 1,0 1,0 1,7 1,3 1,3 1,6 1,5 1", ",0 1,3 1,8 1,8 1,5 1,7 1,5 1,2 1,3 1,1 1,6 1,5 1,6", " 1,8 1,3 1,1 1,6 1,3 1,6 1,0 1,0 1,1 1,3 1,0 1,2 1", ",6 1,4 1,0 ", "1,4 1,7 1,4 1,2 1,0 1,2 1,8 1,4 1,1 1,6 1,8 1,4 1,", "0 1,4 1,3 1,7 1,2 1", ",7 1,8 1,6 1,5", " 1,1 1,7 1,5 1,8 1,3 1,5 1,6 1,0 1,6 1,8 1,0 1,8 1", ",1 1,", "2 1,3 1,5 1,6 1,6 1,", "5 1,0 1,0", " 1,5 ", "1,2 1,5 1,1 1,0 1,2 1,", "5 ", "1", ",2", " 1"};
    vector<string> transitions = {"YYNYYNYYY", "YYYNYYYNY", "NNYNNYYYY", "NNYYYYNNY", "NYYNYYNNY", "NNNYYYYYN", "YNYNNNYNY", "YNNYYYNYN", "YNYNYNNYY"};
    int minLength = 1;
    int maxLength = 12000;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 524394552;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> songs = {"7 1,2 1,3 1,0 1,4 1,6 1,7 1,2 1,5 1,5 1,5 1,8 1,7 ", "1,6 1,0 1,7 1,5 1,5 1,0 1,7 1,6 1,4 1,0", " 1,6 1,7 1,4 1,7 1,0 1,0 1,0 1,7 1,3 1,3 1,6 1,5 1", ",0 1,3 1,8 1,8 1,5 1,7 1,5 1,2 1,3 1,1 1,6 1,5 1,6", " 1,8 1,3 1,1 1,6 1,3 1,6 1,0 1,0 1,1 1,3 1,0 1,2 1", ",6 1,4 1,0 ", "1,4 1,7 1,4 1,2 1,0 1,2 1,8 1,4 1,1 1,6 1,8 1,4 1,", "0 1,4 1,3 1,7 1,2 1", ",7 1,8 1,6 1,5", " 1,1 1,7 1,5 1,8 1,3 1,5 1,6 1,0 1,6 1,8 1,0 1,8 1", ",1 1,", "2 1,3 1,5 1,6 1,6 1,", "5 1,0 1,0", " 1,5 ", "1,2 1,5 1,1 1,0 1,2 1,", "5 ", "1", ",2", " 1"};
    vector<string> transitions = {"YYNYYNYYY", "YYYNYYYNY", "NNYNNYYYY", "NNYYYYNNY", "NYYNYYNNY", "NNNYYYYYN", "YNYNNNYNY", "YNNYYYNYN", "YNYNYNNYY"};
    int minLength = 4;
    int maxLength = 8192;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 53967803;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> songs = {"4 1,1 1,5 1,4 1,6 1", ",1 1,7 1,0 1,2 1,6 1,5 1,6 1,5 1,4 1,1 1,8 1,3 1,1", " 1,8 1,3 1,8 1,5 1,8 1,6 1,4 1", ",6 1,5 1,8 1,2 1,0 1,5 1,0 1,8 1,3 1,7 1,4 1,0 1,7", " 1,3 1,5 1,6 1,7 1,2 1,4 1,7 1,5 1,3 1,4 1,7 1,3 1", ",4 1,4 1,0 1,4 1", ",1 1,7 1,6 1,0 1,", "4 1,6 1,8 1,3 1,5 1,3 1,3 1,8 1", ",0 1,6 1,0 1,3 1,4 ", "1,1 1,8 1,4", " 1,", "8", " 1", ",7 ", "1"};
    vector<string> transitions = {"YYNYNNNNY", "NYNYNNYNN", "YNYYYNYNN", "YNYYYNYYN", "YNNNYNYNY", "YNNYNYNYY", "NNNYNNYYY", "NNNYNYNYN", "NNNYNNNNY"};
    int minLength = 16384;
    int maxLength = 16385;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 97364220;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> songs = {"6 1,1 1,4 1,1 1,0 1,2 1", ",8 1,6 1,3 1,0 1,8 1,0 1,8 1,1 1,3 1,3 1,5 1,5 1,0", " 1,3 1,1 1,8 1,7 1,5 1,4 1,8 1,4 1,3 1,2 1,0 1,4 1", ",3 1,3 1,0 1,2 1,3 1,5 1,1 1,2 1,6 1,5 1,4 1,7 1,8", " 1,8 1,5 1,8 1,4 1,4 1,1 1,6 1,4 1,6 1,1 1,1 1,0 1", ",8 1,2 1,8 1,7 1,5 1,5 1,8 1,8 1,3 1,0 1,8 1,8 1,8", " 1,0 1,2 1,4 1,2 1,6 1,1 1,5 1,3 1,5 1,5 1,4 1,0 1", ",7 1,6 1,8 1,8 1,7 1,7 1,4 1,8 1,5 1,0 1,6 1,2 1,3", " 1,2 1,8 1,4 1,3 1,8 1,2 1,5 1,8 1,6 1,5 1,6 1,4 1", ",6 1,0 1,6 1,6 1,6 1,2 1,4 1,3 1,0 1,2 1,2 1,2 1,1", " 1,2 1,8 1,0 1,1 1,4 1,6 1,0 1,1 1,6 1,2 1,0 1,6 1", ",2 1,8 1,1 1,6 1,2 1,8 1,1 1,0 1,5 1,1 1,6 1,5 1,4", " 1,3 1,1 1,7 1,3 1,3 1,6 1,5 1,2 1,5 1,7 1,3 1,1 1", ",4 1,3 1,3 1,0 1,4 1,2 1,1 1,7 1,2 1,1 1,3 1,1 1,8", " 1,4 1,6 1,5 1,3 1,5 1,0 1,2 1,2 1,1 1,3 1,8 1,0 1", ",1 1,5 1,5 1,1 1,0 1,0 1,1 1,3 1,7 1,6 1,4 1,7 1,4", " 1,1 1,8 1,0 1,1 1,2 1,0 1,8 1,7 1,7 1,7 1,5 1,1 1", ",6", " 1,0 1,3 1,8 1,4 1,5 1,7 1,7 1,7 1,7 1,3 1,7 1,4 1", ",1 1,0 1,8 1,0 1,3 1,3 1,2 1,4 1,3 1,6 1", ",7 1,2 1,6 1,6 1,2 1,6 1,0 1,1 1,6 1,0 1,6 1,7 1,3", " 1,6 1,2 1,3 1,4 1,7 1,6 1,1 1,7 1,5 1,7 1,0 1,5 1", ",4 1,7 1,7 1,3 1,7 1,0 1,4 1,6 1,4 1,5 1,4 1,8 1,1", " 1,6 1,", "7 1,0 1,0 1,2 1,1 1,6 1,2 1,8 1,2 1,6 1,1 1,8 1,2 ", "1,3 1,1 1,8 1,7 1,4 1,2 1,0 1,1 1,5 1,2 1,0 1,0 1,", "2 1,6 1,4 1,7 1,4 1,0 1,0 1,5 1,7 1,5 1,7 1,3 1,5 ", "1,0 1,2 1,5 1,7 1,7 1,2 1,8", " 1,", "2 1,7 1,2 1,1 1,4 1,8 ", "1,5 1,", "4 1,6 1,4 1,3 1,7 1,0 1,0 1,5 1,4 1,6 1,1 1,8 1,5 ", "1,", "8 1,7 1,6 1,7 1,3 1,7 1,7 1,0 1,8 1,3 1,5 1,3 1,7 ", "1,0 1,", "0 1,6 1,5 1,6 1,3 1,2 1,6 1,6 ", "1,8 1,6 1,8 1", ",6 1,0 1,2 1,5 1,1 1,0 1,5 1,0 1,2 1,8 1,2 1,7 1,0", " ", "1,2 1", ",2 1,5 1", ",7", " 1,", "4 ", "1"};
    vector<string> transitions = {"YNNYYNNNN", "YYNNNYYYY", "YNYNYNNNY", "YYYYNYYYY", "NYYNYNYNN", "NYNYYYNNN", "YNYNNNYNY", "NNNYYNNYN", "YNNNNYNNY"};
    int minLength = 23040871;
    int maxLength = 23051251;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 227986796;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> songs = {"8 9,7 4,0 5,1 1,8 7,5 4,1 5,0 4,2 7,0 3,1 1,0 8,3 ", "3,4 2,3 7,8 5,7 1,6 5,6 3,2 2,1 5,2 2,7 3,5 3,4 7,", "4 3,4 8,3 8,7 9,1 9,7 9,2 7,5 2,3 3,3 8,3 6,0 5,7 ", "9,2 2,7 9,3 5,5 8,0 8,3 4,3 3,0 2,6 6,8 3,2 9,8 5,", "5 7,7 5,0 1,1", " 6,", "7 2,4 3,0 4,7 2,5 1,5 4,3 3,8 2,4 8,8 7,1 1,1 7,2 ", "6,0 8,5 4,3 8,0 5,0 4,6 6,4 4,3 3,6 7,5 5,4 8,3 3,", "0 2,0 4,7 6,8 7,6 7,6 8,0 6,8 2,6 6,7 8,7 6,6 8,4 ", "2,6 2,1 6,0 2,4 1,1 1,2 8,6 4,4 1,3 7", ",3 4,4 7,8 6,7 9,8 4", ",8 7,1 2,0 9,8 8,6 2,7 6,0 8,3 3,2 1,2 6,6 4,5 8,2", " 4,6 7,3 7,6 6,1 9,8 4,0 4", ",3 8,7 4,5 6,6 5,2 7,2 8,8 9,0 3,8 1,8 7,2 7,0 9,1", " 7,6", " 9,7 2,0 5,8 5,0 7,7 2,2 1,4 5,0 1,8 9,4 7,4 6,0 6", ",1 6,8 7,8 1,2 5,3 3,2 2,3 5,8 6,4 2,1 7,6 9,8 4,0", " 8,6 8", ",1 3,1 4,4 2,3 6,1 1,8 9,0 2,8 6,5 1,8 4,5 2,4 5,1", " 9,7 6,4 5,2 2,8 7,0 9,0 2,0 2,8 5,6 2,4 2,0 4,8 4", ",3", " 1,5 5,5 8,0 3,3 5", ",3 3,4 2,0 4,6 2,1 9,0 6,8 4,0 6,6 6,2 5,2 6,2 4,0", " 7,7 2,6 5,2 3,1 3,1 3,2 1,8 5,0 4,6", " 3,0 8,2 3,1 1,3 4,0 2,1 7,", "1 1,0 9,8 4,3 6,4 2,7 7,3 8,7 8,3 1,0 7,3 9,5 1,", "2 8,2 7,4 8,3 9,3 3,5 4,5 4,2 6,4 4,7 9,", "3", " 5,5 3,8 5,6 4,5 6"};
    vector<string> transitions = {"YYNNNYNNY", "NYNNYNYNN", "NYYNNYYNY", "YNYYYYYYY", "NYNNYYYNY", "NNYNNYNNY", "NNNYNYYNY", "YNNYYNNYN", "NNYNNNYNY"};
    int minLength = 45816462;
    int maxLength = 154911444;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 561110396;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> songs = {"0 9,3 9,7 9,7 9,8 9,8 9,0 9,6 9,7 9,4 9,0 9,1 9,6 ", "9,8 9,7 9,2 9,7 9,8 9,4 9,7 9,3 9,3 9,1 9,0 9,4 9,", "1 9,5 9,2 9,8 9,0 9,1 9,5 9,6 9,5 9,8 9,6 9,2 9,3 ", "9,8 9,2 9,4 9,4 9,5 9,4 9,5 9,5 9,4 9,6 9,3 9,1 9,", "0 9,8 9,5 9,1 9,8 9,6 9,0 9,6 9,6 9,7 9,2 9,6 9,7 ", "9,8 9,3 9,6 9,8 9,5 9,1 9,8 9,3 9,8 9,7 9,7 9,5 9,", "6 9,8 9,2 9,6 9,8 9,7 9,1 9,3 9,0 9,6 9,7 9,2 9,5 ", "9,1 9,8 9,1 9,0 9,6 9,2 9,3 9,5 9,4 9,0 9,6 9,2 9,", "8 9,8 9,2 9,0 9,8 9,6 9,3 9,5 9,4 9,1 9,8 9,5 9,8 ", "9,3 9,0 9,5 9,8 9,3 9,0 9,0 9,1 9,8 9,3 9,1 9,8 9,", "2 9,0 9,7 9,6 9,1 9,3 9,1 9,8 9,4 9,0 9,8 9,7 9,6 ", "9,4 9,1 9,5 9,7 9,6 9,2 9,7 9,8 9,1 9,7 9,8 9,8 9,", "1 9,3 9,5 9,6 9,7 9,2 9,6 9,6 9,3 9,4 9,8 9,0 9,1 ", "9,7 9,0 9,4 9,6 9,3 9,0 9,7 9,6 9,5 9,5 9,3 9,6 9,", "8 9,1 9,2 9,6 9,3 9,8 9,8 9,2 9,8 9,1 9,4 9,0 9,6 ", "9,7 9,3 9,8 9,4 9,5 9,8 9,6 9,8 9,6 9,0 9,0 9,1 9,", "2 9,5 9,1 9,7 9,8 9,2 9,3 9,4 9,1 9,8 9,3 9,6 9,5 ", "9,7 9,4 9,1 9,2 9,1 9,2 9,5 9,6 9,3 9,3 9,8 9,0 9,", "1 9,5 9,6 9,1 9,0 9,4 9,4 9,5 9,5 9,5 9,3 9,1 9,6 ", "9,1 9,3 9,4 9,5 9,2 9,8 9,8 9,3 9,6 9,3 9,0 9,2 9,", "5 9,2 9,7 9,8 9,8 9,6 9,7 9,8 9,6 9,7 9,6 9,2 9,5 ", "9,4 9,2 9,2 9,3 9,4 9,8 9,3 9,5 9,6 9,4 9,0 9,7 9,", "7 9,4 9,5 9,6 9,4 9,5 9,0 9,7 9,2 9,2 9,7 9,1 9,3 ", "9,6 9,3 9,2 9,7 9,2 9,8 9,1 9,0 9,4 9,1 9,8 9,8 9", ",5 9,6 9,7 9,2 9,0 9,1 9,8 9,2 9,6 9,1 9,2 9,4 9,5", " 9,7 9,4 9,5 9,5 9,0 9,4 9,5 9,3 9,3 9,6 9,0 9,7 9", ",3 9,2 9,5 9,1 9,8 9,3 9,0 9,6 9,0 9,8 9,5 9,4 9,1", " 9,7 9,6 9,8 9,4 9,7 9,2 9,7 9,1 9,4 9,1 9,2 9,5 9", ",7 9,3 9,4 9,0 9,8 9,3 9,0 9,2 9,7 9,6 9,6 9,1 9,1", " 9,4 9,1 9,4 9,8 9,2 9,3 9,6 9,7 9,0 9,4 9,0 9,1 9", ",7 9,2 9,3 9,1 9,3 9,8 9,2 9,8 9,6 9,1 9,5 9,4 9,4", " 9,4 9,6 9,1 9,6 9,0 9,6 9,0 9,7 9,0 9,5 9,6 9,8 9", ",6 9,2 9,1 9,5 9,7 9,1 9,0 9,5 9,8 9,5 9,1 9,4 9,6", " 9,8 9,5 9,1 9,6 9,8 9,7 9,8 9,5 9,7 9,7 9,7 9,0 9", ",4 9,2 9,6 9,8 9,3 9,3 9,5 9,1 9,2 9,1 9,6 9,6 9,5", " 9,8 9,8 9,0 9,4 9,4 9,1 9,3 9,8 9,6 9,8 9,0 9,6 9", ",3 9,2 9,0 9,7 9,5 9,7 9,0 9,5 9,6 9,2 9,4 9,8 9,2", " 9,0 9,5 9,3 9,2 9,8 9,8 9,4 9,1 9,1 9,2 9,1 9,8 9", ",6 9,2 9,3 9,2 9,4 9,4 9,1 9,8 9,2 9,3 9,5 9,5 9,1", " 9,3 9,1 9,3 9,4 9,0 9,3 9,7 9,7 9,4 9,2 9,5 9,1 9", ",5 9,1 9,8 9,4 9,4 9,8 9,7 9,6 9,2 9,5 9,6 9,6 9,8", " 9,0 9,4 9,7 9,3 9,2 9,4 9,1 9,7 9,4 9,5 9,8 9,4 9", ",6 9,2 9,8 9,2 9,7 9,1 9,7 9,2 9,3 9,3 9,2 9,6 9,7", " 9,4 9,5 9,1 9,8 9,5 9,1 9,4 9,1 9,0 9,2 9,6 9,8 9", ",1 9,2 9,4 9,4 9,4 9,5 9,0 9,0 9,7 9,4 9,0 9,4 9,4", " 9,8 9,3 9,0 9,0 9,2 9,7 9,5 9,8 9,5 9,4 9,6 9,7 9", ",4 9,1 9,6 9,7 9,7 9,4 9,5 9,1 9,6 9,4 9,6 9,8 9,5", " 9,8 9,5 9,1 9,2 9,4 9,1 9,6 9,0 9,2 9,2 9,1 9,5 9", ",3 9,2 9,3 9,2 9,1 9,1 9,8 9,3 9,1 9,5 9,3 9,2 9,0", " 9,8 9,7 9,4 9,8 9,0 9,1 9,0 9,8 9,8 9,2 9,8 9,5 9"};
    vector<string> transitions = {"YYNYNYNNY", "NYNNYNYYN", "NNYNNYNYY", "NNNYYYNNN", "NYNNYYYYN", "YNYNNYNNN", "YYNYYYYNN", "NNNNNNNYN", "YNYNYYNNY"};
    int minLength = 222222222;
    int maxLength = 333333333;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 515254157;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> songs = {"4 8,2 7,8 4,8 9,0 5,1 4,4 7,7 1,7 3,0 8,0 7,4 6,5 ", "4,1 8", ",5 3,8 9,5 4,3 7,2 9,2 5,2 7,4 3,1 4,0 5,6 4,3 2,8", " 3,3 5,0 7,0 1,5 4,0 3,4 5,2 9,1 7,7 5,1 8,5 3,", "0 2,8 5,8 8,6 7,8 6,1 9,3 7,4 2,5 6,8 4,2 5,6 2,4 ", "5,3 5,7 7,1 7,8 1,3 5,5 2,3 6,2 1,6 2,4 2,5 6,6 4,", "5 5,0 3,5 9,3 6,3 2,7 2,7 1,7 3,8 5,8 2,7 6,5 4,5 ", "6,3 5,2 2,7 5,6 8,8 3,1 5,3 6,1 5,8 1,8 9,6 9,5 7,", "0 7,4 3,1 1,5 4,7 2,3 1,8 4,6 9,1 9,7 6,4 8,3 6,8 ", "4,6 1,2 2,2 3,8 5,8 7,2 9,1 2,2 1,7 6,8 8,1 5,3 3,", "2 4,5 9,3 1,8 6,4 8,5 4,0 7,7 3,7 2,7 8,5 6,1 2,5 ", "4,6 2,5 1,3 9,6 1,5 1,0 6,2 2,2 5,7 2,6 7,0 4,7 9,", "7 3,5 9,1 7,6 9,6 6,7 9,6 9,0 1,8 9,6 6,4 4,7 5,4 ", "8,0 1,5 6,1 6,7 8,7 9,3 7,6 7,1 3,4 2,8 2,1 2,5 7,", "2 2,8 6,3 3,1 1,5 4,2 9,4 7,4 7,6 7,7 8,0 4,2 7,2 ", "3,8 1,4 9,4 4,0 6,7 6,2 1,7 8,5 9,5 5,2 8,5 4,3 6,", "7 1,2 8,6 3,4 8,6 6,8 8,2 4,2 6,6 5,4 4,5 7,6 9,7 ", "3,8 2,7 5,7 4,2 7,7 3,0 5,4 7,8 6,0 7,2 5,5 5,0 1,", "3 1,7 7,2 5,4 2,4 2,8 7,2 2,8 1,5 5,0 4,0 8,3 9,1 ", "7,8 4,0 3,0 5,0 7,3 2,6 8,0 1,2 7,7 9,7 4,4 8,2 1,", "1 1,1 6,3 1,1 5,0 3,4 7,1 3,7 9,0 7,6 5,4 3,6 1,8 ", "2,7 9,8 6,2 6,4 1,0 6,8 8,6 8,4 5,7 3,5 3,5 7,2 9,", "0 6,0 5,8 6,4 7,6 7,0 1,3 6,7 9,8 3,0 4,6 1,6 8,2 ", "2,2 4,4 2,1 7,5 2,1 4,1 4,4 7,3 6,1 6,1 8,8 3,1 5,", "7 5,4 8,0 8,4 3,5 1", ",3 7,2 1,7 8,0 5,8 2,5 7,0 9,3 5,3 6,1 1,8 9,4 1,7", " 6,2 4,0 8,6 7,4 1,4 2,3 2,7 2,1 7,2 9,1 3,1 8,1 1", ",4 9,2 4,3 6,8 3,2 2,3 1,2 1,1 6,6 6,7 7,3 5,6 9,3", " 7,", "0 6,5 3,1 2,5 1,4 6,8 6,2 8,0 5,7 7,8 2,0 6,7 1,1 ", "9,6 6,4 2,7 9,4 2,2 9,3 6,2 9,5 2,7 4,2 6,6 5,2 3,", "1 2,0 8,7 1,0 8,8 2,6 7,3 7,6 5,1 9,6 ", "3,3 5,6 3,6 6,1 4,5 8", ",8 5,8 5,7 7,4 9,8 8,3 3,3 6,6 8,6 7,0 2,1 3,1 1,3", " 7,6 2,6 3,3 1,1 8,2 2,4 5,4 8,4 6,7 9,5 5,0 2,7 2", ",6 6,5 1,7 8,4 5,5 4,3 9,3 5,4 2,3 4,4 7,3 2,8 3,1", " 8,8 4,3 2,8 7,7 2,6 1,5 2,4 1,3 4,0 7,5 4,0 2,2 6", ",7 8,1 6,6 9,7 6,5 8,6 7,2 4,0 9,2 8,6 7,1 5,3 1,3", " 1,2 8,2 9,0 4,3 3,8 1,5 6,6 5,8 5,0 4,0 3,0 9,5 3", ",4 1,1 9,8 4,2 5,0 3,3 6,0 3,0 7,0 8,2 9,0 5,3 9,2", " 6,0 4,6 3,3 5,7 2,3 7,0 2,5 3,3 5,1 4,8 9,5 1,8 3", ",8 8,3 4,4 4,7 6,1 5,8 4,0 1,5 3,5 1,4 4,4 3,6 5,0", " 4,2 7,5 8,6 4,4 5,3 2,5 5,5 6,8 8,3 4,4 7,4 9,7 8", ",3 9,5 5,2 4,2 3,1 9,4 5,2 4,5 2,4 1,0 6,4 2,8 6,8", " 7,2 4,5 6,5 3,8 4,0 5,3 1,0 2,2 1,0 4,2 5,7 6,1 7", ",2 8,7 1,5 3,5 9,8 7,0 5,5 3,2 2,0 3,0 4,2 2,3 5,8", " 2,8 6,3 5,2 2,6 8,8 2,3 4,2 3,8 8,3 7,3 8,8 9,7 7", ",4 1,4 3,3 4,4 6,3 3,8 2,6 5,8 5,1 8,0 1,4 7,4 5,5", " 2,1 3,4 9,4 9,3 2,6 5,0 6,0 1,8 1,6 3,0 1,0 2,6 7", ",6 1,8 7,3 3,0 2,1 6,3 9,5 3,8 5,4 3,6 7,4 7,8 2"};
    vector<string> transitions = {"YNYNYNYNY", "NYNNYNYNY", "YYYYNYYYY", "NYNYNYNNN", "NYNNYYYNY", "YYNYNYNNN", "NNNNNNYNY", "NNYYYNYYN", "YNYNNNNYY"};
    int minLength = 666666666;
    int maxLength = 898989989;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 177769693;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> songs = {"1 7,7 5,8 4,5 1,1 3,5 5,3 9,7 7,1 9,1 7,5 6,3 2,6 ", "2,5 5,8 6,2 4,2 6,2 4,1 3,4 8,8 2,4 8,5 5,2 9,8 9,", "6 1,7 5,1 2,4 6,8 2,0 5,5 9,5 5,8 2,1 1,4 9,3 4,7 ", "8,3 4,2 5,4 7,5 5,7 6,7 8,5 6,3 6,5 4,7 9,2 8,7 1,", "0 3,1 8,1 2,5 2,4 5,6 8,4 7,6 2,5 3,6 8,4 1,8 1,3 ", "2,0 3,4 4,1 7,0 9,0 9,7 5,0 2,8 5,8 8,3 6,8 9,6 3,", "1 8,6 9,3 7,5 3,6 1,5 5,7 8,6 1,2 7,7 3,6 1,6 7,6 ", "6,1 9,4 9,5 2,7 ", "3,6 1,5 5,2 5,3 7,0 5,8 2,0 8,4 8,5 1,6 5,6 7,5 1,", "7 4,8 9,3 5,7 2,1 9,3 1,3 1,4 2,2 8,8 8,7 7,7 2,0 ", "1,5 6,8 4,1 6,5 7,6 7,6 4,8 8,2 9,1 4,8 4,0 4,4 6,", "4 2,4 3,2 2,1 4,5 8,4 3,5 6,0 3,3 7,1 1,4 8,6 7,7 ", "1,5 1,8 7,5 3,2 1,3 8,2 6,7 7,4 7,5 8,3 8,7 3,7 7,", "1 7,0 9,1 7,6 6,0 4,4 3,6 9,8 7,4 6,8 4,6 3,1 3,8 ", "3,0 4,5 9,4 8,1 3,5 1,3 8,7 8,6 3,8 9,2 3,6 3,6 1,", "2 5,3 9,4 4,1 6,3 7,5 2,5 1,6 7,6 8,8 8,1 2,7 9,7 ", "7,1 8,3 5,8 8,2 2,5 5,3 3,2 6,3 5,2 9,1 1,7 1,6 3,", "5 4,7 1,5 3,0 3,0 5,6 7,1 3,7 3,3 4,4 3,0 9,0 1,5 ", "1,1 8,0 9,7 5,3 5,2 3,6 7,8 6,7 9,7 9,5 2,1 9,2 7,", "5 4,1 1,1 2,1 3,8 4,3 8,1 5,1 6,2 3,7 4,6 1,0 1,5 ", "4,1 4,0 9,6 3,8 9,1 9,5 2,8 9,6 5,6 6,4 2,5 9,0 9,", "4 9,7 8,2 6,0 1,2 4,0 5,5 3,8 6,4 5,7 4,0 5,6 9,8 ", "9,1 2,1 9,3 6,2 5,6 4,5 1,0 5,8 7,3 7,8 7,2 4,6 6,", "7 8,7 4,0 9,7 6,1 2,6 4,0 7,7 5,3 6,4 8,6 7,0 1,7 ", "9,0 7,2 4,0 1,1 2,1 8,2 9,0 9,1 1,6 5,2 8,1 9,1 6,", "2 7,1 4,7 3,0 5,2 8,3 2,7 2,2 ", "7,6 4,0 9,0 1,4 2,8 1,2 4,7 7,8 1,2 9,5 3,8 5,0 4,", "3 9,6 5,3 1,5 7,2 2,6 3,6 6,3 2,8 6,8 3,2 1,6 3,2 ", "4,6 2,8 4,4 8,3 7,1 7,8 2,4 3,7 7,8 1,6 7,6 5,4 2,", "8 8,1 7,6 2,2 9,2 2,0 3,7 5,7 7,2 3,3 1,8 8,6 7,1 ", "6,2 5,0 2,6 2,2 1,4 3,6 5,4 8,7 7,2 5,1 1,3 2,1 8,", "2 5,3 4,4 5,5 6,1 2,0 2,2 5,6 2,5 4,8 9,4 7,4 4,3 ", "6,5 7,3 2,1 9,2 6,6 2,1 6,3 5,7 6,4 5,8 9,6 6,3 3,", "7 1,4 1,5 7,8 6,", "5 4,1 7,1 2,8 9,3 7,4 1,2 7,5 9,6 8,6 4,4 2,8 9,5 ", "3,1 2,5 5,8 5,8 9,7 8,8 4,3 2,0 5,3 5,2 3,2 4,6 5,", "1 9,0 1,8 8,1 8,8 9,0 4,7 1,2 3,1 4,4 8,4 6,7 7,4 ", "7,2 8,5 7,1 4,8 9,8 6,3 1,5 8,7 3,5 3,1 8,1 4,6 1,", "7 5,3 5,0 3,3 6,2 2,1 7,8 8,6 5,7 3,0 2,6 6,2 1,6 ", "8,7 6,1 1,1 7,6 2,3 2,4 3,0 7,3 3,6 2,6 7,3 9,0 9,", "4 9,0 8,7 9,8 3,5 3,1 8,3 6,7 8,8 4,5 1,1 9,8 8,7 ", "3,2 5,3 4,1 8,1 1,0 1,6 5,0 4,5 5,6 4,3 9,6 4,8 6,", "5 5,6 7,8 2,0 8,8 9,3 1,7 1,5 3,7 6,3 4,4 6,3 2,6 ", "7,1 7,8 2,7 8,6 6,0 7,5 4,5 4,8 1,7 7,3 1,6 5,5 8,", "3 6,2 4,4 7,8 4,1 2,2 1,7 5,5 9,1 5,8 7,6 3,7 1,2 ", "2,4 1,5 4,6 6,8 3,0 6,3 4,7 9,4 1,3 9,5 8,1 3,1 6,", "6 5,8 3,2 2,7 4,1 9,2 9,8 1,8 1,4 4,8 7,5 3,6 4,3 ", "5,6 8,0 9,6 4,1 5,4 7,4 7,4 9,4 7,7 6,5 9,7 7,3 2,", "4 6,8 7,1 9,5 1,0 8,5 5,4 7,0 2,0 8,1 1,4 6,", "7 3,5 3,6 4,5 3,8 3,4 9,8 4,7 7,2 2,1 6,6 9,0 4"};
    vector<string> transitions = {"YNYYYYNYY", "NYYNYYYYY", "YNYNYNYNY", "YYYYNYNNN", "NYNNYYNYN", "NYNNNYNYN", "YYNNNYYYY", "YNYYNNNYN", "YYYYYNNNY"};
    int minLength = 1000000000;
    int maxLength = 1000000000;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 307624848;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> songs = {"2 2,3 5,0 5,6 3,4 4,7 3,0 4,7 2,0 2,4 5,8 1,4 2,0", " 4,3 2,2 1,8 3,7 4,8 3,3 2,6 1,1 3,6 3,6 5,0 2,8 1", ",1 1,0", " 3,4 5,3 2,0 1,6 4,2 2,3 3,0 2,6 4,1 3,2 3,3 2,7 4", ",2 3,7", " 3,4 2,8 3,3 5,4 1,2 1,4 1,8 2,0 3", ",2 4,7 5,6 2,4 3,3 4,0 4,0 5,7 1,0 1,7 5,1 2,1 4,8", " 5,7 3,1 3,5 2,7 3", ",2 1,5 4,3 1,", "8 3,3 5,3 1,0 2,5 4,3", " 5,1 2,7 3,8 4,2 3,1 4,6 4,3 2,4", " ", "4", ",3", " 2,5 2,", "4 1,3 4,7 5,6", " ", "4,3 4,4 3,8 1,2 3,7 3,8 1,4 1,5 3,5 1,4", " 4,", "4", " 3,6 ", "1,7", " ", "2,3 5,", "6", " 2"};
    vector<string> transitions = {"YNYNYNNNN", "NYNNYYYYN", "NNYNNNNYN", "NNNYNYNYY", "NNYNYYNNY", "YYYYNYYNN", "NYNNYNYNY", "YNNYNNNYN", "YYYNNNYNY"};
    int minLength = 536870911;
    int maxLength = 939524096;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 56130206;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> songs = {"2 5,5 3,1 1,1 2,6 5,5 2,2 2,6 5,4 1,8 2,6 4,6 3,6 ", "4,4 2,4 1,3 4,1 1,3 3,6 5,4 3,8 3,5 4", ",5 3,2 3,8 1,1 3,5 4,8 5,8 3,4 4,0 2,1 3,2 5,6 2,8", " ", "5,1 2,2 3,3 1,0 2,5 1,2 2,6 4,7 4,6 5,5 2,3 3,2 5,", "6 3,5 1,6 4,7 5,2 3,6 4,7 4,0 3,1 4,6 1,8 3,6 5,5 ", "2,6 2,5 1,6 4,7 2,6 2,1 2,8 5,2 4,6 3,4 3,0 5,8 1,", "6 2,2 1,6 5,5 2,6 4,3 3,8 3,3 1,5 2,7 5,7 5,4 1,7 ", "1,5 4,4 5,7 4,5 4,4 2,1 1,1 1,0 5,7 3,5 4,2 5,0 3,", "3 2,6 1,2 2,4 4,6 1,7 5,6 1,5 1,0 1,0 4,4 3,2 5,7 ", "4", ",7 4,5 2,6 3,8 4,7 3,6 5,1 1,1 4,8 3,8 3,3 3,0 2,5", " 1,6 1,3 5,5 5,3 4,7 2,6 5,6 5,7 3,4 5,2 1,3 4,1 5", ",4 1,2 5,2 3,6 3,0 4,3 5,0 5,2 4,6 4,5 1,2 4,7 2,2", " 1,6 4,5 4,8 3,1 1,1 1,6 3,0 1,7 4,2 2,4 4,1 1,4 5", ",6 3,0 3,7 1,1 3,6 2,3 5,0 3,8 1,8 5,0 4,0 2,7 4,0", " 4,1 5,1 4,5 4,1 1,4 4,1 3,5 4,1 4,5 3,0 2,1 3,0 3", ",6 1,6 5,1 3,0 3,2 2,2 1,6 3,4 1,4 3,5 1,4 2,2 2,1", " 2,6", " 3,4 4,", "0 4,6 3,7 5,7 1,0 3,5 3,3 5,3 5,8 5,7 5,5 5,4 1,5 ", "2,3 2,3 4,2 1,8 3,3 1,4 4,1 3,4 5", ",5 1,7 4,5 1,4 4,8 1,2 4,0 3,4 3,1 1,7 3,3 5,4 1,6", " 3,5 3,4 2,3 3,4 3,5 1,1 5,2 1,4 5,5 1,6 5,6 2,0 4", ",3 5,7 2,0 1,3 2,8 5,7 1,4 1,5 3,7 1,0 4,3 2,7 1,0", " 1,8 1,1 5,5 5,5 2,4 2,4 3,8 2,0 4,0 5,3 1,4 3,1 3", ",5 5,1 3,8 3,0 4,8", " 2,7 5,4 ", "3,", "5 1,2 1", ",2 1,0 3", ",1 ", "4,4 1", ",4 ", "4", ",5 3,1 4,", "6", " ", "1,", "6 3"};
    vector<string> transitions = {"YYYNNNYNY", "NYYNYNNNY", "NYYNYYNYY", "YNNYYNNYY", "NYYNYYYYN", "NYNYYYYNN", "YYNNYYYYY", "NNNYNNNYN", "NNYNYYNNY"};
    int minLength = 1;
    int maxLength = 805306367;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 226183505;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> songs = {"1 2,6 3,0 3,3 5,8 2,2 2,5 1,8 2,5 3,3 2,3 2,7 5,4 ", "2,8 5,1 5,0 3,3 3,3 1,4 5,5 3,2 2,3 2,7 1,0 2,4 4,", "4 4,0 4,3 4,8 1,3 2,4 1,7 4,3 2,3 5,6 1,8 4,0 5,0 ", "1,7 4,4 5,1 5,0 4,8 4,4 3,3 1,0 5,1 2,2 5,7 4,4 2,", "6 5,6 5,7 5,8 2,0 5,5 3,4 5,7 3,5 2,1 2,2 3", ",2 4,3 5,4 4,4 1,7 5,7 3,1 3,7 3,1 4,0 4,4 4,2 5,2", " 1,2 3,4 1,0 1,1 1,8 1,", "2 4,2 4,0 3,7 3,3 3,0 1,0 1,5 1,3 4,3 3", ",2 5,4 3,5 4,1 5,7 5,3 4,1 3,7 1,4 5,2 3,2 4,5 2,8", " 1,6 1,2 3,5 5,5 4,6 2,2 1,5 1,3 5,7 4,4 4,2 1,7 3", ",7 4,1 4,2 5,1 5,4 1,0 3,8 5,2 3,3 1,2 4,4 3,0 3,5", " 4,2 4,7 2,8 1,6 2,1 5,3 3,5 1,2 4,7 5,0 1,2 3,1 2", ",7 2,5 1,5 4,0 4,2 4,2 3,0 3,2 2,0 4,4 5,0 2,1 5,5", " 2,2 3,8 4,1 1,4 5,0 2,0 5,4 4,1 1,0 4,8 3,0 5,4 5", ",4 3,0 5,3 4,5 5,0 3,4 4,6 5,2 3,2 3,5 3,6 4,2 4,7", " 3,0 5,5 2,8 3,0 1,4 3,6 3,7 1,7 4,3 2,4 2,1 5,7 3", ",4 1,2 1,0 2,5 5,5 1,5 3,0 2,3 1,7 3,8 5,0 3,1 5,3", " 5,2 4,6 3,7 3,8 4,1", " 1,4 5,0 2,7 2,6 4,5 2,8 3,2 1,3 2,2 4,7 3,2 3,7 2", ",", "1 2,2 2", ",4 4,6 1,7 3,0 4,3 1,5 3,5 3,2 4,2 1,1 2,2 5,6 3,8", " 2,8 1,2 4,1 4,0 4,5 2,1 5,3 5,7 2,5 5,1 2,2 5,6 4", ",4 5,0 4", ",7 3,6", " 5,1 5,7 4,3 1,7 3,2 5,0 2,8 3,4 1,3 3,1 1,1 2,2 4", ",", "3 3,3 2,5 2,8 2,4 1,6 2,5 2,5 3,8 4,5 1,7 2,6 4,0 ", "5", ",8 1,", "4 3,2 1,2 5,1 2,1 5,7 1,7 1,0 2,1 ", "1,7 2,4 1,8 5,6 ", "5,7 5,6 4,3 1,2 4,7 ", "5,2 4,5 4,3 5,1 1,", "7 3,", "0 1,", "5 2", ",4 2", ",8 ", "1,6 ", "1,", "5 ", "5"};
    vector<string> transitions = {"YYYYYYNNY", "NYYNYYYNN", "YYYNNNNYN", "YNNYNNYYN", "YNYNYNNNN", "NYYNNYNNY", "NYNNNYYYY", "YYNYYNYYY", "NNNNNNYNY"};
    int minLength = 1;
    int maxLength = 536870911;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 81760531;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> songs = {"0 8,", "5 6,2", " 2,2 3,6 8,5 8,5 3,0 6,0 7,6 5,3 2", ",0 9,2 3,3 4,5 4,3 3,3 3,2 8,2 9,5 7,2 8,0 1,5 9,1", " 8,2 9,1 6,3 6,2 6,0 4,6 3,1 5,2 7,4 5,3 3,0", " 5,6 1,5 6,4 8,5 9,1 4,2 9,5 6,5 6,0 8,3 5,4 6,0 3", ",4 2,5 6,6 2,4 3,1 3,6 3,0 8,2 8,3 7,4 2,0 7,0 2,1", " 3,4 7,6 3,6 4,3 9,0 2,0 7,0 8,6 4,1 3,2 5,0 6,5 4", ",3 2,3 2,1 5,2 1,5 2,4 8,0 5,1", " ", "7,2 6,5 7", ",", "6 9,5 5,", "4 2", ",4", " 9,0 5,4 8,6 5,5 9,5 8,3 ", "2", ",5 ", "6,2 3,0 7,1 7,", "2 1,0 4", ",2 9", ",", "3", " ", "4"};
    vector<string> transitions = {"YYYYYYY", "YYYYYYY", "YYYYYYY", "YYYYYYY", "YYYYYYY", "YYYYYYY", "YYYYYYY"};
    int minLength = 1;
    int maxLength = 10000;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 348387817;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> songs = {"0 8,", "5 6,2", " 2,2 3,6 8,5 8,5 3,0 6,0 7,6 5,3 2", ",0 9,2 3,3 4,5 4,3 3,3 3,2 8,2 9,5 7,2 8,0 1,5 9,1", " 8,2 9,1 6,3 6,2 6,0 4,6 3,1 5,2 7,4 5,3 3,0", " 5,6 1,5 6,4 8,5 9,1 4,2 9,5 6,5 6,0 8,3 5,4 6,0 3", ",4 2,5 6,6 2,4 3,1 3,6 3,0 8,2 8,3 7,4 2,0 7,0 2,1", " 3,4 7,6 3,6 4,3 9,0 2,0 7,0 8,6 4,1 3,2 5,0 6,5 4", ",3 2,3 2,1 5,2 1,5 2,4 8,0 5,1", " ", "7,2 6,5 7", ",", "6 9,5 5,", "4 2", ",4", " 9,0 5,4 8,6 5,5 9,5 8,3 ", "2", ",5 ", "6,2 3,0 7,1 7,", "2 1,0 4", ",2 9", ",", "3", " ", "4"};
    vector<string> transitions = {"YYYYYYY", "YYYYYYY", "YYYYYYY", "YYYYYYY", "YYYYYYY", "YYYYYYY", "YYYYYYY"};
    int minLength = 1;
    int maxLength = 1000000000;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 431957168;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> songs = {"0 8,", "5 6,2", " 2,2 3,6 8,5 8,5 3,0 6,0 7,6 5,3 2", ",0 9,2 3,3 4,5 4,3 3,3 3,2 8,2 9,5 7,2 8,0 1,5 9,1", " 8,2 9,1 6,3 6,2 6,0 4,6 3,1 5,2 7,4 5,3 3,0", " 5,6 1,5 6,4 8,5 9,1 4,2 9,5 6,5 6,0 8,3 5,4 6,0 3", ",4 2,5 6,6 2,4 3,1 3,6 3,0 8,2 8,3 7,4 2,0 7,0 2,1", " 3,4 7,6 3,6 4,3 9,0 2,0 7,0 8,6 4,1 3,2 5,0 6,5 4", ",3 2,3 2,1 5,2 1,5 2,4 8,0 5,1", " ", "7,2 6,5 7", ",", "6 9,5 5,", "4 2", ",4", " 9,0 5,4 8,6 5,5 9,5 8,3 ", "2", ",5 ", "6,2 3,0 7,1 7,", "2 1,0 4", ",2 9", ",", "3", " ", "4"};
    vector<string> transitions = {"YYYYYYY", "YYYYYYN", "YYYYYYY", "YYYYYYY", "YYYYYYY", "YYYYYYY", "YYYYYYY"};
    int minLength = 1;
    int maxLength = 10000;
    ShuffledPlaylist* pObj = new ShuffledPlaylist();
    clock_t start = clock();
    int result = pObj->count(songs, transitions, minLength, maxLength);
    clock_t end = clock();
    delete pObj;
    int expected = 258433268;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15657561&rd=13751&pm=10486
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
 
const int MOD = 600921647;
 
int n, gap[1000], len[1000], A[101][101], B[101][101], C[101][101], D[101][101], T[101][101];
 
class ShuffledPlaylist
{
public:
  void multiply(int C[101][101], int A[101][101], int B[101][101])
  {
    int C2[101][101];
    for (int i = 0; i < 101; i++)
      for (int j = 0; j < 101; j++)
      {
        long long t = 0;
        for (int k = 0; k < 101; k++) if (A[i][k] != 0 && B[k][j] != 0)
        {
          t += (long long)A[i][k] * B[k][j];
          t %= MOD;
        }
        C2[i][j] = (int)t;
      }
    for (int i = 0; i < 101; i++)
      for (int j = 0; j < 101; j++)
        C[i][j] = C2[i][j];
  }
  void doIt(int ew)
  {
    if (ew == 0)
    {
      memset(B, 0, sizeof(B));
      for (int i = 0; i < 101; i++) {
        B[i][i] = 1;
      }
      return;
    }
    if (ew % 2 == 1)
    {
      doIt(ew - 1);
      multiply(B, B, A);
    }
    else
    {
      doIt(ew / 2);
      multiply(B, B, B);
    }
  }
  void doIt2(int ew)
  {
    if (ew == 0)
    {
      memset(B, 0, sizeof(B));
      for (int i = 0; i < 101; i++) {
        B[i][i] = 1;
      }
      memcpy(C, A, sizeof(C));
      return;
    }
    if (ew % 2 == 0)
    {
      doIt2(ew - 1);
      for (int i = 0; i < 101; i++)
        for (int j = 0; j < 101; j++) {
          B[i][j] += C[i][j];
          if (B[i][j] >= MOD)
            B[i][j] -= MOD;
        }
      multiply(C, C, A);
    }
    else
    {
      doIt2(ew / 2);
      memcpy(D, C, sizeof(C));
      for (int i = 0; i < 101; i++)
      {
        D[i][i] ++;
        if (D[i][i] >= MOD)
          D[i][i] -= MOD;
      }
      multiply(B, B, D); 
      multiply(C, C, C);
    }
  }
  int count(vector <string> songs, vector <string> transitions, int minLength, int maxLength)
  {
    string str = "";
    for (int i = 0; i < songs.size(); i++) str += songs[i];
    n = 0;
    int g,l;
    for (int i = 0; i < str.length(); i++) 
      if (str[i] == ',')
        str[i] = ' ';
    istringstream sin(str);
    for (;sin>>g>>l;)
    {
      gap[n] = g;
      len[n] = l;
      n++;
    }
    memset(A,0,sizeof(A));
    for (int i = 0; i < n; i++) {
      A[100][gap[i] * 10 + len[i] - 1]++;
    }
    for (int i = 0; i < transitions.size(); i++) {
      for (int j = 0; j < n; j++) {
        if (transitions[i][gap[j]] == 'Y')
        {
          A[i * 10 + 0][gap[j] * 10 + len[j] - 1]++;
        }
      }
    }
    for (int i = 0; i < transitions.size(); i++) {
      for (int j = 1; j <= 9; j++) {
        A[i * 10 + j][i * 10 + (j - 1)]++;
      }
    }
    doIt(minLength);
    for (int i = 0; i < 101; i++)
      for (int j = 0; j < 101; j++)
      {
        T[i][j] = B[i][j];
      }
    doIt2(maxLength - minLength);
    multiply(B, T, B);
    int res = 0;
    for (int i = 0; i < transitions.size(); i++) {
      res = (res + B[100][i * 10]) % MOD;
    }
    return res;
  }
};

********************************************************************************
*******************************************************************************/