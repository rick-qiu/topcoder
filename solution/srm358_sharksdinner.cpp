/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7834
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

class SharksDinner {
public:
    int minSurvivors(vector<int> size, vector<int> speed, vector<int> intelligence);
};

int SharksDinner::minSurvivors(vector<int> size, vector<int> speed, vector<int> intelligence) {
    int ret;
    return ret;
}


int test0() {
    vector<int> size = {1, 4, 3};
    vector<int> speed = {2, 3, 1};
    vector<int> intelligence = {1, 5, 2};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> size = {4, 10, 5, 8, 8};
    vector<int> speed = {5, 10, 7, 7, 10};
    vector<int> intelligence = {5, 8, 10, 7, 3};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> size = {1, 2, 3, 4, 100};
    vector<int> speed = {4, 3, 2, 1, 100};
    vector<int> intelligence = {2, 4, 1, 3, 100};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> size = {4, 4, 4, 4};
    vector<int> speed = {3, 3, 3, 3};
    vector<int> intelligence = {8, 8, 8, 8};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> size = {9, 5, 8, 3, 8, 5, 3, 2, 6, 9, 8, 2, 7, 1, 1, 2, 1, 6, 6, 5, 5, 6, 2, 6, 1, 6, 7, 2, 7, 8, 3, 4, 3, 8, 6, 1, 3, 8, 9, 8, 8, 6, 8, 3, 4, 6, 2, 3, 9, 8};
    vector<int> speed = {7, 5, 4, 7, 1, 4, 1, 5, 3, 7, 1, 3, 9, 1, 2, 5, 9, 4, 2, 8, 1, 7, 2, 6, 9, 4, 2, 9, 6, 2, 7, 1, 4, 1, 7, 2, 3, 5, 5, 3, 1, 5, 6, 9, 6, 7, 4, 5, 8, 3};
    vector<int> intelligence = {1, 8, 9, 1, 2, 9, 4, 4, 8, 7, 3, 3, 7, 6, 1, 3, 5, 1, 7, 9, 4, 7, 3, 7, 6, 8, 4, 8, 1, 2, 1, 8, 8, 1, 8, 9, 7, 9, 1, 3, 6, 3, 5, 2, 6, 3, 4, 9, 4, 1};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> size = {1651991161, 111481592, 1400022452, 1514457529, 12372646, 1575634936, 33060375, 1278136755, 394361080, 1124715012, 54763008, 786469436, 1347219423, 332654597, 320997792, 471216710, 1354667141, 450554307, 202090594, 24662275, 1511895588, 956167082, 1270726444, 1261440103, 430228421, 235116664, 1591867171, 1306131116, 1855586418, 82862567, 801147645, 1360093930, 46860509, 53686448, 727067810, 59233154, 1629321384, 612644536, 1189886260, 23682464, 1737359547, 1244649267, 662668250, 937095322, 1577303863, 983666041, 1408312031, 784487356, 1434220347, 1610402624};
    vector<int> speed = {661665981, 798632286, 419086057, 1932392424, 60072389, 849314478, 20025440, 1504455910, 7961945, 1875611857, 1587318476, 809109589, 1088222138, 1634178984, 862796037, 1815289947, 1545928489, 344633772, 280450834, 588331100, 220832586, 17810382, 1832980366, 883500835, 807422054, 1262800580, 1867166875, 68250436, 47287936, 1153903574, 1678653059, 561470268, 1952535859, 97739117, 346379043, 1865124599, 799569945, 366404482, 1222096860, 807531889, 94532690, 661931688, 1616641477, 1182754827, 148627023, 331953865, 850561126, 1694555511, 676587636, 1131011959};
    vector<int> intelligence = {135402962, 897420221, 1001338691, 1968383327, 1780921055, 1808760744, 1083700259, 1500604282, 1877011179, 983504545, 507024207, 1408180590, 1544974812, 312076417, 1358436057, 1891353855, 29717367, 10522353, 110274688, 1251814227, 818054241, 204807378, 1913745914, 287212069, 1387562204, 62372937, 619165934, 90639681, 1609444799, 1295753569, 1221651640, 1744847760, 45690142, 75506682, 1565747439, 1826611196, 1884267426, 501964049, 1179731829, 1613794956, 1485468593, 1686756035, 874491897, 882959757, 1998832452, 85444305, 626829963, 28549819, 95966657, 737104650};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> size = {5, 3, 3, 2, 5, 3, 3, 5, 1, 1, 4, 5, 1, 2, 3};
    vector<int> speed = {5, 4, 1, 6, 3, 4, 5, 4, 3, 5, 1, 6, 1, 2, 5};
    vector<int> intelligence = {5, 6, 2, 5, 5, 4, 2, 1, 2, 6, 6, 4, 4, 4, 5};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> size = {2000000000, 2000000000};
    vector<int> speed = {2000000000, 2000000000};
    vector<int> intelligence = {2000000000, 2000000000};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> size = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> speed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> intelligence = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
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
    vector<int> size = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 8, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 9, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> speed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 100, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 1, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> intelligence = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 11, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 2, 47, 48, 49, 50};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
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
    vector<int> size = {10, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 8, 8, 14, 15, 16, 8, 8, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 4, 9, 36, 37, 38, 39, 4, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> speed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 8, 14, 15, 16, 8, 8, 19, 20, 21, 100, 23, 24, 25, 26, 4, 28, 29, 12, 31, 32, 33, 34, 35, 36, 37, 1, 39, 4, 41, 42, 43, 12, 45, 46, 47, 15, 49, 50};
    vector<int> intelligence = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 8, 14, 15, 16, 8, 8, 19, 20, 21, 22, 23, 24, 25, 11, 27, 28, 29, 30, 31, 32, 12, 34, 35, 36, 12, 12, 39, 40, 41, 42, 43, 44, 45, 2, 47, 48, 49, 1};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> size = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> speed = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> intelligence = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> size = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 100, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> speed = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 100, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> intelligence = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 100, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> size = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 100};
    vector<int> speed = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 100};
    vector<int> intelligence = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 100};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> size = {982255212, 1591201934, 1364151705, 1967282971, 1934934564, 171953693, 1642708563, 1592060928, 1019812637, 803621400, 57176556, 1748659739, 1706934930, 1972445954, 1832694917, 94488855, 1927853080, 632122008, 560763327, 1241108935, 1188172294, 839356499, 1238719516, 1419642826, 875293247, 1743714624, 1000085112, 1008137330, 1048383065, 1676521102, 1591223686, 1335243596, 727717857, 272409134, 1789349157, 77094585, 1323270077, 854474481, 1198160758, 1251729629, 1361075570, 968986483, 1023885716, 111017833, 1726279994, 1969634629, 313530303, 180534902, 514099659, 264437667};
    vector<int> speed = {1036232946, 1464009973, 1964352679, 30225195, 210198447, 312111867, 130662882, 698288605, 779701224, 1506160730, 1858474536, 1501890788, 321861612, 326827997, 119268359, 40288093, 445800496, 950408588, 219341612, 524050343, 268353489, 676287567, 49836710, 1111939713, 528499130, 1058872676, 237394149, 473751904, 18179143, 753910253, 680145527, 952642393, 493091650, 1431497998, 1309806150, 160332293, 392673828, 1313080042, 1986277447, 679932341, 1961954927, 717977327, 1058407807, 344378977, 936087559, 1800044987, 631849514, 928404651, 54417261, 296510741};
    vector<int> intelligence = {1702621433, 943068251, 648259504, 633901634, 1543432251, 1356539817, 1388546057, 1920437540, 926656467, 1061490887, 1149863650, 718097534, 723849435, 1702833404, 105771601, 866065856, 1399567834, 10671795, 127679419, 1599518900, 545566822, 70518240, 1484413608, 182334839, 688846604, 1426293801, 1761972364, 1414462744, 1735728245, 852688906, 1641865580, 126260019, 270413452, 1208682634, 1416166211, 1186807040, 86383255, 1996288181, 1666110474, 1425674272, 1119521059, 1596809296, 543552567, 359389580, 889885328, 271797547, 1962249629, 1397527322, 1195637564, 131938908};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> size = {14, 38, 67, 79, 95, 98, 54, 64, 18, 23, 76, 99, 80, 56, 72, 94, 56, 95, 77, 4, 46, 8, 96, 46, 58, 16, 83, 48, 13, 37, 91, 12, 33, 84, 37, 20, 98, 48, 77, 11, 49, 25, 3, 31, 40, 67, 70, 43, 21, 77};
    vector<int> speed = {48, 85, 3, 68, 79, 22, 60, 64, 74, 34, 85, 83, 80, 78, 5, 58, 86, 25, 55, 42, 80, 85, 93, 22, 62, 91, 56, 2, 79, 45, 55, 30, 8, 17, 52, 71, 59, 92, 86, 58, 89, 68, 75, 81, 52, 66, 9, 14, 87, 72};
    vector<int> intelligence = {62, 37, 40, 36, 16, 41, 41, 73, 89, 28, 89, 45, 66, 30, 84, 2, 82, 42, 36, 74, 40, 27, 77, 4, 19, 28, 18, 67, 81, 51, 25, 57, 89, 98, 67, 45, 83, 36, 90, 8, 30, 8, 95, 93, 33, 31, 99, 77, 75, 27};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> size = {9, 6, 2, 7, 9, 2, 3, 5, 1, 8, 9, 3, 8, 3, 4, 5, 5, 6, 3, 3, 9, 8, 6, 1, 9, 7, 4, 4, 5, 6, 8, 5, 9, 1, 5, 2, 5, 9, 8, 5, 7, 9, 2, 6, 7, 9, 2, 5, 1, 8};
    vector<int> speed = {7, 2, 9, 9, 7, 6, 5, 4, 8, 4, 3, 5, 4, 9, 3, 8, 3, 1, 9, 8, 8, 3, 3, 8, 5, 6, 7, 3, 4, 4, 5, 1, 6, 7, 8, 6, 3, 3, 2, 6, 3, 5, 5, 2, 2, 5, 9, 7, 8, 9};
    vector<int> intelligence = {2, 6, 5, 5, 8, 2, 3, 3, 6, 4, 9, 8, 7, 8, 6, 7, 7, 9, 9, 4, 2, 4, 5, 9, 2, 8, 7, 7, 2, 8, 1, 3, 7, 4, 8, 9, 3, 4, 9, 1, 8, 3, 6, 3, 2, 1, 2, 6, 4, 4};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> size = {1, 3, 1, 1, 3, 2, 2, 1, 2, 3};
    vector<int> speed = {3, 2, 3, 2, 2, 3, 1, 1, 2, 2};
    vector<int> intelligence = {2, 1, 3, 1, 1, 3, 2, 1, 2, 1};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
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
    vector<int> size = {2, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 2, 2, 1, 2, 2, 1, 2, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 2};
    vector<int> speed = {2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 1, 2, 1, 2, 1, 1, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1, 2, 2, 2, 1, 1, 1, 2};
    vector<int> intelligence = {1, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1, 1, 2, 2, 2, 1, 2, 2, 1, 2, 1, 1, 1, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2, 1, 2};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> size = {33, 91, 91, 27, 37, 19, 95, 14, 81, 1, 33, 39, 53, 72, 23, 89, 89, 92, 62, 13, 62, 84, 79, 58, 65, 24, 2, 12, 39, 9, 59, 77, 62, 28, 82, 2, 56, 78, 35, 52, 6, 45, 78, 17, 63, 16, 57, 9, 6, 70};
    vector<int> speed = {65, 19, 22, 87, 17, 83, 38, 16, 99, 71, 76, 21, 3, 41, 91, 63, 6, 37, 7, 65, 54, 93, 52, 94, 27, 69, 58, 34, 14, 98, 89, 30, 26, 7, 49, 11, 88, 95, 67, 14, 47, 57, 36, 64, 10, 77, 67, 94, 83, 4};
    vector<int> intelligence = {21, 24, 96, 67, 90, 80, 70, 77, 38, 32, 63, 74, 96, 99, 21, 44, 89, 5, 97, 11, 28, 40, 76, 37, 82, 47, 45, 69, 91, 31, 11, 63, 85, 25, 15, 10, 65, 88, 5, 28, 90, 65, 56, 14, 77, 73, 98, 46, 98, 32};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> size = {688, 831, 211, 189, 477, 552, 786, 741, 147, 25, 40, 619, 888, 865, 719, 463, 744, 884, 717, 540, 552, 819, 234, 46, 381, 89, 395, 349, 747, 399, 923, 874, 171, 716, 747, 683, 314, 177, 905, 262, 967, 663, 758, 132, 842, 322, 218, 40, 266, 187};
    vector<int> speed = {5, 840, 600, 333, 4, 351, 295, 37, 807, 738, 471, 623, 775, 256, 144, 606, 667, 729, 339, 11, 805, 611, 273, 717, 880, 217, 608, 997, 759, 904, 266, 967, 657, 593, 11, 781, 727, 15, 36, 866, 211, 950, 111, 85, 52, 158, 806, 700, 55, 35};
    vector<int> intelligence = {357, 212, 496, 487, 220, 886, 545, 925, 503, 150, 19, 819, 610, 660, 185, 533, 100, 856, 201, 814, 129, 680, 647, 881, 29, 31, 72, 306, 684, 38, 508, 31, 685, 551, 774, 172, 755, 237, 612, 951, 290, 786, 215, 658, 523, 706, 380, 837, 85, 421};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
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
    vector<int> size = {4543, 557, 65, 1508, 8813, 5349, 1794, 7356, 3634, 704, 8886, 7510, 8802, 5103, 5251, 3498, 7331, 9053, 793, 1742, 6685, 2520, 7693, 1076, 2824, 9037, 1986, 5674, 5800, 7362, 6231, 6063, 5580, 389, 568, 9362, 2688, 3814, 1033, 3802, 8122, 4566, 4591, 9223, 9216, 9914, 918, 5229, 2728, 17};
    vector<int> speed = {8193, 3276, 467, 2699, 4237, 5082, 4161, 5609, 1742, 1613, 1424, 7215, 1396, 3138, 867, 5294, 2542, 8963, 719, 8118, 9909, 8603, 6689, 2405, 4169, 2316, 4996, 4127, 7287, 3757, 9815, 502, 6105, 7130, 5577, 4813, 8551, 3296, 5106, 3560, 933, 3232, 4937, 8008, 9358, 668, 77, 1543, 846, 2975};
    vector<int> intelligence = {6714, 9334, 7906, 2100, 3232, 3670, 7563, 6584, 3154, 4177, 2482, 5244, 6086, 3969, 8074, 6964, 525, 5699, 1891, 9594, 6259, 1919, 8176, 2887, 1855, 4412, 9733, 2151, 6085, 537, 5580, 269, 5122, 5783, 6003, 2253, 9166, 5985, 3861, 2260, 3655, 9147, 755, 323, 2035, 7149, 7180, 5844, 4417, 6573};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> size = {93911, 32538, 20936, 48917, 62474, 37845, 90508, 84532, 57300, 48113, 47935, 58443, 10104, 46283, 58905, 52220, 57296, 80767, 84096, 64085, 34572, 41737, 14764, 2697, 38908, 30665, 48571, 5595, 85529, 67700, 65944, 6730, 70577, 41490, 22173, 19404, 50769, 93564, 64918, 53306, 60106, 82983, 43213, 59603, 45093, 78845, 47712, 42250, 28970, 61571};
    vector<int> speed = {64558, 49991, 35538, 182, 97381, 93857, 67285, 96532, 50194, 82459, 54189, 15710, 3457, 3090, 18681, 58650, 73651, 55904, 25335, 28196, 60621, 72787, 30715, 97152, 11767, 68803, 37999, 60241, 97102, 86362, 90037, 55480, 17833, 93976, 50100, 48814, 49087, 93944, 50998, 76162, 85688, 95782, 69373, 65589, 57878, 40745, 84019, 37088, 42036, 74126};
    vector<int> intelligence = {30358, 68785, 41810, 10207, 86326, 47987, 82622, 57129, 69909, 59726, 87127, 7933, 93705, 12587, 42417, 18473, 10, 48272, 94164, 15346, 11507, 79433, 6876, 72392, 2872, 13745, 19210, 66545, 58142, 24016, 43920, 45919, 20458, 47241, 59493, 56906, 63046, 43677, 61814, 14085, 62533, 64526, 58129, 901, 95168, 35802, 25721, 13378, 43198, 69661};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> size = {842415, 961552, 94029, 27427, 888857, 423840, 177194, 753428, 796350, 336967, 394568, 450452, 183796, 768175, 545299, 56526, 108105, 978623, 562635, 863702, 45448, 42597, 416781, 151282, 866488, 224772, 114536, 392023, 207220, 875917, 764572, 606988, 590628, 169772, 158719, 409019, 767223, 743230, 122756, 235021, 265545, 616307, 363574, 761724, 654827, 577949, 472923, 940152, 278083, 115795};
    vector<int> speed = {796567, 617467, 949840, 313165, 170202, 969400, 491749, 695805, 73691, 694415, 3445, 939472, 287376, 907584, 26833, 654445, 83931, 985873, 801118, 327461, 532431, 197260, 9035, 873503, 313017, 569859, 510315, 571623, 86712, 25669, 666239, 346900, 271588, 408774, 422079, 78216, 14533, 182665, 376036, 946582, 835738, 859903, 903179, 120689, 234821, 459922, 615518, 770717, 316859, 626389};
    vector<int> intelligence = {713752, 525110, 120829, 71952, 815862, 726312, 961375, 924225, 577207, 773054, 924315, 547322, 515922, 899836, 851672, 192657, 83204, 6027, 281647, 410799, 560400, 917029, 712996, 477576, 16467, 406705, 566189, 472778, 483633, 297785, 792029, 982821, 985293, 302167, 711201, 511056, 196256, 303572, 401226, 87858, 926683, 504839, 227561, 364374, 991985, 753354, 13434, 37072, 621378, 936582};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> size = {997391795, 128278871, 1057880232, 777044333, 1967121013, 1730447583, 1290499576, 1248102589, 22797791, 1225185125, 433789774, 401378271, 1806064519, 530373581, 419157076, 1923386790, 1055753379, 27485028, 1119632801, 217375721, 1894652200, 1349990752, 1838169902, 384857355, 1559594262, 524984469, 1722581685, 1856208272, 678435028, 1033271422, 691029953, 1642074644, 174455157, 1277369654, 517109091, 91112460, 1968237527, 103666586, 1985808230, 880629156, 653888352, 1352227073, 786436830, 1845788466, 809093971, 753619960, 1766431732, 384814723, 1334497173, 1973241150};
    vector<int> speed = {1133991125, 1632843371, 1626552244, 1750636167, 107710363, 1196337933, 820962605, 133891664, 1206168335, 207928595, 567284656, 1809143330, 50491450, 969206877, 1548830810, 92415676, 752800896, 119097452, 1877355201, 1314828127, 1855490629, 1536785141, 704432287, 626318269, 1754892269, 1591832325, 1071584033, 574910939, 766728986, 64146674, 100007567, 449955656, 1897290758, 1987121583, 1941592907, 1174905609, 1887700702, 1209257392, 753286405, 1547316125, 196959997, 118238688, 49438447, 738195064, 1830600156, 49657593, 724027878, 352642128, 1722076586, 892931491};
    vector<int> intelligence = {1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 2, 1, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 1, 1, 2, 2, 2, 2, 1};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> size = {5, 1, 8, 3, 1, 3, 5, 5, 1, 6, 2, 7, 9, 1, 9, 1, 7, 3, 2, 9, 5, 3, 5, 6, 6, 5, 8, 8, 7, 3, 2, 5, 7, 2, 1, 8, 4, 1, 9, 1, 5, 2, 4, 5, 3, 7, 9, 7, 6, 6};
    vector<int> speed = {8, 1, 9, 5, 1, 9, 1, 6, 3, 7, 9, 5, 1, 7, 8, 7, 3, 7, 7, 6, 4, 2, 2, 4, 2, 3, 7, 5, 4, 8, 3, 1, 5, 6, 6, 9, 4, 5, 3, 8, 1, 6, 7, 7, 3, 1, 6, 9, 2, 4};
    vector<int> intelligence = {1, 2, 2, 1, 1, 1, 2, 2, 1, 2, 2, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 2, 2, 1, 2, 2, 1, 1, 2, 2, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 2};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
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
    vector<int> size = {1536154780, 92897137, 751160842, 1970441783, 628967039, 1656823864, 1246473453, 1741978709, 1777219127, 1277880590, 212430970, 769838999, 1281584805, 350114534, 510900302, 4515384, 141434549, 1933469948, 384185117, 89409070, 372349453, 1145384578, 34053009, 1597686451, 1108260977, 104207744, 470716477, 1962217140, 900626979, 26607038, 846941192, 1143557613, 1715910056, 329247895, 89643626, 1824429237, 706681178, 1454509230, 1815828708, 565806140, 1639231773, 1668567603, 1830497543, 720457516, 426010262, 1406924494, 874302587, 947220612, 1437046862, 576228849};
    vector<int> speed = {2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 2, 1, 1, 2, 2, 2, 1, 2, 2, 1, 1, 2, 2, 1, 1, 2, 2, 1, 2, 1, 2, 2, 2, 2, 1, 2, 2, 1, 2, 1, 2, 1, 1, 1};
    vector<int> intelligence = {1, 2, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2, 1, 2, 2, 2, 1, 1, 1, 1};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> size = {3, 8, 2, 8, 3, 5, 8, 7, 4, 5, 28, 1, 5, 3, 8, 6, 1, 5, 6, 8, 5, 3, 20, 5, 3, 3, 3, 7, 3, 5, 5, 1, 9, 3, 9, 6, 3, 6, 1, 4, 4, 7, 7, 4, 9, 7, 4, 1, 9, 700};
    vector<int> speed = {1, 2, 1, 1, 23, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 1000, 2, 2, 2, 1, 2, 2, 1, 2, 1, 1, 10, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 1, 1, 1, 2, 2, 2, 1, 1, 1};
    vector<int> intelligence = {1, 2111, 2, 1, 2, 2, 1, 2, 2, 1, 32, 2, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> size = {2, 2, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 1, 2, 1, 2, 2, 2, 2, 1, 2, 1, 1, 2, 1, 2, 1, 2, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1};
    vector<int> speed = {2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 1, 1, 2};
    vector<int> intelligence = {1, 2, 2, 1, 2, 1, 2, 2, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 2, 2, 2, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1, 1, 1, 2, 1, 2, 2, 1, 1, 1, 1, 2};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> size = {3, 1, 1, 3, 2, 2, 1, 1, 1, 1, 3, 2, 2, 3, 3, 3, 1, 1, 1, 1, 3, 3, 1, 2, 3, 2, 3, 2, 3, 2, 2, 1, 1, 1, 1, 1, 2, 3, 1, 2, 2, 1, 1, 1, 1, 2, 1, 3, 1, 3};
    vector<int> speed = {2, 3, 1, 2, 2, 1, 2, 3, 2, 3, 2, 1, 1, 2, 3, 3, 3, 1, 1, 2, 3, 1, 1, 1, 1, 2, 3, 3, 3, 2, 1, 3, 2, 3, 2, 3, 3, 2, 2, 3, 2, 1, 3, 1, 2, 3, 2, 3, 3, 2};
    vector<int> intelligence = {3, 1, 3, 3, 3, 3, 2, 2, 2, 3, 3, 1, 2, 3, 1, 2, 2, 2, 3, 1, 1, 1, 3, 3, 1, 1, 3, 1, 3, 1, 3, 2, 3, 2, 1, 3, 1, 3, 1, 3, 1, 3, 3, 2, 3, 2, 1, 2, 1, 1};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> size = {4, 4, 2, 3, 1, 4, 1, 2, 1, 2, 1, 2, 2, 1, 3, 2, 1, 1, 2, 4, 4, 4, 1, 2, 3, 2, 4, 3, 2, 4, 1, 2, 2, 2, 4, 2, 4, 1, 2, 4, 1, 2, 3, 3, 3, 4, 4, 2, 3, 2};
    vector<int> speed = {1, 1, 2, 4, 2, 2, 1, 2, 3, 4, 1, 3, 3, 4, 4, 4, 4, 3, 4, 2, 4, 1, 4, 4, 3, 1, 2, 3, 1, 3, 1, 1, 4, 1, 1, 2, 2, 3, 4, 1, 4, 4, 3, 1, 3, 1, 3, 1, 1, 2};
    vector<int> intelligence = {1, 3, 2, 3, 4, 4, 1, 3, 2, 2, 2, 3, 1, 3, 4, 2, 2, 4, 3, 4, 4, 4, 3, 2, 2, 2, 4, 3, 1, 3, 2, 4, 2, 2, 3, 3, 3, 1, 1, 2, 1, 1, 3, 1, 2, 2, 1, 1, 3, 2};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> size = {1, 3, 5, 4, 2, 5, 5, 1, 3, 4, 5, 1, 4, 1, 4, 5, 4, 4, 5, 5, 3, 4, 2, 4, 4, 2, 1, 4, 5, 2, 4, 2, 1, 2, 2, 3, 1, 1, 4, 4, 3, 3, 2, 3, 2, 4, 1, 3, 1, 2};
    vector<int> speed = {5, 4, 3, 3, 1, 1, 4, 1, 1, 3, 3, 4, 1, 2, 4, 5, 3, 3, 3, 2, 1, 3, 2, 2, 1, 4, 3, 1, 2, 1, 5, 2, 3, 4, 1, 1, 3, 2, 5, 1, 2, 2, 2, 3, 5, 2, 5, 2, 2, 2};
    vector<int> intelligence = {5, 3, 4, 3, 3, 3, 5, 4, 3, 5, 5, 5, 3, 2, 4, 2, 3, 1, 4, 4, 5, 5, 3, 1, 3, 1, 3, 4, 1, 5, 1, 3, 1, 2, 1, 4, 3, 3, 3, 3, 4, 3, 5, 5, 3, 5, 2, 2, 5, 2};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> size = {1081811872, 1590969978, 96066730, 930387091, 1751190211, 37779445, 1875688069, 1892551589, 1556041787, 1276046659, 1186583486, 370027867, 290471783, 1421828122, 138805066, 923028070, 1644700100, 1709141483, 1242984988, 1481196181, 748256087, 801136725, 689073477, 1470367954, 96433832, 432259313, 44743071, 1654506940, 88180143, 1836528230, 754979168, 287892898, 1245299487, 276031118, 752093677, 54619350, 377439593, 66991014, 474773080, 114247465, 1944998593, 673974351, 1797783780, 981120371, 1432519605, 1824017503, 49930218, 177371665, 397584262, 181991991};
    vector<int> speed = {899682442, 923161383, 649831356, 1937277615, 118581117, 1795770265, 1716447831, 213158738, 1105006193, 939129224, 567100397, 138863837, 1873390155, 397291340, 51364126, 893195738, 393571498, 505246120, 385817802, 1697775418, 104473878, 1525151809, 796110412, 462536398, 1703332910, 1996548882, 128139576, 1783787897, 1880488264, 1712172503, 517258728, 270193931, 130652361, 1814394949, 167871555, 721946509, 1903339435, 1723001838, 1032826905, 1610858482, 288054921, 19206837, 1591555185, 564288006, 530574, 1860435623, 532664629, 1265233274, 1081772201, 1291985466};
    vector<int> intelligence = {1134517388, 1571775979, 390295919, 1731315099, 83668812, 88223696, 284441081, 540562463, 788904426, 1697156120, 1602775086, 1771784860, 1084022066, 1003747956, 1015738064, 1810820495, 108463169, 1786013718, 473887668, 139525103, 953611020, 843574995, 411211895, 752110997, 13250282, 1622273662, 681009697, 1526430215, 1789918301, 1462052965, 1317331471, 644919963, 1679080370, 1426014926, 223848567, 1889396930, 1291617171, 25240649, 748048132, 1345333091, 1537632041, 1047311560, 1624149958, 727299109, 1640983310, 925941849, 895148791, 220076932, 954228328, 654988623};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> size = {790365146, 1313323159, 461882290, 353017303, 1474233128, 1709545317, 1943934559, 519869122, 1072575330, 1548271264, 1229246703, 6394743, 1520386403, 1647770555, 381160610, 1321356503, 1874407842, 152910370, 1574791760, 1549099783, 684703855, 201473157, 1454320051, 802476023, 504678813, 608320788, 1821239939, 1731085957, 1793712627, 1409451907, 1048348881, 1787308062, 22164158, 1191153090, 137381867, 1371125950, 1011674603, 870729274, 120130, 227556144, 411129609, 1690357894, 1293193891, 1839824232, 135188366, 1055681386, 1384934688, 1053629149, 285432514, 1581364486};
    vector<int> speed = {638182421, 78169280, 1594663863, 236846092, 244545954, 503250420, 1533941148, 490936045, 200682492, 1348855458, 343188700, 1364771789, 1481583854, 1354781000, 1961504101, 1064108586, 579522295, 814809388, 360800368, 36578573, 8896863, 195186695, 777749042, 732924588, 1559390866, 11571924, 318613971, 32596057, 1318942289, 1585877909, 294231048, 1306683290, 1355670226, 718360579, 539434684, 827019105, 195335797, 172886764, 103008782, 1485914645, 1167686976, 567321657, 816767272, 282812290, 496956308, 733202804, 484614961, 215000941, 1177762169, 1568374434};
    vector<int> intelligence = {1477102277, 1358165942, 1500236767, 178789731, 103716952, 1537576678, 30512949, 1394553393, 56899036, 1348992531, 448097465, 1455316373, 1268336650, 1945592555, 34601432, 315292995, 90445756, 19922124, 956151560, 4054764, 1917854, 858947022, 93734265, 42114229, 1548089518, 327931553, 1359825144, 707035431, 1518204388, 766446086, 711192944, 116190849, 404338008, 1239706348, 1980333394, 1541882691, 658987861, 1453209064, 1669373029, 1211241436, 130410925, 364991757, 896233535, 435900244, 1288911800, 1840098019, 887262680, 1239057106, 1879565654, 785283954};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> size = {1304967575, 1513090531, 1398773078, 59352126, 1808472366, 1046378334, 1643882917, 1370718730, 1641057456, 1553977543, 497543586, 113970514, 845624893, 1387475979, 685863161, 728826950, 656666021, 1132340612, 1402542948, 1281195846, 20738906, 461472270, 310391726, 1077025429, 1804184613, 1262608166, 144543334, 229844559, 1223492835, 1288626400, 595787401, 496573278, 584569792, 967813021, 40871075, 861699686, 515777097, 1841354079, 1884864164, 1084000124, 1548108207, 1962993817, 1953715437, 983154569, 1042407586, 1153419363, 1284556502, 114758205, 1461850147, 753163236};
    vector<int> speed = {702637855, 1594229106, 840678062, 1016915168, 1912520359, 45855962, 1288406802, 223515458, 1873625542, 1035636442, 1252849257, 38195586, 1714858676, 1366080886, 1084146303, 254732234, 1678622029, 166587436, 89555988, 874758593, 1626848928, 1476577688, 366820938, 476790979, 363843752, 264929738, 1145082558, 870918793, 1625467006, 1289657384, 669284218, 1558389249, 1575205763, 300341698, 35410521, 1524614733, 224265661, 1613676269, 32756489, 375419325, 413659628, 1228366096, 42949435, 620371110, 349286805, 1830805379, 1903819313, 221930998, 1860532608, 780115027};
    vector<int> intelligence = {1770752820, 834281838, 103942387, 322754525, 1616370743, 1002244428, 311912469, 1865859088, 960292882, 1755598688, 1950801888, 626086464, 62752183, 97530713, 851260393, 1048681577, 977956786, 64204334, 600028280, 951056572, 1346043248, 1681879181, 635274570, 1297206365, 1457634698, 1775714335, 340069196, 84615211, 609572499, 1663444368, 1837447623, 1390942335, 269068725, 1141056304, 765880656, 1780276907, 275130505, 309959193, 1536444632, 1759903030, 1329243520, 28709289, 799194955, 220822939, 1690410053, 1552031560, 1666202123, 1271415930, 1486620021, 701199932};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> size = {136664767, 1291138840, 370491147, 1829430663, 337239218, 168993548, 211511527, 1246275488, 240160854, 132029176, 1806158529, 456254949, 51666189, 161630515, 1521053439, 827699121, 83782609, 1032427330, 597169078, 16142064, 1142846195, 1133205241, 448588104, 987537926, 11129196, 930672690, 510610418, 1117319437, 617100806, 1670587370, 1339276216, 1733489169, 1018358998, 859460529, 223398912, 675542626, 512656217, 1355237961, 1929288258, 1112422586, 1688709522, 1936768079, 1690800441, 15728164, 916744347, 1088382419, 748344283, 1533270394, 1539094761, 869218241};
    vector<int> speed = {1369940371, 608230260, 833710281, 268793332, 674454282, 829486841, 1892583764, 755496157, 1974437099, 778987463, 1865760339, 1649333132, 1326988278, 1741039400, 162911079, 971906327, 512492498, 1281886388, 1674862287, 1268623905, 101822444, 1708152543, 1185808448, 169961850, 1402362838, 778416472, 658567197, 366011555, 1672085105, 347491574, 442243443, 11035432, 1427839315, 1482289967, 567926556, 1947631011, 241130440, 1124089060, 348844656, 648822610, 1395508924, 1616544370, 943704014, 1021453075, 1688532230, 1153226971, 1211579255, 873940664, 302227814, 486486513};
    vector<int> intelligence = {13617929, 1517821310, 334518678, 649417568, 1439444479, 1361361056, 1048937430, 1417664112, 1481051551, 1009412807, 807825993, 891273325, 1853325987, 352262487, 926889357, 1226277252, 861629712, 1750334562, 160511459, 568149512, 12673168, 509074475, 1544048722, 145851372, 1274303920, 416024853, 1159547682, 1001360481, 1767021, 728848613, 1773726466, 623028080, 267267671, 1090085421, 1895090257, 1592712559, 1146907852, 123862216, 1458715094, 1731137595, 1974545801, 903593026, 1319256142, 153641994, 154198545, 845522702, 1803113524, 559625658, 1584282663, 625924972};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> size = {733826330, 1000995463, 754261985, 316678366, 1020809211, 13553396, 1873226134, 1383699203, 985122786, 358545623, 219396624, 1950458061, 821027402, 981151334, 1901584751, 1640532185, 1186520717, 981430814, 1529825030, 1481394652, 44310994, 1020811622, 62673576, 386051065, 797521607, 946950614, 443638195, 1581749740, 99722910, 80540407, 135575620, 79543006, 761876111, 232310883, 924525812, 54986692, 1930564449, 752433701, 62545786, 768857395, 1212238399, 1379104564, 1945751687, 518267009, 218461250, 616008682, 1416210273, 1124918542, 166682651, 494390367};
    vector<int> speed = {1369982829, 71132321, 350578470, 1149175935, 1668269606, 303369134, 412094814, 1058012603, 848041952, 819108977, 1502962046, 806954047, 478756777, 1428211121, 1802592450, 69604221, 1816313015, 1610482706, 1623013267, 450607104, 314409396, 1829100247, 200816273, 932475476, 1270466648, 1125154544, 1537059152, 1165686001, 1646426530, 404880696, 588587564, 569136388, 1685235999, 1904784064, 1003431057, 1815166963, 1329383309, 138583046, 1274784026, 367109507, 1836627791, 73529855, 1232137451, 1266902137, 1556337402, 343529924, 497374101, 97784217, 123092088, 649931235};
    vector<int> intelligence = {1988417789, 126193377, 847343874, 159028740, 1849665170, 1513608943, 635118698, 550959082, 707384633, 482573904, 78985221, 209943203, 1442462545, 1239585469, 382601115, 575023809, 975002670, 183262736, 75540682, 1510931589, 1103111270, 634831064, 1403404054, 1138969297, 425858136, 404797035, 186107193, 443301841, 1379782728, 270540373, 271823334, 1900144174, 1075823468, 1480516870, 796122239, 1259524013, 673880410, 1097434016, 1654590468, 324357150, 1388758816, 97029310, 17344698, 200350073, 1948463994, 20355614, 175312575, 181748748, 1832338298, 704212228};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> size = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 1};
    vector<int> speed = {10, 9, 9, 9, 1, 2, 3, 4, 5, 6, 20, 20, 20, 20, 3, 2, 2, 2, 2, 2, 2, 1};
    vector<int> intelligence = {10, 9, 9, 9, 8, 7, 6, 5, 4, 3, 3, 3, 3, 3, 20, 20, 20, 20, 20, 20, 20, 20};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> size = {681, 1073, 439, 1065, 595, 703, 573, 1538, 754, 662, 1742, 482, 2061, 397, 2195, 1762, 1573, 1040, 2616, 1589, 1925, 2299, 1932, 2237, 1902, 1580, 2258, 3714, 1442, 2413, 3035, 2973, 891, 1448, 931, 1546, 2942, 867, 1215, 2768, 1894, 3795, 1944, 2443, 5173, 3924, 4604, 3366, 110, 324};
    vector<int> speed = {994, 697, 428, 722, 563, 1118, 946, 623, 1313, 478, 1140, 1494, 1429, 507, 1116, 2070, 768, 1227, 1035, 1191, 1472, 987, 438, 2890, 1113, 1460, 3254, 2818, 1663, 352, 311, 1145, 2348, 1574, 2457, 1104, 938, 2779, 4480, 3175, 3729, 301, 2313, 1776, 2491, 3184, 1090, 4932, 1780, 1780};
    vector<int> intelligence = {708, 379, 418, 997, 163, 1223, 501, 1124, 701, 606, 1039, 356, 174, 200, 1185, 707, 2284, 1962, 1399, 649, 1771, 1241, 1445, 1042, 1868, 2123, 1261, 222, 2770, 2126, 3946, 1036, 1914, 2162, 2597, 2110, 3580, 1088, 2393, 1968, 926, 3606, 3819, 749, 1129, 2495, 677, 1185, 1728, 1812};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> size = {42, 68, 35, 1, 70, 25, 79, 59, 63, 65, 6, 46, 82, 28, 62, 92, 96, 43, 28, 37, 92, 5, 3, 54, 93, 83, 22, 17, 19, 96, 48, 27, 72, 39, 70, 13, 68, 100, 36, 95, 4, 12, 23, 34, 74, 65, 42, 12, 54, 69};
    vector<int> speed = {48, 45, 63, 58, 38, 60, 24, 42, 30, 79, 17, 36, 91, 43, 89, 7, 41, 43, 65, 49, 47, 6, 91, 30, 71, 51, 7, 2, 94, 49, 30, 24, 85, 55, 57, 41, 67, 77, 32, 9, 45, 40, 27, 24, 38, 39, 19, 83, 30, 42};
    vector<int> intelligence = {34, 16, 40, 59, 5, 31, 78, 7, 74, 87, 22, 46, 25, 73, 71, 30, 78, 74, 98, 13, 87, 91, 62, 37, 56, 68, 56, 75, 32, 53, 51, 51, 42, 25, 67, 31, 8, 92, 8, 38, 58, 88, 54, 84, 46, 10, 10, 59, 22, 89};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> size = {1, 1, 3, 3, 2, 2};
    vector<int> speed = {2, 2, 2, 2, 3, 3};
    vector<int> intelligence = {3, 3, 1, 1, 1, 1};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> size = {110672, 898544, 639823, 396906, 793899, 205848, 591514, 821108, 965223, 1127823, 682015, 592169, 521307, 1113434, 752766, 801328, 844320, 436082, 610398, 1402277, 733267, 1340075, 1044859, 1453424, 1429102, 1325042, 873636, 1368703, 976931, 1613124, 1109222, 1678954, 1078019, 1290397, 1075859, 1846918, 962596, 1592373, 1568025, 1802818, 1086547, 1591392, 1711338, 1382853, 1971177, 1189103, 1884180, 2006849, 1791537, 2119577};
    vector<int> speed = {759125, 849803, 759651, 328984, 803226, 180104, 620377, 618213, 948806, 488659, 581337, 899379, 467612, 934355, 439775, 768471, 497624, 1093723, 510843, 707001, 512892, 672389, 1348392, 1249230, 1571593, 810920, 904684, 1380772, 717768, 1571220, 866700, 1068245, 987374, 1167702, 1397228, 1765600, 1297805, 1458956, 1800164, 1637962, 1797615, 1722852, 1337340, 2040226, 1923559, 2018467, 1508696, 2096182, 1762189, 2160890};
    vector<int> intelligence = {153182, 600080, 649630, 542925, 865661, 696222, 803845, 195345, 993345, 412964, 632916, 701396, 781208, 895290, 1119097, 919787, 1377241, 1108253, 528743, 818756, 1362566, 917709, 591608, 724906, 957934, 1490166, 1209724, 907982, 1002699, 846912, 918871, 1747233, 1013343, 1593501, 1290157, 1854004, 1756074, 1535353, 1465700, 1140771, 1314669, 1439967, 1642166, 1870876, 2085256, 2002615, 2007015, 1653848, 1277219, 2160757};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> size = {1, 1, 1, 2, 2, 41, 18467, 6334, 26500, 19169, 15724, 11478, 29358, 26962, 24464, 5705, 28145, 23281, 16827, 9961, 491, 2995, 11942, 4827, 5436, 2391, 14604, 3902, 153, 292, 12382, 17421, 18716, 19718, 19895, 5447, 21726, 14771, 11538, 1869, 19912, 25667, 26299, 17035, 9894, 28703, 23811, 1322, 33, 17673};
    vector<int> speed = {1, 1, 1, 2, 2, 4664, 15141, 7711, 28253, 6868, 25547, 27644, 2662, 2757, 20037, 12859, 8723, 9741, 27529, 778, 12316, 3035, 22190, 1842, 288, 106, 9040, 8942, 19264, 22648, 27446, 23805, 15890, 6729, 24370, 15350, 15006, 1101, 24393, 3548, 19629, 12623, 24084, 19954, 18756, 11840, 4966, 7376, 13931, 26308};
    vector<int> intelligence = {1, 1, 1, 2, 2, 16944, 2439, 24626, 11323, 5537, 21538, 16118, 2082, 22929, 16541, 4833, 1115, 4639, 29658, 22704, 9930, 13977, 2306, 1673, 22386, 5021, 28745, 26924, 19072, 6270, 5829, 26777, 15573, 5097, 16512, 23986, 13290, 9161, 18636, 22355, 24767, 23655, 15574, 4031, 12052, 27350, 1150, 16941, 21724, 13966};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> size = {400370468, 1252329175, 690071187, 1253386904, 867310169, 1045231949, 1584278276, 566247830, 1607539103, 1459982500, 395982313, 164133787, 541844605, 1096122972, 600921349, 1315871736, 965045076, 681163338, 603735104, 1380109500, 1847625727, 1453760120, 28858525, 1134783538, 1858077445, 150410720, 1028993468, 1194477342, 824688783, 1189413383, 1579908499, 359420462, 855541084, 1145842780, 230316825, 1239878152, 1835456716, 1111291225, 275582348, 999681646, 518650443, 1032125504, 1824003849, 1562649056, 935833915, 620009339, 724427284, 125646895, 334523287, 1928441477};
    vector<int> speed = {1823936224, 1322042223, 1371299962, 1189059394, 524370400, 879295426, 1774774455, 1458638, 1106422390, 1114443608, 1198003388, 470277785, 790062422, 1111224620, 1479109604, 1383299028, 1000041298, 922591705, 1028855416, 1024314384, 1805221458, 1642368773, 563918964, 714507536, 486154, 1689796299, 1904623716, 1676101289, 1799976753, 150717845, 55871081, 312020657, 1610408172, 519157212, 1290026153, 1495321575, 853212429, 683036210, 450506576, 1962135234, 1304260324, 1497783057, 1194824538, 401878043, 1919911244, 791581405, 1395831887, 1338477214, 618141092, 146009985};
    vector<int> intelligence = {419918376, 396361972, 983498340, 295822883, 1500913024, 1044970394, 364638213, 1491620436, 928438617, 1415521867, 333184989, 1669160759, 269469318, 283805174, 972672432, 1769061890, 341841409, 1812732208, 966312347, 50644564, 158467167, 1148407304, 1952341254, 1743665613, 561001843, 1463462203, 115695202, 881691990, 761713792, 1541406636, 484762691, 1660865415, 512307706, 1495744537, 1901965728, 1167807648, 1118450985, 717605875, 1136919010, 1820416391, 1018753229, 645644120, 1110917227, 365301808, 146948856, 1451949325, 701500490, 775613677, 1796032841, 237726840};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> size = {1, 1, 2, 2};
    vector<int> speed = {2, 2, 1, 1};
    vector<int> intelligence = {1, 1, 2, 2};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> size = {1000, 1000, 1000, 4, 3, 2};
    vector<int> speed = {1000, 1000, 1000, 3, 3, 3};
    vector<int> intelligence = {1000, 1000, 1000, 2, 3, 4};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> size = {26313, 26313, 26313, 26313, 26313, 6050, 6050, 6050, 6050, 6050, 28304, 28304, 28304, 28304, 28304, 6666, 6666, 6666, 6666, 6666, 23324, 23324, 23324, 23324, 23324, 16595, 16595, 16595, 16595, 16595, 10969, 10969, 10969, 10969, 10969, 23814, 23814, 23814, 23814, 23814, 31899, 31899, 31899, 31899, 31899, 16944, 16944, 16944, 16944, 16944};
    vector<int> speed = {14915, 14915, 14915, 14915, 14915, 13650, 13650, 13650, 13650, 13650, 5474, 5474, 5474, 5474, 5474, 21879, 21879, 21879, 21879, 21879, 5362, 5362, 5362, 5362, 5362, 11598, 11598, 11598, 11598, 11598, 907, 907, 907, 907, 907, 4946, 4946, 4946, 4946, 4946, 2531, 2531, 2531, 2531, 2531, 26881, 26881, 26881, 26881, 26881};
    vector<int> intelligence = {20549, 20549, 20549, 20549, 20549, 4383, 4383, 4383, 4383, 4383, 28265, 28265, 28265, 28265, 28265, 245, 245, 245, 245, 245, 13313, 13313, 13313, 13313, 13313, 31800, 31800, 31800, 31800, 31800, 26530, 26530, 26530, 26530, 26530, 31416, 31416, 31416, 31416, 31416, 14248, 14248, 14248, 14248, 14248, 23428, 23428, 23428, 23428, 23428};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> size = {1, 1, 1, 1, 2, 2, 2, 3, 3, 4, 5, 5, 5, 5, 100};
    vector<int> speed = {10, 10, 10, 10, 9, 9, 9, 8, 8, 7, 6, 6, 6, 6, 100};
    vector<int> intelligence = {1, 1, 1, 1, 2, 2, 2, 3, 3, 4, 5, 5, 5, 5, 100};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> size = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> speed = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> intelligence = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> size = {5, 5, 5, 5, 5, 6};
    vector<int> speed = {6, 5, 10, 9, 10, 6};
    vector<int> intelligence = {5, 6, 3, 4, 6, 6};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> size = {2000000000, 1999999999, 1999999998, 2317, 3728, 7947, 369, 635, 1646, 2254, 9586, 1221, 5867, 3472, 2831, 7765, 9770, 525, 5696, 6851, 3323, 8203, 4901, 472, 2422, 7839, 1163, 4467, 9845, 8146, 9695, 2473, 4811, 446, 349, 1031, 2628, 3219, 2179, 6916, 1946, 1159, 8487, 9474, 6833, 6137, 5265, 7395, 6992, 5718};
    vector<int> speed = {2000000000, 1999999999, 1999999998, 566, 8983, 4812, 7253, 2915, 6995, 2963, 4285, 9874, 3134, 4530, 8326, 5292, 3990, 3, 7676, 4075, 3264, 247, 8144, 4507, 9659, 3052, 138, 844, 3749, 3403, 3641, 4710, 2344, 4081, 6938, 7802, 2189, 5095, 4535, 1441, 6688, 6576, 518, 1396, 6947, 1774, 323, 9414, 525, 8082};
    vector<int> intelligence = {2000000000, 1999999999, 1999999998, 440, 8914, 5867, 6574, 3368, 8236, 22, 2697, 7995, 6551, 6613, 7662, 7923, 4867, 7449, 9201, 6238, 3232, 7622, 2816, 6244, 3475, 9298, 353, 8752, 2564, 8758, 5837, 4188, 6546, 8497, 9305, 4980, 2596, 9052, 1725, 7997, 1981, 8888, 6340, 8319, 1290, 8948, 5822, 8908, 2923, 4298};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> size = {5, 5, 1, 1, 2};
    vector<int> speed = {5, 5, 1, 2, 1};
    vector<int> intelligence = {5, 5, 2, 1, 1};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> size = {534942626, 731628417, 86547851, 323028564, 801177978, 30059814, 175140380, 279357910, 744384765, 328430175, 202789306, 508178710, 882415771, 161437988, 800292968, 912414550, 620361328, 472595214, 161041259, 340240478, 628967285, 103637695, 697723388, 239593505, 6408691, 934356689, 748077392, 165985107, 879486083, 703918457, 235717773, 425323486, 600585937, 45227050, 692169189, 632568359, 196441650, 763305664, 546508789, 467681884, 225219726, 889190673, 88958740, 410186767, 698028564, 540374755, 14343261, 733428955, 221160888, 119232177};
    vector<int> speed = {952087402, 539825439, 15258789, 880371093, 888732910, 118377685, 967590332, 398742675, 889160156, 405822753, 374023437, 968933105, 22979736, 832366943, 526397705, 467834472, 902343750, 333557128, 802093505, 711059570, 737182617, 809448242, 411712646, 834899902, 314331054, 812103271, 461151123, 734985351, 806732177, 743133544, 484466552, 92803955, 819000244, 341918945, 103759765, 21209716, 575439453, 746429443, 971984863, 860504150, 657165527, 907409667, 655548095, 156188964, 193908691, 637145996, 612396240, 349365234, 917480468, 74676513};
    vector<int> intelligence = {922088623, 211486816, 982757568, 847869873, 924224853, 554473876, 962188720, 714202880, 421020507, 247467041, 920928955, 961242675, 600952148, 71289062, 977813720, 348327636, 339050292, 442352294, 259063720, 870117187, 30548095, 536712646, 651000976, 124114990, 613952636, 846008300, 257537841, 562622070, 939880371, 695861816, 969299316, 410888671, 141662597, 758972167, 50048828, 532440185, 164367675, 93139648, 147033691, 22918701, 108215332, 736236572, 631591796, 813842773, 542572021, 388885498, 675842285, 67108154, 446960449, 216308593};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> size = {5, 1, 5, 6, 6};
    vector<int> speed = {1, 5, 5, 6, 6};
    vector<int> intelligence = {5, 5, 1, 6, 6};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> size = {129, 124, 39, 150, 98, 109, 109, 60, 79, 24, 25, 97, 3, 55, 11, 35, 76, 144, 53, 12, 52, 6, 3, 25, 74, 25, 10, 110, 12, 59, 30, 79, 98, 90, 101, 57, 80, 28, 99, 53, 81, 13, 33, 16, 89, 113, 98, 1, 96, 5};
    vector<int> speed = {49, 119, 96, 27, 108, 10, 73, 59, 31, 57, 91, 93, 116, 112, 139, 58, 147, 89, 105, 84, 88, 16, 102, 60, 2, 80, 38, 72, 2, 149, 107, 139, 63, 29, 105, 79, 105, 146, 61, 36, 54, 53, 47, 52, 62, 64, 56, 58, 23, 52};
    vector<int> intelligence = {62, 101, 36, 136, 69, 19, 6, 39, 43, 123, 125, 88, 42, 25, 63, 95, 123, 78, 74, 87, 61, 39, 143, 93, 125, 149, 134, 13, 143, 39, 105, 40, 28, 52, 126, 135, 121, 133, 60, 144, 7, 120, 15, 148, 107, 89, 69, 36, 79, 17};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> size = {1, 2, 1, 2, 3, 3, 5};
    vector<int> speed = {2, 1, 1, 2, 2, 4, 4};
    vector<int> intelligence = {2, 3, 4, 5, 2, 1, 4};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> size = {10, 10, 10, 5, 5, 5};
    vector<int> speed = {20, 20, 20, 6, 6, 6};
    vector<int> intelligence = {30, 30, 30, 45, 45, 45};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> size = {2, 2, 1, 1, 1, 1};
    vector<int> speed = {1, 1, 2, 2, 1, 1};
    vector<int> intelligence = {1, 1, 1, 1, 2, 2};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> size = {1, 2, 3, 4, 5};
    vector<int> speed = {4, 2, 1, 5, 3};
    vector<int> intelligence = {1, 1, 1, 1, 1};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> size = {2, 2, 2, 1, 1};
    vector<int> speed = {2, 2, 1, 2, 1};
    vector<int> intelligence = {2, 2, 1, 1, 2};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> size = {1, 1, 1, 2};
    vector<int> speed = {2, 2, 2, 2};
    vector<int> intelligence = {3, 3, 3, 2};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
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
    vector<int> size = {1, 1, 1, 1};
    vector<int> speed = {1, 1, 10, 1};
    vector<int> intelligence = {1, 1, 1, 10};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> size = {100, 100, 1, 1, 2, 2, 3, 3};
    vector<int> speed = {100, 100, 2, 3, 1, 3, 2, 1};
    vector<int> intelligence = {100, 100, 3, 2, 3, 1, 1, 2};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> size = {550095179, 867518433, 55747310, 924573854, 767713084, 31420301, 604904288, 71526612, 272964662, 233359306, 109215818, 647221497, 327398670, 911694469, 163553185, 391395779, 206605766, 78900565, 752897685, 591993060, 915489506, 335423104, 509115537, 306537784, 982638898, 279041122, 945271838, 471205058, 693177530, 106612785, 651858601, 819460792, 369464249, 455078811, 689311834, 782147147, 559020407, 778598700, 661192701, 790888298, 239058672, 808694771, 202407733, 656691505, 396988397, 894279027, 866843103, 945618504, 596272555, 268437815};
    vector<int> speed = {648787973, 523402203, 387011233, 538849309, 622521889, 690883695, 670626695, 948708805, 434441250, 582144583, 378024997, 205036824, 632099832, 747209613, 70609175, 921245032, 64538384, 91194630, 323518991, 970834967, 838278272, 591774832, 472239, 299104585, 563354202, 466848349, 779582617, 989737617, 873760990, 714270131, 539529164, 633150731, 456689408, 195531141, 465452250, 293473519, 74926083, 685257874, 983951139, 621036286, 316792462, 558407175, 886558109, 907240657, 57997840, 37031380, 251064137, 128687993, 869781451, 168488764};
    vector<int> intelligence = {20071141, 277440626, 857718618, 956974301, 346145792, 524290896, 665565968, 320245741, 62949886, 11913011, 628520711, 793419996, 891722274, 324772713, 310268981, 151714836, 242487359, 932669759, 908198235, 374010905, 719365160, 154788214, 261148717, 619109044, 689357923, 441129556, 444078992, 136557927, 523988314, 18203595, 184020529, 283927009, 373164162, 195852201, 581696355, 72399791, 580644763, 882080852, 873178773, 912562391, 100483758, 102772983, 215961135, 482262434, 523823564, 573162158, 733818686, 888413247, 575416367, 617937051};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
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
    vector<int> size = {1, 2, 3, 4, 5, 6};
    vector<int> speed = {5, 1, 2, 3, 4, 6};
    vector<int> intelligence = {2, 5, 4, 1, 6, 3};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> size = {1, 2, 3, 4, 5, 6};
    vector<int> speed = {2, 1, 1, 3, 5, 2};
    vector<int> intelligence = {2, 2, 3, 1, 5, 2};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> size = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> speed = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> intelligence = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> size = {5, 5, 6, 6};
    vector<int> speed = {7, 7, 6, 6};
    vector<int> intelligence = {5, 5, 5, 5};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> size = {1, 1, 1, 2, 2, 3, 3, 7, 7, 7, 7, 7, 9};
    vector<int> speed = {1, 2, 3, 1, 3, 1, 2, 7, 7, 7, 7, 7, 9};
    vector<int> intelligence = {1, 3, 2, 3, 1, 2, 1, 7, 7, 7, 7, 7, 9};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> size = {1, 2, 3, 3, 4};
    vector<int> speed = {3, 2, 1, 4, 2};
    vector<int> intelligence = {1, 1, 1, 1, 1};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> size = {1, 1, 2};
    vector<int> speed = {2, 2, 1};
    vector<int> intelligence = {2, 2, 2};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> size = {2, 2, 3};
    vector<int> speed = {2, 2, 1};
    vector<int> intelligence = {2, 2, 1};
    SharksDinner* pObj = new SharksDinner();
    clock_t start = clock();
    int result = pObj->minSurvivors(size, speed, intelligence);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8348794&rd=10768&pm=7834
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); ++i)
#define FOR(a,b,c) for(int a=(b); a<=(c); a++)
 
