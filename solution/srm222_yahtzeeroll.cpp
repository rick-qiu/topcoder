/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3439
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

class YahtzeeRoll {
public:
    double bestChoice(vector<int> dice);
};

double YahtzeeRoll::bestChoice(vector<int> dice) {
    double ret;
    return ret;
}


int test0() {
    vector<int> dice = {1, 1, 1, 1, 2};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 8.333333333333334;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> dice = {1, 1, 1, 2, 2};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> dice = {2, 3, 4, 5, 5};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 33.333333333333336;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> dice = {2, 2, 3, 4, 4};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 17.77777777777778;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> dice = {6, 1, 3, 5, 5};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 9.722222222222221;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> dice = {5, 2, 6, 1, 5};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 5.941358024691358;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> dice = {2, 6, 5, 3, 1};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 10.277777777777779;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> dice = {5, 2, 3, 2, 5};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 10.277777777777779;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> dice = {1, 4, 4, 4, 2};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 9.722222222222221;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> dice = {3, 4, 6, 3, 2};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 17.77777777777778;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> dice = {2, 6, 1, 3, 1};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 9.722222222222221;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> dice = {6, 5, 6, 5, 2};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 8.333333333333334;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> dice = {1, 1, 2, 4, 1};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 9.722222222222221;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> dice = {1, 4, 6, 4, 1};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 8.333333333333334;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> dice = {4, 2, 1, 2, 1};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 9.722222222222221;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> dice = {5, 5, 2, 6, 2};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 8.333333333333334;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> dice = {2, 2, 4, 5, 1};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 10.277777777777779;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> dice = {3, 5, 4, 6, 1};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 31.666666666666668;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> dice = {4, 2, 1, 2, 3};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 31.666666666666668;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> dice = {3, 1, 5, 6, 5};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 9.722222222222221;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> dice = {6, 6, 6, 2, 3};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 8.75;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> dice = {3, 5, 1, 2, 4};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 40.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> dice = {3, 2, 6, 4, 2};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 17.77777777777778;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> dice = {2, 5, 6, 6, 4};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 10.277777777777779;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> dice = {6, 4, 6, 4, 3};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 12.083333333333334;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> dice = {1, 1, 1, 1, 2};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 8.333333333333334;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> dice = {1, 1, 1, 1, 1};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> dice = {2, 2, 3, 4, 4};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 17.77777777777778;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> dice = {6, 1, 3, 5, 5};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 9.722222222222221;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> dice = {1, 2, 3, 5, 6};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 10.277777777777779;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> dice = {1, 2, 5, 6, 6};
    YahtzeeRoll* pObj = new YahtzeeRoll();
    clock_t start = clock();
    double result = pObj->bestChoice(dice);
    clock_t end = clock();
    delete pObj;
    double expected = 5.941358024691358;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10615365&rd=5868&pm=3439
********************************************************************************
#include <string>
#include <vector>
#include <iostream>
using namespace std;
 
class YahtzeeRoll {
  public:
  double score (vector <int> dice) {
    int n[7] = {0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 5; i++)
      n[dice[i]]++;
    for (int i = 1; i <= 6; i++)
      if (n[i] == 5) return 50;
    if ((!n[1] && n[2] && n[3] && n[4] && n[5] && n[6]) || (n[1] && n[2] && n[3] && n[4] && n[5] && !n[6])) return 40;
    if ((n[1] && n[2] && n[3] && n[4]) || (n[2] && n[3] && n[4] && n[5]) || (n[3] && n[4] && n[5] && n[6])) return 30;
    
    for (int i = 1; i <= 6; i++)
      if (n[i] == 3)
        for (int j = 1; j <= 6; j++)
          if (n[j] == 2)
            return 25;
    return 0;  
  }
  
  double bestChoice(vector <int> dice) {
    //cout << score (dice);
    double max = 0, temp = 0;
    
    for (int reroll = 0; reroll < 32; reroll++) {
      temp = 0;
      vector <int> d (dice);
      for (int roll = 0; roll < 7776; roll++) {
        int ii = 1, cont = 0;
        for (int i = 0; i < 5 ; i++) {
          d[i] = roll / ii % 6 + 1;
          //cout << d[i] << " ";
          ii *= 6;
        }
        cont = 0;
        for (int i = 0; i < 5; i++)
          if (!(reroll & (1 << i)) && d[i] != dice[i]) {
            //cout << " *" << endl;
            cont = 1;
          }
        if (cont) continue;
  //      for (int i = 0; i < 5; i++)
  //        cout << d[i] << " ";
  //      cout << score (d) << endl;
        temp += score (d);
      }
  //    double dv = 1;
      for (int i = 0; i < 5; i++)
        if (reroll & (1 << i)) {
          temp /= 6;
  //        dv *= 6;
  //        cout << "#";
      }
 
      if (temp > max) max = temp;
    }
    return max;
  }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/