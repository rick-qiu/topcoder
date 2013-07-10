/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2823
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

class BigCube {
public:
    string largestCube(vector<string> range);
};

string BigCube::largestCube(vector<string> range) {
    string ret;
    return ret;
}


int test0() {
    vector<string> range = {"1-1000000000001"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> range = {"10-999999999999990", "11-999999999999991", "12-999999999999992", "13-999999999999993", "14-999999999999994", "15-999999999999995", "16-999999999999996", "17-999999999999993", "18-999999999999994", "19-999999999999999"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "999970000299999";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> range = {"0-3", "10-20", "30-60", "80-120"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> range = {"0-0", "2-7", "9-26", "28-63", "65-124"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> range = {"999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> range = {"0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000", "0-1000000000000"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> range = {"1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999", "1-999999999999"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "999700029999";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> range = {"999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "1000001-1000000000"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> range = {"999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "999700030000-999999999999", "999400119993-999700029998", "999100269974-999400119991", "998800479937-999100269972", "0-0"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> range = {"999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999", "999970000300000-999999999999999"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> range = {"0-0", "2-2", "3-3", "4-4", "5-5", "6-6", "7-7", "9-9", "10-10", "12-12", "14-14", "16-16", "18-18", "20-20", "22-22", "24-24", "26-26", "28-28", "30-30", "32-32", "34-34", "36-36", "38-38", "40-40", "42-42", "44-44", "46-46", "48-48", "50-50", "52-52", "54-54", "56-56", "58-58", "60-60", "62-62", "65-65", "67-67", "69-69", "71-71", "73-73", "75-75", "77-77", "79-79", "81-81", "83-83", "85-85", "87-87", "89-89", "99-99", "999970000300000-999999999999999"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> range = {"1-8"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "8";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> range = {"2-26"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "8";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> range = {"2-63"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "27";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> range = {"1-2197"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "2197";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> range = {"125000000000000-125000000000000"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "125000000000000";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> range = {"1881365963625-1881365963625"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "1881365963625";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> range = {"123456789012345-234567890123456"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "234565479336448";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> range = {"100-100", "2-2", "3-3", "4-4", "5-5", "6-6", "7-7", "9-9", "10-10", "12-12", "14-14", "16-16", "18-18", "20-20", "22-22", "24-24", "26-26", "28-28", "30-30", "32-32", "34-34", "36-36", "38-38", "40-40", "42-42", "44-44", "46-46", "48-48", "50-50", "52-52", "54-54", "56-56", "58-58", "60-60", "62-62", "65-65", "67-67", "69-69", "71-71", "73-73", "75-75", "77-77", "79-79", "81-81", "83-83", "85-85", "87-87", "89-89", "99-99", "999970000300000-999999999999999"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> range = {"1000000000001-1000333333333"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "1000300030001";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> range = {"1-1000000000001"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> range = {"1-1"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> range = {"1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000", "1-1000000000000000"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> range = {"1-1000000000000000"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> range = {"2-4", "120-130"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "125";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> range = {"0-1001", "2-2", "3-3", "4-4", "5-5", "6-6", "7-7", "9-9", "10-10", "12-12", "14-14", "16-16", "18-18", "20-20", "22-22", "24-24", "26-26", "28-28", "30-30", "32-32", "34-34", "36-36", "38-38", "40-40", "42-42", "44-44", "46-46", "48-48", "50-50", "52-52", "54-54", "56-56", "58-58", "60-60", "62-62", "65-65", "67-67", "69-69", "71-71", "73-73", "75-75", "77-77", "79-79", "81-81", "83-83", "85-85", "87-87", "89-89", "99-99", "1-999999999999999"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "999970000299999";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> range = {"99994258523375-99994258523375"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "99994258523375";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> range = {"8-10"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "8";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> range = {"0-0", "2-2", "3-3", "4-4", "5-5", "6-6", "7-7", "9-9", "10-10", "12-12", "14-14", "16-16", "18-18", "20-20", "22-22", "24-24", "26-26", "28-28", "30-30", "32-32", "34-34", "36-36", "38-38", "40-40", "42-42", "44-44", "46-46", "48-48", "50-50", "52-52", "54-54", "56-56", "58-58", "60-60", "62-62", "65-65", "67-67", "69-69", "71-71", "73-73", "75-75", "77-77", "79-79", "81-81", "83-83", "85-85", "87-87", "89-89", "99-99", "999970000300000-999999999999999"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "0";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> range = {"63-100", "998-1001", "1003-998988"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "970299";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> range = {"10-999999999999990", "11-999999999999991", "12-999999999999992", "13-999999999999993", "14-999999999999994", "15-999999999999995", "16-999999999999996", "17-999999999999993", "18-999999999999994", "19-999999999999999"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "999970000299999";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> range = {"3-8"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "8";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> range = {"1-10", "1-9872564", "23457-334676"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "9800344";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> range = {"1000000000000000-1000000000000000"};
    BigCube* pObj = new BigCube();
    clock_t start = clock();
    string result = pObj->largestCube(range);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000000000";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=306542&rd=4780&pm=2823
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
#define s2d(s,d) istringstream(s)>>d
#define d2s(d,s) {ostringstream t;t<<d;s=t.str();}
int gcd(int a,int b){for(int c;b;c=a,a=b,b=c%b);return a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}
template <class T>
void remove(vector<T>& v,const T&e){
  v.resize(remove(v.begin(),v.end(),e)-v.begin());
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
  for (vector<string>::iterator i=tmp.begin();i!=tmp.end();i++)
    {int t;s2d(*i,t);ret.push_back(t);}
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
 
 
 
class BigCube{
public:
  
string largestCube(vector<string> range)
{
  vector <pair<i64,i64> > ra(range.size());
  for (int i = 0, j; i < range.size(); i ++) {
    for (ra[i].first = 0, j = 0; j < range[i].size() && range[i][j] != '-'; j ++)
      ra[i].first = ra[i].first * 10 + range[i][j] - '0';
    for (ra[i].second = 0, j ++; j < range[i].size(); j ++)
      ra[i].second = ra[i].second * 10 + range[i][j] - '0';
  }
  i64 n, nn;
  string res;
  for (n = 100000; n >= 0; n --) {
    nn = n * n * n;
    for (int i = 0; i < range.size(); i ++) {
      if (nn >= ra[i].first && nn <= ra[i].second) {
        res = "";
        for (; nn; nn /= 10) res += nn % 10 + '0';
        for (int j = 0, k = res.size() - 1; j < k; j ++, k --)
          swap(res[j], res[k]);
        if (res == "") res = "0";
        return res;
      }
    }
  }
  return "";
}
 
};
 
 
 
 
#ifdef WIN32
void test0(){
  string _range[]={"1-1000000000001"};
  vector<string> range(_range+0,_range+sizeof(_range)/sizeof(string));
  string largestCube= "1000000000000";
  BigCube _BigCube;
  string ret=_BigCube.largestCube(range);
  cout<<"--------------------test 0--------------------"<<endl;
  cout<<"range = "<<range<<endl;
  cout<<"expected to return "<<largestCube<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==largestCube)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test1(){
  string _range[]={"10-999999999999990","11-999999999999991","12-999999999999992", "13-999999999999993","14-999999999999994","15-999999999999995", "16-999999999999996","17-999999999999993","18-999999999999994", "19-999999999999999"};
  vector<string> range(_range+0,_range+sizeof(_range)/sizeof(string));
  string largestCube= "999970000299999";
  BigCube _BigCube;
  string ret=_BigCube.largestCube(range);
  cout<<"--------------------test 1--------------------"<<endl;
  cout<<"range = "<<range<<endl;
  cout<<"expected to return "<<largestCube<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==largestCube)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test2(){
  string _range[]={"0-3","10-20","30-60","80-120"};
  vector<string> range(_range+0,_range+sizeof(_range)/sizeof(string));
  string largestCube= "1";
  BigCube _BigCube;
  string ret=_BigCube.largestCube(range);
  cout<<"--------------------test 2--------------------"<<endl;
  cout<<"range = "<<range<<endl;
  cout<<"expected to return "<<largestCube<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==largestCube)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test3(){
  string _range[]={"999700030000-999999999999","999400119993-999700029998", "999100269974-999400119991","998800479937-999100269972"};
  vector<string> range(_range+0,_range+sizeof(_range)/sizeof(string));
  string largestCube= "";
  BigCube _BigCube;
  string ret=_BigCube.largestCube(range);
  cout<<"--------------------test 3--------------------"<<endl;
  cout<<"range = "<<range<<endl;
  cout<<"expected to return "<<largestCube<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==largestCube)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
void test4(){
  string _range[]={"0-0","2-2","3-3","4-4","5-5","6-6","7-7","9-9","10-10","12-12", "14-14","16-16","18-18","20-20","22-22","24-24","26-26","28-28", "30-30","32-32","34-34","36-36","38-38","40-40","42-42","44-44", "46-46","48-48","50-50","52-52","54-54","56-56","58-58","60-60", "62-62","65-65","67-67","69-69","71-71","73-73","75-75","77-77", "79-79","81-81","83-83","85-85","87-87","89-89","99-99",  "999970000300000-999999999999999" };
  vector<string> range(_range+0,_range+sizeof(_range)/sizeof(string));
  string largestCube= "0";
  BigCube _BigCube;
  string ret=_BigCube.largestCube(range);
  cout<<"--------------------test 4--------------------"<<endl;
  cout<<"range = "<<range<<endl;
  cout<<"expected to return "<<largestCube<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==largestCube)
    cout<<endl<<"Pass!"<<endl<<endl;
  else
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
}
 
int main(){
  test0();
  test1();
  test2();
  test3();
  test4();
  return 0;
}
#endif

********************************************************************************
*******************************************************************************/