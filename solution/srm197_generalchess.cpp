/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2430
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

class GeneralChess {
public:
    vector<string> attackPositions(vector<string> pieces);
};

vector<string> GeneralChess::attackPositions(vector<string> pieces) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> pieces = {"0,0"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-2,-1", "-2,1", "-1,-2", "-1,2", "1,-2", "1,2", "2,-1", "2,1"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> pieces = {"2,1", "-1,-2"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0,0", "1,-1"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> pieces = {"0,0", "2,1"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> pieces = {"-1000,1000", "-999,999", "-999,997"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-1001,998"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> pieces = {"-10000,-10000"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-10002,-10001", "-10002,-9999", "-10001,-10002", "-10001,-9998", "-9999,-10002", "-9999,-9998", "-9998,-10001", "-9998,-9999"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> pieces = {"10000,10000"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9998,9999", "9998,10001", "9999,9998", "9999,10002", "10001,9998", "10001,10002", "10002,9999", "10002,10001"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> pieces = {"-10000,10000"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-10002,9999", "-10002,10001", "-10001,9998", "-10001,10002", "-9999,9998", "-9999,10002", "-9998,9999", "-9998,10001"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> pieces = {"10000,-10000"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9998,-10001", "9998,-9999", "9999,-10002", "9999,-9998", "10001,-10002", "10001,-9998", "10002,-10001", "10002,-9999"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> pieces = {"2,1", "2,-1", "1,2", "1,-2", "-2,1", "-2,-1", "-1,2", "-1,-2"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0,0"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> pieces = {"-10000,-10000", "-9997,-9997"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-9999,-9998", "-9998,-9999"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> pieces = {"10000,10000", "9997,9997"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9998,9999", "9999,9998"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> pieces = {"2,1", "2,-1", "1,2", "1,-2", "-2,1", "-2,-1", "-1,2", "-1,-3"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> pieces = {"2,1", "2,-1", "1,2", "1,-2", "-2,1", "-2,-1", "-1,2"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0,0"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> pieces = {"2,1", "1,2", "-2,1", "1,-2"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0,0"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> pieces = {"10000,10000", "-10000,10000", "10000,-10000", "-10000,-10000"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> pieces = {"0,0", "2,2"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> pieces = {"0,0", "1,1"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-1,2", "2,-1"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> pieces = {"0,0", "-1,-1"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-2,1", "1,-2"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> pieces = {"-2,-2", "0,0"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> pieces = {"2,1", "1,-2", "-2,1", "-2,-1", "-1,2"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0,0"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> pieces = {"-9999,-9999"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-10001,-10000", "-10001,-9998", "-10000,-10001", "-10000,-9997", "-9998,-10001", "-9998,-9997", "-9997,-10000", "-9997,-9998"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> pieces = {"0,0", "2,1"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> pieces = {"2,1", "-1,-2"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0,0", "1,-1"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> pieces = {"10000,10000"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9998,9999", "9998,10001", "9999,9998", "9999,10002", "10001,9998", "10001,10002", "10002,9999", "10002,10001"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> pieces = {"-10000,10000", "-9999,9999", "-9999,9997"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-10001,9998"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> pieces = {"-10000,-10000", "10000,10000", "500,501"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> pieces = {"-10000,-10000", "10000,10000", "-10000,10000", "10000,-10000"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> pieces = {"0,3", "3,0", "2,1"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> pieces = {"0,0"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-2,-1", "-2,1", "-1,-2", "-1,2", "1,-2", "1,2", "2,-1", "2,1"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> pieces = {"-9999,2", "-9999,0"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-10001,1", "-9997,1"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> pieces = {"42,5"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"40,4", "40,6", "41,3", "41,7", "43,3", "43,7", "44,4", "44,6"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> pieces = {"-3,0"};
    GeneralChess* pObj = new GeneralChess();
    clock_t start = clock();
    vector<string> result = pObj->attackPositions(pieces);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"-5,-1", "-5,1", "-4,-2", "-4,2", "-2,-2", "-2,2", "-1,-1", "-1,1"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8547850&rd=5072&pm=2430
********************************************************************************
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <sstream>
#include <iostream>
#include <utility>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <setjmp.h>
#include <ctype.h>
 
#define ll long long
#define ld long double
#define EPS 1e-9
using namespace std;
int yes[16][16];
 
class GeneralChess {
 public:
 vector <string> attackPositions(vector <string> pieces) {
  
// BEGIN CUT HERE
    static bool s_FirstTime = true; if (s_FirstTime) { s_FirstTime = false; run_test(-1); }
// END CUT HERE
 
  int i, j, k;
  int x, y, x0, y0;
  memset(yes, 1, sizeof(yes));
  sscanf(pieces[0].c_str(), "%i,%i", &x0, &y0); x0 -= 4; y0 -= 4;
  for (i = 0; i < pieces.size(); i++) {
   sscanf(pieces[i].c_str(), "%i,%i", &j, &k); j-=x0; k-=y0;
   for (x = 0; x < 8; x++)
    for (y = 0; y < 8; y++)
     if (abs(x-j) && abs(y-k) && (abs(x-j) + abs(y-k) == 3)); else yes[x][y] = 0;
  }
  vector<string> vs;
  for (i = 0; i < 8; i++)
   for (j = 0; j < 8; j++)
    if (yes[i][j]) {
     char bla[64];
     sprintf(bla, "%i,%i", i+x0, j+y0);
     vs.push_back(string(bla));
    }
  return vs;
 }
 
// BEGIN CUT HERE
  public:
  void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
  private:
  template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
  void verify_case(int Case, const vector <string> &Expected, const vector <string> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
  void test_case_0() { string Arr0[] = {"0,0"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { "-2,-1",  "-2,1",  "-1,-2",  "-1,2",  "1,-2",  "1,2",  "2,-1",  "2,1" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, attackPositions(Arg0)); }
  void test_case_1() { string Arr0[] = {"2,1", "-1,-2"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { "0,0",  "1,-1" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, attackPositions(Arg0)); }
  void test_case_2() { string Arr0[] = {"0,0", "2,1"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, attackPositions(Arg0)); }
  void test_case_3() { string Arr0[] = {"-1000,1000", "-999,999", "-999,997"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = { "-1001,998" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, attackPositions(Arg0)); }
 
// END CUT HERE
 
};
 
// Powered by PopsEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/