class SharksDinner {
  public:
   int n;
  int match[100];
  bool matchP[100];
  bool vis[100];
  int M[100][100];
  
bool dfs(int v) {
  if(vis[v]) return false;
  vis[v]=true;
  if(v>=n && !match[v]) {
    match[v]=true;
    return true;
  }
  if(v<n) {
    for(int it=0; it<n; ++it)
      if(M[v][it]==1)
        if(dfs(it+n)) {
          M[v][it]=-1;
          return true;
        }
  }
  else {
    for(int it=0;it<n;++it)
      if(M[it][v-n]==-1)
        if(dfs(it)) {
          M[it][v-n]=1;
          return true;
        }
  }
  return false;
}
int maxflow() {
  int ile = 0;
  bool done = false;
      REP(i, n) if(match[i]) ile+=match[i];
      //printf("we maxflow = %d\n", ile);
      ile=0;
  while(1) {
    memset(vis, 0, 2*n);
    done=true;
    REP(i, n) if(match[i]<2 && dfs(i)) {
      match[i] ++;
      done=false;
    }
 
    if(done) {
      REP(i, n) if(match[i]) ile+=match[i];
      //printf("wy maxflow = %d\n", ile);
      return ile;
    }
  }
}
  int minSurvivors(vector <int> size, vector <int> speed, vector <int> intelligence) {
    memset(M, 0, sizeof(M));
    memset(match, 0, sizeof(match));
    n = size.size();
    REP(i, n) REP(j, n) if(i!=j) {
      if(size[i] >= size[j])
      if(speed[i] >= speed[j])
      if(intelligence[i] >= intelligence[j])
      M[i][j]=1;
      if(size[i]==size[j] && speed[i]==speed[j] && intelligence[i]==intelligence[j] && i>j)
      M[i][j]=0;
    }
    return n-maxflow();
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/