/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2264
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

class OnLineRank {
public:
    int calcRanks(int k, vector<int> scores);
};

int OnLineRank::calcRanks(int k, vector<int> scores) {
    int ret;
    return ret;
}


int test0() {
    int k = 3;
    vector<int> scores = {6, 9, 8, 15, 7, 12};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int k = 80;
    vector<int> scores = {3, 3, 3, 3, 3, 3, 3};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int k = 1;
    vector<int> scores = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int k = 5;
    vector<int> scores = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int k = 9;
    vector<int> scores = {1, 5, 100, 92, 5, 17, 45, 92, 30, 30, 1, 5, 100, 92, 5, 17, 45, 92, 30, 30, 1, 5, 100, 92, 5, 17, 45, 92, 30, 30, 1, 5, 100, 92, 5, 17, 45, 92, 30, 30, 1, 5, 100, 92, 5, 17, 45, 92, 30, 30};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 234;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int k = 10;
    vector<int> scores = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int k = 3;
    vector<int> scores = {100, 100, 99, 99, 98, 98, 97};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int k = 2;
    vector<int> scores = {100, 100, 99, 99, 98, 98, 97};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int k = 31;
    vector<int> scores = {100, 100, 99, 99, 98, 98, 97};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int k = 21;
    vector<int> scores = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 454;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int k = 3;
    vector<int> scores = {1, 9, 2, 8, 3, 7, 4, 6, 5};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int k = 8;
    vector<int> scores = {9, 3, 4, 8, 5, 5, 6, 2, 8, 1};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int k = 5;
    vector<int> scores = {9, 3, 4, 8, 5, 5, 6, 2, 8, 1};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int k = 1;
    vector<int> scores = {9, 3, 4, 8, 5, 5, 6, 2, 8, 1};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int k = 3;
    vector<int> scores = {9, 3, 4, 8, 5, 5, 523, 6, 2, 8, 1};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int k = 1;
    vector<int> scores = {79};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int k = 5;
    vector<int> scores = {87, 32, 4, 98, 56, 74, 32, 1, 95, 25};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int k = 5;
    vector<int> scores = {5, 5, 5, 5, 5, 3};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
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
    int k = 4;
    vector<int> scores = {1, 24, 62, 21, 23, 74, 22, 1, 2, 3, 4, 5, 6, 7, 89, 22, 35, 63, 11, 46, 78};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int k = 1;
    vector<int> scores = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int k = 3;
    vector<int> scores = {6, 9, 8, 15, 7, 12, 12, 110, 42, 89, 21};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int k = 3;
    vector<int> scores = {9, 8, 7, 6, 5, 4};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int k = 5;
    vector<int> scores = {100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int k = 1;
    vector<int> scores = {9, 6, 10, 11, 9, 8, 7, 10, 12};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int k = 1;
    vector<int> scores = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int k = 6;
    vector<int> scores = {6, 9, 8, 19, 5, 13};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int k = 1;
    vector<int> scores = {5, 4, 3, 2, 1};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int k = 3;
    vector<int> scores = {9, 10, 8, 5};
    OnLineRank* pObj = new OnLineRank();
    clock_t start = clock();
    int result = pObj->calcRanks(k, scores);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8380111&rd=4715&pm=2264
********************************************************************************
#include<iostream>
#include<vector>
using namespace std;
 
class OnLineRank
{
    public :
    int calcRanks(int k,vector <int> scores);
};
int OnLineRank::calcRanks(int k,vector <int> scores)
{
    int sum=0,rank,l;
    int n = scores.size(),i,j;
    for(i=0;i<n;i++)
    {
        for(rank=1,j=i-1,l=0;l<k && j>=0;j--,l++)
                if (scores[j]>scores[i])
                        rank++;
        sum += rank;
    } 
    return sum;
}

********************************************************************************
*******************************************************************************/