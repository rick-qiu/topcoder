/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12324
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

class MarblePositioning {
public:
    double totalWidth(vector<int> radius);
};

double MarblePositioning::totalWidth(vector<int> radius) {
    double ret;
    return ret;
}


int test0() {
    vector<int> radius = {1, 2};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8284271247461903;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> radius = {1, 1000000000};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 63245.553203367585;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> radius = {7, 7, 7};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 28.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> radius = {1, 2, 3, 4, 5, 6, 7, 8};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 50.58155219373389;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> radius = {1000000000, 200000000, 300000000, 400000000, 500000000, 600000000, 700000000, 800000000};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 6.53173138056799E9;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> radius = {10, 20, 30};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 62.92528739883945;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> radius = {100, 100, 11, 11, 25};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> radius = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4E10;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> radius = {1000000000, 1000000000, 250000000, 1000000000, 250000000, 1000000000, 250000000, 99000000};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0E9;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> radius = {1, 999950884, 1};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 63246.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> radius = {1, 100000000};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 20000.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> radius = {1, 94908557};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 19484.20457704137;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> radius = {660005, 344393, 598163, 715234, 52464, 87578};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 3157014.540288346;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> radius = {911673, 825708, 535941, 710852, 549483, 809046, 604659};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 8022165.982667927;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> radius = {732606, 852428, 207585};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1621255.145187647;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> radius = {381165, 519721};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 890167.2988039944;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> radius = {19611, 674161, 702765};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1376628.8608989716;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> radius = {147195, 982716, 939258, 68116, 52334};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1921482.6199869725;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> radius = {376180, 475087, 782672, 278462, 936408, 291909, 462114};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 5118635.312564134;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> radius = {218307, 818795, 786032, 98052};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1687785.9403042246;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> radius = {903214, 252429, 550970, 58607, 889016, 695517};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4430821.778043712;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> radius = {668666, 845064, 224027, 874690, 394297, 141381, 530656, 141738};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4926023.100913776;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> radius = {672956, 37121, 548896, 138004, 551719, 185703, 682747, 298898};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4161722.740292447;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> radius = {699999, 958267, 190583, 513298, 447484, 137280, 291316, 232286};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4532569.191109305;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> radius = {651330, 514779, 913115, 336660, 900413, 655728, 916170, 671158};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 8924151.169512404;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> radius = {162071, 784129, 457990, 137767, 35139, 201263, 585064, 558197};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 3670933.065883142;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> radius = {516745, 53297, 801112, 959401, 220075, 571141, 327418, 494234};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 5548350.130831172;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> radius = {514413, 192326, 689044, 13515, 460874, 589670, 136175, 259540};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 3847414.8676088667;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> radius = {894110, 554627, 619503, 100922, 367125, 59370, 940926, 873953};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 6360707.354945734;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> radius = {322163, 459196, 628399, 411734, 379755, 611674, 586285, 728148};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 6688266.533853211;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> radius = {307289, 477567, 10092, 651049, 280399, 335056, 944680, 591716};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 5195277.807116896;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> radius = {401622118, 479481651, 432779539, 422969728, 753730372, 831790183, 956345956, 446596892};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 7.373901090641952E9;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> radius = {257940314, 193804283, 28080954, 323111452, 746668911, 801115143, 325331971, 301950763};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 3.9969092289770412E9;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> radius = {185063802, 304201708, 432762862, 737163305, 141388679, 521789659, 767578225, 423938433};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4.885495980795207E9;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> radius = {879958222, 205740888, 279137910, 725660632, 835761614, 656087721, 291115281, 135266853};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 5.319102386494895E9;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> radius = {24069029, 627843741, 389400354, 941605915, 28695821, 754440438, 501214494, 294651927};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 5.003215702425909E9;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> radius = {808573108, 302775648, 528765193, 999782916, 798312987, 354151201, 352702188, 632735577};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 7.18227862850116E9;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> radius = {906227351, 124657065, 994679128, 857731976, 396270710, 998555420, 618803501, 360806911};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 7.720539089780999E9;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> radius = {409972987, 149093171, 727064056, 174544906, 911281675, 975101241, 305698222, 89406733};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4.510526391646409E9;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> radius = {435474466, 156588523, 973875344, 395805100, 21037622, 854786896, 386449832, 924828031};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 5.642087141976454E9;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> radius = {420367537, 840457507, 705696354, 594891945, 643497097, 97025820, 364107167, 868772171};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 6.900940200833332E9;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> radius = {83005151, 957472525, 717457809, 55146061, 205268979, 926530186, 866058779, 316724802};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 5.365080352452948E9;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> radius = {882692678, 536432200, 778376668, 456602640, 575121377, 385565867, 413574698, 205272217};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 6.3780904423917885E9;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> radius = {165690463, 96189913, 453777666, 215483195, 813968097, 434956971, 514404814, 499427366};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4.421774435098757E9;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> radius = {62823017, 323670170, 647962839, 530045917, 31806911, 764215698, 632370896, 446676061};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 5.106558894464074E9;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> radius = {103431124, 277249621, 646082589, 980605889, 36533708, 825863061, 878239723, 602692320};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 6.163862591556757E9;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> radius = {505693082, 447551533, 523944842, 577504008, 382636724, 793646419, 497392982, 343190688};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 6.626965022831949E9;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> radius = {150365767, 531068349, 569778789, 58490271, 223883778, 146535393, 564709446, 986074595};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 3.930541025528035E9;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> radius = {513907719, 172908168, 129723465, 297959468, 135403233, 897473306, 557456238, 82638968};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 3.228472428521619E9;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> radius = {946935409, 296003813, 421660197, 449961088, 585164918, 417598792, 687880488, 946411327};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 7.181879597017124E9;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> radius = {902204985, 414705410, 698910380, 699865314, 966011557, 98384542, 780725147, 60999703};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 6.8692058853995285E9;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> radius = {2395, 26850, 6630, 5447, 8653, 26000, 3635, 24269};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 119329.2316821737;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> radius = {19996, 5152, 10227, 13747, 1, 3189, 11531, 17553};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 110827.33309213359;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> radius = {29885, 28869, 840, 8650, 1437, 524, 7979};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 79104.12923590222;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> radius = {6327, 23712, 27299, 2549, 23843, 2345, 1, 17185};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 131741.69436835495;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> radius = {10206, 873, 19128, 11383, 4614, 12913};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 77800.1569488481;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> radius = {21907, 9513, 13400, 25714, 1950, 26915, 8451, 26283};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 191535.06961700282;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> radius = {8718, 1022, 22221, 22735, 12551, 28409};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 126496.68586144518;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> radius = {12099, 8161, 25733, 23568, 8356, 4573, 2859};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 100935.16374007435;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> radius = {8713, 19697, 1, 3517, 21513, 29693};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 99539.97485694889;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> radius = {9206, 1, 1, 18880, 3893};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 29119.539119220797;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> radius = {207589464, 9344249, 520021416, 553942296, 148327041, 55456809, 980628225};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6882331194535584E9;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> radius = {82336476, 811736081, 22694696, 565011900, 16063064, 282776856};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.757637546517231E9;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> radius = {65495649, 260983025, 174344616, 118503996, 476591561, 967395609, 435681129, 65819769};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.831023135375623E9;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> radius = {2603996, 468158769, 337639625, 853573656, 47264625};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8688435043133705E9;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> radius = {173158281, 159465384, 285744216, 432763809, 332915516, 800889000, 853807400};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8085333350698752E9;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> radius = {270930600, 285710409, 498270684, 176241, 79976249};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2912829057691617E9;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> radius = {418242401, 663473564, 190494204, 50750376, 319356};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.275548677290183E9;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> radius = {282239000, 587237289, 710381409, 860834600, 871356, 815044401, 947407400};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 6.229033415764902E9;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> radius = {621005400, 668686881, 186212316, 2213144, 639684264, 76176984};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6464069513139515E9;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> radius = {24729729, 348717276, 248723441, 580423464, 47540025, 95941025, 6225};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.369924352005999E9;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> radius = {20952, 220347864, 733869808, 776150559, 219255227, 45656, 746141643};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2425115287319627E9;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> radius = {8261, 315820241, 215999000, 420875, 122762473, 1294029, 385827352, 531440000};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0043870261396475E9;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> radius = {136589875, 523605616, 264608288, 111979168, 291433247};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.607813880684546E9;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> radius = {3175523, 217080801, 96070912, 825292672, 5450776};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 8.519838456625227E8;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> radius = {656233909, 304820217, 846589536, 3651264, 901427696, 88715536};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 3.433597379975623E9;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> radius = {70443997, 496792088, 557440767, 2862288, 681471000, 206424071, 145530576, 313432};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.486513308192616E9;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> radius = {224754712, 13143256, 379502424, 7999000, 476378541, 976190488, 89914392};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3712970161967654E9;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> radius = {70443997, 911673, 3913, 11088567, 633838779};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4.226115807516858E8;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> radius = {1770561, 50242409, 788888024, 3111136, 442449728};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1815977177385838E9;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> radius = {54438939, 403582419, 176557481, 530441, 198154287, 197136368, 22424768, 177503328};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6562157615584803E9;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> radius = {1678868, 13845076, 207359378, 9440, 116986051, 59969089, 157352699};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 6.618964496410105E8;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> radius = {442050892, 2313563, 168895064, 96060335, 88528910, 31640290, 130561, 104498};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 8.348311239589365E8;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> radius = {37777, 45211416, 200533708, 607573452, 57290189};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 6.981087514475664E8;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> radius = {22666667, 454372826, 671898153, 6868, 533794057, 332151179, 25411270, 15753598};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7067609324709935E9;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> radius = {45212140, 146410029, 126248151, 9150226, 68575938, 533794727, 352276096, 116986227};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5040345570018988E9;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> radius = {4878920, 15753185, 65609798, 260144743, 260143714, 352274519, 35154002};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.125737056700802E9;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> radius = {12116514, 50787, 38142, 9834696, 200533215};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1065082969869405E8;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> radius = {25412309, 519885626, 312901479, 228887026, 84935426, 442051055, 607573148, 454371633};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8376264520758686E9;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> radius = {15752388, 68574856, 74804426, 246, 221533598, 614208, 62741342, 7312270};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 5.102211623031318E8;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> radius = {924117, 112550252, 285610292, 22667903, 207359077};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 6.641210475394449E8;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> radius = {6435791, 184527459, 6436783, 992437313, 599};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 8.55878345525058E8;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> radius = {5154399, 1, 17210645, 758776, 1420281, 656356796};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1256833074842942E8;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> radius = {4083256, 508, 459165056, 28629558, 714923923};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1458936829218228E9;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> radius = {380203681, 20511753, 992436098, 184528518, 248969};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3856289794545138E9;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> radius = {149, 459164649, 69344267, 39134741, 184527344, 20511708};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 5.985249181413195E8;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> radius = {1048840, 5153715, 20511449, 4084205, 503285186, 371888, 100132, 312500824};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 7.931633761892774E8;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> radius = {1049566, 24299220, 39134888, 380204298, 229345911};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 5.905871691492306E8;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> radius = {874, 777600943, 254804958, 52521073, 229344719, 24300527, 1, 17474};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3280830351604218E9;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> radius = {916133487, 52522607, 161318, 503283574, 147009296, 312499632, 550732580};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9763763108968954E9;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> radius = {39135296, 205963424, 164917207, 7962452, 14349228};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 3.686022931574722E8;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> radius = {538278, 161906, 4084279, 4085014, 162004};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 8169292.966935633;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> radius = {161413, 538762, 16460, 2873, 3200663, 24299580, 4083694, 24300198};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4.859977799607072E7;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> radius = {32081, 248439, 408, 17209667, 161820, 249431, 536994, 2475592};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3054365392138219E7;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> radius = {11881896, 1231, 1048505, 1888988, 4093};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 9873928.159339808;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> radius = {28629424, 4084542, 2837, 20511708, 5152835};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 5.136444205525604E7;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> radius = {3199346, 1013, 536904, 371270, 32467, 20511984, 20511570, 32100};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4.1023553997911006E7;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> radius = {5153015, 370952, 1419147, 28630047, 1419604, 20510626, 349};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4.846525297073861E7;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> radius = {111, 758570, 1, 24299232, 4084772, 594, 7963148, 17231};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 3.13321459513885E7;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> radius = {5153729, 1888638, 14348327, 1822, 1420597, 249821, 3200693};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4710553599868882E7;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> radius = {3639, 7961723, 7961843, 9765897, 538259};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 3.355913990691258E7;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> radius = {893871496, 268436295, 893872698, 173, 2096574};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9593783255820036E9;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> radius = {77514, 893872603, 278999, 10000091, 62748784, 823393, 823728};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4.7366409570143586E8;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> radius = {612220702, 118, 9999271, 824247, 1, 1544, 1, 1};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5648336283590332E8;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> radius = {1, 105414354, 1, 78347, 612219260};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 5.080814808640757E8;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> radius = {2097394, 823133, 268436161, 62748814, 268436324};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 5.368724849999752E8;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> radius = {170859560, 824133, 4783605, 9999182, 77799, 739, 2097288, 2096849};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 8.26669422896461E7;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> radius = {823935, 823289, 9999135, 612219347, 10000781};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7648204143246377E8;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> radius = {280373, 16153, 62748377, 410339643, 170859189, 62749313, 410338688, 268436372};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.62166501445396E9;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> radius = {268435154, 893871171, 62749451, 170858818, 612219818, 410338019};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7857234322210617E9;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> radius = {4783692, 823220, 612220447, 16228, 105413741, 4782715};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0808049612226695E8;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> radius = {1, 1952613, 305, 719, 261171, 1};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1428237.9211083846;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> radius = {10078380, 1264, 19197, 1, 134218114, 1954087};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 7.355817169493325E7;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> radius = {1509, 1, 40352631, 20643, 261517, 1952425, 19691};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7752237670803644E7;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> radius = {40352921, 850, 1097, 1952528, 387421248};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5006862269597447E8;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> radius = {1952709, 1, 1952278, 262328, 904, 134218135};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6279737147391826E7;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> radius = {1953150, 387420694, 1953335, 262126, 262798};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 5.8922509151717834E7;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> radius = {40353517, 1953122, 40353458, 10077780, 261486, 387420320, 262946};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3077696209532386E8;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> radius = {387420238, 20279, 134217538, 262575, 1953033, 10078561};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5606398900037724E8;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> radius = {1953896, 1131, 10078479, 10077001, 1952535};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1653091112507835E7;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> radius = {1180, 40354146, 40354225, 1, 10077278, 19253, 261832};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 8.070837099996133E7;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> radius = {1047946, 1048289, 1048436, 543, 1049538, 1048630, 1049381, 575};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.048551998589413E7;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> radius = {1049019, 1047577, 1049560, 208, 1, 97, 1048110};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 6289951.797679972;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> radius = {1, 1, 1, 1048410, 992};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 64498.76649983316;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> radius = {1, 1048846, 1048637, 1048165, 1048995};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 6291444.772216631;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> radius = {457, 1047646, 797, 1049095, 1, 1, 447, 1049360};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4193745.798843899;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> radius = {836, 1, 1, 1048111, 1049456, 309, 626, 1049115};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4194792.328458842;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> radius = {1, 1048003, 1048741, 1048460, 1};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4193206.8203116325;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> radius = {1049413, 1048202, 630, 1047712, 674, 1048051, 15};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 6289140.277294476;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> radius = {1, 598, 904, 1047712, 1047790, 1, 1};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2095501.998548319;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> radius = {1, 1048068, 1, 1, 1048154, 1};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2096221.9982358739;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> radius = {1, 999950884, 1};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 63246.0;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> radius = {9123344, 24324455, 9898983, 40000077, 8989898, 92344323, 100000000, 90909898};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 4.3484743911406803E8;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> radius = {1000000000, 1, 1000000000, 2, 3, 4, 5, 6};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0E9;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> radius = {99999999, 1, 2};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 28284.271106040545;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> radius = {100, 100, 11, 11, 25};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> radius = {998, 10074, 1, 1, 345473, 77973, 4273423, 51123423};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9561597499927435E7;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> radius = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 10000000, 1};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E10;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> radius = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4E10;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> radius = {1000000000, 1000000000, 1000000000, 1000000000, 999999999, 999999998, 1000000000, 1000000000};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3999999994E10;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> radius = {50000, 50000, 2};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 100000.0;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> radius = {1000000000, 1, 1000000000};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0E9;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> radius = {1, 2, 1000, 1, 1, 1, 1000};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2000.0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> radius = {2435345, 3456544, 645647, 456768, 7895678, 3423454, 456, 644563};
    MarblePositioning* pObj = new MarblePositioning();
    clock_t start = clock();
    double result = pObj->totalWidth(radius);
    clock_t end = clock();
    delete pObj;
    double expected = 2.142490044057381E7;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23159771&rd=15499&pm=12324
