/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4566
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

class ColorCode {
public:
    long getOhms(vector<string> code);
};

long ColorCode::getOhms(vector<string> code) {
    long ret;
    return ret;
}


int test0() {
    vector<string> code = {"yellow", "violet", "red"};
    ColorCode* pObj = new ColorCode();
    clock_t start = clock();
    long result = pObj->getOhms(code);
    clock_t end = clock();
    delete pObj;
    long expected = 4700;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> code = {"green", "black", "black"};
    ColorCode* pObj = new ColorCode();
    clock_t start = clock();
    long result = pObj->getOhms(code);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> code = {"orange", "red", "blue"};
    ColorCode* pObj = new ColorCode();
    clock_t start = clock();
    long result = pObj->getOhms(code);
    clock_t end = clock();
    delete pObj;
    long expected = 32000000;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> code = {"green", "white", "red"};
    ColorCode* pObj = new ColorCode();
    clock_t start = clock();
    long result = pObj->getOhms(code);
    clock_t end = clock();
    delete pObj;
    long expected = 5900;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> code = {"violet", "yellow", "grey"};
    ColorCode* pObj = new ColorCode();
    clock_t start = clock();
    long result = pObj->getOhms(code);
    clock_t end = clock();
    delete pObj;
    long expected = 7400000000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> code = {"black", "red", "white"};
    ColorCode* pObj = new ColorCode();
    clock_t start = clock();
    long result = pObj->getOhms(code);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> code = {"white", "white", "white"};
    ColorCode* pObj = new ColorCode();
    clock_t start = clock();
    long result = pObj->getOhms(code);
    clock_t end = clock();
    delete pObj;
    long expected = 99000000000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> code = {"white", "white", "white"};
    ColorCode* pObj = new ColorCode();
    clock_t start = clock();
    long result = pObj->getOhms(code);
    clock_t end = clock();
    delete pObj;
    long expected = 99000000000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> code = {"white", "black", "black"};
    ColorCode* pObj = new ColorCode();
    clock_t start = clock();
    long result = pObj->getOhms(code);
    clock_t end = clock();
    delete pObj;
    long expected = 90;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> code = {"black", "black", "black"};
    ColorCode* pObj = new ColorCode();
    clock_t start = clock();
    long result = pObj->getOhms(code);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> code = {"red", "black", "black"};
    ColorCode* pObj = new ColorCode();
    clock_t start = clock();
    long result = pObj->getOhms(code);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> code = {"orange", "orange", "orange"};
    ColorCode* pObj = new ColorCode();
    clock_t start = clock();
    long result = pObj->getOhms(code);
    clock_t end = clock();
    delete pObj;
    long expected = 33000;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=14874254&rd=7225&pm=4566
********************************************************************************
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
int value(string s)
{
 if(s == "black") return 0;
 if(s == "brown") return 1;
 if(s == "red") return 2;
 if(s == "orange") return 3;
 if(s == "yellow") return 4;
 if(s == "green") return 5;
 if(s == "blue") return 6;
 if(s == "violet") return 7;
 if(s == "grey") return 8;
 if(s == "white") return 9;
}
 
class ColorCode
{
 public:
 long long getOhms(vector<string> code)
 {
  long long ret;
  ret = value(code[0]);
  ret = ret * 10 + value(code[1]);
  ret *= pow(10 , (float)value(code[2]));
  
  return ret;
 }
};

********************************************************************************
*******************************************************************************/