/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6558
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

class EscapeFromRectangle {
public:
    int shortest(int x, int y, int w, int h);
};

int EscapeFromRectangle::shortest(int x, int y, int w, int h) {
    int ret;
    return ret;
}


int test0() {
    int x = 1;
    int y = 1;
    int w = 5;
    int h = 5;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int x = 6;
    int y = 2;
    int w = 10;
    int h = 3;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
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
    int x = 653;
    int y = 375;
    int w = 1000;
    int h = 1000;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 347;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int x = 49;
    int y = 26;
    int w = 77;
    int h = 53;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int x = 15;
    int y = 13;
    int w = 65;
    int h = 15;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
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
    int x = 17;
    int y = 9;
    int w = 30;
    int h = 20;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int x = 40;
    int y = 81;
    int w = 80;
    int h = 120;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int x = 287;
    int y = 148;
    int w = 400;
    int h = 300;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int x = 66;
    int y = 401;
    int w = 200;
    int h = 860;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int x = 1;
    int y = 1;
    int w = 1000;
    int h = 1000;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int x = 500;
    int y = 500;
    int w = 1000;
    int h = 1000;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int x = 130;
    int y = 570;
    int w = 654;
    int h = 618;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int x = 57;
    int y = 120;
    int w = 720;
    int h = 328;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int x = 91;
    int y = 466;
    int w = 773;
    int h = 667;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int x = 341;
    int y = 348;
    int w = 643;
    int h = 353;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int x = 161;
    int y = 181;
    int w = 762;
    int h = 375;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 161;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int x = 398;
    int y = 371;
    int w = 526;
    int h = 915;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int x = 423;
    int y = 504;
    int w = 442;
    int h = 528;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int x = 158;
    int y = 3;
    int w = 192;
    int h = 18;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int x = 94;
    int y = 25;
    int w = 134;
    int h = 44;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
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
    int x = 53;
    int y = 6;
    int w = 370;
    int h = 60;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int x = 3;
    int y = 4;
    int w = 5;
    int h = 5;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int x = 1;
    int y = 1;
    int w = 5;
    int h = 5;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int x = 3;
    int y = 9;
    int w = 10;
    int h = 10;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int x = 100;
    int y = 1;
    int w = 200;
    int h = 1000;
    EscapeFromRectangle* pObj = new EscapeFromRectangle();
    clock_t start = clock();
    int result = pObj->shortest(x, y, w, h);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13288582&rd=9991&pm=6558
********************************************************************************
/* 
 *Powerd By: CodeGeneratorV1.0 
*/ 
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <string> 
#include <deque> 
#include <stack> 
#include <bitset> 
#include <algorithm> 
#include <numeric> 
#include <iostream> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
using namespace std; 
 
class EscapeFromRectangle{ 
public: 
  int shortest(int x, int y, int w, int h){ 
    int d[5],minv,i; 
    d[0]=sqrt((x-x)*(x-x)+(0-y)*(0-y)); 
    d[1]=sqrt((x-0)*(x-0)+(y-y)*(y-y)); 
    d[2]=sqrt((x-w)*(x-w)+(y-y)*(y-y)); 
    d[3]=sqrt((x-x)*(x-x)+(y-h)*(y-h)); 
    minv=10000000; 
    for(i=0;i<4;i++){ 
      if(d[i]<minv){ 
        minv=d[i]; 
      } 
    } 
    return minv; 
  } 
};

********************************************************************************
*******************************************************************************/