/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8776
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

class FIELDDiagrams {
public:
    long countDiagrams(int fieldOrder);
};

long FIELDDiagrams::countDiagrams(int fieldOrder) {
    long ret;
    return ret;
}


int test0() {
    int fieldOrder = 2;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int fieldOrder = 3;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int fieldOrder = 5;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 131;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int fieldOrder = 10;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 58785;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int fieldOrder = 1;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int fieldOrder = 2;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int fieldOrder = 3;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int fieldOrder = 4;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 41;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int fieldOrder = 5;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 131;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int fieldOrder = 6;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 428;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int fieldOrder = 7;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 1429;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int fieldOrder = 8;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 4861;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int fieldOrder = 9;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 16795;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int fieldOrder = 10;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 58785;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int fieldOrder = 11;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 208011;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int fieldOrder = 12;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 742899;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int fieldOrder = 13;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 2674439;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int fieldOrder = 14;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 9694844;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int fieldOrder = 15;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 35357669;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int fieldOrder = 16;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 129644789;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int fieldOrder = 17;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 477638699;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int fieldOrder = 18;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 1767263189;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int fieldOrder = 19;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 6564120419;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int fieldOrder = 20;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 24466267019;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int fieldOrder = 21;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 91482563639;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int fieldOrder = 22;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 343059613649;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int fieldOrder = 23;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 1289904147323;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int fieldOrder = 24;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 4861946401451;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int fieldOrder = 25;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 18367353072151;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int fieldOrder = 26;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 69533550916003;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int fieldOrder = 27;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 263747951750359;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int fieldOrder = 28;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 1002242216651367;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int fieldOrder = 29;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 3814986502092303;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int fieldOrder = 30;
    FIELDDiagrams* pObj = new FIELDDiagrams();
    clock_t start = clock();
    long result = pObj->countDiagrams(fieldOrder);
    clock_t end = clock();
    delete pObj;
    long expected = 14544636039226908;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test33() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=12173&pm=8776
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
typedef long long int64;
 
class FIELDDiagrams
{
public:
  int n;
  int64 f[60][60];
  int64 solve(int d,int l)
  {
    int64 &ret=f[d][l];
    if (ret!=-1) return ret;
    ret=1;
    for (int i=1;i<=l && i<=n-d;i++) ret+=solve(d+1,i);
    return ret;
  }
  int64 countDiagrams(int _n)
  {
    n=_n;
    memset(f,255,sizeof(f));
    int64 ret=solve(0,n);
    return ret-1;
  }
};
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/