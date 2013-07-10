/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12350
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

class MonstersValley {
public:
    int minimumPrice(vector<long> dread, vector<int> price);
};

int MonstersValley::minimumPrice(vector<long> dread, vector<int> price) {
    int ret;
    return ret;
}


int test0() {
    vector<long> dread = {8, 5, 10};
    vector<int> price = {1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<long> dread = {1, 2, 4, 1000000000};
    vector<int> price = {1, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<long> dread = {200, 107, 105, 206, 307, 400};
    vector<int> price = {1, 2, 1, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<long> dread = {5216, 12512, 613, 1256, 66, 17202, 30000, 23512, 2125, 33333};
    vector<int> price = {2, 2, 1, 1, 1, 1, 2, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<long> dread = {606};
    vector<int> price = {2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<long> dread = {524657775};
    vector<int> price = {2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<long> dread = {3, 2, 5, 7};
    vector<int> price = {1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<long> dread = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<long> dread = {1, 2, 4, 6, 16, 19, 64, 105, 256, 464, 1024, 1463, 4096, 4515, 16384, 21445, 65536, 68543, 262144, 479277};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<long> dread = {1999999991, 1999999992, 1999999993, 1999999994, 1999999995, 1999999996, 1999999997, 1999999998, 1999999999, 2000000000};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
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
    vector<long> dread = {276378, 939933, 574877, 888702, 683628};
    vector<int> price = {1, 1, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<long> dread = {492214, 378290, 162083, 858555};
    vector<int> price = {2, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<long> dread = {138742, 878514, 852494, 542526, 953090, 618335, 834947, 451187, 818761, 498817, 701160, 996792, 845435, 145660, 183611, 150459, 635733, 718307};
    vector<int> price = {2, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<long> dread = {406711, 813026, 985429, 693445, 653459, 851295, 299367, 676132, 770750, 363356, 658504};
    vector<int> price = {2, 2, 2, 1, 2, 2, 1, 1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<long> dread = {278033, 630470, 39142, 604719, 36490, 400221, 576007, 298209, 202048, 406921};
    vector<int> price = {1, 2, 1, 2, 1, 1, 2, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<long> dread = {549037, 846063, 786688, 666614, 592108};
    vector<int> price = {1, 2, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<long> dread = {229505, 433280, 915022};
    vector<int> price = {1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<long> dread = {773105};
    vector<int> price = {2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<long> dread = {633301, 301906, 445427, 509043, 673939};
    vector<int> price = {2, 1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<long> dread = {274987, 988110, 468154, 354593};
    vector<int> price = {2, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<long> dread = {597625, 249122, 838726, 402201, 933860, 658620};
    vector<int> price = {2, 2, 2, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<long> dread = {202840, 843337, 326007, 731681, 931244, 610300, 140830, 347449, 178713, 160244, 772831, 243548, 350741, 445070, 943259, 85348};
    vector<int> price = {1, 2, 1, 2, 2, 2, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<long> dread = {78341, 111924, 510644, 87408, 619644, 910888, 695650, 66650, 223357};
    vector<int> price = {1, 1, 2, 1, 1, 1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<long> dread = {854876, 611886, 818411, 568380, 109228, 412632, 148292, 177354, 806246, 831430, 643369, 671409, 374510, 97982};
    vector<int> price = {2, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
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
    vector<long> dread = {333735, 907985, 13361, 107282, 879340, 825598, 497004, 35801, 451639, 541320, 859429, 587990, 989163};
    vector<int> price = {1, 2, 1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<long> dread = {730354301, 612652745, 231201198, 1785940683, 1573792486, 1862050299, 55215265, 1482185079, 580169303, 745811023, 116284213, 1674085202, 243582700, 1259989441, 459631588, 1113164735, 549938993, 1675101506, 144384566, 1897340738};
    vector<int> price = {2, 1, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<long> dread = {1415229038, 834285838, 1214442017, 1217534876};
    vector<int> price = {2, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<long> dread = {368805779, 1818947888, 1788720857, 1788391727, 659610167, 1757059785, 1951203365, 1365448488, 1291565579, 212981422};
    vector<int> price = {1, 2, 1, 1, 1, 2, 1, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<long> dread = {953379700, 1963120299, 648003103, 1545329216, 248966873, 997656371, 1408722762, 640985409, 150299963, 651226125, 1983428467};
    vector<int> price = {2, 1, 1, 1, 2, 1, 2, 2, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<long> dread = {1547217503, 1787964172, 281041017, 127192884, 686068400, 1518709677, 75143338, 877524025, 1830002240, 95142533, 1229301205};
    vector<int> price = {2, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<long> dread = {131144893, 1253402892, 327490895, 758530919, 575176500, 1048213981, 636183295, 306142540, 475491284, 117815209, 894552824, 1065451684};
    vector<int> price = {2, 2, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<long> dread = {1691715165, 1069375201, 110077378, 367162390, 1055161432, 232475527};
    vector<int> price = {2, 1, 2, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<long> dread = {559787380, 111124697, 211951612, 26295899, 989297246, 813172925};
    vector<int> price = {1, 2, 1, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<long> dread = {86780821, 1140185415, 85548635, 347237270, 1167764408, 1604033858, 1993911067, 1875463689, 1361486142, 675528710, 1858647747, 1826530257, 1355912372, 1314505700, 194376352, 1067180132};
    vector<int> price = {1, 2, 1, 1, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<long> dread = {853744211, 1559615791, 866431564, 1860458362, 1080823152, 973755754, 926899774};
    vector<int> price = {1, 1, 1, 1, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<long> dread = {637463334, 492295149, 644830292, 569798827, 43394064, 1651455355, 898690609, 1248694777, 1949378803, 931930223};
    vector<int> price = {2, 2, 1, 1, 2, 1, 1, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<long> dread = {1992350787, 1204067578, 1971977184, 1986727084, 550738791, 958698508};
    vector<int> price = {2, 1, 1, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<long> dread = {1383678529, 138906144, 940996497, 619586457};
    vector<int> price = {1, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<long> dread = {1782688262, 895047095, 1625373870, 1009836949, 985560038, 1470346827, 296839142, 34727454, 413009041, 1114435639, 1692481802, 422406335, 795130000, 1455087504, 410389760, 961349143, 1693064512, 621415696, 98442513};
    vector<int> price = {2, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<long> dread = {992388416, 198261504, 772412033, 1889458810};
    vector<int> price = {1, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<long> dread = {55812, 129413, 3369997, 2698415, 50526015, 32026198, 5355511, 100092466, 265746384, 156194334, 99374300, 635472617, 180646818, 91608661, 417850817, 1022057911, 1729513937};
    vector<int> price = {1, 1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<long> dread = {2589192, 23314744, 97814, 245124401, 390282178, 758765331, 159041187, 1912259796};
    vector<int> price = {1, 2, 1, 2, 2, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<long> dread = {1661394, 73478485, 124895705, 402068495, 507240373, 1961191628};
    vector<int> price = {1, 1, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
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
    vector<long> dread = {1252017, 3776329, 21140492, 5357875, 59227052, 88302560, 344236822, 52938928, 256182128, 321584565, 22692247};
    vector<int> price = {2, 2, 1, 1, 1, 2, 2, 1, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<long> dread = {174927, 10654989, 55924062, 70457525, 52549382, 393666222, 773214540, 1177429024, 1280559141};
    vector<int> price = {2, 1, 1, 2, 2, 1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
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
    vector<long> dread = {335520, 7166533, 19084297, 44364675, 66301712, 243376382, 369091309, 441177770, 553345446, 768799475, 1459642711, 854126713};
    vector<int> price = {2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<long> dread = {178041, 241271, 3554145, 15146146, 29336857, 41372319, 78867753, 27414201, 108212503, 69279302, 312855571, 110338295, 82908093, 467516892, 125004100, 434086364, 172491586, 1039740703, 590277, 1754775248};
    vector<int> price = {1, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<long> dread = {149235, 2702103, 9621991, 16444946, 24895184, 48928723, 127681201, 45700795, 234008969, 114105628, 350087054, 311983334, 652890170, 347935195, 390614530, 893201743, 1889846895};
    vector<int> price = {1, 2, 1, 2, 1, 2, 2, 2, 1, 1, 1, 2, 1, 2, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<long> dread = {590449, 4731049, 1584478, 100420763, 86249282, 194454422, 808571587, 534818108, 1742459894};
    vector<int> price = {1, 2, 1, 2, 2, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<long> dread = {758992, 6901301, 80078202, 103054334, 331245983, 851301800, 209431393};
    vector<int> price = {2, 2, 2, 1, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<long> dread = {375459, 617787, 10425424, 12611536, 12212171, 75005736, 8846978, 9301694, 142058581, 72615651, 60574288, 592619153, 459336400, 430567015, 1287700983, 1045283211, 269698502};
    vector<int> price = {1, 1, 1, 2, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<long> dread = {197538, 2088936, 3509470, 20939186, 50206421, 22604497, 133400415, 187910255, 11826249, 388209892, 6886617, 588380619, 240052207, 63701601, 551901468, 209580949, 1758858199};
    vector<int> price = {2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<long> dread = {3843, 437808, 4088636, 21920545, 17728351, 17282550, 111536526, 20625035, 71882430, 129029409, 39581290, 535389768, 749333266, 558761224, 687500849, 1309193142, 1247523583, 1385101352};
    vector<int> price = {2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 1, 2, 2, 1, 2, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<long> dread = {7290252, 124728206, 425327327, 980140755, 1694076474};
    vector<int> price = {2, 1, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<long> dread = {849513, 6100784, 12751708, 26051050, 84524432, 275567165, 512229310, 936185513, 539883036, 315995883};
    vector<int> price = {1, 2, 1, 2, 2, 2, 1, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<long> dread = {443857, 5975205, 24095251, 43860354, 49925895, 60205760, 294428884, 207406340, 463155265, 813378725, 757188699, 1390259091, 1674862744};
    vector<int> price = {1, 1, 1, 1, 1, 2, 2, 1, 2, 1, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<long> dread = {250438, 568979, 18796848, 31305606, 81014756, 98204282, 141687369, 97810698, 220060650, 631383745, 777312423, 156798369, 1845437234};
    vector<int> price = {1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<long> dread = {672107, 2643074, 529850, 35636615, 81113168, 96575175, 104125968, 39236967, 165081715, 60078595, 914507263, 175347362, 679297708, 1718078629};
    vector<int> price = {1, 1, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<long> dread = {167878, 3169023, 3526829, 15558338, 8689814, 15469622, 70341228, 161912435, 270279010, 191495798, 471391453, 336129399, 667939157, 772487373, 1109149871, 296224343, 35789463};
    vector<int> price = {2, 2, 1, 2, 2, 1, 1, 1, 2, 2, 1, 1, 1, 2, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<long> dread = {122173, 2071445, 898765, 753106, 29143508, 54727654, 32025475, 142197187, 207263662, 350616206, 282479798, 567189003, 251941626, 357631619, 2918998, 697433033};
    vector<int> price = {2, 1, 1, 1, 2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<long> dread = {48219, 920898, 2179240, 9993589, 29116629, 59158375, 61577353, 39926727, 79239592, 92299665, 38869806, 114951159, 224003787, 252096248, 953956706, 626496202, 397656017, 434784538, 1407497740};
    vector<int> price = {1, 2, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2, 1, 1, 2, 1, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<long> dread = {117426, 417423, 6529466, 13572907, 20582830, 3355360, 56555551, 6642336, 186172523, 186804224, 15277581, 59444651, 254457068, 310528342, 423416841, 782884539, 743464702, 369610019, 643257039};
    vector<int> price = {1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<long> dread = {874437, 6826273, 39807214, 18556188, 38704414, 282109373, 314755786, 213092538, 134585833, 1119684013, 918295190};
    vector<int> price = {2, 1, 2, 1, 2, 1, 2, 1, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<long> dread = {265556, 2061422, 1500718, 17959647, 28180125, 82100102, 134639402, 206809129, 187309364, 128555403, 439962828, 102933635, 669498463, 769511250, 1169307215, 196661619, 1182466435};
    vector<int> price = {2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<long> dread = {3257543, 372916, 73752274, 95265442, 170354021, 300856091, 141810509, 1488011678};
    vector<int> price = {2, 1, 1, 1, 2, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
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
    vector<long> dread = {678548, 1356065, 3601825, 12822103, 103809657, 193401443, 234096960, 74135382, 579744808, 141624669, 731841174, 446013106, 465189490};
    vector<int> price = {2, 2, 1, 1, 1, 1, 2, 2, 2, 1, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<long> dread = {319437, 1878550, 3190318, 20409721, 14727941, 43516041, 93601628, 163005037, 136571399, 254741226, 109779898, 201373153, 316232079, 24567749, 400406805, 1018098274, 1550461119, 36029233};
    vector<int> price = {2, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<long> dread = {1191368, 44420765, 64593392, 244992255, 147789565, 557199513, 1613458523};
    vector<int> price = {1, 1, 2, 1, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<long> dread = {6928298, 51309118, 152835695, 208537301, 692935143, 1301925202};
    vector<int> price = {2, 1, 2, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<long> dread = {45990, 1720448, 2902020, 21294374, 51616526, 33583070, 69583419, 220564857, 59475757, 253250147, 542046018, 475926079, 435733089, 333071866, 119591805, 49108731};
    vector<int> price = {2, 2, 2, 2, 1, 1, 2, 1, 1, 2, 2, 1, 2, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<long> dread = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824, 2147483648, 4294967296, 8589934592, 17179869184, 34359738368, 68719476736, 137438953472, 274877906944};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<long> dread = {1, 2, 4, 6, 16, 21, 64, 68, 256, 433, 1024, 1801, 4096, 5004, 16384, 24009, 65536, 106642, 262144, 488701, 1048576, 1327726, 4194304, 7403789, 16777216, 30404973, 67108864, 109293997, 268435456, 321343466, 1073741824, 1434004360, 4294967296, 7511438982, 17179869184, 19716354953, 68719476736, 99016802775, 274877906944};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<long> dread = {8589934592, 4294967296, 2147483648, 1073741824, 536870912, 268435456, 134217728, 67108864, 33554432, 16777216, 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1, 89011169278, 900913592218, 573105180887, 579137087003, 149698905839, 832047692813, 558111502004, 253561629925, 876887316333, 235624898040, 155336388121, 197770970131, 463071223829, 345224747632, 921657583888, 881486688024};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<long> dread = {8589934592, 4294967296, 2147483648, 1073741824, 536870912, 268435456, 134217728, 67108864, 33554432, 16777216, 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1, 170191697543, 442151420049, 760562175049, 13784873423, 178349965388, 755005234214, 541764950940, 946482302586, 543713207966, 762391189316, 871034340034, 677925419895, 160143387182, 105796128936, 529757177900, 289213265278};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<long> dread = {8589934592, 4294967296, 2147483648, 1073741824, 536870912, 268435456, 134217728, 67108864, 33554432, 16777216, 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1, 869080653842, 569665478747, 353773362067, 894885954138, 112212256473, 835711002487, 571011899026, 440109545402, 771458413756, 968480786216, 867459345691, 926388852285, 90806199472, 839222560283, 700992187828, 897839277276};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 1, 2, 2, 1, 2, 2, 1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<long> dread = {999999999951, 999999999952, 999999999953, 999999999954, 999999999955, 999999999956, 999999999957, 999999999958, 999999999959, 999999999960, 999999999961, 999999999962, 999999999963, 999999999964, 999999999965, 999999999966, 999999999967, 999999999968, 999999999969, 999999999970, 999999999971, 999999999972, 999999999973, 999999999974, 999999999975, 999999999976, 999999999977, 999999999978, 999999999979, 999999999980, 999999999981, 999999999982, 999999999983, 999999999984, 999999999985, 999999999986, 999999999987, 999999999988, 999999999989, 999999999990, 999999999991, 999999999992, 999999999993, 999999999994, 999999999995, 999999999996, 999999999997, 999999999998, 999999999999, 1000000000000};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<long> dread = {430088673536};
    vector<int> price = {2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<long> dread = {945071963911, 427713947465, 632604075810};
    vector<int> price = {2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<long> dread = {217695411785, 330596466919};
    vector<int> price = {1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<long> dread = {833562810014, 164391651176, 983721773781};
    vector<int> price = {1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<long> dread = {935242062960, 14018634144};
    vector<int> price = {1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<long> dread = {8106477037, 440383185355, 568567155843, 369956985841, 720968244385, 115462422353, 757811111320, 104967579548, 743891563945};
    vector<int> price = {1, 2, 2, 1, 1, 1, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<long> dread = {285270005452, 392087883053, 770639476564, 618678083706, 158190690937, 13058221496, 39169217061, 414874032937};
    vector<int> price = {2, 2, 1, 1, 2, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<long> dread = {18896331820, 63269255425, 149441647239, 36377447580, 910432425779, 547129089518, 927380260080};
    vector<int> price = {2, 2, 1, 1, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<long> dread = {31958842913, 520689558948, 38141979320, 430835928022, 954453972297, 366383014140, 336230934451, 607091596070, 103894961427, 50574283304, 154272138621};
    vector<int> price = {1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<long> dread = {562874645601, 568917503496, 760752010667, 128993647788, 764458324323, 882712856708, 363008449503, 484540162436, 790450982138, 749260945238};
    vector<int> price = {2, 2, 1, 1, 1, 1, 1, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<long> dread = {686137700047, 413512243389, 272102555442, 726310393798, 993299637295};
    vector<int> price = {1, 2, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<long> dread = {1193302, 603926607, 859139548, 29240659939, 31199554547, 20384201685, 24837298200, 231796449456};
    vector<int> price = {1, 1, 1, 1, 2, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<long> dread = {23854, 463248, 373687, 12080611, 86000040, 269942726, 484629864, 784030646, 1607186809, 1588945461, 5542915279, 4908462295, 6577150842, 20888983351, 18149208591, 19150115308, 8367513679, 68714042583, 98033095434, 31527978694, 24062379472, 78873379914, 208630865221, 47028664979, 54009700555, 449669233694, 60761987835, 394862052123, 563126428214, 231615433015};
    vector<int> price = {1, 1, 1, 1, 1, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<long> dread = {236396, 1375154, 6367461, 43589284, 683863919, 1492255615, 1277887577, 3975423488, 3755744867, 12761274088, 19103175652, 10501759698, 39738368730, 26163383363, 133119395812, 98647817968, 257295091054, 289458321898, 470152965068, 285431370877, 745936619917};
    vector<int> price = {1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<long> dread = {486579, 33399101, 116769795, 991170195, 471022819, 1134156444, 11434572152, 22134259139, 70975822680, 38066490264, 63974050206, 198559672046, 346400680064, 121990180292, 148163512478};
    vector<int> price = {1, 2, 1, 1, 2, 1, 2, 1, 1, 2, 1, 2, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<long> dread = {591384, 22352546, 62109767, 90583161, 1053560862, 1707302962, 27984535164, 57653559162, 23697834402, 59957181347, 213970803153, 445442014609, 651236641757, 321932704437};
    vector<int> price = {2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<long> dread = {167519, 2579351, 25926850, 33672924, 503621546, 623043001, 1177804022, 9955787577, 14402224345, 11397580386, 23577979662, 66481516427, 25528432616, 21222424348, 30043861002, 155841351823, 402682129668, 56942404116, 570412761978, 35306710681};
    vector<int> price = {2, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 2, 1, 1, 2, 1, 1, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<long> dread = {13056906, 287417745, 11772468149, 39598042128, 269252864430, 184046044469};
    vector<int> price = {2, 1, 2, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<long> dread = {17420346, 884531633, 917097871, 22952639687, 5271396009, 182275093855, 262165406445, 917822611873};
    vector<int> price = {1, 1, 2, 1, 1, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<long> dread = {95697, 1698128, 18828265, 97754793, 91582600, 35266825, 334632523, 3349818666, 5145868409, 3082373333, 5391428665, 9610512134, 8012724719, 12548017559, 50746158637, 57470773666, 121864401997, 37402782419, 167146872522, 196574494415, 251298633055, 61308031254, 122298821473, 365182758796, 771503924273};
    vector<int> price = {2, 1, 1, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<long> dread = {1554, 2288542, 39690600, 80873370, 473158079, 1459006625, 27274168, 2114600218, 3375934953, 11429824419, 3320179833, 45374969570, 32092015623, 93231483516, 84717654388, 8594067502, 129692438104, 120933852113, 195449196316, 504342938227, 773050821925, 908156604276};
    vector<int> price = {1, 2, 1, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<long> dread = {516, 76962, 715143, 4233449, 218939, 32096865, 46368459, 158595111, 46918028, 151723364, 277050296, 1095407144, 1367250788, 1604311035, 2020393301, 3839096555, 2898212066, 4936093512, 2251843090, 7205942741, 10378594858, 22314762689, 19656860592, 10619628123, 18538763871, 17359783920, 60061570949, 64433683696, 49575833223, 104812566815, 3352944657, 154812076164, 38959320264, 28869236952, 54872805114, 52328045398, 34880941693, 302781869195, 307732887247, 39783982279, 416046105978, 519292177113, 185134353884, 406685459040, 315653902838, 646603757540};
    vector<int> price = {2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 1, 1, 2, 1, 1, 2, 2, 2, 1, 1, 2, 1, 2, 1, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<long> dread = {1157, 16310, 780193, 3504656, 2271819, 18267639, 5170811, 113216942, 6114721, 52540295, 400928591, 9935620, 871124804, 667322944, 1403753741, 3489896629, 379449350, 3357370437, 5130448463, 8683845064, 348819359, 17667456990, 12438211081, 25851315669, 13598289504, 5964776930, 44268095359, 3482200273, 60791165036, 16799313554, 34578864324, 996000500, 126680540745, 122234396941, 73803517177, 102190919221, 213139591397, 188707209190, 301524711559, 217185683466, 232889554668, 320115663168, 71871515255, 436993805335, 584771730161, 350077886559, 442274877401, 614363441610, 42335304852};
    vector<int> price = {1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 1, 2, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<long> dread = {2640, 68365, 121533, 2409352, 13119233, 2740807, 56991607, 6675584, 266605171, 307439920, 245975819, 109673829, 614057337, 1968561791, 159039458, 2482065729, 5905502239, 1752859673, 10366762774, 8767947881, 5023578536, 13539391753, 18213373058, 24638508005, 32600133793, 32007217505, 26648420775, 37472208466, 57341096552, 42655240477, 40856099822, 14986958926, 165765066370, 136966880036, 216377604548, 223904249340, 229706081128, 283108473000, 253652100205, 176885586759, 191606591782, 494704705173, 167293086604, 437661101965, 403462639691, 715780763856};
    vector<int> price = {1, 1, 2, 2, 1, 2, 1, 2, 2, 2, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1, 1, 2, 1, 1, 2, 1, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 1, 1, 2, 1, 2, 1, 2, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<long> dread = {4256, 187417, 488405, 6442091, 8436249, 43981123, 120796136, 103646625, 392032349, 258770431, 827182588, 954626649, 407950625, 229715097, 2428871026, 1183951394, 5480996259, 4736335773, 3924777673, 165167216, 25666760414, 6366478475, 31701441977, 53201795912, 8327045683, 60195015506, 97806912078, 3859724169, 133104179331, 34212476852, 7559035298, 212307407345, 122454363909, 270871598569, 150978142942, 265276397004, 289814642819, 122125271422, 504333951114, 455571327987, 560212973244, 970387591839};
    vector<int> price = {1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 1, 2, 1, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 2, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<long> dread = {1242, 385822, 1245478, 5463878, 38117148, 58893058, 257275018, 604360713, 345275594, 1133633961, 273395947, 939178166, 5760976646, 2905046282, 2873533632, 8671987514, 26078113240, 8247043473, 26641868078, 8706795772, 54373690564, 77201180603, 29737489231, 100784631481, 105532910641, 4596003382, 207610261077, 90487233183, 285537297757, 240219532008, 106738028194, 505424598771, 299504884889, 21563125767, 33652302181};
    vector<int> price = {1, 2, 2, 1, 1, 1, 1, 2, 1, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1, 1, 2, 1, 2, 2, 1, 2, 2, 1, 1, 1, 2, 1, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<long> dread = {8714, 26727, 603451, 3651335, 28691086, 62367796, 65483612, 102015490, 221078916, 897737608, 822974603, 2389434686, 1533212235, 1195069162, 2271940187, 9160540149, 3167287263, 11684829895, 20720900860, 29365053713, 10200942947, 19698710619, 59352978096, 32210472586, 59942188608, 109207507429, 40341559821, 34256247813, 2284965050, 159983201840, 255958588853, 56633662468, 112606348975, 285888050979, 294662255739, 339030370201, 483741142023, 307592989414, 51512860925, 182113687318};
    vector<int> price = {2, 2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<long> dread = {2469, 114464, 38679, 2434517, 7151733, 2458120, 61774826, 118382249, 67249871, 263101698, 591653708, 507211249, 158871181, 668122693, 1175342250, 1226068930, 4714421608, 1264248543, 3830170719, 151025847, 10301751714, 19344837500, 22161737199, 24622382588, 4480791484, 18882258523, 36841749104, 497189311, 38397210632, 69841272095, 77337115491, 14245812740, 150258362147, 167421005729, 188489386130, 65393119144, 109114850127, 216239720227, 303256780298, 330873424279, 88652570222, 259128669543, 278238052983, 201178522620, 407060990826, 520916300402, 53109735402, 82048521750};
    vector<int> price = {1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 1, 2, 1, 2, 1, 2, 2, 1, 1, 1, 2, 1, 2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 1, 1, 1, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<long> dread = {2445, 14960, 266622, 2722436, 2687580, 13187135, 47843845, 11671979, 196238928, 165984797, 375980718, 458611701, 276026784, 1417256372, 748223834, 789497144, 2362767264, 3871111886, 554363374, 5997072428, 9730309394, 17673519041, 13003836858, 14621101767, 27990142750, 34187717259, 6430081748, 1089985117, 36587679304, 21644791263, 82452416871, 26415250233, 99735339966, 137823779295, 170905193659, 152777879363, 85032408572, 32719975313, 164412253770, 234640275332, 34883663916, 269777258144, 429431552386, 100218065879, 416583674634, 91676167406, 361851966730, 163459451648, 660463567716};
    vector<int> price = {2, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<long> dread = {1698, 23420, 552564, 3682167, 1525842, 30636637, 90092147, 16063532, 321687358, 64826850, 381588423, 145190423, 1553874111, 1751281614, 3546208773, 318398669, 6168684212, 2096209018, 5863943246, 1069058351, 11200881383, 4622813900, 12827849665, 25675963776, 55421977878, 1708530185, 82443143171, 47415190279, 4865208762, 108500026783, 165102547252, 89691255287, 224089678518, 101677254062, 172815978142, 83042453593, 247441456147, 62297079104, 538939365582, 494766901302, 664105330977, 754154669487, 609584356752, 603795201512};
    vector<int> price = {2, 1, 2, 2, 1, 2, 1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 1, 2, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<long> dread = {1957, 100568, 919667, 1596452, 2569746, 4664658, 17162069, 59097188, 195874938, 188211725, 321616536, 196175582, 772389137, 1742611367, 549278412, 468262113, 3244407481, 626215294, 3823259864, 7785297701, 10594670307, 4814723815, 11609379215, 9245670056, 26980497208, 25412036176, 11524352913, 41200209665, 29008185311, 15519082335, 34304653214, 39999732739, 10164893969, 114738814157, 76170510128, 106528152484, 70141664742, 263975591242, 19131448784, 312322797435, 215201968254, 45792696128, 362806212751, 58384054259, 184205488213, 577159216294, 795661214597, 432032377113};
    vector<int> price = {2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1, 2, 2, 2, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2, 2, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<long> dread = {10269, 170177, 3687042, 18257286, 40020723, 58467106, 200873827, 330816543, 437368903, 132703934, 14662467, 4148600367, 3048579620, 2549352827, 10798925326, 15225625324, 6713319470, 35217453149, 20180938504, 41724098915, 11886776809, 55619681504, 83681545123, 99017561803, 119038934104, 78827979687, 200845605645, 164630935130, 112279586952, 25295183088, 46307342232, 211206813327, 260549786444, 683481821555, 942479033352};
    vector<int> price = {2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<long> dread = {2427, 246828, 1716850, 6520681, 10305030, 20759024, 251774050, 502027856, 274855219, 20860610, 1747859736, 187349572, 1709739528, 4919970363, 7310676527, 2950279847, 20704777688, 24035520148, 21661415089, 26493251974, 43662532829, 47251834981, 2574163214, 94927414070, 11397379630, 93196983894, 28420696037, 66113612288, 88795674778, 308000526095, 404898948637, 7134752203, 169536130745, 13357877615, 165676204849, 668741290987};
    vector<int> price = {2, 2, 1, 1, 1, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 1, 1, 2, 1, 1, 2, 2, 2, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<long> dread = {1556, 43203, 397796, 2834574, 5226118, 13369101, 34240887, 115714550, 205018102, 166159498, 532930575, 229139040, 1042130148, 979872471, 1756879825, 2905665196, 212617151, 5303721623, 5570820880, 5056533449, 8170912186, 1585653489, 11429701700, 24767617134, 8365827972, 11818900796, 32585555130, 48550812165, 25183344813, 33223077421, 28638143243, 88028709141, 40244474774, 66692336116, 138966972588, 10515915948, 153918159131, 131164439228, 1701670160, 200984829698, 340298447643, 398377796984, 111495772567, 13621779699, 89734742309, 711250450948, 159864873857, 713684384282, 720869285637};
    vector<int> price = {2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2, 2, 1, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<long> dread = {2685, 204221, 475212, 3416091, 22526636, 59610839, 140356360, 97385175, 399479644, 277435606, 504773486, 339134596, 1694988314, 2659203558, 5427164841, 5401774322, 503271494, 1811563222, 9721199379, 10808314112, 31179712131, 23025915471, 23314706255, 54580394292, 42541788276, 10013278435, 121320665048, 67924950093, 75715548680, 207558769357, 183535944346, 100650533283, 157008347925, 28963215998, 314156273147, 59016008557, 236856280421, 249289739869, 513830120352, 574961537191, 888591966357};
    vector<int> price = {1, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 2, 2, 1, 2, 1, 2, 1, 2, 2, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<long> dread = {3019, 159046, 196315, 2101534, 19403197, 29833438, 12130520, 216369224, 354049590, 59403793, 452010476, 845284692, 476309907, 2996610262, 2661441809, 6077702956, 1259831218, 1916991184, 4920638585, 20562224231, 3765576052, 14578754033, 14946839508, 7766068503, 30659074456, 5041468019, 54299259921, 38604986000, 2641928206, 123718218287, 135768332654, 82340785170, 62753653838, 248110669673, 75669627023, 35950258536, 161959381330, 435790500216, 139189508344, 581116055368, 461449965718, 387079891309, 456013449929};
    vector<int> price = {1, 2, 2, 2, 1, 2, 1, 1, 2, 2, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<long> dread = {5833, 424091, 6063360, 8350367, 40082355, 192623430, 405568189, 47914742, 1074755080, 2500083971, 2450427489, 1352681303, 3519744646, 12811207394, 8969895190, 18546268893, 32617425555, 23518152691, 46554677911, 46205947147, 63222184426, 14646728816, 114135421868, 93962355971, 226443725374, 178297759047, 287610808069, 247743314567, 482342141481, 610963334397, 505498944827, 253692798293, 429283133234};
    vector<int> price = {2, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 2, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 1, 2, 2, 2, 2, 2, 1, 1, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<long> dread = {8915, 149176, 1959633, 6370913, 13168317, 66916518, 124036593, 345959159, 313837594, 132371539, 140906110, 2081595132, 327494451, 5809641929, 3951480345, 3314409171, 12863200446, 572450883, 10601310039, 20847148338, 40555460593, 10860858142, 27601158649, 43357470743, 98735457561, 673641685, 73855375359, 64225786008, 153269120447, 123348539662, 284495685747, 176639239038, 226602836997, 27109067867, 512742213084, 323617683750, 214531555024, 156969831568, 375724731752};
    vector<int> price = {2, 2, 1, 1, 1, 1, 2, 2, 2, 1, 2, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<long> dread = {5439, 105083, 188067, 2311686, 16453638, 1396544, 77308583, 2866196, 318943875, 221417508, 974433165, 1119925872, 2077183026, 2033559135, 4539745813, 5434719512, 3146398417, 10769723628, 7444590805, 1053717321, 22261165509, 20986064416, 6902751974, 11354179641, 9408242292, 33550444157, 18746073210, 70435698107, 55875046749, 146100275152, 15323450251, 69298235608, 178160596103, 184081995717, 311641871748, 202010556768, 108367659001, 217148597624, 399221976354, 262543965075, 391728690901, 504880026060, 815855748096, 365328150786};
    vector<int> price = {1, 2, 2, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 1, 1, 2, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<long> dread = {9479, 250064, 1494909, 6516148, 27723408, 67842745, 161539114, 57958377, 65575557, 90766585, 994201597, 1489810764, 235007404, 5177937578, 6627781238, 8927248287, 12533398396, 14738122331, 4913014654, 4555693921, 11061646760, 34855580806, 34056476677, 3826334828, 22989397274, 96110746331, 88055278002, 12875692815, 147815010089, 99945082203, 222094882610, 122506022331, 62733425651, 371946935503, 226514951499, 449409532420, 481765470814, 25888948123, 527844028209, 759546748985};
    vector<int> price = {1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 2, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 1, 1, 2, 2, 1, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
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
    vector<long> dread = {5761, 51178, 1051061, 2849104, 10839715, 27264748, 111534746, 265919819, 117581811, 780662515, 550662510, 1880382265, 1888032483, 559330488, 756785005, 7886158183, 6394656266, 14267348632, 19535702599, 16886035839, 6605842473, 7195951680, 3043368195, 9501468561, 79357086708, 95055376093, 13130559530, 64195934517, 11569704574, 159875528685, 102912056819, 212611747325, 56407459848, 213143698892, 228063073833, 257008155769, 386319971523, 534263313119, 596287036662, 231021690109, 378883314543};
    vector<int> price = {2, 2, 1, 2, 1, 1, 2, 2, 2, 1, 2, 2, 2, 1, 2, 1, 2, 2, 1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 1, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<long> dread = {484, 163860, 161526, 5305710, 19231767, 56064427, 158717820, 232149811, 118774176, 1495211917, 766946689, 2922820703, 5702099991, 3020718804, 1884541913, 1374361578, 7248577848, 5702005295, 10199669774, 50202827532, 31758955357, 18727785082, 84971224459, 72711203611, 156566771585, 122583874395, 142058268388, 84204314189, 116695646468, 400064745111, 301078208494, 354515234534, 190696485279, 299898811298, 289920861340, 76432061882};
    vector<int> price = {2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1, 2, 2, 2, 1, 2, 2, 2, 1, 1, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<long> dread = {3434, 37060, 1046267, 879028, 3639575, 33133385, 20629436, 172177298, 332852421, 605840813, 366711906, 1324730794, 413200394, 889452452, 3751522366, 4683314267, 6102361753, 5702005836, 5033051973, 21757535816, 21911000613, 978315930, 21293816814, 25814925072, 30655435704, 62250154477, 31114541328, 59648804831, 31623592692, 11553319039, 161686943855, 124700767383, 121255968433, 217058600673, 187696470040, 49654449644, 188403361493, 387145603865, 578444870434, 322091316652, 316000638679, 239757012759, 548406309480};
    vector<int> price = {1, 1, 2, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1, 1, 1, 2, 2, 1, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<long> dread = {2174, 109690, 995187, 2439569, 6533906, 1357357, 12006947, 111773439, 231450705, 70755419, 548655225, 840863954, 834722770, 148105673, 3346885879, 3422421725, 5803196028, 7003005119, 8681670478, 2863225883, 10599221457, 5311375523, 5929766590, 18268169954, 12452285564, 6646256583, 38809247375, 28774471645, 4151568080, 63748614804, 52531811921, 109604089100, 185688088574, 212916509801, 36889984707, 266488519495, 327037199425, 238688884327, 331583407586, 107493503790, 336663510304, 320505044718, 409860789938, 798798498028, 491791278501, 412025861404};
    vector<int> price = {2, 2, 1, 2, 1, 2, 1, 1, 2, 2, 1, 2, 2, 2, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 2, 2, 1, 1, 2, 1, 1, 1, 2, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<long> dread = {2869, 366807, 76642, 4481469, 14361768, 32058241, 134123882, 27836630, 419626864, 98609363, 556783763, 885281115, 954094634, 148103826, 3871246424, 3967933707, 7992998318, 7143254797, 25938977040, 12443166186, 44102121232, 36947290372, 49526905086, 5793328977, 9726707236, 56152648938, 89659150031, 138240257662, 77979539355, 283659594247, 211046081191, 124258229540, 146639665576, 408751925000, 659171131742, 530197524650, 325637973890, 343973773362};
    vector<int> price = {1, 2, 1, 1, 2, 1, 1, 2, 2, 1, 1, 1, 2, 2, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 2, 1, 2, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<long> dread = {29513, 172084, 3026147, 6140475, 13284231, 100087909, 7834883, 937560304, 1420527071, 1695363038, 30058372, 1322040531, 2063661109, 2831492109, 11593598365, 23983942089, 19167907405, 45982186152, 60010532489, 92197564029, 28320550116, 61795447595, 5966003645, 78055291463, 231703139888, 110485850394, 109463289648, 115150626941, 321892826171, 667445944199, 643096237417, 439361120796};
    vector<int> price = {2, 2, 1, 2, 2, 2, 1, 1, 2, 2, 2, 1, 2, 1, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<long> dread = {3815, 98751, 1052932, 1036534, 13434530, 33559405, 77079609, 65336961, 113533900, 229191145, 158010695, 370455558, 371387404, 664088992, 1128428889, 3857601112, 6862277618, 7234467439, 9533635694, 7015395541, 18160342422, 14760281505, 10966986568, 9569864459, 3902901832, 8844314144, 18898087335, 22010465325, 39100272584, 36136514491, 104383706225, 25898037809, 13001256775, 83605415093, 103740633928, 268807281822, 33291102428, 276659674910, 209437551869, 450868995141, 259425532391, 177018309905, 510511763095, 166055260550, 528008421011, 357428832205};
    vector<int> price = {2, 2, 1, 1, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<long> dread = {25, 11474, 199723, 3287002, 67106, 15367416, 6129267, 97711333, 100439782, 166696220, 20488087, 899002492, 926012475, 205842286, 975901986, 1088374562, 3790970306, 7396798488, 6670209830, 3712557228, 15579477072, 6724472387, 11537851598, 2269051891, 23031143984, 17598009993, 3234267153, 33258521737, 78562732308, 35073664383, 49483856814, 79435805873, 117466135352, 128418528686, 70922738119, 78673411976, 218478726633, 252248679467, 244024455865, 220102899533, 195293827538, 208767354119, 415185579702, 540914339320, 476276303986, 88068628334, 350389077703, 680920205015};
    vector<int> price = {2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 1, 2, 2, 2, 1, 2, 2, 1, 1, 2, 2, 1, 2, 2, 1, 2, 1, 2, 2, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<long> dread = {2318, 107496, 786986, 5393980, 1323780, 40015710, 16784060, 122716157, 238335845, 247071505, 175719682, 1006562472, 272187379, 1647008752, 3059956910, 7594290476, 1954893331, 736019820, 17914052225, 14208139280, 770622500, 33638642056, 42300591946, 338722856, 9321038288, 32850484142, 29207029291, 94233099131, 59754026165, 52332286362, 216788952767, 229140072038, 261587062006, 119109524837, 354241720577, 283313322057, 188297407837, 166203796328, 422768554287, 682935411146, 144944637516, 291106684192};
    vector<int> price = {2, 2, 1, 1, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 2, 2, 1, 2, 2, 1, 1, 1, 2, 1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<long> dread = {14599, 493438, 1927705, 1719828, 31930503, 48396893, 11039403, 148609685, 234725237, 109156869, 768642704, 2436014146, 4024909344, 118977877, 11307937292, 3977693358, 12986077636, 29760537792, 26165880187, 1466692194, 18674767264, 80799203105, 60499071820, 120859386074, 86316217880, 122521910083, 42488637452, 207135741555, 178204169492, 118232056902, 396802268891, 524341704144, 331004939086, 532695288497, 556999388891, 739903768197};
    vector<int> price = {1, 1, 2, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<long> dread = {3368, 63873, 605967, 2000528, 9988572, 17877846, 29525891, 76851190, 141703104, 324452634, 280564069, 175419264, 559798321, 33854481, 79247767, 479188508, 2485542655, 5850046089, 8576875759, 11094078622, 750335177, 16441648945, 12407551439, 7608254741, 32526828694, 14827132876, 15674667206, 11585122664, 8002130100, 12949922169, 54422658705, 18763524296, 95981647708, 4534586799, 157168213660, 178963010499, 105761256119, 130416408926, 241915099258, 279393133609, 280097686779, 316375247939, 294720525886, 37966782638, 452147528616, 677352646502, 140854459818, 362881375497, 141063300767};
    vector<int> price = {1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<long> dread = {10, 7, 8, 17, 37, 25, 29, 62, 136, 92, 107, 229, 503, 340, 395, 847, 1861, 1258, 1461, 3133, 6885, 4654, 5405, 11592, 25474, 17219, 19998, 42890, 94253, 63710, 73992, 158693, 348736, 235727, 273770, 587164, 1290323, 872189, 1012949, 2172506, 4774195, 3227099};
    vector<int> price = {1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<long> dread = {10, 7, 8, 17, 37, 25, 29, 62, 136, 92, 107, 229, 503, 340, 395, 847, 1861, 1258, 1461, 3133, 6885, 4654, 5405, 11592, 25474, 17219, 19998, 42890, 94253, 63710, 73992, 158693, 348736, 235727, 273770, 587164, 1290323, 872189, 1012949, 2172506, 4774195, 3227099, 3747911, 8038272, 17664521, 11940266, 13867270, 29741606, 65358727, 44178984};
    vector<int> price = {1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<long> dread = {9, 8, 16, 14, 12, 25, 22, 19, 40, 35, 30, 64, 56, 48, 102, 89, 76, 163, 142, 121, 260, 227, 193, 416, 363, 308, 665, 580, 492, 1064, 928, 787, 1702, 1484, 1259, 2723, 2374, 2014, 4356, 3798, 3222, 6969, 6076, 5155, 11150, 9721, 8248, 17840, 15553, 13196};
    vector<int> price = {1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<long> dread = {9, 8, 18, 21, 19, 43, 50, 45, 103, 120, 108, 247, 288, 259, 592, 691, 621, 1420, 1658, 1490, 3408, 3979, 3576, 8179, 9549, 8582, 19629, 22917, 20596, 47109, 55000, 49430, 113061, 132000, 118632, 271346, 316800, 284716, 651230, 760320, 683318, 1562952, 1824768, 1639963, 3751084, 4379443, 3935911, 9002601, 10510663, 9446186};
    vector<int> price = {1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<long> dread = {9, 8, 18, 20, 18, 41, 46, 41, 94, 105, 94, 216, 241, 216, 496, 554, 496, 1140, 1274, 1140, 2622, 2930, 2622, 6030, 6738, 6030, 13868, 15497, 13868, 31896, 35643, 31896, 73360, 81978, 73360, 168728, 188549, 168728, 388074, 433662, 388074, 892570, 997422, 892570, 2052910, 2294070, 2052910, 4721693, 5276361, 4721693};
    vector<int> price = {1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<long> dread = {9, 8, 18, 20, 18, 41, 46, 41, 94, 105, 94, 216, 241, 216, 496, 554, 496, 1140, 1274, 1140, 2622, 2930, 2622, 6030, 6738, 6030, 13868, 15497, 13868, 31896, 35643, 31896, 73360, 81978, 73360, 168728, 188549, 168728, 388074, 433662, 388074, 892570, 997422, 892570, 2052910, 2294070, 2052910, 100000000000, 10000000000, 110000000000};
    vector<int> price = {1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<long> dread = {11, 5, 19, 24, 12, 50, 55, 28, 116, 141, 70, 270, 320, 165, 672, 722, 380, 1524, 1632, 983, 3710, 4216, 2542, 9486, 10558, 6213, 25048, 27883, 15812, 65717, 72884, 41590, 155929, 178948, 102929, 372124, 434720, 273099, 997440, 1056816, 614759, 2348201, 2581688, 1561387, 5540109, 6229270, 3611890, 14012911, 14834268, 8672658};
    vector<int> price = {1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<long> dread = {100, 49, 131, 94, 265, 183, 499, 387, 1015, 821, 1952, 1710, 3688, 3623, 7597, 6787, 15745, 13750, 33464, 28168, 70449, 53211, 141654, 100470, 279847, 189913, 529862, 359623, 1006491, 725048, 1897710, 1397243, 3611921, 3020201, 7180098, 6260339, 14601220, 12372044, 31380700, 26657977, 62367377, 52154892, 127981379, 112908790, 242515190, 215742101, 457185483, 445857177, 863094261, 844403244};
    vector<int> price = {2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<long> dread = {100, 49, 131, 98, 249, 205, 536, 411, 1161, 770, 2310, 1625, 4790, 3388, 9022, 6697, 18506, 14129, 35006, 30148, 68696, 62148, 142805, 132341, 284384, 257463, 587054, 515132, 1228191, 980620, 2343501, 1966237, 4889519, 3864065, 9399639, 7893615, 19773643, 14837179, 37626840, 28362118, 77022309, 54946217, 156433965, 118500600, 338753259, 247100920, 678686271, 478165414, 1357753480, 965079330};
    vector<int> price = {2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<long> dread = {5, 2, 6, 11, 13};
    vector<int> price = {1, 1, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<long> dread = {1, 1};
    vector<int> price = {1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<long> dread = {1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<long> dread = {53392657, 817786459, 196704966, 52380391, 988303163, 961975823, 104887915, 906311626, 559835837, 205674786, 754941275, 965586531, 209405232, 269574331, 859992978, 983400066, 350905317, 459968354, 186590923, 862826868, 104026178, 53040009, 536641357, 511462598, 557887629, 684891079, 293360225, 144390275, 40972842, 797543348, 267803821, 118184381, 806837788, 713494571, 486109403, 738075948, 218440139, 798402498, 130486770, 924491153, 150564122, 302486929, 158862339, 703891030, 416159580, 92773215, 487422094, 412221929, 115678561, 883857001};
    vector<int> price = {1, 1, 2, 1, 2, 1, 2, 2, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 1, 2, 1, 1, 1, 2, 2, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 2, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<long> dread = {2705443, 1736723169, 752251566, 1603278409, 1525760443, 32181171, 316347708, 957091646, 19148894, 1226591494, 356996318, 756156237, 1682138811, 648441887, 2052748925, 305675045, 1851595476, 1811709846, 1313157691, 638413705, 807144411, 120717600, 592454382, 1484286774, 1041373769, 1005992606, 1598623196, 827285012, 1229205056, 483407467, 1110474423, 742069665, 1056311330, 1084035809, 304051162, 650786457, 2075744114, 1883859244, 410916549, 1020597225, 1571959786, 1221351251, 1550269654, 789867222, 1110267100, 224819587, 1180118089, 805268585, 979444429, 639524509};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<long> dread = {1, 1, 2};
    vector<int> price = {1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<long> dread = {10, 10, 5, 15, 20};
    vector<int> price = {1, 2, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<long> dread = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<long> dread = {44170, 22233, 11066, 43002, 34432, 17035, 9175, 58548, 13935, 97583, 95777, 4828, 58219, 76131, 81601, 52493, 98753, 83032, 83423, 62422, 43456, 17882, 80527, 66468, 99775, 42300};
    vector<int> price = {1, 2, 1, 1, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<long> dread = {1, 2, 3, 6, 7};
    vector<int> price = {1, 1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<long> dread = {10, 2, 11, 20};
    vector<int> price = {2, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<long> dread = {8, 5, 13};
    vector<int> price = {1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<long> dread = {17567, 13322, 24110, 50353, 73202, 64261, 58857, 67991, 28526, 53047, 76713, 63044};
    vector<int> price = {2, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<long> dread = {5, 5, 9, 13};
    vector<int> price = {1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<long> dread = {3, 2, 1, 4, 5};
    vector<int> price = {1, 2, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<long> dread = {1, 1, 1, 2, 22, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 11, 1, 1, 1, 1, 11, 1, 1, 1, 1, 1};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<long> dread = {1, 2147483647, 2147483647, 100, 400};
    vector<int> price = {1, 1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<long> dread = {8};
    vector<int> price = {2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<long> dread = {2, 2};
    vector<int> price = {2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<long> dread = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<long> dread = {1, 3, 7, 15, 31, 100, 201, 500, 1500, 5000, 15000};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<long> dread = {60, 60, 10, 100, 150};
    vector<int> price = {1, 1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<long> dread = {34359738368, 17179869184, 8589934592, 4294967296, 2147483648, 1073741824, 536870912, 268435456, 134217728, 67108864, 33554432, 16777216, 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<long> dread = {10, 10, 15, 24};
    vector<int> price = {1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<long> dread = {1, 2, 4};
    vector<int> price = {2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<long> dread = {1, 2, 3};
    vector<int> price = {1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<long> dread = {41, 18467, 6334, 53000, 76676, 94344, 91824, 293580, 350506, 415888, 119805, 703625, 675149, 572118, 398440, 22586, 155740, 692636, 313755, 396828, 2623671, 1299756, 378494, 16218, 33872, 1560132, 2369256, 2732536, 3095726, 3362255, 985907, 4193118, 3028055, 2515284, 433608, 4898352, 6673420, 7205926, 4923115, 3017670, 9213663, 8024307, 11056666, 11223210, 6857124, 1893584, 6419784, 3408262, 13024633, 3303508};
    vector<int> price = {2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 2, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 2, 2, 1, 1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<long> dread = {1};
    vector<int> price = {2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<long> dread = {6, 2, 7, 9, 6};
    vector<int> price = {2, 1, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<long> dread = {5, 5, 10};
    vector<int> price = {1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<long> dread = {5, 5};
    vector<int> price = {1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<long> dread = {2, 2, 3, 5};
    vector<int> price = {1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<long> dread = {1073741824, 536870912, 268435456, 134217728, 67108864, 33554432, 16777216, 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<long> dread = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> price = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<long> dread = {549755813888, 274877906944, 137438953472, 68719476736, 34359738368, 17179869184, 8589934592, 4294967296, 2147483648, 1073741824, 536870912, 268435456, 134217728, 67108864, 33554432, 16777216, 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<long> dread = {1000};
    vector<int> price = {2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<long> dread = {2, 3, 5};
    vector<int> price = {1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<long> dread = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<long> dread = {1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000};
    vector<int> price = {2, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<long> dread = {100, 99, 100, 150, 200};
    vector<int> price = {1, 1, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<long> dread = {1000000000000, 1000000000000, 999999999999, 111111111111, 111654362456};
    vector<int> price = {2, 2, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<long> dread = {8, 5, 10, 13, 2, 1234, 9876, 5467};
    vector<int> price = {1, 1, 2, 1, 2, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<long> dread = {4, 2, 2, 100};
    vector<int> price = {1, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<long> dread = {1, 1, 1, 1};
    vector<int> price = {1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<long> dread = {2, 2};
    vector<int> price = {1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<long> dread = {4, 8, 7, 9, 5, 4, 47, 58, 74, 8, 8, 5, 5, 4, 8, 7, 5, 4, 9, 88, 4, 5, 4, 8, 7, 5, 4, 99, 8, 454, 75, 84, 8, 75, 4, 8, 4, 5, 787, 54, 8, 4, 5, 4, 7, 85, 4, 5, 8, 4};
    vector<int> price = {1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 1, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<long> dread = {10, 10};
    vector<int> price = {1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<long> dread = {15, 9, 24, 39};
    vector<int> price = {1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<long> dread = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824, 2147483648, 4294967296, 8589934592, 17179869184, 34359738368, 68719476736, 137438953472, 274877906944, 549755813888};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<long> dread = {17179869184, 4294967296, 8589934592};
    vector<int> price = {1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<long> dread = {757147, 507978500, 336971124, 139567120, 391749387, 1470545, 26239572, 56984808, 3615544, 369042088, 118341522, 21564522, 675016433, 283987482, 950090226, 70617624, 194041604, 902908328, 257655783, 268159989, 37379060, 530496, 80835680, 621597008, 106923810, 230342100, 86546364, 304012332, 222071040, 102755056, 549646416, 62695451, 33557676, 79942653, 137583462, 138791610, 709031778, 773930380, 36547830, 79375581, 318773940, 416607780, 368402970, 329622200, 368026284, 106697010, 204145359, 341001111, 133145005, 236348518};
    vector<int> price = {1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<long> dread = {10, 1, 5, 14};
    vector<int> price = {1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<long> dread = {1, 1};
    vector<int> price = {1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<long> dread = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 100000};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<long> dread = {9, 3, 11, 5, 16};
    vector<int> price = {2, 1, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<long> dread = {1};
    vector<int> price = {1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<long> dread = {10, 1, 15};
    vector<int> price = {1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<long> dread = {123456789, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<long> dread = {42, 18468, 6335, 26501, 19170, 15725, 11479, 29359, 26963, 24465, 5706, 28146, 23282, 16828, 9962, 492, 2996, 11943, 4828, 5437, 32392, 14605, 3903, 154, 293, 12383, 17422, 18717, 19719, 19896, 5448, 21727, 14772, 11539, 1870, 19913, 25668, 26300, 17036, 9895, 28704, 23812, 31323, 30334, 17674, 4665, 15142, 7712, 28254, 6869};
    vector<int> price = {2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 2, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 2, 2, 1, 1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<long> dread = {223749065263, 183495924928, 634053362427, 526890433895, 614634499795, 441472427762, 273656089175, 335489826264, 383103618444, 613084517057, 71893285415, 261445154990, 691744721745, 212226605593, 996493862984, 845270378388, 635737465808, 155679313605, 544163391311, 388304951744, 119257055331, 504861846705, 703084466973, 948235222163, 28650783143, 230323228609, 372066302649, 779340911136, 555661435594, 706955395223, 657833503230, 671365335922, 507488131100, 568174508160, 596688095140, 15663093637, 141841841640, 585160032529, 218663371140, 540568628266, 264404687391, 586706637057, 120182566887, 771394058297, 882617388902, 223012645643, 274144447570, 433224750976, 42291210851, 555346385804};
    vector<int> price = {2, 1, 1, 2, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<long> dread = {6728450049, 18468, 313345, 325959681, 244973569, 8931246081, 1489985, 62897, 50716673, 391425, 33168385, 5187305473, 127011913729, 711917569, 178487297, 1076929, 766721, 19562233857, 24967643137, 3057153, 234865, 2471425, 62849, 76677, 474006683649, 182561, 6894125057, 30097276929, 74125934593, 115225919489, 63612911617, 323059713, 900641, 14954497, 1196033, 7991297, 2609905665, 153321473, 64684556289, 53001, 42, 1275009, 968032257, 142712833, 91825, 65686994945, 756154369, 12669, 2783233, 431393};
    vector<int> price = {2, 2, 2, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<long> dread = {1, 2, 4, 1000000000};
    vector<int> price = {2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<long> dread = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<long> dread = {2000000000, 3000000000};
    vector<int> price = {2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<long> dread = {4, 4};
    vector<int> price = {1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<long> dread = {899906841499, 949953420750, 474976710375, 737488355188, 368744177594, 184372088797, 592186044399, 796093022200, 398046511100, 199023255550, 99511627775, 549755813888, 274877906944, 137438953472, 68719476736, 34359738368, 17179869184, 8589934592, 4294967296, 2147483648, 1073741824, 536870912, 268435456, 134217728, 67108864, 33554432, 16777216, 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2};
    vector<int> price = {2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1, 2, 2, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<long> dread = {5, 5};
    vector<int> price = {1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<long> dread = {3, 2, 4, 8};
    vector<int> price = {1, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<long> dread = {5000, 4999, 1000, 1000, 1000, 6000, 7000, 8000};
    vector<int> price = {1, 2, 1, 1, 1, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<long> dread = {1, 549755813888, 274877906944, 137438953472, 68719476736, 34359738368, 17179869184, 8589934592, 4294967296, 2147483648, 1073741824, 536870912, 268435456, 134217728, 67108864, 33554432, 16777216, 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2};
    vector<int> price = {1, 2, 1, 1, 2, 1, 2, 2, 1, 1, 2, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 1, 2, 2, 2, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<long> dread = {3, 1, 5};
    vector<int> price = {1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<long> dread = {10, 5, 15, 25};
    vector<int> price = {1, 1, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<long> dread = {10, 9, 11, 20, 20, 20};
    vector<int> price = {1, 1, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<long> dread = {100, 80, 90, 180, 190};
    vector<int> price = {1, 1, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<long> dread = {1, 4, 2, 3, 5, 6};
    vector<int> price = {1, 1, 1, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<long> dread = {34359738368, 17179869184, 8589934592, 4294967296, 2147483648, 1073741824, 536870912, 268435456, 134217728, 67108864, 33554432, 16777216, 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1, 34359738368, 34359738368, 34359738368, 34359738368, 34359738368, 34359738368, 34359738368, 34359738368, 34359738368, 34359738368};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<long> dread = {3640551741, 196156243, 2181876476};
    vector<int> price = {1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<long> dread = {1, 2, 4, 8, 16, 32, 64, 128, 256, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824, 2147483648, 4294967296, 8589934592, 17179869184, 34359738368, 68719476736, 137438953472, 270000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000, 1000000000000};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<long> dread = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, 2971215073, 4807526976, 7778742049, 12586269025, 20365011074};
    vector<int> price = {1, 2, 1, 2, 2, 1, 1, 2, 2, 2, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 2, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<long> dread = {2, 2, 4, 1, 5};
    vector<int> price = {1, 1, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<long> dread = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 9, 27, 81, 243, 729, 2187, 6561, 19683, 59049, 177147, 531441, 1594323, 4782969, 14348907, 43046721, 129140163, 387420489, 1162261467, 3486784401, 10460353203, 31381059609, 94143178827, 282429536481, 847288609443};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<long> dread = {10, 9, 100, 111};
    vector<int> price = {1, 1, 1, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<long> dread = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824, 2147483648, 4294967296, 8589934592, 17179869184, 34359738368, 68719476736, 137438953472, 274877906944, 549755813888};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<long> dread = {8589934591, 4294967295, 2147483647, 1073741823, 536870911, 268435455, 134217727, 67108863, 33554431, 16777215, 8388607, 4194303, 2097151, 1048575, 524287, 262143, 131071, 65535, 32767, 16383, 8191, 4095, 2047, 1023, 511, 255, 127, 63, 31, 15, 7, 3, 1};
    vector<int> price = {2, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 1, 1, 1, 1};
    MonstersValley* pObj = new MonstersValley();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22732328&rd=15187&pm=12350
********************************************************************************
#include <algorithm> 
#include <string> 
#include <vector> 
#include <queue> 
#include <iostream> 
#include <cmath> 
#include <sstream> 
#include <map> 
#include <set> 
#include <functional> 
using namespace std; 
#define pb push_back 
#define INF 1000000000 
#define L(s) (int)((s).size()) 
#define FOR(i,a,b) for (int _n(b), i(a); i <= _n; i++) 
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;i--) 
#define rep(i,n) FOR(i,1,(n)) 
#define rept(i,n) FOR(i,0,(n)-1) 
#define C(a) memset((a),0,sizeof(a)) 
#define ll long long 
 
ll dp[51][111]; 
inline void upd(ll &a, ll b) { 
  if (b > a) a = b; 
} 
class MonstersValley  
  { 
    public: 
       int minimumPrice( vector<long long> dread, vector <int> price ) 
    { 
      memset(dp, -1, sizeof(dp)); 
      int n = L(dread); 
      dp[0][0] = 0; 
      rept(i, n) { 
        rept(j, 2 * n + 1) { 
          if (dp[i][j] == -1) continue; 
          upd(dp[i + 1][j + price[i]], dp[i][j] + dread[i]); 
          if (dp[i][j] >= dread[i]) upd(dp[i + 1][j], dp[i][j]); 
        } 
      } 
      rept(i, 111) { 
        if (dp[n][i] != -1) return i; 
      } 
      return -1; 
    } 
  }; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.17 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/