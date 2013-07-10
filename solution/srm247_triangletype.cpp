/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4610
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

class TriangleType {
public:
    string type(int a, int b, int c);
};

string TriangleType::type(int a, int b, int c) {
    string ret;
    return ret;
}


int test0() {
    int a = 3;
    int b = 4;
    int c = 5;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "RIGHT";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int a = 3;
    int b = 4;
    int c = 4;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "ACUTE";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int a = 3;
    int b = 4;
    int c = 6;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "OBTUSE";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int a = 7;
    int b = 4;
    int c = 3;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int a = 17;
    int b = 13;
    int c = 11;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "ACUTE";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int a = 15;
    int b = 8;
    int c = 17;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "RIGHT";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int a = 6000;
    int b = 8000;
    int c = 10000;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "RIGHT";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int a = 5000;
    int b = 5000;
    int c = 10000;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int a = 5001;
    int b = 5000;
    int c = 10000;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "OBTUSE";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int a = 10000;
    int b = 1;
    int c = 1;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int a = 1;
    int b = 4;
    int c = 7;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int a = 3;
    int b = 3;
    int c = 10;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int a = 3;
    int b = 4;
    int c = 5;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "RIGHT";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int a = 5;
    int b = 4;
    int c = 3;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "RIGHT";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int a = 7;
    int b = 5;
    int c = 6;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "ACUTE";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int a = 7;
    int b = 4;
    int c = 3;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int a = 6;
    int b = 4;
    int c = 3;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "OBTUSE";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int a = 4;
    int b = 3;
    int c = 2;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "OBTUSE";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int a = 3;
    int b = 3;
    int c = 6;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int a = 3;
    int b = 2;
    int c = 1;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int a = 10;
    int b = 8;
    int c = 6;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "RIGHT";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int a = 100;
    int b = 1;
    int c = 1;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int a = 3;
    int b = 5;
    int c = 4;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "RIGHT";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int a = 3;
    int b = 5;
    int c = 15;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int a = 1;
    int b = 10;
    int c = 2;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int a = 3;
    int b = 4;
    int c = 4;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "ACUTE";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int a = 3;
    int b = 2;
    int c = 4;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "OBTUSE";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int a = 3;
    int b = 5;
    int c = 3;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "OBTUSE";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int a = 1;
    int b = 2;
    int c = 3;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int a = 9;
    int b = 5;
    int c = 2;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int a = 3;
    int b = 6;
    int c = 4;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "OBTUSE";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int a = 4;
    int b = 5;
    int c = 3;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "RIGHT";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int a = 6;
    int b = 4;
    int c = 5;
    TriangleType* pObj = new TriangleType();
    clock_t start = clock();
    string result = pObj->type(a, b, c);
    clock_t end = clock();
    delete pObj;
    string expected = "ACUTE";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7292223&rd=7222&pm=4610
********************************************************************************
#include <vector>
#include <string>
 
using namespace std;
 
class TriangleType
{
public:
  string type(int x, int y, int z)
  {
    int t;
    
    if (x > y)
      t = x, x = y, y = t;
    if (y > z)
      t = y, y = z, z = t;
    if (x > y)
      t = x, x = y, y = t;
    
    if (x + y <= z) return "IMPOSSIBLE";
    if (x * x + y * y == z * z) return "RIGHT";
    if (x * x + y * y > z * z) return "ACUTE";
    if (x * x + y * y < z * z) return "OBTUSE";  
  }
};

********************************************************************************
*******************************************************************************/