********************************************************************************
#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <cmath> 
#include <cstring> 
#include <string> 
using namespace std; 
 
const int INF = 1000000000; 
 
class MarblePositioning { 
public: 
    double cal_center(double c1, double r1, double r2) { 
        return c1 + 2 * sqrt(r1 * r2); 
    } 
 
 
    double totalWidth(vector <int> r) { 
        vector<int> p; 
        int times = 1; 
        for (int i = 0; i < r.size(); ++i) { 
            p.push_back(i); 
            times *= (i + 1); 
        } 
         
        double ans = 1e100; 
        double c[10]; 
        for (int i = 0; i < times; ++i) { 
            c[p[0]] = 0; 
            for (int j = 1; j < r.size(); ++j) { 
                double tmp = 0, tmp2; 
                for (int k = 0; k < j; ++k) { 
                    tmp2 = cal_center(c[p[k]], r[p[k]], r[p[j]]); 
                    if (tmp2 > tmp) tmp = tmp2; 
                } 
                c[p[j]] = tmp; 
            } 
            if (c[p[r.size() - 1]] < ans) ans = c[p[r.size() - 1]]; 
         
            next_permutation(p.begin(), p.end()); 
        } 
         
        return ans; 
    } 
};

********************************************************************************
*******************************************************************************/