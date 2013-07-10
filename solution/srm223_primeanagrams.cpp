/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3458
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

class PrimeAnagrams {
public:
    vector<int> primes(string anagram);
};

vector<int> PrimeAnagrams::primes(string anagram) {
    vector<int> ret;
    return ret;
}


int test0() {
    string anagram = "39151";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 13, 19};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string anagram = "921179";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 17, 199};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string anagram = "01123";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 101};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string anagram = "0707070";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string anagram = "222";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string anagram = "123";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string anagram = "1311140";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 41, 103};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string anagram = "7315";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 17};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string anagram = "0000000";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string anagram = "000";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string anagram = "0030070";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string anagram = "8331759";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 157, 389};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string anagram = "8239772";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 37879};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string anagram = "8139674";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 67, 1489};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string anagram = "850793";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 7, 3089};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string anagram = "9573000";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 70009};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string anagram = "111111";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 11};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string anagram = "3111111";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11, 113};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string anagram = "234";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string anagram = "523";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 5};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string anagram = "111";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string anagram = "2299998";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 98999};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string anagram = "82749847";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 487, 4789};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string anagram = "39186758";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 37, 16889};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string anagram = "99989999";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string anagram = "98769875";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 7, 678989};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string anagram = "98749874";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 47, 48989};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string anagram = "10401210";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 101, 4001};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string anagram = "09949993";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string anagram = "33388888";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 83, 88883};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string anagram = "573";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 7};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string anagram = "19684774";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 467, 487};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string anagram = "99999888";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {89, 89, 8999};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string anagram = "99999887";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 89, 98999};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string anagram = "99999885";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 89, 98999};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string anagram = "99999884";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {89, 89, 4999};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string anagram = "99999883";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 89, 98999};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string anagram = "99999882";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 89, 98999};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string anagram = "99999881";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 89, 8999};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string anagram = "99999878";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 89, 98999};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string anagram = "99999877";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7, 989999};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string anagram = "99999875";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 7, 989999};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string anagram = "99999874";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 89, 49999};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string anagram = "99999873";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 7, 989999};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string anagram = "99999872";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 7, 989999};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string anagram = "99999871";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 199, 8999};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string anagram = "99999858";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 89, 98999};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string anagram = "99999857";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 7, 989999};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string anagram = "99999855";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 989999};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string anagram = "99999854";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 89, 49999};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string anagram = "99999853";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 989999};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string anagram = "99999852";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5, 989999};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string anagram = "000";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string anagram = "00000000";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string anagram = "01123";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 101};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string anagram = "123";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string anagram = "87654321";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 145687};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string anagram = "12345678";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 145687};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string anagram = "222";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string anagram = "98765432";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 47, 35869};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string anagram = "19191919";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 19, 1999};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string anagram = "999";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string anagram = "11797623";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 137, 1697};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string anagram = "99996123";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 199, 2699};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string anagram = "23458716";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 145687};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string anagram = "444";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string anagram = "94111972";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 127, 149};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string anagram = "11223344";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 13, 14243};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string anagram = "22999999";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string anagram = "31597267";
    PrimeAnagrams* pObj = new PrimeAnagrams();
    clock_t start = clock();
    vector<int> result = pObj->primes(anagram);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 156797};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=308453&rd=5869&pm=3458
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <functional>
#include <cctype>
#include <complex>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <queue>
#include <stack>
#include <list>
#include <iomanip>
using namespace std;
class PrimeAnagrams {public: vector <int> primes(string anagram); };
 
#define MAXPRIME 1000001
 
char comp[MAXPRIME];
 
typedef vector<int> VI;
 
VI primes;
 
void generate_primes() {
  int i;
  comp[0] = comp[1] = 1;
  for (i=4; i<MAXPRIME; i+=2)
    comp[i] = 1;
  primes.clear();
  primes.push_back(2);
  for (i=3; i<=(MAXPRIME-1)/i; i+=2) {
    if (!comp[i]) {
      for (int j=i*i; j<MAXPRIME; j+=i+i)
        comp[j] = 1;
      primes.push_back(i);
    }
  }
  for (; i<MAXPRIME; i+=2)
    if (!comp[i])
      primes.push_back(i);
}
 
long long prod;
VI res;
 
vector <int> PrimeAnagrams::primes(string anagram)
{
  generate_primes();
  prod = 0;
  res.clear();
  sort(anagram.begin(), anagram.end());
  do {
    if (anagram[0] == '0')
      continue;
    int a = 0;
    for (int i = 0; i < anagram.size()-2; i++)
    {
      a = (10 * a) + anagram[i] - '0';
      if (anagram[i+1] == '0' || comp[a])
        continue;
      int b = 0;
      for (int j = i+1; j < anagram.size()-1; j++)
      {
        b = (10 * b) + anagram[j] - '0';
        if (anagram[j+1] == '0' || comp[b])
          continue;
        int c = 0;
        for (int k = j+1; k < anagram.size(); k++)
          c = (10 * c) + anagram[k] - '0';
        if (!comp[c])
        {
          long long cand = a;
          cand *= b;
          cand *= c;
          if (res.empty() || cand < prod)
          {
            res.clear();
            res.push_back(a);
            res.push_back(b);
            res.push_back(c);
            prod = cand;
          }
        }
      }
    }
  } while (next_permutation(anagram.begin(), anagram.end()));
  sort(res.begin(), res.end());
  return res;
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/