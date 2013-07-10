/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8427
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

class FactoVisors {
public:
    int getNum(vector<int> divisors, vector<int> multiples);
};

int FactoVisors::getNum(vector<int> divisors, vector<int> multiples) {
    int ret;
    return ret;
}


int test0() {
    vector<int> divisors = {1};
    vector<int> multiples = {100};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> divisors = {6, 9};
    vector<int> multiples = {18};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> divisors = {6, 9};
    vector<int> multiples = {96, 180};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
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
    vector<int> divisors = {2, 4};
    vector<int> multiples = {256};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> divisors = {1, 2, 3, 4, 5};
    vector<int> multiples = {60, 120};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
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
    vector<int> divisors = {1, 1, 1};
    vector<int> multiples = {100};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> divisors = {1000, 10000, 100000};
    vector<int> multiples = {1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> divisors = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> multiples = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> divisors = {19088, 57540776, 6029, 12058, 96464, 24116, 19088, 48232, 8};
    vector<int> multiples = {920652416, 345244656, 460326208, 230163104, 690489312, 575407760, 690489312, 805570864, 230163104, 345244656, 345244656, 460326208};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> divisors = {31846, 50682909, 50682909, 1, 2, 16894303, 2, 3, 1, 95538, 2, 31846, 33788606, 3, 16894303, 1061, 1061, 15923, 31846, 6366, 6, 6, 1061, 3, 6, 31846, 47769, 6, 101365818, 50682909, 15923};
    vector<int> multiples = {709560726, 709560726, 709560726, 709560726, 709560726};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> divisors = {11609848, 1564, 8, 5804924, 92, 3128, 789469664, 49341854, 8, 4290596, 11609848, 5804924, 2, 1009552, 4, 17, 8581192};
    vector<int> multiples = {789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664, 789469664};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> divisors = {287, 7, 217424599, 1, 5303039, 217424599, 41, 757577, 31060657, 5303039, 217424599, 757577, 31060657, 7, 217424599, 41, 287, 41, 5303039, 757577, 287, 1, 217424599, 7, 757577, 1, 31060657, 287, 757577, 31060657, 31060657, 5303039, 217424599, 1, 287, 287, 31060657, 287, 31060657, 217424599, 217424599, 5303039};
    vector<int> multiples = {652273797, 652273797, 652273797, 652273797, 652273797};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> divisors = {6201347};
    vector<int> multiples = {830980498, 830980498, 830980498};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> divisors = {92342009, 646394063, 973, 4650317, 1, 1, 664331, 646394063, 973, 139, 664331, 4650317, 92342009, 139, 646394063, 973, 1, 646394063, 973, 92342009, 139, 1, 7, 7, 139, 139, 4650317, 7, 973, 7, 7, 664331, 4650317, 664331, 139, 664331, 92342009, 7, 973, 646394063};
    vector<int> multiples = {646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063, 646394063};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> divisors = {1, 329, 311713, 14650511, 7, 311713, 329, 47, 7, 7, 1, 311713, 311713, 2181991, 329, 329, 7, 102553577, 47, 1, 1, 47, 329, 2181991, 329, 329};
    vector<int> multiples = {512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885, 512767885};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
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
    vector<int> divisors = {4, 242941654, 2, 2, 1, 2, 242941654, 485883308, 2, 2, 1, 1, 121470827, 485883308, 242941654, 485883308, 4, 1, 4, 1, 242941654, 121470827, 485883308};
    vector<int> multiples = {971766616, 485883308, 485883308, 971766616, 971766616, 971766616, 971766616, 971766616, 485883308, 485883308, 485883308, 971766616, 971766616, 485883308, 971766616, 971766616, 971766616, 485883308, 971766616, 971766616, 971766616, 971766616, 971766616, 971766616, 971766616, 485883308, 485883308, 485883308, 485883308, 485883308, 485883308, 971766616, 971766616, 485883308, 485883308, 971766616, 971766616, 971766616, 971766616, 971766616, 485883308, 971766616, 971766616, 485883308, 485883308};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> divisors = {73, 2, 20949394, 146, 29, 2117, 303766213, 607532426, 286978, 73, 29, 2117, 58, 1, 4161181, 4161181, 10474697, 286978};
    vector<int> multiples = {607532426, 607532426, 607532426, 607532426, 607532426, 607532426, 607532426, 607532426, 607532426, 607532426};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> divisors = {585697, 427, 1, 1422407, 9956849, 203201, 607367789, 17, 86766827, 9956849, 1037, 427, 86766827, 119, 203201, 12395261, 7259, 50813, 427, 83671, 119, 11953, 833, 585697, 833, 2989, 1, 61, 35727517, 119, 7, 833, 119, 427, 12395261, 119, 12395261, 203201, 607367789, 50813, 607367789, 7259, 1037, 17, 1422407};
    vector<int> multiples = {607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789, 607367789};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> divisors = {1, 487, 974, 1, 1, 1, 1, 1, 974, 487, 2, 974, 487, 974, 2, 1, 1, 2, 1, 974, 1, 974, 2, 487, 974, 974, 487};
    vector<int> multiples = {942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060, 942530060};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> divisors = {2, 15, 80, 5, 6, 16, 10, 40, 6, 6, 10, 12, 5, 32, 40, 240, 160, 60, 240, 12, 6, 24, 2, 4, 1, 480, 10, 80, 16, 10, 15, 5, 160, 8};
    vector<int> multiples = {736857120, 736857120, 736857120, 736857120, 736857120, 736857120, 736857120, 736857120, 736857120, 736857120, 736857120, 736857120, 736857120, 736857120, 736857120, 736857120, 736857120, 736857120, 736857120, 736857120, 736857120};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> divisors = {1, 7, 3, 7, 7, 21, 7, 3, 63, 63, 63, 1, 9, 3, 21, 3, 7};
    vector<int> multiples = {450825984, 901651968, 450825984, 901651968, 676238976, 676238976, 676238976, 450825984, 225412992, 450825984, 225412992, 676238976, 901651968, 225412992, 676238976, 676238976, 225412992, 450825984, 901651968};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> divisors = {23, 23, 1, 575, 25, 1, 5, 1, 1, 5, 575, 575, 23, 23, 23, 5, 575, 23, 115, 5, 115, 1, 575, 5, 575, 23, 23, 575, 25, 25, 1, 23, 115, 575, 115, 5, 5, 575, 5, 1, 25, 25};
    vector<int> multiples = {632761050, 949141575, 316380525, 949141575, 949141575, 632761050, 949141575, 632761050, 316380525};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> divisors = {38, 38, 1, 19, 4, 76, 4, 4, 19, 1, 4, 1, 38, 19, 76, 4, 38, 4, 2, 19, 4, 2, 4, 1, 1, 2, 1, 4, 19, 4, 38, 38, 1, 2, 4, 38, 76, 38, 76, 76, 76, 4};
    vector<int> multiples = {709507880, 709507880, 709507880, 709507880, 709507880, 709507880, 709507880, 709507880, 709507880, 709507880, 709507880, 709507880, 709507880, 709507880};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> divisors = {9, 9, 837, 279, 279, 27, 31, 837, 279, 3, 279, 27, 27, 9, 27, 31, 27, 27, 9, 279, 279, 9, 9, 3, 93, 1, 27, 279, 3, 93, 837, 837, 1, 1, 27, 837, 31, 9, 1};
    vector<int> multiples = {502228458, 502228458, 753342687, 502228458, 753342687, 502228458, 753342687, 251114229, 502228458, 502228458, 502228458, 251114229, 502228458, 502228458, 251114229, 251114229, 502228458, 753342687, 251114229, 251114229, 502228458, 502228458, 753342687, 753342687, 753342687, 502228458};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> divisors = {689, 53, 689, 13, 13, 1, 13, 689, 689, 1, 13, 1, 13};
    vector<int> multiples = {976742936, 976742936, 488371468, 488371468, 976742936, 976742936, 976742936, 488371468, 976742936, 488371468, 488371468, 488371468, 976742936, 976742936, 976742936, 488371468, 976742936, 488371468, 976742936, 488371468, 488371468, 488371468, 488371468, 488371468, 976742936, 488371468, 976742936, 976742936, 976742936, 976742936, 488371468, 488371468, 488371468, 976742936, 976742936, 976742936, 976742936, 976742936, 488371468, 488371468, 976742936, 976742936, 976742936, 488371468, 488371468, 488371468};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> divisors = {17, 561, 187, 1, 3, 187, 187, 33, 33, 3, 3, 1, 11, 11, 51, 3, 11, 561, 3, 1};
    vector<int> multiples = {349261770, 523892655, 349261770, 349261770, 349261770, 523892655, 174630885, 873154425, 174630885, 174630885, 174630885, 349261770, 698523540, 349261770, 349261770, 349261770};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> divisors = {1, 1, 3, 573, 191, 1, 191, 191, 573, 573, 573, 1, 3, 1, 573, 573, 191, 191};
    vector<int> multiples = {610568745, 610568745, 610568745, 610568745, 610568745, 610568745, 610568745, 610568745, 610568745, 610568745, 610568745, 610568745, 610568745, 610568745, 610568745, 610568745, 610568745, 610568745, 610568745, 610568745, 610568745};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> divisors = {5, 35, 7, 1, 5, 35, 1, 1, 1, 7, 7, 7, 5, 35, 35, 35, 35, 35, 7, 5, 1, 7, 7, 1, 7, 7, 35, 1, 5, 1, 7, 5, 5, 35, 5, 5, 35, 35, 7, 7, 7, 1, 7, 1, 7, 7};
    vector<int> multiples = {494155060, 988310120, 494155060, 988310120, 494155060, 494155060, 494155060, 988310120, 988310120, 988310120, 988310120, 494155060, 494155060, 494155060, 494155060, 988310120, 988310120, 494155060, 494155060, 988310120, 494155060, 988310120};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> divisors = {4, 24, 48, 3, 12, 48, 3, 18, 4, 72, 6, 18, 144, 72, 6, 3, 12, 144, 24};
    vector<int> multiples = {478203984, 478203984, 956407968, 478203984, 478203984, 478203984, 956407968, 478203984, 956407968};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> divisors = {1, 419, 838, 419, 1, 1, 2, 838, 419, 419, 838, 1, 838, 2, 2, 419, 1, 419, 2, 1, 2, 838, 838, 838};
    vector<int> multiples = {236440024, 236440024, 472880048, 236440024, 472880048, 945760096, 709320072, 709320072, 709320072, 709320072, 236440024, 945760096, 945760096, 472880048, 472880048, 709320072, 472880048, 945760096, 472880048, 709320072, 472880048, 236440024, 945760096, 945760096, 709320072, 709320072, 472880048, 236440024, 709320072, 236440024, 945760096, 945760096, 945760096, 945760096, 945760096, 236440024, 945760096, 472880048, 709320072, 472880048, 472880048};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> divisors = {77, 7, 1, 1, 11, 11, 77, 1, 1, 11, 7, 77, 1, 1};
    vector<int> multiples = {396129195, 132043065, 132043065, 396129195, 528172260, 660215325, 528172260, 528172260, 660215325, 132043065, 396129195, 528172260, 924301455, 528172260, 396129195, 660215325, 132043065, 660215325, 660215325, 792258390, 792258390, 396129195, 792258390, 792258390, 528172260, 660215325, 264086130, 396129195, 396129195, 264086130, 660215325, 396129195, 396129195, 264086130, 132043065, 792258390, 396129195};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> divisors = {3, 327, 109, 109, 981, 1, 981, 109, 1, 981, 3, 109, 109, 327, 1, 981, 109, 1, 981, 109, 1, 327, 109, 1, 327, 327, 1, 1, 3, 109, 1, 109, 3, 3, 327, 1, 109, 9, 327, 1};
    vector<int> multiples = {482513679, 965027358, 965027358, 482513679, 965027358, 482513679, 965027358, 965027358, 965027358, 482513679};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> divisors = {2, 4, 2, 32, 32, 32, 1, 256, 32, 4, 512, 16, 32, 4, 1, 8, 64, 2, 1, 16, 2, 16, 16, 8, 256, 32, 4, 2, 256, 1, 256, 64, 4, 32};
    vector<int> multiples = {627518976};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> divisors = {3, 3, 339, 339, 113, 1, 3, 3, 1, 1, 113, 113, 339, 1, 339, 113, 113, 1, 3, 1, 3, 113, 113, 339, 1, 1, 1, 3};
    vector<int> multiples = {761178057, 761178057, 761178057, 761178057, 761178057, 761178057, 761178057, 761178057, 761178057, 761178057, 761178057, 761178057, 761178057};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> divisors = {22, 4, 231, 924, 231, 3, 21, 84, 12, 2, 4, 44, 132, 42, 7, 12, 924, 231};
    vector<int> multiples = {212401728, 424803456};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> divisors = {4, 44, 44};
    vector<int> multiples = {118000608, 383501976, 59000304, 442502280, 413002128, 678503496, 118000608, 29500152, 737503800, 118000608, 973505016, 88500456, 472002432, 767003952, 914504712, 619503192, 413002128, 737503800, 826004256, 708003648, 324501672, 88500456, 767003952};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> divisors = {5, 25, 23, 1, 5, 575, 115, 1, 115, 25, 575, 115, 25, 575, 1, 25, 25, 23, 25, 575, 1, 575, 23, 5, 25, 23, 23, 25, 23, 25};
    vector<int> multiples = {629834875, 629834875, 629834875, 629834875, 629834875, 629834875, 629834875, 629834875, 629834875, 629834875};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> divisors = {5, 475, 95, 5, 25, 95, 95, 95, 475, 5, 19, 19, 95, 1, 5, 475, 95, 25, 95};
    vector<int> multiples = {916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000, 916275000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> divisors = {10, 10, 25, 50, 1, 250, 10, 50, 10};
    vector<int> multiples = {582157000, 582157000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> divisors = {1, 11, 61, 671, 61, 61, 11};
    vector<int> multiples = {522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576, 522075576};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> divisors = {14, 14, 98, 14, 1};
    vector<int> multiples = {556269168, 556269168, 556269168, 556269168, 556269168, 556269168, 556269168, 556269168, 556269168, 556269168, 556269168, 556269168};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> divisors = {6, 26, 3, 26, 13, 52, 3, 52, 4, 156, 1, 12, 3, 4, 156, 2, 13, 6, 6, 78, 4, 78, 52, 6, 52, 6, 12, 156, 13, 4, 2, 156, 2, 2, 13, 26, 6, 6};
    vector<int> multiples = {751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488, 751498488};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> divisors = {5, 90, 3, 6, 9, 2, 5, 9, 10, 6, 5, 1, 10, 5, 10, 2, 3, 3, 90, 15, 90, 2, 10, 6, 1, 10, 5, 9, 5, 90, 3, 90, 6, 18, 3, 5, 2, 18, 10, 5, 18, 1, 15, 3, 18, 45, 90, 90};
    vector<int> multiples = {819322920, 409661460, 409661460, 409661460, 409661460, 409661460, 819322920, 409661460, 409661460, 409661460, 409661460, 819322920, 819322920, 819322920, 409661460, 409661460, 819322920, 409661460, 409661460, 409661460, 409661460, 819322920, 819322920, 409661460, 819322920, 409661460, 819322920, 409661460, 819322920, 409661460, 409661460, 409661460, 819322920, 819322920, 819322920, 819322920, 819322920, 819322920, 819322920, 409661460, 819322920, 819322920, 819322920, 819322920, 409661460, 409661460, 819322920, 409661460, 409661460};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> divisors = {197, 197, 1, 197, 197, 197, 1, 1, 1, 1, 197, 1, 197, 197, 1, 197, 197, 1, 197, 197, 1, 1, 1, 1, 197, 197, 197, 1, 197, 197, 197};
    vector<int> multiples = {996051503, 996051503, 996051503, 996051503, 996051503, 996051503, 996051503, 996051503, 996051503, 996051503, 996051503, 996051503, 996051503, 996051503, 996051503, 996051503, 996051503, 996051503, 996051503};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
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
    vector<int> divisors = {1, 1, 859, 859, 1, 1, 1, 1, 1, 859, 1, 859, 859, 859, 1, 859, 1, 1, 1, 1};
    vector<int> multiples = {910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085, 910381085};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> divisors = {3, 180, 180, 45, 30, 900, 50, 45, 25, 1, 1, 45, 3, 9, 10, 1, 100, 5, 60, 20, 15, 4, 180, 15, 450, 3, 90, 450, 90, 12, 20, 6, 450, 25};
    vector<int> multiples = {842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400, 842477400};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> divisors = {2, 3, 942, 1, 6, 314, 314, 1, 6, 314, 157, 314, 3, 6, 6, 942, 942, 157, 471, 471, 2, 2, 3};
    vector<int> multiples = {335112732, 167556366, 167556366, 502669098, 837781830, 670225464, 335112732, 837781830, 670225464, 670225464, 502669098, 335112732, 502669098, 670225464, 670225464, 502669098, 670225464, 167556366, 837781830, 335112732, 167556366, 670225464, 670225464, 837781830, 335112732, 502669098, 670225464, 837781830};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> divisors = {29, 29, 11, 319, 319, 1, 29, 319, 1, 1, 319, 1, 29, 29};
    vector<int> multiples = {196244972, 196244972, 49061243, 883102374, 98122486, 147183729, 294367458, 932163617};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> divisors = {1};
    vector<int> multiples = {885097125, 590064750, 295032375, 295032375, 295032375, 590064750, 590064750, 885097125, 590064750, 295032375, 295032375, 885097125};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> divisors = {136, 34, 8, 4, 68, 68, 17, 68, 16};
    vector<int> multiples = {785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320, 785824320};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> divisors = {203, 29, 406, 14, 58, 4, 406, 29, 4, 28, 116, 28, 58, 58, 29, 203, 203, 1, 812};
    vector<int> multiples = {744638916, 744638916, 744638916, 744638916, 744638916, 744638916, 744638916, 744638916, 744638916, 744638916, 744638916, 744638916, 744638916, 744638916, 744638916, 744638916, 744638916};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> divisors = {1, 99, 5, 15, 55, 5, 15, 33, 15, 11, 5, 1, 99, 1, 9, 5, 5, 11, 9, 1, 45, 5, 99, 45, 45, 495, 45, 3, 495, 5, 15, 5, 165, 5, 11};
    vector<int> multiples = {965175750, 482587875, 965175750, 482587875, 482587875, 482587875, 482587875, 965175750, 482587875, 482587875, 965175750, 482587875, 482587875, 965175750, 965175750, 482587875, 482587875, 965175750, 965175750, 965175750, 482587875, 965175750, 965175750, 482587875, 965175750, 965175750, 482587875, 965175750};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> divisors = {107, 7, 107, 7, 107, 7, 749, 107, 107, 7, 1, 749, 749, 107, 749, 749, 1, 107, 1, 749, 1};
    vector<int> multiples = {996549743, 996549743};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> divisors = {747, 1, 83, 9, 1, 747, 83, 3, 747, 747, 3, 83, 83, 1, 1, 9, 249, 249, 249, 747, 9, 1, 3, 249, 3, 1, 249, 747, 1, 9, 747, 83, 747, 249, 83, 9, 83, 1, 249, 249};
    vector<int> multiples = {778001994, 778001994, 778001994, 778001994, 778001994, 778001994, 778001994, 778001994, 778001994, 778001994, 778001994, 778001994, 778001994};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> divisors = {22, 11, 11, 187, 68, 187, 34, 11, 22, 34, 44, 34, 4, 17, 748, 748, 748, 11, 2, 1, 68, 187, 34, 374, 2, 17, 68, 11, 374, 68, 748, 748, 374, 374, 68, 2, 748, 374, 374, 11, 2, 374, 44, 4, 374, 2, 17};
    vector<int> multiples = {914432992, 914432992, 914432992, 914432992, 914432992, 914432992, 914432992};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> divisors = {914, 1, 1, 1, 2, 457, 1, 2, 1, 457, 2, 1, 914, 1, 914, 914, 914, 914, 914, 2, 914, 457, 457, 914, 1, 914, 914, 457, 2, 457, 2, 2, 1, 914, 457, 914, 914, 914, 1};
    vector<int> multiples = {956447988, 956447988, 956447988, 956447988, 956447988, 956447988, 956447988, 956447988, 956447988, 956447988, 956447988, 956447988, 956447988, 956447988};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> divisors = {55, 10, 4, 1, 220, 44, 5, 110, 2, 220, 10, 110, 10, 22, 2, 11, 44};
    vector<int> multiples = {543070880, 271535440, 271535440, 271535440, 271535440, 271535440, 543070880, 814606320, 271535440, 543070880, 814606320, 814606320, 543070880, 271535440, 271535440, 543070880, 814606320, 814606320, 271535440, 543070880, 271535440, 543070880, 543070880, 814606320, 271535440, 271535440, 543070880, 271535440, 543070880, 271535440, 814606320, 543070880, 543070880, 271535440, 271535440, 543070880, 543070880, 543070880, 271535440, 543070880, 543070880, 814606320, 814606320, 814606320, 814606320, 271535440, 814606320, 543070880, 271535440};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> divisors = {11, 1, 143, 13, 1, 11, 1, 143, 11, 1, 11, 143, 143, 1, 143, 143, 13, 1, 143, 13, 11, 11, 13, 1, 11, 11, 1, 1, 143, 1, 13, 143, 11, 13, 143, 1, 1, 1, 1, 1, 13, 13, 11, 11, 143, 1, 13};
    vector<int> multiples = {680372836};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> divisors = {8, 9, 36, 6, 2, 8, 12, 8, 1, 3, 24, 2, 72, 3};
    vector<int> multiples = {587500992, 587500992, 587500992, 587500992, 587500992, 587500992, 587500992, 587500992, 587500992, 587500992, 587500992, 587500992, 587500992, 587500992, 587500992, 587500992, 587500992, 587500992, 587500992, 587500992};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> divisors = {41, 1, 41, 1, 1, 1, 41, 41, 41, 41, 1, 1, 41, 1, 41, 1, 41, 41, 1, 41, 41, 1, 1, 1, 41, 41, 1, 41, 41, 41, 1, 41, 1, 1, 1, 1, 41, 41, 41, 1, 1, 1, 41, 41, 41, 1, 41, 41, 41, 41};
    vector<int> multiples = {224249869, 448499738, 448499738, 224249869, 448499738, 672749607, 672749607, 672749607, 896999476, 224249869, 224249869, 672749607, 896999476, 896999476, 896999476, 896999476, 448499738, 448499738, 672749607, 896999476, 672749607, 448499738, 672749607, 448499738, 224249869, 672749607, 896999476, 448499738, 224249869, 448499738};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> divisors = {2, 10, 70, 7, 7, 14, 5, 2, 14, 14, 2, 35, 14, 35, 7, 7, 2, 7, 14, 10, 5, 10, 14, 70, 2, 7, 14, 2, 70, 10, 5, 10, 10};
    vector<int> multiples = {155269030, 621076120, 776345150, 776345150, 465807090, 465807090, 931614180, 310538060, 310538060, 931614180, 310538060};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> divisors = {1, 8, 2, 2, 4, 1, 2, 4, 1, 1, 4, 16, 16, 4, 8, 2, 16};
    vector<int> multiples = {167186496, 417966240, 752339232, 250779744, 835932480, 417966240, 501559488, 835932480, 83593248, 919525728, 334372992, 501559488, 585152736, 250779744, 83593248, 585152736, 83593248, 167186496, 167186496, 417966240, 167186496, 334372992, 835932480, 668745984, 417966240, 417966240, 501559488, 585152736, 417966240, 668745984, 83593248, 919525728, 835932480, 668745984, 167186496, 83593248, 334372992, 835932480, 83593248, 417966240, 752339232, 334372992, 919525728, 334372992, 167186496, 417966240, 919525728, 585152736};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> divisors = {2, 74, 74, 2, 1, 37, 1};
    vector<int> multiples = {506443272, 506443272};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> divisors = {1, 5, 25, 25, 25, 1, 25, 5, 5, 5, 1, 5, 1, 25, 25, 1, 1, 1, 25, 1, 25, 1, 25, 25, 1, 1, 25, 25, 1, 25, 25, 1, 5, 25, 5, 5, 5, 5, 1, 5, 5, 5, 1, 1, 5, 1};
    vector<int> multiples = {219000925, 876003700, 657002775, 876003700, 657002775, 657002775, 438001850, 876003700, 876003700, 657002775, 219000925, 876003700, 219000925, 219000925, 657002775, 219000925, 438001850, 876003700, 876003700, 219000925, 657002775, 438001850, 657002775};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> divisors = {3, 3, 17, 3, 51, 3, 1, 1, 1, 1, 3, 1, 17, 51, 3};
    vector<int> multiples = {650189718, 650189718, 650189718, 216729906, 866919624, 650189718, 216729906, 650189718, 433459812, 433459812, 866919624, 216729906};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> divisors = {27, 18, 2, 18, 1, 18, 54, 54, 1, 18, 9, 27, 2, 6, 6, 27, 1, 6, 1, 27, 18, 27, 6, 6, 18, 2, 27, 6, 9, 9, 18, 18, 54, 18, 18, 27, 6, 2, 3, 2, 9, 2};
    vector<int> multiples = {519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802, 519866802};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> divisors = {51};
    vector<int> multiples = {826671546, 551114364, 826671546, 551114364, 826671546, 551114364, 275557182, 275557182, 551114364, 826671546, 551114364, 275557182, 826671546, 275557182, 551114364, 826671546, 275557182, 826671546, 551114364, 275557182, 551114364, 551114364, 826671546, 275557182, 826671546, 826671546, 551114364, 826671546, 551114364, 275557182, 826671546, 826671546};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> divisors = {29, 29, 1, 1, 1, 1, 1, 1, 29, 29, 29, 29, 29, 1, 1, 1, 1, 1, 1, 29, 29, 29, 29, 1, 1, 1, 1, 29, 29, 1, 29, 1, 1, 29, 29, 29, 29, 1, 29, 29, 29};
    vector<int> multiples = {930356424, 930356424, 697767318, 465178212, 697767318, 930356424, 697767318, 697767318, 697767318, 697767318, 232589106, 232589106, 232589106, 697767318, 697767318, 930356424, 232589106, 465178212, 465178212};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> divisors = {58, 2, 29, 58, 29, 58, 29, 58, 29, 29, 2, 1, 58, 2, 29, 58, 1, 58, 1, 58, 2, 29, 1, 1, 58, 58, 58, 58, 2, 2, 1, 1, 2, 58, 2, 2, 2, 2, 1, 58, 1, 2, 2, 1, 29, 29, 1, 58, 2, 1};
    vector<int> multiples = {102073678, 102073678, 612442068, 918663102, 408294712, 816589424, 918663102, 510368390, 510368390, 714515746, 918663102, 204147356, 714515746, 408294712, 714515746, 510368390, 510368390, 918663102, 204147356, 204147356, 510368390, 612442068, 510368390, 612442068, 408294712, 102073678, 714515746, 714515746, 204147356, 918663102, 306221034, 408294712, 918663102, 714515746, 714515746, 510368390, 204147356, 816589424, 918663102, 204147356, 510368390, 714515746, 612442068, 510368390, 816589424, 102073678, 306221034, 612442068, 306221034, 510368390};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> divisors = {47, 47, 47, 1, 47, 47, 1, 1, 1, 1, 47, 47, 47, 47, 47, 1, 47, 47, 47, 47, 1, 1, 1, 1, 1, 47, 47, 1, 47, 1, 47, 47};
    vector<int> multiples = {407555894, 407555894, 407555894, 407555894, 815111788, 815111788, 815111788, 407555894, 815111788, 815111788, 407555894, 407555894, 407555894, 407555894, 407555894, 815111788, 407555894};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> divisors = {78, 26, 6, 13, 13, 78, 6, 6, 13, 1, 13, 1, 39, 3, 2, 1, 1, 13, 6, 78, 6, 1};
    vector<int> multiples = {242223306, 968893224, 484446612, 726669918, 242223306, 726669918, 484446612, 726669918, 242223306, 242223306, 726669918, 726669918};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> divisors = {60, 5, 10, 6, 5, 4, 6, 60, 15, 5, 10, 15, 3, 60, 5, 6, 4};
    vector<int> multiples = {471256800, 942513600, 942513600, 942513600, 471256800, 471256800, 942513600, 471256800, 471256800, 471256800, 471256800, 471256800, 942513600, 471256800, 942513600, 942513600, 471256800, 471256800, 942513600, 471256800, 471256800, 942513600};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> divisors = {12, 2, 1, 12, 6, 6, 4, 3, 3, 12, 6, 6, 2, 4, 12, 4, 1, 6};
    vector<int> multiples = {42738048, 854760960, 982975104, 299166336, 128214144, 812022912, 812022912, 512856576, 470118528, 812022912, 641070720, 427380480, 854760960, 769284864, 769284864, 982975104, 427380480, 641070720, 897499008, 598332672, 384642432, 854760960, 170952192, 683808768, 299166336, 384642432, 85476096, 683808768, 42738048, 982975104, 85476096, 128214144, 769284864, 256428288, 85476096, 341904384, 470118528, 982975104, 982975104, 854760960, 812022912, 641070720, 982975104, 213690240, 812022912, 213690240, 427380480, 42738048, 213690240};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> divisors = {35, 7, 5, 35, 5, 1, 5, 1, 5, 5, 1, 5, 5, 7, 1, 5, 1, 35, 7, 1, 5, 5, 1, 7, 5, 35, 1, 1, 7, 7, 35, 7, 5, 5, 7, 35, 1, 7, 35, 35};
    vector<int> multiples = {45893610, 275361660, 596616930, 917872200, 596616930, 780191370, 963765810, 45893610, 871978590, 734297760, 550723320, 137680830, 458936100, 45893610, 45893610, 917872200, 734297760, 413042490, 688404150, 413042490, 321255270, 688404150, 367148880, 458936100, 275361660, 321255270, 642510540, 229468050, 458936100, 45893610, 596616930, 275361660, 734297760, 91787220, 367148880, 871978590, 780191370, 229468050};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> divisors = {6, 6, 2, 3, 3, 2, 2, 3, 6, 6, 1, 2, 1, 1, 6, 1, 1};
    vector<int> multiples = {45587070, 547044840, 547044840, 410283630, 319109490, 774980190, 820567260, 136761210, 455870700, 227935350, 547044840, 364696560, 820567260, 91174140, 729393120, 91174140, 774980190, 592631910, 866154330, 820567260, 638218980, 683806050, 91174140, 683806050, 683806050, 683806050, 911741400, 273522420, 501457770, 866154330};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> divisors = {66, 66, 33, 33, 6, 1, 2, 11, 1, 66, 2, 66, 2, 11, 2, 11, 3, 3, 66, 33, 33, 22, 33};
    vector<int> multiples = {42160404, 337283232, 210802020, 252962424, 590245656, 590245656, 548085252, 84320808, 716726868, 927528888, 885368484, 168641616, 674566464, 295122828, 337283232, 84320808, 632406060, 843208080, 210802020, 210802020, 505924848, 463764444};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> divisors = {15, 5, 3, 1, 5, 15, 1, 15, 1, 1, 5, 1, 3, 15, 1, 1, 15, 3, 5, 5, 3, 3, 3, 5, 15, 15, 1, 1, 15, 1, 1, 1, 3, 1, 15, 15, 3, 5, 15, 5, 3, 1, 3, 1, 5, 3, 3, 1, 1, 15};
    vector<int> multiples = {149584995, 448754985, 149584995, 299169990, 897509970, 897509970, 897509970, 897509970, 448754985, 448754985, 448754985, 747924975, 598339980, 747924975, 149584995, 598339980, 299169990, 747924975, 598339980, 448754985, 149584995, 299169990, 299169990, 897509970, 598339980, 299169990, 747924975};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> divisors = {12, 1};
    vector<int> multiples = {35411364, 849872736, 354113640, 637404552, 389525004, 672815916, 885284100, 779050008, 956106828, 814461372, 106234092, 601993188, 70822728, 460347732, 672815916, 743638644, 70822728, 708227280, 814461372, 141645456, 460347732, 956106828, 177056820, 141645456, 637404552, 35411364, 495759096, 743638644, 708227280, 566581824, 424936368, 672815916, 849872736, 106234092, 318702276, 247879548, 424936368, 247879548, 495759096, 70822728, 212468184};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> divisors = {16};
    vector<int> multiples = {16};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> divisors = {10000000};
    vector<int> multiples = {10000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> divisors = {1};
    vector<int> multiples = {10000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> divisors = {1};
    vector<int> multiples = {1};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> divisors = {6};
    vector<int> multiples = {66666666};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> divisors = {2};
    vector<int> multiples = {1};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> divisors = {1000000000};
    vector<int> multiples = {1};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> divisors = {2};
    vector<int> multiples = {3};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> divisors = {9};
    vector<int> multiples = {15};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> divisors = {6};
    vector<int> multiples = {64};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> divisors = {1};
    vector<int> multiples = {104729};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> divisors = {104729};
    vector<int> multiples = {104729};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
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
    vector<int> divisors = {15485863};
    vector<int> multiples = {15485863};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
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
    vector<int> divisors = {982451653};
    vector<int> multiples = {982451653};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> divisors = {1230023};
    vector<int> multiples = {982451653};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> divisors = {1};
    vector<int> multiples = {982451653};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> divisors = {1};
    vector<int> multiples = {367567200};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1152;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> divisors = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> multiples = {367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200, 367567200};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1152;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> divisors = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> multiples = {735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1344;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> divisors = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 20, 21, 22, 24, 25, 26, 27, 28, 30, 32, 33, 34, 35, 36, 39, 40, 42, 44, 45, 48, 50, 51, 52, 54, 55, 56, 60, 63, 64, 65, 66, 68};
    vector<int> multiples = {735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400, 735134400};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> divisors = {1};
    vector<int> multiples = {735134400, 367567200, 245044800, 183783600, 147026880, 122522400, 105019200, 91891800, 81681600, 73513440, 66830400, 61261200, 56548800, 52509600, 49008960, 45945900, 43243200, 40840800, 36756720, 35006400, 33415200, 30630600, 29405376, 28274400, 27227200, 26254800, 24504480, 22972950, 22276800, 21621600, 21003840, 20420400, 18849600, 18378360, 17503200, 16707600, 16336320, 15315300, 14702688, 14414400, 14137200, 13613600, 13366080, 13127400, 12252240, 11668800, 11486475, 11309760, 11138400, 10810800};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> divisors = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 20, 21, 22, 24, 25, 26, 27, 28, 30, 32, 33, 34, 35, 36, 39, 40, 42, 44, 45, 48, 50, 51, 52, 54, 55, 56, 60, 63, 64, 65, 66, 68};
    vector<int> multiples = {735134400, 367567200, 245044800, 183783600, 147026880, 122522400, 105019200, 91891800, 81681600, 73513440, 66830400, 61261200, 56548800, 52509600, 49008960, 45945900, 43243200, 40840800, 36756720, 35006400, 33415200, 30630600, 29405376, 28274400, 27227200, 26254800, 24504480, 22972950, 22276800, 21621600, 21003840, 20420400, 18849600, 18378360, 17503200, 16707600, 16336320, 15315300, 14702688, 14414400, 14137200, 13613600, 13366080, 13127400, 12252240, 11668800, 11486475, 11309760, 11138400, 10810800};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> divisors = {1};
    vector<int> multiples = {1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> divisors = {1000, 10000, 100000};
    vector<int> multiples = {1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> divisors = {3, 6, 15, 12, 1};
    vector<int> multiples = {1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> divisors = {1};
    vector<int> multiples = {1000000000, 1000000000, 1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> divisors = {1};
    vector<int> multiples = {999999937};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> divisors = {1, 2, 5};
    vector<int> multiples = {1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> divisors = {1, 1};
    vector<int> multiples = {1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> divisors = {1};
    vector<int> multiples = {100000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> divisors = {1, 1000000000, 5667};
    vector<int> multiples = {1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> divisors = {1, 2};
    vector<int> multiples = {1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> divisors = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> multiples = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> divisors = {1000000000, 1000000000};
    vector<int> multiples = {1000000000, 1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> divisors = {2, 3, 1};
    vector<int> multiples = {443634798, 667086666, 667146666, 740965926, 722058126, 887269596, 225453720, 225573720, 225705720, 618239017, 238036248};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> divisors = {99999997, 99999993, 99999991, 99999981};
    vector<int> multiples = {100000000, 800000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> divisors = {1, 3};
    vector<int> multiples = {999999999};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> divisors = {1};
    vector<int> multiples = {999999999};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> divisors = {1};
    vector<int> multiples = {4, 5};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> divisors = {1, 2, 3, 6};
    vector<int> multiples = {1000000000, 1000000000, 1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> divisors = {1};
    vector<int> multiples = {25};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> divisors = {1};
    vector<int> multiples = {1000000000, 500000000, 600000000, 700000000, 800000000, 900000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> divisors = {999999999, 999999999, 999999999, 999999999};
    vector<int> multiples = {999999999, 999999999, 999999999};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> divisors = {2};
    vector<int> multiples = {1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> divisors = {23, 1000000000};
    vector<int> multiples = {1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> divisors = {1000000000, 1000000000, 1000000000, 1000000000};
    vector<int> multiples = {1000000000, 1000000000, 1000000000, 1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> divisors = {1};
    vector<int> multiples = {100000, 1000000000, 100000000, 1000000, 879679678, 45356567};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> divisors = {1};
    vector<int> multiples = {1000000000, 500000000, 600000000, 700000000, 800000000, 900000000, 400000000, 300000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> divisors = {1000, 10000, 100000, 999999, 76475784, 100000, 999999, 99999999, 999999999, 1, 1000000, 9999, 333, 32423, 5446, 6754754, 65465, 6536345, 45343, 6757, 76572, 5436, 76478, 97676};
    vector<int> multiples = {1000000000, 1000000000, 99999999, 999999999, 1, 1000000, 9999, 333, 32423, 45325, 43242, 5446, 6754754, 65465, 6536345, 4, 7, 4, 4, 7, 8, 9, 10, 43, 444444444, 999999999, 1, 1000000, 9999, 333, 32423, 45325, 43242, 5446, 6754754, 65465, 6536345, 100000, 999, 999999, 76475784};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> divisors = {3};
    vector<int> multiples = {4};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> divisors = {1};
    vector<int> multiples = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> divisors = {10000000, 1000000};
    vector<int> multiples = {1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> divisors = {1000000, 10000000, 100000000};
    vector<int> multiples = {1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> divisors = {1};
    vector<int> multiples = {999999883, 999999883, 999999883, 999999883, 999999929, 999999929};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
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
    vector<int> divisors = {1, 1000000000, 999999999};
    vector<int> multiples = {1000000000, 999999999};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> divisors = {37061, 37087, 37097, 37117, 37123, 37139, 37159, 37171, 37181, 37189, 37199, 37201, 37217, 37223, 37243, 37253, 37273, 37277, 37307, 37309, 37313, 37321, 37337, 37339, 37357, 37361, 37363, 37369, 37379, 37397, 37409, 37423, 37441, 37447, 37463, 37483, 37489, 37493, 37501, 37507, 39883, 39887, 39901, 39929, 39937, 39953, 39971, 999999937, 999999929, 999999893};
    vector<int> multiples = {1000000000, 999999999, 99999998, 99999997, 99999996, 99999995, 99999994, 99999993, 99999992, 99999991, 99999990};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> divisors = {99999077, 99999079, 99999089, 99999103, 99999113, 99999131, 99999157, 99999167, 99999187, 99999217, 99999247, 99999257, 99999259, 99999307, 99999323, 99999329, 99999343, 99999353, 99999373, 99999401, 99999437, 99999439, 99999481, 99999509, 99999517, 99999539, 99999541, 99999547, 99999551, 99999563, 99999587, 99999589, 99999611, 99999617, 99999623, 99999643, 99999677, 99999703, 99999721, 99999773, 99999787, 99999821, 99999827, 99999839, 99999847, 99999931, 99999971, 99999989};
    vector<int> multiples = {34};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> divisors = {1};
    vector<int> multiples = {1, 1000000000};
    FactoVisors* pObj = new FactoVisors();
    clock_t start = clock();
    int result = pObj->getNum(divisors, multiples);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22739432&rd=12178&pm=8427
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <stack> 
#include <bitset> 
#include <string> 
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
#include <algorithm> 
using namespace std; 
typedef long long LONG; 
typedef vector <int> VI; 
typedef vector <double> VD; 
typedef vector <string> VS; 
VI a,b; 
 
class FactoVisors 
{ 
public: 
  bool Valid(int x){ 
    int i; 
    for(i=0;i<a.size();i++){ 
      if(x%a[i]){ 
        return false; 
      } 
    } 
    for(i=0;i<b.size();i++){ 
      if(b[i]%x){ 
        return false; 
      } 
    } 
    return true; 
  } 
  int getNum(vector <int> divi, vector <int> mult) 
  { 
    int mx=0,i,j,ans; 
    a=divi; 
    b=mult; 
    for(i=0;i<mult.size();i++){ 
      mx=max(mx,mult[i]); 
    } 
    ans=0; 
    for(i=1;i*i<=mx;i++){ 
      if(mx%i==0){ 
        if(Valid(i)){ 
          ans++; 
        } 
        if(i!=mx/i && Valid(mx/i)){ 
          ans++; 
        } 
      } 
    } 
    return ans; 
  } 
};

********************************************************************************
*******************************************************************************/