/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1848
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

class BirthdayOdds {
public:
    int minPeople(int minOdds, int daysInYear);
};

int BirthdayOdds::minPeople(int minOdds, int daysInYear) {
    int ret;
    return ret;
}


int test0() {
    int minOdds = 75;
    int daysInYear = 5;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int minOdds = 50;
    int daysInYear = 365;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int minOdds = 1;
    int daysInYear = 365;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int minOdds = 84;
    int daysInYear = 9227;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 184;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int minOdds = 99;
    int daysInYear = 3349;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 175;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int minOdds = 14;
    int daysInYear = 3100;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int minOdds = 40;
    int daysInYear = 4093;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int minOdds = 84;
    int daysInYear = 9557;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 188;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int minOdds = 24;
    int daysInYear = 5986;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int minOdds = 25;
    int daysInYear = 8819;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int minOdds = 62;
    int daysInYear = 6528;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int minOdds = 28;
    int daysInYear = 4955;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int minOdds = 75;
    int daysInYear = 5346;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int minOdds = 76;
    int daysInYear = 1084;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int minOdds = 68;
    int daysInYear = 5435;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int minOdds = 13;
    int daysInYear = 1184;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int minOdds = 98;
    int daysInYear = 6729;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 229;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int minOdds = 83;
    int daysInYear = 1699;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int minOdds = 23;
    int daysInYear = 8446;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int minOdds = 99;
    int daysInYear = 1;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int minOdds = 1;
    int daysInYear = 1;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int minOdds = 99;
    int daysInYear = 2;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int minOdds = 50;
    int daysInYear = 1;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int minOdds = 75;
    int daysInYear = 2;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int minOdds = 75;
    int daysInYear = 5;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int minOdds = 99;
    int daysInYear = 6;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int minOdds = 99;
    int daysInYear = 5;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int minOdds = 5;
    int daysInYear = 1;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int minOdds = 95;
    int daysInYear = 2;
    BirthdayOdds* pObj = new BirthdayOdds();
    clock_t start = clock();
    int result = pObj->minPeople(minOdds, daysInYear);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=308453&rd=4675&pm=1848
********************************************************************************
#line 2 "BirthdayOdds.cc"
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <functional>
#include <cctype>
#include <cstdio>
#include <cmath>
#include <stack>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <cassert>
#include <fstream>
#include <utility>
#include <set>
#include <map>
#include <cstring>
#include <complex>
#include <deque>
#include <climits>
#include <iomanip>
#include <ctime>
 
using namespace std;
 
class BirthdayOdds {public: int minPeople(int minOdds, int daysInYear);};
 
int BirthdayOdds::minPeople(int minOdds, int daysInYear)
{
  double prob = 1.0;
  for (int n = 1; ; n++)
  {
    prob *= (double)(daysInYear - n) / (double)daysInYear;
    if (prob * 100.0 < 100 - minOdds)
      return n+1;
  }
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/