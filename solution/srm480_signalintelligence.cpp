/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11059
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

class SignalIntelligence {
public:
    long encrypt(vector<int> numbers);
};

long SignalIntelligence::encrypt(vector<int> numbers) {
    long ret;
    return ret;
}


int test0() {
    vector<int> numbers = {1, 2, 3};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> numbers = {4, 4, 2, 2};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> numbers = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 281475976710655;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> numbers = {1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4094;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> numbers = {1000000000, 1};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000003;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> numbers = {2, 3, 7, 15, 5};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> numbers = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000, 1000, 1000};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843010213693951;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> numbers = {179658657, 1375, 16748571, 963287546, 963287552, 23711273, 737827135, 1, 86550454, 916920519, 28, 932660585, 963233450, 961582520, 963287279, 61050923, 963287551, 57487191, 963287460, 18861753, 652860878, 21221311, 5545151, 14271410, 961807367, 963287481, 63252, 963283275, 963287499, 963039512, 947814221, 184157393, 31, 214871850, 563608185, 961707006, 1, 3671, 963267601, 963270890, 3, 468420162, 84216335, 963264522, 963281384, 1, 67947, 963286662, 129181990};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843009219239102;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> numbers = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> numbers = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842625;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> numbers = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2251799813685250;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> numbers = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2251799813685252;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> numbers = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4503599627370505;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> numbers = {200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 72057594037928135;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> numbers = {5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283, 5283};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843009213699234;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> numbers = {58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282, 58282};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843009213752233;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> numbers = {1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585, 1019585};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843009214713536;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> numbers = {37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373, 37373373};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843009251067324;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> numbers = {270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000, 270000000};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843009483693951;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> numbers = {987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843010201348272;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> numbers = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843010213693951;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> numbers = {1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2, 2, 1, 1, 2, 2, 1, 2, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> numbers = {1003, 1001, 1000, 1002, 1000, 1003, 1004, 1002, 1004, 1005, 1004, 1004, 1003, 1000, 1000, 1001, 1005, 1001, 1002, 1000, 1003, 1003, 1005, 1002, 1001, 1004, 1003, 1005, 1000, 1005, 1004, 1003, 1005, 1003, 1004, 1002, 1004, 1005, 1002, 1002, 1004, 1001, 1004, 1000, 1002, 1005, 1000, 1000, 1004, 1000};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 288230376151712743;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> numbers = {1000005, 1000007, 1000003, 1000003, 1000006, 1000007, 1000005, 1000004, 1000003, 1000000, 1000002, 1000004, 1000007, 1000004, 1000003, 1000007, 1000002, 1000003, 1000002, 1000005, 1000007, 1000007, 1000003, 1000000, 1000006, 1000001, 1000001, 1000004, 1000006, 1000006, 1000004, 1000006, 1000004, 1000007, 1000000, 1000001, 1000001, 1000002, 1000001, 1000005, 1000005, 1000000, 1000006};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843009214693951;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> numbers = {999999991, 999999997, 999999993, 999999991, 999999990, 999999993, 999999995, 999999998, 999999996, 999999992, 999999991, 999999991, 999999993, 999999996, 999999996, 999999990, 999999998, 999999992, 999999994, 999999996, 999999993, 999999996, 999999996, 999999996, 999999995, 999999998, 999999996, 999999991, 999999990, 999999990, 999999997, 999999997, 999999993};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843010213693941;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> numbers = {235857565, 221602550};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 490038005;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> numbers = {555785557, 125740864, 863111154, 595742977};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2703269204;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> numbers = {699941145, 339788511, 472789281, 845483099, 959647936, 563964808, 269415281, 647687104};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 34629153648;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> numbers = {647435249, 803314427, 101746030, 964429523, 223737792, 68515974, 28150428, 125939064, 319945227, 880135873, 447607422, 8304030, 54616924, 977496243, 200084211, 688775573};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 549824329861;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> numbers = {523956777, 870026136, 106698929, 79274264, 626167319, 806819344, 197171767, 220148874, 869478997, 244529565, 945331946, 276812202, 576132594, 748665937, 121622204, 32295658, 330209878, 273838685, 209464832, 501549133, 642315585, 636167405, 778774046, 281641907, 844060543, 976822490, 810188417, 517044450, 801011353, 162695609, 180175857, 532864569};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 72057594144626864;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> numbers = {453381899, 896620462, 37990500, 217362760, 29719649, 215773553, 739245534, 30200886, 483496386, 505404724, 756663654, 592389735, 372026736, 708612244, 923864984, 776042099, 954534621, 270858854, 675201114, 625437329, 912463350, 458367504, 74585147, 807894854, 974760403, 477659282, 102437899, 447369076, 972739094, 297881347, 985344042, 257386203, 198147693, 399754088, 50127358, 992970900, 590360959};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504644837475;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> numbers = {69122726, 93541221};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 203340453;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> numbers = {577407437, 736270213};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1651149260;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> numbers = {27096035, 298594390, 460425141, 235956357};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1309698180;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> numbers = {727312500, 521644191, 839367970, 236040594, 189380898, 349154372, 385330230, 397552844};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 17529023555;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> numbers = {960279467, 800243597, 537543980, 627721315, 966332421, 403751475, 251094527, 221083798, 988457022, 918523234, 816380508, 954657304, 782274915, 782224124, 559484609, 142724240};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4398189235343;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> numbers = {528365618, 665524313, 235143161, 4475297, 496903020, 914280336, 138855536, 483782301, 628087128, 243187789, 219058790, 122584390, 422268174, 745856404, 648707562, 695835340, 373986475, 27861841, 709477528, 657488096, 588097078, 895013274, 725032201, 916747047, 705627486, 670368540, 472580435, 855900854, 28482944, 986502272, 24691132, 45314335};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 18014398537343824;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> numbers = {66111822, 901323553, 120043437, 33574315, 27918777, 466777994, 889149, 495588311, 194492499, 381518458, 947371899, 286397799, 487783925, 857521141, 399205507, 105056546, 561852370, 315342679, 437315059, 185693701, 319305989, 804412056, 526862732, 768844849, 107070267, 388356354, 942340016, 102031025, 400926077, 143966520, 68076598, 833930512, 23317426, 203907340, 120631317, 970233972, 801410459, 309325868};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504640421290;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> numbers = {364490003, 715408767};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1252279678;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> numbers = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> numbers = {1, 2, 1, 1, 2, 2, 1, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 2, 1, 1, 1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 2, 2, 2, 2, 1, 2, 1, 1, 2, 2, 1, 2, 1, 1, 1};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> numbers = {5, 10, 7, 6, 5, 10, 9, 10, 5, 10, 8, 9, 9, 8, 10, 7, 6, 9, 10, 6, 8, 9, 6, 6, 9, 6, 7, 5, 9, 8, 10, 6, 9, 9, 6, 7, 9, 8, 6, 7, 8, 9, 8, 10, 7, 5, 7, 10, 6, 10};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2251799813685252;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> numbers = {58, 48, 59, 46, 29, 24, 38, 37, 39, 48, 44, 32, 44, 29, 31, 51, 51, 30, 56, 39, 57, 46, 32, 36, 40, 40, 24, 37, 29, 55, 33, 46, 25, 37, 23, 51, 53, 57, 36, 42, 55, 41, 52, 26, 49, 29, 44, 34, 50, 43};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 9007199254741014;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> numbers = {16980, 15834, 16744, 11681, 18064, 19497, 13666, 9116, 16465, 10731, 8440, 18246, 15097, 16843, 14594, 7870, 19592, 9193, 12031, 12601, 8528, 9084, 8447, 15282, 7075, 12139, 8441, 15731, 19011, 14570, 18541, 20137, 17290, 11821, 18076, 10886, 7268, 14594, 17206, 9841, 11932, 9612, 12604, 14403, 11888, 14141, 10176, 10174, 7212, 18361};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843009213701026;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> numbers = {34318, 28848, 46912, 22709, 21631, 44334, 41956, 38932, 39002, 30513, 25852, 41790, 26297, 52817, 25411, 27541, 45176, 35778, 29969, 27124, 26128, 42836, 49044, 41319, 30208, 43711, 31518, 31476, 23045, 41069, 42007, 48776, 23782, 56941, 51469, 40026, 20404, 33756, 22329, 35193, 43900, 30121, 26844, 40093, 36474, 49005, 49819, 29978};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843009213714355;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> numbers = {1072901, 3859045, 995297, 3683954, 1001850, 4039454, 1148240, 1199431, 3585117, 3450722, 2473474, 2183502, 2118901, 3949789, 1444753, 823591, 1304318, 2033975, 1510082, 2297550, 1198529, 3342426, 2336853, 1069029, 2966400, 3716528, 2111794, 3716426, 1912854, 1132818, 3271153, 1564892, 3593606, 2980068, 597752, 3532360, 1283917, 3518770, 1107041, 3883017, 1739120, 3763298, 1939012};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843009214291703;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> numbers = {33603696, 38820812, 41406487, 39732337, 38222020, 31426393, 34110779, 43345829, 48053538, 49807584, 28464602, 46264000, 35772251, 43768413, 41481020, 38217105, 33309217, 41885036, 30054093, 43087163, 40117670, 29125880, 30873599, 45175806, 30041943, 35872207, 42774909, 44300252, 40852416, 28965274, 44256276, 34607812, 37918868, 37885233, 44320284, 41016379, 45575303, 32328032};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843009242158553;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> numbers = {615710367, 828121299, 663163955, 975276184, 640537976, 998211095, 794924189, 956921120, 620878206, 764485506, 699578478, 669163154, 772478680, 914119058, 940119645, 611342962, 770619280, 598891628, 727284047, 771372743, 716947274, 704330816, 734356532, 861495820, 752292939, 746935244, 864243989, 984891734, 761041947, 995159153, 797080726, 837868288, 790812076};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843009812585579;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> numbers = {760265624, 569282114, 696059557, 672289975};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4864249409;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> numbers = {312071265, 188952715, 324521323, 183187130, 252725036, 168635937, 193748935, 104616538, 106047928, 131220792, 192848456, 306638149, 256899146, 92744101};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 549848557988;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> numbers = {522123452, 589830328, 315436987, 342645637, 445303921, 804602161, 402459443, 380454425, 267079239, 284914380, 728120225, 322349158, 530348969, 445323427, 718158227, 502161837, 438351881, 479780186, 384481599, 566123810, 547131716, 655069057};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 562950220500550;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> numbers = {719920934, 719364707, 720115683, 638379714, 571312262, 583881215, 715264040, 740207673, 646199325, 722986352, 774576651, 544411074, 650561187, 593008245, 650823047};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 8796637433281;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> numbers = {590604882, 513531580, 658742168, 631775470, 576602033, 717667847, 647539264, 735794909, 698296962, 727783750, 635566299, 491137194, 620875805, 543096504, 512960162, 496287897, 688221438};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 17592677181609;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> numbers = {740963613, 644726975, 826637708, 731671419, 712478268, 872891455, 880265042, 926080333, 954708551, 952898372, 704899547, 788957219, 671647499};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2199667982526;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> numbers = {497049138, 692021067, 178694997, 355318725, 459144763, 220782914, 506278761, 456456222, 222989218, 396852334, 704609550, 531667317, 227102797, 653136762, 583430107, 197454156, 282931480, 375578973, 839506205, 779324918, 826704601, 348240237};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 281475155405652;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> numbers = {617063229, 636474530, 501001020, 311603490, 671242581, 689924923, 559427070, 517466912, 402805381, 507403086, 519086393, 604741412, 494917883, 488790034, 529445518, 412895655, 680120335, 323914265, 581593892, 369071119, 385135646, 499211048};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 562950265024801;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> numbers = {669195871, 709593466, 663112277, 614498463, 690450890, 682478180, 621650747, 643766176, 703462664, 665575011, 715523054};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 550370312350;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> numbers = {762251236, 719512653, 884461982, 855096015, 891277775, 961757981, 978612762, 939900781, 730424424, 866271739, 869040161, 686042771, 892579882, 948463500, 800138858, 742460199, 812942158, 795042065, 919888160, 662536117, 976068499, 860266833, 704341276};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2251800476221364;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> numbers = {867, 7091, 197156, 2672235, 325, 3186275, 41989, 14883, 1277, 15, 136475, 132095, 155248, 11387, 6431, 7556, 1812, 20049, 14441, 7, 214779, 1896273, 4713, 1984, 885, 478, 1613640, 43, 492082, 30860, 438, 157};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 68719476892;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> numbers = {649888, 130363, 98069, 648754, 647363, 76817, 386758, 199668, 129147, 174642, 419586, 914315, 115950, 389364, 302501, 902001, 213989, 139291, 757490, 113286, 404945, 367453, 360549, 367626};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 549755890704;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> numbers = {349, 16136, 3063};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 20231;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> numbers = {524, 251, 381, 186, 902, 516, 643, 291, 635, 832, 475, 193, 772, 968, 1016, 974, 224, 215, 217, 161, 204, 767, 602, 949, 843, 163, 203, 217, 430, 466, 169, 736, 378, 192, 687, 533, 207};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 8796093022368;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> numbers = {122, 95, 99, 119, 130, 21, 23, 28, 56, 76, 44, 14, 86, 29, 106, 67, 206, 285, 10, 229, 477, 46, 24, 10, 289, 31, 378, 20, 13, 244, 215, 61, 130, 83, 49, 87, 104, 38};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1099511627785;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> numbers = {7272038, 14134620, 12531546, 7940529, 5716835, 30923886, 6614826, 8063007, 8783064, 3172637};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2150656284;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> numbers = {7451, 6166, 4626, 4955, 4374, 7260, 4164, 5390, 6259, 5301, 7620, 4308, 5716, 4388, 5987, 5036, 6592, 5865, 8181, 4431, 4955, 8050, 7221, 6072, 4372, 4493, 8102, 6162, 5539, 7392, 5082, 6458, 4637, 6110, 5675};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 70368744181827;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> numbers = {23788, 650788, 40674, 3774, 35080, 11824, 321113, 3012, 9071, 254479, 92515, 188867, 431484, 78179, 4652, 5155, 26935, 3099, 2535, 56634, 93248, 3184, 8989, 4756, 154525, 57576, 253646, 24147, 48207, 3489, 9409, 55812, 99437, 358545, 713975, 18800, 352753, 391490, 24588, 114348, 2929, 31332, 1768777, 388845};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 18014398509484518;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> numbers = {2666, 928, 2665, 2063, 3125, 176, 64, 143, 56, 797, 174, 1378, 642, 346, 14, 110, 26, 24, 23, 92, 12};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 8388630;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> numbers = {82, 129064, 4438046, 888970, 6, 6966, 100410, 716, 30515, 769278, 2598077, 19, 165, 53334, 2, 5923, 2, 724311, 8273, 3766, 354085, 2350465, 9765299, 17384, 3, 1997, 4, 30, 2, 132, 102744, 18, 38, 18, 123780, 8, 308648, 75230, 9335530, 3, 2287, 22, 1502509, 120, 251, 3, 1257, 155437, 2851, 11838};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842625;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> numbers = {868023, 5864, 9496529, 439885, 23504, 9179, 15181876, 538, 6977, 367, 287012, 5864606, 2217, 15510, 14901, 2044142, 114, 1845, 129, 193, 619469, 14111680, 81, 4062, 919, 3551, 378, 976, 4686303, 21850, 600, 652, 5834279, 2334, 4867, 2192, 28256, 3057, 558, 768, 2369326, 395, 7803737, 88, 185, 29144, 6208, 270, 5586543, 223798};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 36028797018964048;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> numbers = {10284827, 305913, 17160683, 1893793, 6185557, 5073935, 10236, 39300, 51985, 2185285, 3679, 12949, 16937734, 3228, 14251, 5159481, 53669, 6469016, 1775111, 116042751, 7184229, 126928983, 277471, 7256964, 4571300, 127105, 6698344, 50243236, 226167, 161430, 1785120, 5166, 23348, 248727, 7056651, 888714, 27962262, 33717443, 18771243, 7389711, 27694520, 3402398, 216518, 7011, 44293, 48068127, 7549558, 10193714, 3449, 58905};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606850203;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> numbers = {399236, 399219, 99515, 1804, 204, 259914, 31237, 248, 235, 16769241, 509605, 1467, 1008120, 14701, 2300628, 48083921, 57458864, 1918077, 1580345, 685175, 2015, 239, 1197443, 13642, 321104, 1959766, 511, 11133, 23504145, 27779, 10661698, 8280513, 37828664, 122659, 997, 26258, 59333, 195, 1648, 124834, 344391, 14156896, 709, 537, 54644221, 217867, 196, 13196910, 5728, 7729};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 72057594037928130;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> numbers = {45, 7337, 91, 623, 492, 29536, 882, 787, 73304, 26620, 35, 3819, 36089, 3752, 1401, 16, 4499, 476, 2574, 43128, 205, 11376, 5841, 158, 1557, 10117, 16, 14007, 50443, 720, 3431, 8456, 17, 3963, 4621, 38, 82, 507784, 956, 1062, 54, 280, 44, 25554, 940, 377, 2929, 166, 9191, 766};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 9007199254741007;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> numbers = {45619, 178774, 15754, 3471, 26143, 1270, 1216, 6849, 1838, 32335, 594567, 31864, 460062, 32249, 247937, 1251, 8641, 292314, 87435, 7046, 516288, 1527, 2173, 10503, 421222, 1244, 4888, 64864, 413300, 4847, 108380, 15806, 239547, 687970, 851221, 819831, 2246, 99742, 127828, 8918, 4739, 14030, 4506, 31220, 636238, 21366, 1037, 470559, 3106, 23766};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 576460752303424524;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> numbers = {636, 12694, 16061, 5968, 1048, 392, 394, 254, 988, 1365, 3507, 245, 2017, 1076, 1599, 568, 5915, 246, 3265, 1907, 9339, 11832, 7046, 11103, 615, 3162, 3510, 482, 144, 240, 225, 136, 1690, 4002, 10697, 12062, 463, 3200, 222, 3197, 1619, 844, 11030, 5482, 13785, 5772, 557, 3922, 716, 1754};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 72057594037928071;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> numbers = {6905315, 2043146, 18710, 23, 1701, 64, 71, 12, 1367052, 87, 126569, 247, 22900, 231, 651881707, 6, 6445, 45161, 122072, 31387357, 235, 457315, 1119, 48967, 317965322, 43335, 105, 24037992, 2, 278, 869436716, 5877, 8087188, 216, 423, 59147705, 121, 102612886, 6, 3153, 9, 1892390, 2391, 14509586, 686176, 2, 191, 15185052, 319, 559632};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842629;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> numbers = {2, 45714, 173, 252441159, 6971, 97766226, 20, 16, 10646, 4903780, 86420130, 2206219, 10047, 400871, 713875, 53819, 1419684, 4, 156435, 11099652, 1973, 6, 223538236, 27, 42548, 673, 66697, 3, 12090753, 89, 147342035, 529, 100584, 137434, 3760092, 820054138, 3, 14, 1733521, 62497304, 65835879, 455, 8058, 759353, 1908, 5164145, 24849, 2438694, 12165, 64};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842626;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> numbers = {15894, 226, 4915, 27, 166804000, 190620568, 1856139, 919, 4580, 4224710, 2499, 5, 39, 199, 2643, 291683, 252, 569928701, 12404671, 375, 114020, 123401692, 115, 601005, 794747, 30710, 82, 448684, 3426761, 59627, 9429, 204552, 85, 108360234, 30, 3530105, 53673, 8, 536714218, 961367581, 13187, 57193550, 11, 106663, 814, 86640, 377060035, 50, 585947, 6661};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4503599627370500;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> numbers = {38819, 886812880, 112863, 104429450, 597, 3, 222431, 251546, 155549, 245772, 5, 2, 30, 85617, 51734210, 871962, 3, 271908, 3776, 1816, 63, 9719758, 437948, 26989, 25, 132385, 4616254, 13, 464754, 70209681, 4926739, 24992694, 14, 22825894, 97320268, 215399529, 8075, 263289367, 704, 125, 260134586, 18, 512329993, 5986761, 12, 1827470, 18, 550466217, 71, 20320018};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842626;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> numbers = {29, 41, 49, 45, 33, 43, 42, 4, 17, 14, 37, 8, 48, 46, 24, 16, 47, 31, 3, 21, 26, 18, 50, 28, 22, 38, 7, 2, 5, 40, 23, 19, 36, 20, 10, 34, 32, 25, 6, 1, 12, 30, 39, 15, 35, 13, 44, 9, 11, 27};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> numbers = {70, 55, 40, 44, 30, 60, 53, 26, 32, 41, 48, 62, 51, 66, 54, 43, 42, 39, 52, 27, 50, 56, 58, 34, 57, 36, 31, 75, 49, 37, 67, 68, 65, 29, 45, 64, 46, 35, 74, 47, 38, 72, 71, 28, 61, 69, 73, 59, 63, 33};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 9007199254741017;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> numbers = {188, 231, 228, 221, 199, 184, 203, 226, 222, 198, 189, 217, 223, 190, 201, 229, 182, 224, 215, 205, 212, 216, 193, 227, 187, 230, 197, 204, 211, 194, 214, 213, 200, 192, 195, 220, 196, 218, 185, 207, 206, 219, 208, 209, 186, 225, 210, 202, 183, 191};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 72057594037928117;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> numbers = {5954, 5934, 5946, 5944, 5967, 5953, 5963, 5956, 5929, 5957, 5974, 5969, 5975, 5938, 5952, 5958, 5932, 5973, 5978, 5964, 5933, 5965, 5943, 5945, 5931, 5935, 5960, 5930, 5971, 5977, 5940, 5951, 5936, 5942, 5966, 5947, 5939, 5941, 5955, 5961, 5972, 5950, 5976, 5949, 5948, 5937, 5968, 5970, 5962, 5959};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843009213699880;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> numbers = {4923948, 4923919, 4923946, 4923933, 4923930, 4923950, 4923944, 4923929, 4923936, 4923939, 4923942, 4923935, 4923927, 4923931, 4923917, 4923932, 4923924, 4923922, 4923934, 4923914, 4923926, 4923915, 4923921, 4923937, 4923923, 4923913, 4923928, 4923949, 4923951, 4923945, 4923916, 4923925, 4923941, 4923940, 4923912, 4923920, 4923938, 4923918, 4923943, 4923947};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843009218617863;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> numbers = {582838205, 582838202, 582838211, 582838188, 582838186, 582838187, 582838203, 582838190, 582838210, 582838194, 582838213, 582838204, 582838189, 582838192, 582838206, 582838199, 582838207, 582838193, 582838201, 582838197, 582838185, 582838208, 582838214, 582838209, 582838184, 582838183, 582838195, 582838191, 582838198, 582838212, 582838196, 582838200, 582838182};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843009796532133;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> numbers = {999999971, 999999961, 999999964, 999999965, 999999982, 999999970, 999999954, 999999969, 999999963, 999999956, 999999962, 999999958, 999999975, 999999973, 999999979, 999999976, 999999967, 999999955, 999999977, 999999953, 999999983, 999999951, 999999952, 999999957, 999999978, 999999966, 999999981, 999999959, 999999972, 999999980, 999999960, 999999968, 999999974};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843010213693902;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> numbers = {2758, 2745, 2765, 2750, 2738, 2727, 2732, 2771, 2770, 2768, 2754, 2729, 2746, 2753, 2742, 2774, 2743, 2739, 2741, 2761, 2737, 2763, 2764, 2769, 2744, 2767, 2756, 2760, 2766, 2740, 2775, 2733, 2730, 2757, 2735, 2747, 2749, 2762, 2776, 2731, 2773, 2736, 2748, 2759, 2751, 2752, 2772, 2734, 2755, 2728};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606849702;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> numbers = {128, 16, 512, 256, 256, 268435456, 1024, 8192, 2097152, 128, 64, 67108864, 131072, 8, 32, 2097152, 64, 268435456, 67108864, 1048576, 4, 8, 65536, 134217728, 4194304, 134217728, 16777216, 1024, 131072, 536870912, 256, 256, 8192, 1024, 4, 64, 256, 2097152, 32, 4, 268435456, 32, 512, 128, 16777216, 8192, 8, 2, 256, 1048576};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2251799813685249;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> numbers = {531441, 59049, 4782969, 6561, 129140163, 81, 387420489, 27, 81, 531441, 4782969, 387420489, 387420489, 531441, 81, 6561, 387420489, 4782969, 177147, 43046721, 531441, 2187, 729, 243, 3, 1, 1, 243, 1, 387420489, 43046721, 9, 59049, 243, 6561, 81, 2187, 6561, 43046721, 177147, 6561, 2187, 43046721, 43046721, 531441, 1, 6561, 6561, 387420489, 19683};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> numbers = {64, 4, 16, 64, 65536, 4, 268435456, 268435456, 1024, 4, 16, 16, 1024, 16, 16, 67108864, 16, 4, 16777216, 16777216, 1024, 65536, 268435456, 16, 65536, 256, 268435456, 262144, 67108864, 65536, 16777216, 16384, 16, 1048576, 16384, 262144, 16777216, 256, 1048576, 1, 67108864, 1048576, 65536, 268435456, 16777216, 256, 1048576, 4096, 1, 16777216};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842627;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> numbers = {390625, 125, 9765625, 625, 5, 390625, 625, 15625, 78125, 48828125, 15625, 25, 3125, 25, 78125, 15625, 25, 1953125, 1953125, 1953125, 244140625, 625, 390625, 1953125, 5, 25, 625, 1, 625, 48828125, 48828125, 3125, 78125, 78125, 3125, 1, 625, 25, 125, 125, 390625, 48828125, 78125, 125, 3125, 390625, 78125, 1953125, 1, 9765625};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> numbers = {100000, 10, 100000, 1, 10000000, 1000, 10000, 10000, 10000, 10000, 1000000, 1000000, 100, 1, 100000, 100000000, 1000, 100000000, 1000000000, 100, 100000, 10000000, 100000, 1000000, 1000, 10000000, 1000, 1000, 1000000, 1000000, 100, 1000000, 1, 10, 1000, 1000000000, 1, 100000000, 10000, 1000, 10, 10000000, 100, 10000, 100, 1, 100000, 100000, 100000, 100000000};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> numbers = {8111104, 8111104, 1, 2848, 8111104, 2848, 1, 8111104, 8111104, 8111104, 2848, 2848, 8111104, 2848, 1, 1, 1, 1, 8111104, 1, 1, 8111104, 2848, 1, 1, 2848, 2848, 1, 1, 1, 2848, 2848, 2848, 2848, 2848, 2848, 8111104, 8111104, 8111104, 8111104, 8111104, 2848, 1, 2848, 2848, 1, 8111104, 1, 1, 1};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> numbers = {1, 1, 394949, 1, 1, 394949, 394949, 394949, 394949, 394949, 394949, 394949, 394949, 1, 394949, 1, 394949, 394949, 394949, 1, 1, 1, 394949, 394949, 394949, 394949, 1, 1, 394949, 1, 394949, 394949, 1, 1, 394949, 1, 1, 394949, 1, 394949, 394949, 1, 1, 394949, 394949, 1, 394949, 394949, 1, 1};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> numbers = {4194304, 1048576, 33554432, 67108864, 8, 32768, 256, 1024, 512, 1, 2097152, 131072, 128, 524288, 2048, 16, 16777216, 8192, 8388608, 2, 4, 16384, 536870912, 268435456, 134217728, 65536, 4096, 262144, 64, 32};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1610612735;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> numbers = {81, 19683, 6561, 1, 1594323, 9, 177147, 2187, 27, 729, 43046721, 387420489, 14348907, 243, 4782969, 129140163, 59049, 3, 531441};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 655855944;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> numbers = {256, 4, 64, 1, 4194304, 1024, 16384, 268435456, 16777216, 4096, 1048576, 67108864, 16, 262144, 65536};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 536870911;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> numbers = {625, 244140625, 1, 15625, 390625, 3125, 25, 78125, 9765625, 5, 125, 1953125, 48828125};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 311249488;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> numbers = {1000000000, 1000000, 1, 10000000, 100, 100000000, 100000, 1000, 10000, 10};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1134217727;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> numbers = {2848, 8111104, 1};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 8115199;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> numbers = {1, 394949};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 394952;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> numbers = {15, 1048575, 31, 1, 32767, 2097151, 15, 7, 7, 134217727, 1, 134217727, 127, 7, 8388607, 3, 127, 4194303, 4194303, 3, 8388607, 1048575, 1023, 268435455, 7, 32767, 262143, 1023, 511, 33554431, 2097151, 131071, 536870911, 524287, 524287, 16777215, 4194303, 2097151, 255, 7, 536870911, 1048575, 1, 67108863, 1, 63, 8388607, 15, 8388607, 65535};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> numbers = {177146, 43046720, 26, 14348906, 43046720, 2, 8, 8, 177146, 59048, 80, 59048, 2186, 129140162, 26, 129140162, 2, 14348906, 8, 387420488, 43046720, 2, 728, 19682, 19682, 14348906, 4782968, 177146, 531440, 177146, 2186, 242, 19682, 728, 129140162, 242, 19682, 387420488, 4782968, 387420488, 14348906, 177146, 728, 1594322, 80, 43046720, 1594322, 14348906, 4782968, 43046720};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842631;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> numbers = {255, 4194303, 15, 268435455, 63, 16383, 1048575, 65535, 255, 16777215, 4194303, 3, 1023, 63, 4095, 1023, 1023, 1048575, 16777215, 63, 1023, 1048575, 255, 16777215, 262143, 67108863, 1048575, 268435455, 67108863, 262143, 15, 16383, 3, 262143, 63, 16383, 268435455, 1048575, 1023, 262143, 67108863, 1023, 15, 4095, 255, 4194303, 15, 63, 4095, 16383};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2251799813685262;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> numbers = {9765624, 244140624, 3124, 244140624, 1953124, 624, 3124, 624, 4, 390624, 48828124, 124, 1953124, 624, 244140624, 390624, 1953124, 15624, 24, 9765624, 24, 24, 244140624, 15624, 24, 1953124, 78124, 124, 3124, 48828124, 24, 78124, 244140624, 9765624, 124, 1953124, 124, 9765624, 78124, 24, 624, 9765624, 390624, 78124, 624, 624, 15624, 244140624, 24, 124};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 9007199254740995;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> numbers = {9999999, 99999999, 9, 999999, 999, 99999999, 99, 99, 999, 9999999, 99999999, 99999, 9999, 99, 99, 9999, 9, 999999, 9, 999, 999999, 9999999, 999999, 999999999, 999999, 999, 999999999, 99, 9999999, 9999999, 99, 999999999, 999999, 9999, 99999, 999999, 999, 9, 99999, 999999999, 9, 9999, 999999999, 99999999, 9, 99, 9, 999999, 999, 99};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4503599627370504;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> numbers = {8111103, 8111103, 8111103, 8111103, 8111103, 2847, 8111103, 2847, 2847, 8111103, 2847, 2847, 8111103, 8111103, 8111103, 8111103, 8111103, 8111103, 2847, 2847, 2847, 2847, 8111103, 8111103, 8111103, 8111103, 2847, 2847, 2847, 2847, 2847, 2847, 8111103, 8111103, 8111103, 8111103, 2847, 8111103, 2847, 8111103, 8111103, 8111103, 2847, 2847, 8111103, 8111103, 8111103, 8111103, 2847, 2847};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1152921504606849822;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> numbers = {394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948, 394948};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2305843009214088899;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> numbers = {7, 8191, 131071, 2097151, 3, 1, 1048575, 262143, 1023, 63, 255, 524287, 536870911, 134217727, 32767, 268435455, 67108863, 8388607, 2047, 33554431, 4095, 511, 65535, 4194303, 31, 15, 16777215, 127, 16383};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1073741822;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> numbers = {1594322, 59048, 177146, 4782968, 2186, 242, 80, 387420488, 129140162, 728, 43046720, 26, 2, 14348906, 19682, 531440, 6560, 8};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 655855943;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> numbers = {16383, 262143, 67108863, 63, 268435455, 15, 4194303, 1048575, 255, 16777215, 1023, 65535, 3, 4095};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 402653182;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> numbers = {124, 24, 78124, 244140624, 4, 390624, 3124, 624, 48828124, 15624, 9765624, 1953124};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 311249487;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> numbers = {999999999, 9999, 999, 9999999, 99, 9, 99999999, 999999, 99999};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1134217726;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> numbers = {8111103, 2847};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 8115198;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> numbers = {1, 2, 3};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> numbers = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 281475976710655;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> numbers = {53454325, 43534, 4532, 321312, 13213, 5345, 6546, 76575, 98797, 99808, 43543, 4232, 453345, 8756, 456, 54, 54334, 1};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 120563188;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> numbers = {29877788, 99999999, 1000000000, 565200300, 1000000, 25678912, 23232323, 15, 2, 800001, 900000055, 1000005, 257, 1025, 1023, 8048, 500000000, 29877788, 99999999, 1000000000, 565200300, 1000000, 25678912, 23232323, 15, 2, 800001, 900000055, 1000005, 257, 1025, 1023, 8048, 500000000, 29877788, 99999999, 1000000000, 565200300, 1000000, 25678912, 23232323, 15, 2, 800001, 900000055, 1000005};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899907642624;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 90, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> numbers = {123, 2, 4, 525, 6, 4, 34, 567, 8, 65, 43, 24, 567, 8, 8, 65, 432, 2, 456, 789, 87, 654, 3, 456, 78, 9, 7, 6543, 456, 78, 6, 76, 543, 245, 677, 998765, 4345, 657, 54, 35, 43, 7579, 6, 52453, 677, 854, 354676, 213, 5367, 9};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842625;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> numbers = {1, 2, 3, 4};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> numbers = {1, 6};
    SignalIntelligence* pObj = new SignalIntelligence();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22892160&rd=14159&pm=11059
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
 
 
class SignalIntelligence {
public:
  long long encrypt(vector <int> numbers) {
    int n = numbers.size();
    long long best = -1;
    for (int i=0;i<n;i++) { // every possible last number
      //printf("try %d as last one\n", numbers[i]);
      vector<int> numbers2;
      for (int j=0;j<n-1;j++) numbers2.push_back(numbers[j+((j>=i)?1:0)]);
      sort(numbers2.begin(),numbers2.end());
      //printf("numbers left:");
      //for (int j=0;j<n-1;j++) printf(" %d", numbers2[j]);
      //printf("\n");
      long long pos = 1, npos = pos;
      for (int j=0;j<n-1;j++) {
        //printf("set %d at pos %d\n", numbers2[j], pos);
        npos = pos;
        while (pos + numbers2[j] >= npos) npos *= 2;
        pos = npos;
      }
      //printf("would be %d long\n\n",pos + numbers[i]-1);
      if (best == -1 || npos + numbers[i]-1 < best) best = npos + numbers[i]-1;
    }
    return best;
  }
};
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/