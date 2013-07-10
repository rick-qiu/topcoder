/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12056
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

class MinimalTriangle {
public:
    double maximalArea(int length);
};

double MinimalTriangle::maximalArea(int length) {
    double ret;
    return ret;
}


int test0() {
    int length = 5;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 10.825317547305485;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int length = 10;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 43.30127018922194;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int length = 100000;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 4.330127018922194E9;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int length = 100;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 4330.127018922194;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int length = 1000;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 433012.70189221937;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int length = 1;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 0.43301270189221935;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int length = 2;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7320508075688774;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int length = 3;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 3.897114317029974;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int length = 1000000;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 4.3301270189221936E11;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int length = 999999;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 4.330118358672486E11;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int length = 3242;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 4551207.716051092;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int length = 1233;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 658304.4475470202;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int length = 8768;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3289074285834506E7;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int length = 3457;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 5174869.415395928;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int length = 234234;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3757487301863487E10;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int length = 34555;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 5.1703796149431825E8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int length = 741;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 237759.04736768172;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int length = 98283;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 4.182707017075714E9;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int length = 97708;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 4.133908726413193E9;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int length = 772;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 258068.64212453246;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int length = 97431;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 4.1105028730324244E9;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int length = 92415;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6981589343448176E9;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int length = 987;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 421827.55078964145;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int length = 98228;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 4.1780269703273296E9;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int length = 96988;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 4.073208520887716E9;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int length = 890;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 342989.361168827;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int length = 92714;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 3.7221277336829104E9;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int length = 96949;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0699334106974077E9;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int length = 884;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 338380.37396988616;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int length = 99111;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 4.253479579557329E9;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int length = 94672;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8810008682338767E9;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int length = 741;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 237759.04736768172;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int length = 98835;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 4.2298227550456324E9;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int length = 90385;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5374748488758454E9;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int length = 729;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 230120.70330630295;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int length = 4;
    MinimalTriangle* pObj = new MinimalTriangle();
    clock_t start = clock();
    double result = pObj->maximalArea(length);
    clock_t end = clock();
    delete pObj;
    double expected = 6.92820323027551;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test34() == 0 ? ++passed : ++failed;
    test35() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22916431&rd=14739&pm=12056
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
 
class MinimalTriangle {
public:
  double maximalArea(int l) {
    double ans = sqrt(3) / 4.0;
    ans = ans *l*l;
    return ans;
    
  }
};
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/