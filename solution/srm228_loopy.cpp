/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3517
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

class Loopy {
public:
    int minLoop(vector<string> code);
};

int Loopy::minLoop(vector<string> code) {
    int ret;
    return ret;
}


int test0() {
    vector<string> code = {"RETURN", "IF 0 ELSE 1"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> code = {"IF 1 ELSE 2", "IF 1 ELSE 2", "RETURN"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> code = {"IF 1 ELSE 2", "RETURN", "IF 3 ELSE 2", "IF 2 ELSE 3"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> code = {"IF 1 ELSE 2", "IF 3 ELSE 3", "IF 4 ELSE 1", "IF 4 ELSE 5", "RETURN", "IF 0 ELSE 6", "IF 6 ELSE 6", "IF 7 ELSE 2"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> code = {"IF 1 ELSE 2", "IF 0 ELSE 2", "RETURN"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> code = {"IF 1 ELSE 2", "IF 2 ELSE 8", "IF 3 ELSE 3", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "IF 9 ELSE 10", "IF 11 ELSE 11", "IF 9 ELSE 11", "IF 14 ELSE 12", "IF 13 ELSE 13", "IF 1 ELSE 1", "IF 0 ELSE 0"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
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
    vector<string> code = {"IF 1 ELSE 2", "IF 2 ELSE 8", "IF 14 ELSE 3", "RETURN", "RETURN", "RETURN", "IF 1 ELSE 1", "RETURN", "IF 9 ELSE 10", "IF 11 ELSE 11", "IF 9 ELSE 11", "IF 14 ELSE 12", "IF 13 ELSE 13", "IF 1 ELSE 1", "IF 0 ELSE 0"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> code = {"IF 1 ELSE 2", "IF 2 ELSE 8", "IF 12 ELSE 3", "RETURN", "RETURN", "RETURN", "RETURN", "RETURN", "IF 9 ELSE 10", "IF 11 ELSE 11", "IF 9 ELSE 11", "IF 14 ELSE 12", "IF 13 ELSE 13", "IF 1 ELSE 1", "IF 0 ELSE 0"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> code = {"IF 7 ELSE 6", "IF 2 ELSE 2", "IF 3 ELSE 6", "RETURN", "IF 5 ELSE 5", "IF 4 ELSE 3", "IF 2 ELSE 1", "IF 6 ELSE 8", "IF 10 ELSE 10", "RETURN", "IF 8 ELSE 8"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> code = {"IF 7 ELSE 6", "IF 2 ELSE 2", "IF 3 ELSE 6", "RETURN", "IF 5 ELSE 5", "IF 4 ELSE 3", "IF 2 ELSE 1", "IF 6 ELSE 8", "IF 10 ELSE 10", "RETURN", "IF 1 ELSE 8"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> code = {"IF 7 ELSE 6", "IF 10 ELSE 2", "IF 3 ELSE 6", "RETURN", "IF 5 ELSE 5", "IF 4 ELSE 3", "IF 2 ELSE 1", "IF 6 ELSE 8", "IF 10 ELSE 10", "RETURN", "IF 1 ELSE 8"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> code = {"IF 1 ELSE 2", "IF 1 ELSE 1", "IF 5 ELSE 3", "IF 2 ELSE 2", "IF 5 ELSE 2", "RETURN"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> code = {"IF 1 ELSE 2", "IF 4 ELSE 1", "IF 5 ELSE 3", "IF 2 ELSE 2", "IF 5 ELSE 2", "RETURN"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> code = {"IF 1 ELSE 1", "IF 2 ELSE 2", "IF 3 ELSE 48", "IF 4 ELSE 4", "IF 5 ELSE 5", "IF 6 ELSE 6", "IF 7 ELSE 7", "IF 8 ELSE 8", "IF 9 ELSE 9", "IF 10 ELSE 10", "IF 11 ELSE 11", "IF 12 ELSE 12", "IF 13 ELSE 13", "IF 14 ELSE 14", "IF 15 ELSE 15", "IF 16 ELSE 16", "IF 17 ELSE 17", "IF 18 ELSE 18", "IF 19 ELSE 19", "IF 20 ELSE 20", "IF 21 ELSE 21", "IF 22 ELSE 22", "IF 23 ELSE 23", "IF 24 ELSE 24", "IF 25 ELSE 25", "IF 26 ELSE 26", "IF 27 ELSE 27", "IF 28 ELSE 28", "IF 29 ELSE 29", "IF 30 ELSE 30", "IF 31 ELSE 31", "IF 32 ELSE 32", "IF 33 ELSE 33", "IF 34 ELSE 34", "IF 35 ELSE 35", "IF 36 ELSE 36", "IF 37 ELSE 37", "IF 38 ELSE 38", "IF 39 ELSE 39", "IF 40 ELSE 49", "IF 41 ELSE 41", "IF 42 ELSE 42", "IF 43 ELSE 43", "IF 44 ELSE 44", "IF 45 ELSE 45", "IF 46 ELSE 46", "IF 47 ELSE 47", "IF 0 ELSE 0", "IF 35 ELSE 35", "RETURN"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> code = {"IF 1 ELSE 1", "IF 2 ELSE 2", "IF 3 ELSE 48", "IF 4 ELSE 4", "IF 5 ELSE 5", "IF 6 ELSE 6", "IF 7 ELSE 7", "IF 8 ELSE 8", "IF 9 ELSE 9", "IF 10 ELSE 10", "IF 11 ELSE 11", "IF 12 ELSE 12", "IF 13 ELSE 13", "IF 14 ELSE 14", "IF 15 ELSE 15", "IF 16 ELSE 16", "IF 17 ELSE 17", "IF 18 ELSE 18", "IF 19 ELSE 19", "IF 20 ELSE 20", "IF 21 ELSE 21", "IF 22 ELSE 22", "IF 23 ELSE 23", "IF 24 ELSE 24", "IF 25 ELSE 25", "IF 26 ELSE 26", "IF 27 ELSE 27", "IF 28 ELSE 28", "IF 29 ELSE 29", "IF 30 ELSE 30", "IF 31 ELSE 31", "IF 32 ELSE 32", "IF 33 ELSE 33", "IF 34 ELSE 34", "IF 35 ELSE 35", "IF 36 ELSE 36", "IF 37 ELSE 37", "IF 38 ELSE 38", "IF 39 ELSE 39", "IF 40 ELSE 49", "IF 41 ELSE 41", "IF 42 ELSE 42", "IF 43 ELSE 43", "IF 44 ELSE 44", "IF 45 ELSE 45", "IF 46 ELSE 46", "IF 47 ELSE 47", "IF 1 ELSE 0", "IF 35 ELSE 35", "RETURN"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> code = {"IF 8 ELSE 6", "IF 2 ELSE 2", "IF 3 ELSE 48", "IF 4 ELSE 4", "IF 5 ELSE 5", "IF 6 ELSE 6", "IF 7 ELSE 7", "IF 8 ELSE 8", "IF 9 ELSE 9", "IF 10 ELSE 10", "IF 11 ELSE 11", "IF 12 ELSE 12", "IF 13 ELSE 13", "IF 14 ELSE 14", "IF 15 ELSE 15", "IF 16 ELSE 16", "IF 17 ELSE 17", "IF 18 ELSE 18", "IF 19 ELSE 19", "IF 20 ELSE 20", "IF 21 ELSE 21", "IF 22 ELSE 22", "IF 23 ELSE 23", "IF 24 ELSE 24", "IF 25 ELSE 25", "IF 26 ELSE 26", "IF 27 ELSE 27", "IF 28 ELSE 28", "IF 29 ELSE 29", "IF 30 ELSE 30", "IF 31 ELSE 31", "IF 32 ELSE 32", "IF 33 ELSE 33", "IF 34 ELSE 34", "IF 35 ELSE 35", "IF 36 ELSE 36", "IF 37 ELSE 37", "IF 38 ELSE 38", "IF 39 ELSE 39", "IF 40 ELSE 49", "IF 41 ELSE 41", "IF 42 ELSE 42", "IF 43 ELSE 43", "IF 44 ELSE 44", "IF 45 ELSE 45", "IF 46 ELSE 46", "IF 47 ELSE 47", "IF 1 ELSE 0", "IF 35 ELSE 35", "RETURN"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> code = {"IF 48 ELSE 48", "IF 49 ELSE 2", "IF 1 ELSE 1", "IF 2 ELSE 2", "IF 3 ELSE 3", "IF 4 ELSE 4", "IF 5 ELSE 5", "IF 6 ELSE 6", "IF 7 ELSE 7", "IF 8 ELSE 8", "IF 9 ELSE 9", "IF 10 ELSE 10", "IF 11 ELSE 11", "IF 12 ELSE 12", "IF 13 ELSE 13", "IF 14 ELSE 14", "IF 15 ELSE 15", "IF 16 ELSE 16", "IF 17 ELSE 17", "IF 18 ELSE 18", "IF 19 ELSE 19", "IF 20 ELSE 20", "IF 21 ELSE 21", "IF 22 ELSE 22", "IF 23 ELSE 23", "IF 24 ELSE 24", "IF 25 ELSE 25", "IF 26 ELSE 26", "IF 27 ELSE 27", "IF 28 ELSE 28", "IF 29 ELSE 29", "IF 30 ELSE 30", "IF 31 ELSE 31", "IF 32 ELSE 32", "IF 33 ELSE 33", "IF 34 ELSE 34", "IF 35 ELSE 35", "IF 36 ELSE 36", "IF 37 ELSE 37", "IF 38 ELSE 38", "IF 39 ELSE 39", "IF 40 ELSE 40", "IF 41 ELSE 41", "IF 42 ELSE 42", "IF 43 ELSE 43", "IF 44 ELSE 44", "IF 45 ELSE 45", "IF 46 ELSE 46", "IF 47 ELSE 47", "RETURN"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> code = {"IF 48 ELSE 48", "IF 49 ELSE 47", "IF 1 ELSE 1", "IF 2 ELSE 2", "IF 3 ELSE 3", "IF 4 ELSE 4", "IF 5 ELSE 5", "IF 6 ELSE 6", "IF 7 ELSE 7", "IF 8 ELSE 8", "IF 9 ELSE 9", "IF 10 ELSE 10", "IF 11 ELSE 11", "IF 12 ELSE 12", "IF 13 ELSE 13", "IF 14 ELSE 14", "IF 15 ELSE 15", "IF 16 ELSE 16", "IF 17 ELSE 17", "IF 18 ELSE 18", "IF 19 ELSE 19", "IF 20 ELSE 20", "IF 21 ELSE 21", "IF 22 ELSE 22", "IF 23 ELSE 23", "IF 24 ELSE 24", "IF 25 ELSE 25", "IF 26 ELSE 26", "IF 27 ELSE 27", "IF 28 ELSE 28", "IF 29 ELSE 29", "IF 30 ELSE 30", "IF 31 ELSE 31", "IF 32 ELSE 32", "IF 33 ELSE 33", "IF 34 ELSE 34", "IF 35 ELSE 35", "IF 36 ELSE 36", "IF 37 ELSE 37", "IF 38 ELSE 38", "IF 39 ELSE 39", "IF 40 ELSE 40", "IF 41 ELSE 41", "IF 42 ELSE 42", "IF 43 ELSE 43", "IF 44 ELSE 44", "IF 45 ELSE 45", "IF 46 ELSE 46", "IF 47 ELSE 47", "RETURN"};
    Loopy* pObj = new Loopy();
    clock_t start = clock();
    int result = pObj->minLoop(code);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=152340&rd=6517&pm=3517
********************************************************************************
using namespace std;
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stack>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <iostream>
#include <sstream>
typedef long long I64;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<double> VD;
typedef vector<PII> VPII;
#define FOR(i,n) for(int i=0;i<(n);i++)
#define VAR(a,b) __typeof(b) a=b
#define FORIT(it,c) for(VAR(it,(c).begin());it!=(c).end();it++)
#define ALL(x) (x).begin(),(x).end()
 
struct LoopyImpl {
    vector <string> code;
    LoopyImpl(vector <string> _code) {
        code = _code;
    }
 
    VI succ[60];
    VI pred[60];
    bool isret[60];
    bool isreach[60];
    bool returns[60];
    int n;
 
    void reach(int i) {
        if(isreach[i]) return;
        isreach[i] = true;
        FOR(j,succ[i].size()) reach(succ[i][j]);
    }
    void doreturns(int i) {
        if(returns[i]) return;
        returns[i] = true;
        FOR(j,pred[i].size()) doreturns(pred[i][j]);
    }
 
    int minLoop() {
        n = code.size();
        FOR(i,code.size()) {
            if(code[i][0]=='R') {
                isret[i] = 1;
            } else {
                isret[i] = 0;
                int a,b;
                sscanf(code[i].c_str(),"%*s %d %*s %d",&a,&b);
                succ[i].push_back(a);
                pred[a].push_back(i);
                if(a != b) {
                    succ[i].push_back(b);
                    pred[b].push_back(i);
                }
            }
        }
 
        memset(isreach,0,sizeof(isreach));
        reach(0);
        memset(returns,0,sizeof(returns));
        FOR(i,n) if(isret[i]) doreturns(i);
 
        FOR(i,n) {
            FOR(j,succ[i].size()) if(!returns[succ[i][j]]) {
                succ[i][j] = succ[i][succ[i].size()-1];
                succ[i].pop_back();
            }
            FOR(j,pred[i].size()) if(!isreach[pred[i][j]]) {
                pred[i][j] = pred[i][pred[i].size()-1];
                pred[i].pop_back();
            }
        }
 
        if(!returns[0]) return 0;
 
        int ret = 1000000;
 
        FOR(start,n) {
            if(!isreach[start] || !returns[start]) continue;
 
            FOR(nexti,pred[start].size()) {
                int next = pred[start][nexti];
                set<int> elems;
                elems.insert(start);
                elems.insert(next);
                if(makeloop(elems,start,next)) {
                    FORIT(it,pred[start]) {
                        int tp = *it;
                        if(tp != start && tp != next && elems.count(tp)) goto skip;
                    }
                    if(elems.count(0) && start != 0) goto skip;
                    /*
                    if(elems.size() < ret) {
                        printf("start at %d, pred %d\n",start,next);
                        printf("set of size %d: ",elems.size());
                        FORIT(it,elems) printf("%d ",*it);
                        printf("\n");
                    }
                    */
                    ret <?= elems.size();
                }
skip:;
            }
        }
 
        return ret == 1000000 ? 0 : ret;
    };
 
    bool makeloop(set<int> & elems,int start,int at) {
        if(at == start) return true;
        if(pred[at].size() == 0) return false;
        bool ok = true;
        FOR(p,pred[at].size()) {
            int prev = pred[at][p];
 
            if(!elems.count(prev)) {
                elems.insert(prev);
                ok = ok && makeloop(elems,start,prev);
            }
        }
        return ok;
    }
};
 
 
struct Loopy {
    int minLoop(vector <string> code) {
        LoopyImpl impl(code);
        return impl.minLoop();
    }
 
};
 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/