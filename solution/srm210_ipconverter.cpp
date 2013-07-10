/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2937
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

class IPConverter {
public:
    vector<string> possibleAddresses(string ambiguousIP);
};

vector<string> IPConverter::possibleAddresses(string ambiguousIP) {
    vector<string> ret;
    return ret;
}


int test0() {
    string ambiguousIP = "1902426";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.90.24.26", "1.90.242.6", "19.0.24.26", "19.0.242.6", "190.2.4.26", "190.2.42.6", "190.24.2.6"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string ambiguousIP = "12345678";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.234.56.78", "12.34.56.78", "123.4.56.78", "123.45.6.78", "123.45.67.8"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string ambiguousIP = "255255255255";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"255.255.255.255"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string ambiguousIP = "000";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string ambiguousIP = "0000";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0.0.0.0"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string ambiguousIP = "";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string ambiguousIP = "0186290";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0.18.62.90", "0.186.2.90", "0.186.29.0"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string ambiguousIP = "11111111";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.1.111.111", "1.11.11.111", "1.11.111.11", "1.111.1.111", "1.111.11.11", "1.111.111.1", "11.1.11.111", "11.1.111.11", "11.11.1.111", "11.11.11.11", "11.11.111.1", "11.111.1.11", "11.111.11.1", "111.1.1.111", "111.1.11.11", "111.1.111.1", "111.11.1.11", "111.11.11.1", "111.111.1.1"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string ambiguousIP = "10001";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"10.0.0.1"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string ambiguousIP = "3082390871771742784899852251737850570843857369760";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string ambiguousIP = "1111111111111111111111111111111111111111111111111";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string ambiguousIP = "256255255";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2.56.255.255", "25.6.255.255", "25.62.55.255"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string ambiguousIP = "190811305";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"190.81.130.5"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string ambiguousIP = "62313114";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6.23.13.114", "6.23.131.14", "6.231.3.114", "6.231.31.14", "62.3.13.114", "62.3.131.14", "62.31.3.114", "62.31.31.14"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string ambiguousIP = "2562";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2.5.6.2"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string ambiguousIP = "10122419425";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"101.224.194.25"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string ambiguousIP = "43405288";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"43.40.52.88"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string ambiguousIP = "10850182184";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"108.50.182.184"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string ambiguousIP = "12923203125";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"129.23.203.125"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string ambiguousIP = "381144222";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3.81.144.222", "38.1.144.222", "38.11.44.222", "38.114.4.222", "38.114.42.22"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string ambiguousIP = "11913943197";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"119.139.43.197"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string ambiguousIP = "17143132161";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"17.143.132.161", "171.43.132.161"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string ambiguousIP = "151123126128";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"151.123.126.128"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string ambiguousIP = "16678181225";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"166.78.181.225"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string ambiguousIP = "14149222236";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"14.149.222.236", "141.49.222.236"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string ambiguousIP = "201103153116";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"201.103.153.116"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string ambiguousIP = "23818414247";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"238.184.14.247", "238.184.142.47"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string ambiguousIP = "11589248213";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"115.89.248.213"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string ambiguousIP = "9718083191";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"97.180.83.191"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string ambiguousIP = "14993220";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.49.93.220", "14.9.93.220", "14.99.3.220", "14.99.32.20", "149.9.3.220", "149.9.32.20", "149.93.2.20", "149.93.22.0"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string ambiguousIP = "114169271";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"114.16.92.71", "114.169.2.71", "114.169.27.1"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string ambiguousIP = "7750126214";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"77.50.126.214"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string ambiguousIP = "125150117183";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"125.150.117.183"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string ambiguousIP = "2364020111";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"236.40.20.111", "236.40.201.11"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string ambiguousIP = "251153173210";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"251.153.173.210"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string ambiguousIP = "1041281756";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"104.128.17.56", "104.128.175.6"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string ambiguousIP = "2271894541";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"227.189.45.41"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string ambiguousIP = "22877238113";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"228.77.238.113"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string ambiguousIP = "931985739";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"93.198.57.39"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string ambiguousIP = "1966200173";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"19.66.200.173", "196.6.200.173"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string ambiguousIP = "31542482";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3.154.24.82", "3.154.248.2", "31.54.24.82", "31.54.248.2"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string ambiguousIP = "1401561543";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"140.156.15.43", "140.156.154.3"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string ambiguousIP = "1922047222";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"19.220.47.222", "192.20.47.222", "192.204.7.222", "192.204.72.22"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string ambiguousIP = "2481468252";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"248.14.68.252", "248.146.8.252", "248.146.82.52"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string ambiguousIP = "3123113934";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"31.231.139.34"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string ambiguousIP = "21624969225";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"216.249.69.225"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string ambiguousIP = "6318924048";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"63.189.240.48"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string ambiguousIP = "21318212721";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"213.182.127.21"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string ambiguousIP = "33203250193";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"33.203.250.193"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string ambiguousIP = "217134171164";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"217.134.171.164"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string ambiguousIP = "14819738120";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"148.197.38.120"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string ambiguousIP = "00000";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string ambiguousIP = "1092426";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"10.9.24.26", "10.9.242.6", "10.92.4.26", "10.92.42.6", "109.2.4.26", "109.2.42.6", "109.24.2.6"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string ambiguousIP = "19002426";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"190.0.24.26", "190.0.242.6"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string ambiguousIP = "100234";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.0.0.234", "10.0.2.34", "10.0.23.4", "100.2.3.4"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string ambiguousIP = "100001";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"100.0.0.1"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string ambiguousIP = "00010";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0.0.0.10"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string ambiguousIP = "255255255255";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"255.255.255.255"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string ambiguousIP = "55555555555555555555555555555555555555555555555555";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string ambiguousIP = "2199023255552111";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string ambiguousIP = "00000000000";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string ambiguousIP = "00000";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string ambiguousIP = "1092426";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"10.9.24.26", "10.9.242.6", "10.92.4.26", "10.92.42.6", "109.2.4.26", "109.2.42.6", "109.24.2.6"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string ambiguousIP = "19002426";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"190.0.24.26", "190.0.242.6"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string ambiguousIP = "100234";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1.0.0.234", "10.0.2.34", "10.0.23.4", "100.2.3.4"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string ambiguousIP = "100001";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"100.0.0.1"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string ambiguousIP = "00010";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0.0.0.10"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string ambiguousIP = "255255255255";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"255.255.255.255"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string ambiguousIP = "55555555555555555555555555555555555555555555555555";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string ambiguousIP = "2199023255552111";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string ambiguousIP = "00000000000";
    IPConverter* pObj = new IPConverter();
    clock_t start = clock();
    vector<string> result = pObj->possibleAddresses(ambiguousIP);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test38() == 0 ? ++passed : ++failed;
    test39() == 0 ? ++passed : ++failed;
    test40() == 0 ? ++passed : ++failed;
    test41() == 0 ? ++passed : ++failed;
    test42() == 0 ? ++passed : ++failed;
    test43() == 0 ? ++passed : ++failed;
    test44() == 0 ? ++passed : ++failed;
    test45() == 0 ? ++passed : ++failed;
    test46() == 0 ? ++passed : ++failed;
    test47() == 0 ? ++passed : ++failed;
    test48() == 0 ? ++passed : ++failed;
    test49() == 0 ? ++passed : ++failed;
    test50() == 0 ? ++passed : ++failed;
    test51() == 0 ? ++passed : ++failed;
    test52() == 0 ? ++passed : ++failed;
    test53() == 0 ? ++passed : ++failed;
    test54() == 0 ? ++passed : ++failed;
    test55() == 0 ? ++passed : ++failed;
    test56() == 0 ? ++passed : ++failed;
    test57() == 0 ? ++passed : ++failed;
    test58() == 0 ? ++passed : ++failed;
    test59() == 0 ? ++passed : ++failed;
    test60() == 0 ? ++passed : ++failed;
    test61() == 0 ? ++passed : ++failed;
    test62() == 0 ? ++passed : ++failed;
    test63() == 0 ? ++passed : ++failed;
    test64() == 0 ? ++passed : ++failed;
    test65() == 0 ? ++passed : ++failed;
    test66() == 0 ? ++passed : ++failed;
    test67() == 0 ? ++passed : ++failed;
    test68() == 0 ? ++passed : ++failed;
    test69() == 0 ? ++passed : ++failed;
    test70() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=286907&rd=5856&pm=2937
********************************************************************************
//program framework generated with WishingBone's parser :)-
 
//common header
#ifdef WIN32
#  pragma warning(disable:4786)
#  define for if (0); else for
#endif
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <bitset>
#include <valarray>
#include <algorithm>
#include <functional>
#include <numeric>
#include <complex>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;
 
//64 bit integer definition
#ifdef WIN32
#define in_routine(type,spec) \
istream& operator>>(istream& s,type &d){char b[30];s>>b;sscanf(b,spec,&d);return s;}
#define out_routine(type,spec) \
ostream& operator<<(ostream& s,type d){char b[30];sprintf(b,spec,d);s<<b;return s;}
typedef signed __int64 i64; in_routine(i64,"%I64d") out_routine(i64,"%I64d")
typedef unsigned __int64 u64; in_routine(u64,"%I64u") out_routine(u64,"%I64u")
#else
typedef signed long long i64;
typedef unsigned long long u64;
#endif
 
//common routines
#ifdef WIN32
#define min(a,b) _cpp_min(a,b)
#define max(a,b) _cpp_max(a,b)
#endif
#define abs(a) ((a)>0?(a):-(a))
int gcd(int a,int b){for(int c;b;c=a,a=b,b=c%b);return a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}
template <class T>
void remove(vector<T>& v,const T&e){
  v.resize(remove(v.begin(),v.end(),e)-v.begin());
}
 
template <class T>
vector<T> remove_copy(vector<T>& v,const T&e){
  vector<T> result;
  remove_copy(v.begin(),v.end(),back_inserter(result),e);
  return result;
}
//output routine
ostream& operator<<(ostream& s,string d){
  s<<'\"'<<d.c_str()<<'\"';
  return s;
}
template <class T>
ostream& operator<<(ostream& s,vector<T> d){
  s<<"{";
  for (typename vector<T>::iterator i=d.begin();i!=d.end();i++)
    s<<(i!=d.begin()?",":"")<<*i;
  s<<"}";
  return s;
}
 
//parsing routine
template <class T>
vector<basic_string<T> > parse(const basic_string<T> &s,const basic_string<T> &delim){
  vector<basic_string<T> > ret(0);
  for (int b,e=0;;ret.push_back(s.substr(b,e-b)))
    if ((b=s.find_first_not_of(delim,e))==(e=s.find_first_of(delim,b)))
      return ret;
}
vector<int> intparse(const string &s,const string &delim=" \t\n"){
  vector<string> tmp=parse(s,delim);
  vector<int> ret(0);
  int t;
  for (vector<string>::iterator i=tmp.begin();i!=tmp.end();i++)
    sscanf(i->c_str(),"%d",&t),ret.push_back(t);
  return ret;
}
 
//name mapper
class mapper{
public:
  map<string,int> m;
  vector<string> v;
  void reset(){
    v.clear();
    m.clear();
  }
  int size(){
    return v.size();
  }
  int get(string str){
    if (m.find(str)==m.end()){
      m[str]=v.size();
      v.push_back(str);
    }
    return m[str];
  }
  string get(int i){
    return v[i];
  }
};
 
 
 
class IPConverter{
public:
  bool v(string s) {
    if (s.length() > 3) return false;
    if (s.length() > 1 && s[0] == '0') return false;
    int d;
    sscanf(s.c_str(), "%d", &d);
    return d < 256;
  }
  vector<string> possibleAddresses(string ip){
    int n = ip.length();
    vector<string> ret;
    if (n > 15) return ret;
    set<string> s;
    for (int i = 1; i < n; ++i) for (int j = i + 1; j < n; ++j) for (int k = j + 1; k < n; ++k) {
      string a = ip.substr(0, i);
      string b = ip.substr(i, j - i);
      string c = ip.substr(j, k - j);
      string d = ip.substr(k);
      if (v(a) && v(b) && v(c) && v(d)) {
        string t = a + "." + b + "." + c + "." + d;
        if (s.find(t) == s.end()) {
          s.insert(t);
          ret.push_back(t);
        }
      }
    }
    sort(ret.begin(), ret.end());
    return ret;
  }
};

********************************************************************************
*******************************************************************************/