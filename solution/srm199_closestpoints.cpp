/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2890
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

class ClosestPoints {
public:
    vector<int> distance(int N, int range, int seed);
};

vector<int> ClosestPoints::distance(int N, int range, int seed) {
    vector<int> ret;
    return ret;
}


int test0() {
    int N = 3;
    int range = 100;
    int seed = 1;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9163, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 10000;
    int range = 1;
    int seed = 7;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 12};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 25;
    int range = 1;
    int seed = 12;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 9};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 646;
    int range = 64364;
    int seed = 464;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2774994, 1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 150000;
    int range = 1000000;
    int seed = 30;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {311985, 1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 150000;
    int range = 233;
    int seed = 31;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 656};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 126335;
    int range = 6031;
    int seed = 702;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 1};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 126336;
    int range = 6031;
    int seed = 702;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 2};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 150000;
    int range = 999999;
    int seed = 101;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {404609, 1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 7;
    int range = 1;
    int seed = 200;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 6;
    int range = 2;
    int seed = 201;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 438;
    int range = 1000000;
    int seed = 303;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {493492650, 1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 464;
    int range = 1000000;
    int seed = 303;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {493492650, 1};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 465;
    int range = 1000000;
    int seed = 303;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {140153524, 1};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 15;
    int range = 5;
    int seed = 504;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 51001;
    int range = 1789;
    int seed = 601;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 1};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 150000;
    int range = 1;
    int seed = 700;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 12};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 150000;
    int range = 2;
    int seed = 701;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 144};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 150000;
    int range = 3;
    int seed = 702;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 540};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 150000;
    int range = 4;
    int seed = 703;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1344};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 150000;
    int range = 5;
    int seed = 704;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2700};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 150000;
    int range = 6;
    int seed = 705;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4752};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 150000;
    int range = 7;
    int seed = 706;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7644};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 150000;
    int range = 15;
    int seed = 714;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 77711};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 150000;
    int range = 15;
    int seed = 715;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 77721};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 150000;
    int range = 30;
    int seed = 730;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 159309};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 150000;
    int range = 35;
    int seed = 735;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 126970};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 150000;
    int range = 45;
    int seed = 745;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 74784};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 50000;
    int range = 1000000;
    int seed = 75;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1252249, 1};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 150000;
    int range = 1000000;
    int seed = 597;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {311985, 2};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 150000;
    int range = 1000000;
    int seed = 75;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {311985, 1};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 150000;
    int range = 999999;
    int seed = 14;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {404609, 1};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 150000;
    int range = 1000000;
    int seed = 750;
    ClosestPoints* pObj = new ClosestPoints();
    clock_t start = clock();
    vector<int> result = pObj->distance(N, range, seed);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {704122, 1};
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=274023&rd=5074&pm=2890
********************************************************************************
#include <map> // find insert erase make_pair 
#include <set> 
#include <cassert> // assert 
//#include <list> 
//#include <deque> 
//#include <iomanip> 
//#include <cstring> 
//#include <cmath> 
//#include <cstdio> 
//#include <cctype> // isalpha isdigit isalnum isupper islower tolower toupper 
#include <string> // size 
#include <vector> // push_back pop_back front back 
#include <iostream> 
#include <sstream> // istringstream ostringstream 
#include <algorithm> // next_permutation reverse count 
#include <numeric> // accumulate 
#include <functional> 
 
using namespace std; 
 
#ifdef HOME_RUN // this is debug output code 
int NTR = 1000;struct UU{~UU(){cerr<<endl;} 
template<class X>UU&operator|(const X&x){cerr<<' '<<x;return*this;}}; 
UU uu(const char*f,int l,const char*v){ 
for(cerr<<f<<':'<<l<<' ';*v;++v)cerr<<(*v-'|'?*v:' ');return UU();} 
#define TR(v) if(--NTR<0);else uu(__FILE__,__LINE__,#v)|'='|v 
#else 
#define TR(v) do{}while(0) 
#endif // end of debug output code 
#define ALL(C) (C).begin(), (C).end() 
#define forIter(I, C) for(typeof((C).begin()) I=(C).begin(); I!=(C).end(); ++I) 
#define forN(I, C) for ( int I = 0; I < (C); ++(I) ) 
#define forEach(I, C) forN(I,int((C).size())) 
#define forEach2(I, J, C) forEach(I, C)forEach(J, (C)[I]) 
typedef long long i64; typedef unsigned long long u64; 
typedef vector<int> VI; typedef vector<VI> VVI; typedef vector<string> VS; 
 
struct Point 
{ 
    int x; 
    int y; 
    int z; 
 
