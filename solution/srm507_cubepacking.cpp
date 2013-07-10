/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11266
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

class CubePacking {
public:
    int getMinimumVolume(int Ns, int Nb, int L);
};

int CubePacking::getMinimumVolume(int Ns, int Nb, int L) {
    int ret;
    return ret;
}


int test0() {
    int Ns = 2;
    int Nb = 2;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int Ns = 19;
    int Nb = 1;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int Ns = 51;
    int Nb = 7;
    int L = 5;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 950;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int Ns = 12345;
    int Nb = 987;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 999400;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int Ns = 1000000000;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int Ns = 158846335;
    int Nb = 973328;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 868402447;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int Ns = 87549617;
    int Nb = 866889;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 954438617;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int Ns = 148880604;
    int Nb = 739785;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 888665604;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int Ns = 80302604;
    int Nb = 397195;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 477497604;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int Ns = 64467984;
    int Nb = 635963;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 700430984;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int Ns = 144296168;
    int Nb = 978414;
    int L = 7;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 479892170;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int Ns = 77804954;
    int Nb = 940614;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 763512560;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int Ns = 44813785;
    int Nb = 687136;
    int L = 8;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 396627417;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int Ns = 241750556;
    int Nb = 940748;
    int L = 8;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 723413532;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int Ns = 185496388;
    int Nb = 924020;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1109516388;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int Ns = 884755356;
    int Nb = 1000000;
    int L = 8;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1396755360;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int Ns = 958268793;
    int Nb = 1000000;
    int L = 8;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1470268800;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int Ns = 914241600;
    int Nb = 1000000;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1643241600;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int Ns = 961809120;
    int Nb = 1000000;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1690809120;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int Ns = 745944200;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1745944200;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int Ns = 837836000;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1837836000;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int Ns = 862340476;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1862340480;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int Ns = 889727838;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1889727840;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int Ns = 989187200;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1989187200;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int Ns = 301;
    int Nb = 735134;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 735134400;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int Ns = 701;
    int Nb = 821620;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 821620800;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int Ns = 201;
    int Nb = 931170;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 931170300;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int Ns = 501;
    int Nb = 994593;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 994593600;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int Ns = 503;
    int Nb = 994593;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 994593600;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int Ns = 1;
    int Nb = 1;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int Ns = 3;
    int Nb = 4;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int Ns = 5;
    int Nb = 7;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int Ns = 9;
    int Nb = 10;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int Ns = 1;
    int Nb = 1;
    int L = 3;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int Ns = 3;
    int Nb = 4;
    int L = 3;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int Ns = 5;
    int Nb = 7;
    int L = 3;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int Ns = 9;
    int Nb = 10;
    int L = 3;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 279;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int Ns = 1;
    int Nb = 1;
    int L = 4;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int Ns = 3;
    int Nb = 4;
    int L = 4;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 272;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int Ns = 5;
    int Nb = 7;
    int L = 4;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 464;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int Ns = 9;
    int Nb = 10;
    int L = 4;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 656;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int Ns = 1;
    int Nb = 1;
    int L = 5;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int Ns = 3;
    int Nb = 4;
    int L = 5;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 525;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int Ns = 5;
    int Nb = 7;
    int L = 5;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int Ns = 9;
    int Nb = 10;
    int L = 5;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1275;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int Ns = 17;
    int Nb = 15;
    int L = 3;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 423;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int Ns = 15;
    int Nb = 15;
    int L = 3;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 423;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int Ns = 15;
    int Nb = 15;
    int L = 3;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 423;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int Ns = 9;
    int Nb = 12;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int Ns = 4;
    int Nb = 4;
    int L = 5;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 525;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int Ns = 17;
    int Nb = 882;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 882100;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int Ns = 3;
    int Nb = 880;
    int L = 6;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 190116;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int Ns = 4;
    int Nb = 443;
    int L = 5;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 55400;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int Ns = 17;
    int Nb = 151;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 151100;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int Ns = 14;
    int Nb = 885;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 885100;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int Ns = 970;
    int Nb = 108;
    int L = 6;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 24300;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int Ns = 1315;
    int Nb = 228;
    int L = 7;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 79527;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int Ns = 1585;
    int Nb = 265;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 194805;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int Ns = 803;
    int Nb = 121;
    int L = 5;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 15950;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int Ns = 1371;
    int Nb = 197;
    int L = 6;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 43956;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int Ns = 400;
    int Nb = 725055;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 528565500;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int Ns = 379;
    int Nb = 804997;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 586843218;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int Ns = 282;
    int Nb = 737188;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 537410376;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int Ns = 82;
    int Nb = 692939;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 505152693;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int Ns = 306;
    int Nb = 521732;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 380342952;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int Ns = 669515080;
    int Nb = 64;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 669561736;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int Ns = 844185714;
    int Nb = 186;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 844371715;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int Ns = 950316674;
    int Nb = 232;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 950485806;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int Ns = 829708064;
    int Nb = 29;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 829737064;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int Ns = 990536539;
    int Nb = 79;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 990594130;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int Ns = 1;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000100;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int Ns = 999999901;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999901;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int Ns = 167730;
    int Nb = 869019;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 7119882;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int Ns = 118174;
    int Nb = 968711;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 7867862;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int Ns = 4151482;
    int Nb = 869021;
    int L = 5;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 112779108;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int Ns = 2484853;
    int Nb = 968712;
    int L = 5;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 123573855;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int Ns = 15862062;
    int Nb = 869018;
    int L = 8;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 460799278;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int Ns = 9515102;
    int Nb = 968712;
    int L = 8;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 505495647;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int Ns = 18286709;
    int Nb = 997037;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1015323710;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int Ns = 28284720;
    int Nb = 997763;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1026047724;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int Ns = 15341038;
    int Nb = 998941;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1014282040;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int Ns = 17203816;
    int Nb = 998812;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1016015819;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int Ns = 72826905;
    int Nb = 999596;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1072422908;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int Ns = 9170969;
    int Nb = 998715;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1007885970;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int Ns = 75202299;
    int Nb = 999947;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1075149300;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int Ns = 14147142;
    int Nb = 997688;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1011835143;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int Ns = 41286366;
    int Nb = 999647;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1040933370;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int Ns = 15234487;
    int Nb = 997773;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1013007490;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int Ns = 62794643;
    int Nb = 999306;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1062100643;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int Ns = 53252183;
    int Nb = 980100;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1033352183;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int Ns = 53252177;
    int Nb = 980100;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1033352183;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int Ns = 73381457;
    int Nb = 970200;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1043581457;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int Ns = 72069673;
    int Nb = 979608;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1051677673;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int Ns = 11797734;
    int Nb = 998688;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1010485734;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int Ns = 15379504;
    int Nb = 959136;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 974515504;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int Ns = 411280731;
    int Nb = 999100;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1410380731;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int Ns = 995616979;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1995616979;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int Ns = 1518941;
    int Nb = 999999;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1001518000;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int Ns = 7;
    int Nb = 902778;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 902778100;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int Ns = 1;
    int Nb = 999190;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 999190100;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int Ns = 1631310;
    int Nb = 997969;
    int L = 5;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 126377440;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int Ns = 861860;
    int Nb = 999972;
    int L = 4;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 64860075;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int Ns = 659203;
    int Nb = 506792;
    int L = 8;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 260136720;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int Ns = 7076;
    int Nb = 318;
    int L = 7;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 116172;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int Ns = 1239;
    int Nb = 3;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 4290;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int Ns = 498108;
    int Nb = 660735;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 661233160;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int Ns = 974932;
    int Nb = 998158;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 728632170;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int Ns = 945702;
    int Nb = 493482;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 494427780;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int Ns = 424242424;
    int Nb = 42;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 424284425;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int Ns = 999999999;
    int Nb = 999999;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1999998999;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int Ns = 1000000000;
    int Nb = 559321;
    int L = 7;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1191847103;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int Ns = 1000000000;
    int Nb = 1000000;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1008000000;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int Ns = 1000000000;
    int Nb = 1;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000008;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int Ns = 999999927;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999929;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int Ns = 973929286;
    int Nb = 959492;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1933421290;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int Ns = 708293742;
    int Nb = 6;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 708299745;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int Ns = 367431778;
    int Nb = 990001;
    int L = 7;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 707002121;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int Ns = 3003001;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1003003001;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int Ns = 898653117;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1898653117;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int Ns = 28;
    int Nb = 4;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int Ns = 324932;
    int Nb = 924789;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 674496153;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int Ns = 540470871;
    int Nb = 279874;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 820344871;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int Ns = 200010;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1000200010;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int Ns = 987464534;
    int Nb = 999999;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1987463534;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int Ns = 999999888;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999888;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int Ns = 999999999;
    int Nb = 999999;
    int L = 7;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1342999656;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int Ns = 994007910;
    int Nb = 1;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 994008910;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int Ns = 924325327;
    int Nb = 523425;
    int L = 8;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1192318928;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int Ns = 1000000000;
    int Nb = 999998;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1728998544;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int Ns = 987654;
    int Nb = 5432;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 4947588;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int Ns = 41429;
    int Nb = 12;
    int L = 8;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 47575;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int Ns = 810304731;
    int Nb = 1000000;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1539304731;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int Ns = 33;
    int Nb = 1;
    int L = 3;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int Ns = 99999997;
    int Nb = 923591;
    int L = 7;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 416791710;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int Ns = 300030001;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1300030004;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int Ns = 22191114;
    int Nb = 1;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 22191122;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int Ns = 562131235;
    int Nb = 121454;
    int L = 8;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 624315684;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int Ns = 7439143;
    int Nb = 999999;
    int L = 7;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 350438803;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int Ns = 456456223;
    int Nb = 62361;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 518817223;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int Ns = 999999915;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999915;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int Ns = 901030507;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1901030508;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int Ns = 9090910;
    int Nb = 909091;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 918181935;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int Ns = 981026972;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1981026972;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int Ns = 36036009;
    int Nb = 444889;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 360360090;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int Ns = 58;
    int Nb = 2;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int Ns = 99999999;
    int Nb = 999999;
    int L = 7;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 442999656;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int Ns = 474192748;
    int Nb = 562458;
    int L = 6;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 595683676;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int Ns = 123456789;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1123456790;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int Ns = 784770597;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1784770597;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int Ns = 958645123;
    int Nb = 999999;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1958644125;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int Ns = 42;
    int Nb = 2;
    int L = 3;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int Ns = 127;
    int Nb = 27;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 343;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int Ns = 102701599;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1102701600;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int Ns = 669278610;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1669278610;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int Ns = 800880234;
    int Nb = 1;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 800880242;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int Ns = 117;
    int Nb = 1;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int Ns = 14;
    int Nb = 2;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int Ns = 333;
    int Nb = 4;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 3249;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int Ns = 627100610;
    int Nb = 5;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 627105610;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int Ns = 25504074;
    int Nb = 1;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 25504082;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int Ns = 743755532;
    int Nb = 229290;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 973045532;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int Ns = 801280454;
    int Nb = 1;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 801280462;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int Ns = 1000000000;
    int Nb = 1000000;
    int L = 3;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1027000000;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int Ns = 424504147;
    int Nb = 1000000;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 432504147;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int Ns = 19;
    int Nb = 1;
    int L = 3;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int Ns = 11741850;
    int Nb = 1;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 11741858;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int Ns = 999999729;
    int Nb = 27244;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1027243729;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int Ns = 999999912;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999914;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int Ns = 2000;
    int Nb = 2000;
    int L = 3;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 56004;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int Ns = 4072054;
    int Nb = 160000;
    int L = 5;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 24072054;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int Ns = 89;
    int Nb = 21;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 258;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int Ns = 677162373;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1677162373;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int Ns = 874970314;
    int Nb = 64255;
    int L = 6;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 888849395;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int Ns = 456465;
    int Nb = 7897;
    int L = 8;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 4499730;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int Ns = 992441242;
    int Nb = 9789;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1002230242;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int Ns = 10;
    int Nb = 1;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int Ns = 924911857;
    int Nb = 451660;
    int L = 5;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 981369358;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int Ns = 102701593;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1102701594;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int Ns = 63236250;
    int Nb = 1;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 63236258;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int Ns = 999977;
    int Nb = 1;
    int L = 3;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1000004;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int Ns = 912951531;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1912951531;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int Ns = 9962;
    int Nb = 1;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 9970;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int Ns = 999999997;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999998;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int Ns = 27243729;
    int Nb = 1000000;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1027243729;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int Ns = 7761187;
    int Nb = 843900;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 851661187;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int Ns = 588558885;
    int Nb = 663601;
    int L = 9;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1072324014;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int Ns = 13;
    int Nb = 2;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int Ns = 123456789;
    int Nb = 999997;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1123453791;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int Ns = 1000000000;
    int Nb = 1;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1000001000;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int Ns = 999999999;
    int Nb = 1;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000008;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int Ns = 18;
    int Nb = 1;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int Ns = 57;
    int Nb = 1;
    int L = 3;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int Ns = 75908;
    int Nb = 1;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 75916;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int Ns = 295879057;
    int Nb = 685714;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 301364769;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int Ns = 900001133;
    int Nb = 1;
    int L = 2;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 900001142;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int Ns = 197410;
    int Nb = 974153;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 974350410;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int Ns = 978958785;
    int Nb = 987589;
    int L = 10;
    CubePacking* pObj = new CubePacking();
    clock_t start = clock();
    int result = pObj->getMinimumVolume(Ns, Nb, L);
    clock_t end = clock();
    delete pObj;
    int expected = 1966547786;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15982182&rd=14436&pm=11266
********************************************************************************
#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>
 
using namespace std;
typedef long long int64;
typedef double real;
const int MaxN = 10004;
 
class CubePacking
{
public:
 int getMinimumVolume (int Ns, int Nb, int L)
 {
  int a, b, c, S, V, res, temp;
  S = L * L;
  V = S * L;
  for (res = V * Nb + Ns; ; res++)
  {
   for (a = 1; a * a <= res; a++)
    if (res % a == 0)
    {
     temp = res / a;
     for (b = 1; b * b <= temp; b++)
      if (temp % b == 0)
      {
       c = temp / b;
       if ((a / L) * (b / L) * (c / L) >= Nb)
        return res;
      }
    }
  }
  return -1;
 }
};
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/