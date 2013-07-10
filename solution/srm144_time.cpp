/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1708
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

class Time {
public:
    string whatTime(int seconds);
};

string Time::whatTime(int seconds) {
    int h = seconds / 3600;
    int m = (seconds % 3600) / 60;
    int s = seconds - h * 3600 - m * 60;
    ostringstream oss;
    oss << h << ":" << m << ":" << s;
    return oss.str();
}


int test0() {
    int seconds = 0;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "0:0:0";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int seconds = 3661;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "1:1:1";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int seconds = 5436;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "1:30:36";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int seconds = 86399;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "23:59:59";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int seconds = 12345;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "3:25:45";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int seconds = 543;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "0:9:3";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int seconds = 6547;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "1:49:7";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int seconds = 345;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "0:5:45";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int seconds = 23334;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "6:28:54";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int seconds = 43200;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "12:0:0";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int seconds = 36000;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "10:0:0";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int seconds = 45678;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "12:41:18";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int seconds = 987;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "0:16:27";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int seconds = 9999;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "2:46:39";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int seconds = 2;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "0:0:2";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int seconds = 5436;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "1:30:36";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int seconds = 86399;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "23:59:59";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int seconds = 3660;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "1:1:0";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int seconds = 3600;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "1:0:0";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int seconds = 86398;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "23:59:58";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int seconds = 60;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "0:1:0";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int seconds = 0;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "0:0:0";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int seconds = 3661;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "1:1:1";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int seconds = 6;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "0:0:6";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int seconds = 36;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "0:0:36";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int seconds = 2;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "0:0:2";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int seconds = 5436;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "1:30:36";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int seconds = 86399;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "23:59:59";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int seconds = 3660;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "1:1:0";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int seconds = 3600;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "1:0:0";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int seconds = 86398;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "23:59:58";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int seconds = 60;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "0:1:0";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int seconds = 0;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "0:0:0";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int seconds = 3661;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "1:1:1";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int seconds = 6;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "0:0:6";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int seconds = 36;
    Time* pObj = new Time();
    clock_t start = clock();
    string result = pObj->whatTime(seconds);
    clock_t end = clock();
    delete pObj;
    string expected = "0:0:36";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=349224&rd=4515&pm=1708
********************************************************************************
#include <string> 
#include <vector> 
#include <iostream> 
#include <algorithm> 
#include <sstream> 
using namespace std; 
 
class Time {  
public:  
  string whatTime(int seconds) {  
    char temp[20]; 
 
    sprintf(temp, "%u:%u:%u", seconds/(60*60), (seconds/60)%60, (seconds%60)); 
    return temp; 
  }  
   
  
};  
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/
