/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10814
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

class Cryptography {
public:
    long encrypt(vector<int> numbers);
};

long Cryptography::encrypt(vector<int> numbers) {
    long ret;
    return ret;
}


int test0() {
    vector<int> numbers = {1, 2, 3};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> numbers = {1, 3, 2, 1, 1, 3};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> numbers = {1000, 999, 998, 997, 996, 995};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 986074810223904000;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> numbers = {1, 1, 1, 1};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2615348736000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> numbers = {1, 3};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> numbers = {1, 3, 3};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> numbers = {6, 3, 2, 3, 2};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 324;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> numbers = {7, 4, 1, 2, 1, 1, 3, 2};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 672;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> numbers = {5, 1, 2, 2, 6, 5, 1, 3, 2, 2, 1, 3};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 43200;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> numbers = {1, 1, 2, 3, 3, 2, 5, 1, 1, 6, 4, 1, 5, 1, 6, 2};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 518400;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> numbers = {3, 2, 3, 1, 1, 5, 1, 2, 2, 2, 3, 1, 3, 1, 1, 1, 2, 6, 1, 3, 4, 1};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1866240;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> numbers = {3, 3, 1, 3, 3, 6, 4, 2, 3, 1, 4, 4, 1, 1, 2, 3, 3, 3, 2, 1, 2, 5, 2, 3, 1, 3, 3, 1, 1};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 21767823360;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> numbers = {1, 1, 2, 4, 2, 3, 4, 2, 2, 1, 6, 3, 2, 2, 1, 1, 2, 3, 4, 2, 6, 3, 1, 3, 5, 2, 3, 1, 3, 2, 3, 2, 2, 4, 1, 1};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2476694568960;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> numbers = {3, 1, 1, 1, 4, 3, 2, 4, 1, 1, 3, 3, 3, 2, 2, 1, 3, 2, 6, 2, 5, 4, 1, 3, 3, 6, 2, 3, 6, 3, 5, 7, 3, 7, 2, 2, 1, 1, 1, 1, 4, 3, 5, 3, 4, 1, 3};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3317625251168256000;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> numbers = {1, 3, 2, 2, 3, 2, 3, 1, 3, 1, 3, 1, 2, 4, 4, 1, 4, 1, 2, 4, 2, 1, 2, 3, 2, 3, 3, 4, 1, 1, 6, 3, 2, 1, 1, 3, 2, 3, 3, 1, 4, 3, 9, 3, 1, 3, 2, 2, 7, 5};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 909977211749007360;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> numbers = {4, 2, 3, 1, 3, 2, 3, 1, 4, 4, 2, 2, 3, 3, 2, 3, 1, 1, 1, 3, 4, 3, 3, 3, 3, 1, 8, 5, 4, 4, 2, 4, 3, 1, 2, 1, 8, 1, 2, 2, 3, 1, 2, 1, 1, 3, 3, 2, 1, 4};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1232561725966909440;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> numbers = {3, 3, 1, 4, 1, 4, 4, 1, 3, 5, 1, 1, 3, 4, 3, 1, 1, 3, 2, 1, 3, 5, 3, 2, 1, 3, 1, 4, 1, 2, 6, 1, 3, 6, 2, 1, 4, 1, 2, 1, 3, 4, 2, 2, 2, 4, 6, 3, 4, 2};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 770351078729318400;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> numbers = {5, 1, 4};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 40;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> numbers = {10, 1, 5, 1, 2, 1, 1, 6};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1200;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> numbers = {1, 3, 7, 2, 1, 2, 1, 21, 8, 4, 4, 3, 6, 4, 8, 3};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 780337152;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> numbers = {6, 3, 4, 4, 2, 8, 1, 8, 2, 5, 2, 1, 8, 2, 3, 1, 2, 3, 2, 3, 3, 11, 1, 4, 4, 2, 5, 3, 4};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 161443794124800;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> numbers = {2, 2, 1, 3, 4, 6, 1, 1, 3, 3, 1, 2, 7, 2, 2, 1, 5, 4, 1, 1, 3, 7, 3, 2, 7, 11, 1, 1, 1, 7, 1, 5, 8, 1, 1, 1, 7, 3, 3, 3, 1, 2, 1, 6, 3, 11, 2};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2360963662538342400;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> numbers = {4, 2, 4, 2, 1, 1, 4, 7, 1, 3, 2, 1, 3, 5, 2, 2, 2, 1, 5, 5, 2, 1, 3, 4, 5, 6, 1, 1, 2, 6, 2, 3, 1, 3, 9, 6, 3, 2, 1, 1, 5, 2, 3, 5, 1, 1, 1, 1, 3, 2};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2925595459584000000;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> numbers = {881, 848, 22, 759, 686, 235, 855};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1797626514935512800;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> numbers = {800, 308, 172, 89, 542, 109, 602};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 135654415852032000;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> numbers = {935, 836, 971, 516, 885, 844};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 293098353412642800;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> numbers = {684, 873, 18, 422, 236, 163, 185, 56};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1908076400504628480;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> numbers = {147, 731, 181, 103, 90, 229, 791};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 33022037742265299;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> numbers = {498, 538, 210, 485, 211, 450, 834};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2171185010538282000;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> numbers = {210, 538, 834, 498, 450, 485, 211};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2171185010538282000;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> numbers = {485, 538, 211, 210, 834, 498, 450};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2171185010538282000;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> numbers = {485, 210, 498, 538, 211, 450, 834};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2171185010538282000;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> numbers = {485, 210, 450, 834, 211, 538, 498};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2171185010538282000;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> numbers = {485, 498, 538, 210, 450, 211, 834};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2171185010538282000;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> numbers = {688, 794, 325, 116, 283, 232, 840};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1145597005792512000;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> numbers = {116, 840, 232, 283, 794, 688, 325};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1145597005792512000;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> numbers = {232, 840, 794, 325, 116, 283, 688};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1145597005792512000;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> numbers = {325, 688, 232, 116, 794, 840, 2, 283};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3407416735177728000;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> numbers = {325, 840, 688, 794, 232, 2, 283, 116};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3407416735177728000;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> numbers = {840, 232, 2, 688, 283, 794, 325, 116};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3407416735177728000;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> numbers = {2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1, 1, 1, 2, 2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 2, 1, 2};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 33554432;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> numbers = {2, 1, 2, 3, 3, 3, 2, 2, 2, 3, 2, 3, 2, 2, 3, 2, 3, 3, 3, 1, 2, 3, 2, 2, 2, 2, 2, 3, 1, 2, 3, 1, 3, 3, 3, 2, 3, 3, 3, 3, 2, 3, 2, 3, 3, 3, 2, 2, 2, 3};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2369190669160808448;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> numbers = {4, 5, 3, 1, 4, 3, 3, 5, 3, 5, 1, 4, 4, 5, 5, 4, 1, 4, 1, 4, 3, 5, 1, 4, 3, 4, 1, 1, 2, 4, 5, 4, 1, 4, 3, 2, 5, 5, 2, 3};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3439853568000000000;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> numbers = {6, 4, 2, 4, 1, 7, 6, 4, 7, 6, 5, 4, 7, 6, 5, 1, 6, 4, 3, 3, 7, 5, 3, 6, 2, 5, 2, 4, 2, 1, 4};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 991090610012160000;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> numbers = {10, 8, 10, 7, 5, 1, 8, 12, 12, 4, 10, 5, 3, 4, 11, 2, 5, 2, 7, 2, 2, 8, 6, 8, 2};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 732476473344000000;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> numbers = {5, 9, 16, 16, 6, 18, 6, 10, 8, 6, 4, 7, 3, 12, 7, 2, 16, 10, 18, 7, 1};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2038814969167872000;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> numbers = {21, 20, 14, 9, 14, 5, 9, 16, 13, 5, 10, 3, 25, 6, 11, 4, 4, 18, 2};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1482902733312000000;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> numbers = {1, 30, 23, 5, 13, 9, 11, 23, 26, 5, 21, 10, 35, 22, 37, 6};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 953151246847800000;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> numbers = {46, 11, 19, 29, 9, 14, 20, 30, 37, 47, 10, 16, 29};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 188972654787840000;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> numbers = {70, 67, 43, 28, 75, 11, 47, 44, 86, 57, 15};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 772781896323360000;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> numbers = {202, 29, 135, 196, 166, 258, 196, 141};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 189786554765740800;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> numbers = {600, 10, 431, 203, 138, 156, 633};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 7869092282251200;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> numbers = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1688849860263936;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> numbers = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1801135623563989452;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> numbers = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1788139343261718750;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> numbers = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1297036692682702848;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> numbers = {12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2403495365635473408;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> numbers = {19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 841059669245141180;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> numbers = {25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1549720764160156250;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> numbers = {37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 182726206151878262;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> numbers = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 99609375000000000;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> numbers = {100, 100, 100, 100, 100, 100, 100, 100, 100};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1010000000000000000;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> numbers = {275, 275, 275, 275, 275, 275, 275};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 119372762695312500;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> numbers = {777, 777, 777, 777, 777, 777};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 220335609371317146;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> numbers = {1, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 2, 2, 1, 1, 1, 2, 2, 1, 1, 2, 2, 2, 1, 2, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 2, 2};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 536870912;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> numbers = {2, 2, 3, 3, 3, 3, 2, 2, 2, 3, 3, 2, 3, 3, 2, 3, 3, 2, 2, 3, 3, 2, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 2, 3, 2, 2, 2, 2, 2, 3, 2, 2, 3, 2, 2, 2};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1776893001870606336;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> numbers = {4, 4, 5, 5, 4, 4, 5, 4, 5, 4, 4, 5, 5, 5, 5, 4, 5, 5, 5, 4, 5, 4, 5, 4, 4, 5, 5, 5};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3200000000000000000;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> numbers = {8, 8, 8, 7, 7, 7, 8, 8, 7, 7, 8, 8, 7, 7, 8, 7, 7, 8, 7, 8, 8};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2773078757450186752;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> numbers = {12, 12, 12, 13, 11, 12, 12, 12, 12, 12, 12, 13, 13, 10, 11, 10, 13};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1961474557091512320;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> numbers = {18, 19, 17, 19, 19, 19, 20, 20, 20, 20, 17, 19, 18, 18};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 707012234657280000;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> numbers = {24, 25, 23, 26, 23, 27, 22, 23, 26, 26, 23, 24, 22};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 967627407648844800;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> numbers = {33, 35, 33, 33, 38, 38, 36, 35, 39, 38, 33, 38};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4381858202613091200;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> numbers = {52, 46, 49, 48, 51, 50, 52, 47, 46, 47, 50};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3872626339196160000;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> numbers = {102, 94, 94, 105, 91, 90, 94, 99, 94};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 685518002684555040;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> numbers = {290, 256, 277, 274, 293, 247, 256};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 104815995052359680;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> numbers = {806, 842, 781, 781, 755, 813};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 254426030465823216;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> numbers = {904, 966, 923, 965, 994, 965};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 746910247147018500;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> numbers = {3, 784, 7, 9, 19, 12, 354, 155};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2471646804480;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> numbers = {37, 49, 176, 570, 11, 20, 2, 202};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 24248262931200;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> numbers = {11, 109, 3, 86, 24, 59, 10, 271, 16, 2, 18, 7, 112};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 804083663078277120;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> numbers = {115, 121, 12, 28, 141, 4, 25, 25, 100, 30, 320};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1977711120000000000;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> numbers = {101, 11, 59, 3, 178, 33};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1540139304;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> numbers = {205, 2, 360, 3, 108, 7};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 502135200;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> numbers = {179, 64, 132, 117, 178, 10, 94, 228, 409};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3036627313075040256;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> numbers = {517, 167, 312, 442, 237, 10, 736, 178};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4066518247440270336;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> numbers = {210, 22, 775, 69, 4, 9};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 11117452500;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> numbers = {265, 954, 10, 23, 116, 4};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 33724854000;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> numbers = {7, 884, 73, 23};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 11873888;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> numbers = {48, 3, 162, 11, 46};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 15738624;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> numbers = {259, 505, 272, 33, 879, 108, 138, 279};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4421146270930986240;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> numbers = {303, 277, 5, 110, 7, 91, 294, 356, 948};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3501155751995341440;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> numbers = {499, 429, 22, 473, 498, 86, 274, 161};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4399983495341762328;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> numbers = {302, 135, 9, 216, 406, 494, 500, 216};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1907529225638400000;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> numbers = {93, 17, 717, 75, 16, 48, 197, 628, 213};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1828133559107899200;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> numbers = {670, 339, 21, 54, 82, 439, 64, 264, 24};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3938804784057876480;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> numbers = {10, 51, 19, 4, 88, 5, 16, 11, 36, 207, 132, 593};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2188570779495936000;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> numbers = {10, 103, 43, 592, 5, 378, 33, 48, 198};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 18650513977159680;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> numbers = {206, 12, 85};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 227630;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> numbers = {8, 65, 841};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 491985;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> numbers = {139, 2, 92};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 38364;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> numbers = {6, 400, 62};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 173600;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> numbers = {22, 8, 171};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 33858;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> numbers = {28, 2, 310};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 26040;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> numbers = {19, 538};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 10760;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> numbers = {9, 840};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 8400;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> numbers = {688, 19};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 13760;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> numbers = {538, 3, 13};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 27976;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> numbers = {10, 671};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 7381;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> numbers = {974, 3};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3896;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> numbers = {13, 239};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 3346;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> numbers = {247, 18};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4693;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> numbers = {16, 64, 8, 128, 256, 4, 512, 32, 2, 512};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 27021597764222976;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> numbers = {2, 4, 8, 16, 32, 64, 128, 256, 512, 512};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 27021597764222976;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> numbers = {9, 243, 729, 27, 729, 729, 729, 81};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1500946352969991210;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> numbers = {9, 27, 81, 243, 729, 729, 729, 729};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1500946352969991210;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> numbers = {64, 4, 256, 256, 256, 256, 16, 256, 256};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1441151880758558720;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> numbers = {4, 16, 64, 256, 256, 256, 256, 256, 256};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1441151880758558720;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> numbers = {625, 125, 625, 5, 625, 625, 25, 625};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1788139343261718750;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> numbers = {5, 25, 125, 625, 625, 625, 625, 625};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1788139343261718750;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> numbers = {16, 2, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 1, 16, 16, 16};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4611686018427387904;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> numbers = {1, 1, 1, 1, 16, 16, 16, 1, 1, 1, 2, 1, 16, 1, 16, 1, 16, 16, 1, 1, 1, 16, 1, 1, 16, 1, 1, 1, 16, 1, 1, 16, 1, 16, 1, 1, 1, 16, 1, 16, 1, 1, 1, 16, 1, 1, 1, 1, 1, 1};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 4611686018427387904;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> numbers = {1, 1, 1, 1};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> numbers = {1000, 999, 998, 997, 996, 995};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 986074810223904000;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> numbers = {3, 2, 1};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> numbers = {4, 3};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> numbers = {17, 21, 3, 1, 5, 2};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 21420;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> numbers = {3, 2, 2, 3};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 54;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> numbers = {100, 100, 100, 100, 100, 100};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1010000000000;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 240;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> numbers = {1, 3, 2, 1, 1, 3};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> numbers = {1000, 1000};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 1001000;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> numbers = {99, 100};
    Cryptography* pObj = new Cryptography();
    clock_t start = clock();
    long result = pObj->encrypt(numbers);
    clock_t end = clock();
    delete pObj;
    long expected = 10000;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22868779&rd=14159&pm=10814
********************************************************************************
#include <cstdlib> 
#include <cctype> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <sstream> 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
#include <fstream> 
#include <numeric> 
#include <iomanip> 
#include <bitset> 
#include <list> 
#include <stdexcept> 
#include <functional> 
#include <utility> 
#include <ctime> 
using namespace std; 
 
#define PB push_back 
#define MP make_pair 
 
class Cryptography 
{ 
        public: 
        long long encrypt(vector <int> vi) 
        { 
                int n = vi.size(); 
                long long res = 0, prod; 
                for(int i = 0; i != n; ++i) 
                { 
                    vi[i]++; 
                    prod = 1; 
                    for(int j = 0; j != n; ++j) 
                        prod *= vi[j]; 
                    if(res < prod) res = prod; 
                    vi[i]--; 
                } 
                return res; 
        } 
         
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/