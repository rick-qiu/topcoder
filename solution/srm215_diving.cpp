/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2960
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

class Diving {
public:
    string needed(string difficulty, string need, string ratings);
};

string Diving::needed(string difficulty, string need, string ratings) {
    string ret;
    return ret;
}


int test0() {
    string difficulty = "3.2";
    string need = "50.32";
    string ratings = "5.5 7.5 10.0 ?.? 4.5";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string difficulty = "3.2";
    string need = "50.32";
    string ratings = "5.5 5.5 10.0 ?.? 4.5";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "5.0";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string difficulty = "4.0";
    string need = "120.00";
    string ratings = "9.5 10.0 ?.? 10.0 10.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "10.0";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string difficulty = "4.0";
    string need = "120.00";
    string ratings = "9.5 10.0 ?.? 9.5 10.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "-1.0";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string difficulty = "2.0";
    string need = "59.00";
    string ratings = "9.5 10.0 ?.? 9.5 10.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "10.0";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string difficulty = "2.0";
    string need = "9.09";
    string ratings = "0.5 10.0 ?.? 0.5 0.5";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "4.0";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string difficulty = "2.0";
    string need = "59.01";
    string ratings = "?.? 10.0 9.5 9.5 10.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "-1.0";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string difficulty = "2.0";
    string need = "0.00";
    string ratings = "6.0 9.5 9.5 0.0 ?.?";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string difficulty = "2.0";
    string need = "0.00";
    string ratings = "0.0 0.0 ?.? 0.0 0.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string difficulty = "2.3";
    string need = ".01";
    string ratings = "0.0 0.0 ?.? 0.0 0.5";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "0.5";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string difficulty = "1.1";
    string need = "16.51";
    string ratings = "?.? 5.0 5.5 4.5 6.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "5.0";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string difficulty = "1.1";
    string need = "16.50";
    string ratings = "?.? 5.0 5.5 4.5 6.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string difficulty = "2.0";
    string need = "24.01";
    string ratings = "?.? 1.0 5.5 5.5 10.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "1.5";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string difficulty = "2.1";
    string need = "24.01";
    string ratings = "?.? 1.0 5.5 5.5 10.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string difficulty = "2.0";
    string need = "23.99";
    string ratings = "?.? 1.0 5.5 5.5 8.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string difficulty = "2.0";
    string need = "24.02";
    string ratings = "?.? 1.0 5.5 5.5 8.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "1.5";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string difficulty = "2.0";
    string need = "38.01";
    string ratings = "?.? 1.0 5.5 5.5 8.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "-1.0";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string difficulty = "2.0";
    string need = "38.00";
    string ratings = "?.? 1.0 5.5 5.5 8.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "8.0";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string difficulty = "3.3";
    string need = "47.85";
    string ratings = "0.5 5.5 3.5 7.0 ?.?";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "5.5";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string difficulty = "2.2";
    string need = "23.10";
    string ratings = "0.0 5.0 5.0 10.0 ?.?";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "0.5";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string difficulty = "1.0";
    string need = "3.00";
    string ratings = "1.0 1.0 1.0 1.0 ?.?";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string difficulty = "3.7";
    string need = "38.86";
    string ratings = "?.? 2.5 3.5 4.5 5.5";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "3.0";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string difficulty = "1.0";
    string need = "15.01";
    string ratings = "?.? 5.0 5.0 5.0 5.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "-1.0";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string difficulty = "3.3";
    string need = "47.85";
    string ratings = "0.5 5.5 3.5 7.0 ?.?";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "5.5";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string difficulty = "1.0";
    string need = "4.00";
    string ratings = "1.0 ?.? 1.0 1.0 1.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "-1.0";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string difficulty = "1.0";
    string need = "15.00";
    string ratings = "1.0 2.0 3.0 4.0 ?.?";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "-1.0";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string difficulty = "1.0";
    string need = "15.10";
    string ratings = "5.0 5.0 5.0 ?.? 5.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "-1.0";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string difficulty = "1.0";
    string need = "7.00";
    string ratings = "2.0 2.0 2.0 2.0 ?.?";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "-1.0";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string difficulty = "1.0";
    string need = "22.50";
    string ratings = "9.0 6.5 6.5 2.0 ?.?";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "-1.0";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string difficulty = "4.0";
    string need = "12.75";
    string ratings = "0.0 1.0 1.0 ?.? 10.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "1.5";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string difficulty = "1.0";
    string need = "16.00";
    string ratings = "5.0 5.0 5.0 5.0 ?.?";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "-1.0";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string difficulty = "1.0";
    string need = "1.06";
    string ratings = "0.0 0.0 0.0 ?.? 10.0";
    Diving* pObj = new Diving();
    clock_t start = clock();
    string result = pObj->needed(difficulty, need, ratings);
    clock_t end = clock();
    delete pObj;
    string expected = "1.5";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=268851&rd=5861&pm=2960
********************************************************************************
#include <vector>  
#include <map>  
#include <set>  
#include <string>  
#include <algorithm>  
#include <deque>  
#include <queue>  
#include <stack>  
#include <iostream>  
#include <cstdio>  
#include <cstring>  
#include <climits>  
#include <cmath>  
#include <sstream>  
using namespace std;  
#define BAE(C) (C).begin(),(C).end()  
#define FOREACH(I,C,T) for (T::iterator I = (C).begin(); I != (C).end(); ++I)  
#define FORA(I,C) for (int I = 0; I < (C).size(); I++)  
#define FORI(I,E) for (int I = 0, end434 = E; I < end434; I++)  
 
struct Diving { 
string needed(string difficulty, string need, string ratings) { 
  vector<string> tok = tokenize(ratings, " "); 
  double diff, nd; 
  sscanf(difficulty.c_str(), "%lf",&diff); 
  sscanf(need.c_str(), "%lf",&nd); 
  for (int rating = 0; rating <= 20; rating++) { 
    vector<int> rates; 
    FORA(i,tok) { 
      if (tok[i] == "?.?") { 
        rates.push_back(rating); 
      } else { 
        double t; 
        sscanf(tok[i].c_str(),"%lf",&t); 
        rates.push_back((int)(t * 2 + 1e-6)); 
      } 
    } 
    sort(rates.begin(), rates.end()); 
    int sum = 0; 
    for (int i=1; i<4; i++) sum += rates[i]; 
    if (sum / 2.0 * diff >= nd - 1e-6) { 
      char c[50]; 
      sprintf(c,"%d.%d",rating/2,(rating%2)*5); 
      return c; 
    } 
  } 
  return "-1.0"; 
} 
template<class T,class V>  
   bool myFind(T &src,V &value)  
   {  
      if (find(BAE(src),value) != src.end()) return true;  
      return false;  
   }  
     
   vector<string> tokenize(string in,string tok) {  
      string::iterator cp = in.begin();  
      vector<string> res;  
      while (cp != in.end()) {  
         while (cp != in.end() && count(BAE(tok),*cp)) cp++;  
         string::iterator tmp = find_first_of(cp,in.end(),BAE(tok));  
         if (cp != in.end()) res.push_back(string(cp,tmp));  
         cp = tmp;  
      }  
      return res;  
   }  
     
   vector<int> sti(const vector<string> &in) {  
      vector<int> out;  
      FORA(i,in) {  
         int tmp; sscanf(in[i].c_str(),"%d",&tmp); out.push_back(tmp);  
      }  
      return out;  
   }  
 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/