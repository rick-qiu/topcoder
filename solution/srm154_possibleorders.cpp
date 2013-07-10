/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1643
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

class PossibleOrders {
public:
    long howMany(int num, vector<string> facts);
};

long PossibleOrders::howMany(int num, vector<string> facts) {
    long ret;
    return ret;
}


int test0() {
    int num = 4;
    vector<string> facts = {"0=2", "1=3"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int num = 4;
    vector<string> facts = {};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int num = 3;
    vector<string> facts = {"1=1"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int num = 3;
    vector<string> facts = {"1=2", "2=1"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
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
    int num = 5;
    vector<string> facts = {};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 541;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int num = 6;
    vector<string> facts = {};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 4683;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int num = 7;
    vector<string> facts = {};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 47293;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int num = 8;
    vector<string> facts = {};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 545835;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int num = 9;
    vector<string> facts = {};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 7087261;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int num = 10;
    vector<string> facts = {};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 102247563;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int num = 11;
    vector<string> facts = {};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1622632573;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int num = 12;
    vector<string> facts = {};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 28091567595;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int num = 13;
    vector<string> facts = {};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 526858348381;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int num = 14;
    vector<string> facts = {};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 10641342970443;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int num = 15;
    vector<string> facts = {};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 230283190977853;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int num = 16;
    vector<string> facts = {};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 5315654681981355;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int num = 17;
    vector<string> facts = {};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 130370767029135901;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int num = 10;
    vector<string> facts = {"1=3", "1=5"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 545835;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int num = 17;
    vector<string> facts = {"1=3", "3=5", "5=7", "1=7"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 10641342970443;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int num = 17;
    vector<string> facts = {"1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1", "1=1"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 130370767029135901;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int num = 17;
    vector<string> facts = {"3=16", "12=12", "16=14", "8=5", "0=3", "2=12", "14=3", "13=3", "4=3", "15=5", "16=3", "16=3", "16=6", "5=3", "0=15", "0=15", "13=9", "13=15", "5=11", "2=16", "0=2", "16=9", "14=8", "13=2", "4=12", "6=15", "3=8", "8=11", "14=9", "3=3", "13=3", "5=13", "9=8", "14=11", "15=16", "14=7", "11=5", "0=9", "5=13", "7=1", "0=9", "7=3", "5=6", "3=13", "16=5", "13=11", "10=5", "5=4", "10=2", "4=5"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int num = 17;
    vector<string> facts = {"7=11", "13=6", "13=15", "13=9", "10=1", "9=11", "1=13", "15=13", "16=1", "16=2", "11=8", "13=10", "11=13", "15=3", "8=14", "7=9", "5=0", "13=14", "11=2", "0=11", "13=4", "5=9", "4=4", "2=6", "10=3", "2=3", "16=1", "0=6", "11=8", "0=13", "12=5", "8=3", "12=11", "7=2", "4=12", "10=12", "14=4", "13=13", "11=5", "12=2", "3=0", "7=2", "2=1", "3=6", "1=7", "14=7", "9=16", "6=2", "2=15", "2=0"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int num = 17;
    vector<string> facts = {"2=0", "14=3", "15=13", "4=3", "2=9", "11=4", "8=8", "8=1", "13=1", "14=16", "11=2", "13=13", "4=2", "11=11", "14=13", "4=5", "13=11", "15=0", "10=2", "5=7", "4=7", "8=1", "5=4", "10=14", "2=1", "2=11", "4=16", "4=4", "13=10", "4=2", "3=8", "2=1", "14=11", "7=7", "4=14", "13=4", "6=13", "15=0", "2=2", "7=9", "7=8", "8=11", "2=14", "5=8", "10=10", "12=6", "12=10", "15=6", "10=5", "11=1"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int num = 17;
    vector<string> facts = {"9=10", "5=13", "7=4", "6=1", "13=10", "7=14", "15=5", "16=8", "16=16", "7=5", "9=13", "10=4", "11=16", "1=9", "4=10", "7=2", "15=2", "13=2", "2=13", "6=9", "16=14", "16=2", "7=14", "3=0", "7=5", "3=15", "11=6", "1=7", "8=13", "13=6", "11=0", "15=4", "2=9", "5=10", "6=11", "9=12", "2=9", "7=2", "2=3", "6=13", "10=14", "4=0", "16=2", "14=3", "2=5", "15=4", "1=5", "0=1", "2=1", "3=8"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int num = 17;
    vector<string> facts = {"1=15", "2=5", "6=8", "13=13", "12=7", "12=4", "3=1", "8=13", "2=14", "4=4", "0=5", "14=9", "3=10", "10=9", "16=8", "10=9", "15=7", "0=12", "2=1", "14=2", "2=14", "0=8", "6=5", "14=6", "12=8", "13=8", "10=10", "1=7", "15=13", "9=1", "16=8", "13=3", "13=15", "6=9", "6=3", "14=12", "15=9", "5=9", "8=8", "7=7", "7=12", "8=10", "5=2", "5=9", "9=6", "2=6", "9=11", "3=10", "15=11", "3=13"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int num = 17;
    vector<string> facts = {"15=7", "14=4", "0=16", "2=2", "6=14", "5=1", "10=2", "3=5", "0=7", "14=8", "15=1", "0=0", "16=8", "8=3", "13=16", "15=11", "1=4", "0=4", "10=2", "16=8", "13=8", "15=14", "0=6", "7=7", "12=8", "2=16", "7=0", "16=12", "16=11", "1=10", "1=6", "11=8", "6=10", "8=3", "11=12", "6=15", "14=3", "5=4", "4=2", "13=10", "14=5", "7=14", "8=5", "2=10", "11=8", "7=5", "11=7", "16=12", "12=0", "15=13"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int num = 17;
    vector<string> facts = {"4=14", "6=12", "4=14", "5=5", "9=7", "13=12", "0=2", "16=11", "2=9", "7=13", "10=14", "3=5", "6=12", "9=5", "15=7", "2=10", "5=9", "3=10", "3=9", "15=7", "13=1", "8=11", "15=3", "3=0", "14=10", "7=4", "12=2", "4=4", "6=15", "16=12", "15=11", "4=13", "9=16", "10=15", "15=9", "2=9", "15=13", "0=9", "10=15", "7=3", "11=16", "2=0", "6=10", "0=7", "4=7", "8=6", "16=3", "7=2", "2=6", "11=7"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int num = 17;
    vector<string> facts = {"5=0", "15=7", "8=0", "8=6", "16=14", "10=8", "13=0", "6=4", "13=15", "2=10", "3=15", "16=2", "9=10", "11=8", "8=3", "7=8", "13=4", "9=7", "7=7", "16=13", "9=4", "2=4", "15=11", "16=0", "3=15", "3=5", "7=5", "2=7", "15=0", "8=4", "15=1", "2=16", "9=3", "14=4", "5=5", "6=15", "4=0", "11=5", "4=3", "12=4", "1=9", "0=7", "16=1", "5=6", "6=8", "9=0", "10=10", "7=14", "16=13", "2=1"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int num = 17;
    vector<string> facts = {"3=9", "9=1", "15=6", "2=1", "11=11", "5=8", "13=9", "0=14", "6=9", "14=14", "7=5", "1=1", "14=14", "15=1", "2=6", "5=0", "13=12", "7=13", "7=4", "15=8", "1=14", "7=8", "2=8", "11=9", "5=13", "8=13", "12=2", "4=3", "15=11", "3=2", "15=6", "11=10", "15=3", "4=16", "13=12", "9=12", "16=4", "4=15", "14=14", "7=11", "8=3", "6=6", "8=0", "14=9", "0=12", "13=13", "0=0", "15=14", "8=16", "13=9"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int num = 17;
    vector<string> facts = {"13=14", "9=10", "8=15", "2=13", "4=0", "0=3", "13=4", "11=12", "16=10", "3=5", "4=0", "7=0", "8=0", "8=2", "3=6", "16=6", "8=8", "6=13", "3=4", "11=14", "8=11", "7=11", "15=8", "6=0", "8=1", "5=16", "2=12", "13=4", "5=5", "13=14", "14=2", "3=16", "7=12", "10=12", "0=0", "14=15", "10=0", "0=1", "15=6", "4=4", "8=12", "5=6", "9=5", "3=13", "3=4", "5=11", "16=13", "12=16", "11=0", "16=5"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int num = 17;
    vector<string> facts = {"3=7", "5=7", "3=0", "14=3", "2=5", "4=3", "12=1", "2=5", "2=10", "14=9", "1=4", "3=14", "7=0", "14=11", "7=6", "7=6", "13=3", "9=3", "3=2", "4=2", "7=11", "13=4", "0=7", "10=10", "11=5", "15=1", "4=2", "16=0", "3=15", "0=12", "10=0", "16=13", "6=13", "4=10", "14=11", "15=14", "12=9", "13=6", "0=4", "4=13", "0=0", "6=11", "1=6", "7=9", "3=10", "16=3", "16=11", "2=7", "11=13", "16=14"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int num = 17;
    vector<string> facts = {"3=6", "9=8", "8=1", "6=2", "9=4", "1=11", "13=13", "11=16", "14=15", "15=9", "4=13", "12=16", "2=3", "9=16", "1=5", "8=13", "5=2", "15=5", "14=10", "10=1", "7=3", "1=14", "1=15", "0=8", "3=15", "0=3", "11=4", "4=16", "7=0", "10=1", "7=4", "5=5", "3=3", "11=7", "11=0", "7=12", "12=10", "3=8", "9=1", "5=13", "4=4", "16=6", "2=16", "12=4", "1=9", "8=14", "6=1", "14=15", "0=5", "15=7"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int num = 17;
    vector<string> facts = {"3=13", "1=15", "0=2", "7=4", "4=3", "4=7", "4=7", "14=10", "14=9", "14=16", "12=15", "13=9", "12=7", "10=13", "1=6", "14=5", "6=1", "7=8", "16=6", "9=0", "16=8", "11=15", "14=14", "14=0", "8=5", "9=6", "2=12", "9=8", "12=12", "8=6", "10=16", "8=16", "3=8", "13=4", "3=5", "3=14", "0=13", "1=12", "13=0", "10=16", "8=4", "14=13", "4=0", "11=4", "8=16", "10=6", "6=15", "13=6", "10=5", "4=1"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int num = 17;
    vector<string> facts = {"5=3", "9=5", "0=14", "8=15", "10=9", "1=7", "16=5", "16=1", "5=11", "4=0", "11=16", "6=12", "13=0", "2=9", "4=16", "6=5", "11=9", "13=5", "10=5", "10=15", "3=14", "7=0", "9=0", "14=11", "5=2", "12=8", "0=10", "8=16", "6=15", "15=10", "10=11", "5=7", "3=13", "1=6", "7=11", "0=5", "14=3", "6=14", "1=3", "11=2", "13=11", "9=8", "2=12", "6=13", "13=14", "3=12", "12=7", "0=16", "16=8", "16=6"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int num = 17;
    vector<string> facts = {"5=7", "13=3", "3=7", "10=8", "13=8", "13=3", "14=3", "12=7", "1=13", "3=0", "4=10", "2=15", "9=4", "14=10", "15=9", "5=1", "16=11", "9=8", "12=8", "9=14", "9=14", "16=1", "3=1", "6=12", "12=0", "8=9", "2=15", "3=10", "4=9", "3=11", "4=0", "8=8", "9=0", "1=14", "10=4", "4=10", "7=0", "10=3", "16=10", "5=2", "0=15", "9=12", "5=16", "13=12", "1=16", "10=12", "2=14", "16=0", "11=4", "3=9"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int num = 17;
    vector<string> facts = {"4=14", "13=16", "9=12", "8=7", "0=7", "5=5", "12=13", "12=15", "0=1", "16=15", "15=0", "3=7", "10=15", "11=16", "13=16", "16=10", "13=16", "13=7", "1=1", "12=14", "1=2", "8=5", "3=13", "7=8", "1=1", "15=0", "0=12", "12=14", "5=7", "5=8", "12=13", "11=7", "6=10", "14=14", "10=10", "12=3", "3=4", "9=9", "7=13", "13=13", "8=1", "14=15", "2=11", "16=10", "4=12", "2=9", "4=4", "13=4", "11=15", "15=0"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
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
    int num = 17;
    vector<string> facts = {"12=4", "13=5", "15=11", "12=3", "11=1", "15=5", "6=8", "1=5", "3=0", "3=14", "3=15", "13=5", "1=16", "10=9", "3=6", "3=1", "15=12", "11=0", "15=16", "16=3", "15=12", "7=13", "10=10", "9=4", "3=2", "12=15", "9=14", "8=10", "8=10", "6=11", "15=6", "16=8", "6=2", "7=16", "8=3", "0=9", "13=11", "6=6", "11=11", "1=7", "14=3", "8=8", "8=16", "7=14", "3=8", "9=14", "3=10", "0=1", "9=9", "10=1"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
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
    int num = 17;
    vector<string> facts = {"4=12", "4=9", "11=12", "11=6", "8=4", "13=0", "4=2", "9=3", "5=6", "12=16", "14=10", "8=10", "1=4", "13=10", "11=7", "12=0", "14=14", "3=10", "2=1", "12=1", "0=8", "9=9", "5=15", "6=2", "15=0", "14=13", "6=4", "5=13", "7=15", "10=0", "9=12", "13=16", "10=11", "10=2", "8=13", "13=10", "7=6", "0=5", "4=15", "0=10", "14=12", "5=11", "11=8", "13=12", "14=3", "4=14", "8=8", "2=9", "11=7", "16=14"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
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
    int num = 17;
    vector<string> facts = {"12=13", "10=13", "6=7", "9=14", "0=9", "8=12", "3=8", "11=3", "15=11", "15=16", "6=7", "6=12", "15=13", "13=7", "14=2", "14=16", "10=1", "8=1", "6=16", "14=9", "8=9", "15=3", "3=2", "9=3", "4=3", "5=9", "0=4", "15=5", "12=12", "12=7", "9=15", "16=0", "3=15", "6=0", "11=1", "5=13", "8=10", "0=11", "7=3", "3=4", "2=6", "2=5", "9=5", "1=9", "2=10", "9=11", "4=6", "13=16", "1=9", "6=14"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int num = 17;
    vector<string> facts = {"9=13", "1=1", "8=8", "15=16", "3=16", "2=0", "2=15", "1=1", "13=1", "14=12", "13=14", "6=3", "7=10", "4=0", "14=3", "8=3", "2=10", "15=11", "14=2", "4=13", "1=14", "2=4", "13=4", "16=16", "3=1", "13=7", "16=9", "14=13", "16=14", "4=6", "11=0", "9=5", "4=12", "14=4", "4=0", "3=13", "13=0", "3=12", "3=8", "16=2", "0=6", "0=1", "7=10", "14=15", "7=14", "2=11", "16=12", "6=6", "1=4", "12=14"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int num = 17;
    vector<string> facts = {"9=0", "6=4", "5=5", "4=9", "0=3", "11=15", "13=0", "7=8", "14=1", "14=1", "15=8", "3=4", "1=16", "6=2", "7=6", "15=4", "6=6", "1=4", "0=3", "10=14", "14=15", "1=14", "0=6", "3=12", "3=12", "15=3", "1=4", "9=15", "14=6", "16=10", "9=5", "8=6", "14=11", "0=6", "13=3", "0=6", "9=6", "0=4", "0=12", "7=4", "15=0", "16=9", "2=6", "2=10", "3=10", "16=3", "3=8", "12=0", "6=8", "13=10"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int num = 17;
    vector<string> facts = {"4=9", "13=13", "2=10", "11=13", "3=5", "7=5", "7=14", "14=15", "10=0", "16=5", "1=15", "6=4", "16=2", "8=16", "15=0", "1=10", "6=0", "3=13", "13=10", "5=13", "1=5", "8=8", "2=3", "7=5", "14=14", "13=6", "5=7", "1=6", "13=2", "6=2", "8=2", "16=12", "6=0", "5=13", "0=13", "10=15", "12=9", "14=10", "6=7", "0=5", "0=9", "15=5", "8=10", "9=7", "12=0", "9=1", "14=6", "3=5", "12=15", "11=11"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int num = 17;
    vector<string> facts = {"3=11", "13=3", "11=14", "0=15", "11=8", "15=1", "9=1", "15=16", "0=12", "11=10", "16=5", "4=13", "4=9", "5=15", "14=12", "10=12", "7=2", "2=4", "1=4", "3=6", "8=10", "9=15", "3=13", "10=2", "9=13", "1=11", "2=16", "9=10", "16=7", "7=0", "16=14", "13=5", "4=15", "4=12", "3=15", "0=6", "14=11", "4=3", "4=11", "12=10", "10=12", "7=11", "14=4", "12=10", "5=11", "8=14", "15=4", "11=0", "6=13", "9=1"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int num = 17;
    vector<string> facts = {"16=12", "9=6", "9=2", "2=2", "1=8", "12=5", "6=13", "8=12", "8=13", "0=15", "14=16", "16=13", "6=15", "7=13", "10=12", "0=5", "0=15", "10=8", "5=6", "1=9", "11=8", "13=14", "0=4", "11=1", "4=15", "10=11", "14=9", "8=8", "14=4", "8=12", "2=1", "11=9", "11=14", "16=4", "10=3", "7=11", "14=14", "1=0", "14=16", "6=11", "8=14", "2=12", "11=16", "15=11", "13=2", "6=8", "5=8", "5=3", "9=6", "11=13"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int num = 17;
    vector<string> facts = {"4=14", "7=10", "5=13", "8=15", "3=16", "11=3", "16=3", "15=3", "6=15", "8=0", "16=13", "16=1", "11=16", "12=15", "16=4", "3=6", "8=11", "1=15", "3=12", "1=14", "0=7", "11=11", "1=3", "13=15", "2=7", "10=3", "15=6", "16=4", "16=10", "16=3", "4=10", "10=9", "8=1", "7=2", "11=16", "11=1", "3=13", "11=15", "10=11", "10=14", "6=7", "5=10", "14=9", "7=14", "5=2", "15=1", "7=1", "3=12", "12=8", "15=2"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int num = 17;
    vector<string> facts = {"3=2", "9=7", "15=1", "6=2", "0=1", "14=8", "14=6", "10=9", "0=2", "15=0", "14=5", "2=3", "2=14", "16=10", "14=8", "16=2", "5=7", "10=1", "3=9", "5=9", "0=12", "4=1", "1=2", "6=9", "9=9", "5=14", "5=11", "0=14", "11=1", "15=0", "13=16", "16=5", "12=10", "7=15", "15=10", "8=4", "9=6", "5=12", "4=6", "3=4", "9=13", "14=0", "1=8", "0=8", "11=13", "16=4", "16=2", "6=13", "3=13", "3=12"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int num = 17;
    vector<string> facts = {"14=16", "6=0", "6=16", "7=10", "13=15", "0=16", "10=6", "15=2", "11=5", "3=10", "5=5", "14=5", "1=6", "1=4", "7=12", "3=4", "16=0", "3=1", "14=15", "8=11", "16=3", "1=4", "1=16", "16=10", "14=0", "3=6", "15=0", "6=6", "11=2", "1=8", "10=5", "16=13", "4=7", "6=7", "3=15", "12=16", "0=12", "6=15", "5=10", "13=11", "11=1", "6=3", "4=5", "15=1", "7=7", "5=16", "3=5", "12=10", "8=2", "1=10"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int num = 17;
    vector<string> facts = {"4=16", "1=4", "15=13", "16=14", "7=0", "13=16", "6=0", "14=0", "13=7", "0=2", "3=1", "1=8", "8=6", "11=2", "6=4", "6=2", "12=15", "3=8", "8=4", "15=16", "15=4", "12=9", "12=5", "4=1", "12=9", "12=2", "15=6", "16=3", "13=1", "16=16", "14=12", "4=6", "3=10", "4=2", "6=1", "4=6", "15=7", "11=5", "5=4", "12=13", "5=9", "7=16", "1=10", "16=16", "7=11", "12=7", "14=15", "5=11", "15=0", "15=4"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int num = 17;
    vector<string> facts = {"9=3", "4=9", "9=2", "3=8", "11=6", "11=0", "11=14", "10=9", "3=10", "15=14", "9=12", "6=2", "2=5", "4=10", "7=2", "3=14", "3=0", "14=5", "8=5", "10=8", "13=13", "6=10", "8=14", "8=5", "10=10", "2=16", "2=16", "3=1", "6=14", "1=9", "12=4", "16=16", "4=10", "10=7", "13=4", "1=0", "15=1", "7=16", "9=14", "1=5", "10=2", "7=4", "1=11", "16=10", "11=4", "15=15", "5=9", "9=5", "0=8", "9=1"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
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
    int num = 17;
    vector<string> facts = {"15=7", "14=3", "8=3", "9=3", "11=7", "5=15", "13=10", "15=3", "4=2", "3=3", "16=9", "13=6", "1=13", "12=15", "5=7", "10=15", "4=6", "4=6", "8=14", "14=3", "14=7", "10=10", "6=12", "14=13", "14=4", "6=10", "1=4", "7=6", "12=11", "9=1", "5=0", "15=1", "12=3", "6=12", "14=15", "14=1", "12=3", "10=5", "8=5", "14=16", "9=14", "10=8", "13=1", "14=8", "3=12", "16=12", "8=12", "14=11", "6=2", "7=6"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int num = 17;
    vector<string> facts = {"5=5", "8=16", "1=0", "1=8", "11=10", "2=16", "16=5", "3=14", "3=13", "12=6", "9=0", "3=15", "11=15", "14=7", "12=9", "15=12", "6=14", "8=1", "0=8", "6=16", "13=1", "7=2", "5=13", "14=2", "8=7", "1=16", "12=2", "14=8", "11=6", "11=9", "0=13", "9=2", "8=11", "13=10", "14=15", "11=13", "16=12", "10=3", "9=6", "1=6", "10=9", "10=9", "7=14", "0=2", "14=0", "2=16", "14=11", "2=7", "10=10", "13=9"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int num = 17;
    vector<string> facts = {"12=1", "14=3", "16=1", "16=1", "6=4", "7=11", "8=0", "14=11", "15=12", "6=8", "0=1", "11=10", "0=3", "11=4", "1=1", "12=3", "2=0", "6=2", "14=2", "9=14", "14=2", "12=13", "7=11", "8=10", "6=9", "1=0", "15=12", "6=2", "8=3", "13=5", "5=0", "16=3", "15=2", "12=14", "10=15", "15=5", "1=6", "10=0", "14=16", "10=15", "9=2", "6=3", "3=2", "7=15", "1=11", "7=12", "8=2", "8=12", "7=15", "12=12"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int num = 17;
    vector<string> facts = {"8=8", "15=1", "5=16", "6=12", "14=8", "7=5", "7=6", "1=2", "8=14", "6=16", "10=15", "16=1", "12=7", "13=0", "14=3", "4=8", "0=12", "14=13", "15=8", "0=4", "11=9", "5=10", "6=7", "10=3", "4=12", "3=9", "2=3", "16=8", "14=1", "0=15", "16=6", "6=7", "13=6", "16=12", "16=4", "8=1", "14=7", "2=5", "5=9", "9=1", "15=5", "16=13", "13=13", "1=11", "9=3", "3=1", "15=10", "7=2", "1=3", "15=7"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int num = 17;
    vector<string> facts = {"1=14", "7=9", "2=14", "6=16", "4=7", "0=16", "4=3", "8=8", "6=12", "5=12", "10=7", "15=1", "10=16", "13=6", "4=12", "14=3", "3=14", "10=15", "14=16", "3=2", "3=11", "2=3", "5=9", "9=6", "10=10", "3=15", "6=1", "15=11", "14=4", "3=3", "10=3", "8=7", "0=12", "6=1", "11=10", "3=9", "1=16", "14=14", "0=9", "14=8", "6=13", "0=9", "5=5", "12=16", "5=0", "1=4", "7=4", "8=6", "5=4", "9=1"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int num = 17;
    vector<string> facts = {"7=10", "9=2", "1=7", "5=14", "12=15", "14=12", "9=6", "0=11", "7=11", "3=15", "1=9", "9=8", "7=13", "0=13", "10=14", "10=1", "3=4", "12=0", "2=11", "15=1", "7=0", "4=15", "7=10", "3=1", "3=14", "16=14", "1=8", "4=16", "16=15", "15=13", "6=6", "10=7", "12=8", "16=3", "13=10", "4=1", "8=15", "7=15", "6=11", "4=10", "4=12", "7=14", "9=4", "10=15", "8=6", "7=7", "1=1", "2=6", "1=15", "5=6"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int num = 17;
    vector<string> facts = {"2=0", "9=9", "10=1", "2=14", "8=15", "12=0", "14=8", "10=5", "6=3", "4=6", "13=2", "2=16", "10=12", "14=9", "9=15", "15=12", "5=13", "3=10", "1=13", "10=0", "1=1", "7=5", "6=8", "13=4", "4=8", "0=10", "2=1", "16=16", "4=7", "10=14", "9=13", "5=5", "10=15", "15=12", "2=5", "13=12", "8=16", "2=1", "0=10", "11=3", "13=16", "7=13", "2=6", "12=15", "7=14", "13=12", "7=5", "3=14", "14=9", "6=10"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int num = 17;
    vector<string> facts = {"9=16", "14=4", "4=8", "9=13", "12=8", "14=12", "0=7", "11=10", "3=5", "13=14", "15=12", "15=11", "11=16", "9=12", "13=2", "0=9", "16=8", "16=9", "7=4", "5=6", "13=11", "1=6", "13=10", "5=3", "16=8", "10=10", "8=11", "4=14", "16=3", "9=12", "15=2", "7=13", "9=2", "7=9", "2=11", "11=14", "13=7", "6=6", "16=8", "9=0", "3=0", "9=16", "9=0", "2=14", "7=6", "4=3", "12=10", "4=8", "14=2", "13=8"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
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
    int num = 17;
    vector<string> facts = {"8=12", "0=10", "16=16", "1=16", "7=11", "0=10", "14=3", "8=2", "1=2", "15=4", "14=3", "3=1", "10=8", "4=5", "5=2", "6=11", "11=10", "12=10", "10=16", "15=14", "9=16", "1=12", "6=3", "3=12", "16=13", "14=12", "3=6", "8=0", "13=13", "14=3", "5=13", "3=1", "5=3", "8=16", "0=9", "0=15", "12=7", "4=13", "4=5", "10=10", "3=4", "13=14", "16=9", "13=11", "12=1", "8=7", "4=0", "14=16", "14=15", "14=10"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int num = 17;
    vector<string> facts = {"3=0", "6=3", "9=5", "0=7", "16=3", "9=1", "0=10", "2=0", "11=3", "0=3", "9=5", "13=11", "0=8", "12=14", "16=14", "7=14", "6=3", "1=0", "12=13", "12=5", "13=6", "9=14", "9=14", "3=11", "13=9", "14=5", "15=15", "6=11", "12=8", "14=8", "13=2", "7=14", "7=0", "12=12", "10=7", "16=6", "5=3", "16=2", "2=6", "15=11", "16=7", "12=4", "0=1", "7=16", "10=7", "1=7", "4=10", "5=0", "8=4", "14=16"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int num = 17;
    vector<string> facts = {"13=2", "14=2", "1=13", "9=8", "15=12", "5=1", "3=16", "5=16", "13=4", "3=11", "4=8", "14=11", "14=6", "8=4", "4=9", "12=0", "0=6", "1=6", "1=10", "15=4", "4=12", "13=15", "14=1", "8=2", "12=16", "16=2", "2=14", "14=6", "16=6", "1=7", "16=9", "13=15", "7=7", "8=16", "3=10", "9=14", "1=5", "9=8", "0=7", "9=7", "3=13", "1=0", "16=7", "12=6", "12=7", "9=2", "1=10", "9=14", "16=6", "13=15"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
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
    int num = 17;
    vector<string> facts = {"5=8", "14=15", "16=9", "12=15", "1=6", "12=2", "0=15", "6=6", "1=13", "0=2", "12=14", "1=15", "14=7", "6=14", "16=12", "8=13", "13=8", "10=13", "6=13", "11=8", "14=12", "12=3", "4=5", "10=4", "5=10", "16=13", "16=7", "16=9", "9=1", "5=15", "16=12", "5=9", "10=15", "11=10", "14=4", "10=15", "4=0", "16=15", "1=12", "12=7", "10=9", "14=13", "7=8", "5=7", "10=6", "4=1", "3=11", "7=0", "1=8", "10=12"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int num = 17;
    vector<string> facts = {"7=12", "2=7", "4=8", "8=11", "8=12", "8=10", "10=12", "10=4", "10=2", "16=10", "2=1", "16=15", "10=11", "8=5", "7=7", "5=13", "6=6", "13=2", "1=7", "12=3", "3=0", "3=2", "10=15", "8=3", "4=2", "8=12", "9=3", "1=5", "14=9", "4=2", "2=4", "16=7", "7=4", "13=11", "5=4", "14=13", "3=15", "2=2", "15=4", "0=4", "11=6", "0=4", "13=7", "12=7", "16=2", "4=7", "0=6", "13=12", "6=10", "1=6"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int num = 17;
    vector<string> facts = {"12=7", "0=14", "15=1", "8=11", "16=7", "7=12", "14=6", "7=5", "10=13", "7=12", "10=5", "15=0", "0=8", "2=13", "7=12", "11=3", "3=1", "8=15", "6=13", "7=6", "6=12", "1=6", "4=6", "11=3", "11=0", "13=12", "10=2", "7=1", "11=7", "6=7", "16=13", "2=5", "11=8", "0=10", "16=16", "9=0", "9=5", "5=3", "8=0", "12=9", "14=4", "16=8", "6=7", "15=5", "14=5", "8=2", "6=1", "8=12", "11=0", "11=0"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int num = 17;
    vector<string> facts = {"16=14", "6=10", "4=5", "7=15", "10=4", "1=11", "13=2", "3=12", "0=0", "5=10", "0=13", "9=9", "10=11", "3=4", "16=2", "13=4", "13=15", "4=10", "10=6", "12=14", "5=7", "8=1", "7=4", "7=16", "5=6", "3=14", "1=12", "12=13", "5=16", "7=9", "5=3", "15=5", "0=10", "10=6", "3=2", "9=3", "9=8", "13=7", "6=3", "3=0", "6=16", "5=2", "16=15", "9=6", "11=14", "12=14", "9=7", "12=4", "6=16", "2=1"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int num = 17;
    vector<string> facts = {"12=9", "9=3", "5=14", "1=6", "14=11", "5=11", "1=7", "12=2", "11=1", "14=2", "7=9", "11=6", "5=10", "5=5", "15=15", "5=9", "5=11", "16=2", "1=1", "4=15", "4=9", "16=10", "1=7", "14=12", "15=8", "1=9", "3=12", "0=6", "4=6", "9=13", "10=3", "12=8", "0=7", "13=16", "11=1", "9=1", "16=15", "6=13", "15=9", "0=10", "3=4", "8=5", "9=11", "1=5", "2=5", "13=10", "5=6", "10=4", "6=2", "7=7"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int num = 17;
    vector<string> facts = {"3=4", "10=10", "9=11", "7=13", "8=7", "8=16", "0=5", "15=1", "3=7", "1=5", "15=2", "13=11", "6=2", "10=3", "6=9", "5=14", "12=8", "8=3", "7=3", "3=9", "14=3", "15=4", "13=7", "12=8", "11=4", "0=13", "2=14", "0=16", "8=14", "5=15", "14=16", "16=4", "9=11", "4=8", "2=12", "13=5", "10=2", "2=3", "3=7", "11=6", "14=12", "15=7", "10=11", "4=4", "11=4", "15=7", "10=15", "4=11", "6=14", "8=0"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int num = 17;
    vector<string> facts = {"7=2", "4=15", "14=8", "3=11", "11=16", "12=7", "15=13", "13=6", "2=12", "14=16", "8=12", "10=13", "5=5", "1=3", "15=14", "7=10", "14=12", "2=0", "13=16", "6=6", "7=6", "4=15", "10=10", "9=10", "14=2", "0=3", "14=5", "14=10", "7=2", "16=3", "15=7", "0=14", "5=0", "0=5", "0=12", "3=15", "2=7", "7=10", "14=13", "7=12", "6=11", "3=2", "4=8", "13=3", "6=1", "0=3", "0=10", "3=1", "6=8", "5=14"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int num = 17;
    vector<string> facts = {"0=7", "5=12", "13=0", "12=4", "5=14", "7=14", "10=1", "0=11", "9=13", "8=15", "14=4", "7=14", "7=8", "15=1", "5=3", "3=15", "11=13", "9=8", "10=8", "2=16", "6=0", "4=10", "11=3", "6=15", "10=16", "12=6", "14=12", "14=11", "3=10", "12=0", "11=1", "4=13", "4=2", "2=15", "11=10", "14=1", "8=3", "3=16", "12=0", "6=14", "5=3", "8=8", "2=12", "2=15", "1=11", "3=2", "0=12", "14=3", "8=7", "15=3"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int num = 17;
    vector<string> facts = {"0=10", "2=16", "8=1", "11=10", "12=0", "5=3", "14=13", "11=4", "0=8", "7=15", "15=7", "2=7", "16=6", "16=12", "4=7", "10=12", "16=6", "12=13", "6=15", "5=14", "12=14", "7=4", "3=11", "11=2", "3=2", "7=3", "12=10", "8=0", "6=6", "6=3", "14=15", "5=16", "12=5", "11=6", "6=13", "10=0", "1=4", "6=10", "4=13", "14=8", "13=15", "16=7", "8=6", "0=1", "15=7", "15=4", "2=11", "2=5", "1=14", "9=11"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int num = 17;
    vector<string> facts = {"1=1", "14=15", "3=2", "5=5", "6=3", "9=5", "6=8", "10=1", "12=16", "14=12", "14=8", "1=0", "10=3", "3=15", "13=11", "16=4", "14=6", "7=2", "6=1", "0=3", "16=9", "1=5", "13=16", "12=14", "15=8", "7=9", "16=13", "14=15", "1=13", "16=13", "6=2", "2=14", "13=1", "12=8", "16=12", "8=8", "16=2", "3=16", "0=8", "0=8", "10=2", "8=14", "12=0", "13=1", "12=5", "13=1", "4=12", "10=12", "7=3", "7=11"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int num = 17;
    vector<string> facts = {"10=5", "0=13", "3=2", "1=10", "10=11", "5=15", "6=9", "16=2", "8=0", "8=7", "13=2", "14=14", "13=9", "15=0", "5=3"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int num = 17;
    vector<string> facts = {"3=0", "12=8", "5=12", "14=0", "4=7", "9=0", "11=12", "8=15", "2=15", "7=1", "5=11", "8=12", "12=13", "13=6", "15=14"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int num = 17;
    vector<string> facts = {"12=2", "2=1", "5=12", "13=10", "11=15", "3=11", "5=10", "11=16", "9=4", "4=13", "4=12", "6=3", "14=11", "6=5", "1=4"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int num = 17;
    vector<string> facts = {"4=16", "4=6", "16=4", "7=0", "5=1", "15=9", "11=13", "7=8", "0=3", "15=1", "10=16", "13=13", "10=2", "4=6", "1=8"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 541;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int num = 17;
    vector<string> facts = {"8=5", "15=10", "12=14", "0=0", "12=13", "8=7", "9=5", "8=14", "15=1", "11=13", "11=0", "9=1", "7=0", "3=7", "4=8"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int num = 17;
    vector<string> facts = {"9=7", "1=4", "14=6", "3=7", "15=8", "3=15", "7=2", "14=14", "1=12", "6=13", "3=0", "5=8", "1=6", "2=2", "13=5"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int num = 17;
    vector<string> facts = {"8=15", "1=12", "7=14", "15=7", "11=11", "11=9", "12=13", "2=0", "5=8", "16=6", "7=14", "12=11", "2=14", "7=7", "16=4"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 541;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int num = 17;
    vector<string> facts = {"16=12", "15=4", "13=2", "0=15", "16=4", "9=14", "15=14", "8=5", "4=0", "6=13", "11=14", "5=5", "3=12", "5=14", "16=15"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 541;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int num = 17;
    vector<string> facts = {"9=12", "15=1", "1=6", "15=0", "3=7", "13=8", "15=4", "10=8", "15=1", "8=2", "9=7", "10=15", "10=9", "10=4", "13=13"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 541;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int num = 17;
    vector<string> facts = {"5=5", "6=13", "6=7", "2=9", "12=16", "15=6", "16=1", "9=8", "8=2", "6=15", "2=9", "12=1", "13=8", "8=12", "12=12"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 545835;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int num = 17;
    vector<string> facts = {"16=8", "16=9", "6=12", "13=10", "8=7", "5=10", "1=16", "7=7", "12=8", "8=8", "0=15", "16=15", "13=0", "1=0", "16=8"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 4683;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int num = 17;
    vector<string> facts = {"14=10", "2=9", "10=6", "2=8", "13=15", "4=12", "16=8", "2=16", "7=5", "13=5", "11=14", "12=16", "0=3", "3=3", "5=0"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int num = 17;
    vector<string> facts = {"12=11", "0=12", "6=5", "5=15", "13=2", "14=13", "9=9", "10=13", "10=10", "15=5", "4=6", "1=1", "9=8", "8=12", "12=11"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 47293;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int num = 17;
    vector<string> facts = {"1=6", "12=10", "7=11", "15=4", "9=14", "8=13", "4=15", "2=11", "6=6", "2=7", "14=7", "0=1", "3=11", "1=10", "11=15"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 541;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int num = 17;
    vector<string> facts = {"14=0", "6=2", "7=12", "16=13", "3=10", "9=15", "5=14", "4=8", "11=7", "14=4", "14=10", "3=16", "13=7", "5=2", "6=5"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int num = 17;
    vector<string> facts = {"1=0", "3=4", "0=2", "2=13", "1=9", "13=4", "2=15", "13=5", "11=14", "10=9", "15=15", "11=3", "15=7", "3=3", "7=12"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int num = 17;
    vector<string> facts = {"15=0", "8=14", "11=13", "11=15", "10=4", "0=11", "3=11", "9=13", "8=7", "2=0", "12=3", "11=6", "2=1", "13=4", "5=16"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int num = 17;
    vector<string> facts = {"4=1", "0=6", "5=5", "4=12", "8=4", "16=5", "1=10", "14=12", "8=11", "0=11", "11=1", "16=11", "13=1", "8=13", "8=15"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 541;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int num = 17;
    vector<string> facts = {"6=12", "8=12", "3=3", "15=0", "8=10", "3=9", "12=14", "5=4", "12=13", "13=15", "3=13", "4=1", "4=13", "9=6", "12=12"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 541;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int num = 17;
    vector<string> facts = {"0=7", "16=8", "4=2", "5=12", "11=6", "0=0", "15=6", "4=0", "7=16", "15=14", "12=13", "6=5", "13=1", "12=2", "5=16"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int num = 17;
    vector<string> facts = {"0=11", "12=10", "1=10", "2=8", "2=6", "15=7", "6=10", "9=2", "4=7", "13=12", "6=12", "3=3", "4=1", "4=5", "4=16"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int num = 17;
    vector<string> facts = {"11=12", "14=10", "10=6", "15=11", "15=10", "0=4", "6=12", "0=11", "10=13", "11=7", "15=11", "4=4", "13=9", "14=4", "4=13"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 47293;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int num = 17;
    vector<string> facts = {"0=13", "4=15", "9=6", "14=7", "1=1", "0=0", "5=5", "9=8", "16=5", "14=5", "15=14", "0=13", "4=16", "2=5", "2=6"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 47293;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int num = 17;
    vector<string> facts = {"10=5", "9=16", "15=6", "14=1", "8=14", "6=16", "0=4", "4=9", "11=15", "14=12", "3=0", "0=8", "0=16", "3=15", "13=3"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int num = 17;
    vector<string> facts = {"8=14", "5=1", "16=14", "10=0", "1=12", "8=12", "7=16", "8=13", "13=10", "11=16", "5=13", "10=6", "8=12", "7=1", "15=16"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 541;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int num = 17;
    vector<string> facts = {"2=3", "0=1", "0=2"};
    PossibleOrders* pObj = new PossibleOrders();
    clock_t start = clock();
    long result = pObj->howMany(num, facts);
    clock_t end = clock();
    delete pObj;
    long expected = 10641342970443;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=287568&rd=4575&pm=1643
********************************************************************************
#include <vector> 
#include <sstream> 
#include <algorithm> 
#include <cctype> 
#include <cmath> 
#include <cstdlib> 
#include <queue> 
#include <set> 
#include <map> 
using namespace std; 
typedef long long ll; 
typedef vector<int> vi; typedef vector<vi> vvi; 
typedef vector<string> vs; typedef vector<vs> vvs; 
typedef istringstream iss; typedef ostringstream oss; 
#define pq priority_queue 
#define let(a,b) typeof(b) a(b) 
#define all(a) a.begin(),a.end() 
#define forall(a,b) for (let(a,b.begin());a!=b.end();a++) 
#define forrall(a,b) for (let(a,b.rbegin());a!=b.rend();a++) 
#define contains(a,b) (find(all(a),b)!=a.end()) 
template<typename T> string str(const T &t){oss s;s<<t;return s.str();} 
 
int parent[60]; 
void clear() 
{ 
    memset(parent,0xff,sizeof(parent)); 
} 
int find(int a) 
{ 
    int p,t; 
    for (p=a;parent[p]>=0;p=parent[p]); 
    while (a!=p) 
    { 
        t=parent[a]; 
        parent[a]=p; 
        a=t; 
    } 
    return p; 
} 
int unionset(int a,int b) 
{ 
    int t; 
    a=find(a); 
    b=find(b); 
    if (a==b) return 0; 
    t=parent[a]+parent[b]; 
    if (parent[a]>parent[b]) 
    { 
        parent[a]=b; 
        parent[b]=t; 
    } 
    else 
    { 
        parent[b]=a; 
        parent[a]=t; 
    } 
    return 1; 
} 
 
class PossibleOrders{ 
public: 
long long howMany(int num, vector <string> facts) 
{ 
ll ans,data[20][20]; 
clear(); 
for (int i=0;i<facts.size();i++) 
{ 
    ll a,b; 
    char c; 
    iss sin(facts[i]); 
    sin>>a>>c>>b; 
    if (unionset(a,b)) num--; 
} 
memset(data,0,sizeof(data)); 
data[1][1]=1; 
for (int i=2;i<=num;i++) 
    for (int j=1;j<=i;j++) 
    { 
        data[i][j]=data[i-1][j]*j+data[i-1][j-1]*j; 
    } 
ans=0; 
for (int j=0;j<=num;j++) 
    ans+=data[num][j]; 
return ans; 
} 
}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/