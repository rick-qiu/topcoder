/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3100
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

class AccessLevel {
public:
    string canAccess(vector<int> rights, int minPermission);
};

string AccessLevel::canAccess(vector<int> rights, int minPermission) {
    string ret;
    return ret;
}


int test0() {
    vector<int> rights = {0, 1, 2, 3, 4, 5};
    int minPermission = 2;
    AccessLevel* pObj = new AccessLevel();
    clock_t start = clock();
    string result = pObj->canAccess(rights, minPermission);
    clock_t end = clock();
    delete pObj;
    string expected = "DDAAAA";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> rights = {5, 3, 2, 10, 0};
    int minPermission = 20;
    AccessLevel* pObj = new AccessLevel();
    clock_t start = clock();
    string result = pObj->canAccess(rights, minPermission);
    clock_t end = clock();
    delete pObj;
    string expected = "DDDDD";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> rights = {};
    int minPermission = 20;
    AccessLevel* pObj = new AccessLevel();
    clock_t start = clock();
    string result = pObj->canAccess(rights, minPermission);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> rights = {34, 78, 9, 52, 11, 1};
    int minPermission = 49;
    AccessLevel* pObj = new AccessLevel();
    clock_t start = clock();
    string result = pObj->canAccess(rights, minPermission);
    clock_t end = clock();
    delete pObj;
    string expected = "DADADD";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> rights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int minPermission = 1;
    AccessLevel* pObj = new AccessLevel();
    clock_t start = clock();
    string result = pObj->canAccess(rights, minPermission);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> rights = {99, 99, 99, 99, 99, 1, 2, 3, 4, 5};
    int minPermission = 50;
    AccessLevel* pObj = new AccessLevel();
    clock_t start = clock();
    string result = pObj->canAccess(rights, minPermission);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAADDDDD";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> rights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int minPermission = 25;
    AccessLevel* pObj = new AccessLevel();
    clock_t start = clock();
    string result = pObj->canAccess(rights, minPermission);
    clock_t end = clock();
    delete pObj;
    string expected = "DDDDDDDDDDDDDDDDDDDDDDDDAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> rights = {99, 98, 97, 96, 95, 34, 33, 32, 31, 1, 2, 3, 4, 5};
    int minPermission = 0;
    AccessLevel* pObj = new AccessLevel();
    clock_t start = clock();
    string result = pObj->canAccess(rights, minPermission);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> rights = {99, 98, 97, 96, 95, 34, 33, 32, 31, 1, 2, 3, 4, 5};
    int minPermission = 4;
    AccessLevel* pObj = new AccessLevel();
    clock_t start = clock();
    string result = pObj->canAccess(rights, minPermission);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAADDDAA";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> rights = {1, 2, 3, 4, 5};
    int minPermission = 2;
    AccessLevel* pObj = new AccessLevel();
    clock_t start = clock();
    string result = pObj->canAccess(rights, minPermission);
    clock_t end = clock();
    delete pObj;
    string expected = "DAAAA";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> rights = {34, 78, 9, 52, 11, 1};
    int minPermission = 49;
    AccessLevel* pObj = new AccessLevel();
    clock_t start = clock();
    string result = pObj->canAccess(rights, minPermission);
    clock_t end = clock();
    delete pObj;
    string expected = "DADADD";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> rights = {0, 1, 2, 3, 4, 5};
    int minPermission = 2;
    AccessLevel* pObj = new AccessLevel();
    clock_t start = clock();
    string result = pObj->canAccess(rights, minPermission);
    clock_t end = clock();
    delete pObj;
    string expected = "DDAAAA";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=265771&rd=5864&pm=3100
********************************************************************************
import java.util.*; 
public class AccessLevel { 
    public String canAccess(int[] rights, int minPermission) { 
        String res = ""; 
        for (int i = 0; i < rights.length; i++) 
        { 
          if (rights[i] >= minPermission) 
            res += "A"; 
          else 
            res += "D"; 
        } 
        return res; 
    } 
 
} 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/