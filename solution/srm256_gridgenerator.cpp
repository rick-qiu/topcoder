/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4688
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

class GridGenerator {
public:
    int generate(vector<int> row, vector<int> col);
};

int GridGenerator::generate(vector<int> row, vector<int> col) {
    int ret;
    return ret;
}


int test0() {
    vector<int> row = {1, 0, 3, 4, 1};
    vector<int> col = {1, 4, 1, 0, 3};
    GridGenerator* pObj = new GridGenerator();
    clock_t start = clock();
    int result = pObj->generate(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 579;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> row = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> col = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    GridGenerator* pObj = new GridGenerator();
    clock_t start = clock();
    int result = pObj->generate(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 13163067;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> row = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> col = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    GridGenerator* pObj = new GridGenerator();
    clock_t start = clock();
    int result = pObj->generate(row, col);
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
    vector<int> row = {1, 5, 3, 1, 2, 9};
    vector<int> col = {1, 3, 1, 5, 9, 7};
    GridGenerator* pObj = new GridGenerator();
    clock_t start = clock();
    int result = pObj->generate(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 5027;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> row = {1, 2};
    vector<int> col = {1, 3};
    GridGenerator* pObj = new GridGenerator();
    clock_t start = clock();
    int result = pObj->generate(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> row = {1, 1};
    vector<int> col = {1, 1};
    GridGenerator* pObj = new GridGenerator();
    clock_t start = clock();
    int result = pObj->generate(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> row = {1, 0, 3, 4, 1};
    vector<int> col = {1, 4, 1, 0, 3};
    GridGenerator* pObj = new GridGenerator();
    clock_t start = clock();
    int result = pObj->generate(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 579;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> row = {1, 1};
    vector<int> col = {1, 1};
    GridGenerator* pObj = new GridGenerator();
    clock_t start = clock();
    int result = pObj->generate(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> row = {1, 0, 3, 4, 1};
    vector<int> col = {1, 4, 1, 0, 3};
    GridGenerator* pObj = new GridGenerator();
    clock_t start = clock();
    int result = pObj->generate(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 579;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> row = {1, 1};
    vector<int> col = {1, 1};
    GridGenerator* pObj = new GridGenerator();
    clock_t start = clock();
    int result = pObj->generate(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> row = {1, 0, 3, 4, 1};
    vector<int> col = {1, 4, 1, 0, 3};
    GridGenerator* pObj = new GridGenerator();
    clock_t start = clock();
    int result = pObj->generate(row, col);
    clock_t end = clock();
    delete pObj;
    int expected = 579;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15554768&rd=7992&pm=4688
********************************************************************************
#include <vector>
 
using namespace std;
 
class GridGenerator
{
public:
  int generate(vector<int> r, vector<int> c)
  {
    int matrix[20][20];
    int i, j, sr = r.size(), sc = c.size();
 
    for (i = 0; i < sc; i++)
      matrix[0][i] = r[i];
    for (i = 0; i < sr; i ++)
      matrix[i][0] = c[i];
    for (i = 1; i < sr; i++)
      for (j = 1; j < sc; j++)
        matrix[i][j] = matrix[i-1][j] + matrix[i-1][j-1] + matrix[i][j-1];
    return matrix[sr-1][sc-1];
  }
};

********************************************************************************
*******************************************************************************/