/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2226
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

class LongPipes {
public:
    int fewestWelds(vector<string> segments, string desiredLength);
};

int LongPipes::fewestWelds(vector<string> segments, string desiredLength) {
    int ret;
    return ret;
}


int test0() {
    vector<string> segments = {"1.000", "2.000", "4.000", "8.000", "16.000", "32.000", "64.000", "128.000", "256.000", "512.000", "1024.000", "2048.000", "4096.000", "8192.000", "16384.000", "32768.000", "65536.000"};
    string desiredLength = "65535.000";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> segments = {"0.001", "0.002", "0.004", "0.008", "0.016", "0.032", "0.064", "0.128", "0.256", "0.512", "1.024", "2.048", "4.096", "8.192", "16.384", "32.768", "65.536", "131.072", "262.144", "524.288", "1048.576", "2097.152", "4194.304", "8388.608", "16777.216", "33554.432", "67108.864", "134217.728", "268435.456", "536870.912", "1073741.824", "2147483.648", "4294967.296", "8589934.592", "17179869.184", "34359738.368", "68719476.736", "137438953.472"};
    string desiredLength = "233333333.555";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> segments = {"0.001", "0.002", "0.004", "0.008", "0.016", "0.032", "0.064", "0.128", "0.256", "0.512", "1.024", "2.048", "4.096", "8.192", "16.384", "32.768", "65.536", "131.072", "1000.001", "1000.002", "1000.004", "1000.008", "1000.016", "1000.032", "1000.064", "1000.128", "1000.256", "1000.512", "1001.024", "1002.048", "1004.096", "1008.192", "1016.384", "1032.768", "1065.536", "1131.072"};
    string desiredLength = "1000.128";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> segments = {"0.001", "0.002", "0.004", "0.008", "0.016", "0.032", "0.064", "0.128", "0.256", "0.512", "1.024", "2.048", "4.096", "8.192", "16.384", "32.768", "65.536", "131.072", "1000.001", "1000.002", "1000.004", "1000.008", "1000.016", "1000.032", "1000.064", "1000.128", "1000.256", "1000.512", "1001.024", "1002.048", "1004.096", "1008.192", "1016.384", "1032.768", "1065.536", "1131.072"};
    string desiredLength = "1000.000";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> segments = {"1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234", "1.234"};
    string desiredLength = "13.574";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> segments = {"0.001", "0.002", "0.004", "0.008", "0.016", "0.032", "0.064", "0.128", "0.256", "0.512", "1.024", "2.048", "4.096", "8.192", "16.384", "32.768", "65.536", "131.072", "500000.000", "700000.000", "30000.000", "1000.001", "1000.002", "1000.004", "1000.008", "1000.016", "1000.032", "1000.064", "1000.128", "1000.256", "1000.512", "1001.024", "1002.048", "1004.096", "1008.192", "1016.384", "1032.768", "1065.536"};
    string desiredLength = "501000.128";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> segments = {"1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000"};
    string desiredLength = "38000000000.000";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> segments = {"0.002", "0.002", "0.004", "0.008", "0.016", "0.032", "0.064", "0.128", "0.256", "0.512", "1.024", "2.048", "4.096", "8.192", "16.384", "32.768", "65.536", "131.072", "262.144", "524.288", "1048.576", "2097.152", "4194.304", "8388.608", "16777.216", "33554.432", "67108.864", "134217.728", "268435.456", "536870.912", "1073741.824", "2147483.648", "4294967.296", "8589934.592", "17179869.184", "34359738.368", "68719476.736", "137438953.472"};
    string desiredLength = "1000000000.001";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> segments = {"0.001", "0.002", "0.004", "0.008", "0.016", "0.032", "0.064", "0.128", "0.256", "0.512", "1.024", "2.048", "4.096", "8.192", "16.384", "32.768", "65.536", "131.072", "262.144", "524.288", "1048.576", "2097.152", "4194.304", "8388.608", "16777.216", "33554.432", "67108.864", "134217.728", "268435.456", "536870.912", "1073741.824", "2147483.648", "4294967.296", "8589934.592", "17179869.184", "34359738.368", "68719476.736", "137438953.472"};
    string desiredLength = "274877906.943";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> segments = {"1234567.890"};
    string desiredLength = "1234567.890";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> segments = {"1234567.890"};
    string desiredLength = "123456.789";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> segments = {"1.234", "4.432", "5.937", "5.393", "9.395", "7.385", "4.385", "2.314", "9.087", "4.398", "0.538", "4.345", "9.323", "4.124", "1.593", "1.402", "2.594", "7.321", "5.320", "0.320", "9.395", "6.526", "7.393", "3.592", "3.433", "2.405", "2.502", "1.504", "7.970", "9.099", "8.888", "6.666", "9.342", "8.325", "7.112"};
    string desiredLength = "100.000";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> segments = {"1.234", "4.432", "5.937", "5.393", "9.395", "7.385", "4.385", "2.314", "9.087", "4.398", "0.538", "4.345", "9.323", "4.124", "1.593", "1.402", "2.594", "7.321", "5.320", "0.320", "9.395", "6.526", "7.393", "3.592", "3.433", "2.405", "2.502", "1.504", "7.970", "9.099", "8.888", "6.666", "9.342", "8.325", "7.112"};
    string desiredLength = "143.042";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> segments = {"1.234", "4.432", "5.937", "5.393", "9.395", "7.385", "4.385", "2.314", "9.087", "4.398", "0.538", "4.345", "9.323", "4.124", "1.593", "1.402", "2.594", "7.321", "5.320", "0.320", "9.395", "6.526", "7.393", "3.592", "3.433", "2.405", "2.502", "1.504", "7.970", "9.099", "8.888", "6.666", "9.342", "8.325", "7.112"};
    string desiredLength = "85.000";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> segments = {"1.234", "4.432", "5.937", "5.393", "9.395", "7.385", "4.385", "2.314", "9.087", "4.398", "0.538", "4.345", "9.323", "4.124", "1.593", "1.402", "2.594", "7.321", "5.320", "0.320", "9.395", "6.526", "7.393", "3.592", "3.433", "2.405", "2.502", "1.504", "7.970", "9.099", "8.888", "6.666", "9.342", "8.325", "7.112"};
    string desiredLength = "200.000";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> segments = {"1.234", "4.432", "5.937", "5.393", "9.395", "7.385", "4.385", "2.314", "9.087", "4.398", "0.538", "4.345", "9.323", "4.124", "1.593", "1.402", "2.594", "7.321", "5.320", "0.320", "9.395", "6.526", "7.393", "3.592", "3.433", "2.405", "2.502", "1.504", "7.970", "9.099", "8.888", "6.666", "9.342", "8.325", "7.112"};
    string desiredLength = "180.445";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> segments = {"1.234", "4.432", "5.937", "5.393", "9.395", "7.385", "4.385", "2.314", "9.087", "4.398", "0.538", "4.345", "9.323", "4.124", "1.593", "1.402", "2.594", "7.321", "5.320", "0.320", "9.395", "6.526", "7.393", "3.592", "3.433", "2.405", "2.502", "1.504", "7.970", "9.099", "8.888", "6.666", "9.342", "8.325", "7.112"};
    string desiredLength = "150.042";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> segments = {"1.234", "4.432", "5.937", "5.393", "9.395", "7.385", "4.385", "2.314", "9.087", "4.398", "0.538", "4.345", "9.323", "4.124", "1.593", "1.402", "2.594", "7.321", "5.320", "0.320", "9.395", "6.526", "7.393", "3.592", "3.433", "2.405", "2.502", "1.504", "7.970", "9.099", "8.888", "6.666", "9.342", "8.325", "7.112"};
    string desiredLength = "100.001";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> segments = {"1.234", "4.432", "5.937", "5.393", "9.395", "7.385", "4.385", "2.314", "9.087", "4.398", "0.538", "4.345", "9.323", "4.124", "1.593", "1.402", "2.594", "7.321", "5.320", "0.320", "9.395", "6.526", "7.393", "3.592", "3.433", "2.405", "2.502", "1.504", "7.970", "9.099", "8.888", "6.666", "9.342", "8.325", "7.112"};
    string desiredLength = "100.100";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> segments = {"1.234", "4.432", "5.937", "5.393", "9.395", "7.385", "4.385", "2.314", "9.087", "4.398", "0.538", "4.345", "9.323", "4.124", "1.593", "1.402", "2.594", "7.321", "5.320", "0.320", "9.395", "6.526", "7.393", "3.592", "3.433", "2.405", "2.502", "1.504", "3.431", "3.595", "9.939", "7.970", "9.099", "8.888", "6.666", "9.342", "8.325", "7.112"};
    string desiredLength = "200.000";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> segments = {"1.234", "4.432", "5.937", "5.393", "9.395", "7.385", "4.385", "2.314", "9.087", "4.398", "0.538", "4.345", "9.323", "4.124", "1.593", "1.402", "2.594", "7.321", "5.320", "0.320", "9.395", "6.526", "7.393", "3.592", "3.433", "2.405", "2.502", "1.504", "3.431", "3.595", "9.939", "7.970", "9.099", "8.888", "6.666", "9.342", "8.325", "7.112"};
    string desiredLength = "180.000";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> segments = {"1.234", "4.432", "5.937", "5.393", "9.395", "7.385", "4.385", "2.314", "9.087", "4.398", "0.538", "4.345", "9.323", "4.124", "1.593", "1.402", "2.594", "7.321", "5.320", "0.320", "9.395", "6.526", "7.393", "3.592", "3.433", "2.405", "2.502", "1.504", "3.431", "3.595", "9.939", "7.970", "9.099", "8.888", "6.666", "9.342", "8.325", "7.112"};
    string desiredLength = "175.625";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> segments = {"1.234", "4.432", "5.937", "5.393", "9.395", "7.385", "4.385", "2.314", "9.087", "4.398", "0.538", "4.345", "9.323", "4.124", "1.593", "1.402", "2.594", "7.321", "5.320", "0.320", "9.395", "6.526", "7.393", "3.592", "3.433", "2.405", "2.502", "1.504", "3.431", "3.595", "9.939", "7.970", "9.099", "8.888", "6.666", "9.342", "8.325", "7.112"};
    string desiredLength = "163.333";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> segments = {"1.234", "4.432", "5.937", "5.393", "9.395", "7.385", "4.385", "2.314", "9.087", "4.398", "0.538", "4.345", "9.323", "4.124", "1.593", "1.402", "2.594", "7.321", "5.320", "0.320", "9.395", "6.526", "7.393", "3.592", "3.433", "2.405", "2.502", "1.504", "3.431", "3.595", "9.939", "7.970", "9.099", "8.888", "6.666", "9.342", "8.325", "7.112"};
    string desiredLength = "133.333";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> segments = {"1.234", "4.432", "5.937", "5.393", "9.395", "7.385", "4.385", "2.314", "9.087", "4.398", "0.538", "4.345", "9.323", "4.124", "1.593", "1.402", "2.594", "7.321", "5.320", "0.320", "9.395", "6.526", "7.393", "3.592", "3.433", "2.405", "2.502", "1.504", "3.431", "3.595", "9.939", "7.970", "9.099", "8.888", "6.666", "9.342", "8.325", "7.112"};
    string desiredLength = "50.000";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> segments = {"687122686.865", "422334283.815", "101039459.085", "616884051.235", "534615042.160", "852550848.003", "308041591.721", "623922155.731", "805922783.187", "660439988.332", "215425468.382", "253994287.006", "973382448.660", "76915868.366", "812635347.459", "461224233.415", "123102703.939", "888306697.035", "324502566.646", "872774743.948", "85355482.680", "515064550.794", "516837980.746", "744418627.427", "920252638.085", "677205700.900", "273325859.603", "575106576.024", "403239759.867", "603513639.285", "713250203.784", "962562671.663", "404937848.192", "991535018.397", "369584796.984", "531939163.433", "309864552.871", "175400840.053"};
    string desiredLength = "10847110893.434";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> segments = {"196978332.758", "19561333.009", "868566078.848", "208503190.610", "429165867.504", "843794222.459", "127690818.048", "818059373.234", "555337602.020", "745061944.597", "332536322.722", "438594472.169", "934996653.332", "327051238.488", "946600509.006", "781373581.390", "820836722.280", "581130280.841", "182668668.557", "646815052.916", "809171027.972", "726014065.726", "689967169.544", "936915915.208", "987443839.265", "944707743.310", "291915521.709", "74720734.984", "298355668.939", "850758864.995", "919007694.232", "287865199.518", "890133632.067", "765850022.496", "131354070.541", "463225700.217", "472477833.068", "140763238.024"};
    string desiredLength = "13631156506.544";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> segments = {"875415413.083", "529706052.980", "947715603.354", "701746781.005", "369459857.129", "576192688.291", "836694237.975", "154316610.409", "262274373.669", "161709617.898", "268943822.191", "526522648.739", "459661817.351", "524804220.479", "556641444.594", "483711945.189", "263254932.433", "649195488.406", "621907739.508", "196819582.222", "716178440.184", "392715308.628", "796967301.152", "596218600.772", "300090558.335", "136574978.583", "766704202.866", "93160357.103", "378135172.868", "661987179.966", "673143634.896", "100836415.177", "28335826.497", "211175544.233", "651391065.407", "937093305.598", "161963064.486", "939802427.523"};
    string desiredLength = "10011508685.004";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> segments = {"316560318.195", "940831277.349", "71405817.890", "217846514.801", "971221561.973", "884118440.426", "802078819.324", "485961355.197", "552900492.972", "12051596.962", "992896604.711", "624346068.350", "591160279.400", "292394615.061", "79845865.132", "41159554.715", "693797020.516", "707026291.103", "7187097.109", "937509382.569", "331680341.025", "667228115.195", "840816846.065", "456046677.242", "941770283.323", "884843952.560", "928322050.088", "670198162.951", "617841634.019", "281342390.819", "500257264.633", "621066660.401", "908447152.721", "766813207.172", "857176461.577", "859031361.907", "491650593.663", "970929174.807"};
    string desiredLength = "12413602971.259";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> segments = {"536950429.123", "197078956.227", "746061248.920", "257904386.888", "106901041.271", "632897066.430", "487700866.537", "607480608.011", "475283669.244", "646761110.222", "392234396.645", "193972436.594", "866649040.821", "332245785.307", "872095664.760", "745402944.575", "855615693.321", "66792669.170", "428039417.898", "14760972.737", "103584348.525", "679164889.993", "744650924.640", "945411144.554", "692925362.736", "320820276.143", "49344135.207", "362687888.637", "203170721.845", "498234306.007", "504380081.867", "273705046.745", "923741533.404", "973203915.449", "651436488.482", "107411783.774", "847742448.340", "488163507.009"};
    string desiredLength = "9113968781.692";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> segments = {"178259844.831", "476926562.933", "341354284.690", "523544553.393", "526931234.889", "296179984.472", "633356010.309", "544209714.698", "113277316.267", "332898213.940", "519307364.387", "441993018.378", "176957494.117", "529957671.667", "924923326.869", "131377311.973", "531758485.548", "677142925.502", "223171842.306", "505340038.408", "735627891.547", "265338302.058", "449625850.727", "208398700.349", "449977652.073", "605185091.435", "810601039.540", "933887547.730", "7788740.549", "542235181.045", "128610316.891", "202496087.501", "460048457.726", "350632702.929", "119666725.947", "829101359.499", "620051494.845", "637354478.057"};
    string desiredLength = "8041310400.457";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> segments = {"646965435.487", "534924778.672", "875095924.931", "339041058.048", "345476578.391", "412044958.562", "785105567.818", "143449259.566", "261979923.591", "197297711.140", "737709820.661", "917557433.044", "405072758.209", "562594570.864", "179312302.699", "974354979.376", "349681972.897", "878691015.697", "191679383.664", "260347080.567", "290611987.848", "159435531.787", "433580175.571", "795806076.021", "189659579.571", "143531104.324", "717009005.122", "949800606.921", "910826627.507", "720839886.402", "737521387.675", "382033923.125", "488162533.459", "160262814.671", "728215496.036", "733522422.887", "920767131.760", "846225139.653"};
    string desiredLength = "9417776971.488";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> segments = {"56889467.016", "398145916.667", "139485463.184", "480798931.727", "35906442.160", "957100528.897", "39825774.392", "958494461.961", "464298393.385", "108285930.118", "725631959.473", "370750855.700", "671639773.135", "172657582.391", "358041484.994", "847157985.156", "83222747.578", "509575906.474", "254260365.297", "190440527.873", "576064642.680", "423183075.999", "130686162.395", "512235345.221", "145279309.522", "391838877.775", "634910450.544", "326693755.996", "650343552.790", "702646991.636", "561131965.736", "808939583.582", "660789695.507", "823102898.001", "393511500.177", "175414574.135", "670855759.195", "91894475.999"};
    string desiredLength = "6079610983.999";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> segments = {"72000097.287", "393142161.087", "202624399.619", "560886716.369", "125171599.846", "674941002.059", "567181831.409", "70321917.482", "564590711.917", "467619375.256", "303328038.187", "889266215.003", "185248230.691", "890182002.989", "563369553.645", "503334193.502", "166594079.881", "829079934.908", "965525879.226", "381722378.391", "118700061.581", "147535676.982", "682481054.837", "805583214.932", "968083010.379", "715973729.445", "785611470.587", "89770489.150", "327719990.954", "220588771.880", "114421145.408", "779987685.652", "245786573.137", "957081993.937", "190715806.419", "657370438.336", "477649475.489", "66597340.485"};
    string desiredLength = "8730147744.673";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> segments = {"947046987.452", "632534174.106", "675644961.540", "920888594.354", "288957398.627", "861118485.588", "141174033.881", "613748730.213", "760558867.361", "662859280.771", "33645787.907", "765732663.896", "832973886.635", "76220044.417", "180800141.755", "99204808.365", "585172421.069", "130613326.238", "884941371.303", "490742419.073", "796734760.771", "168243917.311", "369613242.072", "457926370.872", "722071976.646", "797604926.607", "761247561.801", "287550207.680", "65635281.224", "310657675.209", "750316997.673", "262278935.676", "927645125.988", "645727208.689", "326523572.186", "692788900.431", "739871853.349", "228144248.365"};
    string desiredLength = "13195248478.705";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> segments = {"594233979.938", "280992332.606", "331831042.987", "477418583.122", "508223331.447", "286911870.588", "308133561.820", "482144747.655", "663394042.239", "162968970.630", "28789605.041", "219358316.685", "171085109.012", "416682102.629", "369461385.708", "677802855.035", "473434913.489", "699967904.395", "593438562.704", "389191656.846", "809591558.414", "720801445.688", "175789199.325", "542046865.372", "469093649.384", "521148420.461", "588509321.743", "916888774.172", "242577678.767", "93825487.808", "581827376.976", "740431375.617", "729968469.666", "560945090.131", "746819461.627", "806440524.336", "416308620.102", "386601155.284"};
    string desiredLength = "12053992022.390";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> segments = {"394492164.920", "460911072.063", "675383412.837", "346451616.340", "36488711.023", "299218931.741", "111297421.564", "226854103.563", "2574923.814", "672904539.114", "898158958.525", "476211301.041", "980061347.282", "353744064.522", "28028765.658", "281181897.887", "510317500.831", "952764194.943", "627289042.148", "790413455.070", "727534744.228", "941857218.982", "751589203.058", "458453766.012", "874893977.342", "375652465.797", "319524409.757", "732496264.597", "383294209.828", "661300167.589", "95203482.878", "554616572.805", "547798576.080", "973824355.416", "879862007.564", "402155734.179", "86953912.563", "164700776.009"};
    string desiredLength = "7169781979.739";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> segments = {"322677204.480", "838906845.361", "120139899.154", "261316104.087", "10940741.429", "799761056.578", "348104455.298", "904964847.608", "749745649.261", "81469273.335", "471841295.749", "325040093.805", "191343583.976", "762176059.196", "134966150.434", "697074277.388", "224328948.882", "522381364.097", "924747590.478", "982286260.296", "782805694.033", "89987107.069", "216949046.863", "596291284.385", "985693463.263", "282084260.166", "899638045.730", "504629348.814", "766329017.803", "366137007.974", "261118926.423", "592769117.407", "402519375.823", "713220039.308", "577145490.952", "408242796.013", "607202961.978", "965965403.898"};
    string desiredLength = "9299715589.301";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> segments = {"182569560.423", "622568869.040", "89874632.596", "193875013.000", "62581820.035", "810618589.707", "748931474.074", "758655194.422", "248701337.993", "395082524.574", "905094979.374", "862229418.133", "554669655.638", "853693560.985", "236066254.302", "85431.571", "437406094.908", "536862372.517", "322570402.343", "792613330.619", "18180277.308", "693381818.122", "965946240.567", "917090291.269", "549158135.412", "551856515.921", "687437741.241", "112968823.216", "860477820.846", "555513508.547", "69343359.104", "483124322.558", "573011558.833", "98050819.796", "848179556.998", "563718389.960", "111969756.369", "358179707.702"};
    string desiredLength = "8062139029.725";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> segments = {"920014607.842", "885334086.344", "806503823.902", "80516974.243", "668129276.220", "998039540.312", "610463518.404", "400483755.165", "273160196.805", "183035833.483", "229465588.052", "60866770.160", "915882545.434", "323545779.120", "689429459.391", "617698583.554", "32788110.627", "657599572.396", "631736695.020", "483112773.775", "34614877.082", "385373726.494", "870170029.723", "902830613.907", "147984847.331", "353739429.350", "994788601.344", "215935183.963", "290305549.994", "290676593.690", "57895310.983", "994589524.631", "138092415.301", "312210025.729", "627252876.652", "911354820.170", "798867622.775", "674523694.610"};
    string desiredLength = "10433077882.219";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> segments = {"741704567.120", "431764706.139", "746791670.428", "993909431.101", "554355993.837", "679812591.135", "932184469.905", "407206492.109", "698474238.222", "74007469.845", "225091598.534", "395388028.961", "661260431.443", "581655034.619", "603052296.642", "242950709.733", "700652190.638", "689020002.450", "743225340.292", "355763958.277", "90312021.233", "435026159.115", "929029087.225", "910034754.743", "727958096.788", "106150193.798", "431451982.618", "555044542.211", "392193444.052", "440165550.291", "775189651.094", "142314310.875", "182990086.215", "436392882.196", "549764928.637", "703854098.930", "930984045.385", "120112719.797"};
    string desiredLength = "7371669056.682";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> segments = {"675787072.607", "152153316.892", "610737764.739", "858797375.636", "286506347.053", "424567992.914", "43125963.117", "77817689.000", "634820303.475", "44761144.682", "422001370.751", "473281152.063", "685887946.772", "323852874.637", "450296411.072", "69657830.005", "305508039.487", "673935894.921", "120717225.103", "719849805.745", "204417935.236", "756613279.955", "426186230.066", "895361001.187", "48668874.067", "439214190.298", "535189377.733", "864223232.282", "396234361.612", "781344358.256", "217184669.224", "604334835.705", "370007631.805", "524426982.014", "553227622.401", "49868223.645", "227344524.487", "806890915.631"};
    string desiredLength = "5484161245.951";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> segments = {"216970568.934", "518402399.043", "236308038.427", "77661779.323", "861191603.852", "416437048.528", "518770779.320", "430612735.798", "395009550.552", "570943984.624", "770531585.646", "832630966.857", "186941307.987", "784612561.935", "18602514.700", "967956037.241", "478957637.529", "462445218.849", "825822613.236", "671446589.702", "546693748.766", "407359285.186", "602954409.162", "173431357.124", "390971047.216", "132451408.508", "938419764.803", "628801136.841", "995785918.921", "287580940.648", "105830946.209", "652997467.094", "437922294.886", "47928182.731", "159473541.573", "837554792.353", "383343892.686", "562184225.106"};
    string desiredLength = "10857455257.558";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> segments = {"277897135.391", "467851790.374", "755522468.413", "808028258.095", "265770244.772", "915728789.291", "610858400.960", "452548710.033", "374155595.892", "429626820.948", "506349815.187", "565264572.764", "849362060.730", "294905082.302", "894666424.375", "281403040.110", "870529637.563", "586992924.815", "331784544.387", "763089677.917", "786103415.370", "990032286.830", "532339169.386", "56107526.862", "809353002.487", "403667471.167", "557849866.976", "689881259.778", "583093665.132", "310637773.160", "672976211.286", "118342712.712", "273765380.467", "127829973.111", "654959400.071", "349334008.337", "105025938.071", "13446131.351"};
    string desiredLength = "9781708993.002";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> segments = {"591406035.137", "360204464.272", "491014585.048", "852943722.217", "451570615.317", "147257720.996", "179442251.794", "396403776.104", "966292609.518", "506705125.457", "64664712.085", "769983566.728", "601744741.050", "894781693.288", "580894915.675", "834109952.324", "662148402.892", "964681006.115", "835710660.811", "111069855.772", "806612768.062", "627965195.511", "894014105.600", "254653761.407", "515253537.099", "738106124.199", "872598935.481", "284508825.255", "289747804.847", "743814430.158", "755481872.002", "57857647.828", "623481234.454", "909812149.346", "90154556.198", "701239090.148", "26443640.760", "952705619.959"};
    string desiredLength = "12705747803.640";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> segments = {"0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002", "0.002"};
    string desiredLength = "0.037";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> segments = {"1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000", "1000000000.000"};
    string desiredLength = "19000000000.001";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> segments = {"1.000", "2.000", "3.000", "4.000", "5.000", "6.000", "7.000", "8.000", "9.000", "10.000", "11.000", "12.000", "13.000", "14.000", "15.000", "16.000", "17.000", "18.000", "19.000", "20.000", "21.000", "22.000", "23.000", "24.000", "25.000", "26.000", "27.000", "28.000", "29.000", "30.000", "31.000", "32.000", "33.000", "34.000", "35.000", "36.000", "37.000", "10000000.000"};
    string desiredLength = "5000000.000";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> segments = {"2.000", "8.000", "10.000", "2.000", "8.000", "10.000"};
    string desiredLength = "20.000";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> segments = {"978816.075", "585011.041", "973852.260", "925858.520", "695439.833", "582266.900", "669548.617", "905714.731", "398063.299", "284521.855", "904103.388", "712657.382", "447401.010", "151701.122", "431585.336", "566208.019", "210933.217", "868591.806", "892025.855", "988110.999", "645449.195", "236534.318", "6158.741", "290820.333", "542209.040", "731071.499", "617140.962", "437018.173", "695230.801", "202713.272", "330058.629", "395785.089", "385858.287", "998454.562", "8189.600", "399946.215", "842531.039", "60740.725"};
    string desiredLength = "10323726.561";
    LongPipes* pObj = new LongPipes();
    clock_t start = clock();
    int result = pObj->fewestWelds(segments, desiredLength);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310430&rd=5851&pm=2226
********************************************************************************
#include <vector>
#include <string>
 
using namespace std;
 
class LongPipes{
  vector <pair <long long, int> > make1(vector <long long> x) {
    int n=x.size();
    int a=1<<n;
    int i,j,k;
    long long sum;
    int c;
    vector <pair <long long, int> > res; res.clear();
    res.push_back(make_pair(0,0));
    for (i=0;i<a;i++) {
      k=i;
      c=0;
      sum=0;
      for (j=0;j<n;j++) {
        if (k%2) {
          c++;
          sum+=x[j];
        }
        k/=2;
      }
      res.push_back(make_pair(sum,c));
    }
    sort(res.begin(),res.end());
    return res;
  }
  vector <pair <long long, int> > make2(vector <long long> x, long long s) {
    int n=x.size();
    int a=1<<n;
    int i,j,k;
    long long sum;
    int c;
    vector <pair <long long, int> > res; res.clear();
    res.push_back(make_pair(s,0));
    for (i=0;i<a;i++) {
      k=i;
      c=0;
      sum=0;
      for (j=0;j<n;j++) {
        if (k%2) {
          c++;
          sum+=x[j];
        }
        k/=2;
      }
      if (s>=sum) res.push_back(make_pair(s-sum,c));
    }
    sort(res.begin(),res.end());
    return res;
  }
  long long tolong(string x) {
    long long res=0;
    int i;
    for (i=0;i<x.size();i++) if (x[i]>='0' && x[i]<='9') {
      res*=10;
      res+=(x[i]-'0');
    }
    return res;
  }
public:
  int fewestWelds(vector <string> segments, string desiredLength) {
    vector <long long> a,b;
    int i,j;
    for (i=0;i<segments.size();i++) {
      if (i%2==0) a.push_back(tolong(segments[i]));
      else b.push_back(tolong(segments[i]));
    }
    vector <pair <long long, int> > x1,x2;
    x1=make1(a);
    x2=make2(b,tolong(desiredLength));
    int res=-1;
    int r;
    for (i=0,j=0;i<x1.size() && j<x2.size();) {
      if (x1[i].first>x2[j].first) {
        j++;
        continue;
      }
      if (x1[i].first<x2[j].first) {
        i++;
        continue;
      }
      r=x1[i].second+x2[j].second;
      if (res<0 || res>r) res=r;
      i++; j++;
    }
    if (res<0) return -1;
    if (res==0) return 0;
    return res-1;
  };
};
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/