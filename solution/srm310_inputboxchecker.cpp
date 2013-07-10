/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6542
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

class InputBoxChecker {
public:
    vector<string> checkPrefix(int smallest, int largest, vector<int> numbers);
};

vector<string> InputBoxChecker::checkPrefix(int smallest, int largest, vector<int> numbers) {
    vector<string> ret;
    return ret;
}


int test0() {
    int smallest = 300;
    int largest = 347;
    vector<int> numbers = {37};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int smallest = 310;
    int largest = 320;
    vector<int> numbers = {3, 31, 317, 3174, 310, 320};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "INVALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int smallest = 600;
    int largest = 1020;
    vector<int> numbers = {7, 73, 734, 7349};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int smallest = 64;
    int largest = 78;
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int smallest = 1;
    int largest = 1234567890;
    vector<int> numbers = {123, 456, 789, 1234567, 7654321, 3245354, 325432532, 243212};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int smallest = 3;
    int largest = 3;
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 9, 10, 33, 333, 1234567890};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int smallest = 123;
    int largest = 12345;
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 122, 123, 124, 12, 13, 139, 290, 9, 99, 999, 9999, 99999, 1234, 1233, 1235};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int smallest = 812345678;
    int largest = 901234567;
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 80, 81, 82, 89, 90, 91, 777, 810, 811, 813, 812, 815, 816, 817, 818, 819};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int smallest = 1789234567;
    int largest = 1789234569;
    vector<int> numbers = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int smallest = 401234567;
    int largest = 2000000000;
    vector<int> numbers = {1, 1, 1, 1, 1, 11, 11, 11, 11, 11, 2, 3, 4, 5, 6, 7, 8, 9, 31, 78, 123456789, 234567890, 312435678, 1234567890, 1999999999, 2000000000, 123456789, 234567890, 312435678, 1234567890, 1999999999, 2000000000};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int smallest = 401234567;
    int largest = 2000000000;
    vector<int> numbers = {3, 3, 3, 3, 3, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 400, 100, 200, 201, 202, 3, 3, 3, 3, 3, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 400, 100, 200, 201, 202};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int smallest = 61234;
    int largest = 212345;
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 59, 19, 20, 21, 22, 60, 61, 62, 63, 64, 70, 73, 89, 91, 123, 189, 2006, 61233, 61234, 61235, 99123, 101123, 200012, 212344, 212345, 212346, 612345, 501234};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int smallest = 100000000;
    int largest = 999999999;
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 99999999, 100000000, 100000001, 123456789, 999999998, 999999999, 1000000000, 1234567890, 124, 46432, 2353246, 326532, 23432, 53232};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int smallest = 324;
    int largest = 324;
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 32, 324, 3244, 2000000000};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int smallest = 812;
    int largest = 9345;
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 23, 45, 80, 81, 82, 712, 92, 93, 94, 95, 811, 812, 888, 912, 1034, 8111, 8119, 8120, 8121, 8122, 8999, 9123, 9344, 9345, 9356, 81234};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int smallest = 812;
    int largest = 8090;
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 23, 45, 80, 81, 82, 712, 92, 93, 94, 95, 811, 812, 888, 912, 1034, 8081, 8111, 8119, 8120, 8121, 8122, 8999, 9123, 9344, 9345, 9356, 81234};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int smallest = 33;
    int largest = 1234098765;
    vector<int> numbers = {1, 3, 2, 5, 6, 87, 342, 325, 32, 32523532, 6437654, 1987654320, 213214, 32543265, 436235, 326437543, 437643, 43265432, 32, 33, 34, 333, 333333333};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int smallest = 123456789;
    int largest = 987654321;
    vector<int> numbers = {9, 99, 999, 9999, 99999, 999999, 999999999, 8, 88, 888, 8888, 888888888, 1, 11, 111, 1111, 111111111, 2, 222, 2222, 222222222, 12, 123, 1234, 2, 23, 243};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int smallest = 846930886;
    int largest = 1528623663;
    vector<int> numbers = {57747794, 19885387, 6650, 25202363, 83368691, 44897764, 65180541, 9173, 35005212, 294702568, 5783, 278722863, 45174068, 1513930, 4023, 3070, 1394, 28175012, 31176230, 4422, 608413785, 34575199, 149798316, 6414, 12776092, 1911759957, 6863, 982906997, 11702306, 7085, 337, 805750847, 1314, 1141616125, 9583, 8815, 5435, 1374344044, 1477171088, 7277, 1780695789, 5404, 752392755, 53999933, 9677, 7740, 55636227, 8095, 1036140796, 40651435};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int smallest = 317097467;
    int largest = 623676733;
    vector<int> numbers = {927612903, 493, 60260757, 85560281, 593209442, 9690, 47346620, 70744730, 8118, 5772, 676, 8928, 7857, 524872354, 6966, 3964684, 1600028625, 40332872, 1120048830, 20, 3369, 77486716, 31518150, 724, 168002246, 439493452, 60243556, 1622597489, 338888229, 38792351, 69441501, 116087765, 4915, 1982275857, 6492, 841148366, 1937, 86452552, 971899229, 213975408, 6122, 130794396, 1884661238, 3794, 1605894429, 1012, 9530, 1597322405, 12255764, 1067854539};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "VALID", "VALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int smallest = 782436840;
    int largest = 1126566064;
    vector<int> numbers = {95235129, 7370, 9918, 3325, 9471, 480298491, 1096689773, 601385645, 7506, 1012502955, 27907670, 722308543, 933110198, 9356, 89376349, 1450573623, 9300, 5747, 1335354341, 89023312, 47267606, 45425662, 4879, 1569229321, 1590079445, 8523, 1402586709, 43408283, 559412925, 2063, 238962601, 3453, 1431419380, 65947469, 707900974, 113903882, 76808934, 404158661, 7200, 1642548900, 60152960, 2814, 7191, 50952927, 1704365085, 2091, 1953443377, 5937, 49517446, 9180};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int smallest = 995706887;
    int largest = 1823089412;
    vector<int> numbers = {25032173, 2010, 298625211, 7588, 9302, 76667373, 60401256, 774044600, 9905, 35939812, 1756915668, 719346229, 1414829151, 6659, 9225, 89867270, 619054082, 85, 6811973, 570073851, 35905386, 337739300, 43606043, 446340714, 915256191, 2591, 700108582, 9337, 1156, 292218005, 11614770, 1777, 7256, 48348143, 964445885, 20223206, 1017679568, 201690614, 22262755, 4260, 82828203, 14723507, 1676902022, 869, 5190, 37949909, 499, 8809, 64686249, 3334};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int smallest = 280321648;
    int largest = 782094538;
    vector<int> numbers = {7568, 369, 4501, 3789, 767066250, 39273304, 15505364, 552910254, 44247687, 1153, 25245976, 235649158, 5437, 3415, 461, 496060029, 44278051, 1192707557, 816504795, 8700, 59301040, 1186090429, 4501, 1498617648, 6160, 1144522536, 1328104340, 1113502216, 505, 1722060050, 8286, 36495344, 2903178, 3885239, 2416950, 5368, 7392293, 389040744, 2830, 2961683, 1900553542, 3827, 1780172262, 361, 8024, 1866000082, 3191, 8997, 4678, 691};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int smallest = 16764524;
    int largest = 24009133;
    vector<int> numbers = {1276673169, 359, 696947387, 65204347, 4995, 7056553, 3530, 2291, 1857756971, 9081, 1314218594, 86418628, 318561887, 8356, 1112720091, 9480, 1051858970, 2275, 826047642, 970925434, 7889, 73524567, 41027285, 1745790418, 2261, 37100238, 3060, 1282648519, 471990784, 83228459, 993967638, 484, 37770479, 9315, 5730, 3460, 1001089439, 77211389, 1234, 45933682, 359, 69110700, 64101840, 1190668364, 10228795, 73319848, 7463, 9391, 235745792, 427355116};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int smallest = 272796157;
    int largest = 725684731;
    vector<int> numbers = {126401948, 10359232, 40610538, 19485055, 1291554099, 1905241082, 71653517, 47372232, 1797, 33582339, 94519219, 3971, 4813, 4978, 59031537, 4177, 9208, 58984858, 44593500, 128, 33505237, 45367819, 991810564, 1245, 1806, 845563292, 8956, 3590, 15828994, 74552806, 47844823, 65326718, 76593094, 431530127, 2781487, 544, 7815, 8180, 1500474763, 1941727089, 5711, 1738110295, 1269400347, 217871138, 5154, 1265122574, 1910300926, 20306711, 7218, 6964};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int smallest = 255387090;
    int largest = 278350948;
    vector<int> numbers = {4905, 1250372662, 9686, 60613074, 6852, 746349251, 6504, 9007, 4640, 77721121, 14880227, 30387678, 3982, 14887561, 1290127956, 3519, 6343, 550245197, 4627322, 1312994985, 63794428, 2041, 73, 51245831, 1046370348, 2031, 89653715, 68057523, 6925, 9436, 9205, 12630444, 64945487, 356684279, 26250263, 9684, 1581539849, 81208325, 91449123, 7336, 7458, 2748, 95311777, 5219, 207621704, 15209934, 1487053960, 2807, 95748721, 1309};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int smallest = 811742698;
    int largest = 1105853689;
    vector<int> numbers = {8899, 1250801053, 1435218190, 670752507, 9017, 82173110, 1, 72058110, 5082, 11671339, 271059427, 80785148, 87776788, 1954696533, 134591282, 4851, 92576591, 33215351, 3814, 1495, 1766146082, 5721, 1694887983, 820097488, 1735079297, 5405, 23796893, 298, 8399135, 8507, 42767058, 1623380596, 98501963, 20687484, 13080155, 395191310, 9933, 1907895022, 3564, 28903683, 7686, 76564286, 71735991, 7315, 4754117, 75641893, 5529, 87897526, 1137, 9619};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int smallest = 640170337;
    int largest = 1303251265;
    vector<int> numbers = {6622, 7956, 72634226, 813274571, 854, 7723, 2351, 9098, 9127, 584522072, 3150, 928140529, 8399, 6611, 481928578, 8977, 70754553, 31126088, 100, 8567, 96377018, 1934392736, 1299, 1476453196, 5806, 64423429, 1849552529, 135019594, 34322198, 79289673, 6446, 415522326, 332238284, 95466128, 5422, 1375179335, 87987335, 8160, 411522958, 953691762, 1402492973, 50167717, 1851, 108375483, 1738076218, 1174, 6507, 6365, 1833488264, 88323173};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int smallest = 301373537;
    int largest = 1217392396;
    vector<int> numbers = {89360872, 234576988, 342146591, 672563971, 7666, 99893070, 58907362, 44041352, 1928189301, 85291639, 9365, 1033, 158136105, 3680, 92413413, 1209734970, 24916171, 153162845, 6650, 69304466, 2327, 1934660184, 6970, 94320153, 62924394, 7290, 404259632, 47584265, 4549, 1878, 1872666834, 1186994950, 56665156, 69678469, 18400961, 8824, 13213172, 20185678, 99493246, 2762, 1499150324, 25084101, 379461076, 18322043, 1451042660, 6290, 33293470, 478841552, 5384, 1172063134};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int smallest = 840019304;
    int largest = 1793181260;
    vector<int> numbers = {53232476, 8012, 773446913, 1348361730, 6869, 13465003, 1490549208, 96005217, 1489692378, 22757473, 50238958, 97276126, 379366798, 3419, 8154, 52775475, 5394, 27385949, 78450031, 9560, 39352161, 530406425, 63384281, 1812718903, 95873481, 1024027584, 95234141, 1891342724, 572132558, 597010432, 4221, 1259577691, 1105629392, 8271, 7668, 2672, 8744, 3900, 46137089, 2387, 695258233, 93155711, 1111800031, 917609664, 98167280, 499429650, 16922352, 1015857465, 7331, 59147516};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int smallest = 87519915;
    int largest = 1183470101;
    vector<int> numbers = {5012, 67874134, 1561812723, 6774, 17881520, 49495355, 3125, 31016260, 84677419, 692981713, 62558706, 35342734, 2735, 96774316, 1947691088, 670, 660916488, 73556838, 8090, 5206, 573666705, 74402558, 172623404, 24321893, 703571523, 29302444, 274325362, 3379, 2701, 1651574883, 50804900, 2590, 1719650354, 1286966949, 3037, 7108, 1604665418, 1569115922, 1756098481, 5995, 4124, 730832934, 86086318, 1219933932, 6710, 240959157, 228217070, 2996, 1435001172, 763148570};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int smallest = 18264801;
    int largest = 1557690477;
    vector<int> numbers = {1175446572, 59658926, 1198720173, 44874090, 3567, 5813, 5197, 636453334, 79065187, 3371, 1588695569, 35286142, 42982640, 4744264, 53263591, 1033206203, 286791632, 8258, 50994572, 848934684, 45151226, 1541417541, 77068973, 8340635, 5726, 31190953, 5473, 3340, 1701475884, 7662, 922587543, 88482340, 37335345, 47407331, 58829295, 1518260758, 92048861, 1533293, 942581877, 25251991, 27510636, 1599, 1727952742, 571, 2541, 1989200802, 4801, 1154615610, 457676441, 1850612764};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int smallest = 950881304;
    int largest = 1172271177;
    vector<int> numbers = {1142930165, 2252, 928682752, 89816340, 16953166, 132688303, 1131761080, 2548, 99568485, 7939562, 1932, 99420529, 5495, 1042517544, 4841124, 1637840188, 4644, 64851989, 1321, 145854099, 3019, 93886464, 4696, 1508976506, 37856143, 8099, 1473, 59382854, 4798, 68224548, 570840517, 1268409913, 9878, 1704572554, 2933, 959162036, 1686518108, 46710050, 33713862, 59592335, 5326, 1591564429, 1764, 541110116, 57880382, 5186, 2101, 554602409, 1659373350, 384295880};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int smallest = 814634316;
    int largest = 1343457914;
    vector<int> numbers = {1353668776, 608034987, 682736627, 6617, 46389570, 7410, 8581516, 2834, 12247777, 9614, 360022301, 3787, 764, 93256509, 9417, 1802491983, 38253541, 1038828827, 7566, 80329500, 691451547, 62299854, 33084304, 1098193843, 6535, 43849811, 78480870, 96095816, 1456748697, 13511383, 9452, 5362, 3038, 5862, 17305982, 194064089, 6938621, 3294, 6629, 90387709, 6943, 1853101997, 31207467, 8501, 91066488, 3333, 51445951, 96551634, 11662881, 51402294};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int smallest = 967632854;
    int largest = 1213099236;
    vector<int> numbers = {74571476, 409098739, 6952, 10014812, 9169, 22334814, 80492500, 53674536, 5465, 50148347, 3073, 38865741, 17852624, 80007058, 3458794, 94613282, 1279820115, 97657372, 597, 1594769884, 209473568, 5801, 41153675, 7434, 96617458, 5950, 5524, 65785293, 478307630, 989492336, 2141, 1312313044, 1292850340, 2026, 75191654, 92277053, 1998562958, 74631288, 9541, 4827, 556707206, 192433879, 104665170, 466647228, 1521, 64739222, 45277884, 1183912268, 1992055383, 13355512};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int smallest = 899542553;
    int largest = 1605175116;
    vector<int> numbers = {50621863, 79059896, 62887661, 1401422377, 26362174, 1510574888, 15754674, 8482, 1930, 1815983045, 2281, 89544210, 42639748, 79952367, 3760, 366831743, 894869402, 3172, 2959, 28414423, 628257756, 9091, 612816072, 547772604, 1660038321, 1243769943, 14340013, 1855103808, 1145975359, 1019382895, 278190159, 73521091, 84622627, 2974, 53918866, 52143422, 55769410, 1478705401, 88852787, 9834, 95266357, 89914411, 6632, 1566586129, 37623447, 98027459, 1824700011, 3166, 1868, 1267040927};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int smallest = 788986238;
    int largest = 871700699;
    vector<int> numbers = {2001, 33165458, 20042349, 30130018, 7426170, 570, 9129, 36135019, 1999038586, 869921281, 6755, 56241708, 1459834401, 33233022, 22466789, 5191, 88639635, 1443145326, 1626870462, 8143, 63964192, 5521, 12976555, 7143, 14600931, 31900035, 284327309, 9781, 8645, 76279546, 6523, 21376926, 25051736, 4493, 42830297, 1531, 1654844050, 513, 35077590, 384868449, 8532429, 2558, 6577, 1889537798, 67125140, 80687006, 4783, 524, 524135237, 1418};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int smallest = 631340353;
    int largest = 685789652;
    vector<int> numbers = {38700755, 34113237, 293, 543906159, 18386024, 7722, 270617570, 5816261, 7903, 6148, 1090, 74216440, 8018, 5376, 33614512, 17408979, 78777378, 31352977, 13892162, 55252834, 388450128, 1073000, 77483317, 13766840, 5568, 1683213487, 91635768, 6967, 436, 1896870038, 9720, 213, 770833935, 104221118, 77278675, 632, 7209, 177312852, 1229999243, 69114448, 40232677, 7484170, 14790564, 4932, 40776181, 2298, 1611336689, 1433572997, 98048402, 3070};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int smallest = 949784416;
    int largest = 1591234468;
    vector<int> numbers = {77511626, 423401434, 94559278, 4352950, 7230152, 961, 7800, 639286230, 4629, 1981393800, 1447680590, 9877, 680503767, 54296985, 698374760, 1654435777, 1560307072, 1239, 4685, 9491, 29707776, 1943679782, 327305251, 62243429, 6265, 26416759, 8945, 54390770, 6978, 19976258, 1656951143, 60064473, 1804765596, 7266, 6250, 54181468, 1891363559, 32652303, 1285859964, 72895039, 96082015, 1129709434, 1584008431, 1533803670, 97820660, 3496, 80708314, 2719, 637760030, 40106893};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int smallest = 556939443;
    int largest = 903744155;
    vector<int> numbers = {300819354, 1663, 35558629, 44899552, 642112111, 642, 2482, 603123091, 7855, 4537737, 1690127683, 8727, 3835734, 1188, 10450858, 7725, 1517244565, 1583274724, 96425835, 98564402, 77418326, 507857367, 1438638590, 1213735048, 20399827, 8804, 136864841, 1543678156, 71061649, 1831545291, 7947, 45299068, 86235105, 8409, 461780769, 1573715236, 556, 1502386252, 1045069411, 681928292, 1786910436, 9449, 3682, 2201, 9652, 7835, 189409561, 9165, 49217044, 10821956};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int smallest = 18186733;
    int largest = 255240275;
    vector<int> numbers = {60413641, 5860, 68728259, 23207429, 298, 67743295, 1846164557, 58964126, 91643254, 62824072, 1401943881, 2720, 32684368, 3204, 1349029730, 1787, 54155595, 303238859, 535297509, 1209597699, 3514, 42949731, 948, 93550659, 619480879, 99334108, 139842054, 4046008, 6176, 1121241303, 2309, 5627, 29197087, 10058107, 7124, 8752, 9502, 7611411, 20401393, 871001, 10053151, 13823382, 8288, 4329, 67874952, 31336719, 73881424, 1735551515, 1416023183, 5808};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int smallest = 70298129;
    int largest = 313409040;
    vector<int> numbers = {7631, 376875058, 7138, 2569079, 340606629, 1083189142, 978128826, 1022988866, 21449834, 1438296359, 850598624, 10411311, 55154590, 431315645, 5413, 639624894, 2301, 52861121, 3429, 1429841550, 738, 8242, 919121925, 1348325555, 659, 1555, 3320, 992209119, 1186896500, 3785507, 1319, 69411306, 6702, 94452112, 82735329, 47140187, 42357056, 39854684, 89034590, 1554567090, 4854, 881, 900874212, 91528785, 26201115, 158535327, 91241043, 5108, 1762, 15664226};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int smallest = 481907231;
    int largest = 1297227994;
    vector<int> numbers = {4287, 1628846895, 39722836, 545343059, 49378338, 22125316, 8618, 1051527999, 51002781, 20071007, 43116036, 3024, 1155785753, 67480710, 3826, 87797757, 486006072, 45394081, 4486, 6990, 11111545, 598389, 3971, 1793895842, 4001380, 168021019, 839, 251, 1954784285, 21608489, 6765136, 1444788925, 831083599, 18500114, 85952848, 9963, 20432111, 34457258, 1573177441, 97611887, 94836300, 81845290, 624486947, 2785, 2851, 2044, 3869, 1904279193, 6677, 8254};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int smallest = 36215463;
    int largest = 78243678;
    vector<int> numbers = {9163926, 31953878, 6710, 16554596, 2332, 3523, 1206674447, 64234957, 390868265, 425, 96236449, 59171795, 89130773, 4873, 9268, 9620, 137288710, 103822255, 36869529, 1297046356, 4351, 76624032, 36001643, 217178, 1569, 2509, 40321699, 18200988, 27918108, 5470, 8004, 3272, 1030121289, 45491187, 1312712377, 69069028, 123, 29548227, 8400, 560318024, 142919359, 73120689, 35531188, 17726231, 94220240, 9373, 47849493, 1307, 4523, 1197477950};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int smallest = 878786386;
    int largest = 897849714;
    vector<int> numbers = {1123716510, 8203, 1139, 2650, 1840735669, 637438147, 47610721, 146735659, 75496415, 83175740, 9555, 2316, 596769258, 764324636, 952617547, 48432484, 400660704, 186015034, 61783349, 821319301, 715577217, 1150, 3622, 4304, 3222, 14871044, 4778, 9463, 78800871, 317992894, 2062, 1560268825, 82908767, 85420960, 2297894, 504760187, 4058, 81063047, 77134496, 78610418, 97, 493, 1450967524, 5261, 404, 1613703164, 69026235, 990217935, 25288550, 1659819};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int smallest = 434895504;
    int largest = 701733493;
    vector<int> numbers = {5425914, 7303, 77392188, 362, 14701102, 6749, 44082051, 475853940, 1122249810, 92586312, 4681, 26782913, 96879553, 353592204, 3662, 74960251, 12786253, 63765872, 98418558, 74061049, 7112, 8338, 8293555, 79478662, 263707075, 67108343, 2327, 10604140, 201345765, 1970034226, 4903, 191471705, 4028381, 5947, 161, 9301, 26351143, 5489, 2620, 4413, 32321826, 1642661449, 31220361, 2383, 1930, 1903, 3787, 1736214338, 7535, 1810};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int smallest = 927203630;
    int largest = 999027479;
    vector<int> numbers = {1126, 92503158, 4071, 310936586, 32565484, 1565, 6053, 8369, 5433, 140830431, 1467, 119389305, 1572, 487191795, 472562276, 47449639, 708, 1571865574, 945229158, 126794894, 31067851, 6979, 9961, 75122432, 3027, 73646712, 24516899, 4478, 38394661, 91776791, 86391880, 1542106688, 336728280, 7364, 1807125, 12268429, 5067, 1195945230, 192713459, 33626772, 139536874, 12707330, 105342204, 1677654946, 66420783, 6504, 869, 1366405248, 8156, 84892937};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int smallest = 242907571;
    int largest = 392585288;
    vector<int> numbers = {1932062639, 56498188, 51062935, 7141, 1319619073, 9452, 84041883, 866360495, 42198393, 92537954, 54515803, 613932653, 372758356, 1694860592, 5539, 8472945, 107920489, 62928546, 50086035, 876085545, 5366, 558410656, 1381672607, 72358698, 6084, 71398404, 6851, 1182595893, 93039022, 37495192, 7496, 1331365440, 168488324, 7758, 28648727, 1588279466, 80944651, 76217691, 23977623, 959, 1265989391, 1614718296, 1600766769, 7798, 1379803376, 42493054, 1613393830, 1559, 25701534, 456511};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int smallest = 268308970;
    int largest = 709561297;
    vector<int> numbers = {1769973, 14722041, 2775, 4539, 1781804172, 7480, 1424627020, 4562, 7747, 4918, 22844084, 1314586529, 1270551296, 10215451, 28671167, 415922257, 1944442930, 1847344719, 98975430, 72954888, 9508, 1350422716, 1727856738, 1780238391, 1254413883, 56575806, 9423, 3258, 882, 44048624, 1753732837, 48185890, 1743131528, 64604174, 103816216, 1975402909, 41824131, 1045251305, 75821957, 10998056, 529235707, 6509, 43768898, 44462198, 1401808473, 4530, 53514404, 6132, 1541787378, 543785592};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int smallest = 18462069;
    int largest = 20925541;
    vector<int> numbers = {12802552, 6027, 25868785, 51030531, 1391607780, 21147485, 67405992, 66417810, 27532075, 45803003, 5738, 5867, 86363502, 6423612, 146220944, 1123598168, 1644, 51572323, 2618, 4108, 78756299, 6009, 367085194, 763, 362795151, 3355, 89306241, 291425260, 9854447, 912669539, 181010039, 120131590, 96748251, 973294815, 79339468, 486577617, 6866, 56774407, 25827442, 49089326, 7989, 9832, 8252, 3970, 959200314, 792, 71893917, 854428387, 81738996, 1040759386};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int smallest = 773748473;
    int largest = 1527337001;
    vector<int> numbers = {61135339, 80981338, 28674419, 3074, 89630846, 3194, 6708, 554841747, 4950, 29116549, 62361874, 40, 68374277, 24279778, 8065, 6023, 306980109, 1838177152, 76356570, 57984241, 8682, 2905193, 93782070, 21661147, 48214897, 5024, 1037412976, 94097162, 1006, 40272696, 70, 5177, 86122430, 17661056, 5258, 80982767, 9082, 619175680, 294151250, 7225, 873, 2917, 1742853662, 7452, 65417017, 6441, 1331601569, 22449967, 4270297, 32719349};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int smallest = 868272669;
    int largest = 1134491135;
    vector<int> numbers = {41641752, 97517876, 96774027, 2831, 735001926, 92083089, 68801444, 9577, 309572887, 8902, 1725663995, 72466290, 54233519, 133656397, 33366333, 69157621, 102497641, 93866393, 1310062901, 43444544, 7005, 14126951, 879683502, 909, 1769615305, 91789063, 3033, 1496216348, 81865367, 50138327, 82263959, 347788838, 499, 1789065970, 805, 4577, 848, 6256, 7109, 737, 214419678, 4416, 3087855, 26315613, 6211, 1271, 53298942, 318984472, 1690, 9190};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int smallest = 993077304;
    int largest = 1599677421;
    vector<int> numbers = {8152, 1480032909, 122801456, 5942, 53746102, 7340, 1255349947, 7127, 175627017, 1745520790, 2711, 23801656, 45705291, 91644043, 29962104, 789, 1212, 72561812, 856196472, 5592, 6197, 35714088, 339193737, 91455663, 73891335, 172154290, 40536405, 49488898, 7097, 7245830, 96926157, 16462159, 708436666, 32646387, 8075, 27092062, 4909, 74486767, 67, 748515750, 7936, 1742811798, 69142335, 339762387, 90982691, 1022334983, 1186, 65036215, 732853815, 516677341};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int smallest = 1;
    int largest = 100;
    vector<int> numbers = {10};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int smallest = 99;
    int largest = 1000;
    vector<int> numbers = {99, 999, 98, 1};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int smallest = 1999999999;
    int largest = 2000000000;
    vector<int> numbers = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 11};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int smallest = 1;
    int largest = 1234567890;
    vector<int> numbers = {123, 456, 789, 1234567, 7654321, 3245354, 325432532, 243212};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int smallest = 2000000000;
    int largest = 2000000000;
    vector<int> numbers = {1, 2, 3, 4, 5, 19, 21};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int smallest = 95;
    int largest = 800;
    vector<int> numbers = {8};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int smallest = 67;
    int largest = 1234;
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50, 60, 90};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int smallest = 111;
    int largest = 111;
    vector<int> numbers = {222};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int smallest = 50;
    int largest = 500;
    vector<int> numbers = {6};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int smallest = 2000000000;
    int largest = 2000000000;
    vector<int> numbers = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int smallest = 129347444;
    int largest = 1000999999;
    vector<int> numbers = {1, 2, 23, 45, 67, 342452, 23423, 233, 234, 234, 5454, 45, 1, 1, 1, 1, 100000, 2000000000, 2000000000, 10, 10, 2, 2, 2, 2, 3, 3, 4, 234, 3, 2, 23, 23, 23, 2, 3, 232, 3, 234, 22, 21, 3, 4, 45, 3};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int smallest = 129347444;
    int largest = 1000999999;
    vector<int> numbers = {1, 2, 23, 45, 67, 342452, 23423, 233, 234, 234, 5454, 45, 1, 1, 1, 1, 100000, 2000000000, 2000000000, 10, 10, 2, 2, 2, 2, 3, 3, 4, 234, 3, 2, 23, 23, 23, 2, 3, 232};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int smallest = 9;
    int largest = 100;
    vector<int> numbers = {2};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int smallest = 310;
    int largest = 320;
    vector<int> numbers = {3, 31, 317, 3174, 310, 320};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "INVALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int smallest = 600;
    int largest = 102000;
    vector<int> numbers = {7, 73, 734, 7349, 5};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int smallest = 60;
    int largest = 600;
    vector<int> numbers = {5};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int smallest = 100000;
    int largest = 2000000000;
    vector<int> numbers = {12, 23, 23423, 3454, 324443};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int smallest = 310;
    int largest = 420;
    vector<int> numbers = {37};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int smallest = 300;
    int largest = 500;
    vector<int> numbers = {3};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int smallest = 395999999;
    int largest = 1975318642;
    vector<int> numbers = {18, 19, 9, 198, 5, 38, 39, 399999998, 1976, 197532, 2, 3, 1, 9, 190, 197, 392, 395, 396, 1975318642, 1975318643, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 19753186, 19753186, 19753186, 19753186, 19753186, 19753187, 19753187, 19753187, 19753187, 19753187, 196, 198, 197, 197, 8};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "INVALID", "VALID", "INVALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "INVALID", "INVALID", "INVALID", "INVALID", "VALID", "INVALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int smallest = 1000000000;
    int largest = 2000000000;
    vector<int> numbers = {1500000000};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int smallest = 9;
    int largest = 11;
    vector<int> numbers = {8};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int smallest = 20;
    int largest = 100;
    vector<int> numbers = {10};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int smallest = 310;
    int largest = 320;
    vector<int> numbers = {34};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int smallest = 600;
    int largest = 1020;
    vector<int> numbers = {7, 73, 734, 7349};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int smallest = 600;
    int largest = 1020;
    vector<int> numbers = {7};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int smallest = 35;
    int largest = 39;
    vector<int> numbers = {3};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int smallest = 2;
    int largest = 999;
    vector<int> numbers = {1, 2, 3, 4, 44, 5, 12, 333333, 7, 8, 992, 23425243, 5, 10001};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "INVALID"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int smallest = 310;
    int largest = 310;
    vector<int> numbers = {31};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int smallest = 1999999999;
    int largest = 2000000000;
    vector<int> numbers = {18, 1999999999, 2000000000};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"INVALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int smallest = 601;
    int largest = 6000;
    vector<int> numbers = {600};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int smallest = 67;
    int largest = 703;
    vector<int> numbers = {679, 680, 681, 682, 683, 684, 685, 686, 687, 60, 50, 60, 3, 51, 70, 84, 20, 1, 5235, 53, 5, 6, 208, 80, 85};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID", "INVALID", "VALID", "VALID", "VALID", "VALID", "VALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int smallest = 1999999999;
    int largest = 2000000000;
    vector<int> numbers = {1};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int smallest = 412;
    int largest = 417;
    vector<int> numbers = {4, 40, 41, 42, 4123, 412};
    InputBoxChecker* pObj = new InputBoxChecker();
    clock_t start = clock();
    vector<string> result = pObj->checkPrefix(smallest, largest, numbers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VALID", "INVALID", "VALID", "INVALID", "INVALID", "VALID"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=16048079&rd=9990&pm=6542
********************************************************************************
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
 
class InputBoxChecker {
public:
  vector <string> checkPrefix(int, int, vector <int>);
};
 
vector <string> InputBoxChecker::checkPrefix(int s, int b, vector <int> n) {
  vector<string> r;
  
  for(int i = 0; i < n.size(); i++) {
    if(n[i] > b)
      r.push_back("INVALID");
    else if(n[i] >= s)
      r.push_back("VALID");
    else { //smaller than s
      int ns = s/10;
      int nb = b/10;
      while(!(ns <= n[i])) { ns/=10; nb/=10; }
      if(n[i] > nb)
        r.push_back("INVALID");
      else
        r.push_back("VALID");
    }
  }
  
  return r;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/