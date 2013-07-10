/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9963
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

class ChangeOMatic {
public:
    long howManyRounds(vector<int> outputValues, long inputValue);
};

long ChangeOMatic::howManyRounds(vector<int> outputValues, long inputValue) {
    long ret;
    return ret;
}


int test0() {
    vector<int> outputValues = {1, 5, 10};
    long inputValue = 21;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> outputValues = {1, 33, 90, 91, 92, 93, 94, 95, 96, 97, 98};
    long inputValue = 99;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> outputValues = {1, 30, 60};
    long inputValue = 50;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> outputValues = {1, 30, 60, 90};
    long inputValue = 60;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> outputValues = {1, 8, 9, 11, 12, 100};
    long inputValue = 120;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 37;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> outputValues = {1, 2};
    long inputValue = 987654321098765;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 493827160549383;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> outputValues = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 64, 128, 256, 512, 1000};
    long inputValue = 987654321098765;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 983703703814369;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> outputValues = {1, 2, 3, 4, 5, 6};
    long inputValue = 2;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> outputValues = {1};
    long inputValue = 47;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> outputValues = {1, 47};
    long inputValue = 47;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> outputValues = {1, 302, 402, 595, 596, 597, 598, 599, 600, 601, 602};
    long inputValue = 1206;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> outputValues = {1, 302, 402, 595, 596, 597, 598, 599, 600, 601, 602};
    long inputValue = 6026026021206;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 100100100013;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> outputValues = {1, 999, 1000};
    long inputValue = 997002;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 999;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> outputValues = {1, 999, 1000};
    long inputValue = 999999999997002;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1999999998999;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> outputValues = {1, 999, 1000};
    long inputValue = 996002;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1993;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> outputValues = {1, 997, 998, 999, 1000};
    long inputValue = 1994;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> outputValues = {1, 997, 998, 999, 1000};
    long inputValue = 322142121994;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1288568483;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> outputValues = {1, 90, 900, 994, 995, 996, 997, 998, 999, 1000};
    long inputValue = 1980;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> outputValues = {1, 89, 90, 900, 994, 995, 996, 997, 998, 999, 1000};
    long inputValue = 1980;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 47;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> outputValues = {1, 90, 900, 994, 995, 996, 997, 998, 999, 1000};
    long inputValue = 214215499980;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 4070094481;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> outputValues = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1000};
    long inputValue = 987658765498765;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 982720471671273;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> outputValues = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987};
    long inputValue = 987654321154321;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 986653658214953;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> outputValues = {1, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000};
    long inputValue = 987654321154321;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 48395061735917;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> outputValues = {1, 5, 65, 66, 67, 68, 69, 70, 200, 1000};
    long inputValue = 210;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 51;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> outputValues = {1, 5, 65, 66, 67, 68, 69, 70, 200, 1000};
    long inputValue = 1210;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 292;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> outputValues = {1, 5, 65, 66, 67, 68, 69, 70, 200, 1000};
    long inputValue = 410;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 99;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> outputValues = {1, 5, 70, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 1000};
    long inputValue = 210;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 54;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> outputValues = {1, 5, 70, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 1000};
    long inputValue = 280;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 69;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> outputValues = {1, 5, 70, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 1000};
    long inputValue = 280;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 68;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> outputValues = {1, 5, 70, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 1000};
    long inputValue = 4723521100210;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1185603796153;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> outputValues = {1, 12, 45, 57, 62, 173, 192, 654, 721, 854};
    long inputValue = 9692;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1021;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> outputValues = {1, 12, 45, 57, 62, 173, 192, 654, 721, 854, 857};
    long inputValue = 95648;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 10081;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> outputValues = {1, 12, 45, 57, 62, 173, 192, 654, 721, 854, 857};
    long inputValue = 95647;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 10110;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> outputValues = {1, 12, 45, 57, 62, 173, 192, 654, 721, 854, 857};
    long inputValue = 956480;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 101549;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> outputValues = {1, 12, 45, 57, 62, 173, 192, 654, 721, 849, 854, 857};
    long inputValue = 720801;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 77370;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> outputValues = {1};
    long inputValue = 5819977;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
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
    vector<int> outputValues = {1};
    long inputValue = 953255819977;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
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
    vector<int> outputValues = {1, 866};
    long inputValue = 6;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> outputValues = {1, 230, 789};
    long inputValue = 510829837730;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 2589758364;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> outputValues = {1, 86, 777, 901};
    long inputValue = 2359803658092;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 31429127513;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> outputValues = {1, 146, 225, 330, 719};
    long inputValue = 434169;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 4225;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> outputValues = {1, 21, 367, 563, 731, 987};
    long inputValue = 914398942265;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 45395692171;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> outputValues = {1, 45, 51, 293, 892, 901, 939};
    long inputValue = 32443435609;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1209286688;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> outputValues = {1, 133, 198, 349, 574, 799, 906, 959};
    long inputValue = 4418129272051;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 46070169679;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> outputValues = {1, 241, 373, 404, 638, 767, 859, 861, 988};
    long inputValue = 281082551445;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1706979060;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> outputValues = {1, 22, 183, 252, 278, 363, 590, 611, 832, 892};
    long inputValue = 6700824662;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 353070370;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> outputValues = {1, 4, 228, 234, 343, 472, 490, 514, 532, 732, 863};
    long inputValue = 289451635526422;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 75129972604774;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> outputValues = {1, 266, 320, 395, 452, 459, 581, 915, 928, 948, 991, 1000};
    long inputValue = 2877532;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 25892;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> outputValues = {1, 45, 98, 126, 233, 317, 344, 390, 457, 551, 643, 683, 765};
    long inputValue = 5;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> outputValues = {1, 97, 114, 243, 267, 309, 380, 418, 491, 578, 582, 726, 810, 888};
    long inputValue = 7753;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 157;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> outputValues = {1, 25, 56, 175, 198, 363, 521, 536, 657, 664, 686, 688, 740, 858, 968};
    long inputValue = 53086129;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 2742044;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> outputValues = {1, 182, 317, 344, 367, 389, 445, 481, 619, 680, 779, 782, 806, 853, 927, 968};
    long inputValue = 61329830700347;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 760287157441;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> outputValues = {1, 13, 20, 22, 254, 366, 399, 405, 434, 491, 496, 542, 610, 674, 684, 913, 969};
    long inputValue = 33;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> outputValues = {1, 23, 29, 52, 224, 274, 343, 351, 400, 404, 412, 494, 502, 565, 582, 737, 826, 897};
    long inputValue = 693100438601;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 52542731129;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> outputValues = {1, 28, 39, 164, 209, 214, 448, 452, 488, 519, 541, 580, 588, 684, 691, 764, 860, 901, 1000};
    long inputValue = 89868;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 4856;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> outputValues = {1, 59, 99, 163, 165, 199, 360, 393, 464, 473, 497, 517, 561, 601, 632, 635, 674, 727, 967, 998};
    long inputValue = 5711816123;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 137358325;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> outputValues = {1, 11, 41, 66, 134, 195, 283, 401, 412, 414, 526, 536, 578, 603, 679, 692, 752, 815, 828, 846};
    long inputValue = 2;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> outputValues = {1, 19, 22, 39, 133, 147, 159, 249, 347, 498, 570, 615, 644, 646, 657, 680, 685, 694, 709, 722, 731, 797};
    long inputValue = 132216;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 12937;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> outputValues = {1, 68, 132, 157, 264, 296, 363, 377, 407, 435, 442, 460, 537, 642, 707, 732, 762, 802, 813, 866, 873, 910, 962};
    long inputValue = 9466214218989;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 206642929935;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> outputValues = {1, 84, 93, 229, 256, 291, 301, 304, 321, 390, 443, 535, 575, 611, 699, 756, 779, 794, 883, 897, 923, 965, 992};
    long inputValue = 10;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> outputValues = {1, 68, 71, 106, 132, 149, 159, 235, 249, 273, 421, 435, 487, 503, 548, 626, 689, 712, 745, 770, 781, 792, 807, 853, 866};
    long inputValue = 691781893470;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 20769433294;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> outputValues = {1, 29, 58, 106, 133, 182, 206, 316, 369, 421, 475, 500, 599, 638, 673, 687, 694, 699, 794, 835, 850, 887, 919, 953, 963, 983};
    long inputValue = 7633;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 421;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> outputValues = {1, 149, 203, 205, 296, 370, 384, 392, 483, 498, 514, 529, 557, 588, 598, 625, 638, 683, 696, 763, 777, 780, 806, 897, 922, 976};
    long inputValue = 2003584172;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 30792788;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> outputValues = {1, 4, 77, 96, 127, 175, 236, 241, 391, 421, 456, 463, 529, 619, 620, 630, 708, 734, 760, 804, 815, 830, 952, 953, 959, 976};
    long inputValue = 39135231341;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 10385271433;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> outputValues = {1, 14, 38, 58, 69, 74, 173, 239, 247, 254, 280, 381, 389, 435, 446, 474, 494, 552, 574, 580, 589, 660, 702, 837, 847, 854, 867, 871, 944};
    long inputValue = 75318;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 7020;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> outputValues = {1, 17, 23, 85, 113, 160, 216, 226, 252, 298, 383, 415, 470, 476, 482, 545, 563, 565, 569, 604, 612, 744, 753, 773, 897, 951, 985};
    long inputValue = 179625084847;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 15135920860;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> outputValues = {1, 9, 29, 79, 126, 198, 206, 309, 321, 323, 333, 347, 380, 392, 393, 436, 452, 488, 530, 570, 585, 598, 626, 666, 701, 726, 777, 819, 887, 996};
    long inputValue = 61026377943747;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 9006905178444;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> outputValues = {1, 16, 30, 62, 77, 83, 85, 102, 117, 183, 207, 229, 251, 388, 399, 449, 594, 648, 649, 672, 687, 689, 690, 698, 716, 728, 730, 755, 785, 830, 890, 919};
    long inputValue = 522787;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 47785;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> outputValues = {1, 2, 143, 206, 235, 243, 257, 259, 282, 386, 480, 501, 502, 512, 607, 620, 628, 682, 683, 748, 755, 772, 785, 797, 873, 884, 934, 941, 951, 955, 982, 984};
    long inputValue = 337192936;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 173393930;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> outputValues = {1, 99, 102, 165, 199, 244, 254, 271, 296, 313, 328, 356, 396, 415, 431, 436, 441, 445, 486, 502, 510, 513, 543, 562, 563, 569, 625, 674, 760, 761, 893, 937, 944};
    long inputValue = 8113978;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 197693;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> outputValues = {1, 3, 63, 99, 129, 130, 140, 153, 168, 191, 196, 211, 218, 233, 234, 342, 408, 498, 508, 515, 562, 576, 594, 641, 650, 708, 779, 786, 800, 816, 836, 928, 932, 937, 951};
    long inputValue = 6895334;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 2508716;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> outputValues = {1, 47, 60, 115, 139, 238, 241, 291, 345, 348, 378, 468, 507, 508, 513, 523, 565, 591, 599, 636, 644, 650, 651, 661, 710, 720, 748, 756, 778, 794, 853, 884, 893, 936, 957, 962};
    long inputValue = 10036;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 422;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> outputValues = {1, 32, 78, 82, 111, 123, 191, 204, 211, 244, 279, 286, 319, 376, 453, 454, 485, 524, 550, 561, 598, 681, 685, 717, 725, 733, 773, 811, 875, 901, 919, 925, 926, 932, 972, 980};
    long inputValue = 42;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> outputValues = {1, 9, 19, 42, 110, 113, 127, 135, 255, 311, 326, 328, 370, 374, 388, 404, 417, 489, 567, 570, 642, 683, 708, 715, 717, 750, 757, 760, 779, 832, 891, 892, 897, 931, 962, 986, 992};
    long inputValue = 4;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> outputValues = {1, 60, 74, 83, 106, 137, 186, 199, 260, 270, 291, 342, 345, 346, 393, 398, 411, 471, 518, 521, 535, 538, 568, 574, 618, 632, 676, 710, 745, 782, 792, 814, 819, 852, 910, 914, 955, 957};
    long inputValue = 864956482;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 34345179;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> outputValues = {1, 57, 93, 107, 189, 193, 210, 213, 218, 219, 225, 246, 278, 289, 314, 320, 322, 333, 356, 398, 410, 427, 465, 559, 598, 616, 624, 658, 674, 702, 725, 752, 756, 801, 820, 825, 854, 871, 894, 920};
    long inputValue = 991422285;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 33406620;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> outputValues = {1, 7, 20, 26, 45, 54, 78, 104, 108, 156, 181, 185, 206, 242, 248, 317, 320, 323, 344, 351, 452, 454, 461, 471, 475, 484, 500, 568, 582, 591, 683, 692, 712, 715, 756, 785, 869, 907, 941, 968, 990};
    long inputValue = 9022456918;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1594878748;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> outputValues = {1, 54, 57, 60, 103, 122, 140, 192, 230, 232, 257, 271, 294, 338, 341, 346, 354, 371, 372, 425, 432, 434, 498, 560, 573, 591, 606, 619, 673, 687, 766, 808, 828, 831, 835, 883, 901, 909, 921, 925, 933};
    long inputValue = 66649034;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 3143149;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> outputValues = {1, 3, 17, 18, 50, 90, 167, 208, 250, 368, 376, 391, 410, 413, 418, 434, 495, 497, 500, 504, 536, 555, 558, 593, 646, 673, 689, 695, 701, 748, 775, 831, 833, 852, 859, 889, 906, 917, 934, 953, 954, 955, 994};
    long inputValue = 44650351;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 17563673;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> outputValues = {1, 37, 78, 94, 123, 147, 156, 179, 197, 213, 218, 226, 259, 318, 344, 355, 394, 395, 415, 416, 468, 489, 517, 522, 523, 552, 555, 580, 599, 621, 622, 625, 627, 662, 677, 686, 696, 761, 800, 831, 845, 868, 924, 988};
    long inputValue = 1381;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 65;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> outputValues = {1, 39, 43, 87, 184, 228, 292, 304, 329, 356, 357, 404, 412, 415, 448, 488, 493, 497, 530, 539, 590, 604, 616, 632, 642, 662, 665, 672, 681, 690, 703, 707, 750, 752, 761, 802, 817, 824, 825, 846, 854, 865, 898, 918};
    long inputValue = 59221;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 3411;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> outputValues = {1, 19, 54, 65, 69, 75, 84, 93, 108, 134, 242, 278, 282, 301, 373, 427, 443, 447, 448, 452, 459, 475, 533, 559, 573, 580, 587, 601, 638, 654, 655, 662, 761, 782, 786, 818, 819, 821, 838, 848, 856, 972, 982, 984, 990};
    long inputValue = 222565580314;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 16636215096;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> outputValues = {1, 53, 66, 72, 77, 98, 115, 128, 136, 147, 153, 165, 184, 218, 243, 272, 275, 287, 292, 300, 374, 386, 387, 408, 410, 416, 476, 523, 558, 601, 610, 639, 651, 709, 714, 731, 784, 823, 835, 839, 857, 895, 901, 938, 990};
    long inputValue = 72133877;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 3205941;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> outputValues = {1, 13, 22, 36, 54, 111, 151, 152, 200, 205, 211, 217, 225, 227, 229, 246, 275, 334, 362, 374, 431, 439, 479, 494, 510, 515, 530, 550, 573, 596, 611, 626, 679, 685, 727, 767, 831, 847, 859, 861, 869, 881, 889, 895, 907, 931, 995};
    long inputValue = 500;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 55;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> outputValues = {1, 83, 100, 104, 105, 122, 124, 164, 184, 218, 232, 241, 266, 276, 280, 370, 384, 390, 399, 442, 465, 520, 541, 597, 627, 631, 642, 656, 680, 712, 719, 733, 742, 759, 762, 763, 797, 809, 846, 854, 879, 898, 900, 911, 958, 965, 973, 986, 993};
    long inputValue = 763856971;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 30000414;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> outputValues = {1, 13, 18, 69, 83, 115, 116, 137, 141, 167, 168, 177, 193, 203, 244, 254, 278, 310, 341, 349, 375, 428, 430, 433, 435, 437, 448, 459, 462, 489, 504, 511, 544, 550, 567, 596, 602, 615, 634, 653, 669, 701, 723, 726, 751, 770, 881, 905, 944, 996};
    long inputValue = 4959203061579;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 642306420626;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> outputValues = {1, 962};
    long inputValue = 103638;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 108;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> outputValues = {1, 818, 848, 910};
    long inputValue = 3613395797601;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 11912293821;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> outputValues = {1, 818, 873, 891, 906, 987};
    long inputValue = 38044;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 188;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> outputValues = {1, 826, 840, 879, 898, 933, 963, 967};
    long inputValue = 160160;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1144;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> outputValues = {1, 803, 817, 827, 841, 843, 848, 908, 939, 953};
    long inputValue = 4468552;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 42165;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> outputValues = {1, 801, 872, 873, 875, 877, 884, 886, 928, 941, 960};
    long inputValue = 93631137010;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 975324315;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> outputValues = {1, 832, 836, 837, 846, 868, 875, 887, 911, 925, 930, 970, 999};
    long inputValue = 234889708;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 2821490;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> outputValues = {1, 819, 822, 824, 827, 843, 877, 887, 914, 926, 932, 935, 941, 952, 967};
    long inputValue = 115372422015;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1670334908;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> outputValues = {1, 806, 842, 850, 856, 880, 888, 897, 899, 917, 921, 929, 947, 968, 985, 993, 995};
    long inputValue = 1282;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> outputValues = {1, 821, 823, 824, 830, 836, 839, 841, 856, 885, 892, 915, 939, 945, 957, 975, 979, 994};
    long inputValue = 114048690362432;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1950530921673;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> outputValues = {1, 803, 817, 818, 832, 834, 836, 841, 848, 852, 905, 906, 926, 946, 948, 951, 968, 982, 983, 985, 999};
    long inputValue = 797807166124822;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 15972115437912;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> outputValues = {1, 800, 802, 812, 824, 836, 841, 845, 848, 852, 868, 870, 911, 918, 921, 932, 944, 945, 967, 977, 980, 988, 990, 998};
    long inputValue = 8477847999;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 195381239;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> outputValues = {1, 801, 803, 805, 807, 837, 848, 866, 877, 879, 904, 905, 910, 915, 936, 938, 946, 957, 979, 981, 984, 989, 999};
    long inputValue = 52566;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1125;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> outputValues = {1, 811, 825, 838, 862, 869, 876, 878, 879, 886, 888, 890, 918, 921, 928, 939, 945, 952, 953, 954, 962, 963, 979, 980, 982, 998};
    long inputValue = 2946;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 73;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> outputValues = {1, 806, 808, 824, 833, 837, 840, 845, 846, 863, 874, 875, 876, 887, 902, 909, 913, 925, 932, 938, 939, 949, 950, 954, 956, 957, 976, 978, 989, 995};
    long inputValue = 7556829;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 220228;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> outputValues = {1, 800, 808, 810, 828, 829, 834, 835, 860, 861, 863, 865, 867, 871, 875, 880, 889, 891, 897, 901, 910, 911, 916, 939, 959, 962, 967, 971, 994, 996, 999};
    long inputValue = 34933586667784;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1049056656575;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> outputValues = {1, 804, 807, 817, 825, 830, 837, 856, 863, 864, 866, 870, 874, 884, 891, 892, 893, 895, 900, 903, 905, 908, 916, 919, 922, 933, 936, 950, 975, 980, 989, 994, 997};
    long inputValue = 24019;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 653;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> outputValues = {1, 800, 801, 805, 808, 811, 820, 831, 837, 841, 842, 856, 860, 865, 870, 888, 889, 898, 903, 916, 917, 922, 924, 933, 934, 944, 946, 958, 961, 976, 978, 990, 996, 999};
    long inputValue = 645072563;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 21308616;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> outputValues = {1, 800, 802, 813, 815, 817, 826, 828, 839, 841, 847, 849, 853, 861, 863, 866, 881, 887, 897, 898, 900, 902, 906, 916, 926, 934, 938, 949, 950, 964, 965, 985, 991, 993};
    long inputValue = 979854;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 32534;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> outputValues = {1, 806, 807, 811, 813, 814, 822, 828, 829, 831, 832, 833, 843, 845, 856, 857, 861, 863, 864, 870, 875, 881, 887, 888, 896, 899, 906, 911, 928, 929, 933, 946, 953, 957, 961, 974, 977, 998};
    long inputValue = 1242079753696;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 46049048913;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> outputValues = {1, 809, 822, 823, 827, 836, 841, 842, 851, 859, 860, 866, 878, 883, 886, 889, 906, 908, 909, 912, 915, 918, 921, 923, 927, 934, 935, 944, 949, 955, 957, 958, 960, 963, 974, 976, 981, 986, 993};
    long inputValue = 6097832552;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 233350978;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> outputValues = {1, 800, 803, 812, 830, 832, 838, 845, 849, 855, 862, 864, 879, 882, 886, 889, 891, 894, 920, 922, 923, 928, 935, 936, 939, 945, 949, 950, 953, 954, 960, 968, 973, 974, 990, 998, 999};
    long inputValue = 69634567748;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 2509353657;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> outputValues = {1, 802, 803, 810, 824, 829, 836, 855, 856, 859, 861, 863, 866, 873, 875, 877, 889, 892, 895, 898, 899, 903, 904, 906, 910, 911, 915, 919, 920, 922, 923, 924, 930, 934, 937, 939, 943, 963, 973, 989, 990, 994};
    long inputValue = 681154578679157;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 28095913205009;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> outputValues = {1, 801, 806, 807, 809, 812, 814, 821, 836, 842, 846, 855, 862, 865, 868, 870, 876, 880, 889, 890, 892, 897, 910, 920, 922, 926, 927, 929, 932, 933, 934, 936, 937, 941, 942, 946, 957, 959, 966, 968, 978, 985, 993, 994, 995, 999};
    long inputValue = 30956453;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1394336;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> outputValues = {1, 21, 367, 563, 731, 987};
    long inputValue = 6248;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 312;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> outputValues = {1, 23, 29, 52, 274, 343, 351, 400, 494, 502, 582, 826, 897};
    long inputValue = 826;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 62;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> outputValues = {1, 14, 75, 83, 96, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 128, 129, 130, 141, 142, 173, 194, 213, 317, 402, 542, 712};
    long inputValue = 1234567891234;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 199403521765;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> outputValues = {1, 14, 75, 83, 96, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 128, 129, 130, 141, 142, 173, 194, 213, 317, 402, 542, 712};
    long inputValue = 12345678912345;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1994035217580;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> outputValues = {1, 2, 5, 8, 9, 13, 17, 29, 33, 37, 39, 40, 45, 67, 101, 254, 331, 378, 399, 420, 499, 501, 502, 503, 504, 645, 667, 889, 998, 1000};
    long inputValue = 54389543543254;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 39704366786575;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> outputValues = {1, 998, 1000};
    long inputValue = 498002;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 500;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> outputValues = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 16, 17, 18, 20, 100, 201, 303, 401, 499, 599, 600, 700, 800, 900, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000};
    long inputValue = 999999999999999;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 965000000000000;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> outputValues = {1, 999, 1000};
    long inputValue = 997002;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 999;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> outputValues = {1, 2};
    long inputValue = 1000000000000000;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 500000000000001;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> outputValues = {1, 30, 60};
    long inputValue = 1000000000000000;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 50000000000000;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> outputValues = {1, 991, 992, 994, 995, 997, 998};
    long inputValue = 1000000000000000;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 6012024047413;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> outputValues = {1, 302, 402, 595, 596, 597, 598, 599, 600, 601, 602};
    long inputValue = 6026026021206;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 100100100013;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> outputValues = {1, 999, 1000};
    long inputValue = 56943;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 58;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> outputValues = {1, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 940, 941, 942, 943, 944, 945, 946, 947, 948};
    long inputValue = 999999999999999;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 51687763712276;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> outputValues = {1, 8, 9, 10};
    long inputValue = 17;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> outputValues = {1, 999, 1000};
    long inputValue = 998002;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 1001;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> outputValues = {1, 999, 1000};
    long inputValue = 776223;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 778;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> outputValues = {1, 2, 3, 4, 5, 6, 7, 8, 9, 997, 998, 999, 1000};
    long inputValue = 900000007000013;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 801000006229904;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> outputValues = {1, 999, 1000};
    long inputValue = 501498;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 503;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> outputValues = {1, 999, 1000};
    long inputValue = 100000007;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 199010;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> outputValues = {1, 4, 8, 16, 30};
    long inputValue = 32;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> outputValues = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 83, 87, 103, 107, 113, 117};
    long inputValue = 987987987987987;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 819101152434485;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> outputValues = {1, 999, 1000};
    long inputValue = 68931;
    ChangeOMatic* pObj = new ChangeOMatic();
    clock_t start = clock();
    long result = pObj->howManyRounds(outputValues, inputValue);
    clock_t end = clock();
    delete pObj;
    long expected = 70;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20812309&rd=13511&pm=9963
