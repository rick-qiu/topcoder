/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3515
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

class TreePlanting {
public:
    long countArrangements(int total, int fancy);
};

long TreePlanting::countArrangements(int total, int fancy) {
    long ret;
    return ret;
}


int test0() {
    int total = 4;
    int fancy = 2;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int total = 3;
    int fancy = 1;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int total = 4;
    int fancy = 3;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int total = 10;
    int fancy = 4;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 35;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int total = 60;
    int fancy = 17;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 686353797976;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int total = 55;
    int fancy = 20;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 7307872110;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int total = 41;
    int fancy = 19;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 8855;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int total = 10;
    int fancy = 3;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 56;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int total = 55;
    int fancy = 35;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int total = 19;
    int fancy = 17;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
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
    int total = 58;
    int fancy = 21;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 28781143380;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int total = 45;
    int fancy = 20;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 230230;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int total = 36;
    int fancy = 12;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 5200300;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int total = 22;
    int fancy = 5;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 8568;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int total = 58;
    int fancy = 12;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 52251400851;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int total = 60;
    int fancy = 60;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int total = 60;
    int fancy = 59;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int total = 60;
    int fancy = 31;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int total = 60;
    int fancy = 30;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 31;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int total = 1;
    int fancy = 1;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int total = 2;
    int fancy = 2;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int total = 60;
    int fancy = 15;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 511738760544;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int total = 60;
    int fancy = 10;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 12777711870;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int total = 60;
    int fancy = 20;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 269128937220;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int total = 60;
    int fancy = 29;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 4960;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int total = 60;
    int fancy = 30;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 31;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int total = 60;
    int fancy = 22;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 51021117810;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int total = 3;
    int fancy = 2;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int total = 51;
    int fancy = 15;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 9364199760;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int total = 60;
    int fancy = 17;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 686353797976;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int total = 60;
    int fancy = 12;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 92263734836;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int total = 10;
    int fancy = 4;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 35;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int total = 59;
    int fancy = 20;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 137846528820;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int total = 60;
    int fancy = 25;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 600805296;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int total = 60;
    int fancy = 18;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 608359048206;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int total = 5;
    int fancy = 3;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int total = 9;
    int fancy = 5;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int total = 18;
    int fancy = 1;
    TreePlanting* pObj = new TreePlanting();
    clock_t start = clock();
    long result = pObj->countArrangements(total, fancy);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test36() == 0 ? ++passed : ++failed;
    test37() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11993089&rd=6516&pm=3515
********************************************************************************
#include <cstring> 
 
 
class TreePlanting  
{ 
  public: 
 
  int n; 
  long long memo[70][70]; 
 
  long long rec(int id,int left) 
  { 
    if(!left)  return 1; 
    if(id>=n)  return 0; 
    if(memo[id][left]!=-1) 
      return memo[id][left]; 
 
    long long res=0; 
    for(int i=id;i<n;i++) 
      res+=rec(i+2,left-1); 
 
    memo[id][left]=res; 
    return res; 
  } 
     
     
  long long countArrangements(int to, int fa)  
  { 
    long long ret;    
    memset(memo,-1,sizeof(memo)); 
    n=to; 
    ret=rec(0,fa); 
    return ret; 
  } 
 
  
};

********************************************************************************
*******************************************************************************/