    int dist(const Point& p) const 
    { 
        i64 r = 0; 
        r += i64(x-p.x)*(x-p.x); 
        r += i64(y-p.y)*(y-p.y); 
        r += i64(z-p.z)*(z-p.z); 
        r <?= 1000000000; 
        return r; 
    } 
}; 
 
struct LL 
{ 
    bool operator()(const Point& p, const Point& q) const 
    { 
        if ( p.x != q.x ) 
            return p.x < q.x; 
        if ( p.y != q.y ) 
            return p.y < q.y; 
        return p.z < q.z; 
    } 
}; 
struct ByX 
{ 
    bool operator()(const Point& p, const Point& q) const 
    { 
        return p.x < q.x; 
    } 
}; 
typedef vector<Point> VP; 
 
#define METHOD ClosestPoints::distance 
class ClosestPoints 
{ 
public: 
    int best; 
    int get(int range, int& seed) 
    { 
        seed = int((seed*16807LL) % ((1LL << 31)-1)); 
        return (seed % (2 * range)) - range; 
    } 
 
    VI goByX(const VP& pp) 
    { 
        int minx = 1000000, maxx = -1000000; 
        forEach ( i, pp ) { 
            minx <?= pp[i].x; 
            maxx >?= pp[i].x; 
        } 
        VP pp1, pp2; 
        int N = pp.size(); 
        int div = (minx+maxx)/2; 
        forN ( i, N ) { 
            if ( pp[i].x < div ) 
                pp1.push_back(pp[i]); 
            else 
                pp2.push_back(pp[i]); 
        } 
        VI r1 = go(pp1); 
        VI r2 = go(pp2); 
        int d = r1[0] <? r2[0]; 
        d <?= best; 
        int c = 0; 
        if ( r1[0] == d ) 
            c += r1[1]; 
        if ( r2[0] == d ) 
            c += r2[1]; 
        minx = div-int(sqrt(double(d+1))); 
        maxx = div-1+int(sqrt(double(d+1))); 
        VP q1, q2; 
        forEach ( i, pp1 ) { 
            if ( pp1[i].x >= minx ) 
                q1.push_back(pp1[i]); 
        } 
        forEach ( i, pp2 ) { 
            if ( pp2[i].x <= maxx ) 
                q2.push_back(pp2[i]); 
        } 
        forEach ( i, q1 ) { 
            forEach ( j, q2 ) { 
                int q = q1[i].dist(q2[j]); 
                if ( q < d ) { 
                    c = 0; 
                    d = q; 
                } 
                if ( q == d ) 
                    c++; 
            } 
        } 
        best <?= d; 
        VI ret; 
        ret.push_back(d); 
        ret.push_back(c); 
        return ret; 
    } 
 
    VI goByY(VP pp) 
    { 
        forEach ( i, pp ) 
            swap(pp[i].x, pp[i].y); 
        return goByX(pp); 
    } 
 
    VI goByZ(VP pp) 
    { 
        forEach ( i, pp ) 
            swap(pp[i].x, pp[i].z); 
        return goByX(pp); 
    } 
 
    VI go(const VP& pp) 
    { 
        vector <int> ret; 
        int N = pp.size(); 
        if ( N < 1000 ) { 
            int bestd = 1000000000; 
            int count = 0; 
            forN ( i, N ) { 
                forN ( j, i ) { 
                    int d = pp[i].dist(pp[j]); 
                    if ( d == 0 ) continue; 
                    if ( d < bestd ) { 
                        count = 0; 
                        bestd = d; 
                    } 
                    if ( d == bestd ) 
                        count++; 
                } 
            } 
            ret.push_back(bestd); 
            ret.push_back(count); 
        } 
        else { 
            int minx = 1000000, maxx = -1000000; 
            int miny = 1000000, maxy = -1000000; 
            int minz = 1000000, maxz = -1000000; 
            forN ( i, N ) { 
                minx <?= pp[i].x; 
                maxx >?= pp[i].x; 
                miny <?= pp[i].y; 
                maxy >?= pp[i].y; 
                minz <?= pp[i].z; 
                maxz >?= pp[i].z; 
            } 
            int dx = maxx-minx; 
            int dy = maxy-miny; 
            int dz = maxz-minz; 
            if ( dx >= dy && dx >= dz ) 
                return goByX(pp); 
            else if ( dy >= dz ) 
                return goByY(pp); 
            else 
                return goByZ(pp); 
        } 
        return ret; 
    } 
    vector <int> distance(int N, int range, int seed)  
    { 
        VP pp(N); 
        forN ( i, N ) { 
            pp[i].x = get(range, seed); 
            pp[i].y = get(range, seed); 
            pp[i].z = get(range, seed); 
        } 
        set<Point, LL> ss(ALL(pp)); 
        pp.assign(ALL(ss)); 
        best = 1000000000; 
        return go(pp); 
    } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/