********************************************************************************
#include <vector> 
 
using namespace std; 
 
int t[1001001], prev[1001001]; 
long long ct[50]; 
long long tt[50]; 
 
class ChangeOMatic { 
  public: 
   
  void doit (int x, const vector<int>& a, int n) { 
    t[0] = 0; 
    printf("doit %d %d\n", x, n); 
    for (int i = 1; i <= x; i ++) { 
      t[i] = 2147483647; 
      for (int j = 0; j < n; j ++) 
        if (i - a[j] >= 0) 
          if (t[i - a[j]] + 1 <= t[i]) { 
            t[i] = t[i - a[j]] + 1; 
            prev[i] = j; 
            } 
      } 
    } 
   
  long long howManyRounds(vector <int> a, long long b) { 
     
    while (a[a.size() - 1] >= b) 
      a.pop_back(); 
    doit(1001000, a, a.size()); 
    for (int i = 0; i < a.size(); i ++) 
      ct[i] = 0; 
    if (b >= 1001000) { 
      ct[a.size() - 1] += (b - 1001000 + a[a.size() - 1] - 1) / a[a.size() - 1]; 
      b -= (b - 1001000 + a[a.size() - 1] - 1) / a[a.size() - 1] * a[a.size() - 1]; 
      } 
    while (b) { 
      ct[prev[b]] ++; 
      b -= a[prev[b]]; 
      } 
    long long ans = 1; 
    for (int i = a.size() - 1; i > 0; i --) { 
      ans +=ct[i]; 
      doit(a[i], a, i); 
      for (int k = 0; k < a.size(); k ++) 
        tt[k] = 0; 
      int j = a[i]; 
//      printf("j = %d, prev[j] = %d\n", j, prev[j]); 
      while (j > 0) { 
        tt[prev[j]] ++; 
        j -= a[prev[j]]; 
        } 
      for (int k = 0; k < a.size(); k ++) 
        ct[k] += tt[k] * ct[i]; 
//      for (int k = 0; k < a.size(); k ++) 
//        printf("(%d += %d), ",(int)ct[k], (int)tt[k]); 
//      printf("\n"); 
      } 
    return ans; 
    } 
  };

********************************************************************************
*******************************************************************************/