/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11787
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

class EllysNumbers {
public:
    long getSubsets(long n, vector<string> special);
};

long EllysNumbers::getSubsets(long n, vector<string> special) {
    long ret;
    return ret;
}


int test0() {
    long n = 12;
    vector<string> special = {"4 2 5 6 3"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long n = 42;
    vector<string> special = {"1 2 3 4 5 6 7 13 14 21 42"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long n = 1337;
    vector<string> special = {"1 13 42 666 2674"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long n = 1073741824;
    vector<string> special = {"1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 1", "6384 32768 65536 131072 262144 524288 1048576 2097", "152 4194304 8388608 16777216 33554432 67108864 134", "217728 268435456 536870912"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long n = 7420738134810;
    vector<string> special = {"435 625199055 4199 33263 17 222870 284870433 72093", "2379 7 11 31 247110827 23 1771 81809 851968487 13 ", "476379795 1001 5 435274114 38264554 7429 239906525", " 3 227183706 887045414 606786670 3795 797605175 29", " 30 747186719 19 2 562347843 74 2294 588002688 743", "6429 703 591740547 36657492 37 444178205 1002001 2", "17626404"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 110;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long n = 999999866000004473;
    vector<string> special = {"1 42 999999883 999999937 999999929"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long n = 999999776000012519;
    vector<string> special = {"999999893 999999892"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long n = 999999741000016698;
    vector<string> special = {"2 499999931 3 333333293"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
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
    long n = 999999741000016698;
    vector<string> special = {"999999862 999999879"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
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
    long n = 499999924000000966;
    vector<string> special = {"2 499999931 499999993 999999862 999999986"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long n = 499999924000000966;
    vector<string> special = {"999999862 499999993"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long n = 999999999999999862;
    vector<string> special = {"2 7 22 67 202 607 1822 5467 16402 49207 147622 442", "867 1328602 3985807 11957422 35872267 107616802 32", "2850407 968551222 3 10 31 94 283 850 2551 7654 229", "63 68890 206671 620014 1860043 5580130 16740391 50", "221174 150663523 451990570 5 16 49 148 445 1336 40", "09 12028 36085 108256 324769 974308 2922925"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long n = 999999999999999947;
    vector<string> special = {"2 7 22 67 202 607 1822 5467 16402 49207 147622 442", "867 1328602 3985807 11957422 35872267 107616802 32", "2850407 968551222 3 10 31 94 283 850 2551 7654 229", "63 68890 206671 620014 1860043 5580130 16740391 50", "221174 150663523 451990570 5 16 49 148 445 1336 40", "09 12028 36085 108256 324769 974308 2922925"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long n = 992458797496520461;
    vector<string> special = {"997738373 31607 31541 994077697 996790343 31567 31", "547 31601 996980561 995843993 998054383 997170059 ", "998812807 996664891 997548767 995401411 994582333 ", "994960849 997106029 996979601 996916747 995086241 ", "995087021 31573 995843573 996727141 995654747 3158", "3 31517 31531 993321289 996157819 995213209 996348", "901 996159403 993762527 997927811 995528263 996854", "329 995844149 994203961 999002449 995339077 995907", "139 996411131 997485889 31543 995023927 994834681 ", "994897139"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long n = 989444377398265669;
    vector<string> special = {"995087021 31607 31601 31573 995843993 996727141 99", "6159403 31541 995968717 31583 994077697 994708457 ", "995528263 998054383 31567 996916747 996222569 9941", "40731 31543 996157819 996600317 31531 994582333 31", "517 31547 996790343 996980561 995401411 995086241 ", "994519271 995023927 993762527 995654747 996033431 ", "996348901 997106029 995717881 998812807 997927811 ", "997548767 996475489 994203961 995843573 994834681 ", "995907139 996411131 998243881 996854329 996979601 ", "994897763"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long n = 992270983440704239;
    vector<string> special = {"994519271 996159403 995654747 997927811 31547 3157", "3 31543 996916387 31541 995528263 996411131 995086", "241 996664891 31567 995717881 998812807 31583 3160", "7 994834681 31517 996980561 997738373 996790343 31", "531 993762527 996348901 995907139 997548767 994203", "961 31601 996979601 996600317 995023927 996157819 ", "997738169 999002449 996727141 996916747 996222569 ", "995843993 997170059 998623201 994582333 997106029 ", "995087021 994077697 994897763 997485889 994140731 ", "995968717"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long n = 993025012621041031;
    vector<string> special = {"995401411 998054383 996411131 31541 996348901 9958", "44149 996790343 31607 31573 31543 995528263 31547 ", "993762527 995339077 996157819 31567 996664891 9947", "08457 31517 31583 31601 997738373 997548767 995843", "993 996159403 994203961 998243881 994140731 995843", "573 995086241 996033431 31531 997106029 997738169 ", "996222569 998812807 996980561 997170059 995654747 ", "995023927 996727141 994897763 996916747 996916387 ", "995968717 994266799 996600317 994582333 996854329 ", "996979601"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long n = 700000001;
    vector<string> special = {"700000001"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long n = 699999953;
    vector<string> special = {"700000001"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long n = 1000000000000000000;
    vector<string> special = {"1000000000 999999999 999999998 999999997 999999996", " 999999995 999999994 999999993 999999992 999999991", " 999999990 999999989 999999988 999999987 999999986", " 999999985 999999984 999999983 999999982 999999981", " 999999980 999999979 999999978 999999977 999999976", " 999999975 999999974 999999973 999999972 999999971", " 999999970 999999969 999999968 999999967 999999966", " 999999965 999999964 999999963 999999962 999999961", " 999999960 999999959 999999958 999999957 999999956", " 999999955 999999954 999999953 999999952 999999951"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long n = 999999999999999989;
    vector<string> special = {"999999937 999999929 999999893 999999883 999999797 ", "999999761 999999757 999999751 999999739 999999733 ", "999999677 999999667 999999613 999999607 999999599 ", "999999587 999999541 999999527 999999503 999999491 ", "999999487 999999433 999999391 999999353 999999337 ", "999999323 999999229 999999223 999999197 999999193 ", "999999191 999999181 999999163 999999151 999999137 ", "999999131 999999113 999999107 999999103 999999067 ", "999999059 999999043 999999029 999999017 999999001 ", "999998981 999998971 999998959 999998957 999998929"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long n = 999999078000210217;
    vector<string> special = {"999999937 999999929 999999893 999999883 999999797 ", "999999761 999999757 999999751 999999739 999999733 ", "999999677 999999667 999999613 999999607 999999599 ", "999999587 999999541 999999527 999999503 999999491 ", "999999487 999999433 999999391 999999353 999999337 ", "999999323 999999229 999999223 999999197 999999193 ", "999999191 999999181 999999163 999999151 999999137 ", "999999131 999999113 999999107 999999103 999999067 ", "999999059 999999043 999999029 999999017 999999001 ", "999998981 999998971 999998959 999998957 999998929"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
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
    long n = 999998778000206857;
    vector<string> special = {"999999937 999999929 999999893 999999883 999999797 ", "999999761 999999757 999999751 999999739 999999733 ", "999999677 999999667 999999613 999999607 999999599 ", "999999587 999999541 999999527 999999503 999999491 ", "999999487 999999433 999999391 999999353 999999337 ", "999999323 999999229 999999223 999999197 999999193 ", "999999191 999999181 999999163 999999151 999999137 ", "999999131 999999113 999999107 999999103 999999067 ", "999999059 999999043 999999029 999999017 999999001 ", "999998981 999998971 999998959 999998957 999998929"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
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
    long n = 999998770000328941;
    vector<string> special = {"999999937 999999929 999999893 999999883 999999797 ", "999999761 999999757 999999751 999999739 999999733 ", "999999677 999999667 999999613 999999607 999999599 ", "999999587 999999541 999999527 999999503 999999491 ", "999999487 999999433 999999391 999999353 999999337 ", "999999323 999999229 999999223 999999197 999999193 ", "999999191 999999181 999999163 999999151 999999137 ", "999999131 999999113 999999107 999999103 999999067 ", "999999059 999999043 999999029 999999017 999999001 ", "999998981 999998971 999998959 999998957 999998929"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
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
    long n = 999999174000170569;
    vector<string> special = {"999999937 999999929 999999893 999999883 999999797 ", "999999761 999999757 999999751 999999739 999999733 ", "999999677 999999667 999999613 999999607 999999599 ", "999999587 999999541 999999527 999999503 999999491 ", "999999487 999999433 999999391 999999353 999999337 ", "999999323 999999229 999999223 999999197 999999193 ", "999999191 999999181 999999163 999999151 999999137 ", "999999131 999999113 999999107 999999103 999999067 ", "999999059 999999043 999999029 999999017 999999001 ", "999998981 999998971 999998959 999998957 999998929"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long n = 999999874000003969;
    vector<string> special = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", " 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 3", "7 38 39 999999936 999999937 999999938"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long n = 639999998400000001;
    vector<string> special = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", " 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 3", "7 38 39 999999936 999999937 999999938"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long n = 27029710891331;
    vector<string> special = {"900660121"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long n = 809999782200014641;
    vector<string> special = {"899340121 900660121"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
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
    long n = 12;
    vector<string> special = {"6 5 4 3 2 1"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long n = 614889782588491410;
    vector<string> special = {"2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 6 10 14 2", "2 26 34 38 46 58 62 74 82 86 94 15 21 33 39 51 57 ", "69 87 93 111 123 129 141 35 55 65 85 95 115 145 15", "5 185 205 215 235 77 91 119 133 161 203 217 259 28", "7 301 329 143 187 209 253 319 341 407 451 473 517 ", "221 247 299 377 403 481 533 559 611 323 391 493 52", "7 629 697 731 799 437 551 589 703 779 817 893 667 ", "713 851 943 989 1081 899 1073 1189 1247 1363 1147 ", "1271 1333 1457 1517 1591 1739 1763 1927 2021 30 42", " 66 78 102 114 138 174 186 222 246 258 282 70 110 ", "130 170 190 230 290 310 370 410 430 470 154 182 23", "8 266 322 406 434 518 574 602 658 286 374 418 506 ", "638 682 814 902 946 1034 442 494 598 754 806 962 1", "066 1118 1222 646 782 986 1054 1258 1394 1462 1598", " 874 1102 1178 1406 1558 1634 1786 1334 1426 1702 ", "1886 1978 2162 1798 2146 2378 2494 2726 2294 2542 ", "2666 2914 3034 3182 3478 3526 3854 4042 105 165 19", "5 255 285 345 435 465 555 615 645 705 231 273 357 ", "399 483 609 651 777 861 903 987 429 561 627 759 95", "7 1023 1221 1353 1419 1551 663 741 897 1131 1209 1", "443 1599 1677 1833 969 1173 1479 1581 1887 2091 21", "93 2397 1311 1653 1767 2109 2337 2451 2679 2001 21", "39 2553 2829 2967 3243 2697 3219 3567 3741 4089 34", "41 3813 3999 4371 4551 4773 5217 5289 5781 6063 38", "5 455 595 665 805 1015 1085 1295 1435 1505 1645 71", "5 935 1045 1265 1595 1705 2035 2255 2365 2585 1105", " 1235 1495 1885 2015 2405 2665 2795 3055 1615 1955", " 2465 2635 3145 3485 3655 3995 2185 2755 2945 3515", " 3895 4085 4465 3335 3565 4255 4715 4945 5405 4495", " 5365 5945 6235 6815 5735 6355 6665 7285 7585 7955", " 8695 8815 9635 10105 1001 1309 1463 1771 2233 238", "7 2849 3157 3311 3619 1547 1729 2093 2639 2821 336", "7 3731 3913 4277 2261 2737 3451 3689 4403 4879 511", "7 5593 3059 3857 4123 4921 5453 5719 6251 4669 499", "1 5957 6601 6923 7567 6293 7511 8323 8729 9541 802", "9 8897 9331 10199 10619 11137 12173 12341 13489 14", "147 2431 2717 3289 4147 4433 5291 5863 6149 6721 3", "553 4301 5423 5797 6919 7667 8041 8789 4807 6061 6", "479 7733 8569 8987 9823 7337 7843 9361 10373 10879", " 11891 9889 11803 13079 13717 14993 12617 13981 14", "663 16027 16687 17501 19129 19393 21197 22231 4199", " 5083 6409 6851 8177 9061 9503 10387 5681 7163 765", "7 9139 10127 10621 11609 8671 9269 11063 12259 128", "57 14053 11687 13949 15457 16211 17719 14911 16523", " 17329 18941 19721 20683 22607 22919 25051 26273 7", "429 9367 10013 11951 13243 13889 15181 11339 12121"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 223454596;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long n = 255;
    vector<string> special = {"1 17 3 5 15 85 51"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long n = 89136273185960;
    vector<string> special = {"41 637 5 6877 392 4961 2107 1 5929 14104 43 1573 6", "05 49 64009 2645 3224 215 932627 131192 31 533 121", " 205 1333 25921 86387 104 2009 559 22747 5203 2131", "87 65 328 7865 26015 13 245 8 27391 281957 1763 24", "8 21160 1271 47432 40 968 16399 403 65317 295711 1", "83799 4232 10168 1519 173512 26117"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 4472;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long n = 46493882553293175;
    vector<string> special = {"7225 86387 10693 539 289 3675 61009 49 1 6253 8281", " 169 407 43 268879 3 2009 48841 15523 37 275 1859 ", "760627 136697 507 25 1813 13357 297947 1025 41 424", "83 2107 1353 14801 925 33 296225 1225 183027 6929 ", "2775 129 9025 68783 17689 11849 2100163 104329 75 ", "123 1591 654493 7267 5439 170753 3179 146523 1075 ", "3971 354025 23177 17631601 361"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 9100;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long n = 377815881903460;
    vector<string> special = {"17 116 7 8729 4 5239 301 29 731 77 85 31 2873 1 37", "3321 676 9295 1015 169 6665 753269 220 7267 225277", " 15463 43 28 341 2209 1183 210743 7436 55 473 2429", "9 3655 899 527 20 493 68479 64061 119 1859 155 211", "99 2613247 845 11045 37553 5915 4988 319 68 108263", "09 35 5 11 2635 3380 94987 145 203 61852 1333 5797", " 1247 8836 83317 31603 9889 1972 448427 38657 3689", " 385 140 187 44 20111 5332"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 25594;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long n = 64716603;
    vector<string> special = {"493 47 2303 29 799 1 17 49 147 57 87 3 6909 1363 8", "93 19 51 141 323 833 1421 931"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 138;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long n = 17601233;
    vector<string> special = {"13 23 1369 58867 1353941 559 1 299 17797 31487 43 ", "989 12857 409331 765271 17601233"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long n = 6409;
    vector<string> special = {"29 17 13 1 493 221 377 6409"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long n = 283301969972487466;
    vector<string> special = {"7 4602578 46 13294 409331 43706 242 2301289 38663 ", "2023 422702579 135401 332734081 502619 841 1 14 23", "40503 16109023 2738 847 26 5887 3400663 65031166 4", "85809 11767 1322893 60816899 454597 30426539 16564", "9 1151329 3182179 8059303 1682 39130889 31487 1529", "71 161 5566"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 80;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long n = 46519915;
    vector<string> special = {"851 841 299 481 1 185 65 37 251459 4205 55315 1093", "3 5 31117 13 404521 23 19343 1495 115 155585 96715", " 9303983 11063 2022605 715691 2405 54665 4255 1257", "295 3578455"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 102;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long n = 19852283;
    vector<string> special = {"43 41971 817 1 11 209 19 94987 2209 1804753 8987 4", "73 24299 461681 1044857 19852283"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long n = 8265888763;
    vector<string> special = {"1517 407 24240143 1147 11 317053 175769 7206529 58", "9 5448839 703 11758021 6479 37 26071 209 1271 1832", "7913 31 379291 12617 34481 10610897 342287 47027 3", "41 841 223402399 24149 451 19 893513 1275797 65034", "53 286781 964627 1 495349 9251 28823 8569 41 10689", "11 655139 13981 7733 20309309 31117 39549707 21793", " 14033767 201607043 779 9828643 239723 16687 15979", " 265639 591223 517297 751444433 435046777 26664157", "3"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 404;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long n = 3803997571595;
    vector<string> special = {"86411 2399567 1 11997835 2804735 65 317057 4581473", "65 361 33235 5 6781385 23465 810568415 539695 1079", "39 91629473 41515 13 24389 18785 572287885 1585285", " 299 104329 7048421 44022145 432055 1356277 3757 4", "693 23 162113683 521645 560947 6647 7292311 1495 1", "15 1445 31194371 8804429 155971855 8303 114457577 ", "202501867 1805 289 36461555 121945 35242105"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 360;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long n = 5642070103347054;
    vector<string> special = {"443713398 205239 39146 382304787 5996127 6 1479044", "66 199433 763347 895973 13949 377 1394146 74 72918", "418 2262 222 109377627 117438 1702851 160863 28365", "509 39 144222 58 58719 38146719 1131 410478 850965", "27 13754 68413 5336214 12715573 7650231 221856699 ", "697073 99453003 136826 25431146 51966434 567617 20", "631 24037 598299 13 7379021 481 2146 48074 1983977", " 198906006 36190477 470476201 5868726 73952233 773", "75103 1 108571431 1135234 11903862 66302002 364592", "09 1526694 508898 961379029 11094 41262 5375838 77", "949651 947939434 41847 1778738 3997418 1998709 2 3", "219 3698 68921 15341 1587 889369 19573 25791701 56", "731018 1849 51583402 2687919 76293438 5547 4739697", "17 764609574 1791946 1196598 6877 754 11992254 368", "751617 218755254 398866 978121 30682 92046 2886 27", "898 72111 206763 25983217 962 22137063 155899302 7", "8 1956242 14758042 174 940952402 3405702 2550077 1", "37842 5951931 254449 2091219 29 87 217142862 32172", "6 46023 107242 72380954 5100154 127434929 37 1073 ", "111 44274126 2934363 26 6438 3174 4182438 73750323", "4 33151001 154750206 529 2668107 3967954 53621 144", "3 1058 3 413526 83694 170193054 15300462 254869858"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 6474;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long n = 95692740417433250;
    vector<string> special = {"97355066 252875 48841 961 505750 2330038 341887 65", "7106814 1136863 34716125 2273726 101306 2023 13294", " 120125 20125 196888211 485875 243012875 2366 3888", "206 42250 1922 93058 36125 40602250 971750 3401125", " 21125 15726802 12775534 6802250 147875 7863401 14", "638717 830875 50653 555458 42735875 161 48677533 1", "54721 59922499 6105125 6331625 840875 8155133 1165", "019 204942038 12210250 1183 466925875 5816125 3735", "407 46529 40250 289 169 798470875 3887 324818 46 1", "681750 14 140417875 44714369 125 2246686 336690491", " 1 683774 2 982925125 7 1661750 46936201 7774 2210", "3 280835750 85471750 1123343 16310266 20301125 340", "742731 5750 27209 240250 142107875 2875 277729 291", "254750 23 578 5525750 7470814 93872402 19340125 63", "87767 295750 875 119844998 338 17120714 44321375 1", "1632250 322 97682 44206 102471019 72250 1944103 27", "62875 250 12663250 29277434 284215750 309442 16240", "9 1750 54418 88642750 89428738 69432250 354571 386", "80250 709142 8560357 6727 13454 145627375 32855340", "7 393776422 4046 6647 486025750 933851750 26147849", " 681485462 52295698 673380982"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 6122;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long n = 246485030;
    vector<string> special = {"5732210 2365 361415 155 10 22 682 55 72283 13330 4", "3 14663 310 2 144566 1681 29326 1705 473 430 79511", "3 86 62 1146442 49297006 573221 73315 52111 31 260", "555 123242515 946 110 1333 1590226 2240773 2464850", "3 521110 5 104222 3362 8405 341 11203865 4730 1466", "30 3975565 11 6665 36982 4481546 2666 3410 92455 1", "8491 215 2866105 16810 7951130 722830 1 184910 224", "07730 246485030"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 406;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long n = 10931410980;
    vector<string> special = {"68265 310023 15867 2935395 1441188 1763 1641353 38", "9795 6196945 81585 3109932 24787780 286380 6364 70", "3 6565412 242920244 587079 1550115 28044 777483 35", "08155 7061635 431935 54612 42140 37 133988 57276 4", "41 32827060 5924884 18081 29624420 63468 140220 77", "40 30229 14060 311836 1764 800660 44618004 688940 ", "36260 2107 29412 297332 3515 41 223090020 6327 220", "5 259407 3344985 45 126540 4085 76 13653 31635 557", "72505 115292 10045 326155 34447 31820 3268 326340 ", "33516 66654945 190855 14319 41895 36 49 371665 120", "5892 60730061 3196319 15580 38171 18620 779 19 200", "165 860 7955 2812 4957556 7252 5649308 8815 167580", " 86387 1727740 546570549 33497 172 3887415 9065 11", "154501 10535 2348316 763420 152684 8206765 1412327", " 3724 345548 1591 604580 40033 171 361620 931 1559", "180 196 164 5 380 1088244 35055 160132 669940 740 ", "5188140 18963 1360305 1 9 28823 35260 273060 13046", "20 74333 65231 7380 77959 28246540 1240092 205 180", "1485 1845 72324 1297035 13330989 1481221 12785276 ", "701631 4655 3895 3116 817 36765 90405 40180 185 18", "0 6029460 6068 8379 20 14772177 215 8428 1239389 1", "935 575337420 260924 167485 30340 14032620 151145 ", "4 144115 2675988 1517 15549660 79335 120916 75852 ", "43 7585 7052 1548 1486660 6870780 63554715 137788 ", "576460 1037628 301473 7011 13379940 1476 148 1813 ", "980 71595 387 50843772 379260 272061 73860885 1470", "60 25308 6660 95 369 7353 63926380 668997 28766871", " 1374156 6200460 1507365 820 1332 295443540 254218", "860 1717695 16340 333 11741580 8036 12710943 65268", " 7205940 3420 855 16317 15981595 360297 303650305 ", "245 317340 143834355 94815 53323956 7406105 343539", " 2806524 1665 172235 2009 684 8820 115067484 59088", "708 266619780 5441220"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 8272;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long n = 273232982526287784;
    vector<string> special = {"841 194465271 6627 101761 579623928 4285736 314331", "864 616616 142296 12584 11687529 91030681 24 10477", "7288 814088 1407133 83394168 87464 4221399 104 170", "263093 324723 1911 123627 28861041 41209 76962776 ", "1573 32799 1322893 989016 4719 151937877 230888328", " 79507 175630963 2442264 10583144 12857208 9350023", "2 49 44586456 24806184 47432 64821757 200596161 51", "8574056 869250031 229736 14958867 119670936 375193", "533 801867 3968679 72452991 17672 9620347 33771192", " 1849848 11257064 10933 1033591 77077 31749432 310", "0773 13097161 27798056 224790049 3895843 238521 17", "787 526892889 392 865928 471397003 5096 535717 231", "231 24150997 20184 6728 10424271 5929 4986289 3929", "1483 405167672 193207976 636056 262392 31166744 50", "645959 6414936 147 534923096 2209 312 329672 8 674", "370147 125064511 689208 3 305283 37752 1607151 1 3", "9890312 637 108241 53016 728245448 14862152 510789", "279 2904 8268728 66865387 2138312 39 28717 3474757", " 1908168 15288 13 2523 1857769 273092043 86151 968", " 1176 2597784 267289 363 121 5573307"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 5982;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long n = 271481637350;
    vector<string> special = {"717541 134330350 805046 3276350 1150 1702 161 1255", "69675 271502 152306 10879 283843 28294 10980046 52", "3439 35877050 10175 2050 925 658 3079769 499093 37", " 530950 67165175 620494 20746 11891 7175 6125350 4", "12586075 13085975 33006886 10999175 253 851 245014", " 79994 297275 74777 487531 116809 7 879934 7756618", "21 81098 12650 1108025 12173 145222 301 21758 6825", "434 3311 23575 1978 3122273 11415425 75015650 1739", " 47150 2021 22274 2324150 6314 3890425 16269050 11", "150975 189175 101050 24954650 21460999 3709475 832", "37 417175 165550 7158382 14500675 70514711 6695150", " 6622 1869425 95290150 3034 902 21197 88550 16687 ", "1591 29001350 7525 6475 180950 5840450 6923 175 26", "978 20350 6131714 22786775 3811606 5757829 2920225", " 18918581 1034 24346 21238 2350 555775 25565650 56", "7686 12188275 77 6601 999925 518 550 518650 5957 4", "56617 308525 130462 875050 153292850 82 2027450 54", "3950 22550 13202 1111550 4161850 78056825 70441525", " 45573550 40549 47645075 16450 3182 1175 96350 337", "225 22 11137 143945725 26681242 2071525 44275 8722", "75 73186 33374 20963833 148925 975062 86 17938525 ", "3157 75850 402523 512302 517 446039 1771 20563675 ", "1075 14350 311234 594550 42996775 41 69782 1151565", "8 350 573956950 822547 6105925 12760594 12925 1960", "7225 12341 296758 37837162 17501 7756175 378350 23", " 35002 1782475 11825 10619 13340621 47 251139350 1", "40883050 133903 22301950 89479775 608650 275 8050 ", "674450 843110675 310247 54050 71299 450966175 4446", "2 473 44075 86950 1160054 23650 38258 6380297 9981", "86 24078194 271975 157850 48175 493602977 15134 91", "4825 3526 41127350 1517 913234 1046878 65527 74 34", "39742 76646425 3542 12950 142450 10063075 21275 11", "479139 1822942 3738850 12782825 159507425 43475 11", "62075 141029422 15050 24376550 18722 407 2162 5490", "023 170635850 50525 439967 8225 36593 5022787 3619", " 165722 1059850 601954850 650762 50 6244546 156113", "650 11914 6403775 4143050 155617 1850 3279754 2686", "607 274501150 575 154 259325 3854 987205954 4025 1", "927 13489 559958 1925 12807550 5698 1815275 959502", "5 21998350 25850 10373 12039097 131054 115524101 8", "2861 233618 9361 26171950 3579191 20126150 6159538", " 6325 943 353675 956450 82775 49450 300977425 1081", " 7096075 165025 478225 1829650 14147 14192150 6999", "475 319014850 322 3564950 488474 529925 6787550 27", "025 3065857 126270529 178959550 10045574 574 91147", "1 148379 19393 13846 3412717 1763 945929050 228308", "50 989 383801 43 279979 1638175 2216050 969650 102", "2626 1744550 11 137250575 132430067 41927666 3850 ", "92966 1886 3393775 536524975 85317925 2150 2648601", "34 16503443 2817661 76153 1903825 81993850"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 6595;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long n = 15520578885;
    vector<string> special = {"7533 9331 2267433 323919 9124385 1369 1333 7218873", "9 500663835 5 6845 2328669 51563385 10449 6665 243", " 7 212195 1663335 1215 360943695 1701 100132767 47", "915 1085 215 52245 10312677 31 35 52731 71523405 1", " 8505 14304681 63870695 412069 1505 2060345 46655 ", "1485365 332667 1619595 1824877 43 37665 12774139 3", "01 58867 297073 155 11337165 294335 73143 9583 263", "655 217 365715 443445111 42439 11643345"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 400;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long n = 107043046396;
    vector<string> special = {"71188 12427 4 6292 289 161551 67639 765271 172 215", "3437 15028 28491628 43 34969 19547671 646204 5476 ", "8613748 1 7122907 47872561 559 165649 622343293 52", "03 3757 49708 1582564 1503667 92597791 5143333 136", "9 68050252 454597 78190684 1818388 191490244 17012", "563 13 20812 235468 662596 395641 20573332 2211633", "19 270556 6014668 52 884653276 121 58867 17797 306", "1084 370391164 484 1156 139876 2236 1573"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 394;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long n = 81072583964372;
    vector<string> special = {"61478053 386433476 68068 154176113 1008436 848003 ", "193732 65413348 884338147 44387629 10206781 321577", "508 25055756 383135324 47851804 252109 10909444 30", "932 693930412 4285853 63427 35130316 21164 2547953", "2 13657732 901337276 206303636 112986692 605073469", " 18259 920227 54131 32164 247 661779196 3116 29725", "652 323323 21559604 260924 39569761 7727401 148666", "7 703703 1318724 513893 722228 30909604 6068 29598", "8 18636673 93431303 85387379 4921 1571908 35634264", "4 451137596 6263939 139134541 13 5031796 13633279 ", "19393 1708993 25789 1729 13902889 308 186176452 13", "889 145673 86439067 1986127 332519 559967012 29971", " 7667 24783229 435461 310403 42484 6649159 8877484", " 748619 36244 208470691 10204859 15470884 4917437 ", "1741844 45939644 10951556 78884 467236 14389004 43", "3411 251636 57643663 73109036 160433 597215372 345", "756268 775569284 157604"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long n = 264997827240910610;
    vector<string> special = {"81168010 791566090 10105 49833245 117734 198058 38", "71343 49 9710905 271141402 318377378 11374 8746243", "0 28488845 309168115 54652070 451670 245004067 282", "855935 795943445 390936722 5768966 8116801 395035 ", "11982509 1656490 25000415 50000830 35614535 990290", " 413230 349022443 9610 40584005 10406 235003901 54", "65207 4042 254947 64343 98955427 64464841 95166869", " 563815805 8746243 23030 225835 1942181 347319815 ", "197910854 6305614 278455969 29645 99029 4049654 82", "646 557326 4426366 2034010 490008134 10930414 5697", "7690 670810 13690 961 10 5697769 235 19119694 1289", "29682 19933298 11395538 135570701 828245 47799235 ", "334776629 267795143 35418670 215 56870 556911938 4", "606 322324205 59290 698044886 535590286 159188689 ", "2213183 3541867 119825090 3230882 489082 195468361", " 22131830 225526322 20248270 28844830 58867 553349", "8 33973010 113142374 2631218 565711870 123667246 7", "9007 9966649 643430 335405 5 1162810 71229070 2301", "289 116281 395783045 56571187 13156090 190333738 2", "549470 6578045 31528070 361415 28435 644648410 977", "341805 8077205 2024827 94 321715 2 94178 10124135 ", "832338745 16986505 3397301 2738 144566 23012890 13", "15609 10000166 4805 108160583 7122907 158313218 16", "15441 3362 11065915 79156609 61833623 95598470 379", "628635 759257270 468432503 6845 8405 244541 332935", "498 19421810 77855030 494777135 17492486 69463963 ", "509894 1393315 381489647 67081 857131814 9559847 1", "7709335 470007802 38927515 822146842 618336230 540", "802915 206615 26015 86 216321166 158014 605 138927", "926 99666490 43 790070 5687 165649 21070 75925727 ", "45167 47 1681 59912545 235445 14422415 1210 5203 2", "303 1274735 41323 16154410 134162 245 1369 406802 ", "2107 52030 951668690 43731215 82369 581405 1127631", "61 4602578 470 823690 490 1017005 294335 11506445 ", "23965018 278663 5000083 2786630 3884362 588670 936", "865006 166467749 27667490"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 7237;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long n = 4908424760956500;
    vector<string> special = {"133644 31938375 225089500 123445875 141441375 8668", "9875 3441 115586500 2724125 883500 302641500 43649", "1125 565765500 1763 881500 748270500 87172 779 231", "173 47147125 1239389 15928500 758310375 606829125 ", "2061500 324749397 542015516 903 200658164 16881712", "5 28896625 6472844 146004 390755372 21793 16125 79", "5466293 14155127 6165125 703437 32689500 793665577", " 9500 31682868 346759500 795500 211603 75055092 13", "764 457653 6831625 7 86469 37912372 239495228 1098", "6801 2859500 42584500 532 3444 19418532 10722156 5", "5822196 265933500 709156 2275500 88644500 25018364", " 164594500 681625 49364 1333 56272375 265155431 13", "996500 987567 809105500 50164541 1038407 28434279 ", "97125 4665500 87226188 3018625 59873807 65231 8088", "644 220375 6278172 9348 127753500 24265932 2930665", "29 693519 589 129 2640239 65397625 12561375 459085", "2 8578500 28500 303924 46392771 819961625 26450375", " 61857028 7068 43947204 2460500 13955549 164 12980", "0875 7125 102640812 2356 202276375 6068 32375 2866", "5452 97688843 147963 476625 675268500 806842239 18", "5571084 293820883 143464125 1022028 15500 758500 2", "28826500 41 3778625 777 135503879 124 601974492 99", "40439 895795375 432999196 115292 317404500 2689474", "13 2625 14763 517870500 48655833 85996356 661125 3", "93906625 15252 664963051 1148 1999500 1995388 1796", "21421 8675723 188588500 73625 111689125 75981 868 ", "13345500 167466588 55500 166625 188108 1542625 781", "823875 24087 85801684 21130375 150493623 446756500", " 3 37815036 817 10808625 2604 21 345247 924692 108", "249799 8179500 34213604 372 64874444 564324 294500", " 6254591 34702892 17157 41903148 27125 292125 1849", "5375 197284 76275500 31 64351263 1166375 401964 22", "161125 16748500 47821375 228 666500 875 387604119 ", "100491 163959 5453 41866647 84521500 199500 154923", "625 125 5309500 11245188 18204 1392125 568875 2180", "6547 399 87875 937916 29309875 1035741 19068875 12", "3 48668 189625 21450421 25220125 97375 2774076 107", "625 73981500 430125 15375 18511500 66346651 807044", " 330029875 10619 1530284 351718500 232292364 16904", "3 1520875 43234500 573500 4142964 389402625 618450", "0 252770125 846412 1845375 3662267 610204 57 17262", "3500 101308 7268849 113737116 96596 3574052 718485", "684 5878375 990089625 26691 9478093 1500 8172375 8", "553401 25660203 278332292 11335875 102125 41148625", " 57206625 15464257 4176375 191285500 596625 705405", "00 97846500 1830612 8153875 615125 87929625 65436 ", "515375 306375 516805492 1316756 115263177 5125 214", "99089 32615500 7920717 340676 81979500 519203500 4", "625 42465381 1720500 5402148 2028516 531867 161821", "1 24461625 79351125 12 23513500 31857 4588 388500"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 2373;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long n = 162047732418;
    vector<string> special = {"166634 4901 600039 986 22534798 10200663 8649927 1", "5886 522 473823779 242 669618729 20401326 38309156", "6 338 301834 181464426 6422 6257394 2299 16532109 ", "71487 501695766 1215279 466146 94 7018 57798 5746 ", "18 838071 63162 4114 493 34 4598 7924482 133342 16", "074 460694 135031 2 148804162 3496779 342 27871987", " 14247207 5131178 40898 202813182 33064218 5295677", "53 46342 5337189 958862322 83317 1363 39389337 204", "49 1358253 96679 440249 53270129 47 18513 10654025", "8 1740222 1521 46180602 749853 3962241 6267074 699", "3558 191545783 846 695266 18260957 59445243 2907 5", "5743974 150917 417078 2968614 3128697 310436269 17", "86 536877 2726 2178 25233219 2565589 7943 4146246 ", "23171 17 10674378 2873 233073 6605027 39083 28899 ", "37026 108053 2430558 3166046 17299854 1836901 1944", "954 38 261 4959 479431161 777062 7831798 870111 27", "0062 118890486 351747 30362 329846 306 2057 51714 ", "982566 10081357 12267 35243091 109174 2803691 4410", "9 1676142 171 9367 9 3133537 28494414 1133407 153 ", "25857 56403666 58 1484307 121 24534 102366 646 226", "6814 136629 8037 9802 101406591 3509 20691 25897 1", "4382 147048759 11374 3042 119306 5687 273258 59302", "1 294097518 23090301 51183 893 168606 169 1 560738", "2 347633 3915899 7191 3211 19 2073123 4437 1126739", "9 50466438 184041 88218 961103 66671 15181 41382 9", "0732213 1102 70486182 208539 1598 491283 1922206 7", "8166 93119 5814 193358 18734 328697226 28201833 55", "1 36521914 59653 972477 164923 423 29 13210054 120", "0078 74402081 164348613 8753186 51794 84303 8874 7", "8778674 1499706 31581 620872538 799 230347 9476475", "58 2716506 323 54587 703494 250847883 388531 36808", "2 1089 4376593 3673802 1186042 1073754 9918 201627", "14 880498 186238 1583023 32677502 216106 16338751 ", "142974"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 8240;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long n = 193536124348900245;
    vector<string> special = {"430559 1291677 20830729 561 619393027 957243769 12", "46355 3359795 11985 8964219 173887683 985363537 61", "657915 3571107 289812805 19057901 26367 43213467 5", "17 43989 222599003 7558067 34357 637588171 9263026", "3 7059165 463151315 652783 107709195 2253039 16196", "435 41305715 3514971 5858285 44821095 4875277 6390", "0021 71042235 814929 1705 162998165 755718765 2267", "4201 1652145 689161 4845 165203637 62651 786335 48", "081 150195 5448839 75981 15976005 3755065 2152795 ", "323 10965 2636535 12888227 8041 23502061 6063 4347", "97 64441135 96880677 73129155 1958349 35147211 219", "3 79895 184973745 2216035 57 9251 1844313 14404489", " 6335835 592905 878845 21300007 527307 93481355 86", "9438415 191508315 14208447 121783407 81732585 3632", "1367 3435485 2136551 702197155 628910733 126313995", " 23680745 758131 671959 421318293 191995 209636911", " 141 471801 16815795 19642485 488994495 147345 350", "41947 202972345 627 58403245 2504865 193323405 918", "71693 9791745 11 330429 312460935 12255 790342365 ", "10682755 465 38664681 22231 6762481 277890789 6547", "0295 395783851 35903065 2359005 1190369 13478707 2", "85868515 22261483 24376385 645 579584401 5 4059446", "9 2679 1309499 1411833 67393535 799 734628939 2815", "42285 42104665 108489 1304391 349221045 5605265 70", "506183 8890809 1133781 181606835 817377 234300077 ", "608917035 17855535 106500035 9221565 8789 80135 76", "8286299 27244195 104153645 165 605746669 30039 667", "84449 1065067 175736055 642435695 36994749 7285 52", "689491 209 690105973 470611 263447455 10306455 139", "2985 953509821 85 12767221 93 895721347 83049 2526", "2799 22174647 15530163 19 333922245 128487139 2945", " 175209735 168925371 495349 6126685 17765 157267 2", "3281403 95289505 43945 1329621 256095433 244876313"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 443;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long n = 107110042190154236;
    vector<string> special = {"320301312 305110394 226864504 386746110 420450793 ", "208979166 685950593 501369575 631667533 421751818 ", "414924482 24870621 866343479 298423833 877724777 4", "66313501 7695861 862815338 906790882 782780453 732", "695572 872327321 278974426 607896754 129332833 131", "222658 83143998 261030848 731986664 935830084 9584", "69948 331344012 283420152 155621434 241844544 6438", "38100 426380828 900893955 621666551 254573973 8973", "65025 3346299 499155022 554775435 895296278 399935", "679 115474291 975102643 67926086 658103851 7833006", "6 663092620 732666687 963597662 562244888 43990907", "2 306397646 783255092 702700851 668551550 76092569", "5 746515658 40422991 101672147 785595937 894911356", " 331202521 383033419 534292671 299728617 365879678", " 138839972 837479591 869854701 858327852 344583386", " 608558309 278761893 661768975 621214763 953673928", " 714965870 464360852 834358803 189563867 673011428", " 10158952 167826768 40703468 475205094 600015737 4", "88319198 256933639 786375824 607641331 921650683 3", "68234875 43964223 403076931 629115427 219316691 98", "163856 251196950 649258260 56675549 595004256 1659", "54394 95184074 325848486 456282828 136749883 63592", "4867 950192506 425048113 516410918 454606779 90814", "7175 872708396 818290889 62200880 63268538 2828189", "70 543373328 920191967 866244608 758936984 5367155", "60 468450819 369234950 338050947 536906622 6708764", " 1464152 403757560 385950911 399542245 127477956 7", "87613652 532625113 821338971 276726103 965752884 7", "6499448 640874172"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
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
    long n = 429378259103140583;
    vector<string> special = {"772927109 941467493 595779124 406587706 715582322 ", "873007162 769736526 759728887 448349312 544547562 ", "855684577 363035374 717656301 73783746 596535368 5", "11194762 852476470 453325646 302376225 169024378 1", "61669143 79317596 575546697 887673770 603590797 20", "5709305 658149341 473083719 962274774 514181490 24", "9806394 619268798 519201391 915616852 55202302 160", "334013 111119124 818663019 884329732 392011824 971", "286211 811886533 67679082 760079428 651656888 3103", "26959 362025869 616321639 851219569 955323829 8060", "46219 539838533 90319786 17955750 319298495 479385", "035 45368928 15083917 205417927 490692902 49849057", "8 501559992 961212801 412050116 146093946 62444408", "3 838270600 742031697 160740632 781392205 93444882", "6 699120058 783997606 984898705 586405941 92068140", " 470543204 757601485 881274196 623226133 149691084", " 156840077 646987958 108283169 360810142 88627872 ", "746113846 128357693 725757141 96151057 44351475 74", "9238679 512573870 539969070 171293256 415336091 54", "1848487 759822468 497745363 645304054 689167228 48", "2092767 40426098 192692117 956016683 40402766 1154", "57089 34672549 774463216 956650012 952678300 31031", "3108 316756297 659424215 521130786 238578702 69290", "1619 600570699 812720046 426006017 13426666 585790", "854 920735839 676563096 478253163 872533462 657447", "056 708467266 779476212 733391813 56531424 4590094", "51 872143938 983935779 520264747 815594433 6213548", "33 859554812 740600717 440468399 847500638 9259593", "24 438192229 756988644 50683367 186628497 11856673", "4 403218700 29773481 379674023 657661223 470211605", " 669509024 811781101 664451340 64701995 826997513 ", "995414958 144264794 666608059 904922978 640760440 ", "653107373 866779506 972228456 358811160 141145572 ", "760119869 572757015 324138138 25443867 58901322 53", "5341741 80483405 328843695 871489541 537370278 426", "946492 728241468 212125724 610792384 689995701 879", "108513 923509114 561282039 273003332 628130810 831", "946830 373374345 14440376 577529764 144526596 6589", "81618 149292188 23040572 670671946 783022319 45629", "4334 851440543 63908107 199991423 399994666 462473", "193 531441782 13829853 926635311 380407673 7934637", "99 847206790 402244696 264786667 678561084 5164355", "12 489878899 934951708 419473969 558150383 3494183", "81 406896425 598307587 783741929 586853362 2466822", "23 846951455 356952994 990038064 953784971 149042 ", "511323864 137202708 214822234"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
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
    long n = 442413342470235584;
    vector<string> special = {"602374274 637715591 516670450 730376999 581007597 ", "522151795 795077265 214867279 788599979 891728279 ", "454022722 496858776 853693964 21186709 408591094 6", "78471747 187112609 176550733 345490400 298633425 8", "90020155 120718304 588359023 384946178 81788907 53", "4769584 861408596 181103320 597285378 569001821 31", "8928513 953485716 56060945 317409480 944569639 592", "947639 505972713 555380499 830835382 673692162 916", "928668 696961694 704011232 271537782 442642553 182", "421259 954080917 498042451 837488403 751445817 458", "463239 743208987 534842681 854290251 909582502 474", "416015 937419518 902080162 404805156 144955824 613", "014962 487394781 593922418 131486911 432448486 602", "854623 247791808 249582652 639315306 616267464 445", "626240 215006442 448790353 457900538 858554466 165", "626568 806557675 202832405 14165848 821786904 4169", "94506 212194298 243318163 329330779 634883261 1676", "79947 250445699 70235729 10448342 824707816 670281", "434 362402301 618608998 263020018 739498120 156248", "990 172211199 724756683 882784447 619916470 469338", "72 627018387 850293487 233267206 951608012 1679275", " 938356682 938172303 852975715 239416757 23405377 ", "833122450 70974405 779414417 254655620 304005007 1", "71452869 428956512 502381061 580460617 944628851 4", "06938755 552616820 760641471 107748640 424962972 6", "1174211 28745267 992909917 903701132 614527779 435", "832613 681245691 137782898 862462212 486961496 715", "258124 909995441 568875031 502677195 88516063 1798", "81449 554677326 726213825 205538310 736555004 8297", "38714 391089081 191676499 634067466 282885164 3041", "81621 500112085 844980084 357428212 691903734 3067", "21503 277638364 432698659 185826428 142621952 8900", "31649 696390123 403206026 24987915 270993511 58795", "1549 283337439 330849296 996781580 462444873 32405", "629 344253536 363270835 618467457 905638309 825979", "276 174336828 775974037 167186135 126075493 992719", "817 312188407 168993750 254506748 741593529 338051", "160 381702049 775386275 210212272 233430184 343553", "147 412584425 914486668 661182233 618114019 539931", "808 109839472 237605147 731939482 312863194 679768", "92 787683168 784385699 733588966 603484690 5310729", "84 786917182 573231191 685434193 560125878 6545661", "23 253944317 76061852 940955496 197166956 58489828", "0 945341268 251934369 778564546 452627563 35864988", "1 569220690 917810222 966287126 239747276 92063453", "9 934311473 782621882 563124878 502628638 50404570", "7 463448168 172239297 1070172 728242494 76849777 1", "52358405 527617621 893844876 336716903 181272636 2", "87915067 429701108 506504985 845509765 625764990 1", "54850871 739298457 314840131 987823312 553802072"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long n = 45398004;
    vector<string> special = {"943965932 996541987 273810720 189326216 777334728 ", "224864599 70298171 929164239 362541251 951562852 9", "20590110 520280639 464631549 515477179 473266312 5", "12505321 112764120 120082700 247362171 147526942 4", "5398004 356685129 101804088 952798575 31879474 324", "168867 574713408 151259053 992647348 301672330 640", "241747 515032041 526090713 278296495 84370804 6651", "93332 971859269"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
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
    long n = 696871952495626895;
    vector<string> special = {"176766722 874296681 916920621 822658796 303766732 ", "497886991 262012136 576586125 871632782 877429861 ", "695088206 55887961 142673597 961299823 686223091 8", "22889843 510281742 538342514 579691181 252590912 2", "48716661 683014643 618819984 987725926 146700073 9", "21607352 6926833 667283914 376054173 884320708 117", "204582 462745232 248057736 187332702 20057027 6118", "45662 954015197 737756169 370855198 675765785 5963", "74482 566456460 909466571 984205414 509672156 5640", "06891 262798175 194891049 284250800 374144620 3855", "48720 935366343 999566147 926250642 369575122 2946", "27814 237918410 920127779 234650395 27702123 89252", "9593 693383973 210093855 495750779 320568519 45572", "76 990069683 670007418 363750119 264692941 3449154", "37 483679502 985612112 222118845 806872353 6358364", "43 482948469 47131825 41417956 857553864 710661388", " 940013550 43915532 362687607 475542026 817060858 ", "699090349 970650320 305137316 251048856 510687517 ", "254060982 682608462 381832143 78651376 363537999 2", "93403839 78695395 647328508 702682111 15041003 559", "29177 246819668 713527916 833425926 383778806 5873", "28592 660294522 470895750 630625215 958322562 9307", "31856 976681248 959980282 287919809 812143185 3062", "95754 161178666 923291682 293316386 299942583 2717", "17398 378125305 883118249 621611612 647454658 1185", "46139 919226891 97909104 927979123 118114717 25419", "1789 540951783 170431918 522194773 358777907 67781", "621 281507128 952350040 496877186 573505553 811291", "415 374518585 863809985 936599790 33615758 2223167", "51 319560787 861042818 466319652 181894703 5645600", "93 494253314 405097629 738607021 670104646 8756425", "95 274458878 985719262 623080881 332089562 1229546", "36 966579608 283275395 41408476 872868812 26836273", "5 623046754 451080478 349310340 423926840 27555819", "5 433863700 43806391 247739401 296214299 777551989", " 22314412 667476279 565802110 131436084 580378343 ", "590302165 125394946 306582919 105996589 286083130 ", "766519947 874224355 335278979 139363067 752655679 ", "695153917 118330670 63149292 526851971 415384778 5", "20455604 664216866 700060923 837611903 20800216 38", "4129778 7852429 632323729 793822881 223376882 6773", "29758 301182388 79783763 142832631 895358674 24102", "1663 287562099 425262357 713531023 742084165 91367", "7766 294252961 197015418 324097116 772615505 40744", "4528 406707895 41391577 166033241 133024152 310004", "92 520484273 908409188 112924910 857059325 4883182", "33 386095414 331361669 90532752 247780230 37599918", "7 581197044 572906122 76834989 769005698 563528976", " 129671503 215983746 499321543 697055213 360723589", " 826875708 79341672 71511008 674758929 815767374"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long n = 451623416676507316;
    vector<string> special = {"538800200 629632835 245394145 384279316 206775157 ", "961190017 658881794 268390347 262907816 958897557 ", "111379246 943620967 116423037 212992045 506770211 ", "398404789 99197393 934620212 474996957 154293954 6", "37189569 364473817 424109210 963460826 288632490 2", "60992393 893021399 487505036 419741737 359795695 6", "12546127 255225763 582985243 311656954 196415490 2", "34213932 174086813 15054038 655002923 917135990 56", "5779468 593454576 770181959 643767052 561069829 23", "4563830 32692756 910627004 508417637 872546260 808", "744335 858940051 654554953 633658039 114208755 240", "007134 336852750 90717196 931986880 408743465 4128", "01362 814950017 765816241 338972994 960707568 5387", "03618 515778755 572615990 218231046 982333116 7831", "25044 274721362 849218289 487912732 425005953 4966", "91490 477580366 878099920 786821734 979217013 4445", "43482 176197316 842669281 143280470 382726419 4070", "96357 126050606 269167890 120774900 491658849 2352", "53194 998786360 350616379 293328419 476491635 8407", "82227 757702597 229064282 803566374 452601905 8181", "29071 567755827 166381087 180503391 974485591 7266", "9977 493885916 257163690 46561624 434111675 638594", "585 678653406 99060368 433969925 264095956 3768594", "01 437923101 754140197"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long n = 56247133504314500;
    vector<string> special = {"137543519 529867127 476153285 772441128 389430092 ", "155728694 453744157 997756284 543262565 199674904 ", "250220500 298926829 608915999 544604962 245903230 ", "271432609 775328815 581655449 198716401 988078845 ", "573119114 147912962 69538881 690198693 396480612 9", "54231587 158547908 904133759 589732148 993118719 1", "63498510 101615791 525608109 904495581 196158708 9", "1898267 494200518 764626753 355415179 171135976 49", "8298290 536363760 50378026 739482235 504363495 136", "463343 752187235 337121400 24209434 993165187 2384", "00013 569800516 832740672 713696050 816900156 8132", "02054 636510862 67077311 549152582 158222881 23794", "552 79739441 991463615 224476730 645847477 9514951", "16 325388924 383085368 901844280 48121877 62469851", "5 824553917 912308280 517224913 848717656 84836318", "5 847920936 866866181 604387680 464710455 41144441", "4 442876406 66061697 788533429 648344047 953043242", " 519095504 395315919 604397040 95152485 179361952 ", "184217964 338534454 293653163 205929097 93342894 7", "27459446 167702851 916383325 224790269 691288740 2", "78809521 955577395 320153340 652983543 151234747 3", "39124319 1278352 749634530 425247588 44688759 1909", "57536 134387227 470052594 137546831 307323727 9062", "59607 170590955 397212157 567239554 761209995 3531", "48179 101649876 505311328 804981612 886125935 6272", "97644 207655435 540080367 71416388 757832855 63512", "811 305458441 188284951 344533868 471876515 777790", "958 658278317 658097728 552872217 214591509 912637", "452 637605287 759415921 527689265 922686584 112176", "246 947776273 175831353 340522101 973174722 139568", "286 167730784 243161034 750863073 942976764 129974", "556 332799611 701196136 412606545 706621218 138408", "654 730382122 805379842 44506215 81053510 55919468", "7 459818931 919696159 875602601 230200569"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
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
    long n = 445602647269328261;
    vector<string> special = {"743315078 21061621 966977021 791710675 513810377 9", "27564833 997430307 285063021 539245451 318998471 2", "45044546 648131908 471481297 746139261 558662017 7", "40434189 704467680 163391511 593930562 870994621 9", "66091582 98028202 585881901 326174345 735458734 78", "0600460 483014693 176053990 794938679 875876433 41", "6019791 566647432 632316189 267701454 824562194 94", "1196390 282527973 109217049 67258385 914720179 949", "311060 974829190 570414897 705081830 392191343 888", "375467 736781721 53292210 609890940 323127132 6092", "27691 270405645 231832062 738748590 819088399 2590", "0076 927544508 667715319 483479464 563087748 14437", "70 285339851 284476316 955413706 458648637 6510379", "52 86216015 646961906 623972298 892736170 65632872", " 850815283 461138982 963128094 382070985 954128640", " 808873303 362459122 807518874 818863119 82160544 ", "538916602 598970430 914584662 652362120 169337931 ", "886073434 512050696 191382995 574551611 688221653 ", "23996315 773975430 207252319 824461266 651524548 1", "22786278 223544970 338621366 766709111 554785400 5", "51887059 196269351 361756651 102017282 943314319 4", "14244874 390206612 703307143 434656338 764373124 7", "54040102 375758414 596598513 917901561 407868823 3", "21147355 361095042 54239759 55655965 908006643 168", "027225 385577130 496931115 749355675 949811723 900", "038640 179407223 185122328 578398574 427035974 199", "411702 147136240 875360662 24819280 476382684 5614", "12838 339488729 169031924 453024416 575742465 9749", "64171 628946775 344403446 433385093 400766785 4475", "72957 485725138 468389623 640000593 92383532 60919", "1018 521443868 289576271 727012904 881656884 98648", "6009 298954961 662213624 140744675 728342227 47237", "9819 500239870 44995693 694651696 371679986 218628", "82 835190535 399718867 396820476 159504263 5196925", "82 729959107 505438301 703206675 486338174 1555472", "04 642421226 949445866"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
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
    long n = 498059173923531506;
    vector<string> special = {"610366495 320775498 847827478 947496754 722909395 ", "366000994 13849201 363190260 784745902 297801449 9", "86484842 30160036 979007532 349932653 682102941 44", "119280 811972619 969512635 818840551 977721539 341", "890887 331996384 736023909 142117452 228083742 827", "436072 821653620 559165943 166491404 441308193 186", "072240 950325362 779221711 353791640 414627320 976", "883880 257316451 681870746 262339176 604794824 653", "176582 562027379 337603165 669726526 140525108 557", "204657 209440884 857263800 434374059 232075297 767", "754634 863795233 910376295 144419536 471220412 247", "246248 853920166 941763594 191054695 250539962 454", "395620 490450270 27908904 771547394 295509983 3966", "47575 496573404 528290415 111810963 524189635 3972", "80160 982480685 268389182 338283822 661020369 6334", "65513 622029405 28945766 719848460 515071633 10280", "9260 672116025 126901806 433098961 495440424 53988", "9073 333590100 984554902 371002639 437412894 32067", "035 332491085 460332510 860691467 922499168 933465", "764 661853521 32877895 660025280 530951815 4546719", "73 922322908 409634328 881597987 995675224 3786532", "10 509399494 521146597 504361127 401466509 3101033", "97 827561083 821161230 13154305 3938259 582958289 ", "623423882 400352132 792032301 591844372 52569177 7", "39523683 728773072 723507378 753167352 40825898 34", "8797018 98680663 25070883 471010471 75305894 43642", "8528 44376792 768337895 736622034 912003754 396466", "771 480396855 172180795 728174579 187506961 566768", "676 522715775 512960630 161213137 294675578 719357", "561 126374946 789384589 211190343 718555719 454432", "036 267225477 539969240 612643143 339193319 785498", "931 614420922 894029588 280289562 676678999 819724", "473 701895052 703648681 880194795 708632547 909842", "125 153104066 965490991 237202309 233969970 376447", "441 475155869 662523436 934132570 658273411 235153", "909 780836004 517421088 725883589 768085041 804163", "580 115164835 87303364 615152273 822606719 5768812", "14 48013550 234563984 557373114 939821711 94082967", "9"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long n = 563921779328875637;
    vector<string> special = {"86994631 957207862 916248008 844756761 799282350 5", "4673287 592811763 687076777 86972691 13678829 6900", "90255 323065223 164438763 126654702 477695280 9948", "31963 188613995 759661901 414630060 433563656 3447", "47016 600517649 707049239 911738547 267578486 2402", "7518 593604166 577307842 472993452 15227417 215411", "791 453365466 692714717 649051815 754159494 972982", "240 151401855 191716909 14000257 922821368 6852759", "75 650341872 341891092 973490056 945131819 1960323", "74 385929556 87328564 492545629 334456962 15500482", "3 942584291 963182165 611109659 999362673 85094955", "9 704561351 424038789 952780728 739217688 90486979", "9 774351941 598285183 371513513 212117804 50722204", "8 797381150 30475599 799493065 849343004 48507943 ", "14513713 290826805 633568124 399668337 128715442 9", "15974499 532084679 824835089 219256439 723186825 2", "80326849 146433627 940404070 874511644 288702063 4", "78618852 211259812 768698065 428039446 202107778 6", "78056342 215285660 490683707 310058569 158060000 6", "28732340 165755299 256056206 168274792 706085772 8", "9107284 303010791 717450066 167156187 948451729 56", "5267496 290803972 176925588 442069473 633224551 65", "7887267 418333677 41761800 953166072 557886099 529", "587803 642996747 825202800 758580346 657374867 354", "100271 436122021 566256701 644184714 310365946 624", "32427 9090688 895098997 100457263 280844248 804711", "465 438000840 78282709 700150719 386242141 8675850", "82 625000496 711372600 397132416 479475134 3780412", "85 588975957 617978936 709558410 445195865 2345557", "58 328244585 231448596 212531697 136469269 1243438", "65 449420815 271406802 103170081 481245965 9719834", "73 730203010 971469478 585194122 100134254 9906746", "28 709832442 515524500 469874557 78915487 98662136", "1 522985296 347177298"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long n = 275372884798884205;
    vector<string> special = {"542106521 295344546 962161488 593648177 69022146 7", "13079079 126534943 783617080 9957183 312592379 514", "074651 622490220 719579727 760351595 692824479 102", "61306 662027631 967816451 540006217 283104080 2448", "49499 341524625 179930358 769666970 361503505 4683", "94530 933544131 525045062 488059341 603026435 4497", "30318 86994879 798937868 938819265 966105714 71782", "580 387971725 106381096 223281101 608464401 560093", "258 153535558 572870717 125470723 264227458 867848", "040 87856925 947334904 419377074 875223579 1652664", "43 113845660 952945814 472924203 244339941 9762684", "4 806472748 334304166 551352774 17233893 348795312", " 151159001 152917261 580109349 102889120 870775889", " 769898837 676986696 957201592 518995162 164666748", " 559997243 597657078 430335875 98505888 704021036 ", "609367703 552573847 750019100 77030023 972487958 3", "0282403 522630543 248344313 121996851 878515830 20", "6772436 874466415 923287273 948588827 789546506 24", "9704470 571261045 412151008 498682764 215917916 55", "5501653 513732690 610106873 562408429 773261381 56", "5738558 516920364 949725623 87321155 810488240 952", "143172 828209893 761735820 75239926 873548957 4471", "72070 135927708 731745949 315624915 850593638 5711", "7744 407907698 559812805 218769491 430884678 48050", "0353 594318 450006488 800848923 692254232 56015169", "3 379836260 483383851 833433284 899506270 17698678", "8 341525811 566759250 524237789 930764675 56640286", "6 185994446 943124521 257933872 598762594 47874419", "9 533996190 646488343 414972738 380342792 49009839", "3 772805861 604093071 974594846 590181558 7126664 ", "750315845 362742744 35604564 143442219 318890146 1", "18261377 913672719 470583357 19788834 700979111 96", "2068612 66858859 339198850 964979735 591896720 569", "811616 795968193 726171870 764065103 91041803 4255", "95929 634089800 442484256 295021592 742714890 7179", "69635 282715295 925839221 99651406 586449276 75533", "9433 466460429 727696101 785763104 991223899 26946", "5615 367009289 389973531 729667090 757606375 56453", "9450 847257339 508851819 469989443 218879282 88013", "965 114890819 328448783 783181553 789982686 118524", "087 151117432 512721330 601859131 698346787 395912", "939 154848754 457267504 958768422 758567189 463319", "151 19668107 481959068 578683876 443568165 2483774", "33 879576994 118522500 514071634"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
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
    long n = 102885614146840175;
    vector<string> special = {"713280827 929267965 33401013 117232231 646416065 2", "57229822 724010506 728697831 752889423 326858139 9", "02531811 851603559 131865389 120118252 971040041 1", "33867680 481197029 345753163 796554245 178656395 1", "26601280 977547601 575023584 606389602 579337541 1", "75838422 302262371 347517852 22288703 314199541 52", "3912311 785703156 648839095 683173637 218038852 73", "5486563 110615413 784791967 696895797 945953824 63", "5732099 340323486 912459762 302547877 182126633 54", "2471193 112129123 766872492 319199472 695841129 25", "9025331 10471981 452567714 696892713 528142409 584", "222305 611919431 634736944 186142672 529444034 476", "745257 475992728 301761839 596162311 842785745 318", "171065 959419025 999383595 30333958 378285101 9869", "30525 872868454 838479571 833318093 708667453 8961", "40081 349875585 991474098 524122394 832381253 9801", "7944 307920436 505028382 848738460 80232418 145180", "397 743121072 722531438 166373479 410047926 210237", "306 257482036 722908272 443779496 379813477 292597", "415 754814855 894406427 978283418 374913984 749428", "340 171466153 718260866 434861241 704955713 374682", "154 212718022 578896650 870564662 250288313 566584", "142 97385836 585879261 687902380 245250629 2047892", "08 398070782 709797535 494870803 268900231 3965480", "03 976531050 839498593 554544371 328712212 7234056", "05 671471639 947944404 717871834 896792361 1653641", "6 162273059 780237503 189884433 47240868 557417241", " 406595020 789705396 145484427 840922927 480807241", " 803462956 65611520 305258015 891816383 373442770 ", "84498218 35260897 918487288 482172990 992554355 62", "5763246 902089212 478194506 327806341 907685887 24", "4893461 841977615 462558791 340073614 138907595 68", "0311269 924719075 307944530 999195879 567460710 80", "332226 782988678 213545075 191244395 834489998 425", "259938 257595320 27506444 307125294 426199903 6994", "03070 859838116 31441868 160581303 802796238 21080", "5706 65154001 441686241 416528754 186191447 873697", "02 841772632 324200819 891156838 919680244 4047213", "64 435455064 442472782 262556964 24750927 14341143", "6 182129576 398357470 261567488 490595640 51750843", "1 309865933 951415906 249454724 821581402 13828680", "9 512083245 640129882 993244195 379073579 53745263", "4 948925314 211762498 644680747 80024354 104626181", " 360862098 232181892 342334974 674941741 917556778", " 455143453 993467048 674055299 390873955 677082913", " 24516120 640471759 315328216 679897335 599227527 ", "5973530 564926304 376183370 864415598 7803822 1821", "46836 451732737 32311175 194425875 883699535 97793", "4406 603368138 549900562 275769000 451810947 28408", "3823 21913014 592770809 461920607 369487602"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long n = 300190623708053302;
    vector<string> special = {"5947820 643655488 465619039 845971054 435703930 48", "1860660 283910713 763644311 893577357 254093971 93", "4597018 829658773 381214520 405254912 728659827 24", "1131433 274801931 935597403 928677365 807951956 43", "1013335 223578821 166812816 504543062 393816749 40", "0124320 904229877 323664562 431522783 624276364 48", "7410710 214898599 991715580 1542507 539596324 7545", "77079 997309654 880708956 570153615 622052770 8178", "4191 676786371 178761481 760931691 38854214 915580", "478 267962498 316735569 675071422 18330544 9498120", "12 523438039 82256310 518174777 418878072 49689106", "8 339832129 626548282 495417622 175768834 81733803", "1 338125141 154462456 564171754 697778065 80694743", "4 374934350 131635700 377515192 676861850 21042599", "4 891637987 278553653 612267591 585574492 25389867", "8 775837017 633730321 223243702 56587439 995089589", " 32323033 911768265 587996495 640610330 559057345 ", "676750597 857381463 100678298 878032681 452400412 ", "945009607 220078724 341650355 400882430 864320738 ", "694245226 195900990 129668061 630047783 848017950 ", "291033325 605612586 520928088 565905584 151258401 ", "484273045 702984054 127676016 864086393 51049231 8", "86426817 313627633 303086552 28011211 543535292 10", "8385027 671770975 3724855 642979366 607610039 3115", "41357 133505543 474592513 537161054 217406117 6198", "92778 172212366 36137097 834324711 144505809 68633", "3262 688574218 901284181 510540654 978154754 16750", "6160 437255503 745983666 278006954 587294093 97481", "6118 846254221 607265417 965971827 198690220 83967", "4161 1123358 588795505 76933905 452151311 39549444", "3 628277146 740974086 900407255 796973233 44371948", "5 535782445 843272826 977109744 591910637 27095142", " 630192938 227988843 9832314 174063314 668995160 2", "1805025 110207221 406030035 262073268 281470804 55", "3599151 196625160 840733744 571035653 582441273 80", "2388821 195995645 481571701 252797540 152702680 98", "7962507 947319397 508086081 280835572 890109067 53", "1181269 538724898 633664073 685437424 887065607 20", "05142 748797625 169661928 372156028 582063471 7433", "49604 919861991 821730805 398972607 253723563 9694", "16860 627470707 337531862 918646832 841959928 4914", "74743 252685636 33073874 574552877 750997185 42557", "148 565558965 35663276 917385427 782549934 9695652", "39 759318053 8052078 487158795 377232123 763948682", " 447036883 739070340 644751329 285505036 175799939", " 835425514 956246283 603620123 806887742 983532622", " 369436632 556302184 477799687 263500033 115797228", " 221825509 179911197 438476181 409645093 91285187 ", "536800770 398748633 949514406 904250226 805108599 ", "85367519 483830479 328973476 463911549 557702393"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
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
    long n = 580851332245624609;
    vector<string> special = {"305638757 201317468 693338048 840144305 626937002 ", "175268788 475011289 102747612 789376295 429271301 ", "665815825 262485487 114283321 860509116 780019173 ", "123177590 938546557 86054279 982178065 830486591 2", "89962705 222301778 381313682 567735895 559405136 1", "78817098 851980454 41346059 317587288 586981853 82", "9768650 624380647 454553478 73042359 270379706 654", "893754 880839352 202678469 529206388 54626191 4641", "10857 63341620 715618868 157573044 655000791 39519", "0129 946003832 537167285 453698239 823095338 96846", "0284 37231712 62715807 618404427 837356478 8328833", "95 424476306 544337410 678505210 980201512 3718801", "82 355847098 563585581 493382175 286213737 3774884", "18 85178902 39172211 601328326 221918246 765381551", " 506860339 657227307 99795700 700908088 29210794 2", "45811446 43232759 132753195 592871269 201608642 89", "5641822 104893000 492854323 334341998 188579222 36", "1384330 984646175 666475285 191274570 268256046 52", "2641527 508618262 707882857 884761010 744762056 72", "8783884 629804959 260901330 628861150 333469910 50", "2666201 327602828 361768647 890171535 446870341 12", "7025436 288973009 36039574 179801423 420744448 919", "068550 500280966 731470244 121390581 907275702 510", "086206 830151729 223849975 65823852 421193689 8795", "90692 456831811 876666614 122827958 18122472 39675", "7079 344296673 865508977 632049709 4410864 5059706", "82 247750886 411829725 275381514 627488333 6964741", "2 96631591 779546338 169435177 665721014 424906103", " 210327798 969429017 414419211 259156090 628979459", " 397135594 219798543 100301341 263104773 593542571", " 500627678 612426894 633307961 298901415 23060183 ", "959286329 998003230 928198252 497310102 833128907 ", "610735214 555069383 918029560 405748274 805461288 ", "122475972 471496985 160526490 76472713 892559538 3", "26341208 995316336 210022669 520149788 914381649 3", "5878753 774379890 556154319 58237665 991159643 142", "787252 834810842 755721765 680163465 124227345 610", "00840 358671993 14910299 375921925 324912488 26156", "8892 779277947 160351566 47779396 718169866 247829", "208 201958632 738667820 981327168 129129374 600202", "513 189397100 146225787 276251194 83402053 9301930", "40 798467928 331052633 901884738 329044070 9115050", "76 294729705 381673732 678712570 591786412 6712952", "54 849149129"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long n = 56091806868663183;
    vector<string> special = {"137027844 319883831 555190192 732503362 621800092 ", "69366298 125174241 93106474 413933022 26964068 849", "174454 624117179 649538001 911967144 964503127 734", "837673 208447416 515488446 156509479 493137899 149", "346586 269763769 378590156 236885428 605738939 569", "126638 237118507 942456954 802214304 740292850 614", "79528 245606386 835776271 290220699 966831848 3640", "9873 120718475 116063741 703906898 293403916 69086", "0251 979564910 696471945 744051032 793752323 78855", "8722 817383859 788473769 640506439 723291406 80523", "1668 583055094 8523311 892633384 367513778 8149407", "86 35873917 82640165 332161810 944729492 865628471", " 93813912 271116152 424380943 343997602 397117784 ", "643030602 85066201 771383620 906717050 873358892 9", "58710567 910045153 338206545 929688580 83437166 20", "2668926 170732917 46518007 162914 364135264 113529", "528 43316842 457136634 815663884 822236721 6352691", "3 330493546 209774663 805416244 692099489 83381277", "4 565559062 463050583 635786097 220065764 90267385", "5 637024366 903768532 300332698 527374534 2526863 ", "879868783 171366267 130487536 878243854 222847273 ", "201597693 808769858 622673792 269707301 828321749 ", "728556289 25716155 415352264 260025591 951702450 1", "6274387 375476153 118227866 582182682 523227933 73", "5164890 541052210"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long n = 97105238909094390;
    vector<string> special = {"421222516 251385807 645002036 413719105 730835577 ", "113137649 785939019 104110056 697356122 425970968 ", "63831414 845722324 481277461 466034515 385380048 6", "94859312 952320486 37272301 838594232 746087275 43", "8394443 594629235 832725450 196596785 374240001 89", "3257908 501871842 717289072 991545860 902480059 91", "6347679 762920531 305483665 204413911 283518940 84", "3305545 87906854 623218066 304764088 416083198 564", "700799 910823356 258674574 795665248 849764762 724", "781664 266799741 757894810 504503988 274949581 622", "851041 795009051 480240457 474763918 206586966 198", "876047 72376087 991329648 495962299 575324900 7638", "90714 107598210 83815980 91944006 290632335 317276", "687 650675206 125240354 253731572 816137381 600298", "469 997451557 204371974 252538641"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long n = 76351190455774821;
    vector<string> special = {"205296085 930387038 768875180 59536706 313492601 9", "71995077 940867643 735595088 300978916 971241855 9", "00067802 798389409 187166583 975970363 371996553 8", "72947844 525427667 119139818 909332107 541752204 1", "9700442 97936830 520297311 923451017 257820332 488", "406056 706672583 691647883 596292779 144060120 107", "573956 983242725 633286007 724828352 46951063 7819", "11591 562589937 989720080 652587713 272805922 9186", "50426 796113466 57714690 271125223 194905524 58196", "5294 648887389 218377415 994118399 362116383 41305", "3713 857923412 984405244 385312507 959098016 57765", "9229 620879309 650149365 945951435 682011380 42222", "5618 189642686 929819282 664634219 669453997 17351", "4567 671937080 498615634 100808509 582340288 67325", "9836 332279417"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long n = 504959950357499123;
    vector<string> special = {"632827979 472623168 469068107 241302425 865609324 ", "809470143 547987753 474660099 624515789 79698894 3", "96531963 145460506 26404903 505828343 950093339 32", "740103 613325940 402054402 640186658 154669875 580", "026091 920601593 619007464 285392711 262602759 428", "23460 718585224 898358316 685386624 174890509 2707", "17528 448663050 535493199 822990204 729720308 3913", "6332 725068973 768894842 391222579 483781530 14923", "1124 652778833 425955375 587034588 877312315 94869", "2362 642060865 787827773 466667549 42901997 328816", "66 936586020 351394803 160066435 995418954 5443384", "92 20689716 743746710 947313970 180768364 26097050", " 61474990 784548373 475630047 154329119 443680405 ", "53056906 554179068 810578683 564648531 538878059 8", "3637101 45517223 123488050 159403729 50662427 2312", "51677 104586170 38603796 930113328 24931988 844870", "580 713337038 285648147 332736519 619875370 962377", "432 459890030 598561198 254161253 978789706 601771", "818 141230914 87727341 201806463 861553264 4674001", "25 635894667 92505613 315070121 921138518 42422304", "9 977325776 791526014 59367304 220842863 422232287", " 661150168 834150667 858003079 923014548 774443999", " 862975960 341330521 857634696 59896062 420577065 ", "506554350 812067475 903652573 581194101 5198224 94", "6867663 391530084 839974007 948067016 582572437 92", "3143102 122875687 617070174 448750974 533131859 34", "3345598 859957339 412736610 296940235 319378358 43", "6118025 239924827 342747921 843631046 682137073 40", "7687873 363659852 172259817 89897946 77041199 5979", "60934 526803287 897457360 113296508 722787465 6483", "71337 698775833 175411393 452931100 791923513 3896", "23872 200719193 785238473 505538654 141802766 9051", "18171 364783866 535822899 141933451 838915361 2234", "0182 951131184 228974849 746402115 612754887 20879", "7967 215713784 932721051 629575286 366525639 51852", "2425 431637186 301107916 716786835 922054350 63541", "393 350666354 153295083 306694655 711034400 995104", "849 785201032 724575574 408738761 680687762 368880", "995 567416219 349760293 902922397 146641589 687320", "792 273945357 285194525 806336248 644922965 426478", "489 693800954 672990436 559838363 568413219 219223", "133 809128562 778068852 340157763 434193582 543891", "163 243449321 242422483 967427224 849424537 407405", "634 455422444 847131906 373170019 678922248 778654", "439 488594967 353573428 883362821 446983516 815677", "246 80255300 211966529 318511141 273172770 6520181", "89 465623558 189469531 847297450 599596358 3533347", "48 287636055 597522944 11303658 671262605 93639262", "5 770637454 869946929 162974241 166135107 43117541", "9 121640852 481765346 307639845 940892209"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long n = 305930748006039446;
    vector<string> special = {"538600117 981940217 280180908 511307989 195939769 ", "758167459 610630881 840753679 247763352 169190009 ", "711739976 138739829 784255697 11056972 923756803 8", "53912698 83144485 2823214 299640946 904190925 5538", "4983 249837166 963143990 175916895 996520038 84484", "7775 271768369 468853090 377358613 383542416 56017", "1907 803103558 898562147 466663252 102141582 63641", "2350 55084114 697930555 928861681 592340664 586632", "227 455417302 32977551 272103272 972383830 1025377", "18 157280393 153315388 357361838 982165420 4887084", "15 278430440 448265258 37866569 389556050 77907516", "3 903655180 157443678 862981795 228587719 58552533", " 736020412 26137172 6067100 623485510 356317557 22", "3198917 973267340 308545887 234566616 415096215 73", "0502791 266250594 622116984 657201580 693868479 81", "9288273 450111524 598827300 597571492 581450091 94", "8101871 702903648 513430504 706775602 585054761 53", "6164098 377930620 823756646 304329314 378155498 74", "3653520 925892746 994738029 70139193 401370774 289", "842269 806795866 765389137 722563646 614136033 713", "645946 429443026 27653498 543777623 78382687 37731", "3181 147853179 571909696 185490904 405328596 22891", "1281 205429085 172428279 990455510 883656398 86678", "4174 535155213 187777607 428963522 800256886 24873", "4892 34626309 778997951 959124532 708773795 711876", "659 999565877 365765802 416738309 226580530 701860", "822 379778777 214566946 817415329 824435603 294032", "385 945477514 392339043 887425692 901493413 633181", "968 902328728 23321955 911191684 22077124 14761206", "6 642345368 725955744 582075895 393087265 65499294", "1 367466810 834640698 638267894 675231059 58730184", "3 442105438 487900995 510037114 536132396 86157733", "2 58737000 346640467 234656581 602472398 258598406", " 163144912 560349024 748365307 603486206 305444642", " 202463742 167648718 328526706 885866938 689427168", " 607696726 647335874 343470664 720908551 997579750", " 615033744 884587965 589817524 289059853 995448508", " 408372811 650614119 437965726 671573607 848595299", " 598639586 835253673 366144755 720229813 710062630", " 412809855 160173567 647679795 599919476 864098737", " 505308783 114641677 753011277 878508048 949257825", " 666081205 615115889 633413549 18777912 868246236 ", "494292195 71477721 936773524 935439218 861798882 5", "85342758 109745495 978161577 521992432 706228579 5", "67341984 131245297 639146190 458568611 495841491 1", "2310012 575164285 682518581 927428238 415142074 75", "4326589 232287916 85728180 918947933 961027472 195", "917784 45283941 276792150 446843192 859280329 8858", "29634 799571797 279481908 458434514 34908461 70979", "2076 994575557 322591363 905920454 616901483"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long n = 83520134551601192;
    vector<string> special = {"747344779 459673993 275266639 803010784 525937345 ", "742690909 787537064 763960323 853190752 921618086 ", "451255127 390599792 63616656 899603805 854654755 2", "39284671 701521084 376977595 144871448 378021066 5", "73537163 232487482 745844605 64549290 830673128 63", "2545425 974760923 301235640 289519610 62674363 587", "500284 614164364 327027500 288908016 479897576 597", "313280 905691685 847232681 840199401 250990381 469", "6527 948336800 477711239 980000875 450132563 14877", "1276 702240396 891616852 629272859 357130344 69833", "0624 544384961 478757070 359756268 239638316 97656", "011 86839126 712746257 989323930 598738634 3949871", "6 893079505 680862738 899828824 320675529 38725923", "6 714556574 22748493 630476230 136879682 343390855", " 61813444 822269372 998533158 933881172 154826004 ", "192627412 842719753 475017681 409018326 427708534 ", "909668898 349801476 978570725 573522253 748255212 ", "840099128 935519576 953717057 778887199 796584438 ", "637992841 818077051 954004148 576780294 149219088 ", "449096291 964863204 803396722 468993992 421098404 ", "781995305 511234433 158324424 26618405 200738618 6", "40603839 961721449 531382801 500150290 621736691 1", "89028934 603941583 342385641 983810086 397627702 8", "56021258 832130616 389195682 10276691 580227753 96", "0027065 302132719 988596725 847884502 725004388 77", "9962071 696417206 338258427 195528562 440903010 74", "7839599 521219519 560482652 434584025 759064377 25", "4689036 533181403 355887558 695558764 593826315 81", "4444008 879308786 228271522 710133285 569723325 47", "6758117 307499956 492728323 315510994 156944488 81", "4469818 227782542 584858592 382337669 763275790 91", "2921071 812088545 686546052 738867273 772492687 88", "536844 44575599 410473795 746453015 917432028 6887", "07470 103243799 55295600 921149961 286192747 75397", "6092 515411650 30366092 921154766 563141099 604421", "752 615352734 765849280 150477150 695887930 738325", "433 911506827 716581262 118582256 739850389 805887", "928 871247316 713260741 916202026 479339791 399480", "521 546315552 857567156 754762905 619249221 860098", "220 174037417 638427296 335629154 152559696 580909", "48 730229932 642917496 367541815 764176124 8348798", "79 60726561 242339784 934386060 471728441 19787627", "8 993151917 625243372 70448396 668516816 121347023", " 31043542 660323208 401747783 32837976 955101761 8", "52762742 714750261 478654639 841497960 564100320 1", "46547059 210840958 424233411 595953935 631842074 3", "48562094 198922507 223990923 963067522 60934248 18", "6930234 890467869 248068933 408218133 676946311 82", "1920207 636099131 21498462 792982125 903454953 474", "469246 479341868 755979172 246909941 958083175"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long n = 650387371951554655;
    vector<string> special = {"114164170 39693226 182659144 805988535 183063151 1", "48421688 204300362 373491634 148094199 406439934 1", "80929323 721307081 471736236 635021844 370955733 9", "55244725 896488470 553602261 240971377 854314352 2", "27648766 935469528 341077096 177383473 445921902 2", "99990006 599800419 434415731 205811119 153185098 7", "34919755 168175 623541064 15322411 335017289 36340", "2652 165851909 786823219 441339846 541153716 94189", "9244 429428794 647597931 167321521 861306441 79814", "6138 12610849 12029771 820411298 984262380 3996777", "12 20391803 516959426 322364809 517963427 67907954", "7 629477810 674647305 130969218 352313282 94773445", "8 726122886 157600405 68945419 372919651 793314393", " 989568519 48261966 5281399 42876442 434229567 849", "94244 163609087 393821859 727439848 630939366 3628", "32962 808996109 216354537 563547502 143778508 4160", "71601 723109997 738311508 94378083 449286695 62001", "5579 316304593 646116115 883649353 937811421 15814", "0254 829742626 604097328 918532188 616509364 42552", "6811 272733492 112789634 17991629 287432391 860395", "503 384270006 91481824 82942254 19257146 832762530", " 876531048 649572761 904193581 510727983 725324062", " 326382482 228521762 837269638 848971001 612261345", " 756001714 273136656 582278452 242966672 419407542", " 775764086 632519494 482666216 242963526 714771361", " 789439466 552805232 33232828 243374777 646561561 ", "474620403 381196209 202145833 486035978 317592954 ", "534395901 845356953 225356088 735422029 750731706 ", "128216050 232705114 392537590 236089665 241607516 ", "744619115 456528701 653680683 219263810 974572452 ", "711142955 661413712 373431371 388990844 535143434 ", "879408842 589092450 154664622 85078882 485983217 8", "1001646 252609841 770684413 549125472 759527834 57", "6383553 274512099 7312110 16448717 347011668 11168", "8286 650948020 810955569 298611492 408752118 37695", "1821 590753519 65959339 893816949 497338768 849509", "233 249825825 818806243 178508055 742072670 907175", "935 24657801 881948346 185972384 391967742 1336058", "73 379218387 220058208 69957655 497987811 81446629", "9 871963911 140427652 12774761 199772171 972006462", " 422805181 546500044 921272859 546520302 220551547", " 834752915"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long n = 614889782588491410;
    vector<string> special = {"2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 6 10 14 2", "2 26 34 38 46 58 62 74 82 86 94 15 21 33 39 51 57 ", "69 87 93 111 123 129 141 35 55 65 85 95 115 145 15", "5 185 205 215 235 77 91 119 133 161 203 217 259 28", "7 301 329 143 187 209 253 319 341 407 451 473 517 ", "221 247 299 377 403 481 533 559 611 323 391 493 52", "7 629 697 731 799 437 551 589 703 779 817 893 667 ", "713 851 943 989 1081 899 1073 1189 1247 1363 1147 ", "1271 1333 1457 1517 1591 1739 1763 1927 2021 3451 ", "1023 11063 30 6851 3526 1653 12943 50431 10013 140", "53 6355 6479 20683 4551 1054 1615 1235 6293 4807 2", "6381 2261 3243 1435 1505 715 2146 12173 665 2233 3", "854 8815 1222 2465 2553 27047 2139 1767 266 82861 ", "1558 2821 10199 32759 23171 2717 16211 9061 9269 3", "6613 53621 2829 2665 2795 3553 52 2635 165 1677 80", "29 1595 3515 56129 1015 17501 282 20339 1258 957 1", "045 2193 5863 36859 238 8789 7511 7429 1209 1001 3", "289 3335 130 605 5365 4371 3731 2337 22591 29233 4", "433 55883 370 1353 258 1309 10373 7163 5687 1573 8", "06 5735 2185 3157 6235 42 5453 1599 4879 345 13547", " 3478 25897 5781 33497 62651 14993 574 20539 1426 ", "33511 18791 8987 1798 2849 4123 2015 22919 946 691", "9 2585 410 21199 8729 17329 27347 6929 182 5117 18", "86 10127 602 22661 7337 651 322 9503 15283 17081 1", "034 663 18377 455 23693 1118 222 58867 483 34891 6", "721 4921 1066 1463 20213 399 68 12617 3441 2397 20", "7 7267 16813 10105 174 30659 12673 28823 1421 1307", "9 31349 9889 10621 11609 1598 3995 2967 2109 6149 ", "75809 1887 38399 16031 3895 148 2091 10387 16523 7", "733 273 442 494 987 1311 1495 645 53909 230 17917 ", "33041 2093 285 3145 5957 16169 506 4773 190 20387 ", "51127 2378 4945 754 903 418 1833 470 2023 71299 12", "65 4199 2679 638 3741 5291 9367 22607 725 13243 44", "03 8569 171 66 805 54653 434 13889 28681 1551 1371", "7 1085 2294 33263 102 44321 595 5491 7843 3565 117", "3 31117 539 27683 78 22231 518 175 5217 430 3055 5", "719 186 4418 25051 43993 682 39997 646 14147 21793", " 429 117 24679 15463 13949 2365 5289 12121 1479 20", "35 12259 2387 8897 124 13981 255 29971 36593 21607", " 986 435 4991 6647 561 49321 11891 3034 14467 3866", "3 19499 555 5423 15457 2914 9361 2697 2639 11137 5", "405 4255 8041 1519 1334 34357 68479 6815 1885 9056", "9 2255 25327 962 20 741 2405 425 1083 27869 902 16", "337 2431 4669 1786 1978 44 10571 338 615 406 46483", " 1581 775 3219 16027 385 3619 20677 8671 6251 1972", "1 19393 3655 231 3913 507 11687 1645 24769 4495 10", "58 3182 4301 11803 1131 21197 4205 627 12857 29563", " 2542 7585 3999 18241"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 180533490;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long n = 614889782588491410;
    vector<string> special = {"2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 6 10 14 2", "2 26 34 38 46 58 62 74 82 86 94 15 21 33 39 51 57 ", "69 87 93 111 123 129 141 35 55 65 85 95 115 145 15", "5 185 205 215 235 77 91 119 133 161 203 217 259 28", "7 301 329 143 187 209 253 319 341 407 451 473 517 ", "221 247 299 377 403 481 533 559 611 323 391 493 52", "7 629 697 731 799 437 551 589 703 779 817 893 667 ", "713 851 943 989 1081 899 1073 1189 1247 1363 1147 ", "1271 1333 1457 1517 1591 1739 1763 1927 2021 11803", " 18377 2337 1479 1886 4945 4199 71299 6235 246 982", "3 4921 8569 14053 16813 31487 17719 1426 2109 258 ", "16967 22607 13243 2001 4495 3059 2553 4403 1598 35", "65 9635 9541 310 2849 5453 6923 3857 1885 645 2303", " 14663 36859 6721 658 2091 1833 1419 32759 68413 3", "995 34891 55883 2233 5945 10199 222 2542 1595 1616", "9 23693 741 7657 2255 3485 43993 4123 40549 26381 ", "2465 41971 5781 29971 387 1551 230 8177 20213 1912", "9 1443 22231 7567 11339 8897 627 638 12617 2737 14", "35 651 14467 20539 987 5217 12673 2193 3367 62651 ", "24679 418 186 12121 5117 1767 4301 238 9889 1798 8", "987 1677 7733 261 2666 13079 16027 1034 1547 3034 ", "17081 8029 2365 465 11687 20683 75 13717 345 561 3", "9997 5423 7429 28681 14147 29233 3619 16211 22591 ", "59737 52111 897 24863 5797 34481 266 1558 374 1061", "9 3895 2139 1702 2639 1394 1421 2635 102 4147 3689", " 8959 429 285 27683 442 2397 18241 4277 6919 325 1", "4993 2783 1066 3451 20387 6601 1118 114 36613 1189", "1 1505 518 42 16687 5957 1462 7337 3741 12259 9331", " 231 3441 273 5819 18491 470 1599 9139 2717 10127 ", "1653 2755 2494 5735 9061 705 874 65231 15181 1771 ", "195 435 130 867 2093 33497 29563 182 33041 4879 66", "5 16523 4371 1023 1222 8729 3731 5593 1311 4715 77", "7 370 935 17917 8041 969 6665 4089 24037 13547 229", "4 6149 322 38657 2697 946 4669 1265 38399 6355 100", "13 24149 814 7163 1105 7285 1634 3478 2405 2795 20", "677 2162 1786 609 31349 4807 10621 188 646 6409 17", "29 9361 25897 385 3553 3157 46139 1978 105 46483 1", "9393 962 11951 30229 53621 30659 3243 42253 615 60", "2 25327 1258 3219 3515 861 13889 595 9367 1054 606", "1 682 78 39527 6293 8695 423 6727 2378 15979 138 5", "289 8323 1015 833 21793 5681 2665 35131 16031 410 ", "1058 5863 1295 2015 1334 2967 27869 15283 6063 123", "41 174 44321 24769 124 1615 33263 53909 56129 1113", "7 1309 154 5291 1887 21607 13583 7667 11063 9503 4", "06 931 754 20 30 4773 28823 3854 110 17329 715 506", " 430 574 153 1085 282 2914 82861 1209 3813 1463 11", "31 2387 2146 10105 4551 5719 7585 1353 3655 3055 1", "221 2035 22103 902"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 188811356;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long n = 614889782588491410;
    vector<string> special = {"2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 6 10 14 2", "2 26 34 38 46 58 62 74 82 86 94 15 21 33 39 51 57 ", "69 87 93 111 123 129 141 35 55 65 85 95 115 145 15", "5 185 205 215 235 77 91 119 133 161 203 217 259 28", "7 301 329 143 187 209 253 319 341 407 451 473 517 ", "221 247 299 377 403 481 533 559 611 323 391 493 52", "7 629 697 731 799 437 551 589 703 779 817 893 667 ", "713 851 943 989 1081 899 1073 1189 1247 1363 1147 ", "1271 1333 1457 1517 1591 1739 1763 1927 2021 715 1", "10 6251 6601 16169 182 1767 10879 5203 24679 13717", " 6235 39997 2378 4551 2553 1551 1419 8323 2185 135", "47 82861 1677 3335 465 1102 322 310 124 15457 1221", " 903 31117 2945 602 29971 1479 4961 3567 4945 2021", "3 10105 4433 1118 8729 13489 11687 2967 2233 4301 ", "370 3478 3055 2162 36613 4089 16687 8029 574 114 2", "2231 2883 20387 494 19499 1105 3211 238 3553 2015 ", "3157 6061 11137 13949 38657 806 5957 24149 722 540", "5 2405 25327 1978 1495 10621 4991 44321 2294 5117 ", "555 3854 14053 20539 13889 6721 8695 33263 6149 68", "2 506 2527 16211 646 58609 7337 9331 1173 10373 38", "399 3689 2585 5945 26273 3441 3999 3913 27047 3741", " 6877 2465 16813 195 30229 6409 186 4277 10199 321", "9 5681 2821 34481 805 7585 1599 12341 6665 4879 56", "1 2542 6851 102 1034 19721 2261 1054 3182 62651 83", "3 2666 266 40549 12427 3243 222 49321 1426 15283 7", "05 190 651 3619 3311 8815 6815 1045 20677 3995 412", "3 8959 71299 14993 609 7733 2009 2093 174 17917 36", "55 4465 10693 21793 2635 11891 1505 28681 7163 328", "9 255 5719 1309 14147 1887 53909 1295 957 759 9367", " 3895 18241 3145 13243 2001 17329 105 434 3526 211", "99 12259 9503 1645 8041 2717 43993 658 68 9269 327", "59 5239 290 7955 2255 663 26071 946 3034 5291 483 ", "2679 55883 1653 470 51127 8789 34357 12617 27347 1", "1609 5365 3485 2914 285 357 42 2639 4773 29233 586", "3 3451 1595 4715 1705 1443 23171 282 50 1581 1547 ", "1222 47027 4199 25897 138 25051 1435 1015 6063 100", "1 9823 3367 1859 207 2146 4255 28823 1786 29563 41", "0 20339 741 2849 5083 2035 52 33497 1334 27683 123", "5 4147 56129 1353 2365 18377 14467 4669 9635 20683", " 18791 4921 1131 24769 16031 22919 8303 4805 5593 ", "21197 68479 2193 33041 1702 12173 902 1406 7843 46", "139 17719 9139 2795 1178 969 230 3857 754 31939 61", "5 72283 154 935 8671 8987 21607 36859 3971 5289 54", "23 1558 598 1955 2431 1805 2829 188 5735 25789 102", "5 7567 12943 962 2494 231 65231 4205 1922 6627 273", "7 430 54653 279 7285 2726 1463 2873 10619 10013 23", "97 18491 5819 13079 7667 1085 22607 2023 62197 188", "6 7511 3059 1771 273 2091 518"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 181557139;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long n = 999999999999999989;
    vector<string> special = {"999999937 999999929 999999893 999999883 999999797 ", "999999761 999999757 999999751 999999739 999999733 ", "999999677 999999667 999999613 999999607 999999599 ", "999999587 999999541 999999527 999999503 999999491 ", "999999487 999999433 999999391 999999353 999999337 ", "999999323 999999229 999999223 999999197 999999193 ", "999999191 999999181 999999163 999999151 999999137 ", "999999131 999999113 999999107 999999103 999999067 ", "999999059 999999043 999999029 999999017 999999001 ", "999998981 999998971 999998959 999998957 999998929 ", "999998921 999998917 999998903 999998869 999998863 ", "999998843 999998801 999998789 999998777 999998693 ", "999998689 999998687 999998683 999998663 999998653 ", "999998641 999998639 999998627 999998621 999998617 ", "999998609 999998563 999998537 999998533 999998509 ", "999998507 999998501 999998459 999998423 999998369 ", "999998339 999998309 999998269 999998261 999998243 ", "999998203 999998183 999998173 999998147 999998143 ", "999998141 999998137 999998119 999998107 999998081 ", "999998059 999998023 999998017 999998003 999997967 ", "999997891 999997871 999997811 999997793 999997787 ", "999997771 999997769 999997717 999997697 999997679 ", "999997673 999997643 999997639 999997627 999997589 ", "999997577 999997571 999997567 999997561 999997543 ", "999997489 999997457 999997403 999997357 999997331 ", "999997309 999997301 999997279 999997267 999997249 ", "999997241 999997237 999997181 999997133 999997099 ", "999997081 999997067 999997049 999997021 999996989 ", "999996983 999996919 999996913 999996901 999996827 ", "999996779 999996749 999996727 999996709 999996707 ", "999996689 999996677 999996671 999996649 999996643 ", "999996611 999996587 999996541 999996493 999996469 ", "999996407 999996383 999996359 999996341 999996329 ", "999996317 999996311 999996307 999996301 999996269 ", "999996259 999996247 999996227 999996223 999996199 ", "999996181 999996149 999996131 999996113 999996091 ", "999996073 999996071 999996043 999996037 999996031 ", "999996029 999996007 999995993 999995959 999995921 ", "999995911 999995903 999995819 999995813 999995809 ", "999995803 999995749 999995741 999995713 999995701 ", "999995681 999995677 999995663 999995651 999995629 ", "999995627 999995621 999995611 999995599 999995567 ", "999995561 999995531 999995431 999995419 999995413 ", "999995393 999995377 999995341 999995291 999995273 ", "999995261 999995257 999995239 999995141 999995111 ", "999995107 999995093 999994987 999994979 999994973 ", "999994951 999994913 999994903 999994883 999994867 ", "999994861 999994843 999994837 999994823 999994813 ", "999994781 999994771 999994763 999994753 999994747 ", "999994741 999994703 999994693 999994691 999994651"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long n = 999999294000057009;
    vector<string> special = {"999999907 999999387 107747 9281 333333129 3 111111", "043 9 1555209 643 518403 1929 172801 5787"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long n = 999998520000546759;
    vector<string> special = {"999999289 999999231 267451 3739 333333077 3 142857", "033 7 90909021 11 47619011 21 30303007 33 12987003", " 77 4329001 231 590667 1693 391083 2557 196889 507", "9 130361 7671 84381 11851 55869 17899 53697 18623 ", "35553 28127"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 104;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long n = 999998947000084920;
    vector<string> special = {"999999912 999999035 499999956 2 333333304 3 249999", "978 4 166666652 6 124999989 8 83333326 12 41666663", " 24 413736 2417 206868 4834 137912 7251 103434 966", "8 68956 14502 58008 17239 51717 19336 34478 29004 ", "199999807 5 142857005 7 28571401 35"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long n = 999999999000000000;
    vector<string> special = {"1000000000 999999999"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long n = 999999998000000000;
    vector<string> special = {"1000000000 999999998"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long n = 1000000000000000000;
    vector<string> special = {"390625 9765625 262144"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long n = 12;
    vector<string> special = {"4 2 5 6 3"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long n = 7420738134810;
    vector<string> special = {"435 625199055 4199 33263 17 222870 284870433 72093", "2379 7 11 31 247110827 23 1771 81809 851968487 13 ", "476379795 1001 5 435274114 38264554 7429 239906525", " 3 227183706 887045414 606786670 3795 797605175 29", " 30 747186719 19 2 562347843 74 2294 588002688 743", "6429 703 591740547 36657492 37 444178205 1002001 2", "17626404"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 110;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long n = 54765047434897800;
    vector<string> special = {"8 27 25 7 11 13 17 19 23 29 31 37 41 43 47 ", "216 200 56 88 104 136 152 184 232 248", " 296 328 344 376 675 189 297 351 459 513", " 621 783 837 999 1107 1161 1269 175 275 325", " 425 475 575 725 775 925 1025 1075 1175 77", " 91 119 133 161 203 217 259 287 301 329", " 143 187 209 253 319 341 407 451 473 517", " 221 247 299 377 403 481 533 559 611 323", " 391 493 527 629 697 731 799 437 551 589", " 703 779 817 893 667 713 851 943 989 1081", " 899 1073 1189 1247 1363 1147 1271 1333 1457 1517", " 1591 1739 1763 1927 2021 5400 1512 2376", " 2808 3672 4104 4968 6264 6696 7992 8856", " 9288 10152 1400 2200 2600 3400 3800 4600", " 5800 6200 7400 8200 8600 9400 616 728", " 952 1064 1288 1624 1736 2072 2296 2408", " 2632 1144 1496 1672 2024 2552 2728 3256", " 3608 3784 4136 1768 1976 2392 3016 3224", " 3848 4264 4472 4888 2584 3128 3944 4216", " 5032 5576 5848 6392 3496 4408 4712 5624", " 6232 6536 7144 5336 5704 6808 7544 7912", " 8648 7192 8584 9512 9976 10904 9176 10168", " 10664 11656 12136 12728 13912 14104 15416 16168", " 4725 7425 8775 11475 12825 15525 19575 20925", " 24975 27675 29025 31725 2079 2457 3213 3591", " 4347 5481 5859 6993 7749 8127 8883 3861", " 5049 5643 6831 8613 9207 10989 12177 12771", " 13959 5967 6669 8073 10179 10881 12987 14391", " 15093 16497 8721 10557 13311 14229 16983 18819", " 19737 21573 11799 14877 15903 18981 21033 22059", " 24111 18009 19251 22977 25461 26703 29187 24273", " 28971 32103 33669 36801 30969 34317 35991 39339", " 40959 42957 46953 47601 52029 54567 1925 2275", " 2975 3325 4025 5075 5425 6475 7175 7525", " 8225 3575 4675 5225 6325 7975 8525 10175", " 11275 11825 12925 5525 6175 7475 9425 10075", " 12025 13325 13975 15275 8075 9775 12325 13175", " 15725 17425 18275 19975 10925 13775 14725 17575", " 19475 20425 22325 16675 17825 21275 23575 24725", " 27025 22475 26825 29725 31175 34075 28675 31775", " 33325 36425 37925 39775 43475 44075 48175 50525", " 1001 1309 1463 1771 2233 2387 2849 3157", " 3311 3619 1547 1729 2093 2639 2821 3367", " 3731 3913 4277 2261 2737 3451 3689 4403", " 4879 5117 5593 3059 3857 4123 4921 5453", " 5719 6251 4669 4991 5957 6601 6923 7567", " 6293 7511 8323 8729 9541 8029 8897 9331", " 10199 10619 11137 12173 12341 13489 14147 2431", " 2717 3289 4147 4433 5291 5863 6149 6721"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 5213668;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long n = 999999999999999989;
    vector<string> special = {"3"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long n = 614889782588491410;
    vector<string> special = {"1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 74965 2", "7962 22678 2046 48246 53669 55986 11067 71079 3972", "9 74037 570 230 946 3666 99123 483 50439 1155 4530", "5 47386 41078 70499 41470 231 7854 43890 8806 1513", "4 72930 1763 2945 24871 28290 10101 16359 6923 832", "3 1271 36613 18662 77441 60697 79170 51870 322 493", "5 2665 551 8815 6970 258 73226 37037 26390 9546 67", "65 27370 4730 62651 41943 26978 42 49335 84065 318", "2 473 13981 43401 51170 56166 114 41354 20445 2146", " 2162 20213 70889 6851 3570 33497 1235 18753 85690", " 11985 1410 74 98890 4641 3999 3255 77367 44330 55", "10 10545 1914 27417 66082 3135 88711 60762 3162 20", "769 3655 154 67773 51765 299 33411 35853 37961 295", "8 5698 3770 55883 36685 48174 12617 30659 13398 52", "026 4305 2755 91553 22386 13485 81719 39990 5658 1", "55 75905 30381 34595 95030 82302 19646 14993 759 5", "9455 34017 5005 658 17081 82041 21197 22287 27094 ", "23370 16422 6293 32890 111 23865 4070 87505 18354 ", "5394 25234 7395 44485 92742 16031 19285 32054 2451", "8 55 84318 54653 67983 34 17710 406 6578 68761 678", "21 1634 5797 86086 1443 36754 4862 76670 399 310 2", "706 2337 45066 5313 555 63365 5358 1462 2737 1218 ", "16523 67735 682 435 1265 46342 32395 57239 5270 41", "990 62909 7293 8510 8398 2193 22274 20910 41151 35", "15 627 33605 13243 56287 87945 2795 54901 16530 17", "043 64515 858 7826 1015 3059 76415 4465 13702 6119", "4 40426 49910 15785 3055 7590 3441 11594 89726 584", "35 21385 24123 31161 1209 5434 6061 21242 1131 730", "38 14421 63591 21607 4147 13330 1334 46046 1190 22", "533 54094 81141 29785 9165 52762 66521 19778 6090 ", "10619 5365 77285 7134 24531 329 3741 40641 34086 4", "9938 935 323 2553 51578 7429 38038 15810 38571 145", " 3094 27993 61845 15015 26158 69905 47705 67022 86", " 49358 874 79534 8855 34034 4945 27683 17917 38665", " 2378 1794 7735 123 12586 23001 24605 46835 12710 ", "110 30362 29315 4930 6699 715 4845 65274 1333 7937", "3 33558 17794 17871 79994 10857 15181 2697 222 950", "3 35 30 15170 138 527 3102 2185 8990 69782 4773 52", "910 20746 26565 13110 7905 65231 341 54131 50995 4", "7058 49665 89466 12210 36894 14105 84882 3289 5785", "5 1066 26445 667 2530 75153 6486 17290 4921 17094 ", "24955 559 1955 29393 27183 54834 9758 4810 645 627", "0 43993 798 38998 7482 29670 20683 85 94094 67830 ", "1995 79458 10810 20398 61161 27265 1927 19866 1118", " 2442 4199 2210 20202 75361 56823 55315 33915 4089", "0 98277 1833 45182 18879 19803 17390 506 2805 5593", "0 2618 377 22 33626 58938 16095 6355 10010 62031 1", "33 11739 98371 46690 58630 2666 25707 8569 16770 4", "4979 71630 54366 7238 49210 83886 82 12441 33670 6", "3597 2914 42441 1247 66045 190 18538 9823 11803"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 2693518;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long n = 300000132000007770;
    vector<string> special = {"2 3 5 100000007 100000037"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long n = 999999866000004473;
    vector<string> special = {"999999937", " 999999929", " 1", " 999999129 999999919 999999928 999999927"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long n = 614889782588491410;
    vector<string> special = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19", "20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35", "36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51", "52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67", "68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83", "84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99", "100 101 102 103 104 105 106 107 108 109 110 111", "112 113 114 115 116 117 118 119 120 121 122 123", "124 125 126 127 128 129 130 131 132 133 134 135", "136 137 138 139 140 141 142 143 144 145 146 147", "148 149 150 151 152 153 154 155 156 157 158 159", "160 161 162 163 164 165 166 167 168 169 170 171", "172 173 174 175 176 177 178 179 180 181 182 183", "184 185 186 187 188 189 190 191 192 193 194 195", "196 197 198 199 200 201 202 203 204 205 206 207", "208 209 210 211 212 213 214 215 216 217 218 219", "220 221 222 223 224 225 226 227 228 229 230 231", "232 233 234 235 236 237 238 239 240 241 242 243", "244 245 246 247 248 249 250 251 252 253 254 255", "256 257 258 259 260 261 262 263 264 265 266 267", "268 269 270 271 272 273 274 275 276 277 278 279", "280 281 282 283 284 285 286 287 288 289 290 291", "292 293 294 295 296 297 298 299 300 301 302 303", "304 305 306 307 308 309 310 311 312 313 314 315", "316 317 318 319 320 321 322 323 324 325 326 327", "328 329 330 331 332 333 334 335 336 337 338 339", "340 341 342 343 344 345 346 347 348 349 350 351", "352 353 354 355 356 357 358 359 360 361 362 363", "364 365 366 367 368 369 370 371 372 373 374 375", "376 377 378 379 380 381 382 383 384 385 386 387", "388 389 390 391 392 393 394 395 396 397 398 399", "400 401 402 403 404 405 406 407 408 409 410 411", "412 413 414 415 416 417 418 419 420 421 422 423", "424 425 426 427 428 429 430 431 432 433 434 435", "436 437 438 439 440 441 442 443 444 445 446 447", "448 449 450 451 452 453 454 455 456 457 458 459", "460 461 462 463 464 465 466 467 468 469 470 471", "472 473 474 475 476 477 478 479 480 481 482 483", "484 485 486 487 488 489 490 491 492 493 494 495", "496 497 498 499 500"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 589516;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long n = 614889782588491410;
    vector<string> special = {"15181 286 2542 391 1978 16813 64343 3335 6851 266 ", "299 1786 56129 7567 15283 16211 70 102 30659 1333 ", "11063 22919 1222 851 22231 2193 363038161 943 2956", "3 33497 4805 3311 39997 629 903 437 4042 124 4773 ", "29233 595 451 48749 6929 6919 9823 47 1147 58 3275", "9 493 2821 145 410 93 10199 598 1118 10373 14053 3", "9527 2021 589 9541 46 287 238 17081 12259 23 20677", " 3619 7285 35131 203 49321 34891 2233 19129 285 10", "23 1581 2914 11137 44321 7511 24769 138 1034 2738 ", "74 6409 11339 245 20213 222 715544351 22607 143 55", "5 21 4945 323 13949 1435 21197 1309 154 221 779 13", "34 247 3553 209 36613 434 1595 28577 2365 1178 39 ", "10013 25897 861 27347 494 11 341 23693 4403 41 149", "5 13547 5681 2294 2737 9635 14467 6721 575 129 451", "67 4551 33263 1419 517 14 22591 6 782 8789 155 226", "1 19 21793 20387 1798 4477 481 1105 1081 38399 872", "9 27683 15457 10 7429 28717 230 3913 190 10879 949", "87 8569 759 9269 1015 2091 8323 25051 5 2829 1189 ", "119 1927 10127 13489 1363 3995 12341 3145 13 47027", " 9367 12673 470 3055 64061 1000000000 30 170 986 7", "657 5291 1547 16169 188 3157 9061 15059 63 1443 33", " 1739 46483 805 559 68413 2162 385 5945 705 17501 ", "946 444850787 253 297326231 2 54653 896880645 69 3", "515 55 5405 174 2015 1045 902 11803 82 377 16523 6", "5231 345 561 17 82861 141 646 1295 4495 8815 483 2", "146 1955 30229 1805 217 2849 231 235 989 24863 131", "1 1677 43 37 1591 21689 31433 5117 7163 2755 301 2", "666 5453 76 1551 1517 74777 7955 38657 533 42 5957", " 611 14911 51127 12617 10105 35 8041 58609 539 34 ", "406 38 465 3441 111 28681 62 2585 5365 1505 65 374", "1 3182 609 12121 3655 627 22661 319 1463 94 26273 ", "12173 418 25789 95 1235 185 3854 33041 5781 16027 ", "25327 282 814 259 6061 53909 2795 10619 3211 43993", " 4199 1265 13717 8695 893 2679 10621 713 205 2431 ", "8671 931 473 697 46139 1221 22 11687 19499 806 913", "9 3179 13981 19343 3565 518 848371248 14993 13243 ", "3451 26011 36859 1833 435 2255 31349 720174485 120", "9 1558 8029 6063 161 374 2093 24679 6251 6355 26 6", "149 6815 34357 5797 3895 1073 2494 6665 3059 12114", "0116 407 187 703 29 5687 574 255 964959943 3813 14", "06 357 817 1886 5593 775 115 87 91 2527 862162464 ", "6479 2726 799 51 6601 1885 17329 899 1085 7667 145", "7 85 18491 16031 6923 9331 3 17917 551 86 1763 106", "93 403 133 15 105 1705 8177 2639 18791 24149 2967 ", "425 57 186 2883 731 645 1479 31 4123 847 5289 5588", "3 1599 42253 3243 1247 36593 28 22103 21199 1887 1", "598 329 18941 1001 123 1421 77 658 13889 2109 4807", " 1426 2873 429 17719 13079 7 2783 66 14663 8897 12", "71 667 20539 21607 1353 6293 322 215 5217 246 527"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 167980441;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long n = 994651672331116800;
    vector<string> special = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", " 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 3", "8 39 40 41 42 44 45 46 48 49 50 51 52 54 55 56 57 ", "58 60 62 63 64 65 66 68 69 70 72 75 76 77 78 80 81", " 82 84 85 87 88 90 91 92 93 95 96 98 99 100 102 10", "4 105 108 110 112 114 115 116 117 119 120 123 124 ", "126 128 130 132 133 135 136 138 140 143 144 145 14", "7 150 152 153 154 155 156 160 161 162 164 165 168 ", "170 171 174 175 176 180 182 184 186 187 189 190 19", "2 195 196 198 200 203 204 205 207 208 209 210 216 ", "217 220 221 224 225 228 230 231 232 234 238 240 24", "5 246 247 248 252 253 255 256 260 261 264 266 270 ", "272 273 275 276 279 280 285 286 287 288 290 294 29", "7 299 300 304 306 308 310 312 315 319 320 322 323 ", "324 325 328 330 336 340 341 342 345 348 350 351 35", "2 357 360 364 368 369 372 374 377 378 380 384 385 ", "390 391 392 396 399 400 403 405 406 408 410 414 41", "6 418 420 425 429 432 434 435 437 440 441 442 448 ", "450 451 455 456 459 460 462 464 465 468 475 476 48", "0 483 490 492 493 494 495 496 504 506 510 513 520 ", "522 525 527 528 532 533 539 540 544 546 550 551 55", "2 558 560 561 567 570 572 574 575 576 580 585 588 ", "589 594 595 598 600 608 609 612 615 616 620 621 62", "4 627 630 637 638 640 644 646 648 650 651 656 660 ", "663 665 667 672 675 680 682 684 690 693 696 697 70", "0 702 704 713 714 715 720 725 728 735 736 738 741 ", "744 748 754 756 759 760 765 768 770 775 779 780 78", "2 783 784 792 798 800 805 806 810 812 816 819 820 ", "825 828 832 833 836 837 840 850 855 858 861 864 86", "8 870 874 880 882 884 891 896 897 899 900 902 910 ", "912 918 920 924 928 930 931 935 936 943 945 950 95", "2 957 960 966 969 975 980 984 986 988 990 992 1001", " 1008 1012 1015 1020 1023 1025 1026 1035 1040 1044", " 1045 1050 1053 1054 1056 1064 1066 1071 1078 1080", " 1085 1088 1092 1100 1102 1104 1105 1107 1116 1120", " 1122 1127 1131 1134 1140 1144 1148 1150 1152 1155", " 1160 1170 1173 1176 1178 1188 1189 1190 1196 1197", " 1200 1209 1216 1218 1224 1225 1230 1232 1235 1240", " 1242 1248 1254 1260 1265 1271 1274 1275 1276 1280", " 1287 1288 1292 1296 1300 1302 1305"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 22104;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long n = 13082761331670030;
    vector<string> special = {"1 2 3 5 6 7 10 11 13 14 15 17 19 21 22 23 26 29 30", " 31 33 34 35 37 38 39 41 42 43 46 51 55 57 58 62 6", "5 66 69 70 74 77 78 82 85 86 87 91 93 95 102 105 1", "10 111 114 115 119 123 129 130 133 138 143 145 154", " 155 161 165 170 174 182 185 186 187 190 195 203 2", "05 209 210 215 217 221 222 230 231 238 246 247 253", " 255 258 259 266 273 285 286 287 290 299 301 310 3", "19 322 323 330 341 345 357 370 374 377 385 390 391", " 399 403 406 407 410 418 429 430 434 435 437 442 4", "51 455 462 465 473 481 483 493 494 506 510 518 527", " 533 546 551 555 559 561 570 574 589 595 598 602 6", "09 615 627 629 638 645 646 651 663 665 667 682 690", " 697 703 713 714 715 731 741 754 759 770 777 779 7", "82 798 805 806 814 817 851 858 861 870 874 897 899", " 902 903 910 930 935 943 946 957 962 966 969 986 9", "89 1001 1015 1023 1045 1054 1066 1073 1085 1102 11", "05 1110 1118 1122 1131 1147 1155 1173 1178 1189 11", "90 1209 1218 1221 1230 1235 1247 1254 1258 1265 12", "71 1290 1295 1302 1309 1311 1326 1330 1333 1334 13", "53 1365 1394 1406 1419 1426 1430 1435 1443 1462 14", "63 1479 1482 1495 1505 1517 1518 1547 1554 1558 15", "81 1591 1595 1599 1610 1615 1634 1653 1677 1702 17", "05 1722 1729 1763 1767 1771 1785 1794 1798 1806 18", "70 1885 1886 1887 1914 1938 1955 1978 1995 2001 20", "02 2015 2030 2035 2046 2090 2091 2093 2109 2139 21", "45 2146 2170 2185 2193 2210 2233 2255 2261 2262 22", "94 2310 2337 2346 2365 2378 2387 2405 2415 2418 24", "31 2442 2451 2465 2470 2494 2530 2542 2553 2590 26", "18 2622 2635 2639 2665 2666 2697 2706 2717 2730 27", "37 2755 2795 2805 2821 2829 2838 2849 2870 2886 29", "26 2945 2958 2967 2990 3003 3010 3034 3045 3059 30", "94 3135 3145 3157 3162 3182 3190 3198 3219 3230"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 32942748;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long n = 897612484786617600;
    vector<string> special = {"1 2 3 5 6 7 10 11 13 14 15 17 19 21 22 23 25 26 29", " 30 31 33 34 35 37 38 39 42 46 49 51 55 57 58 62 6", "5 66 69 70 74 77 78 81 85 87 91 93 95 102 105 110 ", "111 114 115 119 130 133 138 143 145 154 155 161 16", "5 170 174 182 185 186 187 190 195 203 209 210 217 ", "221 222 230 231 238 247 253 255 256 259 266 273 28", "5 286 290 299 310 319 322 323 330 341 345 357 370 ", "374 377 385 390 391 399 403 406 407 418 429 434 43", "5 437 442 455 465 481 483 493 494 506 510 518 527 ", "546 551 555 561 570 589 595 598 609 627 629 638 64", "6 651 663 665 667 682 703 713 715 741 754 759 777 ", "782 805 806 814 851 870 874 897 899 930 935 957 96", "2 966 969 986 1001 1015 1023 1045 1054 1073 1085 1", "102 1105 1131 1147 1173 1178 1190 1209 1221 1235 1", "254 1258 1265 1295 1302 1309 1311 1334 1406 1426 1", "443 1463 1479 1495 1547 1554 1581 1595 1610 1615 1", "653 1702 1705 1729 1767 1771 1798 1870 1885 1887 1", "914 1938 1955 1995 2001 2002 2015 2035 2046 2093 2", "109 2139 2146 2185 2210 2233 2261 2294 2387 2405 2", "415 2431 2442 2465 2553 2635 2639 2697 2717 2737 2", "755 2805 2821 2849 2945 2958 3059 3145 3219 3230 3", "289 3335 3367 3441 3451 3458 3515 3553 3565 3689 3", "795 3857 3885 4030 4123 4147 4199 4255 4278 4301 4", "389 4403 4433 4485 4495 4522 4641 4669 4807 4845 4", "921 4930 4991 5005 5083 5106 5270 5291 5313 5365 5", "423 5681 5735 5797 5890 5957 6045 6061 6279 6293 6", "409 6438 6479 6783 6851 6902 6919 7106 7161 7163 7", "315 7337 7429 7511 7657 7733 7735 7843 8029 8177 8", "398 8510 8602 8645 8671 9139 9177 9269 9338 9361 9", "367 9867 9889 10013 10465 10582 10695 10730 10846 ", "11063 11165 11305 11339 11362 11594 11687 11803 11", "951 12121 12122 12369 12441 12617 12673 12903 1354", "7 13585 13949 14105 14467 14858 14911 15015 15283 ", "15295 16058 16169 17017 17043 17081 18241 18278 18", "538 19227 19437 19499 20387 20553 20615 20677 2148", "9 21505 21793 22126 22287 23345 23606 23902 24035 ", "24531 24679 24871 26381 27094 27417 27807 27898 29", "822 31465 32045 32338 32395 33263 34017 34255 3459", "5 35815 35853 36363 36890 37758 38285 40774 41847 ", "43401 44330 45849 45942 46189 46345 46805 46835 47", "957 49210 49358 50141 51243 52026 53599 54131 5472", "3 56695 57239 60697 61161 62031 63085 63365 64515 ", "64883 66526 67735 68510 72335 77441 78793 79143 80", "845 81809 83657 84227 85405 86802 87087 96577 9749", "5 97643 99789 103037 104377 107198 121771 124729 1", "36493 139403 144739 152551 155363 157573 164021 16", "8113 172753 184667 200651 210197 222053 227447 230", "299 232841 265031 271469 279565 283309 320943 3429", "53 346579 351509 352222 365893 370481 432419 44847", "7 631997 1267435 1315237 2426053"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 6356;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long n = 614889782588491410;
    vector<string> special = {"2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 4 6 10 14", " 22 26 34 38 46 58 62 74 82 86 94 9 15 21 33 39 51", " 57 69 87 93 111 123 129 141 25 35 55 65 85 95 115", " 145 155 185 205 215 235 49 77 91 119 133 161 203 ", "217 259 287 301 329 121 143 187 209 253 319 341 40", "7 451 473 517 169 221 247 299 377 403 481 533 559 ", "611 289 323 391 493 527 629 697 731 799 361 437 55", "1 589 703 779 817 893 529 667 713 851 943 989 1081", " 841 899 1073 1189 1247 1363 961 1147 1271 1333 14", "57 1369 1517 1591 1739 1681 1763 1927 1849 2021 22", "09 8 12 20 28 44 52 68 76 92 116 124 148 164 172 1", "88 18 30 42 66 78 102 114 138 174 186 222 246 258 ", "282 50 70 110 130 170 190 230 290 310 370 410 430 ", "470 98 154 182 238 266 322 406 434 518 574 602 658", " 242 286 374 418 506 638 682 814 902 946 1034 338 ", "442 494 598 754 806 962 1066 1118 1222 578 646 782", " 986 1054 1258 1394 1462 1598 722 874 1102 1178 14", "06 1558 1634 1786 1058 1334 1426 1702 1886 1978 21", "62 1682 1798 2146 2378 2494 2726 1922 2294 2542 26", "66 2914 2738 3034 3182 3478 3362 3526 3854 3698 40", "42 4418 27 45 63 99 117 153 171 207 261 279 333 36", "9 387 423 75 105 165 195 255 285 345 435 465 555 6", "15 645 705 147 231 273 357 399 483 609 651 777 861", " 903 987 363 429 561 627 759 957 1023 1221 1353 14", "19 1551 507 663 741 897 1131 1209 1443 1599 1677 1", "833 867 969 1173 1479 1581 1887 2091 2193 2397 108", "3 1311 1653 1767 2109 2337 2451 2679 1587 2001 213", "9 2553 2829 2967 3243 2523 2697 3219 3567 3741 408", "9 2883 3441 3813 3999 4371 4107 4551 4773 5217 504", "3 5289 5781 5547 6063 6627 125 175 275 325 425 475", " 575 725 775 925 1025 1075 1175 245 385 455 595 66", "5 805 1015 1085 1295 1435 1505 1645 605 715 935 10", "45 1265 1595 1705 2035 2255 2365 2585 845 1105 123", "5 1495 1885 2015 2405 2665 2795 3055 1445 1615 195", "5 2465 2635 3145 3485 3655 3995 1805 2185 2755 294", "5 3515 3895 4085 4465 2645 3335 3565 4255 4715 494", "5 5405 4205 4495 5365 5945 6235 6815 4805 5735 635", "5 6665 7285 6845 7585 7955 8695 8405 8815 9635 924", "5 10105 11045 343 539 637 833 931 1127 1421 1519 1", "813 2009 2107 2303 847 1001 1309 1463 1771 2233 23", "87 2849 3157 3311 3619 1183 1547 1729 2093 2639 28", "21 3367 3731 3913 4277 2023 2261 2737 3451 3689 44", "03 4879 5117 5593 2527 3059 3857 4123 4921 5453 57", "19"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 103102904;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long n = 614889782588491410;
    vector<string> special = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", " 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 3", "7 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 ", "54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70", " 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 8", "7 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 ", "103 104 105 106 107 108 109 110 111 112 113 114 11", "5 116 117 118 119 120 121 122 123 124 125 126 127 ", "128 129 130 131 132 133 134 135 136 137 138 139 14", "0 141 142 143 144 145 146 147 148 149 150 151 152 ", "153 154 155 156 157 158 159 160 161 162 163 164 16", "5 166 167 168 169 170 171 172 173 174 175 176 177 ", "178 179 180 181 182 183 184 185 186 187 188 189 19", "0 191 192 193 194 195 196 197 198 199 200 201 202 ", "203 204 205 206 207 208 209 210 211 212 213 214 21", "5 216 217 218 219 220 221 222 223 224 225 226 227 ", "228 229 230 231 232 233 234 235 236 237 238 239 24", "0 241 242 243 244 245 246 247 248 249 250 251 252 ", "253 254 255 256 257 258 259 260 261 262 263 264 26", "5 266 267 268 269 270 271 272 273 274 275 276 277 ", "278 279 280 281 282 283 284 285 286 287 288 289 29", "0 291 292 293 294 295 296 297 298 299 300 301 302 ", "303 304 305 306 307 308 309 310 311 312 313 314 31", "5 316 317 318 319 320 321 322 323 324 325 326 327 ", "328 329 330 331 332 333 334 335 336 337 338 339 34", "0 341 342 343 344 345 346 347 348 349 350 351 352 ", "353 354 355 356 357 358 359 360 361 362 363 364 36", "5 366 367 368 369 370 371 372 373 374 375 376 377 ", "378 379 380 381 382 383 384 385 386 387 388 389 39", "0 391 392 393 394 395 396 397 398 399 400 401 402 ", "403 404 405 406 407 408 409 410 411 412 413 414 41", "5 416 417 418 419 420 421 422 423 424 425 426 427 ", "428 429 430 431 432 433 434 435 436 437 438 439 44", "0 441 442 443 444 445 446 447 448 449 450 451 452 ", "453 454 455 456 457 458 459 460 461 462 463 464 46", "5 466 467 468 469 470 471 472 473 474 475 476 477 ", "478 479 480 481 482 483 484 485 486 487 488 489 49", "0 491 492 493 494 495 496 497 498 499 500"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 1189852;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long n = 614889782588491410;
    vector<string> special = {"1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 2032859", "4 23757942 38544935 2668666 130158119 458948490 65", "56030 41825355 799476205 110266845 645611890 87684", "4870 27805778 113503390 117412438 122800002 15015 ", "17922658 8463 37182145 1254190 293531095 249143466", " 4791705 76114038 20557810 294859290 429089518 715", "8382 45242610 64762945 15080870 430063062 97327538", " 23865 99533742 83284817 23262785 567358 852760090", " 1105401 37787295 4064043 35368158 27180335 320661", "055 3720990 277239417 31941470 110618354 247885755", " 109873686 29368010 81198579 324597 219443 1758270", " 21487898 141222081 407537 395365091 729956535 396", "364605 312717414 26407381 207619555 144723810 4055", "15671 604279 114322637 140645505 15372786 2497110 ", "625045033 861290430 20872362 529787830 711442095 9", "94231810 334795314 239139510 21514955 67323165 978", "02210 36063885 43541267 35527030 190945678 2168657", "70 927242085 107251599 21477885 17543365 196051310", " 76280295 76842118 93310 585554970 534320774 73173", "10 38665990 680046290 93763670 58397735 26424307 1", "84848378 9197571 44350845 190285095 194543223 6784", "0773 98025655 800597490 8542391 3591505 50115065 5", "36257995 357972230 946069465 811450885 30355170 15", "351 613791409 495607970 870028159 4165238 94101027", " 40184430 44618574 595973171 16567265 235062553 83", "2370 5199909 868227230 652310 67756390 607759061 1", "873495 1794 233778831 484572165 178710 597869162 8", "2501230 715320815 57218595 206976770 477721959 419", "014011 11663967 27121094 696194590 716703 78686790", " 2329210 80925845 112358818 687610 393255863 36368", "7753 22011 10086811 232874670 3515 505706565 15495", "0070 62871627 61129365 23925902 53553430 5453 3351", "24570 50227870 117817546 42010995 100531574 101334", "961 68977805 169145574 18546717 25935 165889570 81", "510 29986 665 15564010 557992190 22777755 28129101", " 192249410 50265787 121266110 1995 380570190 57006", "1294 60665605 3587705 97592495 24680073 75670 2691", "49174 80059749 64604930 202641270 196534195 506345", " 155823206 394344335 132861443 153448295 278910255", " 33764115 6094011 335385435 56448210 195483210 649", "2486 29938870 2726295 77735631 81998565 221190366 ", "345037099 118978310 61786670 65596930 343166187 51", "3857674 670770870 36895859 3059133 35869834 361053", "770 1767 640049865 74717006 181502706 567987 22279", "18 142084470 179208458 566036471 130668681 2545410", " 216616530 60500902 16858947 181996815 28419478 33", "0625230 781535645 167555 58815393 35466046 4402490", " 1450955 368005911 1050985 793730 25686910 7927292", "1 37181670 29671495 509517965 119568423 57998985 2", "4006710 741702962 283267770 91435695 158545842 166"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 1646;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long n = 1000000000000000000;
    vector<string> special = {"3 5 7 11 13 17 19 23 29 31 37 41 43 47", " 53 59 61 67 71 73 79 83 89 97 101 103", " 107 109 113 127 131 137 139 149 151", " 157 163 167 173 179 181 191 193 197", " 199 211 223 227 229 233 239 241 251", " 257 263 269 271 277 281 283 293 307", " 311 313 317 331 337 347 349 353 359", " 367 373 379 383 389 397 401 409 419", " 421 431 433 439 443 449 457 461 463", " 467 479 487 491 499 503 509 521 523", " 541 547 557 563 569 571 577 587 593", " 599 601 607 613 617 619 631 641 643", " 647 653 659 661 673 677 683 691 701", " 709 719 727 733 739 743 751 757 761", " 769 773 787 797 809 811 821 823 827", " 829 839 853 857 859 863 877 881 883", " 887 907 911 919 929 937 941 947 953", " 967 971 977 983 991 997 1009 1013 1019", " 1021 1031 1033 1039 1049 1051 1061", " 1063 1069 1087 1091 1093 1097 1103", " 1109 1117 1123 1129 1151 1153 1163", " 1171 1181 1187 1193 1201 1213 1217", " 1223 1229 1231 1237 1249 1259 1277", " 1279 1283 1289 1291 1297 1301 1303", " 1307 1319 1321 1327 1361 1367 1373", " 1381 1399 1409 1423 1427 1429 1433", " 1439 1447 1451 1453 1459 1471 1481", " 1483 1487 1489 1493 1499 1511 1523", " 1531 1543 1549 1553 1559 1567 1571", " 1579 1583 1597 1601 1607 1609 1613", " 1619 1621 1627 1637 1657 1663 1667", " 1669 1693 1697 1699 1709 1721 1723", " 1733 1741 1747 1753 1759 1777 1783", " 1787 1789 1801 1811 1823 1831 1847", " 1861 1867 1871 1873 1877 1879 1889", " 1901 1907 1913 1931 1933 1949 1951", " 1973 1979 1987 1993 1997 1999 2003", " 2011 2017 2027 2029 2039 2053 2063", " 2069 2081 2083 2087 2089 2099 2111", " 2113 2129 2131 2137 2141 2143 2153", " 2161 2179 2203 2207 2213 2221 2237", " 2239 2243 2251 2267 2269 2273 2281", " 2287 2293 2297 2309 2311 2333 2339", " 2341 2347 2351 2357 2371 2377 2381", " 2383 2389 2393 2399 2411 2417 2423"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long n = 13082761331670030;
    vector<string> special = {"2 6 10 14 22 26 34 38 46 58 62 74 82 86 3 15 21 ", "33 39 51 57 69 87 93 111 123 129 5 35 55 65 85 95 ", "115 145 155 185 205 215 7 77 91 119 133 161 203 ", "217 259 287 301 11 143 187 209 253 319 341 407 ", "451 473 13 221 247 299 377 403 481 533 559 17 323 ", "391 493 527 629 697 731 19 437 551 589 703 779 ", "817 23 667 713 851 943 989 29 899 1073 1189 1247 ", "31 1147 1271 1333 37 1517 1591 41 1763 43"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 2390480;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long n = 614889782588491410;
    vector<string> special = {"2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 6 10 15 ", "14 21 35 22 33 55 77 26 39 65 91 143 34 51 85 119 ", "187 221 38 57 95 133 209 247 323 46 69 115 161 253", " 299 391 437 58 87 145 203 319 377 493 551 667 62 ", "93 155 217 341 403 527 589 713 899 74 111 185 259 ", "407 481 629 703 851 1073 1147 82 123 205 287 451 5", "33 697 779 943 1189 1271 1517 86 129 215 301 473 5", "59 731 817 989 1247 1333 1591 1763 94 141 235 329 ", "517 611 799 893 1081 1363 1457 1739 1927 2021 30 4", "2 70 105 66 110 165 154 231 385 78 130 195 182 273", " 455 286 429 715 1001 102 170 255 238 357 595 374 ", "561 935 1309 442 663 1105 1547 2431 114 190 285 26", "6 399 665 418 627 1045 1463 494 741 1235 1729 2717", " 646 969 1615 2261 3553 4199 138 230 345 322 483 8", "05 506 759 1265 1771 598 897 1495 2093 3289 782 11", "73 1955 2737 4301 5083 874 1311 2185 3059 4807 568", "1 7429 174 290 435 406 609 1015 638 957 1595 2233 ", "754 1131 1885 2639 4147 986 1479 2465 3451 5423 64", "09 1102 1653 2755 3857 6061 7163 9367 1334 2001 33", "35 4669 7337 8671 11339 12673 186 310 465 434 651 ", "1085 682 1023 1705 2387 806 1209 2015 2821 4433 10", "54 1581 2635 3689 5797 6851 1178 1767 2945 4123 64", "79 7657 10013 1426 2139 3565 4991 7843 9269 12121 ", "13547 1798 2697 4495 6293 9889 11687 15283 17081 2", "0677 222 370 555 518 777 1295 814 1221 2035 2849 9", "62 1443 2405 3367 5291 1258 1887 3145 4403 6919 81", "77 1406 2109 3515 4921 7733 9139 11951 1702 2553 4", "255 5957 9361 11063 14467 16169 2146 3219 5365 751", "1 11803 13949 18241 20387 24679 2294 3441 5735 802", "9 12617 14911 19499 21793 26381 33263 246 410 615 ", "574 861 1435 902 1353 2255 3157 1066 1599 2665 373", "1 5863 1394 2091 3485 4879 7667 9061 1558 2337 389", "5 5453 8569 10127 13243 1886 2829 4715 6601 10373 ", "12259 16031 17917 2378 3567 5945 8323 13079 15457 ", "20213 22591 27347 2542 3813 6355 8897 13981 16523 ", "21607 24149 29233 36859 3034 4551 7585 10619 16687", " 19721 25789 28823 34891 43993 47027 258 430 645 6", "02 903 1505 946 1419 2365 3311 1118 1677 2795 3913", " 6149 1462 2193 3655 5117 8041 9503 1634 2451 4085", " 5719 8987 10621 13889 1978 2967 4945 6923 10879 1", "2857 16813 18791 2494 3741 6235 8729 13717 16211 2", "1199 23693 28681 2666 3999 6665 9331 14663 17329 2", "2661 25327 30659 38657 3182 4773 7955 11137 17501 ", "20683 27047 30229 36593 46139 49321 3526 5289 8815", " 12341 19393 22919 29971 33497 40549 51127 54653 6", "5231 282 470 705 658 987 1645 1034 1551 2585 3619 ", "1222 1833 3055 4277 6721 1598"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 215141096;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    long n = 13082761331670030;
    vector<string> special = {"572390 313565417 62790 6157995 4938765 13063830 ", "7395 117542607 907513530 1891699 366120447 570570 ", "45009390 44570274 1066533 121229251 19657286 ", "87695146 52003 144739 12777765 6976970 176529190 ", "101642970 49407358 436982469 408560845 15457 ", "799459 2838430 111111 82773366 12010089 56258202 ", "26483786 405992895 74869278 84847 48522318 ", "273538265 125419 36453551 151751171 331251833 ", "273676494 4376463 610200745 39981314 449565 ", "50811915 30702 361294557 11803715 8064030 ", "668837715 61520745 35178 73277490 10413095 ", "212486190 26193090 43545670 12597 2650310 ", "35177870 3045 9943935 479446 24266242 30305 ", "845263298 3416694 182523390 920773490 24871 ", "107008811 5437705 34267431 591258815 779779 ", "664651 6629290 340431 700321 10339995 501942 ", "768453 907494 2111109 69745 86469 246851605 ", "15814110 2442 24364574 25076010 453747 27335490 ", "321213354 1216470 55968198 49445 167485 12133121 ", "432687801 95548245 599719710 37 2122394 36895859 ", "177429714 91344638 27347 688005010 205507990 ", "108999410 1435082 1131830 423417603 25555530 ", "1717170 332527514 665542605 519757082 150004855 ", "23231338 65596930 3045174 334970 129682410 ", "52936455 2712655 67802735 1316497 818958 33874610 ", "32340945 33880990 225260574 17042126 33005 9982 ", "6458385 1003255 310245 34616505 1269618 488215 ", "202895 183954 46835 61364870 31857 1265 313646515 ", "9930635 23680745 7604610 49210 98691321 271637751 ", "82159610 106100995 248579474 35527030 233662 ", "330429 622081 220110 112630287 672945 5216926 ", "861548559 1529983 653343405 4484770 1846670 55 ", "35290970 9762879 512942430 8384570 167183527 ", "17835 41470 35834 328206021 1874730 294859290 ", "168113 3493815 308154 15646785 125458606 ", "429244662 4622586 2818365 168130 225910 346599995 ", "404978730 16752395 33411 294814 8521063 114830053 ", "66215 68926330 3444441 7740390 16152565 5898711 ", "181815 12087374 106846615 8177 109837442 9179898 ", "123570433 1738318 278070 525433942 181996815 ", "5757015 51126378 8006726 31750810 566970222 ", "514406893 15286973 318646055 6727710 31118885 ", "18937490 97215690 2939946 197466373 6510 7868679 ", "399083258 11240970 182 3215630 23346015 444787915 ", "1271 208403 31465 1058015 33 2774145 589480593 ", "12327770 6096454 10156685 65564070 497295645 ", "12946010 362766278 54131 443580346 99423181 ", "212667 299170522 126248430 1753282 209715 ", "116731670 831527970 25814789 21876657 928030818 ", "435090770 693966 670025785 9933 626798315 4949945"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long n = 219060189739591200;
    vector<string> special = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 ", "20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 ", "36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 ", "52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 ", "68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 ", "84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 ", "100 101 102 103 104 105 106 107 108 109 110 111 ", "112 113 114 115 116 117 118 119 120 121 122 123 ", "124 125 126 127 128 129 130 131 132 133 134 135 ", "136 137 138 139 140 141 142 143 144 145 146 147 ", "148 149 150 151 152 153 154 155 156 157 158 159 ", "160 161 162 163 164 165 166 167 168 169 170 171 ", "172 173 174 175 176 177 178 179 180 181 182 183 ", "184 185 186 187 188 189 190 191 192 193 194 195 ", "196 197 198 199 200 201 202 203 204 205 206 207 ", "208 209 210 211 212 213 214 215 216 217 218 219 ", "220 221 222 223 224 225 226 227 228 229 230 231 ", "232 233 234 235 236 237 238 239 240 241 242 243 ", "244 245 246 247 248 249 250 251 252 253 254 255 ", "256 257 258 259 260 261 262 263 264 265 266 267 ", "268 269 270 271 272 273 274 275 276 277 278 279 ", "280 281 282 283 284 285 286 287 288 289 290 291 ", "292 293 294 295 296 297 298 299 300 301 302 303 ", "304 305 306 307 308 309 310 311 312 313 314 315 ", "316 317 318 319 320 321 322 323 324 325 326 327 ", "328 329 330 331 332 333 334 335 336 337 338 339 ", "340 341 342 343 344 345 346 347 348 349 350 351 ", "352 353 354 355 356 357 358 359 360 361 362 363 ", "364 365 366 367 368 369 370 371 372 373 374 375 ", "376 377 378 379 380 381 382 383 384 385 386 387 ", "388 389 390 391 392 393 394 395 396 397 398 399 ", "400 401 402 403 404 405 406 407 408 409 410 411 ", "412 413 414 415 416 417 418 419 420 421 422 423 ", "424 425 426 427 428 429 430 431 432 433 434 435 ", "436 437 438 439 440 441 442 443 444 445 446 447 ", "448 449 450 451 452 453 454 455 456 457 458 459 ", "460 461 462 463 464 465 466 467 468 469 470 471 ", "472 473 474 475 476 477 478 479 480 481 482 483 ", "484 485 486 487 488 489 490 491 492 493 494 495 ", "496 497 498 499 500"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 11512;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    long n = 614889782588491410;
    vector<string> special = {"1 2 3 5 6 7 10 11 13 14 15 17 19 21 22 23 29 30 31", " 33 35 37 41 42 43 47 55 66 70 77 105 110 154 165 ", "210 221 231 247 299 323 330 377 385 391 437 462 49", "3 551 667 770 1147 1155 1271 1333 1457 1517 1591 1", "739 1763 1927 2021 2310 4199 5083 5681 6409 7163 7", "429 8671 9367 11339 12673 47027 49321 53909 54653 ", "59737 62651 65231 71299 74777 82861 96577 121771 1", "47407 164749 215441 2022161 2210269 2318087 256869", "1 2800733 3065857 95041567"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 281216;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    long n = 614889782588491410;
    vector<string> special = {"2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 6 10 14 2", "2 26 34 38 46 58 62 74 82 86 94 15 21 33 39 51 57 ", "69 87 93 111 123 129 141 35 55 65 85 95 115 145 15", "5 185 205 215 235 77 91 119 133 161 203 217 259 28", "7 301 329 143 187 209 253 319 341 407 451 473 517 ", "221 247 299 377 403 481 533 559 611 323 391 493 52", "7 629 697 731 799 437 551 589 703 779 817 893 667 ", "713 851 943 989 1081 899 1073 1189 1247 1363 1147 ", "1271 1333 1457 1517 1591 1739 1763 1927 2021"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 10349536;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    long n = 12;
    vector<string> special = {"1", "2"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    long n = 614889782588491410;
    vector<string> special = {"1 47 43 41 37 31 29 23 19 17 13 11 5 7 2 3 989 817", " 731 559 473 301 215 129 86 1517 46 69 115 1271 16", "1 253 1189 943 299 1081 893 799 611 517 38 57 329 ", "95 235 133 141 94 209 1763 247 1591 1333 1247 323 ", "899 713 589 527 403 341 217 155 93 62 10 667 551 4", "93 377 319 203 145 87 58 15 779 697 533 451 287 20", "5 123 82 391 6 1147 1073 851 703 629 481 407 259 4", "37 185 111 74 1927 143 55 1363 1739 14 77 34 187 5", "1 85 2021 91 119 1457 21 65 39 26 35 33 22 221 240", "5 3367 5291 32759 1258 2255 1887 3145 4403 6919 13", "53 8177 25051 1406 2109 3515 4921 7733 9139 3731 5", "9737 222 2665 55883 370 555 44321 518 1599 777 129", "5 36613 814 1221 1066 33041 2035 2849 3157 962 144", "3 20387 24679 9635 2294 3441 5735 574 8029 12617 1", "4911 50431 19499 21793 26381 33263 5781 3854 615 2", "46 53909 410 11951 902 21197 1702 39997 2553 4255 ", "5957 9361 11063 14467 16169 13489 2146 1435 3219 5", "365 7511 861 11803 13949 18241 5423 6409 1102 1653", " 2755 3857 6061 7163 9367 38399 1334 2001 3335 466", "9 7337 8671 11339 12673 34357 26273 186 22231 310 ", "82861 74777 174 62651 290 435 58609 406 609 1015 6", "38 957 1595 2233 754 1131 1885 2639 4147 46483 986", " 1479 2465 3451 1767 2945 4123 6479 7657 10013 712", "99 1426 2139 3565 4991 7843 9269 12121 13547 1798 ", "2697 4495 6293 9889 11687 15283 17081 20677 465 14", "147 434 651 1085 10105 682 1023 1705 2387 6063 806", " 1209 2015 2821 4433 4042 1054 1581 2635 3689 5797", " 6851 1178 17329 22661 25327 30659 38657 25897 318", "2 4773 7955 11137 17501 20683 27047 30229 36593 46", "139 49321 23171 3526 5289 8815 12341 19393 22919 1", "978 2967 4945 6923 10879 2914 12857 16813 18791 24", "94 3741 6235 8729 13717 16211 21199 23693 28681 31", "349 2666 3999 6665 9331 14663 1551 2585 3619 5405 ", "1222 1833 3055 4277 6721 3243 1598 2397 3995 5593 ", "8789 10387 1786 2679 4465 6251 9823 11609 15181 21", "62 29971 33497 40549 17719 51127 54653 65231 14993", " 9541 6815 282 4089 2726 470 705 20539 18377 14053", " 11891 658 987 1645 7567 1034 16031 17917 8695 521", "7 2378 3567 5945 8323 13079 15457 20213 3478 22591", " 27347 42253 2542 33511 3813 6355 8897 13981 16523", " 21607 24149 5863 29563 1394 2091 3485 4879 7667 9", "061 22607 1558 2337 19129 3895 5453 8569 10127 132", "43 12173 1886 2829 4715 6601 10373 12259 1419 2365", " 3311 1118 1677 2795 3913 6149 10199 1462 2193 365", "5 5117 8041 9503 7285 1634 2451 4085 5719 8987 106", "21 13889 4371 29233 36859 3034 4551 7585 10619 166", "87 19721 25789 28823 34891 43993 47027 27683 258 2", "4769 430 645 18941 602 903 1505 16027 946 399 665 ", "66"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 429781684;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    long n = 13082761331670030;
    vector<string> special = {"1 2 3 5 6 7 10 11 13 14 15 17 19 21 22 23 26 29 30", " 31 33 34 35 37 38 39 41 42 43 46 51 55 57 58 62 6", "5 66 69 70 74 77 78 82 85 86 87 91 93 95 102 105 1", "10 111 114 115 119 123 129 130 133 138 143 145 154", " 155 161 165 170 174 182 185 186 187 190 195 203 2", "05 209 210 215 217 221 222 230 231 238 246 247 253", " 255 258 259 266 273 285 286 287 290 299 301 310 3", "19 322 323 330 341 345 357 370 374 377 385 390 391", " 399 403 406 407 410 418 429 430 434 435 437 442 4", "51 455 462 465 473 481 483 493 494 506 510 518 527", " 533 546 551 555 559 561 570 574 589 595 598 602 6", "09 615 627 629 638 645 646 651 663 665 667 682 690", " 697 703 713 714 715 731 741 754 759 770 777 779 7", "82 798 805 806 814 817 851 858 861 870 874 897 899", " 902 903 910 930 935 943 946 957 962 966 969 986 9", "89 1001 1015 1023 1045 1054 1066 1073 1085 1102 11", "05 1110 1118 1122 1131 1147 1155 1173 1178 1189 11", "90 1209 1218 1221 1230 1235 1247 1254 1258 1265 12", "71 1290 1295 1302 1309 1311 1326 1330 1333 1334 13", "53 1365 1394 1406 1419 1426 1430 1435 1443 1462 14", "63 1479 1482 1495 1505 1517 1518 1547 1554 1558 15", "81 1591 1595 1599 1610 1615 1634 1653 1677 1702 17", "05 1722 1729 1763 1767 1771 1785 1794 1798 1806 18", "70 1885 1886 1887 1914 1938 1955 1978 1995 2001 20", "02 2015 2030 2035 2046 2090 2091 2093 2109 2139 21", "45 2146 2170 2185 2193 2210 2233 2255 2261 2262 22", "94 2310 2337 2346 2365 2378 2387 2405 2415 2418 24", "31 2442 2451 2465 2470 2494 2530 2542 2553 2590 26", "18 2622 2635 2639 2665 2666 2697 2706 2717 2730 27", "37 2755 2795 2805 2821 2829 2838 2849 2870 2886 29", "26 2945 2958 2967 2990 3003 3010 3034 3045 3059 30", "94 3135 3145 3157 3162 3182 3190 3198 3219 3230 32", "55 3289 3306 3311 3315 3335 3354 3367 3410 3441 34", "51 3458 3485 3515 3526 3534 3542 3553 3565 3567 35", "70 3655 3689 3705 3731 3741 3770 3774 3795 3813 38", "57 3885 3895 3910 3913 3927 3990 3999 4002 4030 40", "70 4085 4123 4147 4182 4186 4199 4218 4255 4278 42", "90 4301 4305 4370 4386 4389 4403 4433 4466 4485 44", "95 4510 4515 4522 4551 4641 4669 4674 4715 4730 47", "73 4774 4785 4807 4810 4830 4845 4862 4879 4902 49", "21 4930 4945 4991 5005 5083 5106 5115 5117 5187 52", "70 5278 5289 5291 5313 5330 5365 5394 5423 5434 54", "53 5474 5510 5590 5610 5642 5655 5658 5681 5698 57", "19 5735 5797 5863 5865 5890 5934 5945 5957 6006 60", "45 6061 6090 6105 6118 6149 6235 6270 6279"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 55659218;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    long n = 965211303534821671;
    vector<string> special = {"982451653 982451707"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    long n = 614889782588491410;
    vector<string> special = {"2 3 4 5 6 7 8 9 10 11 12 13 14 15 17 18 19 1927 21", " 22 23 25 26 28 29 30 31 33 34 35 37 38 39 41 42 4", "3 44 946 46 47 49 50 51 52 1763 55 57 58 1034 62 6", "5 66 68 69 70 74 76 77 78 82 85 86 87 602 91 92 93", " 94 95 98 611 102 529 110 111 114 115 116 629 119 ", "121 123 124 638 533 129 130 133 646 138 141 143 14", "5 658 148 154 155 161 164 1189 169 170 517 174 182", " 185 186 187 188 190 703 1739 1222 713 518 203 205", " 209 215 217 731 221 222 1247 1147 230 235 238 242", " 246 247 253 172 258 259 266 779 782 1066 282 559 ", "286 287 289 290 806 1073 299 1118 301 814 817 1333", " 310 1849 319 322 323 329 1591 551 338 851 341 108", "1 1369 1681 361 370 574 374 377 893 899 902 391 57", "8 1517 403 406 407 410 598 418 667 754 430 943 145", "7 434 437 841 442 799 961 962 451 2209 697 1271 58", "9 470 20 527 473 986 989 481 2021 493 494 1363 506", " 682"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 18478352;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    long n = 614889782588491410;
    vector<string> special = {"1 2 3 5 6 7 10 11 13 14 15 17 19 21 22 23 26 29 30", " 31 33 34 35 37 38 39 41 42 43 46 47 51 55 57 58 6", "2 65 66 69 70 74 77 78 82 85 86 87 91 93 94 95 102", " 105 110 111 114 115 119 123 129 130 133 138 141 1", "43 145 154 155 161 165 170 174 182 185 186 187 190", " 195 203 205 209 210 215 217 221 222 230 231 235 2", "38 246 247 253 255 258 259 266 273 282 285 286 287", " 290 299 301 310 319 322 323 329 330 341 345 357 3", "70 374 377 385 390 391 399 403 406 407 410 418 429", " 430 434 435 437 442 451 455 462 465 470 473 481 4", "83 493 494 506 510 517 518 527 533 546 551 555 559", " 561 570 574 589 595 598 602 609 611 615 627 629 6", "38 645 646 651 658 663 665 667 682 690 697 703 705", " 713 714 715 731 741 754 759 770 777 779 782 798 7", "99 805 806 814 817 851 858 861 870 874 893 897 899", " 902 903 910 930 935 943 946 957 962 966 969 986 9", "87 989 1001 1015 1023 1034 1045 1054 1066 1073 108", "1 1085 1102 1105 1110 1118 1122 1131 1147 1155 117", "3 1178 1189 1190 1209 1218 1221 1222 1230 1235 124", "7 1254 1258 1265 1271 1290 1295 1302 1309 1311 132", "6 1330 1333 1334 1353 1363 1365 1394 1406 1410 141", "9 1426 1430 1435 1443 1457 1462 1463 1479 1482 149", "5 1505 1517 1518 1547 1551 1554 1558 1581 1591 159", "5 1598 1599 1610 1615 1634 1645 1653 1677 1702 170", "5 1722 1729 1739 1763 1767 1771 1785 1786 1794 179", "8 1806 1833 1870 1885 1886 1887 1914 1927 1938 195", "5 1974 1978 1995 2001 2002 2015 2021 2030 2035 204", "6 2090 2091 2093 2109 2139 2145 2146 2162 2170 218", "5 2193 2210 2233 2255 2261 2262 2294 2310 2337 234", "6 2365 2378 2387 2397 2405 2415 2418 2431 2442 245", "1 2465 2470 2494 2530 2542 2553 2585 2590 2618 262", "2 2635 2639 2665 2666 2679 2697 2706 2717 2726 273", "0 2737 2755 2795 2805 2821 2829 2838 2849 2870 288", "6 2914 2926 2945 2958 2967 2990 3003 3010 3034 304", "5 3055 3059 3094 3102 3135 3145 3157 3162 3182 319", "0 3198 3219 3230 3243 3255 3289 3290 3306 3311 331", "5 3335 3354 3367 3410 3441 3451 3458 3478 3485 351", "5 3526 3534 3542 3553 3565 3567 3570 3619 3655 366", "6 3689 3705 3731 3741 3770 3774 3795 3813 3854 385", "7 3885 3895 3910 3913 3927 3990 3995 3999 4002 403", "0 4042 4070 4085 4089 4123 4147 4182 4186 4199 421", "8 4255 4277 4278 4290 4301 4305 4370 4371 4386 438", "9 4403 4433 4465 4466 4485 4495 4510 4515 4522 455", "1 4641 4669 4674 4715 4730 4773 4774 4785 4794 480", "7 4810 4830 4845 4862 4879"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 205672286;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    long n = 999994588000336987;
    vector<string> special = {"2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 6 10 14 2", "2 26 34 38 46 58 62 74 82 86 94 15 21 33 39 51 57 ", "69 87 93 111 123 129 141 35 55 65 85 95 115 145 15", "5 185 205 215 235 77 91 119 133 161 203 217 259 28", "7 301 329 143 187 209 253 319 341 407 451 473 517 ", "221 247 299 377 403 481 533 559 611 323 391 493 52", "7 629 697 731 799 437 551 589 703 779 817 893 667 ", "713 851 943 989 1081 899 1073 1189 1247 1363 1147 ", "1271 1333 1457 1517 1591 1739 1763 1927 2021"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    long n = 766710664088569200;
    vector<string> special = {"2 4 8 16 3 9 27 25 7 49 11 13 17 19 23 29 31 37 ", "41 6 10 12 14 15 18 20 21 22 24 26 28 30 32 33 34 ", "35 36 38 39 40 42 43 44 45 46 47 48 50 51 52 53 54", " 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 7", "1 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 ", "88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 10", "3 104 105 106 107 108 109 110 111 112 113 114 115 ", "116 117 118 119 120 121 122 123 124 125 126 127 12", "8 129 130 131 132 133 134 135 136 137 138 139 140 ", "141 142 143 144 145 146 147 148 149 150 151 152 15", "3 154 155 156 157 158 159 160 161 162 163 164 165 ", "166 167 168 169 170 171 172 173 174 175 176 177 17", "8 179 180 181 182 183 184 185 186 187 188 189 190 ", "191 192 193 194 195 196 197 198 199 200 201 202 20", "3 204 205 206 207 208 209 210 211 212 213 214 215 ", "216 217 218 219 220 221 222 223 224 225 226 227 22", "8 229 230 231 232 233 234 235 236 237 238 239 240 ", "241 242 243 244 245 246 247 248 249 250 251 252 25", "3 254 255 256 257 258 259 260 261 262 263 264 265 ", "266 267 268 269 270 271 272 273 274 275 276 277 27", "8 279 280 281 282 283 284 285 286 287 288 289 290 ", "291 292 293 294 295 296 297 298 299 300 301 302 30", "3 304 305 306 307 308 309 310 311 312 313 314 315 ", "316 317 318 319 320 321 322 323 324 325 326 327 32", "8 329 330 331 332 333 334 335 336 337 338 339 340 ", "341 342 343 344 345 346 347 348 349 350 351 352 35", "3 354 355 356 357 358 359 360 361 362 363 364 365 ", "366 367 368 369 370 371 372 373 374 375 376 377 37", "8 379 380 381 382 383 384 385 386 387 388 389 390 ", "391 392 393 394 395 396 397 398 399 400 401 402 40", "3 404 405 406 407 408 409 410 411 412 413 414 415 ", "416 417 418 419 420 421 422 423 424 425 426 427 42", "8 429 430 431 432 433 434 435 436 437 438 439 440 ", "441 442 443 444 445 446 447 448 449 450 451 452 45", "3 454 455 456 457 458 459 460 461 462 463 464 465 ", "466 467 468 469 470 471 472 473 474 475 476 477 47", "8 479 480 481 482 483 484 485 486 487 488 489 490 ", "491 492 493 494 495 496 497 498 499 500 501"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 2908;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    long n = 304250263527209;
    vector<string> special = {"4 2 5 6 3"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    long n = 2;
    vector<string> special = {"1"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    long n = 239812014798221;
    vector<string> special = {"15485863 15485867"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    long n = 999999937;
    vector<string> special = {"999999937"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    long n = 12180501929485890;
    vector<string> special = {"1 2 3 6 5 10 15 30 7 14 21 42 35 70 105 11 22 33 6", "6 55 110 165 77 154 231 385 13 26 39 78 65 130 195", " 91 182 273 455 143 286 429 715 1001 17 34 51 102 ", "85 170 255 119 238 357 595 187 374 561 935 1309 22", "1 442 663 1105 1547 2431 19 38 57 114 95 190 285 1", "33 266 399 665 209 418 627 1045 1463 247 494 741 1", "235 1729 2717 323 646 969 1615 2261 3553 4199 23 4", "6 69 138 115 230 345 161 322 483 805 253 506 759 1", "265 1771 299 598 897 1495 2093 3289 391 782 1173 1", "955 2737 4301 5083 437 874 1311 2185 3059 4807 568", "1 7429 27 54 81 162 135 270 405 189 378 567 945 29", "7 594 891 1485 2079 351 702 1053 1755 2457 3861 45", "9 918 1377 2295 3213 5049 5967 513 1026 1539 2565 ", "3591 5643 6669 8721 621 1242 1863 3105 4347 6831 8", "073 10557 11799 31 62 93 186 155 310 465 217 434 6", "51 1085 341 682 1023 1705 2387 403 806 1209 2015 2", "821 4433 527 1054 1581 2635 3689 5797 6851 589 117", "8 1767 2945 4123 6479 7657 10013 713 1426 2139 356", "5 4991 7843 9269 12121 13547 837 1674 2511 4185 58", "59 9207 10881 14229 15903 19251 37 74 111 222 185 ", "370 555 259 518 777 1295 407 814 1221 2035 2849 48", "1 962 1443 2405 3367 5291 629 1258 1887 3145 4403 ", "6919 8177 703 1406 2109 3515 4921 7733 9139 11951 ", "851 1702 2553 4255 5957 9361 11063 14467 16169 999", " 1998 2997 4995 6993 10989 12987 16983 18981 22977", " 1147 2294 3441 5735 8029 12617 14911 19499 21793 ", "26381 30969 41 82 123 246 205 410 615 287 574 861 ", "1435 451 902 1353 2255 3157 533 1066 1599 2665 373", "1 5863 697 1394 2091 3485 4879 7667 9061 779 1558 ", "2337 3895 5453 8569 10127 13243 943 1886 2829 4715", " 6601 10373 12259 16031 17917 1107 2214 3321 5535 ", "7749 12177 14391 18819 21033 25461 1271 2542 3813 ", "6355 8897 13981 16523 21607 24149 29233 34317 1517", " 3034 4551 7585 10619 16687 19721 25789 28823 3489", "1 40959 47027 43 86 129 258 215 430 645 301 602 90", "3 1505 473 946 1419 2365 3311 559 1118 1677 2795 3", "913 6149 731 1462 2193 3655 5117 8041 9503 817 163", "4 2451 4085 5719 8987 10621 13889 989 1978 2967 49", "45 6923 10879 12857 16813 18791 1161 2322 3483 580", "5 8127 12771 15093 19737 22059 26703 1333 2666 399", "9 6665 9331 14663 17329 22661 25327 30659 35991 15", "91 3182 4773 7955 11137 17501 20683 27047 30229 36", "593 42957 49321 1763 3526 5289 8815 12341 19393 22", "919 29971 33497 40549 47601 54653 65231"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 10865408;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    long n = 999999874000003969;
    vector<string> special = {"999999937 ", "2 ", "3 ", "55784 ", "5877441 ", "55845"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    long n = 614889782588491410;
    vector<string> special = {"1 2 3 5 6 7 10 11 13 14 ", "15 17 19 21 22 23 26 29 30 31 ", "33 34 35 37 38 39 41 42 43 46 ", "47 51 55 57 58 62 65 66 69 70 ", "74 77 78 82 85 86 87 91 93 94 ", "95 102 105 110 111 114 115 119 123 129 ", "130 133 138 141 143 145 154 155 161 165 ", "170 174 182 185 186 187 190 195 203 205 ", "209 210 215 217 221 222 230 231 235 238 ", "246 247 253 255 258 259 266 273 282 285 ", "286 287 290 299 301 310 319 322 323 329 ", "330 341 345 357 370 374 377 385 390 391 ", "399 403 406 407 410 418 429 430 434 435 ", "437 442 451 455 462 465 470 473 481 483 ", "493 494 506 510 517 518 527 533 546 551 ", "555 559 561 570 574 589 595 598 602 609 ", "611 615 627 629 638 645 646 651 658 663 ", "665 667 682 690 697 703 705 713 714 715 ", "731 741 754 759 770 777 779 782 798 799 ", "805 806 814 817 851 858 861 870 874 893 ", "897 899 902 903 910 930 935 943 946 957 ", "962 966 969 986 987 989 1001 1015 1023 1034 ", "1045 1054 1066 1073 1081 1085 1102 1105 1110 1118 ", "1122 1131 1147 1155 1173 1178 1189 1190 1209 1218 ", "1221 1222 1230 1235 1247 1254 1258 1265 1271 1290 ", "1295 1302 1309 1311 1326 1330 1333 1334 1353 1363 ", "1365 1394 1406 1410 1419 1426 1430 1435 1443 1457 ", "1462 1463 1479 1482 1495 1505 1517 1518 1547 1551 ", "1554 1558 1581 1591 1595 1598 1599 1610 1615 1634 ", "1645 1653 1677 1702 1705 1722 1729 1739 1763 1767 ", "1771 1785 1786 1794 1798 1806 1833 1870 1885 1886 ", "1887 1914 1927 1938 1955 1974 1978 1995 2001 2002 ", "2015 2021 2030 2035 2046 2090 2091 2093 2109 2139 ", "2145 2146 2162 2170 2185 2193 2210 2233 2255 2261 ", "2262 2294 2310 2337 2346 2365 2378 2387 2397 2405 ", "2415 2418 2431 2442 2451 2465 2470 2494 2530 2542 ", "2553 2585 2590 2618 2622 2635 2639 2665 2666 2679 ", "2697 2706 2717 2726 2730 2737 2755 2795 2805 2821 ", "2829 2838 2849 2870 2886 2914 2926 2945 2958 2967 ", "2990 3003 3010 3034 3045 3055 3059 3094 3102 3135 ", "3145 3157 3162 3182 3190 3198 3219 3230 3243 3255 ", "3289 3290 3306 3311 3315 3335 3354 3367 3410 3441 ", "3451 3458 3478 3485 3515 3526 3534 3542 3553 3565 ", "3567 3570 3619 3655 3666 3689 3705 3731 3741 3770 ", "3774 3795 3813 3854 3857 3885 3895 3910 3913 3927 ", "3990 3995 3999 4002 4030 4042 4070 4085 4089 4123 ", "4147 4182 4186 4199 4218 4255 4277 4278 4290 4301 ", "4305 4370 4371 4386 4389 4403 4433 4465 4466 4485 ", "4495 4510 4515 4522 4551 4641 4669 4674 4715 4730 ", "4773 4774 4785 4794 4807 4810 4830 4845 4862 4879"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 205672286;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    long n = 614889782588491410;
    vector<string> special = {"2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 6 10 14 2", "2 26 34 38 46 58 62 74 82 86 94 15 21 33 39 51 57 ", "69 87 93 111 123 129 141 35 55 65 85 95 115 145 15", "5 185 205 215 235 77 91 119 133 161 203 217 259 28", "7 301 329 143 187 209 253 319 341 407 451 473 517 ", "221 247 299 377 403 481 533 559 611 323 391 493 52", "7 629 697 731 799 437 551 589 703 779 817 893 667 ", "713 851 943 989 1081 899 1073 1189 1247 1363 1147 ", "1271 1333 1457 1517 1591 1739 1763 1927 2021 30 42", " 66 78 102 114 138 174 186 222 246 258 282 70 110 ", "130 170 190 230 290 310 370 410 430 470 154 182 23", "8 266 322 406 434 518 574 602 658 286 374 418 506 ", "638 682 814 902 946 1034 442 494 598 754 806 962 1", "066 1118 1222 646 782 986 1054 1258 1394 1462 1598", " 874 1102 1178 1406 1558 1634 1786 1334 1426 1702 ", "1886 1978 2162 1798 2146 2378 2494 2726 2294 2542 ", "2666 2914 3034 3182 3478 3526 3854 4042 105 165 19", "5 255 285 345 435 465 555 615 645 705 231 273 357 ", "399 483 609 651 777 861 903 987 429 561 627 759 95", "7 1023 1221 1353 1419 1551 663 741 897 1131 1209 1", "443 1599 1677 1833 969 1173 1479 1581 1887 2091 21", "93 2397 1311 1653 1767 2109 2337 2451 2679 2001 21", "39 2553 2829 2967 3243 2697 3219 3567 3741 4089 34", "41 3813 3999 4371 4551 4773 5217 5289 5781 6063 38", "5 455 595 665 805 1015 1085 1295 1435 1505 1645 71", "5 935 1045 1265 1595 1705 2035 2255 2365 2585 1105", " 1235 1495 1885 2015 2405 2665 2795 3055 1615 1955", " 2465 2635 3145 3485 3655 3995 2185 2755 2945 3515", " 3895 4085 4465 3335 3565 4255 4715 4945 5405 4495", " 5365 5945 6235 6815 5735 6355 6665 7285 7585 7955", " 8695 8815 9635 10105 1001 1309 1463 1771 2233 238", "7 2849 3157 3311 3619 1547 1729 2093 2639 2821 336", "7 3731 3913 4277 2261 2737 3451 3689 4403 4879 511", "7 5593 3059 3857 4123 4921 5453 5719 6251 4669 499", "1 5957 6601 6923 7567 6293 7511 8323 8729 9541 802", "9 8897 9331 10199 10619 11137 12173 12341 13489 14", "147 2431 2717 3289 4147 4433 5291 5863 6149 6721 3", "553 4301 5423 5797 6919 7667 8041 8789 4807 6061 6", "479 7733 8569 8987 9823 7337 7843 9361 10373 10879", " 11891 9889 11803 13079 13717 14993 12617 13981 14", "663 16027 16687 17501 19129 19393 21197 22231 4199", " 5083 6409 6851 8177 9061 9503 10387 5681 7163 765", "7 9139 10127 10621 11609 8671 9269 11063 12259 128", "57 14053 11687 13949 15457 16211 17719 14911 16523", " 17329 18941 19721 20683 22607 22919 25051 26273 7", "429 9367 10013 11951 13243 13889 15181 11339 12121"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 223454596;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    long n = 2000006;
    vector<string> special = {"2000006 1 2 3 4 5"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    long n = 139567906324421689;
    vector<string> special = {"1"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    long n = 999999874000003969;
    vector<string> special = {"1 2 3 4 5 6"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    long n = 2;
    vector<string> special = {"10", "2"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    long n = 897612484786617600;
    vector<string> special = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", " 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 3", "7 38 39 40 42 44 45 46 48 49 50 51 52 54 55 56 57 ", "58 60 62 63 64 65 66 68 69 70 72 74 75 76 77 78 80", " 81 84 85 87 88 90 91 92 93 95 96 98 99 100 102 10", "4 105 108 110 111 112 114 115 116 117 119 120 124 ", "126 128 130 132 133 135 136 138 140 143 144 145 14", "7 148 150 152 153 154 155 156 160 161 162 165 168 ", "170 171 174 175 176 180 182 184 185 186 187 189 19", "0 192 195 196 198 200 203 204 207 208 209 210 216 ", "217 220 221 222 224 225 228 230 231 232 234 238 24", "0 245 247 248 252 253 255 256 259 260 261 264 266 ", "270 272 273 275 276 279 280 285 286 288 290 294 29", "6 297 299 300 304 306 308 310 312 315 319 320 322 ", "323 324 325 330 333 336 340 341 342 345 348 350 35", "1 352 357 360 364 368 370 372 374 377 378 380 384 ", "385 390 391 392 396 399 400 403 405 406 407 408 41", "4 416 418 420 425 429 432 434 435 437 440 441 442 ", "444 448 450 455 456 459 460 462 464 465 468 475 47", "6 480 481 483 490 493 494 495 496 504 506 510 513 ", "518 520 522 525 527 528 532 539 540 544 546 550 55", "1 552 555 558 560 561 567 570 572 575 576 580 585 ", "588 589 592 594 595 598 600 608 609 612 616 620 62", "1 624 627 629 630 637 638 640 644 646 648 650 651 ", "660 663 665 666 667 672 675 680 682 684 690 693 69", "6 700 702 703 704 713 714 715 720 725 728 735 736 ", "740 741 744 748 754 756 759 760 765 768 770 775 77", "7 780 782 783 784 792 798 800 805 806 810 812 814 ", "816 819 825 828 832 833 836 837 840 850 851 855 85", "8 864 868 870 874 880 882 884 888 891 896 897 899 ", "900 910 912 918 920 924 925 928 930 931 935 936 94", "5 950 952 957 960 962 966 969 975 980 986 988 990 ", "992 999 1001 1008 1012 1015 1020 1023 1026 1035 10", "36 1040 1044 1045 1050 1053 1054 1056 1064 1071 10", "73 1078 1080 1085 1088 1092 1100 1102 1104 1105 11", "10 1116 1120 1122 1127 1131 1134 1140 1144 1147 11", "50 1152 1155 1160 1170 1173 1176 1178 1184 1188 11", "90 1196 1197 1200 1209 1216 1218 1221 1224 1225 12", "32 1235 1240 1242 1248 1254 1258 1260 1265 1274 12", "75 1276 1280 1287 1288 1292 1295"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 22104;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    long n = 979999812400008178;
    vector<string> special = {"1 2 4 699999953 699999913 699999933 32144324"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    long n = 614889782588491410;
    vector<string> special = {"2 3 5 7 11 13 17 19 23 29 31", " 37 41 43 47 6 10 14 22 ", "26 34 38 46 58 ", "62 74 82 86 94 15 21 33", " 39 51 57 69 87 93 111 ", "123 129 141", " 35 55 65 85 95 115 145 155 ", "185 205 215 235 77 91 119 133 161 203", " 217 259 287 301 329 143 187 209 253 319 341 ", "407 451 473 517 221 247", " 299 377 403 481 533 559 611 323 391 493 527 ", "629 697 731 799 437 551 589", " 703 779 817 893 667 713 851 943 989 1081 899 ", "1073 1189 1247 1363 1147 1271 1333", " 1457 1517 1591 1739 1763 1927 2021", " 18 30 42 66 78 102 114 138 174 186 222 ", "246 258 282 50", " 70 110 130 170 190 230 290 310 ", "370 410 430 470 98 154", " 182 238 266 322 406 434 518 574 602", " 658 242 286 374 418 506 638 682 814 902 946 1034", " 338 442 494 598 754 806 962 1066 ", "1118 1222 578 646 782", " 986 1054 1258 1394 1462 1", "598 722 874 1102 1178 1406 1558 1634 ", "1786 1058 1334 14", "26 1702 1886 1978 2162 1682 1798 2146 ", "2378 2494 2726 1922", " 2294 2542 2666 2914 2738 3034 3182", " 3478 3362 3526 3854 3698 4042 4418 12 75", " 105 165 195 255 285 345 435 465 555", " 615 645 705 147 231 273 357 399 483 609", " 651 777 861 903 987 363 429 561 627", " 759 957 1023 1221 1353 1419 1551 507", " 663 741 897 1131 1209 1443 1599 1677 1833 867 969", " 1173 1479 1581 1887 2091 2193 2397 1083 1311", " 1653 1767 2109 2337", " 2451 2679 1587 2001 2139 2553 2829 2967 3243", " 2523 2697 3219 3567 3741 4089 2883 3441 3813 ", "3999 4371 4107 4551 4773 5217 5043 5289 5781", " 5547 6063 6627 20 45 245 385 455 595", " 665 805 1015 1085 1295 1435 1505 1645 605", " 715 935 1045 1265 1595 1705 2035", " 2255 2365 2585 845 1105 1235 1495 1885"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 57722824;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    long n = 13082761331670030;
    vector<string> special = {"1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 86 123 154", " 165 255 2139 2294 2795 4182 4902 5083 5313 6902 7", "714 9842 10879 13585 14637 15283 16095 17589 23865", " 28101 28490 32395 33495 38285 39767 41055 43586 4", "7355 48174 49335 51865 62031 65379 66526 71079 748", "65 76670 78474 103530 103730 104533 116870 121771 ", "130169 132990 155155 155595 182091 182410 183106 2", "46605 259935 295926 309111 327918 345345 345506 44", "6082 448477 458337 512302 548895 608465 629090 650", "845 659362 660858 665038 674245 747813 817817 8452", "15 852397 868434 911183 927010 965770 972230 98698", "6 988494 1002478 1038407 1069926 1073667 1172395 1", "216930 1263994 1287195 1333310 1394697 1456730 146", "8005 1479630 1495762 1539755 1635634 1652145 17448", "97 1752135 1826565 1847706 1873495 1888887 1895991", " 1971915 2063698 2131467 2781506 2903538 3002846 3", "215630 3222219 3231615 3282307 3304290 3459729 351", "7185 3568565 3958297 4003363 4089085 4124302 44517", "90 4462755 4487286 4515863 4652557 4875770 4991217", " 5058735 5274165 5290230 5958381 6220181 6220810 6", "592677 7465731 7647937 7759455 7940681 8390305 900", "1878 9338406 9758210 9945637 9975570 9978826 10694", "530 10705695 10720047 11431046 11443719 11803715 1", "2966835 13049855 13402695 13416774 13708851 144118", "69 14920269 15076230 15241135 16649815 17395070 17", "652919 18083478 18185755 18723705 19831630 2052867", "3 21316218 21822906 22714041 22924330 22951470 231", "84311 24605630 25191894 26407381 26943929 27583611", " 27654418 28224105 28318290 30218435 31981845 3278", "2035 33916938 34948277 35965974 36899590 39587262 ", "40811407 41133455 41711802 43373154 44036993 44417", "022 49728185 51540445 52708755 53958765 55962130 5", "6429373 56528230 58116630 59360210 64675655 662094", "65 67501357 68772990 69350658 71065423 72407335 72", "519447 74028370 74798801 78686790 80059749 8079313", "0 85581111 87112454 87786699 97628790 101204026 10", "8308265 109383285 109555446 110698770 114797991 11", "4830053 115263177 119943942 132961114 134054994 13", "4646330 135165810 138555417 145660823 158576561 16", "5765215 175573398 177429714 184094610 188187909 18", "8607503 197596542 212656094 214622331 223092870 22", "3424990 227845815 236366878 238833610 239798702 25", "1761818 261514605 271340706 273743470 301632695 30", "5254551 312794986 320661055 320840949 338255043 34", "0413542 344002505 344490159 351800295 356885165 35", "9698053 365945910 388678155 396887678 415763985 41", "6736177 439220834 442461873 475729683 484601099 51", "0620313 547777230 598023790 628187937 664642914 67", "8407730 703721018 722453046 741154622 773359015 83", "3472354 868227230 879043854 885906065 908271155 97"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 4744;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    long n = 614889782588491410;
    vector<string> special = {"6 2 15 3 35 5 77 7 143 11 221 13 323 17", "437 19 667 23 899 29 1147 31 1517 37 ", "1763 41 2021 43 2491 47"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 441;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    long n = 614889782588491410;
    vector<string> special = {"2 3 5 7 11 13 17 19 23 29 31", " 37 41 43 47 6 10 14 22 ", "26 34 38 46 58 ", "62 74 82 86 94 15 21 33", " 39 51 57 69 87 93 111 ", "123 129 141", " 35 55 65 85 95 115 145 155 ", "185 205 215 235 77 91 119 133 161 203", " 217 259 287 301 329 143 187 209 253 319 341 ", "407 451 473 517 221 247", " 299 377 403 481 533 559 611 323 391 493 527 ", "629 697 731 799 437 551 589", " 703 779 817 893 667 713 851 943 989 1081 899 ", "1073 1189 1247 1363 1147 1271 1333", " 1457 1517 1591 1739 1763 1927 2021", " 18 30 42 66 78 102 114 138 174 186 222 ", "246 258 282 50", " 70 110 130 170 190 230 290 310 ", "370 410 430 470 98 154", " 182 238 266 322 406 434 518 574 602", " 658 242 286 374 418 506 638 682 814 902 946 1034", " 338 442 494 598 754 806 962 1066 ", "1118 1222 578 646 782", " 986 1054 1258 1394 1462 1", "598 722 874 1102 1178 1406 1558 1634 ", "1786 1058 1334 14", "26 1702 1886 1978 2162 1682 1798 2146 ", "2378 2494 2726 1922", " 2294 2542 2666 2914 2738 3034 3182", " 3478 3362 3526 3854 3698 4042 4418 12 75", " 105 165 195 255 285 345 435 465 555", " 615 645 705 147 231 273 357 399 483 609", " 651 777 861 903 987 363 429 561 627", " 759 957 1023 1221 1353 1419 1551 507", " 663 741 897 1131 1209 1443 1599 1677 1833 867 969", " 1173 1479 1581 1887 2091 2193 2397 1083 1311", " 1653 1767 2109 2337", " 2451 2679 1587 2001 2139 2553 2829 2967 3243", " 2523 2697 3219 3567 3741 4089 2883 3441 3813 ", "3999 4371 4107 4551 4773 5217 5043 5289 5781", " 5547 6063 6627 20 45 245 385 455 595", " 665 805 1015 1085 1295 1435 1505 1645 605", " 715 935 1045 1265 1595 1705 2035", " 2255 2365 2585 845 1105 1235 1495 1885", " 2015 2405 2665 2795 3055 1445 1615 1955", " 2465 2635 3145 3485 3655 3995 1805 2185 2755 2945"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 65689416;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    long n = 614889782588491410;
    vector<string> special = {"2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 6 10 15 1", "4 21 35 22 33 55 77 26 39 65 91 143 34 51 85 119 1", "87 221 38 57 95 133 209 247 323 46 69 115 161 253 ", "299 391 437 58 87 145 203 319 377 493 551 667 62 9", "3 155 217 341 403 527 589 713 899 74 111 185 259 4", "07 481 629 703 851 1073 1147 82 123 205 287 451 53", "3 697 779 943 1189 1271 1517 86 129 215 301 473 55", "9 731 817 989 1247 1333 1591 1763 94 141 235 329 5", "17 611 799 893 1081 1363 1457 1739 1927 2021 30 42", " 70 105 66 110 165 154 231 385 78 130 195 182 273 ", "455 286 429 715 1001 102 170 255 238 357 595 374 5", "61 935 1309 442 663 1105 1547 2431 114 190 285 266", " 399 665 418 627 1045 1463 494 741 1235 1729 2717 ", "646 969 1615 2261 3553 4199 138 230 345 322 483 80", "5 506 759 1265 1771 598 897 1495 2093 3289 782 117", "3 1955 2737 4301 5083 874 1311 2185 3059 4807 5681", " 174 290 435 406 609 1015 638 957 1595 2233 754 11", "31 1885 2639 4147 986 1479 2465 3451 5423 6409 110", "2 1653 2755 3857 6061 7163 1334 2001 3335 4669 733", "7 8671 186 310 465 434 651 1085 682 1023 1705 2387", " 806 1209 2015 2821 4433 1054 1581 2635 3689 5797 ", "6851 1178 1767 2945 4123 6479 7657 1426 2139 3565 ", "4991 7843 9269 1798 2697 4495 6293 9889 11687 222 ", "370 555 518 777 1295 814 1221 2035 2849 962 1443 2", "405 3367 5291 1258 1887 3145 4403 6919 8177 1406 2", "109 3515 4921 7733 9139 1702 2553 4255 5957 9361 1", "1063 2146 3219 5365 7511 11803 13949 2294 3441 573", "5 8029 12617 14911 246 410 615 574 861 1435 902 13", "53 2255 3157 1066 1599 2665 3731 5863 1394 2091 34", "85 4879 7667 9061 1558 2337 3895 5453 8569 10127 1", "886 2829 4715 6601 10373 12259 2378 3567 5945 8323", " 13079 15457 2542 3813 6355 8897 13981 16523 3034 ", "4551 7585 10619 16687 19721 258 430 645 602 903 15", "05 946 1419 2365 3311 1118 1677 2795 3913 6149 146", "2 2193 3655 5117 8041 9503 1634 2451 4085 5719 898", "7 10621 1978 2967 4945 6923 10879 12857 2494 3741 ", "6235 8729 13717 16211 2666 3999 6665 9331 14663 17", "329 3182 4773 7955 11137 17501 20683 3526 5289 881", "5 12341 19393 22919 282 470 705 658 987 1645 1034 ", "1551 2585 3619 1222 1833 3055 4277 6721 1598 2397 ", "3995 5593 8789 10387 1786 2679 4465 6251 9823 1160", "9 2162 3243 5405 7567 11891 14053 2726 4089 6815 9", "541 14993 17719 2914 4371 7285 10199 16027 18941 3", "478 5217 8695 12173 19129 22607 3854 5781 9635 134", "89 21197 25051 4042 6063 10105 14147 22231 26273"};
    EllysNumbers* pObj = new EllysNumbers();
    clock_t start = clock();
    long result = pObj->getSubsets(n, special);
    clock_t end = clock();
    delete pObj;
    long expected = 210590248;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=14727&pm=11787
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
#define SIZE(X) ((int)(X.size())) 
#define MP(X,Y) make_pair(X,Y) 
typedef long long int64; 
#define two(X) (1<<(X)) 
typedef pair<int,int> ipair; 
 
class EllysNumbers 
{ 
public: 
  int length; 
  int key[60000]; 
  int64 f[two(20)]; 
  int64 getSubsets(int64 n, vector <string> vs) 
  { 
    string str=""; 
    for (int i=0;i<SIZE(vs);i++) str+=vs[i]; 
    vector<int> a; 
    istringstream sin(str); 
    for (int p;sin>>p;a.push_back(p)); 
    set<int> S; 
    for (int i=0;i<SIZE(a);i++) 
      for (int m=a[i],p=2;m>1;) 
      { 
        if (m%p==0)  
        { 
          S.insert(p); 
          for (;m%p==0;m/=p); 
        } 
        if (p&1) p+=2; 
        else p++; 
        if (p*p>m) p=m; 
      } 
    vector<int> GS(S.begin(),S.end()); 
    vector<ipair> D; 
    for (int i=0;i<SIZE(GS);i++) 
      if (n%GS[i]==0) 
      { 
        int e=0; 
        for (;n%GS[i]==0;n/=GS[i]) e++; 
        D.push_back(MP(GS[i],e)); 
      } 
    if (n>1) return 0; 
    int size=SIZE(D); 
    length=0; 
    for (int i=0;i<SIZE(a);i++) 
    { 
      int set=0; 
      int m=a[i]; 
      for (int k=0;k<size;k++) 
      { 
        int p=D[k].first; 
        int e=0; 
        for (;m%p==0;m/=p) e++; 
        if (e>0 && e!=D[k].second) 
        { 
          set=-1; 
          break; 
        } 
        if (e==D[k].second) set|=two(k); 
      } 
      if (m==1 && set>=0) key[length++]=set; 
    } 
    memset(f,0,sizeof(f)); 
    f[0]=1; 
    for (int i=0;i<length;i++) 
    { 
      int mask=key[i]; 
      for (int set=0;set<two(size);set++)  
        if (f[set] && (set&mask)==0) 
          f[set|key[i]]+=f[set]; 
    } 
    return f[two(size)-1]; 
  } 
};

********************************************************************************
*******************************************************************************/