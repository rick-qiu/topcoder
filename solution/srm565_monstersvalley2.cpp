/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12351
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

class MonstersValley2 {
public:
    int minimumPrice(vector<int> dread, vector<int> price);
};

int MonstersValley2::minimumPrice(vector<int> dread, vector<int> price) {
    int ret;
    return ret;
}


int test0() {
    vector<int> dread = {8, 5, 10};
    vector<int> price = {1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1, 2, 4, 1000000000};
    vector<int> price = {1, 1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {200, 107, 105, 206, 307, 400};
    vector<int> price = {1, 2, 1, 1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {5216, 12512, 613, 1256, 66, 17202, 30000, 23512, 2125, 33333};
    vector<int> price = {2, 2, 1, 1, 1, 1, 2, 1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {606};
    vector<int> price = {2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {524657775};
    vector<int> price = {2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {3, 2, 5, 7};
    vector<int> price = {1, 1, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1, 2, 4, 6, 16, 19, 64, 105, 256, 464, 1024, 1463, 4096, 4515, 16384, 21445, 65536, 68543, 262144, 479277};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1999999991, 1999999992, 1999999993, 1999999994, 1999999995, 1999999996, 1999999997, 1999999998, 1999999999, 2000000000};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {276378, 939933, 574877, 888702, 683628};
    vector<int> price = {1, 1, 2, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {492214, 378290, 162083, 858555};
    vector<int> price = {2, 2, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {138742, 878514, 852494, 542526, 953090, 618335, 834947, 451187, 818761, 498817, 701160, 996792, 845435, 145660, 183611, 150459, 635733, 718307};
    vector<int> price = {2, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {406711, 813026, 985429, 693445, 653459, 851295, 299367, 676132, 770750, 363356, 658504};
    vector<int> price = {2, 2, 2, 1, 2, 2, 1, 1, 1, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {278033, 630470, 39142, 604719, 36490, 400221, 576007, 298209, 202048, 406921};
    vector<int> price = {1, 2, 1, 2, 1, 1, 2, 2, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {549037, 846063, 786688, 666614, 592108};
    vector<int> price = {1, 2, 1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {229505, 433280, 915022};
    vector<int> price = {1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {773105};
    vector<int> price = {2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {633301, 301906, 445427, 509043, 673939};
    vector<int> price = {2, 1, 1, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {274987, 988110, 468154, 354593};
    vector<int> price = {2, 2, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {597625, 249122, 838726, 402201, 933860, 658620};
    vector<int> price = {2, 2, 2, 2, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {202840, 843337, 326007, 731681, 931244, 610300, 140830, 347449, 178713, 160244, 772831, 243548, 350741, 445070, 943259, 85348};
    vector<int> price = {1, 2, 1, 2, 2, 2, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {78341, 111924, 510644, 87408, 619644, 910888, 695650, 66650, 223357};
    vector<int> price = {1, 1, 2, 1, 1, 1, 1, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {854876, 611886, 818411, 568380, 109228, 412632, 148292, 177354, 806246, 831430, 643369, 671409, 374510, 97982};
    vector<int> price = {2, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {333735, 907985, 13361, 107282, 879340, 825598, 497004, 35801, 451639, 541320, 859429, 587990, 989163};
    vector<int> price = {1, 2, 1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {730354301, 612652745, 231201198, 1785940683, 1573792486, 1862050299, 55215265, 1482185079, 580169303, 745811023, 116284213, 1674085202, 243582700, 1259989441, 459631588, 1113164735, 549938993, 1675101506, 144384566, 1897340738};
    vector<int> price = {2, 1, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 2, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1415229038, 834285838, 1214442017, 1217534876};
    vector<int> price = {2, 1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {368805779, 1818947888, 1788720857, 1788391727, 659610167, 1757059785, 1951203365, 1365448488, 1291565579, 212981422};
    vector<int> price = {1, 2, 1, 1, 1, 2, 1, 2, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {953379700, 1963120299, 648003103, 1545329216, 248966873, 997656371, 1408722762, 640985409, 150299963, 651226125, 1983428467};
    vector<int> price = {2, 1, 1, 1, 2, 1, 2, 2, 1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1547217503, 1787964172, 281041017, 127192884, 686068400, 1518709677, 75143338, 877524025, 1830002240, 95142533, 1229301205};
    vector<int> price = {2, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {131144893, 1253402892, 327490895, 758530919, 575176500, 1048213981, 636183295, 306142540, 475491284, 117815209, 894552824, 1065451684};
    vector<int> price = {2, 2, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1691715165, 1069375201, 110077378, 367162390, 1055161432, 232475527};
    vector<int> price = {2, 1, 2, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {559787380, 111124697, 211951612, 26295899, 989297246, 813172925};
    vector<int> price = {1, 2, 1, 2, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {86780821, 1140185415, 85548635, 347237270, 1167764408, 1604033858, 1993911067, 1875463689, 1361486142, 675528710, 1858647747, 1826530257, 1355912372, 1314505700, 194376352, 1067180132};
    vector<int> price = {1, 2, 1, 1, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {853744211, 1559615791, 866431564, 1860458362, 1080823152, 973755754, 926899774};
    vector<int> price = {1, 1, 1, 1, 2, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {637463334, 492295149, 644830292, 569798827, 43394064, 1651455355, 898690609, 1248694777, 1949378803, 931930223};
    vector<int> price = {2, 2, 1, 1, 2, 1, 1, 2, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1992350787, 1204067578, 1971977184, 1986727084, 550738791, 958698508};
    vector<int> price = {2, 1, 1, 1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1383678529, 138906144, 940996497, 619586457};
    vector<int> price = {1, 2, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1782688262, 895047095, 1625373870, 1009836949, 985560038, 1470346827, 296839142, 34727454, 413009041, 1114435639, 1692481802, 422406335, 795130000, 1455087504, 410389760, 961349143, 1693064512, 621415696, 98442513};
    vector<int> price = {2, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {992388416, 198261504, 772412033, 1889458810};
    vector<int> price = {1, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {55812, 129413, 3369997, 2698415, 50526015, 32026198, 5355511, 100092466, 265746384, 156194334, 99374300, 635472617, 180646818, 91608661, 417850817, 1022057911, 1729513937};
    vector<int> price = {1, 1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {2589192, 23314744, 97814, 245124401, 390282178, 758765331, 159041187, 1912259796};
    vector<int> price = {1, 2, 1, 2, 2, 2, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1661394, 73478485, 124895705, 402068495, 507240373, 1961191628};
    vector<int> price = {1, 1, 2, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1252017, 3776329, 21140492, 5357875, 59227052, 88302560, 344236822, 52938928, 256182128, 321584565, 22692247};
    vector<int> price = {2, 2, 1, 1, 1, 2, 2, 1, 2, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {174927, 10654989, 55924062, 70457525, 52549382, 393666222, 773214540, 1177429024, 1280559141};
    vector<int> price = {2, 1, 1, 2, 2, 1, 1, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {335520, 7166533, 19084297, 44364675, 66301712, 243376382, 369091309, 441177770, 553345446, 768799475, 1459642711, 854126713};
    vector<int> price = {2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {178041, 241271, 3554145, 15146146, 29336857, 41372319, 78867753, 27414201, 108212503, 69279302, 312855571, 110338295, 82908093, 467516892, 125004100, 434086364, 172491586, 1039740703, 590277, 1754775248};
    vector<int> price = {1, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 2, 1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {149235, 2702103, 9621991, 16444946, 24895184, 48928723, 127681201, 45700795, 234008969, 114105628, 350087054, 311983334, 652890170, 347935195, 390614530, 893201743, 1889846895};
    vector<int> price = {1, 2, 1, 2, 1, 2, 2, 2, 1, 1, 1, 2, 1, 2, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {590449, 4731049, 1584478, 100420763, 86249282, 194454422, 808571587, 534818108, 1742459894};
    vector<int> price = {1, 2, 1, 2, 2, 2, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {758992, 6901301, 80078202, 103054334, 331245983, 851301800, 209431393};
    vector<int> price = {2, 2, 2, 1, 1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {375459, 617787, 10425424, 12611536, 12212171, 75005736, 8846978, 9301694, 142058581, 72615651, 60574288, 592619153, 459336400, 430567015, 1287700983, 1045283211, 269698502};
    vector<int> price = {1, 1, 1, 2, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 2, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {197538, 2088936, 3509470, 20939186, 50206421, 22604497, 133400415, 187910255, 11826249, 388209892, 6886617, 588380619, 240052207, 63701601, 551901468, 209580949, 1758858199};
    vector<int> price = {2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {3843, 437808, 4088636, 21920545, 17728351, 17282550, 111536526, 20625035, 71882430, 129029409, 39581290, 535389768, 749333266, 558761224, 687500849, 1309193142, 1247523583, 1385101352};
    vector<int> price = {2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 1, 2, 2, 1, 2, 2, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {7290252, 124728206, 425327327, 980140755, 1694076474};
    vector<int> price = {2, 1, 2, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {849513, 6100784, 12751708, 26051050, 84524432, 275567165, 512229310, 936185513, 539883036, 315995883};
    vector<int> price = {1, 2, 1, 2, 2, 2, 1, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {443857, 5975205, 24095251, 43860354, 49925895, 60205760, 294428884, 207406340, 463155265, 813378725, 757188699, 1390259091, 1674862744};
    vector<int> price = {1, 1, 1, 1, 1, 2, 2, 1, 2, 1, 2, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {250438, 568979, 18796848, 31305606, 81014756, 98204282, 141687369, 97810698, 220060650, 631383745, 777312423, 156798369, 1845437234};
    vector<int> price = {1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {672107, 2643074, 529850, 35636615, 81113168, 96575175, 104125968, 39236967, 165081715, 60078595, 914507263, 175347362, 679297708, 1718078629};
    vector<int> price = {1, 1, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {167878, 3169023, 3526829, 15558338, 8689814, 15469622, 70341228, 161912435, 270279010, 191495798, 471391453, 336129399, 667939157, 772487373, 1109149871, 296224343, 35789463};
    vector<int> price = {2, 2, 1, 2, 2, 1, 1, 1, 2, 2, 1, 1, 1, 2, 2, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {122173, 2071445, 898765, 753106, 29143508, 54727654, 32025475, 142197187, 207263662, 350616206, 282479798, 567189003, 251941626, 357631619, 2918998, 697433033};
    vector<int> price = {2, 1, 1, 1, 2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {48219, 920898, 2179240, 9993589, 29116629, 59158375, 61577353, 39926727, 79239592, 92299665, 38869806, 114951159, 224003787, 252096248, 953956706, 626496202, 397656017, 434784538, 1407497740};
    vector<int> price = {1, 2, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2, 1, 1, 2, 1, 1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {117426, 417423, 6529466, 13572907, 20582830, 3355360, 56555551, 6642336, 186172523, 186804224, 15277581, 59444651, 254457068, 310528342, 423416841, 782884539, 743464702, 369610019, 643257039};
    vector<int> price = {1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {874437, 6826273, 39807214, 18556188, 38704414, 282109373, 314755786, 213092538, 134585833, 1119684013, 918295190};
    vector<int> price = {2, 1, 2, 1, 2, 1, 2, 1, 1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {265556, 2061422, 1500718, 17959647, 28180125, 82100102, 134639402, 206809129, 187309364, 128555403, 439962828, 102933635, 669498463, 769511250, 1169307215, 196661619, 1182466435};
    vector<int> price = {2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {3257543, 372916, 73752274, 95265442, 170354021, 300856091, 141810509, 1488011678};
    vector<int> price = {2, 1, 1, 1, 2, 2, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {678548, 1356065, 3601825, 12822103, 103809657, 193401443, 234096960, 74135382, 579744808, 141624669, 731841174, 446013106, 465189490};
    vector<int> price = {2, 2, 1, 1, 1, 1, 2, 2, 2, 1, 2, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {319437, 1878550, 3190318, 20409721, 14727941, 43516041, 93601628, 163005037, 136571399, 254741226, 109779898, 201373153, 316232079, 24567749, 400406805, 1018098274, 1550461119, 36029233};
    vector<int> price = {2, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1191368, 44420765, 64593392, 244992255, 147789565, 557199513, 1613458523};
    vector<int> price = {1, 1, 2, 1, 1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {6928298, 51309118, 152835695, 208537301, 692935143, 1301925202};
    vector<int> price = {2, 1, 2, 1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {45990, 1720448, 2902020, 21294374, 51616526, 33583070, 69583419, 220564857, 59475757, 253250147, 542046018, 475926079, 435733089, 333071866, 119591805, 49108731};
    vector<int> price = {2, 2, 2, 2, 1, 1, 2, 1, 1, 2, 2, 1, 2, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1, 2, 4, 1000000000};
    vector<int> price = {1, 1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> dread = {1999999999, 2000000000, 2000000000};
    vector<int> price = {1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> dread = {1200000000, 1200000001, 1200000002};
    vector<int> price = {1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> dread = {1999999997, 1999999998, 1999999999};
    vector<int> price = {1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> dread = {1900000000, 1900000001, 2000000000};
    vector<int> price = {1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> dread = {1000000000, 2000000000, 1};
    vector<int> price = {1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1999999998, 1999999999, 1};
    vector<int> price = {1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1999999998, 1999999999, 2000000000};
    vector<int> price = {1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {99999990, 99999991, 2000000000, 2000000000, 2000000000, 2000000000};
    vector<int> price = {1, 1, 1, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {2000000000, 2000000000, 2000000000, 2000000000};
    vector<int> price = {1, 2, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
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
    vector<int> dread = {1000000000, 1500000000, 2000000000};
    vector<int> price = {1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> dread = {294967296, 1999999999, 100, 2000000000, 2000000000};
    vector<int> price = {1, 1, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> dread = {1500000000, 2000000000, 1};
    vector<int> price = {1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> dread = {1500000000, 1700000000, 10};
    vector<int> price = {1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> dread = {1000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> dread = {8, 5, 10};
    vector<int> price = {1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> dread = {1999999999, 1999999999, 2000000000, 2000000000};
    vector<int> price = {1, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {1999999999, 2000000000, 1};
    vector<int> price = {1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> dread = {1999999996, 1999999997, 1999999998, 1999999999, 2000000000};
    vector<int> price = {2, 2, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> dread = {1999999999, 2000000000, 2000000000, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> price = {1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> dread = {1919427963, 1963318973, 1906880669, 1906607128, 1952278976, 1915114853, 1907778220, 1900673962, 1921459521, 1935440793, 1950828766, 1981945119, 1946884274, 1923084047, 1900916467, 1957256737, 1951034149, 1999287908, 1925102935, 1904125040};
    vector<int> price = {2, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 1, 1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> dread = {1999999999, 1999999999, 2000000000};
    vector<int> price = {1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> dread = {1500000000, 1600000000, 2000000000, 2000000000, 2000000000};
    vector<int> price = {1, 1, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> dread = {1999999999, 2000000000, 2000000000, 2000000000};
    vector<int> price = {1, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
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
    vector<int> dread = {1557383327, 1495758780, 1698059636, 1153294385, 1510891668, 767210130, 395854773, 1466735568, 1425178914, 1292334654, 1537286368, 401889856, 685507531, 1171817724, 1234482542, 1429944859, 569683690, 1627876535, 1997329960, 2000000000};
    vector<int> price = {1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> dread = {2, 2};
    vector<int> price = {2, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> dread = {1999999999, 2000000000, 2000000000};
    vector<int> price = {1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> dread = {50, 10, 60, 110};
    vector<int> price = {1, 1, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> dread = {1000000000, 2000000000, 100, 200};
    vector<int> price = {1, 1, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> dread = {1000000000, 2000000000, 10};
    vector<int> price = {2, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> dread = {1500000000, 1500000000, 2000000000};
    vector<int> price = {1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> dread = {1999999999, 2000000000, 2000000000, 2000000000};
    vector<int> price = {1, 1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> dread = {1000000001, 1000000002, 1000000003, 1000000004};
    vector<int> price = {1, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> dread = {999999999, 999999999, 1999999999, 2000000000};
    vector<int> price = {1, 2, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> dread = {500000000, 2000000000, 2000000000};
    vector<int> price = {1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
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
    vector<int> dread = {200000000, 500000000, 1000000000, 2000000000, 2000000000, 2000000000};
    vector<int> price = {2, 2, 2, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> dread = {500000000, 1000000000, 2000000000, 2000000000};
    vector<int> price = {1, 1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> dread = {999999999, 999999999, 1999999999, 1999999999};
    vector<int> price = {1, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> dread = {1999999999, 2000000000, 2000000000};
    vector<int> price = {2, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> dread = {1900000000, 1900000000, 1900000001, 1, 1, 1900000000, 1900000005, 1, 1};
    vector<int> price = {1, 2, 1, 2, 1, 2, 1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> dread = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> dread = {888888888, 1000000000, 2000000000, 2000000000};
    vector<int> price = {1, 2, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> dread = {1, 1999999997, 1999999999, 1000000000};
    vector<int> price = {1, 1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> dread = {1000, 50000, 156478949, 2000000000, 2000000000, 2000000000, 1000000000};
    vector<int> price = {1, 1, 2, 1, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> dread = {1999999999, 2000000000, 2000000000};
    vector<int> price = {2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> dread = {1900000000, 2000000000, 2000000000};
    vector<int> price = {1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> dread = {1999999999, 1999999999, 1999999999, 1999999999, 2000000000};
    vector<int> price = {1, 1, 1, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> dread = {1999999995, 1999999996, 1999999997, 1999999998, 1999999999};
    vector<int> price = {1, 2, 1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> dread = {1900000000, 1900000000, 2000000000};
    vector<int> price = {1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> dread = {1999999999, 2000000000, 999999999, 333333333, 222222222};
    vector<int> price = {1, 2, 1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> dread = {10, 1, 11};
    vector<int> price = {1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> dread = {1, 1};
    vector<int> price = {1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> dread = {50, 50, 50, 60, 150};
    vector<int> price = {1, 1, 1, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> dread = {1202024340, 1044415051, 1528948584, 249531286, 1984244858, 929774143, 1623005829, 521683809, 1911530809, 742947743, 1252792943, 1761317813, 1553892843, 728381134, 1244931238, 626144345, 938136115, 428748531, 1168924832, 939248668};
    vector<int> price = {2, 2, 1, 1, 1, 1, 1, 2, 1, 2, 2, 1, 2, 2, 1, 1, 1, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> dread = {100, 99, 99, 150};
    vector<int> price = {1, 2, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> dread = {2000000000, 2000000000, 2000000000, 2000000000};
    vector<int> price = {2, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> dread = {2000000000, 2000000000, 2000000000, 2000000000, 999999999, 999999999, 1999999999, 2000000000};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> dread = {5, 5, 4, 9};
    vector<int> price = {2, 1, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> dread = {1000000000, 2000000000, 2000000000, 1};
    vector<int> price = {1, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> dread = {1999999970, 1999999971, 1999999972, 1999999973, 1999999974, 1999999975, 1999999976, 1999999977, 1999999978, 1999999979, 1999999980, 1999999981, 1999999982, 1999999983, 1999999984, 1999999985, 1999999986, 1999999987, 1999999988, 1999999989};
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> dread = {4, 2, 1, 6, 15};
    vector<int> price = {1, 1, 1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> dread = {10, 10, 20};
    vector<int> price = {2, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> dread = {2, 3, 5};
    vector<int> price = {2, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> dread = {8, 5, 2};
    vector<int> price = {1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> dread = {1, 1, 1, 2};
    vector<int> price = {1, 2, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> dread = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    vector<int> price = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> dread = {99, 99};
    vector<int> price = {2, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> dread = {1, 1, 2, 3};
    vector<int> price = {1, 1, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> dread = {2000000000, 2000000000, 2000000000};
    vector<int> price = {1, 1, 1};
    MonstersValley2* pObj = new MonstersValley2();
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
    vector<int> dread = {10, 9, 1, 1, 1, 18};
    vector<int> price = {1, 1, 2, 2, 2, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> dread = {888888888, 999999999, 1000000000, 1999999999};
    vector<int> price = {1, 1, 1, 2};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> dread = {1999999998, 1999999999, 1999999999};
    vector<int> price = {1, 2, 1};
    MonstersValley2* pObj = new MonstersValley2();
    clock_t start = clock();
    int result = pObj->minimumPrice(dread, price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22875562&rd=15187&pm=12351
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
 
class MonstersValley2 {
public:
  int minimumPrice(vector <int>, vector <int>);
};
 
int MonstersValley2::minimumPrice(vector <int> d, vector <int> p) {
  int n=d.size(),ans=2*n;
  for(int mask=0;mask<(1<<n);++mask) {
    int ok=1,pr=0; long long sum=0;
    for(int j=0;j<n;++j)
      if (mask&(1<<j)) pr+=p[j],sum+=d[j];
      else {
        if (sum<d[j]) {
          ok=0;
          break;
        }
      }
    if (ok) ans=min(ans,pr);
  }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/