/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4698
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

class MagicCube {
public:
    int getScore(vector<int> nums);
};

int MagicCube::getScore(vector<int> nums) {
    int ret;
    return ret;
}


int test0() {
    vector<int> nums = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
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
    vector<int> nums = {23, 4, 10, 1, 27, 21, 25, 7, 17, 9, 15, 13, 20, 3, 11, 2, 22, 18, 12, 24, 14, 26, 8, 6, 5, 19, 16};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> nums = {23, 2, 10, 1, 27, 21, 25, 7, 17, 9, 15, 13, 20, 3, 11, 4, 22, 18, 12, 24, 14, 26, 8, 6, 5, 19, 16};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
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
    vector<int> nums = {23, 2, 9, 1, 27, 21, 25, 7, 17, 10, 15, 13, 20, 3, 11, 4, 22, 18, 12, 24, 14, 26, 8, 6, 5, 19, 16};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> nums = {24, 2, 3, 5, 20, 15, 14, 8, 19, 6, 23, 21, 25, 1, 13, 17, 26, 18, 27, 11, 9, 16, 12, 4, 7, 10, 22};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> nums = {24, 18, 3, 5, 20, 15, 14, 8, 19, 6, 23, 21, 25, 1, 13, 17, 26, 2, 27, 11, 9, 16, 12, 4, 7, 10, 22};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
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
    vector<int> nums = {15, 18, 3, 5, 20, 24, 14, 8, 19, 6, 23, 21, 25, 1, 13, 17, 26, 2, 27, 11, 9, 16, 12, 4, 7, 10, 22};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> nums = {15, 18, 3, 5, 20, 24, 14, 8, 19, 6, 12, 21, 25, 1, 13, 17, 26, 2, 27, 11, 9, 16, 23, 4, 7, 10, 22};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
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
    vector<int> nums = {15, 18, 3, 5, 20, 24, 14, 8, 19, 6, 12, 27, 25, 1, 13, 17, 26, 2, 21, 11, 9, 16, 23, 4, 7, 10, 22};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> nums = {20, 18, 3, 5, 15, 24, 14, 8, 19, 6, 12, 27, 25, 1, 13, 17, 26, 2, 21, 11, 9, 16, 23, 4, 7, 10, 22};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> nums = {20, 18, 3, 5, 15, 24, 14, 8, 19, 4, 12, 27, 25, 1, 13, 17, 26, 2, 21, 11, 9, 16, 23, 6, 7, 10, 22};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> nums = {20, 18, 3, 5, 15, 24, 14, 8, 19, 4, 12, 27, 25, 1, 13, 17, 26, 2, 21, 9, 11, 16, 23, 6, 7, 10, 22};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> nums = {20, 18, 3, 5, 15, 24, 16, 8, 19, 4, 12, 27, 25, 1, 13, 17, 26, 2, 21, 9, 11, 14, 23, 6, 7, 10, 22};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> nums = {4, 12, 26, 11, 25, 6, 27, 5, 10, 20, 7, 15, 9, 14, 19, 13, 21, 8, 18, 23, 1, 22, 3, 17, 2, 16, 24};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> nums = {6, 10, 26, 11, 27, 4, 25, 5, 12, 20, 9, 13, 7, 14, 21, 15, 19, 8, 16, 23, 3, 24, 1, 17, 2, 18, 22};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> nums = {4, 18, 20, 17, 19, 6, 21, 5, 16, 26, 1, 15, 3, 14, 25, 13, 27, 2, 12, 23, 7, 22, 9, 11, 8, 10, 24};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> nums = {23, 2, 10, 1, 27, 21, 25, 7, 17, 9, 15, 13, 20, 3, 11, 4, 22, 18, 12, 24, 14, 26, 8, 6, 5, 19, 16};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> nums = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> nums = {23, 4, 10, 1, 27, 21, 25, 7, 17, 9, 15, 13, 20, 3, 11, 2, 22, 18, 12, 24, 14, 26, 8, 6, 5, 19, 16};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> nums = {26, 6, 10, 12, 25, 5, 4, 11, 27, 15, 19, 8, 7, 14, 21, 20, 9, 13, 1, 17, 24, 23, 3, 16, 18, 22, 2};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> nums = {100, 1, 1, 1, 1, 1, 1, 1, 1, 100, 1, 1, 1, 1, 1, 1, 1, 1, 100, 1, 1, 1, 1, 1, 1, 1, 1};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> nums = {2, 13, 27, 22, 9, 11, 18, 20, 4, 16, 21, 5, 3, 14, 25, 23, 7, 12, 24, 8, 10, 17, 19, 6, 1, 15, 26};
    MagicCube* pObj = new MagicCube();
    clock_t start = clock();
    int result = pObj->getScore(nums);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7390467&rd=7992&pm=4698
********************************************************************************
#include <algorithm> 
#include <climits> 
#include <iostream> 
#include <vector> 
 
using namespace std; 
 
 
 
class MagicCube { 
public: 
   int magic_score( vector<int> cube ) 
   { 
      int maxi = INT_MIN, mini = INT_MAX; 
 
      for ( int i=0; i<3; ++i )  
         for ( int j=0; j<3; ++j ) { 
            int x1 = 0, x2 = 0, x3 = 0; 
            for ( int k=0; k<3; ++k ) { 
               x1 += cube[ i*9 + j*3 + k ]; 
               x2 += cube[ j*9 + k*3 + i ]; 
               x3 += cube[ k*9 + i*3 + j ]; 
            } 
            maxi = max( maxi, x1 ); maxi = max( maxi, x2 ); maxi = max( maxi, x3 ); 
            mini = min( mini, x1 ); mini = min( mini, x2 ); mini = min( mini, x3 ); 
         } 
       
      return maxi - mini; 
   } 
    
    
   int getScore( vector <int> nums ) { // caret here 
      int ret = magic_score( nums ); 
      for ( int i=0; i<(int)nums.size(); ++i ) 
         for ( int j=i+1; j<(int)nums.size(); ++j ) { 
            swap( nums[i], nums[j] ); 
            ret = min( ret, magic_score( nums ) ); 
            swap( nums[i], nums[j] ); 
         } 
      return ret; 
   } 
    
    
  
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 2.0 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/