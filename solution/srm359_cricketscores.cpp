/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7707
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

class CricketScores {
public:
    vector<int> totalRuns(vector<int> runs);
};

vector<int> CricketScores::totalRuns(vector<int> runs) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> runs = {1, 4, 1, 2};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> runs = {0, 0, 0, 0, 0, 0, 1};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> runs = {1, 0, 0, 0, 1, 4, 2, 1, 2};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 4};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> runs = {4, 4, 4, 4, 4, 1, 4, 4, 4, 4, 4, 1, 4, 6, 4, 6};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {62, 0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> runs = {1, 3, 1, 3, 1, 3, 1, 3};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 10};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> runs = {0};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> runs = {6};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> runs = {3, 1, 2, 0, 1, 3, 1, 0, 0, 2, 0, 4, 3};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 8};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> runs = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 1, 2};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {81, 90};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> runs = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> runs = {6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {156, 144};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> runs = {1, 0, 0, 0, 1, 4, 2, 1, 2};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 4};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> runs = {1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 4};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> runs = {4, 4, 4, 4, 4, 1, 4, 4, 4, 4, 4, 1, 4, 6, 4, 6};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {62, 0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> runs = {1, 3, 1, 3, 1, 3, 1, 3};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 10};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> runs = {1, 4, 1, 2};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> runs = {0, 0, 0, 0, 0, 1, 1};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> runs = {3, 3, 3, 3, 3, 3};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 9};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> runs = {3, 0, 0, 0, 1, 4, 2, 1, 2};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 4};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> runs = {6, 6, 6, 6, 6, 6, 6};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {36, 6};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> runs = {0, 0, 0, 0, 0, 2, 1};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> runs = {0, 0, 0, 0, 0, 0, 0, 1, 2, 1, 2, 1, 2};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> runs = {2, 0, 4, 2};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 0};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> runs = {4, 4, 4, 4, 4, 1, 4};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> runs = {1, 1, 1, 1, 1, 1, 1};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> runs = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 24};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> runs = {1};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> runs = {3, 1};
    CricketScores* pObj = new CricketScores();
    clock_t start = clock();
    vector<int> result = pObj->totalRuns(runs);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22651527&rd=10770&pm=7707
********************************************************************************
#include <iostream> 
#include <vector> 
#include <string> 
using namespace std; 
 
class CricketScores { 
  public: 
  vector<int> totalRuns(vector<int> runs){ 
    int a = 0; 
    int b = 0; 
    int i = 0; 
    int j = 0; 
    int l = runs.size(); 
    for (int k = 0; k < l; k++){ 
      j++;  
      if (i == 0){ 
        a += runs[k]; 
      } else { 
        b += runs[k]; 
      } 
      if (runs[k] % 2 == 1){ 
        i = 1 - i; 
      } 
      if (j == 6){ 
        j = 0; 
        i = 1-i; 
      } 
    } 
    vector<int> ans; 
    ans.push_back(a); 
    ans.push_back(b); 
    return ans; 
  } 
};

********************************************************************************
*******************************************************************************/