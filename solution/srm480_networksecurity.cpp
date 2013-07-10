/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10736
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

class NetworkSecurity {
public:
    int secureNetwork(vector<string> clientCable, vector<string> serverCable);
};

int NetworkSecurity::secureNetwork(vector<string> clientCable, vector<string> serverCable) {
    int ret;
    return ret;
}


int test0() {
    vector<string> clientCable = {"NYN", "NNN", "NYN"};
    vector<string> serverCable = {"YN", "YN", "NY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> clientCable = {"NN", "NN"};
    vector<string> serverCable = {"NNN", "NNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> clientCable = {"NYNN", "NNNN", "NNNY", "NNNN"};
    vector<string> serverCable = {"YYN", "NNN", "NNY", "NNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> clientCable = {"N"};
    vector<string> serverCable = {"N"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> clientCable = {"N"};
    vector<string> serverCable = {"Y"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> clientCable = {"NYYY", "NNYY", "NNNY", "NNNN"};
    vector<string> serverCable = {"YYYYNNNNNNN", "YYYNYYYNNNN", "YYNNYYNYYNN", "YNNNYNNYNYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> clientCable = {"N"};
    vector<string> serverCable = {"N"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> clientCable = {"N"};
    vector<string> serverCable = {"YN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> clientCable = {"N"};
    vector<string> serverCable = {"NNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> clientCable = {"N"};
    vector<string> serverCable = {"NYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> clientCable = {"N"};
    vector<string> serverCable = {"NNNNYNYYNNNNNNYYNYNNYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> clientCable = {"N"};
    vector<string> serverCable = {"YYNYYYYYYYYYNNYYNYYYYYYYYYNYYYYYYYYYN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> clientCable = {"N"};
    vector<string> serverCable = {"NNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNYYNNNNYNYYNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> clientCable = {"NN", "NN"};
    vector<string> serverCable = {"N", "N"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> clientCable = {"NN", "YN"};
    vector<string> serverCable = {"YY", "YY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> clientCable = {"NN", "NN"};
    vector<string> serverCable = {"NYYN", "YNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> clientCable = {"NN", "NN"};
    vector<string> serverCable = {"NYNYYYYNN", "YNNNYYYNY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> clientCable = {"NN", "YN"};
    vector<string> serverCable = {"NYNNYNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNYNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> clientCable = {"NY", "NN"};
    vector<string> serverCable = {"YYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> clientCable = {"NN", "NN"};
    vector<string> serverCable = {"YYYNYYYNNYYNYYNYNYNYNYYYNYYYYNYYYYYNYYYYNYYYYYYNYY", "YNYYYYYYNYNYYNYYYNNYYYYYYYYYYYYYYYYYYNYNNNYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> clientCable = {"NNYN", "NNNN", "NNNN", "NYNN"};
    vector<string> serverCable = {"Y", "Y", "Y", "Y"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
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
    vector<string> clientCable = {"NNNN", "YNYN", "YNNN", "YYYN"};
    vector<string> serverCable = {"YY", "NY", "YY", "YY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> clientCable = {"NNYN", "YNNN", "NNNN", "NYYN"};
    vector<string> serverCable = {"NNNY", "NYNN", "NNNN", "NNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
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
    vector<string> clientCable = {"NNNN", "NNNY", "YNNN", "NNNN"};
    vector<string> serverCable = {"YYYYYYYYN", "NYYYNYNYY", "YYYYYYNYY", "YYYNYYYNY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> clientCable = {"NNYN", "YNYY", "NNNN", "YNYN"};
    vector<string> serverCable = {"YNNNNNNYNYNYNNNYNNNYYN", "YYNNNYYYYNNYNNYYNYNYNN", "NNYYYNYNNYYNYYNYNNNYYN", "YYYYNNNNNYYNNNNNYYNYYN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> clientCable = {"NNNN", "NNNN", "NNNY", "NNNN"};
    vector<string> serverCable = {"YYYYYYYNNNNNNNNYYNYNNNNNYNYNYNNNYNNYN", "NYNNYYNYNNNNNYYYNNYNYYYNNYYYNYYNYNNNN", "NNNYYNYYYNNYNNYYYYNYYYYNYNYNNYYYYNYYN", "YYNYYNNYNNYNNNNNNNNYNYNYYNYYYNNYYNNYN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> clientCable = {"NNNN", "NNNN", "NNNN", "NNNN"};
    vector<string> serverCable = {"NYYYYYYNYYYYNYNYYYYNYYYYYYYNYNYYYYNYYNYYYYNYYYYYYY", "YYYYNNYYYYYNYYYYNYYYNYNYYYYYNYYNYNYYNYYYYYYYYYYYYY", "YYYYNYYNYYYYYYYYYNYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYNY", "YYNYNYNYYYNYYYNYYNYYYYYYYYYYYNYNYYYYYYYNNNYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 163;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> clientCable = {"NYYYNNNNN", "NNYNNNNNN", "NNNNNYNNN", "NNNNNNNNN", "NNNNNNYNN", "NNNNNNNNN", "NYNNNNNNN", "NNYNNNNNN", "NNNNNNYNN"};
    vector<string> serverCable = {"N", "N", "Y", "Y", "N", "N", "N", "N", "N"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
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
    vector<string> clientCable = {"NYYYYNYYY", "NNNNNNNNN", "NYNNNNNNN", "NYYNNNYYY", "NYYNNNYNY", "YYYYYNYYY", "NYNNNNNNN", "NYYNYNYNN", "NYYNNNNNN"};
    vector<string> serverCable = {"NY", "NY", "YY", "NN", "YY", "NY", "NY", "YN", "YY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> clientCable = {"NNNNYNNYN", "YNNNYNNYN", "YNNYNNNYY", "NNNNNNNNN", "NNNNNNNNN", "NYNNYNNNN", "NYYYYYNNN", "NNNYNNNNN", "YNNNNNNYN"};
    vector<string> serverCable = {"NNYN", "NNNY", "YYYN", "NYYY", "YYYY", "NYNY", "YYYY", "YYYN", "YYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> clientCable = {"NNNYYYNYN", "NNNNNNNNN", "NNNNNYNYN", "NNNNYYYNN", "NYNNNYYNN", "NYNNNNNYN", "NYYNNNNNN", "NNNNNNNNN", "NYYNYYYNN"};
    vector<string> serverCable = {"NYNYNYNNY", "YYYNYNNYN", "YNYYNNYYN", "YNYYYNNYN", "YYNYYYNYY", "YYNNNYNYN", "NYYNNYYYN", "NNYYNNYNN", "YNNYYYYNY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> clientCable = {"NNNNNNNNY", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNY", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN", "NNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNYNNNNY", "NNNNYNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNYNNNN", "YNNYNNNNNNNNNNNNNYNYNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> clientCable = {"NNNNYNNNN", "YNNNNNNNN", "YYNNYNNNN", "NYYNYNNYN", "NNNNNNNNN", "YNYNNNNNY", "YNYNNYNNY", "YNYNNYYNN", "YYNNNNNNN"};
    vector<string> serverCable = {"YYYYNYNYYNYYYYYYNYYYYYYNNNYYNYYYYYYYY", "YYNNNYYNYYYYYYYNNNNNNYYYYNYNNNYYYNYYY", "YYYNYNNYYNNNYNYYNYNYYYYNYYYYYYYYYYYYY", "NYYYNYNNYYNNYNYNNYNNYYYYYYYYNYNYYNYYN", "NNNYYNYYYNYYYYNYYYNYYYNYYYNYYNNNNYYYN", "YYNYNYNYYYYNYNYNYNNYYNNYNYNYYYNYYYYYY", "NYNNYYYNNYNYNYYYYYYNYNNYNYNYNNNYYNNYN", "YYYYYYNYYYYYYYNYNNNYNNYNYNYYNYYNYYNYY", "YYYYYYYNNYYYNYYNNYYNYYYYYYNYYNNYNYNNY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> clientCable = {"NNNYYNNNN", "NNNNYYNNY", "NNNYNNNYN", "NNNNNYNYN", "NNYYNNNYN", "NNNNNNNYN", "YNYYYNNNN", "NNNNNNNNN", "NNYYNNYNN"};
    vector<string> serverCable = {"YNNNYNYNNNNYNNNNNNNNNNNNNYYNNNNNYNNNYYYNYNYNNNNNNY", "YNNNNYYNYYNNNNNYNNNYNNNNNYNYYNYNYNNYYNNNNNYNNNNNNN", "NNNYYNNNNYNYNNNNYNNNNNNYNNNNYYNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNYNYNNNNYNYYYNNNNYNYNYNNYNNNNNNNNYNYNNNYNN", "YYNNNYYNNYYNNNYNNYNNYNNNNNNNYNNNNNNYYNNYNNNNNNNNNN", "NYYNNYNNNNNNYNNNYYYNYYNNYNNNYNYNNYYYNNNYNNNNNNYNNN", "NYNNNNNNNNYNYNNNYYNNNNNYNNNNNNNYYNNNNNNNYNNNNYNNYN", "YNYYYYNNNYNNNYNNNYNNNNNNYNNYNNNNNNNYNNYNNYNNNNYNYY", "NYNNNNNNYYYNNNYNYYNNYYNYYYNNYYNYYNYNYYNYNNYNNYYNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> clientCable = {"NNNNNNNYNNNNNNNNNNNNNN", "NNNYYNNYNNNYNYNNYNYYNY", "NNNYNNNYYYYYNYYNNYNYYY", "YNNNYNYNYNYNNYYNNNNNNY", "NNNNNNNYNNNNNNNYNNNNNN", "YNNYNNYYYYNNNNNYNYNNNY", "NNNNYNNNNNNNNNNYNNYNNN", "NNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNYNNYNNN", "NYNYNNYYNNYYNYYYNYYNNY", "YNNNNNYYYNNYYYNNYNNYNN", "NNNNYNYYYNNNYYNYYNYNNN", "YNNNNNYNYNNNNYNNYNYNNN", "YNNNYNYYNNNNNNNNYNYNNN", "YNNNNNYYNNYYYYNYNNYNNN", "YNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNYYNNNNNNYNNNNNN", "YYNNNNNYNNYYNYYNNNNYNY", "NNNNYNNNNNNNNNNNNNNNNN", "NNNNYNNYYNNYYYNNNNNNNN", "YYNYYYNNNNYNNYYYYYYYNY", "NNNNNNYNYNYNNYYNYNYNNN"};
    vector<string> serverCable = {"Y", "N", "Y", "Y", "N", "Y", "Y", "N", "N", "Y", "Y", "N", "Y", "N", "N", "N", "Y", "Y", "N", "Y", "N", "N"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> clientCable = {"NNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YY", "YY", "YY", "YN", "YY", "YY", "YY", "YY", "YY", "YY", "NY", "YY", "YY", "YN", "YY", "YY", "NY", "YY", "YY", "YN", "YY", "YY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> clientCable = {"NYYNNNNNYNNNNNNNNNYYNN", "NNNNNNYNNNNNNNNYNNNNNY", "NNNNNNNNNNNNNNNNNNNNNN", "YNNNNNYNYYYNNNNNYNNNYN", "NNYNNNYNNNNNNNNNNNYNNN", "YNNNNNNYNYNNYNYNNNNNYN", "NNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNYNNYNYNNNNYYNN", "NNNNYNNNNNNNNYNYNNNNNN", "NNYNNNNNNNNNNNNNNNNYYN", "NNNNNYNNYNNNYYNNNNYNNN", "NYNNNNNNNNNNNYNNNNYYNN", "NNYNYNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNYNNNNNNNNN", "NNYNNNYNYNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNYNNY", "NNNNYNNNNNNNYNYNNNNYYY", "YNNYNYNNNYNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NYYNNNNNYNNNYNYNNNNNNY", "NNYNNNNYNNNNNNYNNNYNNN", "NNNNNNNNNNNNNNNNNNYNNN"};
    vector<string> serverCable = {"NNNY", "NNNN", "NNNN", "YNNN", "NNNN", "NNNN", "NNNN", "NYNN", "NYNN", "YNNN", "NNNN", "NNNN", "NNNY", "NNNN", "NNNN", "NNNN", "NNNN", "NNNN", "YNNN", "NYNY", "NNNN", "YNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> clientCable = {"NNNNNNNNNNYNNNNNNNYNNY", "NNNNYNYNNNNNNNNNNYNNNN", "NNNNYNNNNNNNYNYNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNYNNNYNNNYNNYNN", "NNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNN", "YNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNYN", "NNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNYNYN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNYNNNYNNNNNNN"};
    vector<string> serverCable = {"YYYYYYYYY", "NYYYYNYNN", "YNYYYNYNY", "YNNYYYYYY", "NNYYYYYYY", "YYYNYYYYY", "NYYYYYNYY", "YNYNNYNYY", "YNYYYYYYY", "YYNYNYNYY", "NYNYYYYNY", "YYYNYYYYY", "YNNYYYNNY", "YYYYYYYYY", "YNYYYYYYN", "NYNYNYNYY", "NNNYYYYYY", "NYYYYYYYY", "NYYNYYYNY", "YNYNYYYYN", "YYNYYYYYN", "NYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNYNNNNNY", "YNNYNNNNYNNNYYYYNNYYYN", "YNNNNYNNYNYNYNNNNYNYNN", "NNYNNNYNNNNYNNNNNNYNNY", "NNNNNYNNNYNYYYNYYNYNYN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNYNNYNNNNNNYY", "YNYNYNNNNNYNYYNNYYNYNY", "NNNNNNNNNNNNNNYNNNNNNN", "NNNNNYYNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNYNNNNYYNNY", "NNNNNNNNNNNNNNNNNNYNYN", "NNNNNNNNNNNNNNNNNNNNYN", "NNNNYYNNNYNNYNNNNYNNNY", "NNNNNNNNNYNNNNNNNNNNNY", "NNNNNYNNNNNNNNNNNNYNNN", "NNNNNYYNNNNNNNNYYNYNNY", "YNNNNNNNNYNNNYNNNNNNNN", "NNNNYNNNYNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YNYYYNYNYYYYYYYYYYYYYY", "NYYYYYYNNNYYYNYNYNYNYY", "YYNYYNYNYNYYYYNYNYYYNY", "YYYNNYYYYYYYYYYNYYNYYN", "YYYYYNYYYYYNYYYYNYYYYY", "YNYYYYYYYYYYYYYYNYYYYN", "YYYNYYNNYYYNNNYYYNYNYY", "NYYYYNYNYNNYNYYYYYYYYY", "YYYNYYYNYYYYYYNYNNYYYY", "NYNYYYYYYYYYYYNYYYNNYY", "YNYYYNYYYYNYYYYYYYYYYY", "YYYNYNYNYYYYYYYNYNYYYY", "NYYYYNNYYYYNYYYYYNYYNY", "YYNYYNYYYYYYYYYYNNNYNY", "YYNYYYYNYYYNNYYYNYYYNY", "YNNYYNYYNNYNYYYYYYYYYY", "YYNYYNYYYNYYYYYYYYYYYY", "YYYYNYYYYYYYYYYNYYYYYY", "YYYYYYYNYYNNYNYYYYYYNY", "NYYYYYYYYYNNYYYYYYNYNN", "YYYYYNNYYNNYYYYYYYYYYY", "NYNNYYYNNNNYYNNYYYNNNY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> clientCable = {"NNYNYYYYYYYNYYNYNYNYYY", "NNNNNNNNNNNNNNNNNNYNNN", "NYNNYYNNNNYNYNNNYNYNNN", "NNYNYNNNYYNNNNNYYNYNNN", "NNNNNYNYNNYNNYNNNYNNNY", "NNNNNNNNNNNNNNNYNYNNNY", "NNYYNYNNNYNNYYYYNYNNYY", "NYNNNYNNNNNNNNNYNYYNNN", "NYNNNYNNNNYNYYNNYNNYNY", "NNYNYYNYNNNNYYNYYNNNNY", "NYNNNYNYNNNNNNNYNNYNNN", "NNNNYYYNYYNNYYYNYNYYYN", "NYNNNNNNNNYNNNNNNYYNNN", "NYNNNYNYNNYNYNNNNYYNNY", "NYNYYYNNYYYNYNNYYNYYNN", "NYNNNNNNNNNNNNNNNNYNNN", "NYNNYYNYNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NYYNYNNYNYNNNYNYYYNNNY", "NYNYNNNYYNYNYYYYYYNNNN", "NYNNNNNNNNNNNNNYNYYNNN"};
    vector<string> serverCable = {"YYYNNYYYNYNNNYNNYNYYNNNNNNYNYYYYYYNNY", "YYYYYYNNYYYYYYYYYYNYYYYYYYNYYNYNNNYYY", "NNYYNYYYNYYYNYYNYYYYYYYNYYNYNYYNNYYYY", "YYYNYNNYYNNYNYYYYNYYNYNNYYYNNYNYYYYNY", "NYYNNYYYYNYYYYYNYNYYNYYNNNNNNYYNYYYYN", "YYYYYNYNYNYYYYYNYYYYYNYNYNYYYNYYYNYYY", "YYYYYNNNYYYYYYYYNYNNYYYNYYYYYYYNYYYYY", "YNNYYYYYYYNYYYYNYYNYNYYYNNYYYNYNYYYYY", "YYYYYYYNYYYNYYNNYYYYYNNNNNYNNYNNNYYYY", "YYYYNYYYYYNYYNNNNYNNYNYYNNNYNYNYYYYYN", "YNYNYYNYNNYNNYYYNYNYYYNNNYYYYNYYYYNYN", "YYYYNYYNNNNNNYNYNNYNYYNNNYYYNNYYYYYNN", "NYYYYYNYYYYNYYYYYNNNYYYNYYNYYNNYYYNYY", "NYYNYNNYYYYYYYNNYYYYYYNNYYNNYNNNYYNNY", "YYYNNYYYYNNYYYNYNYNYYYNNNYNNYYYYNYYYN", "NYYYNYNYYYNYNNNYYYYNYNYYYYNNYNNYYNYYY", "YYYNYNYNNNNNYNYYNYYYYYYYYYNYYNYNNNYYY", "YNYYNYYYNYNYYNNYNNYNYNYYYYYNYNYNYNYYY", "NNYYYNNYNYYYNNYYYNNNNNYYYNYYYYYYYNYYN", "NYYYYYNYYYNYYYYNYYYYNNNYNYYNYYYYNYNNN", "YNYYNYNYNYYNNYNYNNYYYYYYYNNYNNNNYNNNY", "NYYNNYNYYYYNYYNYYNYYNYYYNYYYYYYYNYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> clientCable = {"NYNNNNNNYNNNNNNNNNNNNN", "NNNNNNYNYYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNN", "YNYNNNYNNNYNNNYNNNNYNN", "NNNYYNYNNYNNNNYNNYYNNN", "NNYNNNNNNNNNNNNNNNNNNN", "YYYNYNYNNYNNYYYYYNNNNN", "NNYNNNNNNNNNNNNNNNNNNN", "NNYNNNNNYNNNNNNYNNNNNN", "NYNYNNYNYNNNNNNNNYNNNN", "YNYYNYNNNNYNNNYNNYNNYN", "NNNYNNYNNYYNNNYYYYNYNN", "NYNNYNNNNNNYYNYNYNNYYN", "YNNNNNYNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNN", "NYNNYYNNNYNNNNYYNNYYYN", "NNNNNNNNNYNNNNNNNNNNNN", "NYYNNNYNNYNNNNYNNYNYNN", "YNYNNNYNNNNNNNYYNYNNNN", "YNNYYNNNNNYNNNYYNNNNNN", "NYNYYNNYYNYNNNNYYNNYNN"};
    vector<string> serverCable = {"YNYNYNNYNNYYNNNNYNYNNYNNNYNNNNNNYYNNNYNYNNNYNNNNNN", "NNNNYYNNNYNNNNNNYNYYYYNNNNYYNNYYYNNNNNYYNNNNYYNNNY", "YNNNNNNNNYYYYYYNNYYNYNNNNYYNNNNNNNNYYNYYYYYYYNYYNY", "NNNYYNNNYNNYYNNNNNNYNYYNNYYNNYYNNNYNYYNNNYNYNNYNNN", "YNYNYNNYNYYYNYYNNNNNNYYYYNNNNYYNNNYYYYYNNNNNYNNYNN", "NYYNYNNYYYNNNYNYYNNNYNYNNNYNNYNNNNYNYNNNYYYNNNNYYN", "NYNYYNYNYYNYYNYYNYNNNNNNYNNYYNNYNNNNNYNYNNYYNNNYNN", "YNYYYNYNYNNNYNNNNNYYYNNYNNNYNNNNNNYNNNYNNNNYYNNYNN", "YNNYYYNYYYYNNNYYNNYYYNYNNYYYNNYYYNNNYYNNNNYNYNYNNY", "YNYNYNYYYNYNNYYNNYNYNNNYNNNNYYNNNNNNYNYYNYYYNNNNNN", "NYNNNYNNYYNNNYNYNNNNYYNNYNYNYYYYNNNNNYYYYNNNYNYYNN", "NNYNNNNNYNNNNNYNYNYNNYNNYYNYYNNNNNNNNNNNYYNYYYYYYN", "NYNYNNYNYNNYYNYNNYNYNNNYYYNNNYNNNYNNNNNYNNNYYYYYYY", "YNNYNYNNYNNNYNNNNNNYYNNYNNNYYNNYNYNYYYNYNYNYYNNYNN", "YNYYNYNNNYYYNNNNYNNYNNYYYYNYYYNNNNNYNYNYNNNNNNNNNY", "NNYNYNNYNNYNNNNNNNYYYNYNNNNNNNNNNNNNNNYNYNNYNNNNYY", "NYNYNNNYYNNYNNYYNYYNNYNNYNNYNNYNNNNNNYNYNNNNNYYYNN", "NYNNYYNNNNYNYNYYNNYYYYNYNYNNNNNYYNYNNNNYYYYNNNYNYY", "YYNNYNNYNNNNYNNYYYYNNYNNYNYNNNNYYYNNNNYYYNNYYYNNNN", "YNNNYYYNNNNYYYYNNNNNNNNNNNYNYNNYYNYNNNNYNNYNNNNNNY", "NYNNNYNNNNNNNYNYNNYYYNYYNNNNNYYNNNNNNNYNNNNNYNNNYN", "NNYNYNNYYNYNYYYYNYYNNYYYNNYNNNYNNYYNNNNYYNNYNNYNYN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> clientCable = {"NNNNYNYNYNNNNNNNNYNNYNYYNYYNNYNNNYYNN", "YNYNYYYNYNNYNNNNNYYNYNNYNNNNYYNNNYYYN", "NNNNYNYNNNNNNNNNNYNNYNNNNYNYNYYYNYNNN", "YYYNNYYNYYNYNNNYNNYNYNNNNYYNNNNYNNNYN", "NNNNNNNNYNNNNNNNNYNNNNNYNYNNYYYNNYYNN", "YNYNYNYNYNNNNNNNNYNNYNYYNNNYYYYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYNYYNYNNYNYNYYNYNNNNYYYYYNYNYNNYYN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NYNNNYYNNNNYNNNNNNNNYNYYNYYYYYNYNNYYN", "NYYYNNYYYYNYNYNYYNNNNNNYYNYNYNYYYNNNY", "NNNNYYYNYNNNNNNNNNYNYNYYNNNYYYYYNNYYN", "YYNNNYNYNYYYNYNYNNNNYYNNYYYNYYYNNYNYN", "YYYYNNYNYNNYNNNYNNYNYNYYYYYYYYNYNNYYN", "YYYYNYNYYYYNYYNNYNNNYYYYYYYYNNNYYNNYN", "YNYNYYYNYNNNNNNNNYYNYNYYNYYNYNYNNYNNN", "YYYYNYNNNNNNNNNYNYYNYNNYYYYYNYNYNNYNN", "NNNNNNYNYNNNNNNNNNNNNNNNNNNNYYNNNNNNN", "NNYNYYYNNNNNNNNNNNNNYNNYNYYNYYYNNYYNN", "YNYYYYYYNNNYYYYYNNNNYYYYYNYYYNYYYNYNY", "NNNNNNNNYNNNNNNNNNNNNNYYNNYNNYNNNNYNN", "YYYNYYNNNYYNNYNYNNYNYNYYYNNYYNYYYYYYY", "NNNNYNYNYNNNNNNNNYNNNNNYNYYNYYYNNYYNN", "NNNNNNNNYNNNNNNNNYNNNNNNNYNNYYYNNYNNN", "YNNYNNNNNYNNNNNNNNNNYNNNNYNNYYNYNYYYN", "NNNNNNYNYNNNNNNNNYNNNNNNNNNNNYNNNYYNN", "NNNNNNYNNNNNNNNNNYNNNNNNNNNNNYYNNNNNN", "YNNNYNYNYNNNNNNNNYNNYNYNNYNNYYNNNYYNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNYNYNNNNNNNNYNNNNNNNNNNYNNNNNNNN", "YNNNYNNNNNNNNNNNNYNNYNYYNYYYYYNNNNYNN", "NYYNNYYNYYNYNNNYYNYNYNYYYYYYYYYNNYNNY", "NNNNNNYNNNNNNNNNNNNNNNNNNNYNYYYNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNYYYNNYNNN", "YNNNYNYNNNNNNNNYNYYNYNYNNYYNYYYYNYYNN", "NYYNNNYYYYNNNYNYYNNNYNYNNNYNYYYYNNYYN"};
    vector<string> serverCable = {"N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> clientCable = {"NNNYNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNY", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NN", "NN", "NN", "NN", "YN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NY", "NN", "NN", "NN", "NN", "NN", "NN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> clientCable = {"NNNYNNNNNYYYNNNYNNNNNYYNYNYNNYNNYYNYY", "NNNYNNYNNYYYNYNYNNNNYYYNYYYNNYYNYYNYY", "YYNYNYYYYYYYNYYYNNNNYYYNYYYNNYYNYYNYY", "NNNNNNNNNYYYNNNYNNNNNYYNYNYNNYNNYYNYY", "YYYYNYYYYYYYNYYYNYNYYYYNYYYNYYYNYYYYY", "YYNYNNYYYYYYNYYYNNNNYYYNYYYNNYYNYYNYY", "YNNYNNNNNYYYNYNYNNNNYYYNYYYNNYYNYYNYY", "YYNYNNYNNYYYNYNYNNNNYYYNYYYNNYYNYYNYY", "YYNYNNYYNYYYNYYYNNNNYYYNYYYNNYYNYYNYY", "NNNNNNNNNNYYNNNYNNNNNYYNYNYNNYNNYYNYN", "NNNNNNNNNNNYNNNYNNNNNYNNNNNNNYNNYNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNN", "YYYYYYYYYYYYNYYYYNYYYYYNYYYNYYYYYYYYY", "YNNYNNNNNYYYNNNYNNNNYYYNYNYNNYNNYYNYY", "YYNYNNYYNYYYNYNYNNNNYYYNYYYNNYYNYYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "YYYYYYYYYYYYNYYYNYNYYYYNYYYNYYYYYYYYY", "YYYYNYYYYYYYNYYYNNNYYYYNYYYNNYYNYYNYY", "YYYYYYYYYYYYNYYYYYNYYYYNYYYNYYYYYYYYY", "YYYYNYYYYYYYNYYYNNNNYYYNYYYNNYYNYYNYY", "YNNYNNNNNYYYNNNYNNNNNYYNYNYNNYNNYYNYY", "NNNNNNNNNNNYNNNYNNNNNNNNYNNNNNNNYNNNN", "NNNNNNNNNNYYNNNYNNNNNYNNYNNNNYNNYNNYN", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "NNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNYNNNN", "YNNYNNNNNYYYNYNYNNNNYYYNYNYNNYNNYYNYY", "NNNNNNNNNNYYNNNYNNNNNYYNYNNNNYNNYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYNYYYYYYYYY", "YYYYNYYYYYYYNYYNNYNYYYYNYYYNNYYNYYNYY", "NNNNNNNNNNNYNNNYNNNNNYNNYNNNNNNNYNNNN", "YNNYNNNNNYYYNYNYNNNNNYYNYYYNNYNNYYNYY", "YYYYYYYYYYYYNYYYNYNYYYYNYYYNYYYNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYYNNNYNNNNNYYNYNNNNYNNYNNYN", "YYYYNYYYYYYYNYYYNYNYYYYNYYYNYYYNYYNYY", "NNNNNNNNNNYYNNNYNNNNNYNNYNNNNYNNYNNNN", "NNNNNNNNNNYYNNNYNNNNNYYNYNNNNYNNYYNYN"};
    vector<string> serverCable = {"YYYN", "YYNN", "NNYN", "YNNN", "NYNY", "YNYN", "NNYY", "NYYY", "NNNY", "YNYN", "YNNY", "NNYY", "NYYN", "YYNY", "YYYY", "YYNY", "NNYY", "NNNY", "YYYY", "YNNN", "YYYN", "NNYN", "NNYY", "NYNN", "NNNN", "YYYN", "NNYY", "YYYN", "NNNN", "YNNN", "NYYY", "NYYY", "NNYN", "YNNY", "YNNN", "NNNY", "NNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNYNNNNNYNNNYNNNYNNNNN", "NNNNNNNYNNNNYNNYNYNNNNNNYNNNNNYNNNNNY", "NNNNNNYNYNNNYNYNYNNNNNNNYNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYNNNNNYNNYNNNNYNYNNNNNNYYNNNNNNNYN", "YYNNNNNYNNYNNYNNNNYNNYNNNNNYNNNNNYNYN", "NNNYNNNNNYNNYNNNNNNNNNNNNNNNNNNYNNNNN", "YNNNNNNNNYNNNNNNYNNYNNNNNNNNNNYNNNNYN", "NYNNNYNNNNYNNNNNNNYNNNNNYNNNNNNNNNNYN", "NNNNNNNNNNNNYNNNNNNNNNNNNYNYNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNYNYNNNNNN", "YNYNYNYNNNNNYNNYNNYNNNNNNNYNYNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NYNYYNYNNYNNNNYNYNNNYNNNNYNNYNNNNNNNY", "YNNYYNNNNNNNNNNNNNNNNNYNNNYNNNNYNNNYN", "YNNNNNNNNNNNNNYNNYNNNNNNYNYNNYYNNYYYY", "NNNNYNNNNNNNYNNNNYYNNNNNNNYNNNNNNNNYN", "NNNNNNNNNYNNNNNNNNYNNNYNNNYNYNYNNYNNN", "NNNYNNYNNYNNNNNNNNNNNNNNNYNNNNNYNNNNN", "NNNYNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "YYNNNNNNNYYNYYNYNNNNNNNYNNNYYNNYNNNNN", "NNNNNNNNNYNNNNNNNNYNYNNNNNNYNNNNNYNYN", "NNNYNNNNNNNNNNNNNYNNNNYNNNNYYNNNNNNYN", "NNNYYNYNNNNNNNNNNNNYNNNNNNNNNYNYNYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNYYNNYNNNNN", "NNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNYNNYYNNNNNYNYNNNNNNNNNNNNYNNNNN", "NNNNNNYNNNNNNNNNNNNNNNYNNNNYNNNYNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNYNNNYYNNNNNNYNNNNNNNYNNYYNNYYNN", "NNNNNNNNNYNNNNNNNNNYYNNNNNNNYNNNNNNNN", "YNNNNNNNNNYNNNNNNNNYNNNYNYYNNNNNNNNNN", "NNNNNNYNNYNNNNNNNNNYNNNNNYYNNNNNNNNNN", "NNNNYNYNNNNNYNYNNNYNNNNNNNNNNNYNNNNYN"};
    vector<string> serverCable = {"YNYNNNNNN", "YNNNNNNYN", "NNYNYNYYN", "YNNNYNNNN", "NNNYNNNYN", "YNYNNNYNY", "NNNNNNYYN", "NNYNYNYNN", "NNNYNNYNN", "NNNYNYYNN", "NNYNNNNNN", "NNNNNNNNY", "NNNNNNNNN", "NNNNNNNNN", "YNYYYYNYN", "NNNNYNNNN", "NNNNNYNYN", "NYNNNNNNN", "NNNNYNYNY", "NYYNNNNNY", "YNYNNNYNN", "YNNNNYNNN", "YYNNNYYNN", "NNNYNYYNN", "NYNYNYNNN", "YYNNNNYNN", "NYNYNNYYN", "NNNNNNNNN", "YNNYNNNNN", "YNYNNNNNN", "NYNYNYYNN", "NYNNNNYYN", "NNNNNNNNN", "NNYNNYNNN", "NNNNYNNNN", "NNNNNNYNN", "NNYNYNYNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> clientCable = {"NYYYYNYYYYNNYYYYYYYNNYNYYYNYYYYYYYNYY", "NNYYYNYYYYNNYYYYYYYNNYNYYYNYYYYYYNNYN", "NNNYYNYYYNNNNNNYYNNNNNNYNYNYYNYYYNNYN", "NNNNYNNNNNNNNNNYYNNNNNNNNNNYNNYNNNNYN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNYN", "YYYYYNYYYYNNYYYYYYYNNYNYYYNYYYYYYYNYY", "NNNYYNNYYNNNNNNYYNNNNNNYNYNYYNYYYNNYN", "NNNYYNNNNNNNNNNYYNNNNNNYNYNYNNYNYNNYN", "NNNYYNNYNNNNNNNYYNNNNNNYNYNYYNYNYNNYN", "NNYYYNYYYNNNYYYYYYYNNYNYYYNYYYYYYNNYN", "YYYYYYYYYYNNYYYYYYYNNYNYNYYYYYYYYYNYY", "YYYYYYYYYYYNYYYNYYYNNYNYYYYYYYYYYYYYY", "NNYYYNYYYNNNNNNYYNNNNNNYNYNYYNYYYNNYN", "NNYYYNYYYNNNYNYYYYYNNNNYYYNYYYYYYNNYN", "NNYYYNYYYNNNYNNYYNYNNNNYYYNYYYYYYNNYN", "NNNNYNNNNNNNNNNNYNNNNNNNNNNYNNYNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNYYNYYYNNNYNYYYNYNNNNYYYNYYYYYYNNYN", "NNYYYNYYYNNNYNNYYNNNNNNYNYNYYYYYYNNYN", "YYYYYYNYYYYYYNYNYYNNNYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "NNYYYNYYYNNNYYYYYYYNNNNYYYNYYYYYYNNYN", "YYYYYYYYYYYYYYYYYYYYNYNYYYYYYYYYYYYYY", "NNNYYNNNNNNNNNNYYNNNNNNNNYNYNNYNNNNYN", "NNYYYNYYYNNNYNNYYNYNNNNYNYNYYYYYYNNYN", "NNNYYNNNNNNNNNNYYNNNNNNNNNNYNNYNNNNYN", "YYYYYYYYYYNNYYYYYYYNNYNYYYNYYYYYYYNYY", "NNNNYNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNYN", "NNNYYNNYNNNNNNNYYNNNNNNYNYNYNNYNYNNYN", "NNYYYNYYYNNNYNNYYNNNNNNYNYNYYNYYYNNYN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYN", "NNNYYNNYYNNNNNNYYNNNNNNYNYNYYNYNYNNYN", "NNNYYNNNNNNNNNNYYNNNNNNYNYNYNNYNNNNYN", "NYYYYNYYYYNNYYYYYYYNNYNYYYNYYYYYYNNYN", "YYYYYYYYYYYNYYYYYYYNNYNYYYYYYYYYYYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYYYNYYYYNNYYYYYYYNNYNYYYNYYYYYYYNYN"};
    vector<string> serverCable = {"NYNNNYNNNYYYNNYNNYYNNN", "NNNYYNYNNNNNYYNNNNNYNY", "NNNYNNNNYYYYYYNYYNNNNN", "YYNNNYNYNNNNNYYNNYNNYN", "NYNNYYNNYNYNYNYNNYYNNN", "YYNNNNNNNNNYNNNNYNNYYN", "NYNNNYNNNNNYYNNYNYYNNY", "YNNNYNNNNNNNNYNYNNNNYN", "NNYNNNNNYNYNNNYYYNYNNN", "YNYYNYYNNNNYYNNYNNNYYY", "NYYNNYYNYYNNNNNNNNYNYN", "NNYNNYYYYNYNYNYNNYYNYN", "YYNNNYNYYNNNNNNNNYNNYN", "YYYNNYNNYNYYYYNNNYYNYN", "NNNNNYYNNYNNYYYYNNNYYY", "YNNNYNNNYNNYNYYNNNNNYN", "YNYNYNYYNNYNNYNYNNYYNN", "NNNNYNNYNNNYNNNYYNYNNN", "YNNNYYNYYNNNNNYNYNYYNN", "NNNYNYNYYNYNYNNYNNNNNN", "NNNNYNYNNNNYNYNNYNYNYY", "NYNNNNYYNNNYYNNNYNNYNN", "YNNYNYYYNNNNNNNNNNYYYN", "YNNNYYNNNNNNNYYNNNNNYN", "YNNNNNNNNYNYYYYYNNYNYN", "NNYYYNYNYNNNNNNYNNNNYN", "YNYYNNNYNNYYNNNNYYYNYN", "YNNNNNNNNNNNNYNNYYYYNN", "NYNNYNYNNNYNNNNNNNNNYY", "YNNNYYNNNNNNNNYNNNNNNY", "NYYYYYNNYYNYNNNNNNYNNY", "NNNNYNNNNNYNNNNYNNYNNY", "NYNNNNYYYNNNYYYNNNYYNY", "YNYYNNYYNYYYYYYNNYNNYY", "NNNYNNNYYNNYNNYYNYNYNY", "YNNNYNNYNYYYNNNYNYNNYY", "NNNNNYYNYYNNNNNYNNNYNY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> clientCable = {"NNNNNNNNNNYYNYNYNNNYNNYNNNNYNYNNYNNNY", "NNNNNNYNNNYYNNNYNYYYYNNNNNNYNNNYNNNNY", "YNNYYNYNYNYNYYYYNNNYYYYNYNNYYYNYYNYNY", "NNNNNNNNYNYNNYNYNNYNNNYNNYNNNNNNYNNNN", "NNNYNYYYNNYNNNNNNNYNYYYNNYNYNYYNNNYNN", "NNNNNNYNNNNNNNNNNNNNNNNNNYNNNYNNYNNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYYNNNNNNNYNNNNNNNNNNYNNNYNNNNNNY", "NNNNNYYYNNYYNYNYNYYNNNNNNNNYNYNNNNNNY", "NNNYNYNYYNNYNNNYYYYNNNNNYYYYNYYNYYYNY", "NNNNNYNYNNNNNNNNNNNNNNYNNNNNNNNNYNNNY", "NNNNNYNYNNYNNYYNNNNNNNYNNNNNNYNNNNNNY", "NYNYYNNYYNYNNNYNNYNYNYYNNNNNNNNYYNNNY", "NNNNNYYYNNYNNNYNNNYNNNYNNYNNNNNNYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYYYNNYYNYYNNYNNNNYNNNNNNNNNNNNNY", "NYYYYYNNYNYNYYYYNYNNYNNNNNYYNNYYNNYNY", "NNNNNNNYNNYNNYYNNNNNNNNNNNNNNNNNNNNNY", "NNNNNYNYNNYNNNNNNNNNNNNNNYNNNYNNNNNNN", "NNNYNNYNYNNNNNNNNYYNNNNNNYNYNYNNYNNNY", "YNNYNYNNYNYYNYYNNYNYNNYNNYNYNYNNYNNNN", "NYNNNNNYYNYNNNYNNNYNYNYNNYNYNNNNNNYNY", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNYYYYNYYNYNNYYYNYNNNNYYYYYNYYYYYYY", "YYNNYYYYYNYYNNYYNNNNNYYNNNYYNNNNYNNNY", "NNNNNNNNNNNNNNYNNNNNNNYNNNNNNYNNYNNNN", "NYNYYYNYYNYNYNNNNNYYYNYNNYNYNYYNNYYNY", "NNNNNYYNNNYYNYYYNYYNNNNNNYNNNYNNYNNNY", "NYNNYYNNYNNYYYNNNYYYYYYNNYYYNYYYNYYNY", "NNNNNNYNNNNNNNYNNNNNNNYNNNNNNNNNYNNNN", "NYNYNYYYYNYNNYYNNNNYYYYNNYNYNYNNYNNNY", "YNNNNYNNNNNNNNNYNYNYYNYNNYNYNYNNYNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNYNNYYYYNYNYYNYNYNNNNYNNYYNNYNY", "NYNYNYYNYNYYNYYYNYNNNNNNNYNYNNNYYNNNY", "YYYYNYYNNYNYNNYNYYNNYNYNNNNNYYYYYYYNN", "NNNNNNYNNNNNNNYNNNNNNNNNNYNNNNNNNNNNN"};
    vector<string> serverCable = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "YNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYN", "YYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYNYYYYYNYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYY", "YYNYYYYNYYYYYYNYNYYYYYYYYYNYYYYYYYYYN", "YYNYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYNYYYYYYYYYYYYYYNYYYYYYYYYNYYYY", "YYYYNYYYNYYYNYYYNYYYYYYNYYYNYYYYYYYYY", "NYYYYYNYYYYYYNYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYNYYYNYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYNYNYYYYYYYYYYYYYY", "YYYYYYYNYYYYYNYYYYYNYYYYNYYYYYYYYYYYY", "YNYYYYYYYYYYYNYYYYYNYYYYYNYYYYYYYYYYY", "YYYYYNYYYYYNYYYYYYYYYYYYYYYNYYYYYYYNY", "YYNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYNYYYYYYYYYYYYNYYYNYYY", "YYYYYYYYYYYYYYYYYNYYYYNYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYNNYYYYYYYYYYYYYYYYYYYYYYYYYN", "YYNYYYYYYYYYYYNYYYYYYNYYYNNNYYYYYYYYY", "YYYYYNYNYYYNYYYYYYYYYNYYYNYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYNYNYYYYYYNYYYNNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYNY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> clientCable = {"NNNNYNNNYYNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYY", "NNNNNNYYNNNNNNNNNNNNNNNYNNNNNNNNYNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNN", "YNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNYNNNNNNYNNNNYNNN", "NYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "YNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNYNN", "YNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNN", "YYNYNYNNNNNNNYNNNNNNYNNNNNNNYNNNNNNYN", "NNNNNNNNNNNNYNNNNYNYNNNYNYYNNNNYNNYNY", "NNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNYNYNNYNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNYNYYNNNNNNNNNN", "NNNNYNNNNNNNNYYNNNNNNNNNNNYNNNNNNNNYN", "NNNNNYNNNNNYYNNNNYYNNNNNNNNNYYNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNN", "YNNNNYNNYNYYNNNNNNNNNNNNNNNNYNNNNNNYN", "NNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NYNNNNNNNNNNNNNNYNNNYYNNNYYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNYNNYNNNNNYNN", "NNNNNNNNNNYNNNNNYNNNNNNNNNNYNNNNNNNYN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNYNNNNY", "NNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNN"};
    vector<string> serverCable = {"YNYNNYNNNNYYYYYYNNYYYYNYYYYYYNYYNNYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYNYNYYYYYNNYYYYYYYYYYNNNYYYYNYYYYYYNYNY", "YYYYYNYNYYYYYYYNYYNNYYYYYNYYYNYNNNYYYYYYYYNNYNYYYN", "YYYYNYYYYYYNYYNYYYYYYYYYYYNNYNYYYNNYYYNYYYYYNYYYYY", "YNYYYYYNYNNYYYYYYYYYYYYNYYYYNYYYYYNYYNYYYYYYNNYYNY", "YYYYYYYYYYYYNYYYYYYYNNYNYYNYYYYYYNYYYYYYYYNNNYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYNYNNNYYNYYYYNYYYNYYYNYYYNY", "YYYYYYYYYYYYYNYYNYNNNNYYYYNYYNYYNNYYYYNYYYYYYYNYYY", "YYYYYYYYYYYYYYYNYYYNYNYNYYYYYYYYNYYYYYYYYNYYNYYYYN", "YYNYYYYYYYYNYYYNNNYYYYYYNYYNYYYYYYYYNYYYYYYYYYNYYN", "YYYYYYYNYYYNYYYYYNYYYYNYYNNYNNYYYYYYYYYYYYYYNYYYYY", "YYYYNYYYNYYYNNNYYYYYYYYYYYYNYYYYYYYYYYYYYYYNYYNNYY", "YNYYYYYYYYYYYNYYYYYYYNYYNYYNYYYYYYYYNYYNYYYYYNNYYY", "YYNYYYNNYYYYYYYYYYYNYYYYYNYYYYNNYYNNYNYYNYYYYNYYNY", "YYYNNYYYYYNNYYYYYYYYYYYYYYYYYYYNNYYNYYYNNNYYYNNYNY", "YYYYNNYYYYYYYYYNNYYYYYYNNYYYYNNYYYYYNYYYYNYYYNNYYY", "NYYYYYYNYYYYYYYYYYNYYYYYYYYYYYYYYYYYNYNYNNNYYNYNNN", "YYYNYYYYYYYYYYNYNNYYNYYYYYYYYYYYYYYYYNYYYNYNYNYYYY", "NYYYNYYNYYYYYYYYYYYYYNYNYYYYYYYNYYYYNNNYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYNYNNNYYYNYNYYYYYYYNYYYNNYY", "YYYYYYYYYYYYYNYNYNYYYYYYYYYYYYNYNYYYNYYYYYYYNNYYYY", "NYYYNYYYYYYYNYYYYYYYYYYYYYYYYYYYYNYYNNYYYNYYYYYYYY", "YYNYYYNYYYNYYYNNNNNYYNNYNYYYYYYYYYYNNYYYYYYYNYYYYN", "YNYYYYYYYYYYYYYYYYYYYYNNYNYYYYNYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYNNYYYYYYYYYYYYYYNYYNYYYYYYNNYYYYYNYYYYYYN", "YYYYYNYYYYYNYNYYYYYYYNYYYYYYYYYYNYYYYYYYYYNYNYYYNY", "NYYYNNYYYYNYNNNNNYYYYYNYYYYYYYYYYYYYYYYYYYYYYNYYYN", "YYNYYYYNYYYYYNYYYYNYYYYYNYYYYYYYYYNYYYNNYNYYNYNNYN", "YYNYYYNYNYYNNYNYYNNYYYYYYYYYYYNYYYYYNYYYYNYYYYYNYY", "YYYYYYYNYYNNYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYNYYYYYYN", "YYYNNYYYYYNYYYYYNNYYYYNYYYNNYYYNYYYYYYYYYYYYYYNYYY", "YYYNYYYYYNYYYYYYYYNYYNNNNYYYNYYYYNYYYYYYYYNYNNYNYY", "YNNNYNNYYYYYNYYYYNYYYNNYYYYYYNNYYYYYYYNNNYNYYYYNNY", "YNNNNNYNYNYYYNYYYYYYNYYYYYYYNYNYYNYYYYYYNYYYNYNNYY", "NNNYYYYNYYNNYNNYYYYYNNYYYYNYYYYYYNYYYYYYYYYYYYYYYY", "YYNYNYYYYYYYNYNYNNYYYNNYYYYNYYYYYYYYYNYYYNYYYYYYYY", "NYNYYNNNYNYYYYYYNYYNYYYYYYNNYYYNYYYYYYYYYYYYYYYYYN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYN", "NNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNYNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYYNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNYNNNYNN", "YNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNYNN", "NYNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYYNNNNYNNNNNNNNNNNYNYNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "YNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNYNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNYNNNNNNNNNNN", "NNNNNNNNNNYNYNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"N", "Y", "Y", "Y", "N", "N", "Y", "N", "N", "Y", "N", "N", "Y", "N", "N", "Y", "N", "Y", "Y", "N", "Y", "Y", "N", "N", "N", "N", "N", "N", "N", "N", "N", "Y", "N", "N", "N", "Y", "Y", "Y", "N", "Y", "N", "N", "Y", "Y", "Y", "N", "N", "N", "N", "Y"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> clientCable = {"NNNNYNNYNYYNNNYNYNNNYNNNNNNNNYNNNYNYNYNNNNNYNNNNNY", "YNYYYYNYYYYNYNNNYYNYYNYNYYNYYYYYNYYNYYNNYNNYNYYNNY", "NNNYYYNNNYYNNNYNYNYYNNYNYNYNNYYYNNNYYYNNNNNYNNNNNN", "NNNNNNNYYNNNNNYNYYNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNYYNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNN", "YNNYNNYYYNYYYNNNYNNNYNNNNNNNNYNNNNNYNYNNNNNNNNNNNY", "NNNYYNNYNNNNNNYNYYNNNNNNYNNNNYNNNYNYNYNNNNNNNNNNNY", "NNNNNNNNYNNNNNYNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNYYYNNYNNNNYYNNNNNNYNNYNYNNNNNNNNNNNNNNNNNNNN", "NNNYYNYYYYNYNNNNYYNNNNNNYNNYNYNNNYNNNYNNNNNNNNNNNN", "NNNYYNYNYNNNNNYNNNNNNNNNNNNNNYNNNYNYNNNNNNNNNNNNNN", "NNNYNNNYYYNYNNNNNYNNNNYNYNNYNYNNNYNYNYNNNNNNNNNNNY", "YNYYNYNYNNYNYNYYNYNYYYYNNNNYNNYNNNYYYYYYYYYYNNNNYY", "NNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNY", "NNNNYYYYNYNYYNYNNNNNYNYYYNYNYYYNNYYNNYNYYNNYNNYNNY", "NNNNYNNNYNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNYYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNYYYYYNNNNYNNYNYNYNNYYYNYNYNYYNNNNNNYNNNNNY", "YNNYYYYNNYYNYNNNYNYNYNNNNNYYYYNYNNNNNNNNNNNNNNNNNN", "NNNYYNYNYYNYYNYNNYNNNNNNYNNNNYNNNNNYNNNNNNNNNNNNNY", "YYYYYNNYYYNYNNYNYYYNYNYNYYYYYYNYNNYNYNNYNNYYNYNNYN", "NNNYNNYYYYNYNNYNYNNNNNNNNNNYNYNNNNNYNNNNNNNYNNNNNN", "YNNYYNYYYYYYNNYNYYNYNNYNYNYNYYYYNYNYYNNNNNNNNYNNNY", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNYYYYYNNYYNNYYYYYYYNNNYNYYYNNYNYNNNNNYYNYYNYYNYY", "YNNYYYYNYYYYYNNNNYYNNNYNYNNYYYNYNYNYYNNNNNNYNNNNNY", "NNNNYNYNYNNYNNNNNNNNNNNNYNNNNYNNNYNYNYNNNNNNNNNNNY", "NNNNNYYYYYYYYNYNNNNNNNYNYNNYNNNNNYNNYYNNNNNYNNNNNY", "NNNYYNNYYNNNNNYNYYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNYYYYYNNYNNYNYYNYYNYNNNNYNYNYNNNYNYNNNNNYNNNNNY", "NNNYYYYYNYYNNNYNYYNNYNYNYNNNYYNNNYNYYYNNNNNYNNNNNY", "YYYYNNYYNYYNYYNNYYNYYYYYYYYNYYNYNYYYYYYYNYNYNYNNYY", "NNNYYNNYYNNNNNNNYYNNNNNNYNNNNYNNNNNYNNNNNNNNNNNNNY", "NNNYYYNYYYYNYNYNNNNYYNYNNNNNYYNYNYNYNYNNNNYYNYYNNN", "NNNYNNNYYNNNNNYNYYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNY", "YNNYYYYYYYYYYNYNNYNNYNYNYNNNNNNNNNNYNYNNNNNYNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNYYYYYYNYYYNYNYYNYYNYYYYNYYYYYNYYYNNNYYYNYNYYYYN", "YNNYYYYYNNYYYNYNYYYNNNYYYNYNYYYYNNYYYYNNYNYNNYYNYY", "YNYYYYNYNYYNYNNNYYNNYNYNNNYNNNYYNNYYYYNNNNNYNYYNYY", "NYNYNNYNNNYYYNNYYNYYYYYNYYYYYNYYNYNYNNNYNNYYNYYNNY", "NNNNYYYYYYYNYNNNYYYNNNYYYNNYNYYYNYNYNYNNNNNYNYNNYN", "NNNYYNYNYYYYNNNNYNNNNNNNNNNNNYNNNYNNNYNNNNNNNNNNNY", "YNYYYYYYYYNYYYNYNYNYNNYYNYYYYNYYYYNYNYYYYNYYNYYYYY", "YNNYNNNYYYYYYNNNYNYYNNYNNNYNNNYNNNNYYYNNNNNYNNNNYN", "YNYNYYNYYNYYYNNNYYNYNNYYYNNYYNNNNYNYYNNNNNNNNNNNYY", "NYNYYYYYNYYYNNNNNNYNNYYNYNYYYYYYNYNNYYNYNYNNNNNNYY", "NNYNYNYYNNYYNNYNNYYNNNYNYNNYYYNNNYNYYYNNNNNYNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NY", "NN", "NN", "NN", "NN", "NN", "NN", "YN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "YN", "NN", "NN", "NN", "NY", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN", "NN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> clientCable = {"NNYYYYNYYYYYNNNNNNYNNYNYYYNYYNYYNYYYNYNNNYNYNYYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNYNNYNNYNNNNNNNNNNYYYYNNNNYYYNNNYNNNNNNNNNN", "NYYNYYYYYNYYNYYNYNNYNNYYYNYYNYNNNYNYNYNNYYNYYYYYYY", "NNYNNYNNYNNYNYYNNNNYNNNNNYYYYNNNYYYNNNNNNNNNNNNNNN", "NNYNNNNNYNNNNYNNNNNYNNNYNYNYYNNNNYYYNNNYNNNNNNNNNN", "NNYNNYNNYNYYNYNNYNYYNNYNYNYYYNYYYYYYNNNYYYNYYNYNYY", "NYNNNYYNYNYYNYNNNNYYNYYYYYYYNYNYYYYNNYNYYYNYNYYYYY", "NYNNNNNNNNYYNYNNNNNNNNNYNYNNNNNNNYNYNNNYNNNNNNNNNN", "NYYYYYYNYNNYNNYNYNNYNYYYYYYNYYYYYNYYNNNYNYYNYYYYNY", "NYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYNNYYNYYNYNYYNYNYNNYYYNYYNYYNNYNYYNYNYYYYNN", "NYNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNYNYNNYNNNNNYNNNYNYNNNNNNNYYNNNNNNNNNNNNNNN", "YYYNNNYYNYNYYYYNYYYNYYYYYYYYYYYYYNYYNYNYYNYYNNYYNY", "NYYNYNNNNNNYNNYNNNNNNNYNNYYYYNYNNYYYNYNYYYNNYNNYNN", "YNNYYYYYNYNYYYYNYNNYYYYYYYYYNYYYYYYYNNNYYYYYNNNYNY", "NYYNYYNNYNYYNYYNNNNYNNNYNYYYYNNNYYYYNNNYNNNNYNNYYN", "NYNNNNNNYNYYNNNNNNNNNNNYNNYYNNNNNYYNNNNYNNNNNNNNNN", "YYYYYYYYNYYYYYYNYNYYNYNYYYYNNYYNYYYNNYNYYYYNYYYYYN", "NYNNYYYNYNYYNNYNNNNNNNYNYYNNNNYYYNYYNYNYYYYYYYYYYY", "NYYNNYNNYNYYNYYNNNYYNNNNNYNYYNYYYNNYNYNYNNNNYNNYYY", "NYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNYYNNYNYNNYNNYNYYNNNYNYNYYNYNYYNNNYNYYYNYYNYYYN", "NYNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNYNNNYNNNNNNNNNN", "NYNNNNNNNNYYNYNNNNNNNNNYNYNNYNNNNNYYNNNYNNNNNNNNNN", "NYNNNNNNYNYYNYNNNNNNNNNNNYYNYNNNNNYYNNNYNNNNNNNNNN", "NYNNNNNNNNNYNYNNNNNNNNNYNYNNNNNNNNNYNNNNNNNNNNNNNN", "NYYNYYYNYNYYNNYNNNYNNNNYYYYYNNYYNYYYNYNYNYNYNNYYYN", "NYYNNYNNYNNYNNNNNNNYNNNNNNYNYNNYYYYNNYNYYNNNYNNYYY", "NYYNNNNNNNYYNYYNNNYYNNNNNNNYYNNNYYYYNNNYYNNNNNNYYN", "NNYNNYNNYNNYNYYNNNNYNNNYNYNYYNNNNYNYNNNYNNNNNNNNNN", "NYNNNNNNNNYYNYNNNNNNNNNYNYYNYNNNNNYNNNNYNNNNNNNNNN", "NYNNNNNNNNYYNYNNNNNNNNNNNYNNYNNNNNNYNNNYNNNNNNNNNN", "NYNNNNNNNNYYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNYYYYNYYNYNYYYNNYNYYNNNYNYYNNYNYYNNYYYYNNYYYNYY", "NNYNYYNNYNYYNYYNNNYYNNNNNYNNNNNYYYYNNNNNNNNNYNNYYN", "YYYYYYNYYYYYNYYYYYYNYNYYYYYYYNYYYYYNNYNYYYYYYYYYNY", "NYNNNNNNNNYYNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NYYNYYNNYNNNNYNNNNYNNNNNNYYYYNNNNYNYNNNYNNNNNNNNYN", "NNYNYYNNYNYYNYYNNNYYNNYNNNNNNNYYYNYNNYNYYNNNYNNYYN", "NNYNYNYNYNYYNYYNNNYYNNYNYYYYYYYNNYYNNNNYYNNYYNYNNN", "NYYNYYNNYNYYNYNNYNYYNNYYNYYNNNNYYNNYNYNYYYNNYNYYYY", "NYYNYYNNYNYNNNNNNNNYNNNNNYYNNNNNYYYYNNNNNNNNNNNNNN", "NYNNYNNNNNYYNYNNYNYYNNYYNYNYYYYYYYYYNYNNNYYYYNYYYY", "NYYNYNNNYNYNNYNNYNYYNNYYNYNYYNYYNNYNNYNYNYNNYNNYYY", "NYYNYYNNYNYYNNYNNNNYNNNYNYNYYNNNYYYYNNNNNNNNYNNNNN", "NYYNYYNNNNYYNYYNNNNYNNNYNYNYYNNNYYYYNNNYNNNNYNNYNN", "NYNNNNNNYNYYNYYNNNNYNNNYNYYYNNNYYYNYNYNYYNNNYNNYYN"};
    vector<string> serverCable = {"YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYN", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "NYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY", "YYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> clientCable = {"NNYYYYYNYYYYYYYNYNNYYYYNYNYNYYNYYNNNNYYNNNNYYYYYYY", "YNYYYYYNYYYNYYYNYNNYYYYNYNYNYYNYYNYYNYYNNNNYYYYYYN", "NNNYNYYNNYYNYYYNYNNNNNYNNNYNNYNYYNNNNNYNNNNYYNYYYY", "NNNNNYYNNNYNNNNNYNNNNNNNNNYNNNNNYNNNNNYNNNNYYNYYNY", "NNYYNYYNNYYYYYYNYNNYYYYNNNYNNYNYYNNNNYYNNNNYNNYYYY", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNY", "NNNNNNNNNNYNNNNNYNNNNNNNNNYNNNNNYNNNNNYNNNNYYNYYNY", "YYYYYYYNYYYYYYNNYNNYYYNYYYYNYYNYYNYYNYYNYNNYYNYYYY", "NNYYYYNNNYYYNYYNYNNYYYYNNNYNNYNYYNNNNYYNNNNYYNYYYY", "NNNYNYYNNNYNYYYNYNNNNNYNNNYNNNNYYNNNNYYNNNNYYNYNYY", "NNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNYNY", "NNYYNNYNNYYNYYYNYNNNYYYNNNYNNYNYYNNNNYYNNNNYYNYYYY", "NNNYNYYNNNYNNNYNYNNNNNNNNNYNNNNNYNNNNYYNNNNYYNYYYY", "NNNYNYYNNNYNYNYNYNNNNNNNNNYNNYNNYNNNNYYNNNNYYNYYYY", "NNNYNYYNNNYNNNNNYNNNNNNNNNYNNNNNYNNNNNYNNNNYYNYYNY", "YYNYYNYYYYYYYYYNYNNYYYYNYYYNYYNYYYYYNYYNYNNYYYYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYNYYYYNNYYYYYYY", "YYYYYYYYYYYYYYYYYNNYYYYYYYYYYYNYYYNYNYYNYNNYYYYYYY", "NNYYNYYNNYYYYYYNYNNNYYYNNNYNNYNYYNNNNYYNNNNYYNYYYY", "NNYYNYYNNYYNYYYNYNNNNNYNNNYNNYNYYNNNNYYNNNNYYNYYYY", "NNYYNNYNNYYNYYYNYNNNYNYNNNYNNYNYYNNNNYYNNNNYYNYYYY", "NNNYNYYNNNYNYYYNYNNNNNNNNNYNNYNYYNNNNYYNNNNYYNYYYY", "YYYYNYYNYYYYYYYNYNNYYYYNYNYNYYNYYNYYNYYNNNNYYYYYYY", "NNYYYYYNYYYYYYYNYNNYYYYNNNYNYYNYYNNNNYYNNNNYYYYYYY", "YYYYYYYNYYYYYYYNYNNYYYYYYNNNYNNYYNYYNYYNNNNYYYYYYY", "NNNNNYNNNNYNNNNNYNNNNNNNNNNNNNNNYNNNNNYNNNNYYNYYNY", "NYYYYYYYYNYYYYYYYNNYYYYYYYYNYYNYYYYYNYYNYNNYNYYYYY", "NNNYYYYNYYYYYYYNYNNYYYYNNNYNNYNYYNNNNYYNNNNYYNYYNY", "NNNYNYYNNNYNYNYNYNNNNNNNNNYNNNNNYNNNNYYNNNNYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYYYYNYYYYYYYY", "NNNYNYYNNNYNNYYNYNNNNNNNNNYNNYNNYNNNNYNNNNNYYNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYYYYYYYYNNYNNYYYYYYYYNYNNNYNYYNYYNYNNYYYYYYY", "YNYYNYYNYYYYYYYNYNNYYYYNYNYNYYNYYNNNNYYNNNNYYYYYYY", "NNYYYYYNYNYYYYYNYNNYYYYNYNYNYYNYYNYNNYYNNNNYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYYYYNYNYYNYYYYYYYY", "NNNYNYYNNNYNNNYNYNNNNNNNNNYNNNNNYNNNNNYNNNNYYNYYNY", "NNNNNYNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNNY", "YYYNYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYYNYYNYNNYYYYYYY", "YYYYYYYNYYYYYYYNYNNYYYYYYYYNYYNYYNYYNYYNNNNYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYNYNYYNNYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNY", "NNNNNYNNNNYNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNYNY", "NNYYYYYNYYYYYYNNYNNYYYYNNNYNYYNYYNNNNYYNNNNYYNYYYY", "NNNNNYNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNYNY", "NNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNY", "NNNYNYNNNNYNNNYNYNNNNNNNNNYNNNNNYNNNNYYNNNNYYNYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NYYNYYYYY", "YNNYNYNNN", "YYNNNNNNN", "NNNYYYNYN", "YNNNYYNYY", "NYNNNYNYN", "NYNYNNNNN", "YNNYYYYNY", "YNNNYNNNY", "NNNYNYNYY", "YYNYNYYYY", "NNYYNYYYY", "YYNNYNNNN", "NYNYNNNNY", "NYYNNYNNN", "YNNNNYNNN", "YNNYNNNYY", "NNYNYNNNN", "YYNYNYNNN", "NNNYYNYNN", "NNNNNNYNN", "NNNYNYNNN", "YYNYNYNYN", "NNYYNNYNY", "NYNYYNYNN", "YNNNYYYNY", "YYYYYNNNN", "YNNNNNNYN", "YYNYNNYYN", "YNYNYYNNY", "YYNNNYYNN", "YYYNYNNYY", "NYYNNYNYY", "YNYNYYNNN", "NYYYYNYNY", "YYNNNYNNY", "NNYNNYNYN", "NNYYNNNNY", "NNYYNYNYN", "NNNNYYYYY", "NNNNNYYNN", "NYNYNYNYN", "NNNYYNNNN", "NYYNYYNNN", "NNNYNNNYN", "NYYYYNNNN", "YYYNNYNNN", "NNYNYNYNY", "NYYYYNNNY", "YNYYNNYNY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YNYYYNYYNNNYNYYNNNNNNN", "YNYNNYNNYYYNNYYNYNNYYY", "NNYNNNYYYNYYYNYYNYYYYN", "NYYNNYNYYNYNYNNNNNNNNN", "NYYNYYNNNNNYNNYNNNYYYY", "YNNNNNYNYNNYYYNNYNYYNY", "NNNYYNYYNNNNNYNYNNYNYY", "YNYYNNNNYYYYNNNYNNYYNY", "YYYNYNYNNNYNYNNNNYNNYY", "NYYNYYYNNNYYNYNYYNYYNN", "NNNNYYYYNYNNNNNNYNNNNN", "YNYYYYNYNYYNNYNNNNNNYY", "NYYYYYNNYYNNYNNYNNNYYN", "NNNNNYYYNNNNNYNNNYNNNN", "YNNYNYYYYNYNNNNNNNYYNY", "NNYNNNYNNYNYYNYNYNNNYN", "NNNNNNNNYYYYNNNNNNNYNY", "NNYYYYNNYYNNNNNYYNNNNN", "YNNYYNYNNNNNYNNNNNNYNN", "NYNNNNNNNNNNYYYYNNYYYN", "NNYYYNNYNNNYNYYNYYYYYN", "NYYYYYNYNNNNNNYNNYYNNN", "YNNYNNYYYNYNNNNNYNNNNN", "NNYYYYYNNNYNNNNNNYNYNY", "YYYNNYNNYNNNNYNNYYYYNN", "YYNYNYYNNYNYNNNNYYYYNY", "YYNNYYNNNNYYYNNYNYNNNN", "NNNNNNNYNNYNYNNNNNNYNN", "NNNNNNNYNNNNYYNYNNNNNY", "NYYYYNNNYNNNNNNNYNNNNN", "YNNYNYNNNNYNYYNNNNNNNY", "NNNYNNNYYNNNNYNNNYNNYY", "NNYYNNYNYNYNNYNYNYYNNY", "NNNYNYNNNYNYNNNNNNNNNN", "YYNYYNNYNNNNNNNNNNNNNY", "YYNNYNYYYNNNNNYNNYYNNY", "YNNNNNYNYNNNNYNYYNYNNN", "NNYYNNNNNYNYYNNNNYYYYN", "YNNYNNYYNNNNNNYYNYNNYN", "YNNYNNNYNNNYYYNYYNYNNN", "YNYNNYNNNNNYYYNYNYYNYY", "NYNNYNNNNYNNYYNNYYNNYY", "NNNNNNNNNYYYYNYYYYYNNY", "YYYYNNYNNNYNYNNNYYNYNN", "NYNNYYNYNYNNYNNNNNNNYN", "NYNYNYNNYYNNNYNYYNNNNY", "NNYNNYNNYYNNNNNYNYNNNN", "NYYYNYNNNNNYNYNNNYNYYY", "YNYYYYNNNNYNNNNNNNNYYN", "NNYNYNNYNYNYNYYNNNYYNY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 286;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> clientCable = {"NNNYYNNNNNYNNNNYYNNNNNNYNYNNNNNNNNNYNNNNNNNNNNNNYY", "NNNNYNNNNNYNNYNNNYNYNNNNNNYNYNNNNYNNNYNYNNYNYNNNNN", "NNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNN", "NNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNYNYNNNNNNNNNNNNNNYNNNNNNYNNNNNNYNNNNYYNNYNNNY", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNYNNNNNYNYNNNNYNNYNNNNNNNYNYNNNNNNNNNYNNYNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNYYNNNNNNNNYYYNYNNNNNNNNYNYNNNNNYNNNYNNNNNNNNN", "NNNNNYNNNNNNNNNNYNYNNNNNNNNNNNNYNNNNYNNNNNNNYNNNYN", "NNYNNNNYNNNNNNNNNNNNNNNYNNYNNNNNNNYNNNYNNNYNNNYNNN", "NNNYNNNNNNYNNNNNYNNNNNNNNYNNNYNYNNYNNNNNNNYNNNNYNY", "NNNYNYNNNNNNNNNYNNYNNNNYYNNNNNNNNNNNYNNNNNNNYNNYYN", "NNNNNYNNNYYNYNNNNNNNNYNNNNNYYNNYNYNNNNYNNYYNNNNNNY", "NYNYNYNNNNYNNNNNNYNNYYNNNNYNNNNYNYYNNNNNNYNNNYNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYYYNNNYNNNNNNYNNNNNNNNNNNNYNYNNNYYNNYYNYYYNYN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNYNNNNYNYNYYYNNNNYYNNNNNNNNNNYNYNN", "YNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNYNYNNNNYNNNYNNNYNNY", "NNYNNYNNNNNNYNNNYNNNYNNNYYNNNNNYNNNNNNNNNYNNNYNNNY", "NNNNNYNNNNNNNNNYNNYNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNYNNNNNNYYNNNNNNNNNNYYYNYNNNNNYNNNNN", "NNNYNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNYNNNYY", "NNNNNNNNNNNNNNNYNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYNYNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNYNNYNNYYNNN", "YNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNN", "NNNNNNNYNNYNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNYN", "NNNYYNNNNNYNNYNNNNNNYNYYYNNNNYNNNYNNNYNNYNNNNYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNYYYNNNNNYYNNNNNNNNNNYYNNYNNNNNNNNNYNNYNNNNNNY", "YNNNNYNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNYNNNYYNNN", "NNNYNYNNNNNNNNNNYNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNYNNNYNYNNNNNYYNNNNNNNNNNNNNNYNNNNYNNNNNNNYNNNNN", "NNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNYNYYNNNNYNNNNNNNNNNNNNYYNYNNYNNNYNNNNNNNNNNNNNN", "NNNYNNNNNYNNNNNNNNNNNNYYNNNNNNNNNNNNYNNNNNNNNNNNNY", "NNNNNYNNNNYNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNYNNNYNYN", "YNNNNYYNNNYNYYYNYNNNNNNNYNNYYNNYYNNNYNNNNNYNNNNYYN", "NNNYNNNNNNNNNNNYNNNNNNYYNNNNNNNYNNNNYNNNNNNNYNYYNN", "NNNYNNNYNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNN", "YYNNNNNNNNNNNYNNNNNNNYNNNYNNNNNNNNNNNYNNNNNNNNNNYY", "NNNYNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNYNYNNNNNNNNNNNNN", "NNNNNNNNNYYYYNNNNNYNNNNYNNYNNYNNNNNNNNNNNYNNNNNNNN", "NNNNNYNNNYNNNNNNYNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNYNNNNNNNNNYYNNNNNNNYYNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YNNYNNNYYYYYYYYYYYYYNNYYYNYYYYYYYYYYY", "YYNYNYYYYYYNNYNYYYYYNYNYYYYYNYNYYYNYY", "YNYYYYYYYNYYYYYYNYYNYNYYYYNYYNYYYYYYN", "YYYYYNYYYYNYNYNNNYYYYYYYYYNYYNNYYYNNY", "YYYYYYYYNYYNYYYYYYNYNYYYNYYYYNNYYYYYY", "YYYNYYYNYYYYYYYYYYYYYYYNYYYYNYYYYYYNY", "YYYYYYYYYYYYYNNYYNYYYYYYYYYYYYYYYYYNN", "YYNYYYYYYYYYYYNYYYYYYYYYYYNYYYYYYYYNY", "NYYYYNYYYYYNYYYYYNYYYYYYYYYNNYYYYYYYY", "YYNNYNYYYYYNYYYYNYYYYYYYNYYNYYNYYYYYY", "YYYNNYYNYNYYYYNYYNYYYYYYYYNYYYYYYYYYY", "NNYYNYYYYYNYYYYNYYYYNYYNYNYYYNYYYYNNY", "YYNNYYNYYYYYYNYYNYNYYYYYYYNYYYYYNNNYY", "YYYYYNYNYNNYNYYYYYYYNYYYYYYYYYNYYYYYY", "YYNYYNYYYYYYYYYNYNNNYYYYYYYYYYYYYYYNN", "YNYYNYYYYYYYYYYYYNYYYNYYYYYYYYYYNYNYY", "YYNYNNYYYYYYYNYNYYYNNNYYYYYYNYYYYYYYY", "NYNYYYYYYYYYYNYYYYYYYYYYYYNYYYYNYYNYY", "YYYNYNYYYNYNYYYYYYYYYYNYYYYYYYYYYYYYY", "YNYYYYYYYNYYYYNYYYYYYNNNYYYNYYNYYYYYY", "YNYYYYYYYYYNYYYYYYYYYYYYYNYYYYYYYYYNN", "YYYNYYYYYYNYYYYNYNYYYYYNNYYYYYYYYYYYY", "YYNYYNYYYYNYYYNYYYNYYYYYYNNYYYYYNYYYY", "NYYYNYYYYYYYYYYNYYYYNNYNNYYYNYYYYYNYY", "YYYYYNNYYYYYYYYYYYNNNYYNNNNYYYNNYYYYY", "YNYNNYNYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYNNYYYYYYYYYYYYYYYYYYYNNYYYYYYYYY", "NYYYYYYYYYYYYNYYYYYNYYYYYYYYNNYYYYNNY", "YYNNYYYYYYYNYYYYYNYYYYNYNNYNNYYYYYYNY", "YYYYNYYYYYYYYNYYYYYYYYYNYYYNYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYNYNYYYNNYYNYYYYNN", "YYYYYYYYYNYYYYYYYYYYNYYYYYNNYYYNYYYNY", "YYYYYNNYYYNYYNYYYYYYNYYNNYYYNYNYYNYYN", "YNYYYNYYYYYNYYYYNYYYYYNYYYYYYYYYNYYYY", "YNYYYYYYYNYYYYYNYYNYYYYYYYYYYYYYYYNYY", "YYYNYYYNYYYYYYYYYYNYNYYYYYYYYYYYYYYYN", "YNNYYYYYYYYYYYYYYYYYYYYYNYYNYYNYYYYYY", "YYYNNYYYYYYYYNYYYNYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYNYYYYNYYN", "NNNNYNYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYY", "YYYYYYNNYYYNNNYYNNYNYYNYYYYYYNYYYYNYN", "YYYYYYYYYYNYNYYYYYYNNYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYNYYYNYNYYYYYYYYYY", "YYYNYYYYYNYYYNYYYNYYYYNYYYYYYYYYYYYYY", "NYNYYNNYNYNYNYNYYYNYNYYNNNYYYYYYYYNYY", "YYYYYYYYYYYYYYYYNYYYYYYYYNYYYYYYYNNYY", "NYYYYYYYYYNYYYYYYNYYYNYYYYYYYYYYYYYYY", "YNYNNYNNNYYYYYYYYNNYNYNYYYYNNYYYNYYYY", "YYNYYYYYYNYNYNYYYNYYNYYYNYYYYYYYYNYYY", "YYYNYYYNYNYYYYYYYYNYYYYYYYNYNYYYYYYNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> clientCable = {"NNNNYNNNYNNNNNNYNNNNNNNNNNNNYNNYNNNNYNNNNNNNNNNNNN", "NNYNNNNNNNNNYNNYNNNNNNNYYNNNYNYNNNNNNNNYNNNNNNNNNN", "NNNNNNNNYNNNNNNYNNNNNNNNNYNNNNYYNNNNNNYNNNNNNNNNNN", "NNNNNYNNYNYNNNNNYNNNNNNNYYNNNYYNNNNNYNYYYNYNNNYNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNY", "YNNNYNNNYNNNNNNYYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNY", "YYYNYNNYNNNYNNNNYYNYNYNYNYYNNYNNNNYYYYNYYNYYYNYYNN", "NYYYYNNNNNNYNNNYNNNNNNNNYYYYNNNNNNYYNNYNYYNNNYYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNY", "YNNNNNNNYNYNNNNNNNNNNNNNNYNYYYYNNNYNNNNNNNNNNNYNYN", "YNYNNNNNYNNNNNNYNNNNNNNYNNNNNYYNNNNNYNYYNYYNNNYNNN", "NNNNYYNNNYNNNNNNYNNNNNNYYYNYYYNNNNYNYNNYNYYNNNNNYN", "YNNNNYNNNNNNNNNYNNNNNNNNNYNYYYNNNNNNNNNNNNNNNNYNNN", "NNNNYNNNYYYYYNNNYNNNNNNYNNNYNNNNNNNNYYYNNNNYNYNYYN", "NNYNYYNNNNNYNYNNNNYYNNNNNNNNNYNNNNNNNNYNYNNYNYYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNYNNNNNNNNYYNYYNNNNNNNNYNNNNNNNNYNNY", "YYYNYNNYYNNNNNYYYNNNNNYNNNNYYNNNYNYNYYNNNNNYNYYNNY", "NYYNNNNYNYNNNNNYYNNNNNNNNYYNNYNYNNYNNYYYNYYNNYNNNY", "NYYYYNNYNNYNYNNNNNYNNYNNNNNYNNYYNNNNNYYNNNNYNNNYNY", "NNNNYYYNNYNNYNYYNYYNNNNNNNYYNNNYYNNNNYNNNNNNNNNYNY", "NNNNNNNNNNNYNNNYNNNNNNNNNYNNYYNNNNNYYNYYYNYYYNNNNN", "NNNYNYNYYNNNNNNNNNNNNYNNYYYNNYNYNNNNNNYYYNYYNNNNNY", "NNNNNYNNNNNNYNNNYNNNNNNNNYNYNYNYNNYNYNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNN", "YNYYYNNNYNNNYNNYNNNNNNNNYNNYNNNYNNNNYNYYYNNNNYYNNY", "YNNNNNNNYNNNNNNNNNNNNNNNYYNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNYNNY", "YNNNNNNNYNNNNNNYYNNNNNNNNYNYNNNNNNNNNYYNNNNNNNYNNN", "NNNNNYNNNNNNNNNNYNNNNNNNNYNNNYNYNNNNYNNNNYNNNNYNNN", "NNNNYNNNYNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNYNNY", "NYNYNYNNYNNYYYYNNNNYNNNYYNNNNNNNNNYNNYYYNYNNYYYNYN", "YNYYNYNNNNNYYYYYYNYNYYNNNNYYYNNNNNYNNNYNNYYNYNNYYN", "NNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYNNNYYNYYNNNNNNNNNNYYNYNNYNNNNYNNYNYYNNNNYYNNY", "NNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNY", "NNNNNNNNNNNNNNNYNNNNNNNNYYNYNNNNNNNNNNYNNNNNNNNNNY", "NNNNNNNNYNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNYNNN", "NNYNYNNNYNNNNNNNYNNNNNNYNNNYYNNNNNYNNNNNNYYNNNNNNN", "NYNNNYNNNNNNNNNNNNNNNNNYYYNNNNYNNNNNNNNNNYNNNYNNNN", "YNNNNNNNNNNNNNNYNNNNNNNYNNNYNNNYNNYNNNNNNNNNNNYNNY", "NNYNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNYYNNNYNNNNNNNN", "NYYNNNNYNNNNYNNNYNYNNNNNNYYNYNNNNNNNNNNYNNNNNYYNNY", "NYYNYNNYYYYNYNNNYNYNNNNNYNNNNYYYNNYNYYNNYNNNNNNNNN", "NYNNNYNNNNYNYNNNYNNNNNNYNNNYNNNYNNNNNNNNNYNNNNYNNN", "NNNNNNNNYNNNNNNYNNNNNNNNYYNNNNNNNNYNNNNNNNNNNNNNNY", "NNNNNNNNNYNYYNNYYNNNNNYNYNYYYNNNNNYYNNNYYYYNYNYNYN", "YYNNNNNNNNNNYNNNNNNNNNNYYYYNNYNYNNNNYNNYYNYNNNNNNY", "NNNNNNNNNNNNNNNYNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> clientCable = {"NYNNYYYNYNNNYNYNNNYNYYNNNYYNNYNYYYNYYNNNYNNNNYNNYY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYNNYYYNYNYNYNYNYYYYYYYYYYYYYYNYYYYYYNNNYYYNNYNYYY", "NYNNNYNNYNNNYNYNNNYNYNNNNYNNNYNYNYNNYNNNYNNNNNNNYN", "NYNNNNNNNNNNYNYNNNYNNNNNNNNNNNNYNYNNYNNNYNNNNNNNNN", "NYNNYYNNYNNNYNYNNNYNYNNNNYYNNYNYYYNYYNNNYNNNNYNNYY", "YYNYYYYNYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYNNYYYNNYNYYY", "NYNNNYNNNNNNYNYNNNYNYNNNNYNNNYNYNYNNYNNNYNNNNNNNYN", "YYNYYYYNYNYYYYYNYYYYYYYYYYYYYYNYYYYYYNNNYYYNNYNYYY", "YYNNYYYNYNNNYNYNYYYNYYNYNYYYYYNYYYNYYNNNYNYNNYNNYY", "YYNYYYYNYNYNYYYNYYYYYYYYYYYYYYNYYYYYYNNNYYYNNYNYYY", "NYNNNNNNNNNNNNYNNNYNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNN", "YYNYYYYNYNYNYNYNYYYYYYYYYYYYYYNYYYYYYNNNYYYNNYNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YYNYYYYYYYYYYYYNYYYYYYYYYYYYYYNNYYYYYYNYYYYNYYNYYY", "YYNNYYYNYNNNYNYNNYYNYYNYNYYYYYNYYYNYYNNNYNYNNYNNYY", "YYNNYYYNYNNNYNYNNNYNYYNYNYYYNYNYYYNYYNNNYNNNNYNNYY", "NYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YYNNYYYNYNYNYNYNYYYNYYYYYYYYYYNYYYNYYNNNYYYNNYNNYY", "NYNNNYNNNNNNYNYNNNYNNNNNNNNNNNNYNYNNYNNNYNNNNNNNNN", "NYNNYYYNYNNNYNYNNNYNYNNNNYYNNYNYYYNYYNNNYNNNNYNNYY", "YYNNYYYNYNYNYNYNYYYNYYNYYYYYYYNYYYNYYNNNYNYNNYNNYY", "YYNNYYYNYNNNYNYNNNYNYYNNNYYYNYNYYYNYYNNNYNNNNYNNYY", "YYNNYYYNYNYNYNYNYYYNYYNYNYYYYYNYYYNYYNNNYNYNNYNNYY", "NYNNNYNNNNNNYNYNNNYNYNNNNNNNNYNYNYNNYNNNYNNNNNNNYN", "NYNNYYNNYNNNYNYNNNYNYNNNNYNNNYNYYYNYYNNNYNNNNYNNYY", "YYNNYYYNYNNNYNYNNNYNYYNNNYYNNYNYYYNYYNNNYNNNNYNNYY", "YYNNYYYNYNNNYNYNNYYNYYNYNYYYNYNYYYNYYNNNYNNNNYNNYY", "NYNNNYNNNNNNYNYNNNYNYNNNNNNNNNNYNYNNYNNNYNNNNNNNYN", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYNYYYYNYYNYYY", "NYNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NYNNYYNNYNNNYNYNNNYNYNNNNYNNNYNYNYNNYNNNYNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNYYYNYNYNYNYNYYYYYYYYYYYYYYNYYYNYYNNNYYYNNYNNYY", "NYNNYYNNYNNNYNYNNNYNYNNNNYNNNYNYYYNNYNNNYNNNNYNNYY", "NYNNNNNNNNNNYNYNNNYNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNN", "YYNYYYYNYYYYYYYNYYYYYYYYYYYYYYNYYYYYYNNNYYYNNYNYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNYYNYYY", "YYNYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYNNYYYNNYNYYY", "NYNNNNNNNNNNYNYNNNYNNNNNNNNNNNNYNYNNYNNNNNNNNNNNNN", "YYNNYYYNYNYNYNYNYYYNYYYYYYYYYYNYYYNYYNNNYNYNNYNNYY", "YYNNYYYNYNNNYNYNNYYNYYNYNYYYYYNYYYNYYNNNYNNNNYNNYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYNYYYYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYNYYYYNNYNYYY", "NYNNYYNNYNNNYNYNNNYNYNNNNYNNNYNYYYNNYNNNYNNNNNNNYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYNYYY", "YYNNYYYNYNYNYNYNYYYYYYYYYYYYYYNYYYYYYNNNYYYNNYNNYY", "NYNNNYNNNNNNYNYNNNYNYNNNNNNNNNNYNYNNYNNNYNNNNNNNNN", "NYNNYYNNYNNNYNYNNNYNYNNNNYNNNYNYNYNNYNNNYNNNNNNNYN"};
    vector<string> serverCable = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> clientCable = {"NNNNNYNNNYNNNNNNNNNNNNNYNNNNYYNNNNNNNNNNNNNNNNNNNY", "NNNNNYYYNNNYNNYNNNNNNNNNYNNYYNNNNYNNNYNNNNYNYNNNNN", "YNNNNYNNNNNNNNNNNNYNNNYNNNNNYYNNNNNNNYNYNYNNNNNNNN", "NNNNNNNNYYNNNNNYNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNYNN", "YNNYNNYNNNNNNNNNNNNNNNNYNNNNYYNYYNNYNNNNYNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNYNYNNNYNYNNYNNNNNNNNNNNNNNNYNNNNNNYNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYNNNYNNNYNNYNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYYNNNNNNYNNNNNNNYNNNYNNNYNYNNNNNNNY", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYYNNNYNYNNNNNNNN", "NNNYNYNNNYNNNNNNNNNNNNNYNNNNNNNNNNNYNNNYNYNYNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYN", "NNNNNNYNNNNYNNNNYNYYYNYNNNNNYNNNNNNNNNNYNYNNNNNYNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNYNNNNNNNYNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNYNN", "NNNNNNYNNNNNNNNNYNNNNNNYNNNYNNNNNNNYNYNNNYNYNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNYNNNNNNN", "YNNNNNNNYNYNNNNYYNNNNNNNNNNNNYNNNNNYNNNNNNNNYNNYNN", "NNNYNNYNNNNNNNNYNNNNNNNYNYNNYNNNNNNNNNNNNYNNNNNNNN", "YNYNNYNNNYNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNYNYNNNNNNY", "NNNNNYNNNNYYYNNNYNNNNNNYYYNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYYYYNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNYYNNNNY", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNYNNYNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYYNNNNYNNNNYNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNYNYNNNYNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNYNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNYNNNYYYYNNNNYNNYYNNNNYNNNYYNNNYNNYYN", "NNYNNNNNYNNNNNNNYNNNNNNNNNYNNYNNNNNNNNYNNNYYNNNNYN", "NNNYNNNNYYNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNN", "NNNNYYYNYNNYNNNYNYNNNYNNYYNNNNNYYNNYNYNNYNNNYNNNNN", "YNNNNNNNNNNNNYNNYNNNNNNYNNNNNNYNNNNYNNNNNYNNYNNYYN", "NNYNYNYNNNNYNNYYYNYNNYNNNYNNNNNYYNNNNNNYNNNYNNNYYN", "NNNNNYNNNYNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNYYNNNNY", "NNNNNYNNNNYNYNNYNNNNNNNYNNNNNNNNNNYNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNYNNYNYNNNNNNNNNYYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNYNNNYNNNNNNYYNNYYYNYNNNNYNNNNNNNNNNNN", "NYYNNNNNYNNNNNNNYNNNNNNNNYNNNNNNNNNNYYNNNYNNNNNNNN", "NNNNNYNYNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN"};
    vector<string> serverCable = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> clientCable = {"NNNNNNNNYNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNYYYNNNNYNNNNNNNNNNYNNNN", "YNNNYNNNYNYYYNNYNNYNNYYNYNYNYYNYNNYYYNNNNNNYNYNNNY", "NNNNNNNNNNNNNNNYNNYNYNYNYYYNYNYNYNNYYNYYNYNNNNNYNN", "NYNNNNNYNYYYNNNYNNNNNNYNYNNYNYNNNNNNNNYNNNYNNYYNNN", "NNNNNNNNNNNNYNYNYYNNYYYNNNNNNNNNYYNYYNYNNYYNNYNYNN", "NYNNYNNYNNYNNNYNNNYNYYNYNNYNNNNNNNNNYNNYNNNNNNYNNN", "NYNNNNNNYYNNNNNNYNNNNNNNNNNYYYNNNNNYYNNNNYNNNNNNNY", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNYNYNNNNNNNNYYYNYYNYYYNNYNYYNNNNNYNYYNNNYN", "NNNNNNNNYYNNYYNNYNYNNNNNNNNYNNNNNYNYYNYNNNNYNNYYNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNYNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNYNNNNNNYNNNNNNNN", "NYNNNNNNNNNNYNNNNYNNNNNYNNNNYNNNYNYNYNNNNNNNNYNNYN", "NYNNNYNYYYNNNNNNYNNNYNNNNNNNYNNNNYNYYNYNNNNNNYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNYN", "NNNNNNNYNNNNYNNNYNNNNNNNNNNNYNNNNYNNNNNNNYYYNNNNNN", "NNNNNNNNNYNNYYNYYYNNNYNNYNNNNNNNYNYNNNYNNNNNNYNNNN", "NYNNNNNNYNNNNNNYNNNNNYNYNYNNNYNNNNYYYNYYNYYYNNYNNY", "YNNNNNNNYNNNNYYNNNNNNNYNNNNYNNNNNNNYYNNNNYYNNNNNYN", "NNNNNNNYYNNNNYYNNYNNNNYYNNNYNNNNNYNYNNNNNYYNNYNNNN", "NNNNNNNNYYNNYYNNYNNNNNNYNNNNYNNNYNYYNNNNNNYNNYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNYN", "NNNNNYNYNYNNNNNYNYNNYNYNNNNYYYNNYYYYNNYNNYNNNNYYNN", "NNNNNNNYNNNYNYYNNNYNYNYNNNNNNNNNYYNNNNYNNNNNYNNNYY", "YNNNNNNYYNNNNNYYYYNNNNNYNNNYNNNYYNNYYYNNNNNNYYNNNN", "NNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYN", "NNNNNNNNYYNNNYNNNNNNNNNYNNNNNYNNNNNYNNNNNNNNNNNNYY", "NNNNNNNNNYNNNYNNYNNNNNNYNNNNNNNNNNNNYNNNNNNYNYNNYN", "NNNNNNYYNYYNNNNYNNNYNYNYNYYNYYNNYYNNNYNYNYNYNNYNYY", "NNNNNNNNYNYYNNNNYNYYNYNYYNNYYNNNNNYNNNNNYNYYNNNNNY", "NYNNNNNYNYNNYYNNYNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNY", "NNNNNNNNYNNNNYNNYNNNNNYYNNNNYYNNYNNYNNNNNYYYNNNNNY", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNYNNNYNNYN", "YNNNNNNNYYNNNYNNYNNNNNNYNNNNNYNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNYNNYNYYNNNNNYNNNNYYYNNNNNNNYNNYYYNYNNNNYNYYNNN", "YNNNNNNNYNNNNNYNNYNNYNNNNNNYNNNNNYNNNNNNNNYNNNNYNY", "YNNNYYNNNYNNNYNYNYNNNNNNYNNYYYNNNNNNNNNNNNNNNYYYYN", "NNNNYYNNNNNNNNYNNNNYYYNNYNNYNYNNNNNNNNYYNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNYNYNNNNNNYNNNNNNNNNNYNNNNYNNYNNNNNYNYNYNNYN", "NNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNN", "NYNNNYNNNYNNYYYNNNNNYNYYNNNNYNNNNYNNNNNNNNNNNNYNNN", "NNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYN", "YNNNNYNNNNNNNNYYYNNNNNNNNNNNNNNNYNYNYNYNNNNNNNNYNN", "YNNNNNNNNNNNNNNNNNNNNNYYNNNNYYNNNYNNYNNNNYNNNYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNYNYNNNNNNYNNNNNN"};
    vector<string> serverCable = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> clientCable = {"NNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 850;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNYNYNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNYNNNNNYYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNYNNNNNNNNNNNNNNNNN", "NYYNNNNNNNNNNNYNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNYNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNYNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNYNNNNNNYYNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNYNYNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNYNNYNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNN"};
    vector<string> serverCable = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> clientCable = {"NYNNNNNNNNNYNYNNYNNNNNYNYNYNNNNNNNYNNNNNNNNNNYNNNN", "NNNNNNNNNNNYNYNNYNNNNNYNNNNNNNNNNNYNNNNNNNNNNYNNNN", "YYNNNNYNNYNYYYYNYYYYNNYYYNYNYYNNNNYNNNYNNYYNYYYYYN", "YYYNNNYNNYNYYYYNYYYYNNYYYNYYYYNYNNYYYNYNYYYYYYYYYN", "YYYYNYYYNYYYYYYYYYYYYYYYYNYYYYNYYYYYYNYYYYYYYYYYYN", "YYYYNNYYNYNYYYYNYYYYNYYYYNYYYYNYYYYYYNYYYYYYYYYYYN", "YYNNNNNNNNNYYYYNYYYYNNYNYNYNYYNNNNYNNNYNNYYNYYNYYN", "YYYYNNYNNYNYYYYNYYYYNYYYYNYYYYNYYYYYYNYYYYYYYYYYYN", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYN", "YYNNNNYNNNNYYYYNYYYYNNYYYNYNYYNNNNYNNNYNNYYNYYNYYN", "YYYYNYYYNYNYYYYYYYYYNYYYYNYYYYNYYYYYYNYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNNNYNYYNYNYYNNYNYNYNYNNNNNYNNNYNNYNNNYNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "YYNNNNNNNNNYNYNNYNYYNNYNYNYNYNNNNNYNNNNNNYNNNYNNNN", "YYYYNYYYNYNYYYYNYYYYNYYYYNYYYYNYYYYYYNYYYYYYYYYYYN", "NNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "YYNNNNNNNNNYYYYNYNYYNNYNYNYNYNNNNNYNNNYNNYNNYYNYNN", "YYNNNNNNNNNYNYNNYNNYNNYNYNYNNNNNNNYNNNNNNYNNNYNNNN", "YYNNNNNNNNNYNYNNYNNNNNYNYNYNNNNNNNYNNNNNNYNNNYNNNN", "YYYYNYYYNYYYYYYYYYYYNYYYYNYYYYNYYYYYYNYYYYYYYYYYYN", "YYYYNNYNNYNYYYYNYYYYNNYYYNYYYYNYNNYYYNYNYYYYYYYYYN", "NNNNNNNNNNNYNYNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNN", "YYNNNNYNNNNYYYYNYYYYNNYNYNYNYYNNNNYNNNYNNYYNYYNYYN", "NYNNNNNNNNNYNYNNYNNNNNYNNNNNNNNNNNYNNNNNNNNNNYNNNN", "YYYYYYYYNYYYYYYYYYYYYYYYYNYYYYNYYYYYYNYYYYYYYYYYYN", "NYNNNNNNNNNYNYNNYNNNNNYNYNNNNNNNNNYNNNNNNNNNNYNNNN", "YYYNNNYNNYNYYYYNYYYYNNYNYNYNYYNYNNYYNNYNNYYNYYYYYN", "YYNNNNNNNNNYNYNNYNYYNNYNYNYNNNNNNNYNNNNNNYNNNYNNNN", "YYNNNNNNNNNYYYYNYYYYNNYNYNYNYNNNNNYNNNYNNYYNYYNYYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYNNNYNNYNYYYYNYYYYNNYYYNYNYYNNNNYYNNYNNYYNYYYYYN", "YYYYNNYNNYNYYYYNYYYYNYYYYNYYYYNYNNYYYNYNYYYYYYYYYN", "YYYYNNYNNYNYYYYNYYYYNYYYYNYYYYNYYNYYYNYNYYYYYYYYYN", "NNNNNNNNNNNYNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "YYYNNNYNNYNYYYYNYYYYNNYYYNYNYYNNNNYNNNYNNYYNYYYYYN", "YYYNNNYNNYNYYYYNYYYYNNYYYNYYYYNYNNYYNNYNNYYNYYYYYN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYNYYYYYYYYYYYN", "YYNNNNNNNNNYNYYNYNYYNNYNYNYNYNNNNNYNNNNNNYNNNYNNNN", "YYYYNNYNNYNYYYYNYYYYNYYYYNYYYYNYYYYYYNYNYYYYYYYYYN", "YYYNNNYNNYNYYYYNYYYYNNYYYNYYYYNYNNYYYNYNNYYNYYYYYN", "YYNNNNNNNNNYNYNNYNNNNNYNYNYNNNNNNNYNNNNNNNNNNYNNNN", "YYNNNNNNNNNYYYYNYYYYNNYNYNYNYNNNNNYNNNYNNYNNYYNYNN", "YYYNNNYNNYNYYYYNYYYYNNYYYNYYYYNYNNYYYNYNYYYNYYYYYN", "YYNNNNNNNNNYYYYNYNYYNNYNYNYNYNNNNNYNNNYNNYNNNYNYNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNYNNYNYYYYNYYYYNNYYYNYNYYNNNNYNNNYNNYYNYYNYYN", "YYNNNNNNNNNYYYYNYNYYNNYNYNYNYNNNNNYNNNYNNYNNNYNNNN", "YYNNNNNNNNNYYYYNYYYYNNYNYNYNYNNNNNYNNNYNNYYNYYNYNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYN"};
    vector<string> serverCable = {"NYNNYNNNNNNNYYYNNYYNNNNNNYNNNNNYYNNYNNYNYNNNNNNNNN", "NNNNNYYNNNNNNNNYNYNNNNNYNNNYNNNNNNNNYNNNNNNNYNNNNN", "NNNYYNNNYNNNYYYYNNNYNNNNYNNNNYNNNYNNNNNNNNYNNNNNNN", "NNNNNNNNNNYNYNNNYNNNYNNNYNNNYNYYNNNYYNNYNYNNNYNYNN", "NNYNNNNYNNNNYYNNNNNNYNNNYNNNNNNNNNNNNNNYNYNNNNNNNN", "NNNNNNNYNNYNYNNNYNNNYNNNNYNNNNNYNYNYNNYNYNNNYNNNNY", "NNNNNYNYNNNNNNYNYNNNYYNNNNNNNNNNNNYYNNYNNYNYNNYNNY", "YNNNNNNNNYNNNNNYNNNNNNNNNNYNNNYNYNYNNNNNNYYNNNNNNN", "NNNNYNNNNNYNNNNYYNNNNYNNNNNNNNNNNYNYNYYYNYNNYNNNNY", "NNNNYNNNYNNNNNNNNNNYNNNNNYNYYYNNYNNNNNNNNNYYYNNYNN", "NYNNNNNNNYNNNYYYYNYYNNYNYNNYNNNNNNNNNNYNNYNNNYYYNY", "NNNNNNYNNYNNNYNNYNNNYNNNNNNNYYNNNNNNNNYNNNNYYNNNNY", "NYNNNNYYNNNNNNYNNNNNNNYYYNNNYYYYNNYNYYYNNNNNNNNNNN", "NNYNNYNYNNNNNYNYYYYNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNN", "NNNYNNNNNYNNNYYYYNYNNYNNNNNNYYNNNNNYNNYNYNNNNNNNNN", "YNYNNNYNNNNYYNYYNYYNNNYNNNYNYNNNNNNNNYYNNNNNNYNNNN", "YNNNNNYNNYNYNYNNNNNNNYYNYNYNYYNNNNNNNNNNNNNNNNNYNY", "NNYNNNNNNYNNNNNYNNNNNYYYNNNNNNNYNNNNYYNYNNYNNNNNNN", "NNNNNNNNYNNNNNNNYNNNNYNNNNNNNNYNNNYYNNNNNYNYYYNNNN", "YNNNYNNNNNNNNNNNYYNNYNNNNNNYYYNNNYNNNNNNNNYNYNNYYN", "YYYYNYYNNNYNYNNNNNYNNYNYNYNNNNYYNNNYYNNYNNNNNYNNNY", "NYNYNNNYNNYYNYNNNYNNNNNNYNNNNNNNNNYNNNNNNNNNNYYNNN", "NYNNNYNNNNNNYYYNNNYYNYNNNYNYNNNYNNNNNNNNNYNNNNNNNN", "YNNNNNNNNYNYYNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "YNNYYNNNNYYYNNNNNNNNNYNYNNNNYNNNNNNNNYNNNNNNNYYNNY", "NYNYNYNNNYNYNNNYNNNYNNNNYNNNYNYYNNYNNNNYNNNNYYNNNN", "NNNYNNNNNNNYNNNNNNNNNYYYNNNYNNNNYNYNNNNNNNNNYNNNNN", "NNNYNNNYNNNNNNNNNNYYNYYNNNYYNNNNYYNNNNNYNYNNNYNNYN", "NYYNNNNNNNYNNNYNYNNNNYYYNNNNYNYYYNNNNYNNNNNYNNYNNN", "YNNYNYYNNNYNNNYYNYNNNYNYNNYNNNNNYNYNYNNNNNNNYNNNNY", "YNNYNNNNYNNYYYNNNNNNNYNNNNNNYNYNNNNYYYNNNNNNNNNNYN", "NNNNNNNYNNNNYNNYNNNNNNNNNNNNNNNYYNNYNNNNNNNNNNNNYN", "YNNNNYNNNNYNYNNNNYNNNYNNNNYNNYNNNNYYNNNNNNYNNYNNNY", "NYNNYNYNNNNNNYNNNNNYNNNNNNYYNNNNYNNNNNNYYNNYYNYNYN", "YNYNNNYNNNNNNNNNYNNYNYYYNNNNNNNNNYYYYNNNNYYNNNNNNY", "NNYNYNNYNNNYNNYYNNNNNNNNNNNYYNNNNYYNNNNNNNYNNNYYNY", "NNNNYNNNNYNNNNNNYNYNNYNYNYYNYNNNNNYYNYNYNNNYNNYYNN", "NNYNYYYNNYNNYYNNNNNNYNNNNYNYNNNNYNNNNNNYNYNNNNNNNN", "NNNNYNNYNNYNNNNNNNNYYNYNNNNYNYNYNNYNNYNYYYNNNYNNYN", "YNNNNNYYNNNYNNNNNNYYYNNYYNNNNYNNNNYNNNNNNNNYYNYNYY", "NNNNNYNNNNNNNNYNYNNNNNNNNNNNNNNYYNNNNNYNNNNNNYNNYY", "NNNNNNNNNNYNNNNNYYNNYNYNNNNNNNNNNYNYNNYNNNNNNNYYYN", "NNYNYNNNNNYNNYYNNNNYNYNNNNNNNNNNNNYYNYNNNYNYYNNNNN", "NNYNNNNNNNNNNNNYNNYNNNNNNYYNNNNYNYNNNNYNYNNNNNNNNN", "YNNYYNNNNNNNNNNNNYNNNNNNYNNNNNNYYNYNNNNYNYNNNYNNNN", "NNNNNNYNNNNNNNNNNNNNNYNNYNNNNNYNNNNNNNYNYYNNNNNNYY", "YNYNNNNNNYYYNNNYNYNNYNNNNNNNNYNYNNYYNNNNNNYNNYNNNN", "NNNYYNYNNYNNNNYNNNNNNYNNNNNNNNYYNYYNNYNYNYNNNYNNNN", "NYYYYNNNNNNNNNYYNNNNNNNNNYYNNNNNYYNNNNNNNYYNNNNYYN", "NNNNNNNYNNNNNNNNNNNYNYNNNNNNNYNNNNNNYYNNNYYNYNNNNY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNYNNN", "NNNNNNNNNNNNNNNNNNYYNNNNNYNNNNNNNNNNNNNYNNYNNNYYNN", "NNNNNYYNNNYYNNNNNNNNNNNNNNNYYNNYNNNYYNNYNNNNNNNYNN", "NYYNNNYNNNNNNNNNNNYNNNNYNNYYNNNNNNNNNNNYNNNNNNNYYY", "NNNNNNNNNYYNNNNNNNYNNNNNNNNYNNNNNNYNYYNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNYNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNYNYNNNNYNNNNNNYNNNYNNNYNYNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNYNNNNNNYNY", "NYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYYNNNNNNNNNNNNYNN", "NNNNNNYNNYNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNYNNNNNNYNNYNNNNNYNYNNNYNNNNNYNNNNNNNN", "YYNNNNYNYYNNNNNNNNNYNNNYNYNNNYYYYYNNNNNNYNNNNNNYNY", "YNYNNNNNYNNYYYNNNNNNYNNNNNNNYYNNNNNNNYNNYYNNNNYNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNYNNNYNNNYYNYN", "YNNNNNNNNYYNNNNNNNYNNYYNNYNYYNNNNNNNNNNNNYYNYNNNNN", "YNNNNNNYYNNNNNNNNNNNYNNNNNYNNNNNYNNNNNNNNNYNNYNNNN", "NNNNNNYNNNNNNNNNNNNNYNNYNNNNNNNNNYNNNNNYNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNYNNNYNNNNNNNNNNNNNNNYNYNNNNNNNNYNNNNNNNYYNNN", "NNNNNNNNNYNNNNNNNNNNYNNNNNNNNNYNNNNNNYNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNYNYNNNNNNNNYNNNNNNNYNNNYYNYNY", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNYNN", "NNNNYNYNYNNNNNNNNNYYNNYNNNNNNYNNNNNNNYNYNNNNNNNNYN", "NYNNNYNNNNNNNNNNNNNNNNYNNYNNNNYNNNNNYNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNYNNYNNNNYNYNNNNNNNYNNYNNNNNNYNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNYNYNNNNYNNNNNNNYNNYNYNNNNNNNNYNNNNNNYNN", "YNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNYNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNN", "NNNNNNNNYNYNNNNNNNNNNYYNYYYNNNNNNNYNNNNNNNYYNNNYNN", "YNNNNNNNYYNNNNNNNNNNNNYNNYNNNNNNNYYNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNY", "NNNYYYNNNNNNNNNNNNNNYNYYNYNNNNNNNNNNNNNYNNNNNNYNNY", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNYNNYNNNNNNNNNYNN", "NNNYNNNYNYNYNYNNNNNNNNNNYNNNYNNNYNYYNYNNYNYNNYNNYY", "NYNNNNNNNNNNNNNNNNNNNYYNNYNNNNNNYNNNNNNNNNNNNNNNYN", "NNNYYNNYNNNNNNNNNNYNNNNNNNNYNNNNNYNYNYNYNYNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNYNY", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNYNNNNNNNYNNYNNNNNYNNNNYNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NYNNNNNYNNNNNNNNNNNNNNNNNNNYYYYYNNNNNNYNYNNYNNYNNN", "YNYNNYNNYNYYNNNNYNNNNNNYNYNNNNYNNNNNYYNYNYNNYYNYNN", "NYNNNYNNNNNNNNNYNYNNNNNNNNNYNNYNNNYNNNYNNNNNYNNNNY", "NNNYYNYNNNNNNYNNNNNYNNNNNNYNNNNYYYNNNNNNNNNYNYNNNY", "NNNNYNYYNNNNNYNNNNNNYNNNNNYNYNNNYNYNNYNYNNYYYNNNNN", "NNYNNNNYNNYNNNNNNNNNYNNNNYNNYNYNNYYNNNNYNNYYNYNYNN", "NNYNNYYNYNNNNNNNNNNNNNYYNNYNNNNYYNYNNYYNNYNNNNNYNN", "NNNYNYNNNYYNYYYNNNYNYNNNNNYNNYNNYNNYNYNNNNYYNNNNYN", "YNNYYNNNNNNYNNYNNNNNNNNNNNNNYNNNNNYYYYYYNNNNNNNNNY", "NYNYYNYNNYNNNNYNYYYNYNYYNYNNYNYYNNNNNNNYYNNNNNNYYN", "NNNNYNNNNNNNYNNYNNNNYYNNNNYNYNNNNNNYNNNNNNYNNNNNNN", "YNNNNYNNNNNNNNYNNNNNYNNNNNYNNNYYNNYNNNYNNNNNNNNYYN", "NNNNYNNYNNNNYNNNNNNNNNNNNNNYNNNYNNNNNNNYNYNNNNNNNN", "NNYYNNNYNNNNNYYNNYNNNNNNNNYNYNNNNYNNNNYYYNNYYNNNNN", "NNNNYNNNNNNNNNNNNNYYYNNNYNNNNNNYYNNNYNNYNNNNNNNNNY", "NNYNNYNNNNNNNYNNNNNNYNNNNYNNNNNNNNYNYNYYNNNNYNNYYN", "YNNYNNNNYNNNNNNNNNNNNNYYNNNYNNNNYYNNYNYYNYNNNNNNYN", "NNNNYNYNYNNNYNNNNYNNNNNNNNNNNNNNYYNNNYYNNNNYNNNNYY", "NNNNNNYNNNNYYNYNNYYNNYNNNYYNYYNYNYNYYNYYNNNYNNNNNY", "NNYNNYYNNNYNNNNYYNYYNNYNNNNYNNNNYNNNYNNNNNNNNYNNNN", "NNYNNNYNYYNNNNNYNNNYYYNNNNNYYNNNYNNYNNNNYYYNNNNNNN", "NYNNYNNNNNYNNYNNNNNNNNNNNNNNYNNNNNYYYYYNNNNYNYNNNN", "NYNNNNYNNNYNYNNNYNNNNNNYNNYNNNYNNNNNNNNNNNNNNYNNYN", "NNNNNNNYNNNNNNNNNYYNNNNYNYNYNNNYNNYNNNNNNNNYNNYNNN", "NNNNYNNNNYNNNNNNNNYNNNNNNYNYNNNNYNNNNYNYNYNNNNNNNN", "NNYYNYNNNYNNNNNNNYNYNYYNNYNNNNYYNYYNNNYNNYYNNNNNNN", "NNYNNYNYNNYNNNNNYYYNNYYYNNNNYNYNNNNYNNNNNNNNNNNNNN", "YNYYYYNYNNNYNNNYYNNNNNNNNYNNNNNNNYNNNNNYNNNNNYYNNN", "YYNYYYNYNNNNNNNYNNNYYNNNNNNYYNNNNNNNNYNNNYNYNNNNYN", "NYNNYYNNYNNNNNNNYYNYYNYNYYNNYNYNNNNNNNNNNNNNNNYYYN", "YNYNNYYNNNNNNNNNNNYNNNNNNNNNNNNYNNNNYNNYYNNNNYYNNN", "YNYNNNNYYYNNNNYNNNNYNNNNYNNYNNNNNYNNNNNYYNYNNYNYNN", "YNNNYNNNNYNNNNNYNNNNNYNYNNNNNNNNNYNNYYYNNNNNYNNNNN", "NYNNYNNNYNYNNYNYYNNNNNYNNNYYNNNNNNNYNNNNNNYNNNNYNN", "YYNNNNNNNNNNNNYNNNNYNNNNNNYNYNYNNNNNNYNYNNYNNYNYNN", "NNNNNNNNNNNYYNNNNNNNNYNNNNNYNNNYNNNNNNNNNNNNNYNNNN", "YNYNNNNNNNNNYNYNYNNNYYNNNNNYNNYNNNNNNNNNNYNNNNNYNN", "NNNNNNNYYNNYNNNNNNNNNNYNNNNYNNNNNYNNNNYYNNNNNYNNNN", "NYNNYNYNYNNNNNYNNYNYNNNNYNNYNNYNNYNNYYNNNNYNNYYNNN", "NNNYNNNNNNNNYNNNNNYNYYNNYNNNNNNNNNNNNNNNNYYNNNNNNY", "YYYNNNNNNNYNNYNNNNNNNNNYNYYNNNNNNYNNNNNNYNNYNNNNNN", "YNNNNNNNNNNNNYNNNNYYNNNNNNNNYNNYNYYNNNNNNNYYNNNNNN", "YNNYNNNNNNYNNYYNNNNNYNNNNYNNNNNNNNYNNNNNNNNYNNNYNY", "YNYNNYNYNNNYYNYNNNYNNNNYNNNNNYNNNNYNYNNNYNNYYNNNYN", "NNYNNYNNNYYNYNNNYYNNNNNYNNNNNYNYNNNNNYNNNNYNNNNNNY", "NNYNYNNNYNNNNNNNNNNYNNNYYNNYYNNNYNNNNNNNNNNNNYNNNN", "NYNNNNYNNNNNNNNYNYYYNNNNNYNNYNYNNNYYNNNNNNNNNNNNYN", "NNNNYNNYNNYNNNNNNNNNYYNYNNNYYNNNNNNNYNYNNNNNYNNNNN", "NYNNYNNNNYNNNNNNNNNNYNNNNNNNNYNNNYYYNYNYNNNNNNNNNN", "YYNNNNYNNYNNNNNNYNYYYNNNNYYNNYNNNNNNNYYNNYNNYNYNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> clientCable = {"NNNNNNNNNNNNYNNNNNYNYNYNNYNNNNNNYYNNNNNYNNNNNNNNNN", "NNNNYNYNYNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNYNNNNNNNYNN", "NNNNNYNNYNNNNNNYNYNNNNNNNYNNYNNNYNNNNNNYYNNNNNNNNY", "NNYNNNYYNNNNNYNNNNNYNYYYNNYNNNNNYNYNNYYNNNNNYNYYNN", "NNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNYNNNNNYNYNNNNNNYNN", "YYNNNNYNYNNNYNNYNNNNYNYNNNNNYNNNNNNNYNNNNNNNNYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "YNYNYNNNNNNNNYNNNNYYYYNNNYNNNNNYNNYNNNNNNNNNYNNNYY", "YNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNYNYYNNNNYNNYNNNYNYYYNYNYNNYNNNYNNNNYNYNNNYNNYNNN", "YYNNYYNNYNNNNNNYNYYNNNNNNNYNNNNYYNNYNYYYNNYNYYNNNY", "NNNYNYNNYYYNYNNNNNYYNNNNNYNNNNYYNNNYYYYNYNYNNNYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "YYNNNNNNYNNNNNNNNNYNYNNNNNNNNNNNYNYNNNYNYNNNYNNNNN", "YYYNNNNYYNNNYNNYNNYYYYNYNYNNNNNYNNYNNYNNNNYNNYYNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NYNYNYNNYNNNNNNNNNNYYNNYNYNNNYNNNYYYYYNNYNYNYYYYNY", "NNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNYNYNNNNNYNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "YNNNYYNNNNNNNNNNNNYNYNNNNYNNNNNYYYNNYNNNNYNNYNNYYN", "NNNNNNYNNNNNNNNNNNYNNNYNNYNNNNNNNNNNNNYNNNNNYNNNNN", "NYNNYNNNNNNNNYNNNNYNNNNNNYNNNNNYYNNNNNYNNNNNYNYNYN", "NNNNNNYNNNNNNNNYNYNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNN", "YNYNNNYNYNNNNNNNNNNYNYYNNNNNYNNYNNNNNNNNYNYNNYNYNN", "YNYYNYNNNYYNYYNNNNNNNYNNNNYNNNYNNNYNNNYNNNNNNNNYYN", "NNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNYYNNNNNNNNN", "NNNNNNNNYNNNYNNNNNNNNNNYNNNNNNNNNNNYNYNNYNYNYYYYYY", "NNNNNNNYNNNNYNNYNYYYYYYNNYNNNYNNNNNNYYNNYNNNYNYYYY", "NNNNNNNNYNNNNYNYNNYNYNYNNNNNNNNNYNYNNNNYNNNNYYYYNN", "NNNYNNYNYYYYYNNYNYNYYYYYYYNNNNNNNNYNNYNNYNYYNNNNNY", "NNNYNYYYNNYNNNNNNNYYYYYYNNNNNNNNNNNNYYYNNYYNNNNNNN", "NNNNYNNNYNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNYYNNNNNNYYN", "NNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNYYNNNNNNNNN", "YYNNNYNNYNNNNNYYNNNNNNYYNNNNNNNYNYYNYNNYNYYNNYYYNN", "NNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNYNYNNNNNNNNNNYNNYNN", "NNYNNNYYNNNNNYNNNYNYYYYYNNNNNNNNNNNNNNNNYNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNYYNNNNNNNNNYNYNNYNYNNYNNYNNNYNYNNNYNNNNNNYNNNN", "YNNNNNYNNNNNNNNYNNYYNYYNNNNNNNNYNNYNYNYNNYNYYNYNYN", "NYNNNNNNNNNNYNNYNNNYYNYNNNNNNNNNNNNNNNNYNNNNNYNYYN", "NNNNNNYNNNNNYNNNNYNNNNYNNNNNNNNNYNNNNNNYNNNNNNNNNN", "NYNNYNNNYNNNYNNYNNNNNYNNNYNNNNNNNNNNYNNYYNNNYNYYYN", "YYNNNNYNNNNNNYNNNNNNYNYNNNNNNNNNYNNNNNNNNNNNNNNYNN", "YNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNYYNNNNNYNNNNYNNNNN", "NYNNNNNNNNNNYYNNNNNNYNNNNNNNNNNNNYYNNNYNNNNNNNYNNN", "NYNNYNNNNNNNNNNNNYNNYNYNNYNNNNNYYYNNNNNNNYYNNYNYNN"};
    vector<string> serverCable = {"NYNNYNNNNNNNYNNNYNNNNYNNNYNNYNNNNNNNYNNNNNNNNYNNNN", "NNNYNNNNNNNNNNNYNNNNNNYYYNNNNNNNNNNYNNNNNNYYNNYNNN", "NNNYYNNYNNNNNNNYNYNNNNNYNNYNNYNYNNYNNNNNNNYNYNNNNN", "NYYYNYNYYNNNNNNYNNNNNNYYYNYNNNNNNNNNNNYNNNNNYNNNNN", "YNNYNYNNYNNNNYNYYNYYNNYYNYNNNNNNYNNYNNNYNNYYYYNNNN", "NYNNNYYYNNYYNNNNNYNNYNNNNNNNNNNNNNNYNNNNNNYNNNNNNY", "NYNNYYYNNNNNYNYNNNNNNNNYYNNYNNYNYNNNNYYYNNNNNYYNNN", "YNYNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNYYNNYYYNYYNNNNYNY", "YYYNNYNNNYYNNYNNYNNNNNNYNYNNNYNNYNYNNYYYNNYNNNNYNY", "NNNNYYNNYNYNNNNYNNNNNNNYNNNNNNYNYYNYNNNNNNYYNNNNYN", "YYNNNNNYNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNN", "YNNYNNNNNNYNNNYNYNNNNNYNYNYNYYNNYNNNNNNNYYNNNYNNNN", "NNNNNNYYNNYNYYNNNYYNYYNNNNNNNNNNNNNNNNNNNNNNYNNNNY", "NYNNNNNNNNNNYNNNYYNNNNYNYYNYNNNYNNYYNNYNYNYYYNNNNN", "NNYYNYNYNNYYYNNYNYNNYYYNYNNYNNYNNNNNYNNYNYNNNNNNNN", "NNNYNYNNNNNYNNYNNNNNYNYYYNNNNNNNYNNNNNYNYNYNNNNNYY", "YNNNNYNNNYNNNNNNYNNYNNNNYNNNNNNNNYYNNNNNNNNNNNNNNN", "NNNYNNNNNNYNNYNNYNNYNYYNNYYNYNNYYNNNNYNNNYNYNNNNNN", "NNNNNYNNNYNNNNNYNNNNYNNNNNNNYNNYYNNYNNYNNYNNNYYNNY", "NYNNNYNYNNYNNNNNNNNNNYYNYNNNYNNYYYYNNYNNYYNYNYNNNN", "NYYNYNNNYNNNYNNNYNNNYNYNNNNNNNNYYNNNYNYNYYYNNYNNNN", "YNYNNNNNNNNNNNNNNNYNNYNNNNYNNNNNNYNYNNNNNNNNYNNNYN", "NNNNNYNNYNNNYNNNNNNNYYYNNNNNNYNNYYNYNYYNNNNNYNNNNN", "NYNNYNYNYYNNYNNYNNNNNNNNYNNNNNNNNNNNNNNYYNNYNNYNNN", "YNNNNYNNNYYNNNNNNNNNNNNNYYNYNNNNNNNNNYYNYNNNNYNNYN", "YYNNNNNYNYNNNNNNYNNYNYNNNNNNNNNNNNYYNNNNNNNNYYNYNN", "YYYYYNNNNNNNNNYYNYYNNNNNNNNNNNNNYNNNYNYNNYYNYNNNYY", "NNNNNNYNNNYNNNYNYNNYNNYYNNNNYYNNNYYNNNNNNNYYNNYYYN", "NNNNYNNYYNNNYNYYNNYNNNNNYYNNNYNNNNYYNNNNYNYYNNNNNN", "NNNNNYNNNNNNNYNNYYYNNNNNNNNNYNNNNNNNNNNYNNNYNYYNNY", "YNNNNNNNNNNYNNNNYYNNNNNYNNNYYNNNNNNNYNNYYNYNYNNYNY", "NYNNYNNNNNNNNYNNYNNYNNNNNNNYNYNNNNNNNNNNNNYNYNNNNN", "NNNYNYNNNNYNYNNNYYNNNYYNNNNNNNYNNNNNNNYNNNYNNNNYNY", "NNNNNNNNNNYYNNNNNNNYNNNNNYYNNNYNNNNNNNNNNNYYNNNNNN", "YNNNNNNNNYNNNNYYNNNNYNNNYNNNYNYNNNNNNNNYYNNNYNNNNY", "NYNYNNNYNNNNNNNYYYYYYNNYYNNNNNNNNNNYYNNNNNNNNNNYYN", "NNNNYNYNNNNNNNNYYYNNYYNNYNYNNYNNNNYNYNYNNNYNNNNNNN", "NNNNNNNYNNNNNYYNYNYYNNNYNNNNNNNNNNNNYNYNNNNNNNNYNN", "NNNNNYNNNNYNNNNNNYNNNNNYYNYNNNYNYYNNNNYYNNYYNNYNYN", "NNNNNNYYNYYNNYYNNYNNNYNNNNNYNNYNNNNNNNNNNNNYYNNYYN", "NNNNYNNYNNNYYNNNNNNNYNNNNNYNYNNNNNNNYNNNNNNNNNYNYN", "NNNNNNNNNNNNNNNYNNNYNYNNNNNNYYNNYNNNNYNNNNNYNNNNNN", "NNYNNNNNNYNNNNNNNNYNNNNNNNNNNYNNNYYNNNYNNNNNNNNNNN", "YNNNNYNNNNNNNNYNNYYYNNNNNNNNNYNNNNNNYNNYNNYYNNNNNN", "NNNNNYNNNNNYNNNNNNNYNNNYNNNNNYYNNNNNNYNNYNYNNYNNNN", "NYNNNYNNNYNNNNNNYNYYNNNNNNNNNNNNNNYNNNNNYNNYNYYNNN", "NNNYYNNNYNYNNYNYNNNNNNNYNNNYYNNNNNNNNNNNYNYNYNYNNN", "NNNNNYNYNNNYYNNYNYYNYNNYYNNNNNNNNNNNYNYNNNNNNNNNNN", "NNYNNNNNYNNYNNNYNNYNNNNNNNNYNNNNNNNNNNYNNNNYNNNNNN", "NNNYNYNYNNNNNNNNNYYNNNNNNNNYNYNNNYNYNNNNNNYYNNNNNY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNYN", "NYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YYYNNNNNNYNNNNNNYNNNNNNNNNYNNNNNNNYNNYYNNNYNNNNNNN", "NYNNNNNNNNNNYYNYYNYYNNNYNYYNNYNNYNNNNNNNNNYNNNNYNN", "NYNNYNYNNNNNYNNNNNYNNNNNNNNYNYYYYNYNYNNNNNNYNNNNNY", "YNYYNNYNYYYNNNNNNNNYYNNNYYNNNNNNNNNNNNNNNNNNNNYNNY", "NNNNNNNYYYYNYNNNNNNNNNYNNNNNNYNNNYYNNNNNYYYNNYNNNY", "YYNNNYNNYNNYNYNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNYNYNNN", "NYYNNNYNNYNNYNNNNNNNNNNYNNNNNNNNYNYYNNNYYNNNNNNYNY", "NNNNYNNNNNNNNNNNNNYYNNNNYNNNNNNNNNYYNNNYNYNNNNNYYY", "NNYYNYNNNNNNNYYYNYNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNY", "YNYNNNNYNNNYNNNNNNYNNNNNNNNNNNNNNNNYNNYNYNNYNNNNNN", "NYNNYNNNNYNYYNYNNNYNNNYNYNNNNNNNNNNNYYNYNNNYNNNYNN", "YNNNNNNNNNNNNNNYYNNNYYNNNNYNYYNNNNNNYYYNNNYYNNNNNY", "NNYNNYNYYNNNNNNYNNNNNNNNNNNYNNNNYYNYNNNNYNNNNNNYNN", "NYNNNNNNYNNYNYYNNNYNNYYNNNYNNYNNNNYNYNYNNNNNNNNNNN", "NNYNYNNNNNNNYNYNNYNNNYNNNNNYYNNYYNNNNNNNNNNNNYYNNN", "NNNNYNNNNYNNNNNNNYNYNNNYYYNNNNNNNNNNNNNNNYNNYNYNNN", "YNNYNYNNNYYNNYNNNNNNYNYNYNNNNNNNNNNYNNNYNNYYYNYNYN", "YNYNNNNYNNNYNYNYYNNYNNNNNYNNYNYYNNNNYNNNNNYYNNYNNN", "NNNNNNNYYNYNYNNYYNNNNNYNNNNNNNYYNNNNNNYYNYNYNNNNNN", "NNNNNNNNYNYYNNNNNNNYNNYNNNNNYYNNNNNNNNNNNYNNNNNNNN", "NYYNNNNNNNYNNNYNYNNYNNYNYNYYNYNNNNNNNNNNNYNNNNNNYN", "NNNNYYNNNNNNNNNYNNNNNNNYNNYNNNNYYYNYNYYNNYYNNYNNNN", "NYNYYNYNNNNNYNNNYNNYNNNYYNYNNNNYNNNYNYNNNNNNNYYNNN", "NYYNNNNNNYNYYNNNNNNNNNNNYYNNYYYYNYNNNNNNNYNNNYNNNN", "NNNNNNNYNNNNNNNYNYNNNNYNYNNNNNNNYNNYNNNNNNNYNNYNNN", "YNNNNYNNNYNYNYNNNNNNNNNNYNNNNYNYNYYNNNNNNNNNYNNNNN", "YNNNNNNYNNNNNNYNYNYNYYNNYYNYYYNNNNNYNYNNYNNNNNYNNN", "NNYNYYYNNNYNYNNNNYNNNNNNYYNNNNNYNNYYYNNNYNNYYYNNYY", "YNNNYYNNNNNNNYNNYNYNNYNNNNNNYNYNNNNNYNYNYNNNNNNNYN", "NYNNNNNYNYNYNNYYNYNYNYNNYNNNNNNNNYNNYNNYNNNNYYYNNN", "NNNNNNYYYNNNYNNYNNNYNNNNNNNYNNNYYNYYYNNNNYNYNYNNNY", "NNYNNYNNNNNNYNNYNNNYNYYYNNNNNNYNNYNNNNNNNNNNNNNYNN", "YNNYNYNNNNNNYNNYNNYNNNNNNNNYNNYNNNYYYNYNNNYYYNNYNN", "NNNNNNYNNNNNNNNNNNNNYYNYYNNNNYYNYNYNNYYYNNYNNNNNNN", "YNNNNNYNNNNNNNNNNYNNNNNNYNNNNNNNNNYNNNYYYYYNYNYYNY", "NNNYYNNYNNNYNNYNYNNNNNNNNNNNNNNNYYNNNNYNNNNYNNNNNN", "NNNNNYNNNNYNNYYNYNYNNNYYYNNNNNYNNNNNNNNNNNNNNNNNYN", "NNYNNNNNNNNNNNNYNNYYNNNNNNNNNNNYNNNNNNYYNNNNNNYNNN", "YNNNYNNNNYYNYYNNYNYNNYNNNNYNYNNNNNNNNNNNYYYYNNYNNN", "NYNNNNNNYYNNNNNYNNNYNNNNNNNYNYYNNYYNYNNYNNNNYNYYNN", "NNNNYNNYNNNNNYYNYNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNN", "NNNNNNNNNNNYYNNNNNNNNNYYNYNNNNNYNYNNNNNNNYNNNNNNNN", "NNNNNNYNYNYYYNNNNNYYNYYYYNNNNNNNNNNYNNNNNNYNNNYYYN", "NYYNNNYNNNNYYNNNNNNNNNNNYNYNNNNNNNNNNNNYYNNNNNNNNN", "YNNNYNYNNNNNNNNNYNYYYNNYNNYNYYYNNYNYYNYNNNYNNNNNNY", "NNYNNYYNNNNNNNYNYNNNNNNNNNNNNNNNNNYYYNNNNNYNNNNNNN", "YNNNNYNNNYNYNNNNNNNNYNNNYYNYNNNNYNNNNNYYNYNNNNNNNY", "NYNNYNNNNNNNNNNYYNNNNNYNNNNNNNYYNNNNYYNNNNNNNNNNYN", "NNYNYNNNYNYNNNNNYYNNNYNNNNYNNNYNNNNYNNNNNNNNNNNNNN", "YNYYNNNNNNNYNNNNNNNNNYNNNNNNNNYNNYNNNNNYNNNNNNNYNY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 313;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNYNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNYNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNYNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNYNNNNNNNNNYYNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNN", "NNNNNYNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNYNNNNNNNNNNYNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNYNNNNNNNNNN", "NNNNYNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YNYNNNNNNNYNNNNNNNNNYYNYYNNYYNNNNNNNNNYNNNNNYYNNNY", "NNNNYYNNNNNNYNNNNNNNNYNYNNNNNNNNNYYNNNNNYNNYNYYYYN", "NNNNNNNYNNNNYYNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNN", "NNYNYNNYNNNNNYNNNNNNNYNYNNNNNNYNNNNNNNNYNNYNYNNYNN", "YNNYNNNYNNNYNNYNNNNNNNYNYNNYNNNYNNNNNNNNNNNNNNNYNY", "YNYYNNNNNNNYYNNNYNYNNNNYNNNNNNNYYYNNNNNNYNYNNNNNNN", "NNYNYYNNNYNYYNYNNNNYYNNNNNYYNYNYNNYNNYNNNNNNNNNNNN", "NNNNNYYYNNNNYNYYNNYYYNNNNNYNNNYYNNNYNNNNNNNNNNNYNY", "YYNNNYNNNYNNYYNYNYNNYNYYNNNNNNNNNNYYNNYNNNYNNNNYNN", "NNNNYNNYNNYNNNNNNNYNNYYNYNNNNNNNYYNYYNYNNNNYNNNYNN", "NNNNYYNNYYYNYNNYNNYNNNNNNYNNYYYNNNYNYNNYNNNYNNNNYN", "YNNYNYNNNYNNNNYNYYNNNNNNNNNYNYNYNNNNNNYNNNNNNNYYNN", "NNYNNNNNYNNNNYNNNNNNNNNNNYNNNNNNYNNNYNNNNYNNNYNNNN", "NYYNNNYNNNNNYYNNNNNNNNYNNNNYNYNNNYNYNNNNYNNNYNNYNN", "YNYNYNNYNNNNNYNYNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNYNNN", "NYNNNNNYNNYNYNNNNNNNNNYYYNNNNYYNYNYNNNNYYNNYNYNYNN", "NYYYNNNNNNNNNNNNNYYNYYNNYNNNNNNNNYYNNNYNYNYNNNYNNY", "NNNNNNYNYYNYNNYYNNNYYYYNNNNNNNYNYNNYNNYNNYNYNNNNNN", "YNNNNNNYNNNYYNNNNNNNNNNNNYYYNYNYNNNYNNNNYNYYNNNYNN", "NNNNNNNYNNNYNNNNNNNYNNNYNNYNNNNNNNNNNNYNNNNNNNNNNY", "YYYNNNNNNYYNNNNYNNNNNYNYNNNNNNNNYNNNNNNNYYNNNNNYYY", "NNNNNYNYNNNNNNNYYYNNNNNYYNNYNNNNYYNNYNNNYNNYNNNNNN", "NNYNYNNNNNNYNNNYYNYNYNNNNNNYYNNYNNNNNNYYYNYNNYYYNN", "NYYNNNNNNNNNYYNNNNNNNYYYNYNNYYYNNNYNYNNNYNNNNNNNNN", "NNNNYNNNNNYNNNNNNYNNNNNNYNNNNYNNNNYNNNNYYNNYNNYNNN", "NNYYNYNNNNNYYNNNNNYNNYNNNNNNNYNYNNNNNNNNNNNNNNYNYY", "NNNYNYNNNNNYNNYNNNNYNYNYNNNNNNNNYNNYNYNNNNNNNYNNNN", "NNYNNYNYNNNNNNNNNNYNNNNNNYNNNNYNNNNNNNNYNNYYNYYNYY", "NYNYNNYNNNNYNNNNNYYNNYYNNYNYNNYNNNNNNNYNNYNNNYYNYY", "NNYYNNNNNNNNNNNYNNNNNNYNNNNNNNNYYNYNYNNNNNNNNYYNYN", "NNNNYNYNNYNNYNYNNYNNNNNYNYYYNYNYNNYNNNNYNNNNNNNNYN", "NNYYNNNYYNNNNYYYNNNNNNNYNYYNNYYNYNNYNNNNNYNNYNNNNN", "NNNNYNNYNNNNNNNNNNNYNYNNYNNNNNNYNNNNNNYNNNNYNNNNYN", "NYYNYNNNNNNYNNNNNNYNNYNNNNNYYNNNNNYNYYNNYNNNNNNYNN", "NNNNNNNYYNNNNYNYNNYYYNNYNNNNNYNYYNNNNNNYNNNNNNYNNN", "NNNNYYNNNNNNYYNYYNNNNNNNNYNNNNYNNNYNYNNYNNNNNYNNNY", "NYNNNYYYYYNNNNNNNNYNNNNNNNYNNNNNNNNNYNNYYYYNNNNNNY", "NNNNNNNYNNNNNNNNYYNNNNYYYNYNNNNNNNNNNNNNNNYNYNNNNY", "NNNNNYNNNNNNNNNYNNNNNNNNNYNNNYYNNNYNNNNYNNNNYNNNNY", "NYNYNNNNNYNNNNNNYNNYYNNNNNYNNNNNYNNNNNNNYNNNNNYNNY", "NNNYNYNNNNNNYNNNNYNNNYNYNNNNNNNNYYNYNYNNNNNNNNYYNN", "NNYYNNNNNNNNNNNNYYNNNNNYYNNNNNYYNNYYNYYNNYNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNYNNNYNNNNYNNNNNYNNNYNNYN", "YNYNNYNNNNNNNNNNYNYNYNNNNNNNNNYYNYYNYYNYNNYYYNYNYN", "NNNYYYNNNNYNNYNYNYNNNNNYNNNNNNNYYYNNNYNNNNYNYNNNNN", "NNYYNNNNNYNNYNYYNNYNNNNNNNNNYNNNNNNNNNNYNNNNNNNYYN", "NNYNNYNNNNNNYNNNNNNNNNNNYNNNYNYYYYNNNNNNNNYNNNNNYN", "NNYNNYNYNNNNNNNNNNNNNYNYNNNNYNYYNNNYNYNNNNNNNNNNNY", "YNNNNNNYNNYNNNNNNNYNNNYNNNNYNNYNNYNNYNNNNNNYNYNNNN", "NNNNNNNNNNNNNNYYNYYYNNNNNNNNNNNNYNNNYNNNYNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNYYYNNYNNNNNYYNYNNNYNNYNYNNNYNNNYNNYNNNNNNNYNN", "YNNYYNNNNNNNNNNNNYNYNNNNNNYNNYNNYNNYNYNYYNNYNNNNNN", "NNNNNNNNNNNYNNNYNNNYNNNNNYNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNYNYNNNNYYYNNNYNYYYNYYYNYNNNNNYNNNNNYNNN", "NNNYNYNNNNYNNNNYNNNNYNNYYNNYNNYYNYYNNNNYNYYNNYYNYN", "NYNYYNNNNYNNNYYNYNNNNNNNYNNYNNNNNYNNYYNYNNNNNNNNNN", "NNNNYYNNNNNNNNYYNNYYNYNNYNNNNYNNNNNYNNNYYNNNNNYYNN", "YNYYNNYNNNNYNNNYNNNNNNYNYNNNNYYNYNNNNYNNNNYYNYNNNN", "NNNNNNNNNYNNNNNYNNNYNNYNYNYNNNNNNNNNNNNNNNNNYNYNNN", "NNNNNYNNNNYNYNNNNYNNNNYNNNNNNNYNNNYNNNNNNYNNNNNNNY", "YNNYNNYNNNNNNNNNNNNYNNNNNNYYNYNNNYYNNNNYNNYYNNNNYN", "NYYNNNNYYNNNNNNNYNYYNNNYNNYNNYNYNNNNNYYNNNNYYNYYNN", "NYNNNNNNNYNNYYYNNYNNNYNYYNNYYYYNNNNNYNYNNNNYYNNNNN", "NNNNYYNNYYNNNNYYNNNNYNYNNYYYNNNNNNNNNYNNNNNYNNNNNY", "NNNNNYNNNNNNYNNNNNNYNYNNNNYYNNNNNNNNNNNNNNNYNNNNNY", "NYNNYNNYNNYNNNYYNNNNNNNNNNNNNYNNNNNNYYNNNNNNNNNYYY", "YNYYNNNNYNNYNNNNYNNNNNNNYNYNNNNYYNNYNNNNNYNNNNNNNN", "NNYNNNNNNYNNNNYNNNYNNNYNNNNNNNNNNNYNNYYYNNNNYNNYNY", "NNNNNNNYNYYYNYNNNNNYYNNNNNNNNNNNNNYNYNYYNNYNNNNNNY", "NYYNNNYNNNNYYNNNNNNYYNNNNNYNNNYNNNNYNYNYYYNNYYNNNN", "NNNNYNNNNNNNYNNYNYNNYYYYNNYNNNYYNNYYNNNNNYNNNYYNNN", "NNNNNNNYNNYYNNNYNNYNNNNNYNYNNNNNYNYNNYNYNNNNYNNNNN", "YNNNYYNNNNNNNNNNNYNNNNNNYNYNYYYNYNNNNNNNNNNYYNNNYN", "NYNNNNNNYNYNYNYNNNNNYNNNYNNNYNYNYNYNNNNNYNYNNNNNNY", "NYNNYNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNY", "NNNNNNNNYNYNNYYNYNNNNNNNNNNYYNNNNNYNNNNYNYYNNNYYNN", "NNNNNYNNYYNNNNNYNYNNYNNNNYNYNNYYNNNNNNYYNNNNNYNNNN", "NNNYNNNNYNNNNNYNYNYYYYYNNNNNNNNYYNNNYNNYYYYNNNNNYY", "NNYNYYYNYNNNNNNNNNNNNNYNNNNNNNYYNYNNYNNNNNNNNNNYNN", "NNNNNNNNYNNNNYNNYNNNNYNYNYNNNNNNNNNNNNYNYNNNNYNNYY", "NNYNNNYYNNNYYNNYNNNYNNYNNNNYNYNNNYNNNNYNNYNYNYNNYN", "YNNYNNNNNNNYNNNYNNYNNNNNYNNYYNNYNNYNNNNYYNYNNNNNNN", "NYNYNNYNYNYNYNNYYNYNYNYNNYYNYNNNNNNNNNNNNNNNNYNNYN", "NYNYNNNNNNYNNNNNNYNNNNNNNYYYNYYYNNYNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNYYNNNNNYNNYYNNNYNNNNNYNNNNNNNNNYNNN", "NYNNNNNNYNNNNNNNNNNNNYYNNNNYNNNYNNNNYYNNNNYYNNYYNN", "YYNNNNYYNNNNNYYNNNNYNYNYYNNYNNNNNNNNYNNNNNNNNNNYNN", "NYNNNNNYNNYNNNYNYNNYNNYNYNNNNNNNNNYNNNNNNNNNNNYNNN", "YYNNNNNNYNNNNNNNNNNNNNYNNNNNNYNNNYNNNYNNYNNNYNYNNN", "NNNNYNNNYYYNNNNNYYNNNNNYNYYNNYNNNNYNYYNNYNNNNYYYNN", "YNNNNNNNNNYNNNNNNNNYNYNNNNNYNNNNNNYNNNNNYYYNNNNNYY", "NNNYNYNNNNNNNNNYNNNNYNNNNNNNNNNNNNYYNNNNNNNYNNYNYY", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYNNNNYNNNNYN", "YYNNYNNNNYNNYYNNYYNNNNYNNNNNNNNNNNNNNYNNNNYNYNNNYN", "NNNYNNNNNNNYYYNNNNYNYNYNYNYNNNNNYYYNNNNYNNYNNYNNNY", "NNYNNNYNNNNYYNNNYNNNNYNNNNYNYNNNNNNYNYNNNYNNNYYNNN", "NYNNNNYNNNYNYYYNNNNNNYNNNYNNNNNNNNNYNNNNNYNNNNNNNN", "YNNNYNNYNYNNNNYNYNYNNYNNYNNNNNNNNYNNNNNNNNYNNNYYNN", "NNNNYNNNNNYNNYNNNYYNNNNNNNNNNNNNYNNNNNNNNNNNYYYNNN", "NYNNNNNYNNYNNYNNYNYNYNNYNYNNNNNNNNNYNYNYNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 625;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> clientCable = {"NNNNNYYNYNNNNYNYYNNYYYNNYNNYNNNYNNYNNNYNNNYNYNNNYY", "YNNYYYYYYYNNNYYYYNNYYYYYYYYYYYYYNYYYNYYYYNYYYNYNYY", "YYNYYYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNNNNYYNYNNNNYNYYNNYYYNNYNNYNNNYNNYNNNYNNNYNYNNNYY", "YNNYNYYNYNNNNYNYYNNYYYNNYNNYNNNYNNYNNNYYNNYNYNYNYY", "NNNNNNYNYNNNNNNYYNNYYNNNNNNYNNNYNNNNNNYNNNYNYNNNNY", "NNNNNNNNYNNNNNNYYNNNYNNNNNNNNNNNNNNNNNYNNNNNYNNNNY", "YNNYYYYNYNNNNYYYYNNYYYYYYYYYNYYYNYYYNYYYNNYYYNYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYYYYYYNNNNYYYYNNYYYYYYYYYYYYYNYYYNYYYYNYYYNYNYY", "YYNYYYYYYYNNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYNNNYYYYNNYYYYYYYYYYYYYYYYYNYYYYNYYYYYNYY", "NNNNNYYNYNNNNNNYYNNYYNNNNNNYNNNYNNNNNNYNNNYNYNNNNY", "YNNYYYYNYNNNNYNYYNNYYYNNYNNYNNNYNNYNNNYYNNYNYNYNYY", "NNNNNNNNYNNNNNNNYNNNYNNNNNNNNNNNNNNNNNYNNNNNYNNNNN", "NNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNYNNNNN", "YYNYYYYYYYNNYYYYYNNYYYYYYYYYYYYYYYYYNYYYYYYYYYYNYY", "YYYYYYYYYYYNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNYNYNNNNNNYYNNNYNNNNNNNNNNNNNNNNNYNNNNNYNNNNY", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNN", "NNNNNYYNYNNNNYNYYNNYYNNNNNNYNNNYNNYNNNYNNNYNYNNNYY", "YNNYYYYNYNNNNYYYYNNYYYNYYYNYNNYYNYYYNYYYNNYYYNYNYY", "YNNYYYYNYNNNNYYYYNNYYYNNYYNYNNYYNNYYNYYYNNYNYNYNYY", "NNNNNYYNYNNNNYNYYNNYYYNNNNNYNNNYNNYNNNYNNNYNYNNNYY", "YNNYYYYNYNNNNYYYYNNYYYNNYNNYNNYYNNYNNYYYNNYNYNYNYY", "YNNYYYYNYNNNNYYYYNNYYYYYYYNYNYYYNYYYNYYYNNYYYNYNYY", "NNNNNNYNYNNNNNNYYNNYYNNNNNNNNNNNNNNNNNYNNNNNYNNNNY", "YNNYYYYYYNNNNYYYYNNYYYYYYYYYNYYYNYYYNYYYYNYYYNYNYY", "YNNYYYYNYNNNNYYYYNNYYYYYYYNYNNYYNYYYNYYYNNYYYNYNYY", "YNNYYYYNYNNNNYYYYNNYYYNNYNNYNNNYNNYNNNYYNNYNYNYNYY", "NNNNNNYNYNNNNNNYYNNYYNNNNNNYNNNNNNNNNNYNNNNNYNNNNY", "YYNYYYYYYYNNNYYYYNNYYYYYYYYYYYYYNYYYNYYYYNYYYNYNYY", "YNNYYYYNYNNNNYYYYNNYYYNYYYNYNNYYNNYYNYYYNNYNYNYNYY", "NNNNNYYNYNNNNYNYYNNYYNNNNNNYNNNYNNNNNNYNNNYNYNNNNY", "YNNYYYYNYNNNNYYYYNNYYYNNYYNYNNYYNNYNNYYYNNYNYNYNYY", "YYNYYYYYYYNNYYYYYYNYYYYYYYYYYYYYYYYYNYYYYYYYYYYNYY", "YNNYYYYNYNNNNYYYYNNYYYNNYNNYNNYYNNYNNNYYNNYNYNYNYY", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "YNNYNYYNYNNNNYNYYNNYYYNNYNNYNNNYNNYNNNYNNNYNYNYNYY", "YNNYYYYYYNNNNYYYYNNYYYYYYYYYNYYYNYYYNYYYNNYYYNYNYY", "YYNYYYYYYYNNYYYYYNNYYYYYYYYYYYYYYYYYNYYYYNYYYYYNYY", "NNNNNNYNYNNNNNNYYNNYYNNNNNNYNNNYNNNNNNYNNNNNYNNNNY", "YNNYYYYNYNNNNYYYYNNYYYNYYYNYNNYYNYYYNYYYNNYNYNYNYY", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYYYYYYYNNNYYYYNNYYYYYYYYYYYYYYYYYNYYYYNYYYNYNYY", "YNNYNYYNYNNNNYNYYNNYYYNNYNNYNNNYNNYNNNYNNNYNYNNNYY", "YYNYYYYYYYNNYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "NNNNNYYNYNNNNYNYYNNYYNNNNNNYNNNYNNYNNNYNNNYNYNNNNY", "NNNNNNNNYNNNNNNYYNNNYNNNNNNNNNNNNNNNNNYNNNNNYNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NYNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNN", "NNYNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNYNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNYNNNNNN", "NNNNNNYNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNYNNYNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNYNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> clientCable = {"NNYYNNNNNNNYYNYNNNNNNNNYNNYNYNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNYNNYNNNNNNNNNYNY", "NNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYYNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNYNNNYNNYNNYYNNNNNNNYYNNNNYNNNNNN", "YNNNYNNNNYNNNYNNNNNNNNNYNNYNNNNNNNNNNNNNNNNYNNNYNY", "NNNNNNNNNNNNYNNNNNYNNNNYNYNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNYNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNYNNYNN", "NYNNYNNYNNNNYNYNYNNNNNNNNNNNNNNYNNYNYNNNNYNNNYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNYNNNYNNYYNNYNYNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNYNNNNN", "YNNNNNNNNNNNYNYNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNY", "NNNNYNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNYNNNNNNYNNNNNYNNYNNNNNNNYNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNYNNNNNNYNNNNNNYNNNNNNNNNNYNNN", "YNYNNNNYNNYYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNYNYNNYNYNNYNNNNNNNNNNNNNNYYNNNNNNNNNNNNYNYNNNN", "YNNNNNNNNNNYNYNNNNNYNNNNYNYNNYNYNNYNNNNYNNYYNNNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNYNYNNYYNNNNNNYNNNNNNNYYNNNNNNNNNNNNYNYYYYNN", "NNNNYNNNNNYNNNYYNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNY", "NNYNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYYNYNNYNNYYNYYYYNNNNNNYNYNYNYNNNNNYNNNNNNYNNNNN", "NNNNNNNNNNNYNNNNNYNNNNNNNNNYNNNNNNNNNYNNNNNNNNNYNN", "NYNNNNNNNNNNNNNNNYNNNNNYNNYYNNNNNNYYNYNNNNNNNYNNNN", "NNYNNYNNNNYNNYNNYNNNNNNNNNYNNYYNNNNNNNNNNYYNNNNNNN", "NNYNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNYNNYYNNNNNNNNNYNNYNNNNNNNNNNNNNNNYNNNN", "YNYNYNNYNNNYNNNNYNYNNNNNNYNNNNNNYNNNNYNNNNNNYNNNNN", "NNNNNNNNNNNNNNYYNYNNNNNYNNNNYNNNNNNNNNNNYNNNNNNNNN", "NNYNYNYNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNYNNY", "NNNNNNNNNYNYNNNNNNNNNNNYYYNNNNNYNNNNNNYNYNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYYNYYNYNNNNNNNNNNYNNNNYNNYYYNNNNNNYYNNNN", "NNNNNNNYNNYNYNNNNNYNYNNNNNNYNNNNNNNYNNNNNNNNNNNNNN", "NNNYNNNYNYYNNNYNNYNNNNNNNNNNNNNNNNNYNNNNYNNNYNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNYNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNYNNNYYNNYNYYNNNNNNNNNNNNNNYYNNNNNNNNNYNN", "NNNNNNNNNNYNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNYNNYNNNNNNNYNNYNNYNYNNNNNNNNYNNYNNNNNNNY", "NNNYNNNNNNNNNNYNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNYNNYNYNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNYNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNN", "NNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNYNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNYNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNYNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNYNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> clientCable = {"NNNNYNNNNNNNNNNNNNNNNNNNYNNYYNYNNNNNNNNNNNNNNNNNNN", "NNYNYYNYNNNNYYNNYNNYNNYNYNYYYNNNNYNNNNNNNNYNNNNYYY", "NNNNNNNNNNNNNYNNNNNYNNNNNNNYNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNYNNNYNNNYYNNNNYNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNYYNNYNNNNNNNNNYNYNNNYNNNYNNNYNYNNNNYN", "YNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNYNYNNNNNNNNNNNN", "YNNNYNNNNNNNYNNNNYNNNNNYNNNYNYNNNYNNNYNNNNNNNNYYYN", "NNNYYNNYNNNNNNNNNYYNNNNNNNNNNNNYYNNNNNNNNYNNNNYNNN", "NNNYNNNNNNNYYNNYNNNNNYNYYYNYYNYNNNYNYNYNYNNNNNYYYY", "YYNNNNNNYNNNNNYNNNNYNYNNYNNNNNNNNNYNYNYYYYNNYNYYNN", "YNYYYYNNNYNNNYNNNNYNNNNYNNYYNYYYYNNYNNNNNYNNNNNNNN", "YNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNYNNNNNYNNNNNNNNNYYNNNYYNNNNNYYNYNNNYNYYNYNNNNYNN", "NYYNNNNNNNNYNNNNYNNNNNNNYYNYNNNNYNNYNNNNNYYNNNYYNY", "NNNYNYNNNYNNNNNNNNYNNYNYNNNNYYNNNNNNNNNNNYNNYNNNYN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNYN", "NNNYNYNYNNNNNYNNNYNNNNNNNNNNNNYYNYNYNNNYNYNYNNYNNN", "NNNNYNNNNNNNNYNNNNNNNYNNNNNYYNNNNYNNNYNNNNNNNNYNNN", "NNNYYNYNNYNNNNNNNYNNNNYYYYYNNNNNNYNYNYYYNYYNYNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNYNNNNNNYNNYNYNNYNYNNNNYNNNNNNNNNNYNYYNYNYYNNYNYY", "NNYNYYNNNNNNNNNNNYNYNNNNNNNNNNYNNYNYNYNNNNYNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNYNNYNNNNNNNNNNNNNN", "NNYNNNNYNYNNNYNNYYNNNNYYNNYNNYNYNNNNNYNYNNNNNNNNNY", "NNNNNYNYNYNNNYNNNYYYNNNNYNNNNNNNNYNNNNNNNYNNNNNNNN", "NNNNYYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNYNNNNNYNNNNNN", "YNNYNNNNNNNNNNNNNNNNNYNNNNNYNNNNNYNYNYNNNYNYNNYYNN", "NNNNYYNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNYNNNNNNNNYNNN", "YNNNYYNNNNNNNNNNNNNYNYNYYNNYNNYNNYNNNYNNNNNNNNNNYN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "YNNNNYNYNNNNNNNNNNNNNYNNYNNYNNNNYNNNNYNNNNNNNNYNNN", "YYNNNYYYYYNNNYYNNNYNYNYNNNYYNYNNNYNNNNNNYYNNYNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNN", "YYNNNNNYNNNNYYNNYNNNYYYNNNYNYNNYNYYYNNYNNNYYNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNYNNNNNNNYNYYYNNNNYYNNYYNNYNYNNNNNNNYNNNNYYNN", "NNNYYYNNNNNNNNNNNYNYNNNYYNNNNNYYNYNNNNNNNNNNNNNNYN", "YNNYYNNNNNNNNNNNNYNNNNNYNNNYNNNNNYNNNYNNNNNNNNYNNN", "YNYYNYNYNNNNNYNNNNNNNNNNYNNYNNNNYYNYNYNYYNNYNNNNNN", "NNNNYYNNNNNNNYNNNNNYNNNNNNNNNNNNNYNYNYNNNNNYNNYNYN", "NNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNYYYNNNNNYNNNYNNNNNNNNYNNYNNYNYNYNYNYYNNNNYNN", "YYYNNNNNYNYYNNNNYYYNYNNNYNNNNNYYYYNNNYYNNYYNYNNNYN", "NNNNYNNNNNNNNNNNNNNNNYNNNNNNYNNNYNNNNNNNNNNYNNNNNN", "NNYNYYNNNNNNNNNNNYNNNNNNYNYYYNNNNNNYNYNNYYYNNNYNYN", "YNNNNNNNNNNNNNNNNNNYNNNNYNNNNNYNNNNYNNNNNNNNNNNNNN", "NNYNNYYNNNNNYNYNNNNNNYNYYNNYNNYNYNNNNNNNYNNNYNNYYN"};
    vector<string> serverCable = {"NNNNYNNNNNNNNNNNYNYNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNN", "NNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNYNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNYNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNYNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNYYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNYNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNYNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNYNN", "NYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNYYNNNNNNNNYNYNNNNNNNNYNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNYYY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNYNNNNYN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNYNNNNYYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNYNNNNNNNYNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNYNYNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNYNYNNNNNYNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNYNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNYNYNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYYNNNYNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNN", "NNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> clientCable = {"NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNYNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNYNNYNNNYYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNYNNNNYYNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNY", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNY", "NNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNYNNNNNNNN", "NNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYYNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNYNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNYNYNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNYNNNNNNNN", "NNNNNNNYNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNYYN", "NNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNYNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNYNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNN", "NNNYNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNYNNNNYNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNYNYNNNNYNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> clientCable = {"NYYYYNYYYYYYYYYYYYYYYYYYYYYNNYYYNYYYYYYYNYYYYYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNN", "NYNYYNNYYNYYYYYYYYYYYYYYYYYNNYYYNYYYNYYYNYYYYYYNNN", "NYNNNNNNNNNNYYYYNNYYNYYNNNYNNYYYNNNYNNYYNYYYYNYNNN", "NYNYNNNYNNYYYYYYYYYYYYYYYYYNNYYYNYYYNYYYNYYYYYYNNN", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NYYYYNNYYYYYYYYYYYYYYYYYYYYNNYYYNYYYYYYYNYYYYYYNNN", "NYNYNNNNNNNNYYYYNNYYNYYNNNYNNYYYNYNYNNYYNYYYYNYNNN", "NYNYYNNYNNYYYYYYYYYYYYYYYYYNNYYYNYYYNYYYNYYYYYYNNN", "NYYYYNNYYNYYYYYYYYYYYYYYYYYNNYYYNYYYYYYYNYYYYYYNNN", "NYNYNNNYNNNYYYYYYNYYYYYYYNYNNYYYNYYYNNYYNYYYYYYNNN", "NYNYNNNYNNNNYYYYYNYYYYYYYNYNNYYYNYYYNNYYNYYYYYYNNN", "NYNNNNNNNNNNNNYYNNNYNYNNNNNNNYNNNNNNNNNNNNYYYNYNNN", "NYNNNNNNNNNNYNYYNNYYNYYNNNNNNYNNNNNYNNYNNYYYYNYNNN", "NYNNNNNNNNNNNNNNNNNYNYNNNNNNNYNNNNNNNNNNNNYYYNNNNN", "NYNNNNNNNNNNNNYNNNNYNYNNNNNNNYNNNNNNNNNNNNYYYNNNNN", "NYNYNNNYNNNNYYYYNNYYNYYYYNYNNYYYNYYYNNYYNYYYYYYNNN", "NYNYNNNYNNYYYYYYYNYYYYYYYYYNNYYYNYYYNNYYNYYYYYYNNN", "NYNNNNNNNNNNYNYYNNNYNYNNNNNNNYNNNNNNNNNNNNYYYNYNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNN", "NYNYNNNYNNNNYYYYYNYYNYYYYNYNNYYYNYYYNNYYNYYYYYYNNN", "NYNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNYYYNNNNN", "NYNNNNNNNNNNYNYYNNYYNYNNNNNNNYNNNNNYNNYNNYYYYNYNNN", "NYNYNNNYNNNNYYYYNNYYNYYNYNYNNYYYNYYYNNYYNYYYYYYNNN", "NYNYNNNYNNNNYYYYNNYYNYYNNNYNNYYYNYNYNNYYNYYYYNYNNN", "NYNYNNNYNNYYYYYYYNYYYYYYYNYNNYYYNYYYNNYYNYYYYYYNNN", "NYNNNNNNNNNNYYYYNNYYNYYNNNNNNYYYNNNYNNYNNYYYYNYNNN", "YYYYYNYYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYYNN", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "NYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYYYNNNNN", "NYNNNNNNNNNNYYYYNNYYNYYNNNNNNYNNNNNYNNYNNYYYYNYNNN", "NYNNNNNNNNNNYYYYNNYYNYYNNNNNNYYNNNNYNNYNNYYYYNYNNN", "YYYYYNYYYYYYYYYYYYYYYYYYYYYNNYYYNYYYYYYYNYYYYYYNNN", "NYNYNNNNNNNNYYYYNNYYNYYNNNYNNYYYNNNYNNYYNYYYYNYNNN", "NYNYNNNYNNNNYYYYNNYYNYYNYNYNNYYYNYNYNNYYNYYYYYYNNN", "NYNNNNNNNNNNYNYYNNYYNYNNNNNNNYNNNNNNNNYNNYYYYNYNNN", "NYYYYNNYYNYYYYYYYYYYYYYYYYYNNYYYNYYYNYYYNYYYYYYNNN", "NYNYNNNYNNYYYYYYYYYYYYYYYYYNNYYYNYYYNNYYNYYYYYYNNN", "NYNNNNNNNNNNYNYYNNYYNYNNNNNNNYNNNNNNNNNNNNYYYNYNNN", "NYNNNNNNNNNNYYYYNNYYNYYNNNYNNYYYNNNYNNYNNYYYYNYNNN", "YYYYYNYYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYNYYYYYYNNN", "NYNNNNNNNNNNYNYYNNYYNYNNNNNNNYNNNNNNNNYNNNYYYNYNNN", "NYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NYNYNNNYNNNNYYYYNNYYNYYNYNYNNYYYNYNYNNYYNYYYYNYNNN", "NYNNNNNNNNNNNNYYNNNYNYNNNNNNNYNNNNNNNNNNNNYYYNNNNN", "YYYYYNYYYYYYYYYYYYYYYYYYYYYNNYYYYYYYYYYYYYYYYYYNNN", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYNY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> clientCable = {"NNNNNNNYNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYYNNYY", "NNNNNNNNNYNNNNNNNNNNNYNNNYNYNNNNYYNYNNNYNNNNNNNNNY", "NNNNNNNNNNNNYYNYYNNNNNNNYNYNNNNNNNNNNNNYNNNYNNNNNN", "NNNNNYNNNNNNYYYYNNYNNYNNNYYNNNNNNNNNNNNNNNNYNNNYNN", "YNYNNYNNNNNNNNNNNNNNYNNNYNNYNNNNNNNNYNNNNNYNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "YNNNNYNNNYYYNNNYYYNNNYNNNNNNNNNNNNNYNNNNNYYNNYNNYY", "NNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNYNYNNNNNNNYNNNNNYN", "NNNNNNNNNNNYNNYNNNNNNNNNYNYNNNNNNNNNNNNNNNNYNYNNNN", "NNNNNNNYNNNYNNNNNNNYNNNNYNNYNNNNNYNNNNNNNNNNYNNYNN", "YNNYNYNNNNNNNNYNNNNNNNNNNYNNNNNYNNNNNNNYYNNNNNYYNN", "NNNNNNNNNNNNYNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "YNNNNNNNNNNNYNNYNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNN", "YNNNNYNYNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYNNNNNNNNNNNNNNYN", "NNNNNNNYNNYNNYNNNNNNYNNNNYNYNNNNNNYYNNYNYNYNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNYNNNYYNNNNYNYNNNYYNNNNNNNNNYYNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYYNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNYNNYNNYNNNNYNNNNNYYNNNNNNNNNNNNNNNYYYNNNNY", "NNYNNYNYNNNYNNNYNNNYNNNNNNYNNNNNNYNNNNNNNNNNYYNNNN", "NNNNNYNNNNNNNNNNNNNNNYNNNNYNNNNNYNNNNNNNNNYNNNNNNN", "NNNNNNNYNNNYYNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYYYNNNNNNYYNYYNNNNNN", "NNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNYNNYNNNNNNNNNYNNNNYNNNNNNYNNYNNNNNNNYNNYYNN", "NNYNNNNNNNNNNNNYNNNNNNYYNNNNNNNYNNYYNNYYYNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNYNYNNNN", "NNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNYNYNNNYN", "NNNYNNNNNNNNNNNNNNYNYNNYNYNNNNNYYNNNNNNYNNYYNNNNYN", "NYNYNNNNNNNYNNNNNNNNNNNNNNYNYNNNNNYNNNNNNYNNNYNNNN", "NNNNNNNNNNNNNYNYNYNNNYNYNNNNNNYNNNNNNNNNYNNNNNNYNN", "NNYNNNNNNNNNNNNNYNYNYNNNNNNNNNNNNNYYNNNNYNNNNNNNYY", "NNNNNNNNNNNNYNNNNNNNNNYNNNYNYNNYYYNNNNNNNNYNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNYNNNYNNNYNNYNNNNNNY", "NNNNNNNNNNNYNYNYNYNNNYNNNNNNYYYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYYNNNNNNNYNNNNNNNNNNYNNYNNNNNNNNNYNNNYN", "NYNYNNNYNNNNNNNNNNNNNNYNNNNNNNYYNNNNNNNNNNNNNYNNNN", "YNYNNNNNYNNNNNNNNNNNYNNNYNNNYNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNYNNNYNNNNNNNNNNNNNNNNNNNYN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> clientCable = {"NNNNNNNNNNNYNNNYNNNNNNNNNNNNYNYNNNNYNNNNYNNYNNNNNN", "YNNNNNNNYNNNYNNNNYNNNNNNNNNYYNNNNNNNNNNNNNNYNNNNNN", "YNNNYNNYYNYNYNNNNYNNYNYNYNNYNNNNNNYNYYNNNNNYNYYNNN", "NNNNNNYNYNYNNNNNNNNNNYNNNYYYYNYNNNNNNNNNNYNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNYNNNNNNNNN", "NYNNYNNNNNNYYNNNNYNNNNNNNYNNNNYNNNYNNNNYNYYNNNNNNN", "YNNNNNNNNNYNYNNNYNNNNYNYNYYYYNYNNNNYNNNNNNYNNNNNNN", "YYNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNN", "YNNNNNYYNNNYNNNYYNNYNYNYYNNNNNNYNNNNNNNNYYNNNNNNNN", "YYNNYNNNNNNNYNNNNYNNNNNNNYNNNNYNNNNYNNNNNYNNNNYNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNNNYYNNYNNNYNNYNYNNNNYNYYNNNNYYNYYNYNNNNYNYNNNN", "NNNYYYNNNNYNNNNNYYNNYYNNYYNNYNNNYNYNNNYNYNYNYNYNYY", "NNNNNNNNNNNNYNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNNYNNNNNNNNNNYNNNNYNYNYNNNNNNNYNNYYYNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNYNNNNYNNNNNNNNN", "YYYNNYNNNYNYNNYYNYNNYNNNNYNNNNNYNNNNYNNYYNYNYYYNYN", "NNNYNNYNYNNNNNNYYNNNNNNNYNNNNNNYNNNNNNNYNNNYNNNNNN", "NYNYNNNYNYNYYNNNYNNYNYNNYYYYNNNYNNNNNNNNYNYYNNNNNN", "YYNNNNNYYNNNYNNYNNNNNNNNNNNYNNNNNNNNNNNNNYYNNNYNNN", "NYNNYYNYNYNNYNNYYNNYNNNNNNYNYNNYNYNNNNNNNYYNNNNNNY", "YYNNYNNYNNNYNNNNYNNNNYNNNYNYNNNNNNYNNYYNYNYNNNNNNN", "NYNNYNYNNNYYYNNNNNNNNYNYNYYYNNNNNNNNNYYNYNNYNNNNNN", "YYNNYNNYNNNNNNNNNYNNNYNNNNNNNNNNNNNNNYNNNNYYNNNNNN", "NNNNYNNYNNNNYNNNNNNNNNNNNNNNYNYNNNNYNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNYNNNNNNYNNYYNYNNNYNNYNNNNNNNYNYNNNNYYNYNNNNYNNYY", "NNNNNNNNNNNYYNNYNYNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNN", "YYNNYNYNYNYNYNNNNNNNNYNNYYNYYNYNNNNNNNNYYYNYNNNNNN", "NNYNNYYNNYNNYNNYNNNNNYNNYNYNNNYNNYNYNNNNYYYNYYYYNN", "NNNYNYNNYNYNYNNYNNNNNYNNNNNYYNNNNNYNNNNNYNYNYNNNNN", "NNNNYNNNNNYNNNNNNNNNNYNNNNNNYNNNNNNYNNNYNYNNNNYNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNYNNNNYNNNYYNNYNNYNNYYNNNNNNNNNNNNYNNYNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNYYNNNNNNNNNNNNNNYNNYNNN", "NYNNNYNNNNNNNNNNNNNNNNNNNYYYNNNNNNNNNYNYNYYNNNNNNN", "YNNNYNNNNNYNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNYNNYNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNYYNNNNNNYNNNNNNNNNNNNNN", "YNNNNNNNYNNNNNNNNNNNNNNNNNYYYNNNNNNNNYNNNNYNNNYNNN", "NNNNYNNNNNNNYNNNNYNNNNNNNNYYYNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNYNNYNNNNYNNNNNNNNNNNNNN", "NYNYNNNYNNNNYNNNNYNYNYNNYYNNNNNNNNNNYNNNYNNYNNNNNN", "NYNNNNYYNNNNNNNNYNNYNYNYYYYYNNNYNYNYYNNNYYYNNNNNNN", "YNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNN", "YNNNNNNNYYNYYNNNNNNYYYYYNYNNNNNNNYYYNYNYNNNNYYYNNN", "NNYNYNNNNYYNNNNNYNNNYNYYYNYNNNNYYYNYNNYYYNYNNNNNNY", "NYNYNNNNYNYNNNNNYYNYYNNYNNNNNNNNNYNNYNYNNYNNYNYNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNYNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNYNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNYNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "YNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNYNNYNNNNNNNNNNYYNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNYNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNYYNNNNNNNYNNNNNNYNNNNN", "NNNNNNNNNNNNYNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNYNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYYNNYNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNYNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYYNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> clientCable = {"NNNYYNYNYYYNYYNNYYNNYNNNYNYNNYNNYYNNNNYNNNNYYYYNNN", "YNYYYYYNYYYYYYYNYYYYYYNNYNYNNYYYYYYNNNYYNYNYYYYYYY", "YNNYYNYNYYYYYYYNYYNYYYNNYNYNNYYYYYYNNNYYNYNYYYYYNY", "NNNNYNYNYNYNYYNNYNNNYNNNYNYNNYNNNYNNNNYNNNNYYYYNNN", "NNNNNNYNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "YNYYYNYNYYYYYYYNYYNYYYNNYNYNNYYYYYYNNNYYNYNYYYYYNY", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYNYYYYYYYYY", "NNNNYNYNNNYNYNNNYNNNYNNNYNNNNYNNNYNNNNYNNNNNYNYNNN", "NNNYYNYNYNYNYYNNYYNNYNNNYNYNNYNNNYNNNNYNNNNYYYYNNN", "NNNNYNYNNNNNYNNNYNNNYNNNNNNNNNNNNYNNNNNNNNNNNNYNNN", "YNNYYNYNYYYNYYYNYYNYYYNNYNYNNYNYYYNNNNYYNYNYYYYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNYNYNYNYNNNYNNNYNNNYNYNNYNNNYNNNNYNNNNYYYYNNN", "YNNYYNYNYYYNYYNNYYNNYNNNYNYNNYNNYYNNNNYNNNNYYYYNNN", "YYYYYYYNYYYYYYYNYYYYYYYYYYYYYYYYYYYYNYYYNYYYYYYYYY", "NNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYNYNYNYNYYNNYNNNYNNNYNYNNYNNNYNNNNYNNNNYYYYNNN", "YNYYYYYNYYYYYYYNYYNYYYNNYNYNNYYYYYYNNNYYNYNYYYYYNY", "YNNYYNYNYYNNYYYNYYNNYNNNYNYNNYNYYYNNNNYYNYNYYYYNNN", "NNNNYNYNNNNNYNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNN", "YNNYYNYNYYYNYYYNYYNYYNNNYNYNNYNYYYNNNNYYNYNYYYYNNY", "YYYYYYYNYYYYYYYNYYYYYYNNYYYNYYYYYYYNNYYYNYNYYYYYYY", "YYYYYYYNYYYYYYYNYYYYYYYNYYYNYYYYYYYNNYYYNYYYYYYYYY", "NNNNYNYNNNYNYNNNYNNNYNNNNNNNNNNNNYNNNNYNNNNNNNYNNN", "YYYYYYYNYYYYYYYNYYYYYYNNYNYNYYYYYYYNNYYYNYNYYYYYYY", "NNNNYNYNYNYNYNNNYNNNYNNNYNNNNYNNNYNNNNYNNNNYYYYNNN", "YYYYYYYNYYYYYYYNYYYYYYYYYYYNYYYYYYYYNYYYNYYYYYYYYY", "YYYYYYYNYYYYYYYNYYYYYYNNYNYNNYYYYYYNNNYYNYNYYYYYYY", "NNNNYNYNNNYNYNNNYNNNYNNNYNNNNNNNNYNNNNYNNNNNYNYNNN", "YNNYYNYNYYYYYYYNYYNYYYNNYNYNNYNYYYYNNNYYNYNYYYYNNY", "YNNYYNYNYYYNYYYNYYNNYNNNYNYNNYNNYYNNNNYNNNNYYYYNNN", "NNNYYNYNYYYNYYNNYYNNYNNNYNYNNYNNNYNNNNYNNNNYYYYNNN", "NNNNYNYNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "YNNYYNYNYYYYYYYNYYNYYYNNYNYNNYNYYYNNNNYYNYNYYYYNNY", "YYYYYYYNYYYYYYYNYNYYYYYYYYYNYYYYYYYNNYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYNYYYYYYNNYNYNYYYYYYYNNNYYNYNYYYYYYY", "NNNNYNYNNNYNYNNNYNNNYNNNNNNNNNNNNYNNNNNNNNNNNNYNNN", "YNNYYNYNYYYNYYYNYYNNYNNNYNYNNYNYYYNNNNYNNYNYYYYNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYNYYYYYYYYY", "YNNYYNYNYYYNYYYNYYNNYNNNYNYNNYNYYYNNNNYNNNNYYYYNNN", "YYYYYYYNYYYYYYYNYYYYYYYNYYYNYYYYYYYNNYYYNYNYYYYYYY", "NNNNYNYNYNYNYNNNYNNNYNNNYNNNNYNNNYNNNNYNNNNNYNYNNN", "NNNNYNYNNNYNYNNNYNNNYNNNYNNNNNNNNYNNNNYNNNNNNNYNNN", "NNNNYNYNYNYNYNNNYNNNYNNNYNNNNYNNNYNNNNYNNNNYYNYNNN", "NNNNNNYNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYYNYNYYYYYYYNYYNYYYNNYNYNNYYYYYYNNNYYNYNYYYYNNY", "YNYYYYYNYYYYYYYNYYYYYYNNYNYNNYYYYYYNNNYYNYNYYYYYNY", "YNNYYNYNYYYNYYYNYYNYYNNNYNYNNYNYYYNNNNYYNYNYYYYNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNYNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> clientCable = {"NNNYNNNYNNNNNNNNNNNYNYNNNNNNNNNNNNYNNNNYNNNNNNNNNY", "NNNNYNNNNNNYNYNYNNNNNNNYNNNNNNYNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNYNNNNNYNNNNYYNNYNNNYNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNYNYNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNYNNNNNNNNYNNNNYNNNNNNNNYNNNNNNNNNNN", "NYYNNNNNNNNNYNYNNNNNNNNNNNNYNNNNNNNNNNNNNNYNYNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNYYNNNNNYNNNNYNYNYYNNNNYNNNN", "NNNNNYNNNNNNNNNNNYNNNNNNYNNNYNYNNNYNNNNNNNYNNYYNNN", "NNNYNYNYNYNNNYNYYNYNNNNNYNNYNNNYYNNNNNYNNNNNYYNNNY", "NNNNNNNNNNNYNNNNNYNNYNNYNNNNNNYNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNYNNNN", "NNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNYNNNYNNNYNYNNNYNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNYYNNNNNNNNNNNNNNYNNYNNNNYNYNNNNNNNNYYNYN", "NNNNNYNNNNNYNNNNNNNYNNNNYNNYNNYNNNNNYNNNNNYNNNNNYN", "YNYNNYNNNNNYNYYNYNNNYNNNYNYNNNYNNNNNNYYNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNN", "NYNNYNNYNNNNNNNNYNNNNNNNYNNNNNNNYYYNNNNYNNYNYYNYNY", "NNNYNNNNNNYNNNYNYNNYNNNNNNNNNNNYNNYNNNYNNNNNNYNNNN", "NNNNNNNNYNYNNNNNYNNNNYNYNYYNNNYNNNNNNNNNNYNNYNNNNY", "NNNNNNNNNNNNYNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNYNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNYNNYNNN", "NNNNNNNNNNNNNNNYNNNYNNNYNNNNNNNNNNNNNNYNNNNNNYNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNN", "NNNNNNNNNNYNYNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNYNNNNNYNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNYNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNYNNNNNNYNNNYNNNNYNNNNNNNNNYNNNNYYY", "NNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNYNYNNNNNYYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNYYNNNNNNNNNYNYNNNNNNNNYNNNN", "NYNNYNNYNNNNNNNNNNNYNNNNNYNNNNNNYNNNNNNNNNNNYNNNNN", "NNNYNNNNNNNNNYNNNNNNNYNNNNYNYNNNYNNYNNNNNNNNNNNNNN", "NNNYNNNNYNNNNNNNNNNYYNNNNNNNNNNNYNNYNNNNNNYNYNNNYN", "NYNNNNNNNNYNNNNNNNNYNNNNNNNNNNNYNNNNNYYNNNNNNYNNNN", "NYNNNNNNNNNNYNNYYNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNYNYNNNNNNNNYNNNNNNNNNNNYNYNNYNYNNNYNNN", "NNNNNNNNNNNNNNNYNNNNNNNYYNNYYNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNYYNNNNYYNNNNNYNNNNNNNNNNNNN", "YNYNNNNNNNNNYNYNNYNYNNNNNNNNYNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNYNNNNNNNNNNYNNNN", "NNYNYYYYNNNNYNYNYYNYNYNNYNYYYNNNNNNNNNYYNNNYNNNNYN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNYNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> clientCable = {"NYNNNNNNNNNYNNNNNNNNNNNYNNNNNNNYNYYNNNNYNYNYNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNYNNNNNNYNNNNNYNNNNYNNYNNYNNNNNNYNNNYNNYN", "NNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNN", "NYNYNNYYYNNNNNNNYNNYYYYNNNYNNYNNNNYYNNYNNYNYNYNNYY", "NNYNYNNNNNNNNNNNYNYNNYNNNNNYYNNYNNNNNNNNNNNNNYNNNN", "YNNYNNNNNNYYNNNNYYYNNNNNNNYNNNYYNYYYNYNYNYNNYNNNNN", "NYYYNNNNNNNYNNNNNYNNNNNYNNNNNNYYNNNNNNNNNNNNNYNNNN", "NYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNYYNNNYNNNN", "NNYYNYNNYNNNNNNYYYNYYNYNYNNNNYYNNNYNNNYNYNNNNNYNNN", "NYNYNNNNNNNYNNNNNYNYNYNNNNNNYNNNNYNNNNNYYYNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNNNNNYNYYNNNNYNNYYYNYNNNNNYYYNNYNNNYNYNNNYYYNNN", "NYNNYYNYNYYNYNNNNNNNNNYYNNNNYNNNNYNNNNYNNYNNYNNNNY", "YNNYNNYYNYYNNNNYNNNNNNYNNNNNYNNYYNNNNNNNNYNNNNYNNY", "NYYYNNNNNNNNNNNNYYYYNYNNNNYNNNNNNNYNNNNNNYNNNNNNNN", "YYYNNNNYNNNYNNNNNYNYNYNYNNNNYYNNNNNNNNNNNYNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNYNNNNYNNNNNNNNYNNNNNYNNYYNYNYNNYNNNYYNNNYNNNNNN", "NNNNNNNNYNNYNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNYNNYNNN", "NYYYNNNYNNNNNNNNNYNNNYNNNNNYNNNNNNNNNNNYNNNNYNNNNN", "NNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNN", "NNNNNNNNYNNNNNNYNNYNNNNNNNNNNNNNNYNNNNNNNNNYYYNNYN", "NYNNNNNNYNYNNNNNNYNNNYNNNNNNNNNNNYNYNNYNNNNNNYYNYN", "YYYNNYNNNNYNYNNYNNNYYNYNNNNNYNNYNYNYNYNNYYNYYNNNNN", "NYNYYYYNNYYYYYNYNNNYYNYNNNYNNYNNYYYNNYNYNYNNNNYYNY", "YNNYNNNNYNYNYNNNNNNYNNNNNNNNNNYNNNNYNNNYNYNNYNYNNN", "NYYNNNNNNNYYNNNNNNNNNYNYNNNNYNNNNNYYNNNNNNNNYNNNYN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNYNNNYNNNNNNNNNYNYNYNYNNNNYNNNNYYNNNYNYYNNNNYNNN", "NYNYNNNNNNNYNNNNNNNNNNNNNNNNNNNYNYYYNNNNYNNYNNNNNN", "NNNNNNNNYNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNYN", "NYNNNYNNNYNYYNNYNNYYNNYNNNNNYNYNNYYNNYNYNNNNYYNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYYNYNYNNNNYN", "NNNNNNNNNNYNNNNNNYNNNYNNNNNNYNNYNNNYNNYYNNNNNNNNNN", "NYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNN", "YNNYNNNYNNNNNNYNNNNNNYNNYNYNYYYYNNNYNYYYNNNNNYNNYN", "NYNYNNNNYNYYNNNYNNYYYNYNNNYYNYNNNNNNNNNNNYNNNYNNYN", "NNNYNNNNNNNYNNNNNYNNNYNNNNNNNNNNNNNNNNNNYNNNNYNNNN", "NNNNNNNNYNNNNNNNNNNYNYNNNNNNYNNNNNNYNNNNNNNNNNNNYN", "NYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNYNNNN", "NNNYYNNNYNNYYNYYNYNNNNNNNNYYNNYNYYNYNNNNYYNNNNNYYN", "NNNNNNNNYNNYNNNNNNNNNYNNNNNNYNNNNNNYNNYNNNNNNYYNNN", "NNNYNNNYNNYNNNNNYNNNNNNYNNNNNNNYNNYNNNNYNYNNNNYNNN", "NYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNYNNYNNYNYNNYNYYNNYNYNYYNNYNNNYNNYYNNYNNNNYYYNNNN", "NYNYNNNNYNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNYNNNYNNNNYNNNNNYYNNNNNNNYYNYYNNNNNNYNYNYNNNNYNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNN", "NNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNN", "NNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNYNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNYNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNYNNNNNNNNNNNYNYNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNYNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNYNNNN", "NNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYYNNNNNNYN", "NYYNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNYNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNY", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNYNNNNNYNNNNYNNNN", "YNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNY", "NNNNNNNNNNNYNNNNNNNYNNYNNNNNNNNNNNYNNNNNYNNNNNNNNY", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNYNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNYNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYYYYYYYYNYYYYYNYYYNYNYYNYYNYYYYYYNYYNYYYYYYYYYYY", "YNNNNYNYNNNNYNNYNYYYNNNNNNYYNYNNNNYNYNNNNNNYNYNYNY", "YNYNYYYYNYNYYNNYNYYYNYNYYNYYNYYYYNYNYYNYNYNYYYYYNY", "YNYNNYYYNYNYYNNYNYYYNNNNNNNYNYNNYNYNYYNYNNNYYYYYNY", "YNNNNNNYNNNNYNNYNYYYNNNNNNYYNYNNNNYNYNNNNNNYNYNYNY", "YNYNNYNYNYNYYNNYNYYYNNNNNNYYNYNNYNYNYNNNNNNYNYYYNY", "YNNNNNNNNNNNYNNYNYYYNNNNNNYYNYNNNNYNYNNNNNNYNYNYNY", "YNYYYYYYNYNYYNYYNYYYNYNYYNYYNYYYYNYNYYNYYYNYYYYYNY", "YNYNNYNYNNNYYNNYNYYYNNNNNNYYNYNNNNYNYNNNNNNYNYNYNY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYNNYNYNNNNYNNYNYYYNNNNNNYYNYNNNNYNYNNNNNNYNYNYNY", "YNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "YNYYYYYYYYNYYNYYNYYYNYNYYNYYNYYYYYYNYYNYYYNYYYYYYY", "YNYYYYYYNYNYYNNYNYYYNYNYYNYYNYYYYNYNYYNYYYNYYYYYNY", "YNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYNYYYYYNYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YNNNNNNNNNNNYNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNYNNYNYYNNNNNNNYYNYNNNNNNYNNNNNNYNYNYNY", "YYYYYYYYYYNYYYYYNYYYNYNYYNYYYYYYYYYNYYNYYYYYYYYYYY", "YNYNYYYYNYNYYNNYNYYYNNNNNNYYNYNNYNYNYYNYNNNYYYYYNY", "YYYYYYYYYYNYYYYYNYYYYYNYYNYYYYYYYYYNYYNYYYYYYYYYYY", "YNYNYYYYNYNYYNNYNYYYNYNNNNYYNYNNYNYNYYNYNNNYYYYYNY", "YNYNYYYYNYNYYNNYNYYYNYNYNNYYNYNNYNYNYYNYNNNYYYYYNY", "YYYYYYYYYYNYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YNNNNNNNNNNNYNNYNYYNNNNNNNNYNYNNNNNNNNNNNNNYNYNNNY", "YNNNNNNNNNNNYNNYNYYNNNNNNNNNNYNNNNNNNNNNNNNYNYNNNN", "YYYYYYYYYYNYYYYYNYYYNYNYYNYYNYYYYYYNYYNYYYYYYYYYYY", "YNNNNNNNNNNNYNNYNYYNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNN", "YNYNYYYYNYNYYNNYNYYYNYNYYNYYNYNNYNYNYYNYNNNYYYYYNY", "YNYNYYYYNYNYYNNYNYYYNYNYYNYYNYYNYNYNYYNYNNNYYYYYNY", "YNYNNYNYNYNYYNNYNYYYNNNNNNYYNYNNNNYNYNNNNNNYNYNYNY", "YNYYYYYYYYNYYNYYNYYYNYNYYNYYNYYYYNYNYYNYYYNYYYYYNY", "YNNNNNNNNNNNYNNYNYYYNNNNNNYYNYNNNNNNYNNNNNNYNYNYNY", "YYYYYYYYYYNYYYYYNYYYYYYYYNYYYYYYYYYNYYYYYYYYYYYYYY", "YNNNNNNNNNNNYNNYNYYNNNNNNNYYNYNNNNNNNNNNNNNYNYNNNY", "YNYNNYYYNYNYYNNYNYYYNNNNNNYYNYNNYNYNYNNNNNNYYYYYNY", "YYYYYYYYYYNYYYYYNYYYYYYYYNYYYYYYYYYNYYNYYYYYYYYYYY", "YNYNNYYYNYNYYNNYNYYYNNNNNNYYNYNNYNYNYYNNNNNYYYYYNY", "YNYYYYYYNYNYYNNYNYYYNYNYYNYYNYYYYNYNYYNYNYNYYYYYNY", "YNYNYYYYNYNYYNNYNYYYNYNYYNYYNYYYYNYNYYNYNNNYYYYYNY", "YNYYYYYYYYNYYYYYNYYYNYNYYNYYNYYYYYYNYYNYYYNYYYYYYY", "YNNNNNNNNNNNYNNYNYYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "YNYNNYYYNYNYYNNYNYYYNNNNNNYYNYNNYNYNYNNNNNNYNYYYNY", "YNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNYNYNYNYYNNYNYYYNNNNNNYYNYNNYNYNYNNNNNNYNYNYNY", "YNNNNNNNNNNNYNNYNYYNNNNNNNYYNYNNNNNNYNNNNNNYNYNNNY", "YNYYYYYYYYNYYNYYNYYYNYNYYNYYNYYYYYYNYYNYYYNYYYYYNY", "YNNNNNNNNNNNYNNYNYYNNNNNNNNYNYNNNNNNNNNNNNNYNYNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> clientCable = {"NNNNNNNNNNYYNNNNNYNNNNYNNNNYNYYYNNYNNNNNNNYNNNNNYN", "NNNNNNNNNYNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNYNNNNYNNNNNNNNYNNNNNNNNNNNNNNN", "NYNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNYYNYNNNNNNNNYNN", "NNNYNYNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNYNNNYNNYNNNNYNNN", "NNNNNYNNNNYNNYNNYNNNYNNNNNYNNNNNNNNYNNYNNNNNNNNNNN", "NNYYNYNNNNYNNNNYNNNNNNNNNYNNNYNYNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNYNYNNNNNYNYNNNNYNYNNNNNYNYNNNYNNNNY", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNYNNNNNNNNNNYNN", "NNNNNNNNNNNNNYNNNNNNNNNNYNYNYNNNNNNNNNNNNNYNNYYNNN", "NNYNNNYNNNYNNNNNNNNNNNNYNNNNNYNNYNNNNYNYNNNNYNNYNN", "NYNNNNNNNYNNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNN", "NNNNNYYNNNYNNNNNNNNNYNNNNNYNNYYNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNN", "NNNNNYNNNYNNNNYNYNNNNYYYNNNNNNNYNNNNYNNNNYNNNNNNYN", "NNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYYNNNYNYNNYNYNYNNNYYNNYNNYNNNNYNYNNN", "NNYNYNYNNNNNNYYNNNNYNNNNNNYNYYNYNNNNNNNYYNNNYNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNYNNNNYNNNNNNNNNYNNNNYNNNNNNNNNN", "NNNNNYNNNNNYNNNNNNNNNYYNNNYNNYNNYYYYNNNNNNYYNNNNYN", "NNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNYYNNNNNNNNNYNYNNNYYNNNYYNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNNYNNNNNNNNNNNYNYNNNYNNNNYNNNNNNNNNNNYYNYNNNNN", "NYNNYNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNYNNNNYYNNNNNNN", "NNNNNNYYNNYNNNNNYNYNNNNNYNYNNNNNNNYNNNNNNNNNNNNNNN", "NNYNYYNNNNNNNNNNNNNNNNNNYYYNNNYYNNNNNNNNNYYNYNNYNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNYYYNYNNYNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNYNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNYNYNNNYNNYNNNYYNYYYNNNNYNNNNNNNN", "NYYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNYNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNYNNNNNNYNNNYNNNNNNNNNNNNNNNYYNNNYNNNN", "NNNNYYYYYNNNNNNNNNNNNNNNNNNNYNNYYNNNYNYYNYNNNNNNNN", "NNNYYNNNNNYNNNNNNNYYNNNNNNNNNNNNNNNNYNNYNYNNNYNNNN", "NNNNNNNNNNYNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYYNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNYNYNNNNNNNNYNNNYNNYNNNYNNNNNNYNNNNNNNNNNNNN", "NYNNNNNNNYYYNYNNNNNNYNNNNYYNNYNNYNNNNNYYNNNNYYNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNYNNNNNYNNYNNNNNNNYYNNNNNYYYNYNNNYNNNNNNNNNNYNN", "YNNNNNNNYYNNNNYNNNNNYNNNNNYNNYNNYYYYNYYYYNYYYYNNNY", "YNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNYNYNYNNNYNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNY", "YNNNYNNNYYNYNNNNYYNYNNNNNNNYNNYNYNNYYNNNNNNNNNYNYN", "YNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNY", "NNNYYNNNNYYNNNNYNYNNNYNNNYYYYNNNYNNNYYYNNNNYNYNNYN", "NNNNYNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNYNNNNNNN", "YNNYYNYNYNNNNNNYNNNNNYNNNYNNYNYNNNNNYNNNNYNNNYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "YYNNYNYNNYYNNNYNNNNNNYNNNYNYNYNNNNNYNYNYNYNNNNYNNN", "NNNNNYYNYYYNNNYNYNYYNYYYYNNNYNNNNNNYNYNNNNYYNNNNYN", "YNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNYNYNYNYNNNNNNNNNYY", "YYNYNNYYYNYNNNNYNNYYNYNYNYNNYNNNYNYNNNYYNYNNNNNNYN", "NNNYNNNNYNNNNNNNNNNNNNYNNNNNNNYNNNNNNNYNNYNNNNNNNN", "NNNYNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNYNNYNNNNNNNNNNNYNNNNNNYNYNYNYNNNYYNNYNYY", "NNNYNNNNNYNNNYNYNYNNNNYYNNYNYNYNYNNNYNNNNYNNNYNYNN", "NNNNYNNNNYNNNNNNNNNNNYNNNNNNNNNNYNNNNYNYNYNNNNNYNY", "NNNNNYYNYNNNYNNNNNNNNYNYYNNYNNYYYNYYNYNNNYYNYNYNYY", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNYNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNYNNNNNNN", "YYNNNNYYYNNNNNNNNNNNNNNNNYYNYNYNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNYYNNYNNNYNYNNYNNNNNNNYNYNNNNYNYNNNNNNYNNY", "YNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "YNNYNNYNNYYNNYNNNNNYNNYNYYNNYNYNNNNNYNNNNNNNNNNYNN", "YNNYNNNNNNYNNNNYYNNNNYNNNNYNNNNNNNYNYNNNNNNYNNYYNY", "YNNNYNNNYNYNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNYNNYNNN", "NNNNNNYNNNYNNNNYNNNNNNYNNNNNYNYNNNYNYYYNNYNYNYYYNY", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNYNYNNYYNNYNNNYYNNNYYNNNYNNYNNNNYNNNYNNYYYNYNYNN", "YNNYNNNNNNNNNNNNNNNNNNYNNNNNYYNNNNNNYYNNNNNYNNNYYN", "YNNYNYNYYYNYNYYNNNNYYNYYNYNNNYYYYNYNNNYYNNNYYNNYNN", "YNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNYNNYNNNNNYYNNYYYNNNYNNYYNNNNNNYNYYYNNYYYNYNNYN", "NNNNYNNNYNYNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNYNN", "NNNYNNYNNNNNNNNNNNNNNNYNNNNNYNNNNNNNYNNNNYNYNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNYNY", "NYNNNNNNNYYNNNNNNYNNNNNNNNNNNNNNYNNNYYNNNNNNNYYNYY", "NNNNNYNNNYNNYNNNYNNNNYNNNNNYYNYNNYYNYNNNNYYNYYNNNN", "YNNYNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNYNNNNNNNNNNNNNNN", "YNNNYNNNNNNNNNNNNNNNNYNNNNNNNNYNNNYNNNYNNNNNNNNNNY", "NNNNNNYNNNNNNNNNNNNNNYYNNNNNNNNNNNYNNNNNNYYNNNNNNY", "NYNNNNNNYNNNYYNYNNNYNYNYNNYNYNNNNNNYYYYNNYYNNYNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNYNNNNNNNYNNNYNNN", "NNNNNNNNYNNNNNNNYNNNNNNNNNNNNNYNNNYNYNNNNYYYNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNYYNNNNNNNNNNNYNNNYNNYNNNNNNNNNNNNNYYNYNNNY", "NNNNNNNNNNYNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNYNNNNNNNNNNNNNNNYNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNYNNNYNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNYYNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNN", "NNNNNYNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNYNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNYYNNNNNNNNNNNNNYNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "YNNNYNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNYNNNYNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNY", "NNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNYNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNYNYNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNYN", "NNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> clientCable = {"NNN", "NNN", "NYN"};
    vector<string> serverCable = {"YN", "YN", "NY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> clientCable = {"NYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNYNNNNNYN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNN", "YNN", "NNN", "YNN", "NNN", "YNN", "NYN", "NYN", "NYN", "NYN", "NNN", "NNN", "NNY", "NNN", "NNN", "NNY", "NNN", "NNN", "NNY", "NNY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> clientCable = {"NYNNYYNYNNNYYYYYYYNYNNYNNNNYNNNNNYNYYYYYYYYYNNNNYY", "NNNYNYYNYYYYNYNYNNYNNNYYNNYYYNNNYNYYYNYYNNYNNNNYNN", "NNNYYNNYYNYYYYYNYYYYYYYYNYNNYYYYNYYYYYNYNYNYYYYYYY", "NNNNYYNYYNYYYNYYYYYYYYYNYNYYNYNYYYYNNYNYYNYYNYYNYY", "NNNNNNYNNNNYYYYNYNNYYNYYNNYYNYYYNNNYYNYYYYNYYNYYNY", "NNNNNNYNYYNNYYNYYYNNYYYNNYNNYYYNYYYYYYYYYYYYYYYYNN", "NNNNNNNNYYNYNYNNYYYYYYYNYYYYYNNNYNYNYNYYYNNYNYNNYY", "NNNNNNNNYYYNYYNNYYNNNYYNYNYNNNYNNYNYNYYNYYNNNNNYNY", "NNNNNNNNNYYNYNYYNYYYNYYYYNNYYYYYYYNNNNNYYYNYYYNNYN", "NNNNNNNNNNNYYYYYNNNNNYNYYYYYYNYNNNYNNNNYNYYYYYNYYY", "NNNNNNNNNNNNNYYNNNYNNYNNYNYYNNNNYYNYNYYYNYYNYYNYYY", "NNNNNNNNNNNNNNYNNYYYYYNYNYYYNYYYNYYYYNNYYNYYYYYNNY", "NNNNNNNNNNNNNYYYYYNYYYNYNYYNNYNYYNYYYNYNYYNNNYYYYY", "NNNNNNNNNNNNNNYYNYYYNYYNNYNNNYYNYYNYNNYYYYYYNNNNNN", "NNNNNNNNNNNNNNNYNYYNNYNYYNYYYYNYYNNYNNYNYNNYYNYYYY", "NNNNNNNNNNNNNNNNYYNNNNNYYYNNNYYYNYYYYYYNNYYYNNYYYY", "NNNNNNNNNNNNNNNNNNYYNYNYYYYYYYYYYYNYYYNYYYNYYNYNNN", "NNNNNNNNNNNNNNNNNNNNYYNYNNYYYYNYYYYYYYNNYYYYNYYNNY", "NNNNNNNNNNNNNNNNNNNYNNYNYYYYNNYNYNYYNNNNYYNYYYNYYY", "NNNNNNNNNNNNNNNNNNNNYYNNYYNNNYYYYYYNYYNNNNNNYYYNYY", "NNNNNNNNNNNNNNNNNNNNNYYYYNYNNNYYYYYYYNYNYYNYYYNYYY", "NNNNNNNNNNNNNNNNNNNNNNYYYYNYYNNNNYNYYYYNNNYYNYYNYY", "NNNNNNNNNNNNNNNNNNNNNNNYYNYYYYYYYYNYYNYYNYYYNYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNYNYYNYYYYNYYYYYNYYNYYYYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYYNYYNYYYYNYYNNYYNYNYYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNNYNNNYYYYYNNNYYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYYYNNNNYNNYYYYYYYNYYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNYYNNYNYNNYYNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYYYNYYYYNYYNYYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYNYNNYNNYNYYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNYYNNNNYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYNYNNNNYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYYYYYYYNYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYNYNNYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYYNYNYYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYNYYYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYNYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYNYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NYYYYYNYYYYNYYYYYNYYYNNNYNNNYNYYYYYYNNYYYYYYYYYNNY", "NNNNNNNNNYYNYNYNYNNYNNNYYNYYYYYNYYYYNNNNYYYNNYNYYY", "NNNYNYYYYNYYYNYYYNYYNYNYYYYNYYNNYNYNNNYYYNNNYYYNYN", "NNNNYNYNYYYYYYYNNYNNNYYYYNYYYYYYYNNYNYNNYYYYNYNYYN", "NNNNNYNNYNYYNYYYNYNYNYYYYNYYYNYNYYYNNYYYNYYNNYNNYN", "NNNNNNNYYYYNYYYYYNYNNYYYYYYYYNNYYYYNYYNNYYNYYYYYNN", "NNNNNNNNYYNYNNNNNYYNYYYYNNYYYYYYNYNYNYYYYYYNNYNYYY", "NNNNNNNNNYNYNYYYNYYYYYYNYYYNYYYNYYYNYYYNYYYNYNNYNN", "NNNNNNNNNNYYYYNYNYYYNYYNYYYYYYYYYNYYYNYYNYNYNNYYNY", "NNNNNNNNNNYYNNYNYNNYNYYYNYNNYNYNYNYYYYNNNYYYYYYYYN", "NNNNNNNNNNNYYYYYYYYNYYYYNYYYYNNNYYYNNYNNNNYNNYYYYY", "NNNNNNNNNNNNYYNNNNNYYNYNYYNNYYYYYYYYYYYYYYYYNYNYNN", "NNNNNNNNNNNNNYNYYYNYYYNYNYNYYNNYNYYYYNNNYYYYYYNYNN", "NNNNNNNNNNNNNNNYNYYNYYYYYYYYNYNYYYYYYYYNNNNYNYNYNN", "NNNNNNNNNNNNNNNYYYNNYYNYYYYNYYNYNYNNNYYNNYYNNYNNNN", "NNNNNNNNNNNNNNNNYYNYYYNNYYNNYYYYYYYYYNYYYYYNYNNNNN", "NNNNNNNNNNNNNNNNNNNYYYYYNNYNNYYYYYYNNYYYNNNYYYYYNY", "NNNNNNNNNNNNNNNNNNNNNYNNNYNYNYNYYYNNYNYNYYYYYNYNYN", "NNNNNNNNNNNNNNNNNNNYYYYNYYNYYNYYNNYNYNYYNYYYYYNYYY", "NNNNNNNNNNNNNNNNNNNNYNNYNYNYYNNYYNYYYNYYYNYNYYNYYN", "NNNNNNNNNNNNNNNNNNNNNYNYYYYNYYYYNNYYNNYYNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNYYYNYNYNNNNNYYYYYNYNYYNYNY", "NNNNNNNNNNNNNNNNNNNNNNNYYYYNNYNNYYYYYNYYNYNYNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNYNNYNYYNYNNYNYYYNNYYNNYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYNYYYNYNNYYYNNYYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYNNYNNYNYNYYYYYYNYYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYNNYYYYNNNNNYYYYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYYYNYYNYNNNYYYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNYYYYYYNNNYNYYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYYYYNYYNNNYNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYYYYNYNYNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYNNYNYNYNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYNYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYNYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYNYYYYNNYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNYNYYNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYNNYYYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYYYNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYNYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNYYNNNNNNNYNNNNNNNNNNNYNYNNNNYNNNYNYYNNNNNYNNNNN", "YYNYYNYNNNNNYNNNNNNNNNNNYYYYNNNYNNNYNYYYNNYNYYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNYYNNNNNYNYNNYYYYNNNYNNNNNNYYNNYNYYNYNY", "YNNYYNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNYNYNNNNNNNNNNNN", "YYNYYNYNNNNNYYNNNNNYNYNNYYYYNNYYNNYYNYYYNNYNNNNYNY", "YYYYYYYYNNNNYYNNNYNYYYNNYYYYYYYYYNYNNYYYNYYNYYYYNN", "YYYYYYYNNNNNYYNNNNNYNYNNYYYYNNNYNNYYNNYYNNYNNYNNNY", "YYYYNYYNYYNNYNNNNYNYNYYNYYYYYYNYYNYYNNYYNYYNYYYYNY", "YYYYYYYYYYYNYYNNNYNYYYYYYYYYYYYYNNYYNYYYNYYNYYYYNY", "NNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYYNNNNNNNYNNNNNNNNNNNYNNNNNNYNNNYNYYNNNYNNNNNNN", "YYYYYYYYYYYYYYNYNYYYYYNYYYYYNYYYYYYNNYYYNYYYYYYYNY", "YYYYYYYYYYNNYNNNNYNYNYNNYYYYYYYYYYYYNYYYNNYNYYNYNY", "NYNYYYNYYYYYYYYYNYYYYYYNYYYNYNYYYYYYYYYYNYYYYYYYNY", "YYYNYYYNNNNNNYNNNNNYNYNNNYYYYNNYNNYYNYYYNNYNNYNYNY", "YYYYYNYYYYYNNYNNNYNYNYYNNYYYYNYYYNYYNYYYNYYNYYYNNN", "YYYYYNYNNNNNYNNNNNNNNNNNYYYYNNNYNNNYNYYYNNYNYYNNNY", "YNNYNYYNNNNNNYNNNNNYNYNNYYYNNNNNNNNYNYYYNNYNYYNYNN", "YYYYYNYNNNNNNYNNNNNNNNNNYYNNNNNYNNYYNYYYNNYNYYNYNY", "YYYYYYYYYYNNNYNNNYNYYYNNYYNYNYYYYNYYNNYYNYNNYYYYNN", "YYYYYYYNYYNNYYNNNYNYYYYNYYYYYYYYYNYYNYYYNYYYYYYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNN", "YNNYYNNNNNNNYNNNNNNNNNNNYNNNNNNYNNNYNYNNNNNNNYNNNN", "YNNYYNNNNNNNNNNNNNNNNNNNYYNNNNNYNNNYNYYYNNNNNNNNNN", "NYNYYNYNNNNNYYNNNNNNNNNNYYYNNNNYNNNYNYYYNNYNNYNYNY", "YYYYYYYNNYNNNYNNNNNYYYNNNYNYNNNYNNYYNYYNNNYNNYNYNY", "YNYYYYYYNYNNYYNNNNNYYYNNYNNYYNNYNNYYNYNYNNYNNYYYNY", "YYYYYYNNNNNNYYNNNYNYNNNNYYYYNNNYNNYYNYYYNNYNYYYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYYNYYNNYNNYYNNNYNYYYNNYYYYYNYYNNYYNYYYNNYNYYYYNY", "YYYYYYYYYYYNYYNNNYYYYYYNYYYYYYYYYNYYNYYYNYYNYYYYNY", "YYYYYNYNNNNNYYNNNNNNNNNNYYYYNNNYNNNYNYNYNNYNNYNYNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "YYYYYYYYYYYYYNYYNYYYYYYYYYYYYNYYYYYYNYYYNYYYYNYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYYNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNYYNNNNNNNNNNY", "YYYYYNYYYYYYYNYYYYYNYYYYYYYYNNYYYYYYYYYYNYYYYYYYYY", "YYYNYYYYNYNNYYNNNNNYYYNNYYYYYNYYNNYYNNYYNNYNYYYYNY", "YNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNYNNYNNNNNNNNNNN", "YYYYNYYYYYYNYNNYNYNYYYNNYYYYYYYYYNYYNYNYNYYNYYYYNY", "YNNYYNNNNNNNYYNNNNNNNNNNYNNNNNNYNNNYNYYNNNNNNNNNNN", "YNNYNNYNNNNNNNNNNNNNNNNNYNNNNNNYNNNYNYYNNNNNNNNNNN", "YYYYNYYNNNNNYNNNNNNYNYNNYYYNNNNYNNYNNYYYNNYNYYNYNN", "YYNYYNYNNNNNNYNNNNNNNNNNYYYNNNNYNNNYNYYNNNYNYYNNNY", "YYNYYYNYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNNNYYYYYNNY", "YNNYYNNNNNNNYNNNNNNNNNNNYNNNNNNYNNNYNYYNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNYYNNNNNNNYNNNNNNNNNNNYNYNNNNYNNNYNYYNNNNNYNNNNN", "YYNYYNYNNNNNYNNNNNNNNNNNYYYYNNNYNNNYNYYYNNYNYYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNNNNNYYNNNNNYNYNNYYYYNNNYNNNNNNYYNNYNYYNYNY", "YNNYYNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNYNYNNNNNNNNNNNN", "YYNYYNYNNNNNYYNNNNNYNYNNYYYYNNYYNNYYNYYYNNYNNNNYNY", "YYYYYYYYNNNNYYNNNYNYYYNNYYYYYYYYYNYNNYYYNYYNYYYYNN", "YYYYYYYNNNNNYYNNNNNYNYNNYYYYNNNYNNYYNNYYNNYNNYNNNY", "YYYYNYYNYYNNYNNNNYNYNYYNYYYYYYNYYNYYNNYYNYYNYYYYNY", "YYYYYYYYYYYNYYNNNYNYYYYYYYYYYYYYNNYYNYYYNYYNYYYYNY", "NNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYYNNNNNNNYNNNNNNNNNNNYNNNNNNYNNNYNYYNNNYNNNNNNN", "YYYYYYYYYYYYYYNYNYYYYYNYYYYYNYYYYYYNNYYYNYYYYYYYNY", "YYYYYYYYYYNNYNNNNYNYNYNNYYYYYYYYYYYYNYYYNNYNYYNYNY", "NYNYYYNYYYYYYYYYNYYYYYYNYYYNYNYYYYYYYYYYNYYYYYYYNY", "YYYNYYYNNNNNNYNNNNNYNYNNNYYYYNNYNNYYNYYYNNYNNYNYNY", "YYYYYNYYYYYNNYNNNYNYNYYNNYYYYNYYYNYYNYYYNYYNYYYNNN", "YYYYYNYNNNNNYNNNNNNNNNNNYYYYNNNYNNNYNYYYNNYNYYNNNY", "YNNYNYYNNNNNNYNNNNNYNYNNYYYNNNNNNNNYNYYYNNYNYYNYNN", "YYYYYNYNNNNNNYNNNNNNNNNNYYNNNNNYNNYYNYYYNNYNYYNYNY", "YYYYYYYYYYNNNYNNNYNYYYNNYYNYNYYYYNYYNNYYNYNNYYYYNN", "YYYYYYYNYYNNYYNNNYNYYYYNYYYYYYYYYNYYNYYYNYYYYYYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNN", "YNNYYNNNNNNNYNNNNNNNNNNNYNNNNNNYNNNYNYNNNNNNNYNNNN", "YNNYYNNNNNNNNNNNNNNNNNNNYYNNNNNYNNNYNYYYNNNNNNNNNN", "NYNYYNYNNNNNYYNNNNNNNNNNYYYNNNNYNNNYNYYYNNYNNYNYNY", "YYYYYYYNNYNNNYNNNNNYYYNNNYNYNNNYNNYYNYYNNNYNNYNYNY", "YNYYYYYYNYNNYYNNNNNYYYNNYNNYYNNYNNYYNYNYNNYNNYYYNY", "YYYYYYNNNNNNYYNNNYNYNNNNYYYYNNNYNNYYNYYYNNYNYYYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYYNYYNNYNNYYNNNYNYYYNNYYYYYNYYNNYYNYYYNNYNYYYYNY", "YYYYYYYYYYYNYYNNNYYYYYYNYYYYYYYYYNYYNYYYNYYNYYYYNY", "YYYYYNYNNNNNYYNNNNNNNNNNYYYYNNNYNNNYNYNYNNYNNYNYNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "YYYYYYYYYYYYYNYYNYYYYYYYYYYYYNYYYYYYNYYYNYYYYNYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYYNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNYYNNNNNNNNNNY", "YYYYYNYYYYYYYNYYYYYNYYYYYYYYNNYYYYYYYYYYNYYYYYYYYY", "YYYNYYYYNYNNYYNNNNNYYYNNYYYYYNYYNNYYNNYYNNYNYYYYNY", "YNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNYNNYNNNNNNNNNNN", "YYYYNYYYYYYNYNNYNYNYYYNNYYYYYYYYYNYYNYNYNYYNYYYYNY", "YNNYYNNNNNNNYYNNNNNNNNNNYNNNNNNYNNNYNYYNNNNNNNNNNN", "YNNYNNYNNNNNNNNNNNNNNNNNYNNNNNNYNNNYNYYNNNNNNNNNNN", "YYYYNYYNNNNNYNNNNNNYNYNNYYYNNNNYNNYNNYYYNNYNYYNYNN", "YYNYYNYNNNNNNYNNNNNNNNNNYYYNNNNYNNNYNYYNNNYNYYNNNY", "YYNYYYNYNYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYNNNYYYYYNNY", "YNNYYNNNNNNNYNNNNNNNNNNNYNNNNNNYNNNYNYYNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> clientCable = {"NN", "NN"};
    vector<string> serverCable = {"Y", "Y"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> clientCable = {"NYYNNYNYYYNYNNNYYNNYYYNYNYNNNYNNYYNNYYNNYYNYNNYYNY", "NNNNYYYNNNYNYYNNNYNNNYNNYYYNYNNNNNYYNNNNNNNYYNYNNN", "NNNYNYNNNYYNYNNNYNNYNYNNYNYYNNNNYYYNYYNNYYNYYYNYYN", "NNNNYNYNYNNYNYNNNYYYNYYYNNNYNYYYYYYNYNYYYNNYNNNNYN", "NNNNNYNYNYYYYYNYNNYYYNYNNYYYYYYNNYNYNYYNYYYNNNNNNN", "NNNNNNYNNYYYYYNYYNYNYNNNNNNYNNYNYYYNNNYNNNNNNNYNYY", "NNNNNNNYYNYNNYNNNYYYYYYYNYNNNYNYNYNYNNNNNNYNYNNYYN", "NNNNNNNNNYYNNYNNYNYYYNNNNYNNNYYYNNYNYYNNYNNYNNYYNY", "NNNNNNNNNNNNYNNNNNNNYYYYYYYNYNNNYNYNYYYNYYYYNNNNNN", "NNNNNNNNNNNYYYNYYNYNNYNNNYNYYYYNYNYYNNNNYYNNYNYNYN", "NNNNNNNNNNNNYNYYNYYYNYNNNNNYYYNNNNYNNNNNYYNYNNYNNY", "NNNNNNNNNNNNYNNYYNNNNNYNYNNNYNNYYNNYNNYNNNYYYYYNNN", "NNNNNNNNNNNNNYNYYNYYNNNYYYYNYYYYYNNNYYNNYNNYYNNNYY", "NNNNNNNNNNNNNNYNYNYNNNYNNNNNNNYNYYYNYNNNNNYYNYYYYY", "NNNNNNNNNNNNNNNNNNNYNYNYYYNNNYNNYNYNYYNNNYNNYYYYNN", "NNNNNNNNNNNNNNNNYNNNNNNYYNYYYYYNYYNNNYNYNYYNNYNYYY", "NNNNNNNNNNNNNNNNNNYYNYYNNNYYYYYYYNYYYYYYYNYNNYNYNY", "NNNNNNNNNNNNNNNNNNYNNNYNYYNNYNNNNYNNYNYYNYNYYYNYNN", "NNNNNNNNNNNNNNNNNNNYYNYYNYYNYYYNYNNNNNNYYYYYYNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNYYNNYYYYYYYNYYNYYNYNNYNYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYYYNYYYNNNNYYYYNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNYNNYNYNNNNYNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNYNNYYNNNYYNNYYNNNNYNNNYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYYNYNYYNYYYNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYYNYYNNNNNYYNYYYYYNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNYYNNYNYNNYNYNYNNYYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNYNYNNYYYYNYNYNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNYNNNYNYYNYYNYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNNYNYYNNYYYNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYYYYNYNNYYNYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYNYYYYNNYYYYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNYYNYNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYNYYYYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYNNYNYYYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNYNYNNNYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNNYYYYYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNYYYNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNYYYYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YNYNNYYYNNNYYYYYNYNYNNNNYYNNNYYYYNYNNNYYYNNYNNNYYN", "YYNNNNYYYYNYNYNYYYNYNYYNYNNYNYNNNNYNYNNNNNNNNYNYYN", "YYNYNNYYYNNNYYYNNYYYYYYNNNNNYYNYYNYYYYNNNYNYNYYYNN", "NNNNNYNNNYNNYNYNNNNYYNNNNYYYYYYYNNNNNYYYYYYNYNNNNN", "YNNYNNYYYNYNNNYNNYYYNYNNYYYYYNYYNNYYYNYNNYYYYNNYNN", "NYYNNYYNNYNNNYYYYNNNNYNYNNYNNYYYNYYNYNYNNNYYYNYYNN", "YYYYNNYNNNNYNYYNNNYYNNNYNYNNNYNNYNNYYNNNNNNNYNYNNY", "NYNYNYNYNNYNNYYNNNNNYYYYYNNNYNYYYYNNYNYYYNNNYNNYYY", "NYNYYNYNNYNNYYYNYYNYNYYNNNYNNYYYYYNNYYYYNYYYYNNYYN", "NNYYYNNYNYYNYYNYNNYYNNYNNYNNNNYNYNNNNNYNNNNYYNNYNN", "NNNYYNNYNNNYNYNNNYNYYNNYNNYNYNYYNYNNYYNNNYNYNNNNYY", "NYYYNYYYNNNYNNNNYNYNNYYNNYNYYNNYYNYYNNYYNNNNYNYNYN", "YNYNNNNYNYYYNNNNYNYYYYYNNYYYNNNYNNNYYNYYNYNNYNYYYN", "YNNNNYYNNYNYYNNNNYNYYNNNYYNYNNNYYNYNYNNYYYNNYYYYNY", "YYNYYNYYYNYNNYNYNYYYNYNNYYNNYYYNYYYNNNYYYYNYYNNNNN", "NNNYNNYYNNYYNNYNNYNYNYNYYYYYNNNNNYNYYNYYYYNYNYYNNY", "NNYNNYYYYNNYYYNYNYNNYYNNYYNNNNYYNYYNNNYNNYYNNNYNYN", "NYNYNYYYYNYNYNNYYYNNYNYYNYYNYNYNNNNNYYNNYYYNYYYNYN", "YNNNYYNNYYNYNNYYNYNYYNNNNNNNNYNNYNNYYNYYYYYYYYYNYN", "NNYNNYYNNNYNYNYNYNYYYNYYNNNNYYYNYYYNYNYYNYNYYYYNNN", "YNYYNYNYNYNNYNNYYNYYYNNYNYNYNYNNYYNNYNYYNYYYYYYYNY", "NYNNNYYNNNYNYYNYYYNYYNNYYYYYYNYNNNYNNNNYNNNNNNYYYN", "YNNYYYYYNYNYYYNYYYNYNNNNYNNYYYNYYNYYYYNNYYYNYNYNYY", "YNNYNNNYNNYNYNYNYNYNYYNYNNNNNYYYYNYYYNNYNNNYYNYNNN", "YYYNYNYYNYNNYNNYYYYYYYNYNYYYNNYYNNYNYYYYNNNYYYYNYN", "NYNYNYNNNNNNYNYNNNNNYYNYNYYYYYYNNYYNNNNNNNYYNYYNYY", "NYYYNNNYNYYYNNYNNYNYYNYYYNYYYYYNYYNNYYYYNNYYYYYYYN", "NNNNNNNNYYYYYNYYNYYYYYYYYYNYNNNNNYNYYNYNNYNNYNYYNN", "NYNNNYNYNYYYYYYYYYYNYNNYYNYYYNYYNYYNNYYNNNYYNNNYNY", "NNNNYYYNYNYYNNYNNYYYNYNNNYNNYNYNNNYNYNNYYYNYYYYNYN", "NYNYNNYNYNYNYYYNNNNYYNYNYYNYYYNYNYNNNYYYYNNNNYNNNN", "NNYNYNYNYYNNNYNNYYNNYNYYNYYYNNYNYYYNNYYYYYNYNNYYNN", "YNNYYYNNNYYYNYYNNYYNYNNYNNNNYYNNYYNNNNNYNNYNNYYYYY", "YNYYYNYYNYNNYYNYNYYNYYNNNNNYYYNYNYYNNNNNYYYNNYNYYY", "NNNNNNYYNNYNYNYYYNYNYYYNNYNNNNNNNYNNYNNNNYYYYYYYNY", "NNNNNNYYYYYNNYNYNYNYNNNNYYNYNYYNNNYYYNNNYYNNNNNNNY", "NYYYYNNNYYNNNYNYNYYYYNYNYNYNNNYYNNYYNYYNYYNNYNYNYN", "NYYYYYYYNNYNYYNYYNNNYNNYNYYYNYNYNNYNYYYYNNNNNYYNYY", "YNYYNYNNNYNNNNNYNNNYNYYYYNNNYYNYNYNNNNYYNYYNNNNYYY", "YNYYYYYNYYNNYNYYYYNYYYNNNNNNYNNNYYNNNNNYNYNYNYYYYN", "NYNYNYYYNYYYNYYNYNNYYYYYNYNYYNNYNNNYYYYYYYYNYYNNNY", "NNYYYNYNYYYYNYYNNYNNNNNNYNYNYYNNNYYYYNYNNYYNNYYNNN", "YYNNNNYNYNNNYYYNYNNNYYYYNYYYNNNYNYYNNNYNYYNYYYNNNY", "NYNNYNYYNYNNNYYNYYNNNNYYNYYNNNYNNYYYYNNNYYYYNNYNNN", "YNNYNYYYYNYYYYYNNYNYYYNNYYYNNNYNNNNNNYNYNNYNYNNYNY", "YNNNYNYNYNNYNNNYNNYYYYYNYYYYYNYNYYYYYNNYNYNYYNYNYN", "YNYNYYYNYYNNNYYNYNNYNNYNNYYNYNYYNYNYNNNNYYYNNYYNYN", "NNYYNYNNYYYNYYYYNNNNYYNYNNYYNNNNNNNNNNYYNNNYNNNNNY", "YNNYYNYYNNNNNNYYYNYYYYYYNNNNNNNNYYYNYYYYNYYYYYYYYY", "YNYYYNYNNYNYNYNNYYNYYNNYYYNNYNNNYYYNNNYYNNYNYYYNNY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> clientCable = {"NNNN", "YNNN", "YNNN", "YNNN"};
    vector<string> serverCable = {"N", "Y", "Y", "Y"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> clientCable = {"NNYYNNNNYYYYNYNNNNNYYYNNYNYYNYNNNNYNNYNNNNNYYYNNNN", "NNYNNYNYNYYNNNNYNYYYNNYYYNYNYNNNYYNNYNYYNYNYYNNNNN", "NNNNYNNNNNNNYNNYYNNNYYYNNYYNNYYYNYNYYNNNNYNNYYYYNN", "NNNNNNYNNNNNNYNNYNYYYYYYNYNYYNYYNNYNNYNYNNNYYYYYNN", "NNNNNNNYNNNNNYYYYNYNYNYYNNNYYYYNNNNNYYNNYNYNYYNNNN", "NNNNNNYYYNYNYYYYYYNYYYNYYYNNNYNNNYNNNYYYYNNNNNNNNN", "NNNNNNNYYNYNYNNYYYNYNYYNYYNNNNNNYNNNNNNNYNNYYYNYNN", "NNNNNNNNYNNNYYYYNYNYYYYNNNNYNYNYYNYNNYNNYYNYYNNNNN", "NNNNNNNNNNNYNNYYNYNNNNYYNNYNNYYYYYYYNNYNYNYNNNYNNN", "NNNNNNNNNNNNNYNYNYNNNNYNNNYNYNNNNYNNNYYNNNNNYNNYNN", "NNNNNNNNNNNYYYYYNYYNNNNYYNNNNNYNNNNYYNNNNYYNYNNYNN", "NNNNNNNNNNNNNNNNNNYYNNYNNNYNYYNYNNYNYNNNYYNNNYYYNN", "NNNNNNNNNNNNNYYYNYNYNYYNNYYYNYNNNNNNYNNYNYYNNYYYNN", "NNNNNNNNNNNNNNNYNYYYYYNNNYYNYNYNYYYNNYNNNYYNNYYNNN", "NNNNNNNNNNNNNNNNNNYNNNYYNNNNNNYNNNNNNNNYNYNNNNYNNN", "NNNNNNNNNNNNNNNNYNNNYYYYNYNYYNNYYNNNNNNYYNYNYYNYNN", "NNNNNNNNNNNNNNNNNYNYYNNNYNNYYYNNYNYYNYNYYYNNNNYNNN", "NNNNNNNNNNNNNNNNNNYYYYNNYNYYYNYNYYYNNNNYNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNYYNYNNNYNNNNYYNYNNYNYNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNYYYNYNYNNNYYNNYYYYNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNYYNYNYYNNYNYYNNYNYNNNYNYYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYNNYYYNNNNYNYNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNYNNYYYNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNYYYNYNNYNNYYYNNNNYNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYYNNYNNYYNNYNYNNYNYNYYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYNYYNNNNNNNYYNYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNYNNYNYYNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYNNNNNNNYYYYYYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYYNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYNYNYNNNNYNNYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYNYNYNYNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYYNYYNNYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYNYNYYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNYYNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNYNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYNYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NYNNNNNNYYYNNNNNNNNYNNNYNYYNNNNNNNNNYNNNNNNNNNNYNN", "NNNNNNYYNNNNNNYNYNNYYNNYNNNNNNYNNYNYYNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNYYNNNNNNYNYYNNNNNNNNNYYNNNNYNNN", "NNNNNNNNNNYNNYNNNNYNNYNNNNNYNYNNNNYNYYNYNNYNNNNNNN", "NNNYNNNNYNNNNYYYNNNNNYYNNYNNNYNNNNNYYYNNNYYYNYYNNN", "YNYYYNNNYNNNNNNNYNNYNNNNNNNNNYNNYNYNNYNYNYNYNNNYNN", "NNNNNNNNNNNNYNNYNNNNNYYNNNYYYYNNNYYYNNNNNNNYNYNNNN", "NNNNYYNNYNNNNNNNYNNYYNNNNNNNNNNNNNYNYYNYNNNNNYNYNN", "NNNNYNNNYNYNNNNNNYNNNYNYNNNNNNNNYYNNNNNYNNYNNNYYNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNYNNNNNNNNYYNNYNNNNN", "YNNYNNNNNNNNNYNNNNNNNYYYNNYNNNYYNNNYYNYNNNNNNYNNNN", "YYNNYYNNNNYNNYNNYNNNNNNYNYNNYNNNYNNNNYNNNYNNNNNNNN", "NNYNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNYYYYNNNYYNNYYNNN", "NNNYNNNNYNNNNNNNYNNNNNNNNYYNNNNNYNYNNNNNNNNYNNNYNN", "NNNNNYNNNYNYNYNNNNNNNNNNNNNNYNNNYNYYNYNNNYNNNNNNNN", "NNNNNNNNNNYNNNNYYNYNYNNNNNNNYYNYNNNNNYNYYNNYNYYNNN", "NNYNNNNYNNNYNYYNYNNNNNNYYNNYNYNNNNYNYNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNYYYNNNNNNYNNNNNN", "YYNNNNNNNNNYNYNNYNNNNYNNNNNNNNYNYYNNNNNNNNYNYYNNNN", "NNNNYNNNYNNYNNNNNNNNNNNNNYYNNNNNNNNYYYNNNYYNNNNNNN", "NNNYYNNNNNNNNNNNYYYNNNYNNNNNNNNNNYYNNNNNNNYNNNNNNN", "NNNYNNNYNNNNNNYNNYNYNYNNNNNNNYNYNYYNNNNNNNYNNYNNNN", "NYNNNNNYNNYNYNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNYYNNNNN", "NNNYYNNNNNNNYNYNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNYNNYNYNNNYYNNNYNN", "NNNNNYNYYNNNYYYNNNNNNNNNNNNNYNNNNNNNNYNNNNYNYNNNNN", "NNNNNNNYNYYNNYNNNNNYYNNNNYNYNYNNNNYNYNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNYNNYNNNNNNNNNNYNNNNNNNNNNNYNN", "YYNNYNNNNNNNNYNNNNNNNNNYNYNNYNYNNYYNNNNNNNNYNNNNNN", "NNNNNYNNNNNYYNNNYNNNNNNNNNYYNNNNYYYYNNNYNYNNYNNYNN", "NNNYNNNYNNNNNNNYYNYYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNYNYNYNYYNNYNNNNNYYNNYNNYNYNNNNNNNNNNNYNNNNN", "YYNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNYNNNNNYNNYYYNNNN", "NNNNNNNNYNYNNNNYNNNNNYNNYNNNNNNNYYNNYYNNNYNNNYYYNN", "YNNYNNYYNNNNNNNNNNNYYNNNNYNNNNNNYNNNNNNNNYNNNNNNNN", "NYYNYNNYNNNNYNNNNNNNNYNYYNNYNNYNNNNNYNNNNNNNNNNNNN", "NNNNYNNNNYNNNYYYNNYNYNNNYNYNYNNNNNNNNNNNNNNNNNNYNN", "NNNNYYNYYNNYNYNNYNNNYYNNYNNNNNNNYNNNNNNYNNNNNNYNNN", "NNNNNNNNNNNNNNNNNYNNYNNNYNNNNYNNNNNNYNYYNNNNNNYNNN", "NNNNNNNNYNNNNNNNNNYNYNNNNNNNNNYNNNNNNNYNNNNYNNNNNN", "NNYNNNYNNNNYNNYYNNNYNNYYNNYNNNNNNNNYYNNNNNNNNNNNNN", "NNNNYNNNYNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNYYNN", "NNNYYNNNNNYYNNNNNNNNNNNYNYNYNNNNNNNYYYYNNNNNNNNNNN", "NNNNYYNNNNNNNYYNNYNNNNNYNNNNNNNYYNNNNNNNYNNNNNYNNN", "NNNNNNYNNNNNNNNNNNNNNNNNYYNNNNNYNNNNNNNYNNNNNNNNNN", "NNYYNNNNNNYNNNNYNNYYYNNYNNNNNNNNNNNYNYNNNNNYYYNNNN", "YYNNYNNNYYNNNNNNYNNNYNNNNNNNNNNNYYNNYNYNNYNNYNYNNN", "NNYNNYNNYYNNYNNNYNNNNNNNNYNNNYNNNYNNNNYNNNNYNNNNNN", "NNNNNNYYNYNNNNYNNNNYNNNNNYYNNNNYNYNNYNNNNYNNNNNNNN", "NNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNYNYNNNNYYNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> clientCable = {"N"};
    vector<string> serverCable = {"YYYYYYYYYYYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> clientCable = {"NYN", "NNY", "NNN"};
    vector<string> serverCable = {"Y", "N", "Y"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> clientCable = {"NYYNNYNNNNNYYYYYYYNYNYNNYNNYNNYYNYNYNYYYNYYNYYNYYY", "NNNYNNYYYYYYNNYNNNNNNNNNYNYNNNYYNYYNNNNNNYNNYNYYNN", "NNNNYYYYYNNNYNYNYYNNNYYYYNNNYNYYYNYNNNYNNNYYYYYYYY", "NNNNYYYNYNNNNNYNNYNYNYNYNYYYNNYNNNNYNYNNYNYYNNNNYY", "NNNNNNYNYYYNYYNYNYYNYYNNYNNNYYNYYYYYYNYNNNNNNNYYNY", "NNNNNNYNNNNNYNYNYYNNYNNNYNNNNYYYNNNYNNYYYYNNYYNNNY", "NNNNNNNYYNYYYYNYNYNNYYNNYNYYNYNNYYNYYNYNNYYYYNYYYY", "NNNNNNNNNYYYYNNYNNYNNYNYNYYYYYNNNYYNYNNNYNNNYYYNYN", "NNNNNNNNNNYNYYNNNYYNYNNNNYYNYNYYNNNNNNYYNYYNYYNYNN", "NNNNNNNNNNYNNYYNYYYYNYNYYYNYYYYNNNNNNYNYNNNYYYNNYY", "NNNNNNNNNNNNNNYNYYNNNNYNNYYNNNYNNYNNNYNYNYYNNYNNYY", "NNNNNNNNNNNNYNYYYNYNNNYNYYYYNNNNNNYYYYYNNNNYNYNYNY", "NNNNNNNNNNNNNNNYYYNNYYNYNYNYYYNNNYNYNYNYNNNYYNNNYN", "NNNNNNNNNNNNNNYYYYYNNYNYNYYYYYYYNNYYNNNNNYYNYYYYYY", "NNNNNNNNNNNNNNNNYNYNNYYYYYYNNNYYNNYYYNYNNYNYNNYNYY", "NNNNNNNNNNNNNNNNYYNNYYNNNYNYNYYNNNYNNYYYNNYNYYNYYN", "NNNNNNNNNNNNNNNNNYNNNYYNYNYYYYNNYYNYYYYYNYNYYYYYNN", "NNNNNNNNNNNNNNNNNNYNYNNYNYNNNYYNYYYNYNYYNNNYYYNNNN", "NNNNNNNNNNNNNNNNNNNYYYYNNYNNYNYYYNNNYNYYYNYNYNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNYNYYYYYNYYYNYYNYYYYYYNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYYNNNYNYYNYNYYNNYYYNNYNNY", "NNNNNNNNNNNNNNNNNNNNNNYYYYNNYNNYYNNNNNNYYNYNNYYYNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYYYNYYYYNNNNNYYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNYNYNNNYYYNNNNNNYYNYNYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNYYYNYNYYYYYNNYYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNYYYYYYYNNYNYYYYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYYYYYNNYNYNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYNNNNYYNYYYYYNYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNYYNYNYYNNNNNYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYYNYNYYNYYNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNYNNNYNNNYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNYNYYNYNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYYYNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYYNYNYNYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNNNYNYYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYNYYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNYNYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYNYYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YNNNYNYYYYYNNYNYNNYNNNYNYNYYNNNYNYNNNYNYN", "NNYYYNYNYNYNNNNYNNNYNNYYYNYNNYNYNYNYYNYYN", "YNYNYYYYNNYNYNNYYYYYYNNNNYNYYNNNYNYYYYYYY", "NNNNNYNNYNYNYNNNNNNYNYYYNYYNNNNYYNYNYYYYN", "NYNNNNNYNNYNYYNNNNYNNNNYNYNNYYYYYYNNNYYNY", "YNNNYYNNYNNYYYYNNYNYNNNYYYNYYNNYNYYYYYNYN", "NNNNYNYYYNNNNYNYYNYNNNYYYNNYYNNNYNYNNNYNY", "NNNNYNNYNNYNYYNYYYNNNNYNYNYYYYNNYYNYYNNYY", "NNYYYNNYNNNYYYNNYYNNYYYYYNNNYYNNYYNNYYYYY", "NNNNYYYNYYNYYYNNYNNYNNNYYYYYYNYYNNNYYNNNY", "NNNYYNYYYNYYNNYNYYYYNNYNNYNNYNYYNYNYNNNNY", "YYYYNYYYYNNYYYYNYYNYYNNYYNYYNNYNYYNYNNNNY", "NNYNNYNYNYNYYNNNNNYNNYYNYNNYYYYNNYYYNNYNY", "NYNYNYYYYNYNNNYNNYNNYYYYYNYYYYYNYYYNNYYYN", "YNNNYYNNNYYNYNYNNYYYYYYNYYNNYNNYYYNYNNNYN", "YNYNNNYNNNNNNYNNNYYNYNNYYNYNYNYNYYNNYNYNY", "NNNNNYNNNYYYYYNYYYYYYNYYYYNYYNNNNYYNNYNYY", "NYNNYNYNNNYYYNYYYNYNNYYNYNYYYNNYYYYYYNYYN", "YYNNNNYNNYYNNYYYNYYYYYYYYNYYNNYYYYNYNNNNY", "YNNNYNNYYNNYNYYNNNYYYNNYNYYYYNNNYNNNYYNYN", "NNYNYYNNYYYYNYNYNYYYYNYNYYNNNYYNNYNNYYYNN", "NYYYNYYYYYYYNYYYNNYYYYYNNNNYYNYYYNYYNYNYY", "NYYYNNNNYNNYNNYYNYNYNNNNYYYYYYNYYNYYYNYNY", "NNNYNYYNYYNYYNYYNYNYNYYYYNYNNNYYYYNYNYNYY", "NNYNYNNYNYNNNNYYNYNNYNNNYYYYYNYNNYYYNNYNY", "NYNNYNNNYNYYNYNYYYYNNYNYYYNNYNNNNYNYNYNNN", "NYNNYYYYNNNNNNYYNNYYNNYYYYNYYYNNYYNNNNYYN", "YNNYYNYYNYYYNNYNYYNNYYYYNYNYNYYYYNYYYNYYY", "NNYYYYYYYNYNNNYNYNNYNNNNYYNYYNYNNNNNYYYNN", "NYYYNYNYYNYNYYYYNYNNYNYNYYYYYYNYNYYYYNYNY", "YNYNNYNYNNYNYNYNNYYNYNYNNYNYYYNNNYNYYNNNN", "NYYNYYYYYNNNYYNNYNNYNNYNNYNYYYNYNYYNYYNYY", "NNYYNNNNYNYYNYNYNYNYNYNYYNYYYYNYYNYYNYNNY", "NNYNNYYYNYNNYNNYNYNYYYNYNYNNNYNNYYYNNYYNY", "NYYYYYNYYNYYYYNYYNNYYYNYNNNNYYNNNYNYNYYNN", "YYNYYYYNNNNYYYNNNNNNYNYNNYNYYNNNNNYNNNYNN", "NNNYYNNYNNYNNNYNNNYYNYYNNYNNNYNYNYYYYNYNY", "NYYYNNNYYNYYYNYNYNYNYNNNYYNYYNNYYYYYNYYNN", "YNYNYNYNYYNNYYNYNYYYNYNNNYNNYNYYYYNYYNYYN", "NNNNYNYYNYNNNNYYYNNNYYNYYNYYNNNYNNYNNNNYN", "YNNNYNYYYYYYNNNYYNNNNYNYNNNYYNYNYNYYYYNNY", "YNYYYNYYNYNYYYYYYNYYYNNYYYNNYYYYNNYYYNYYY", "YYNNNYNNYNNNYYNNNNYYYYYYNNNYNNYNYNNNNNYNY", "YNYYYNNYYNYYNNNNNNYYYNYYNYNYYYYNYYNYYYNYN", "NYNNYYYYNNYNYNNYNYNNNNYNYNNNYYNYYYYYNYYNY", "NYNNNYNYYYNNYYYNNNNNNNYNYYYYNYYYYNNYYYYNY", "NYYNNYYNNNNNNYYNNNNYYNYNNNNNYYYNNYYNNNNNY", "YYYNYNYYNYNNYYYNYYYNYNYNNYYNYYNNYYYYNNNNY", "YYYYYYNNYNYYNNNYYNYNNNNNYNYNYYYYNYYYYNYYN", "NYNYNNNNYYNYYNNYYNNNYYYNNYNYNYNNYYNNYYYYN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYYYNYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNYYNYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNNNNNYNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNYNYYNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNNYNYNYNYNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNYNYNYNYNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNYNYYNNYYYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNNYNYYYYNYYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNYNYNNNYYNYYNYYYYNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNYNNNNYNYNNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYYYYYYYYYNYYNNYNYYNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYNYYYNNYNNNNYYNNYYYNNNNNNNNNNNNNNNNNNNNNNN", "NYYYNNNYYYYNYYNNYYNNYNNNNNNNNNNNNNNNNNNNNNNNN", "YYNYYNYNNYNNYNNNNYYYNNNYNNNNNNNNNNNNNNNNNNNNN", "YYYYYNYNYNYNNNNNNNNNNNNNYYNNNNNNNNNNNNNNNNNNN", "NYYNYYYYNYNNYYNYYYNNNYNYNYYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYYNYNYYNNNYNNNNNNNNNNNNNNNNN", "NNYYNYNNNYNYNNNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNN", "NYNYYYYYNYNNNNYNYNNYNYNNYNNNNYNNNNNNNNNNNNNNN", "NNYYNYNNNNYNYNNNNYYNNYNNYYYYNNYNNNNNNNNNNNNNN", "NNYNNYNNNNNYYNNNNNNYYNNNNYYYYYYNNNNNNNNNNNNNN", "NYYNNNNNNNYNNYYYYNYNNNNYYYNNNYYNNNNNNNNNNNNNN", "YYNNYNNYNYYNNNNYYYNYNYNNYYYNNNNYNYNNNNNNNNNNN", "NYYNNYNYYNYNNYYYNYNYNNNNYYNNNYNYNNNNNNNNNNNNN", "YYNYNNNNNYNYYNYYYYYYYYYYYNNNYYNNYYNNNNNNNNNNN", "YNNYNNYYYNNNNNYNNYNYNNNNYNNNNNYYNYYNNNNNNNNNN", "NYNNNYNNNYNNNYNNNYNYYNNYYYNYYNNNNNNYYNNNNNNNN", "NNNNNNNNNNNNNNYNYNYYYNYNNNYNNNYYYYNYYNNNNNNNN", "YNNNNNYNNNNNYYYNNYYYNNNNYYYNYNNNYNYNNYNYNNNNN", "NYYNNNYYYNYNNYNYNYNNYNNYNYYNNNYNNNNYNNNNYNNNN", "YNYYNNYNNNYNNNYYNNYNNYNNNYYYNNYNNNYYNYYNNNNNN", "NYYYYYNNNNYNNNNYNNYNNNYNNYNYNNNNYNNYYYYNNNNNN", "NNYYNNYNNNNNNYNNYNNNNNYYNNYYYNYNYNYNYYNNYNNYN"};
    vector<string> serverCable = {"NYNYYNNNNNNYNNNNNNNNNNNNYNYNNNNNNNNNYYYNNNNNNNNNNY", "NNNNNNNNNNNNNYYNNNNNNNYNYNNNNNYNNNNNYYYNNNYYNNNNNY", "NYYYNYNYNNNNNYNNNNYNNNYNYNYNNNNNNNNNNNNNNNNNNNNYNY", "NNNNNNNNNNYNYNNNNYNNNNNNNNNNNNNYNYNNNNNNNNYNNNNYYY", "NNYNNNNNNYYYNNNNNNNYNNNYNNYYNNNYNNNNNNNNYYNNYNNNNN", "YNNNNNNNNNNNNYNNYNNYNNYYNNNYNNNNNYNNNNNNYNNNNYNNYY", "NNNNNNNNNNNNNNNNYNNNNNYNNYNNYNNNYNNNNNNNNYNNNNNNNN", "NNNNNYNNNNNNNNNNNYNNNNNNNNYNYYNNNNNNYYNNYNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNNNNYNYYNNNNNNNNNN", "NNNNYYNYNNNNNNNYNYNNNYNNYNNNNNNNNNNYNNNYNNNNYYNNNN", "NNYNNNNNYNNNNNNNNNNNYNNNNYNNNNNYYNNNNNYNNNYNNNNNYY", "NNNNNNYYNYNNYNNNNYNNNNNYNYYNNNNNYNNNNYYNNNNYNYNNYN", "YNYNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNYNNNNNYNNNN", "YYYNYNYYYNYNNNNNNNNNNNYYNNNNNNNYNNNYNNYNYNNNYNYNYN", "NNNNNNNNNNNYNNYNNNNNYNYNNNNNNNNNNNNNYYYNYNYNNNNYNN", "NNNNNNNYNNNYYNNNNYNNNNNNNNYNYNNNNNYNNNNNNYYNNNNNNN", "NNNNNNNNNNNYNYNNNNYNNNYNNYNNNYNNYNNNNNNNNNYNNNNNYN", "NNNNNNNYNYNNYNNNNNYNNNNNNNNNNNNNNNYNNNYNNYNNNNNNNN", "NNYNNNNNNYNNNNYNNNNNNNNYYNNYYNNNNNNNYNNNNNNNNNNNYN", "NNNYNYNNNNYNNNNYNNNYYNYNNNNNYNNNNYNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNYNYNNNNNNNNYYYYNNNNYNNYNNNYYNNNNNNNNN", "NNYNNYNNNNNYNNNNNNNYNNNYNYNNNNNNNYNYNNNNNNNNYNNNYN", "NNNNNNYYYNNNYNNNNNNNNYNNNNNNNNNNYNNNYNNNYNYNYNYNNY", "NYNNNNYNNNYNYNYNNNNYYNNNNNNYNNNYNNNNNNNNYNYNNNNNYN", "NNNYNNNNNNYNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNN", "YNNNNYYNYNYNYNNYNNNNNNYNNNNNYNNYYNYNNNNNNNNNNNNNYN", "YNNNYNYYNNNNNNNNNNYNYNYNNYNNNNNNNYNNYNYNNNNNNNNNYN", "NYNNNNNYNYNNYNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNYNYNNNN", "NNNYNNNYNYNYNNNNNYNNNNNNNNNNYNNNNYNNNNNNNNNYNNYNYN", "NNNNYYYYNNNNNNNNNNNNNNYNYNYNNNNNNNNNNYNNNNYNNNNYNN", "NNYNNNNNNYYYYNNNNNNNNNNYYNNNNNNNNNNNNYNNNNNYNNYNNN", "YNNNNNNNNNNNYNNYYNNNNNNNNYNNNNNNNNNYNNNNNNYNNNNNNN", "NNYYNNNNNNNNNNNNYYNNYNNNNNNNNNNNNYNNYNYNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNYNNNNNNNNNNNNNNN", "NNNNNNYNNNNYYYNNNNYNNNYNNNNNYNYYNNNYNNNNNYNNNNNYNN", "NYNYYYNNNYYNNYNNNNNNNNNNNNNNYNYNNNNNYNNNNNNNYYNNYN", "YNNNYYNNYYYNNNNNNYNNNNNNNNNNYNNNNYYNNNNNNNYNNNNNNN", "NNNNNYNNNNNNNNNYNNNNNNNNNYNNNNNNNYYNNYNYNNNYNYYYNN", "NNNNNNNYNNNNNNYNNNNNNNYYNNNNNNYNNNNNNNNNNNNNNNNNNY", "NYYNYNYNNNNNNNNNYNNYNNNYNNNNNNNYNYNNNNNNNYNNYNNNNY", "NNNNNNYNNNNNNYNNNNNYNNNYNNNNNNNNNNNNNNNNNNNNNNYNNN", "YNNYNNNYNNNNNYYYNNNYNYNNNNNNNYYNNNNYNNNNYNNNNYNYYN", "YNNNYNNNNNNNNYNNNYNNNNNNNYNNYNNYYNNYNYNNNNNYNNNNNN", "NNYNYNNNNNNNNNNNNYYNNNNYYNNYNYNNNNYNNNNNNYNYNNNYNY", "YYNYNNNNNYYNNNNYNYNYYNNNYYNNNNYNYYNNNNNNNYNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> clientCable = {"NYY", "NNN", "NNN"};
    vector<string> serverCable = {"Y", "Y", "Y"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> clientCable = {"NNNYNN", "YNNYNY", "NNNNYY", "NNNNNN", "NNNYNN", "NNNNNN"};
    vector<string> serverCable = {"NNN", "YNY", "YYY", "YNN", "YYN", "YYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> clientCable = {"N"};
    vector<string> serverCable = {"YYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> clientCable = {"NY", "NN"};
    vector<string> serverCable = {"YN", "NY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> clientCable = {"N"};
    vector<string> serverCable = {"NY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> clientCable = {"NYNNNNNNNNNYYNNNNYYYYNYNYYNYYNYYYYNYYNNYNNNYYNNYNY", "NNNYYYNYYNYNYNYYNYNYYNYNYNYYYNYYYYNYYYYNNNYYYYYNNY", "NNNNNYNYNYYYNYYNYYYNYYYYNYNNYYNYYYYNNYYNYNNNNYNYYY", "NNNNNNYNNYNYNYNYNNNNNNYNNYYNYNNYYYNNYYYYNYYNYYYNYN", "NNNNNNYNYYNNYYNYNYNYNYYYYNNNNYYNNYYYNYYYYYYNYNYNYN", "NNNNNNNNNYYNNNYYYYYYNNNYNYNNNYYYNYNYYNNYNNYYNYYNYY", "NNNNNNNNYNNYNYYNYYNNNNNNYNNYYYNNNNNYNYNNYYYNYNYYNY", "NNNNNNNNYYYNYYYNNYYYNNNYNNYYNYYYYYYNYNYYNYYYYYYYYN", "NNNNNNNNNYYYYYYYYNNYNYNYYNNYYNYYYNYNNYYYYYNYYNYNYN", "NNNNNNNNNNYNYNNYYNYYYYNYYNYNYNNNNYYYNYYNYYNNYNYYNN", "NNNNNNNNNNNYYNYYNYNNYYNNNYYYNNYYYNYYYNYYNYYYNNNNNY", "NNNNNNNNNNNNYYNNYYNYYYYNYYNYYYNNYYNNNNNNYNNYYNNNYY", "NNNNNNNNNNNNNYYYYNYYNYYYNNNNYYNYYYNNYNYYNNNNYYYYNN", "NNNNNNNNNNNNNNNYNNNNYNNNYNNNNYNNNYNNYNYNYNYYYNNYYY", "NNNNNNNNNNNNNNNNYYYNYNNNYYYYNNYYYYNYYNYYYYYYYYNYYY", "NNNNNNNNNNNNNNNNYNNNYYNYYYNNYYYYYYYYYYYNNNYYNYNNYY", "NNNNNNNNNNNNNNNNNYNYNYNYYYYYYYYYNYNYNYYNNYNNNYNYYY", "NNNNNNNNNNNNNNNNNNYNNYNNNNYYYNNNNNNYNYNNYYYNYYYNNY", "NNNNNNNNNNNNNNNNNNNYYNYNYNYYNNNYNNYYYYYNYYNNYYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNYNNYYYNNYNYYNNYNNYYYNNYYNYY", "NNNNNNNNNNNNNNNNNNNNNNYYNYNYNNNYNNNYNNYYYYNYNYYNYN", "NNNNNNNNNNNNNNNNNNNNNNYYYNYYYYNNNNYNNYNYNYYNNYYNYN", "NNNNNNNNNNNNNNNNNNNNNNNYYYYNYNNYNYYNNNYNYNYNNYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNYNYNNNYNNNNNYNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNYYNYNYYNNYNNNYYNYYYNYYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYNYNNYYYYNYNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYNYYYYYYYYYYNYYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYYNNNYNNNYYYYYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYNNNNYYNYNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYNNNYNYNYYYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYYNYYYYNYYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYNYYYYYNNYNYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNYYYNYNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYYNYNNYYYNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNYNYNYNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNYNYYYYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYNYYNNYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYYNYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNYYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNYNNNNYNNYNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "YNNNNNNNNNNNNNNNNYNNNYNNNNNNNN", "NNYNNNNNNNNNNNNNNNYNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNYNNNNNNNYNNNNNNYNNNYNNN", "NYNNNNNNNNNNNNNNNNNNNNNYNNNNYN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNYNNNNNN", "NNNNNNYNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNYNNYNNNNNN", "NNNNYNNNNNNNNNNNNNNYNNNNNYNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNYNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNYYNNNNNNNNNYNNNYNNNN", "NYNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "YNNNNNNNNNNNNYNNNNYNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNYNNYNNNNNNN", "YNNNNNNYNNNNNNNNNNNNNNYNNNNYNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNYNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYYNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> clientCable = {"N"};
    vector<string> serverCable = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> clientCable = {"NNNNNYNNYNNYNNYNNYYNYNNNNNNNNNNNYYNYNNNNNNNNYNNNNN", "NNNNNNNYNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNYNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNN", "NNNYNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNYN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNYNNNNNNNNYNNNNNNYNNNNNNNNNYNYNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYYNNNYNYNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNY", "NNNNYNNNNNNYYNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNYNNYNN", "NYNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYYNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNYNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNYNNNNNNNYNNNNYNNYNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNYNNYNNYNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNYNNNNYNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNYNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNY", "NNNYNNNYNNNYNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNYNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNN", "NNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNN", "NNNYNYNNNNYNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNYYYNNN", "NNNNNNNNNNYNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNYNNNNNYNNNNYNYNNNNNNNN", "NNYYNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNYYNYNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> clientCable = {"NN", "NN"};
    vector<string> serverCable = {"YYYYYYY", "YYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> clientCable = {"NNNNNNNNYYNYNNNNYYNNNNNNYNNNNN", "NNNNNNNNNNNYNNNNNNNNNYNNYNYYNN", "NNNYNNNNNNYNNNNNYNNNYNNNNYNNNN", "NNNNNYNNYNNNNNYNNYNNNNNNNNNNNN", "NNNNNNNNNNYNNYNYNNYNNYNNYNNNYY", "NNNNNNNNYNNYYNNNYYNNNNNNNNNNNY", "NNNNNNNNNNNYNNNNNYNNYYNYNNNYNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNYNN", "NNNNNNNNNNNNYYNNNNYYNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNYNYNYYYNNNNN", "NNNNNNNNNNNNNNYNYNNNYNNNNNYNNY", "NNNNNNNNNNNNNNNNNYYNNNYNNNNYYN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNYNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNYNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNYNYNNYNNNYN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYYYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"NNNNNNNNNNNNNNNNYNYNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNYYNN", "NNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNYNYNNNNNNNYNNNNY", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNYYNNYNNNNNNYYYNNNNNNNNNNNYNNNNNNNNNNYN", "NNNNNNYNYNNYNNNNNNNNNNYNNNYNNYNNNNNNNNNN", "NNNNNNYNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNYNNYNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYNNNNNYN", "NNNNNNYNYNNNNNNNNNYNNYNNNNNYNNNNNNNNNNYN", "NNNNYNNYYNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNYNNNN", "NNNNNNNNYNNYYNNNNNYNNNNNNNYNNNNNYNNNNNNN", "NNNNNNNNNNNNNNYNNYYNNNNNYNYNNYNNNYNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNYNNNYNNNYNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNYNNNNNNNNYNNNYNNNNNNNN", "NYNNNYNNNNNNNNYNYNNNNYNYNNNNNNNNNYNNNNNN", "NYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNYNNYNNNNNNNNNYNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNYYNNNNNYNYNN", "NNNNNNNNNNNYNNNNYNNNNNNNYNNNNNNNNYNNNNNN", "NYNNNYNNNNNNNNNNNNNNNNNNYNYNNNNNNNYYNNNN", "NNNNNNNNNNNNNNNNNNNNNNYYNNNYNNNNNNNNNNNY", "YYNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NYNYNNNNNNNNNNNNNYNYNNYNNNNYNNNNNNYNNYNN", "NNYNNNNNNNNNNYNNNNNYNNNNNNNNNYNNNNNNNNNY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> clientCable = {"NNN", "NNN", "NNN"};
    vector<string> serverCable = {"Y", "Y", "Y"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> clientCable = {"NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN"};
    vector<string> serverCable = {"YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> clientCable = {"NYY", "NNN", "NNN"};
    vector<string> serverCable = {"N", "Y", "Y"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> clientCable = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> clientCable = {"NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> clientCable = {"NNYY", "NNYY", "NNNN", "NNNN"};
    vector<string> serverCable = {"NN", "NN", "YY", "YY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> clientCable = {"NNY", "NNY", "NNN"};
    vector<string> serverCable = {"Y", "Y", "Y"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> clientCable = {"NYNYNNYYNYNNYNYNYNYYNNNNNNNNYYYNYNNYYNNNNNYYYYNYYN", "NNYYNYYNYYYNYNYNNNNNNNNNNYYNYNNNYYNNYYNNNNNNNYNNYN", "NNNYNNNYNNNNYNNNYYNNNYYYYYYYNYNYYNNNNNNNYNYNNYNYYN", "NNNNYNYYYNNYNNNNYNYNNNNNNNNYYYNYNYYNNYNNYNYNNNNNNN", "NNNNNYNYNNNNNYNYNNNNNNYYNYNYNNNNYYNYNNNNNYYYNNYNYN", "NNNNNNYYNYYNNYNNNNNNNYYYNNYYNYNYNNNYNNNYYNYNYNNNNY", "NNNNNNNYNNNNNYYNYYNNNYYYYNNNNNNYNNNNNYYNYNNYNNNYNN", "NNNNNNNNYYNNNNYYYNYYNYNNYYNNNNYNYNYYNYNNNNYNNNNYNY", "NNNNNNNNNYNNNYYYYYYYNNYNNNYNNNNNNNYYNYNNNNYYYNNYYN", "NNNNNNNNNNYYNNYNNNNYYNYYNYYNYNNNYYYNNNNNNYNNNYNNYN", "NNNNNNNNNNNYYNNYNNYYNYNNNYYYNYNYNYYNNNYNNNYNYNYYNN", "NNNNNNNNNNNNYNNYNNNNNYNNNYYNNNNYNNYYNNNNNNNYNYNYNN", "NNNNNNNNNNNNNYNNYNNNNYNNYNNNYNYNYNNYYYNNNYYNNYNNNN", "NNNNNNNNNNNNNNYNYNYNNNYYNNNNNNYNYNNNNNNNNNNYYNYNNN", "NNNNNNNNNNNNNNNNNYYNNNNNNNNYNYNYNYNNYYNNNNYNNNNNNY", "NNNNNNNNNNNNNNNNNNNNYYNNYYNNNNYNNYNNNYNYNYYNYYNNNN", "NNNNNNNNNNNNNNNNNYNYNNNYYNNNNNNYNYYNYYNYNNNYYNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNYNYNNNNYYNNYYNYNYNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYYYNNNNNNNYYYYYNNNYNYNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNYNNYYYYNNYYNYNNYNYYNNNNNNNYNYN", "NNNNNNNNNNNNNNNNNNNNNYNNNYNNNNYNNYNNNYNNNNNYYNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNNYNNYYNNYNNYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNYNYYYNNYNNYNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYNNNYNNNYNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYNNYNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYYYYNNNYNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNYYNNYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNYYNNYNNYYNNNNNYNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYNYYNYYNYNNNNYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYNNYNNNYYNNNYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNYNNYNNNNYNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYYNYNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYYNNNYNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNYNYNYYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNYNYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYNYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YNNNYNNNYYNYNNNNNNNNNYNNYYYNNYYNNYNNYNYNNYYNNYNNYN", "YYNNNNNNNYNNYYNYNNNYNYNYYNYNYNYYYNYNNNNNNNYNNNNNNN", "YNYNYYNYNYNNYNNYYYNNYNYNNYNNYNNYNNYNYYYNNNYNNYNYYN", "YYNYNNYNNYYNYYYYYNNYYYYNNNYNNYNNYYYYNYNNNNNNNNNYNN", "YNNYNNNNNYYNYNNNNNNNNNNYNYYNNNNYNYYNYNNYYNNNYNNNNN", "YNYNNNYYYNYNYYNYYNYNNNNNNNNNYYNYYYNNNNNNNNNNNNYNNN", "YYNNNNYYNNNNNNYYNYYNYNNNYNNNYYNYNYNNNYNYYNNYNNNNNN", "YYYYNNNNNNNNNNNYYNNNNYNNYNNNYNNNNNYNYNNNYNYYNYNYNY", "YYNNNNYYYNNNNNNYNNNNNNNNNNYNNNYYNNNYNYNYNNNNNYNNNY", "YNNNYYNNNNNYNNNNYNNYYNNYNNNNYNYNNNYNNNYYNYYNNNYNNN", "YNNYNNNYYNYYYNYYNNNNYYNYYNYYYNYYNNYNNYYYYYNNNNNNYN", "YNNNYNNNNNNNNNNYYNNNYNNYNNNNNNNNNYNNYYNNYNNNNYYNNN", "YYYNNNYNNYNNYNYYYYNYYNNNNNNNNNNNYNNNYYNNYNNYYNNYYY", "YYNNNYNNYYNNYNNNYNYNYNNNYYNNYNNYNYNYNYNNNNNYNNYNYN", "YYNNNNNYNNNNNYYYNYNNYNNNNNYNNNNNYYNNNNYYNNNYNNYNNN", "YNNNNYYNNNNNNNNNNYYNNNNYNNNNNNNYNNNNYNNYYNYYNNYNNY", "YNNNNYYNNNYYNNNNNYNNNNYYNNYYNNYYNNYYYNNNNNNYNYNNNN", "YYNYNNNNNYNNNNYYNNNYYNNNYNNNNYYNNYYNYNYYNNNNYYYNNN", "YNNYNYNYNYYNNNNYYNYYYYNNNYNNNNYNNYNNYYNNYNNNNNYNNN", "YNYYYYYNNNNNNYYNNYNYNNYNNNNNNNYNNYYYYYYNNNYYNNYNYY", "YYNNYNNNNYYNNNYNYNNNNNYNNYNYYYYYYNNNNYNNNYNNYYNYNN", "YNNNNNNNNNNNNYNYNNYNNNYYNNYYNNNYNNNNNNYYNNNNNNNNNY", "YYNYYNYYYYNYNNYYNNNYNYNNYNNYNNNNNYNYNNNNYYYYNNYNNY", "YNNYNYYNNNNNNYNNNNNYNYNNNNNNYNYYNNYYNYNYNYYYNNNNNN", "YNNNNNYNNNYNNNYYNNYNNNNYYYYNYNYYNNNYYYNYNNNNNNNNYN", "YYNNYYNNYNYYNYNNNNYNNNNYYYYNNNNNNNNYYNYNYNNNNYNNNY", "YYNNYNYYNNYNYYNYNNYNYNNYNNYNYNYNNNYYNNNYNNNNYNYNNY", "YYYYYYNNYNYNYNYNNNNYNNNNNNYNYNNNNYNNNYYYNNYNYNYNYN", "YNNNNNNNNYNNYYYYNNNNYNNNNYNNNYNNNNNNNNNNYYYNNNYYNN", "YNNYNNNNNNYNNNNNYNYYNNYNNYYYNNNNNNNNYYNYNNNNNNYYYY", "YNNNNNYYYNYYYNNYNNNNNYYYNNYNNNYNNNNNYYYYYYNYYYNNNN", "YYNNYNNYNNNNNNNNNNNYYYNNNNNNNNNYNNNNNYNNNYNNYYYYNN", "YNNYNYYNNNNNNNNNNNYNYNYNNNNNNNYYNNYNNNNNNNNNNNNYNN", "YNYNNYYYNYYYNNNNNNNNNYNNNNYNNNYYNYNNNNYNYNYNYNNYNN", "YNNYYNNYYNNYNNYYNNNYNNYNNNNNYNYNYNYNYNNNNNYYNNNYYN", "YNNNNNYNYNYYNNYNYYYYYNNYNYNNYYNNNYYNNNNNYYYNYNNNNN", "YYNNNYNYYNNNNNYYYNNNNNNYYYNYNNNNYYNNNNYNNYYNNNYYNN", "YYYNNNNNNNNYYNNNNNYYNYNYNNYNNNNYNNNNNNNNNYNYYNNYNN", "YNNNYNYNYYYNYNYNYNNYYNNNYNNNNNYNNYYNYNNNNYNNNYYNNY", "YNNYNNNNNNNNNYNNNNYNNNNYYYYYNNNYNNNNNYNYNNYNNNYNNN", "YYNNNNNYNYNNNNNNNNYNYYNNNNNNYNYNNNYNNYYNYNYYNNNNNY", "YNYYNYNYNYNNNNNYYNNNNNYYNNNNNYNNNNYYNNNNNNNNNNNYYN", "YNYYNYYNYNNNNNNNNNYNNYNNNNNYYYYNNNYNNNNNYNNNNYYNNN", "YYNNNNYNNYNYNNNNYNNNNNNNNNNNNYNYNNNNNNNYNYNNYNNNNN", "YNNYNNYNYNNYNNNNNNNYNYNNNNYYYNNYNNNNYNNNNYNNNNYNYN", "YNNNYNNNNNNYYYNNNNNNNNNYYNNNNNNNYNNNYNNNNNNNNYNNNY", "YNNYNNYNNNNNYYNNYYNNYYNNYYNYNNYNYNYNNYNNNNNYNNYNYN", "YYYNYNYNNNNNNNNYYNNNNNYYYNNNNNNNYNNNNNYYNNNNYYNYNY", "YYNYYNYYNNNYNYNYNYNNNYYNNNNYNNNNNYNYNNYYNYNNNNNYYN", "YNYNNYNYNNNYNNNNYNNNYYYYNNYNYNNNYNYNNNNNYNNNYNNNYN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> clientCable = {"NNN", "NNN", "NNN"};
    vector<string> serverCable = {"YYYY", "YYYY", "YYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> clientCable = {"NNNN", "NNNN", "NNNN", "NNNN"};
    vector<string> serverCable = {"YY", "YY", "YY", "YY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> clientCable = {"N"};
    vector<string> serverCable = {"YYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> clientCable = {"NNN", "NNN", "NNN"};
    vector<string> serverCable = {"YNN", "YNN", "NNN"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> clientCable = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> clientCable = {"NNNY", "NNNN", "YNNN", "NYNN"};
    vector<string> serverCable = {"YY", "YY", "YY", "YY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> clientCable = {"N"};
    vector<string> serverCable = {"YYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> clientCable = {"NNNNNNNYYNNNNNYNNNNYYYYNYNNYNNNNYNYYNNNNYNYNYYNYNN", "NNNNNNYYNNYNNNNNYYNNNNNNYNYNNYYYNYNYNYNNNNNYYNNNNN", "NNNYYNYNNYYYYNNYNNNNYYNYYYNYNYNNYNNNNNYNNNYNNYNNYY", "NNNNNNNNNYNNNNYNYNYNNNYNNYNYNNNNNNYYYYYNNYNNYNYNNN", "NNNNNNNYNNYYNNNNNNYNNNNNYNNYNNNYNYYNYNNNYYYYNNNNNN", "NNNNNNNYYNNNNNNNNYNNYNYNYYNNNNNNYYYNYNYNNNYNNNNNNY", "NNNNNNNNNYYYYNNNNNNNYYNNNYNNNYNYNNNNNNNYNYNYNNNNNN", "NNNNNNNNYNNNYNNNNNNYYNNNNNNNYNYNNNNYNNYNNNYNNNYNNN", "NNNNNNNNNNNYYYNYNNYNYNNNNNNYNNNNNNYYNYNNNNNYNNNNNN", "NNNNNNNNNNNYNNNNNNYNNNNNYNYYNYNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNYNNNYNNNYNYNNNNYNNYYYNNYN", "NNNNNNNNNNNNYNYNNNNNNNYNNNNNNNNNNNNYYNYNYNNNNNNNYN", "NNNNNNNNNNNNNNNNNNYYNNNNNYNNNNNYYYYNYNYNNYNNNYNYYY", "NNNNNNNNNNNNNNNYYNYNNNNYYNNYYNNNNYNNYNNYNNNNNYNNNN", "NNNNNNNNNNNNNNNYNNYNYNNYYNNNYNNNYNNYNNNNYNYNNYNYNY", "NNNNNNNNNNNNNNNNNYNNNNYNYNYNNNNNNNYNNNNNYNNNYYNNYY", "NNNNNNNNNNNNNNNNNYNYNNNNYNNYNYNYYNYNNNYNNYNYNNNNNY", "NNNNNNNNNNNNNNNNNNYNYYNNNNYYNNYYNNNYNNNYYNYNYNNYNY", "NNNNNNNNNNNNNNNNNNNNNYYNNYYNNNNNNNNYNNNNNNYYNNNYNY", "NNNNNNNNNNNNNNNNNNNNYNNNNYYYNNNNNYNYYYYNNYYNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNYNYNYNNYNNYNYNYNNYNNNYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNYNNYNNNNYNYNNNYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNYYNYYNYNNYNNYYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNYYNNNYNYNNNNNNYNNNNYNNYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYNNYNNYYNNYYNNNYNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNYYNYNYYNYYYYYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNYNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNYNNNYNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYYYNYNYNYYNYNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNYNNYNYNNYYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNYNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYYNNYYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNYYNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYNYNYNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNYNYYNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYYNNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYYNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNYNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> clientCable = {"NNN", "YNN", "YNN"};
    vector<string> serverCable = {"Y", "Y", "Y"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> clientCable = {"NYNNNNYYNNNNNNNYYNNNNYYNNNNNNNYYYN", "NNYNNNNYYYNNNNNNYNNNNNYNNNNYYNYNNN", "NNNYNNYYYYNYNNYNNYYNNYYNNNYYNYNNNY", "NNNNYNYNNNNYNNYYNNNNNNYNNNNYYNYNYN", "NNNNNYNYNNYYNNNNNNYNNYNYYNNNYYNNNN", "NNNNNNYNNNNNNNNNNNNYNNNYYNNYNNNNNN", "NNNNNNNNYNNNNNYNNNYYYYNNNNNNNNNNYY", "NNNNNNNNYYNYNYYNNNNNNYNNNNYNYNNYYN", "NNNNNNNNNNNNYNYNNNNNNYNNYNNYNNYYNN", "NNNNNNNNNNNYNNYYNYYNNYNNNYNYNNNNYN", "NNNNNNNNNNNNNNYYNYNNNNNYNNYYYNYYNY", "NNNNNNNNNNNNNNNNYYNNYNYYNYNNNNYNNN", "NNNNNNNNNNNNNNNNYNNYNYNNNNNYNNYNNN", "NNNNNNNNNNNNNNYNNNNNNNNYNNYYNYNNNN", "NNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNYYYNNYYYYYNN", "NNNNNNNNNNNNNNNNNYNNNYYNYNYNYYNNNN", "NNNNNNNNNNNNNNNNNNNYNNNYYNNNNYYNYN", "NNNNNNNNNNNNNNNNNNNYYNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNYYNNNYNNNNNNYY", "NNNNNNNNNNNNNNNNNNNNNYNNYNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNYNNYYNYNY", "NNNNNNNNNNNNNNNNNNNNNNNYNNNYYYYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNYYNYNYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    vector<string> serverCable = {"YYNYYNNNNNYNNNYNNNNNYNYNNYNYYNYYNNNNY", "YNNNNNYYNNNYYYYNNNNNYNNNNNNYYYYNNYYYN", "NYYYYYNYYYNNNYYYNNNNYNNNYYYYNNNYNNYNN", "NYNYNYNYYYNYNYYNYNNYYNNNYNYNYYYNYNNNN", "NNYNNYYNYNNYYYYNNNNNNYNNYYNNYNNNYNYNN", "YNNYYNYYNYYYNNYYYNYYNYYYNNYYNYNYNYYNY", "YYNYYYYNYYNNYNYYYYNNNNNNYNYNNNNNNYYNY", "YYYYNYYNYNNNYYYYNNYYNNNYYNYNNNNNYYNNY", "NYYYNNNYNNNYNYNNNYNYYYNNYYNYNNYNNYNNY", "YNNNYYNYNYYNNYNYYNYYYYYNYNNYYYYNNYYNY", "NYNNYNNYYNYNNNYNNNNYYNYYYNNYYNYNNNNNY", "YNNNYYYNYNYYYYYNYNNYYNYNNNYNYNNYNYNNN", "NYNYYNYYYYYNNYNNYNYYNNYNNNYNYNYYNYYNN", "NNNNNYYYYNYNYYYNNNYYNYYYYYNYNYYYNNNNY", "NNYNNNNYNYNNNNYNNNNYYYNNYNYNYNNNYNYYY", "NYYYNNNYNYNYNNNNYYNNYNNYYNYYNYYNYYNNN", "YNNYNNNYYNNYYYNNYNYNNYYYYNYNYYYYNNYYN", "YNNNYYNYNNYYNNNNYNNNYYYYNYNYNYNNNNYNN", "NNYYYYNNNYNNYNNYNNNNYYYYNNNYNYNNYNNYN", "NNNNNYNYNYNYNYYNNNNYYNYNNNNYYNYNYNNNN", "YNYYYYYNYNYNYYYYYNNNYNYNNNNYYNNNYNNNN", "NYYNYNNYNNNYYYYYYNNYNYYYNNYNNNYYNYNNY", "NYNYNYNNYNYYYYNYYNYYNNNNNNYYNYYYYNYNN", "NYYYYYNYNNNYNNNYYYYNNYYNYYNNNYNYYNNNN", "YNYNYYNNNNNYNNNNNYNYNNNNYNNNYYYYYYYYY", "NYNYNNYYYNYYNYNYNYYYYNNYNNYNNNNYNYNYY", "NNYYNNNNYNYNNYNYNNNNYYYNNNYYYYYNNYNYN", "NNYYNNYYYYNNYYNYNYYYYYYNYNYYYNYNYYYYN", "YYNYNYYYYNNYNNNNNYNYYNYNNYYNYYYYYNYNY", "NNYYYYNNNYYNNYYYNNYNNNNNYNNNNNNYYNYNY", "NYNNNNYNNNYYNNYYYNYNNYNYNNYNYNNNYYNNN", "NYYYNNNYNYNYYYNYNNYNYNNNYYNYNYYNNYNYN", "NYYNNNNYYYNYYYYNNNNYNNNNNYYYYYNNNYYYN", "NYNNYNNYNYYNNYYNNNYYYYYYYNNYNYNYYYYYY"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> clientCable = {"NYNNN", "NNYNN", "NNNYN", "NNNNY", "NNNNN"};
    vector<string> serverCable = {"Y", "N", "N", "N", "Y"};
    NetworkSecurity* pObj = new NetworkSecurity();
    clock_t start = clock();
    int result = pObj->secureNetwork(clientCable, serverCable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test71() == 0 ? ++passed : ++failed;
    test72() == 0 ? ++passed : ++failed;
    test73() == 0 ? ++passed : ++failed;
    test74() == 0 ? ++passed : ++failed;
    test75() == 0 ? ++passed : ++failed;
    test76() == 0 ? ++passed : ++failed;
    test77() == 0 ? ++passed : ++failed;
    test78() == 0 ? ++passed : ++failed;
    test79() == 0 ? ++passed : ++failed;
    test80() == 0 ? ++passed : ++failed;
    test81() == 0 ? ++passed : ++failed;
    test82() == 0 ? ++passed : ++failed;
    test83() == 0 ? ++passed : ++failed;
    test84() == 0 ? ++passed : ++failed;
    test85() == 0 ? ++passed : ++failed;
    test86() == 0 ? ++passed : ++failed;
    test87() == 0 ? ++passed : ++failed;
    test88() == 0 ? ++passed : ++failed;
    test89() == 0 ? ++passed : ++failed;
    test90() == 0 ? ++passed : ++failed;
    test91() == 0 ? ++passed : ++failed;
    test92() == 0 ? ++passed : ++failed;
    test93() == 0 ? ++passed : ++failed;
    test94() == 0 ? ++passed : ++failed;
    test95() == 0 ? ++passed : ++failed;
    test96() == 0 ? ++passed : ++failed;
    test97() == 0 ? ++passed : ++failed;
    test98() == 0 ? ++passed : ++failed;
    test99() == 0 ? ++passed : ++failed;
    test100() == 0 ? ++passed : ++failed;
    test101() == 0 ? ++passed : ++failed;
    test102() == 0 ? ++passed : ++failed;
    test103() == 0 ? ++passed : ++failed;
    test104() == 0 ? ++passed : ++failed;
    test105() == 0 ? ++passed : ++failed;
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15117368&rd=14159&pm=10736
********************************************************************************
#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <bitset>
#include <stack>
#include <queue>
#include <set>
using namespace std;
 
int dr[]={0,1,0,-1,1,1,-1,-1};
int dc[]={1,0,-1,0,1,-1,1,-1};
#define zmax(a,b) (((a)>(b))?(a):(b))
#define zmin(a,b) (((a)>(b))?(b):(a))
#define zabs(a) (((a)>=0)?(a):(-(a)))
#define iif(c,t,f) ((c)?(t):(f))
template<class A, class B> A cvt(B x) {stringstream s;s<<x;A r;s>>r;return r;}
 
bool cn[100][100];
 
class NetworkSecurity {
public:
int secureNetwork(vector <string> A, vector <string> B) {
  int ret = 0;
  int n = A.size();
  int m = B[0].size();
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cn[i][j] = A[i][j] == 'Y';
    }
    for(int j = 0; j < m; j++) {
      cn[i][n + j] = B[i][j] == 'Y';
    }
  }
  for(int k = 0; k < n + m; k++) for(int i = 0; i < n + m; i++) for(int j = 0; j < n + m; j++) {
    cn[i][j] |= cn[i][k] && cn[k][j];
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(!cn[i][n + j]) continue;
      bool ok = false;
      for(int k = 0; k < n && !ok; k++) {
        ok = cn[i][k] && cn[k][n + j];
      }
      if(!ok) ret++;
    }
  }
  return ret;
}
};
 
 
//Powered by [KawigiEdit] 2.0
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/