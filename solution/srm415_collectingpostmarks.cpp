/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9958
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

class CollectingPostmarks {
public:
    int amountOfMoney(vector<int> prices, vector<int> have, vector<int> values, int K);
};

int CollectingPostmarks::amountOfMoney(vector<int> prices, vector<int> have, vector<int> values, int K) {
    int ret;
    return ret;
}


int test0() {
    vector<int> prices = {2, 15};
    vector<int> have = {};
    vector<int> values = {2, 21};
    int K = 13;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> prices = {9, 18, 7, 6, 18};
    vector<int> have = {4, 0};
    vector<int> values = {12, 27, 10, 10, 25};
    int K = 67;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> prices = {14, 14, 12, 6};
    vector<int> have = {3, 2, 1};
    vector<int> values = {19, 23, 20, 7};
    int K = 10;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> prices = {43, 33, 14, 31, 42, 37, 17, 42, 40, 20};
    vector<int> have = {6};
    vector<int> values = {116, 71, 38, 77, 87, 106, 48, 107, 91, 41};
    int K = 811;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> prices = {3423601, 730037, 888001, 964293, 4534701, 5701438, 4247339, 1052357, 3499935, 26247, 4739172, 1385338, 777821, 4648993, 2647634, 252902, 2109486, 1755870, 5874783, 6319582, 6157565, 1268597, 4525085, 2280686, 4202086, 507873, 3838162, 3669382, 3984124, 3986267, 5915006, 4352828};
    vector<int> have = {25, 10, 16, 27, 5, 0};
    vector<int> values = {30000000, 5035284, 6935554, 8860020, 30000000, 30000000, 30000000, 9660426, 26144514, 220028, 30000000, 9221640, 6288060, 30000000, 23755366, 1717052, 16230596, 15273259, 30000000, 30000000, 30000000, 12614167, 30000000, 22620984, 30000000, 4417682, 30000000, 30000000, 28835495, 27726081, 30000000, 30000000};
    int K = 186503856;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1194649;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> prices = {3614405, 2502059, 6183850, 3534570, 7232985, 2326055, 2038641, 8546717, 2522353, 8452864, 2596672, 8158310, 224840, 7761178, 6059806, 9363870, 1302744, 1443619, 10156527, 3039511, 3052029, 5606484, 10454864, 1640839, 9523920};
    vector<int> have = {20, 6, 4, 21, 2, 14, 10};
    vector<int> values = {392638, 242568, 760288, 384710, 719491, 229912, 233263, 959031, 238163, 790120, 249827, 846746, 28045, 843109, 715057, 868375, 154820, 178248, 1167466, 305230, 381021, 571271, 1274392, 151475, 936351};
    int K = 9475567;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 51597892;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> prices = {1223087, 4819413, 5396908, 7265467, 9470618, 1919856, 523727};
    vector<int> have = {1, 4, 5, 6, 3};
    vector<int> values = {1625482, 8385778, 9471573, 10462272, 13495630, 2372942, 702317};
    int K = 37776167;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1800582;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> prices = {903210, 6047000, 4486273, 4699606, 1086504, 8910255, 2428634, 5319909, 5043855, 398693};
    vector<int> have = {};
    vector<int> values = {109502, 725640, 538815, 496607, 114586, 847852, 249122, 549541, 525704, 47391};
    int K = 290427;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2827327;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> prices = {2400929, 13784432, 10576185, 4569365, 10960689, 6830708, 128310, 15574941, 2349839};
    vector<int> have = {0, 6, 2, 3, 8, 1, 5, 7, 4};
    vector<int> values = {2105614, 13798216, 10502151, 5076564, 9557720, 6530156, 118815, 16649611, 1919818};
    int K = 49102603;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> prices = {9744396, 6474093};
    vector<int> have = {};
    vector<int> values = {998282, 575092};
    int K = 1561683;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16218489;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> prices = {9657860, 4253996, 10769724, 11506357, 6098179, 4778714, 14478798, 6278285, 405075, 13665001, 7819998, 656344, 3914799, 2600687, 6545877, 8656503, 5302030, 13355689, 37205};
    vector<int> have = {6, 16, 18, 9, 17, 7, 12, 14, 1, 4, 2, 0, 3, 8, 10, 15, 13, 11, 5};
    vector<int> values = {30000000, 21651988, 30000000, 30000000, 29483475, 25370670, 30000000, 30000000, 2216691, 30000000, 30000000, 3451122, 21762367, 15186711, 30000000, 30000000, 26526586, 30000000, 219345};
    int K = 273381469;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> prices = {1412279, 2743706, 8352299, 919972, 6949206, 477740, 4240129, 808796, 2433839, 47292, 8559909, 7453219, 4335037, 1855158, 5281849, 6594181, 7548726, 4672557, 7444771, 2575015, 7661351, 5999219, 2097572, 6562353, 9139205};
    vector<int> have = {2, 22};
    vector<int> values = {10236198, 23903166, 30000000, 7492251, 30000000, 4196468, 30000000, 7408571, 18867119, 412007, 30000000, 30000000, 30000000, 16340231, 30000000, 30000000, 30000000, 30000000, 30000000, 23772538, 30000000, 30000000, 14011780, 30000000, 30000000};
    int K = 108376029;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2346186;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> prices = {7926025, 18288365, 9446884, 13692942, 8347479, 12539150, 13193411, 11311634, 8430877, 15264147, 10758333, 12814610, 7130588, 16440028, 17533821, 747394, 5274443, 4461421, 16907140, 793361, 12095180, 14632696, 1652989, 866572, 6892565, 753357, 18233830, 1776011, 4818429, 3284046};
    vector<int> have = {24, 12, 1, 7, 9};
    vector<int> values = {30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 6155910, 30000000, 30000000, 30000000, 7674180, 30000000, 30000000, 12209803, 7837277, 30000000, 5686338, 30000000, 15322534, 30000000, 30000000};
    int K = 434780920;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 47013717;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> prices = {6874111, 7818583};
    vector<int> have = {};
    vector<int> values = {715216, 1022565};
    int K = 1369250;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14692694;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> prices = {13314347, 3468745, 26329074, 7869975, 12964122, 14185426, 3655076, 15779919, 12841718, 22503344, 25871738, 21040608, 7413168, 23430582, 9139876, 11416114, 14521796, 18548724, 22442737, 24766953, 19799402, 18525742};
    vector<int> have = {1, 14, 20, 11, 21, 2, 6, 3, 17, 16, 19, 15};
    vector<int> values = {18070231, 3338320, 30000000, 7640171, 13892353, 16086273, 4000115, 21927775, 16211384, 22224302, 27879384, 26081937, 10603795, 29747466, 11296886, 16425504, 16380585, 25975633, 29543618, 30000000, 24448301, 25498831};
    int K = 41663785;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> prices = {3133356, 20019380, 14017639, 5221309, 12470650, 3544605, 15646002, 13007799, 13405702, 4665788, 19227863, 8715636, 4224600, 9452014, 7102271, 15765193, 6273029, 8096279, 5393128, 1207039, 2121013, 2030614, 7033342, 12325104, 11493859, 17951251, 12711738, 12318922};
    vector<int> have = {23, 20, 11, 21, 26, 22, 7, 25, 14, 6, 13};
    vector<int> values = {16822988, 30000000, 30000000, 27879179, 30000000, 20243948, 30000000, 30000000, 30000000, 27830958, 30000000, 30000000, 29062713, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 7513214, 10273974, 11848835, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000};
    int K = 159369836;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> prices = {1340855, 4124066, 4469556, 3063508, 5740267, 5591251, 4419636, 4723676};
    vector<int> have = {};
    vector<int> values = {142870, 384912, 588234, 365156, 560830, 609896, 549152, 539150};
    int K = 3401125;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 32131960;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> prices = {1105880, 13688214, 8487986, 2386825, 693380, 16014861, 2963486, 4347948, 6993663, 9389002, 20807258, 19657785, 11200167, 11758821, 7050744};
    vector<int> have = {10, 11, 5};
    vector<int> values = {4729848, 30000000, 30000000, 9939216, 3676023, 30000000, 15056583, 20394484, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000};
    int K = 333734132;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 75880031;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> prices = {6661665};
    vector<int> have = {0};
    vector<int> values = {979592};
    int K = 494658;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> prices = {9005115, 5992334, 14213712, 11371343, 2156877, 1475710, 2099186, 1852945, 561316, 18423350, 7596020, 3021304, 4410653, 14721277, 13637246, 11058266, 9649086};
    vector<int> have = {5, 13};
    vector<int> values = {30000000, 30000000, 30000000, 30000000, 20618234, 17645507, 22469267, 17955222, 6558865, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000};
    int K = 248654723;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 31062243;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> prices = {8045287, 9613425, 1677748, 4375595, 1846560, 2989913, 7207527, 7617935, 1202886, 8970806, 9122751, 2046318, 8203335, 3313088, 3489934, 5109240, 10218224, 3700752, 3762802, 4081151, 10089521, 7720968, 5899449, 8740641, 8407991, 2044148, 1911339, 6119564, 9271427};
    vector<int> have = {0, 23, 15, 9, 13, 26, 18, 11, 20, 7, 27, 16, 6, 17, 5, 19, 22, 14, 21, 12, 24, 3, 28, 1, 4, 25, 2, 10, 8};
    vector<int> values = {30000000, 30000000, 11365064, 30000000, 9428535, 21114765, 30000000, 30000000, 6849232, 30000000, 30000000, 12032349, 30000000, 17453347, 17693965, 30000000, 30000000, 19895242, 22802580, 27058031, 30000000, 30000000, 30000000, 30000000, 30000000, 13270608, 13211175, 30000000, 30000000};
    int K = 103921534;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> prices = {9504526, 1590865, 10327585, 9804084, 5353920, 6861217, 4907561, 8406368, 5687121, 1944615, 2072663, 11586206, 10814987, 1139772, 8478608, 8220857, 7909647, 6732557, 5154631, 4354959, 5074835, 7971617, 2363371, 3882408, 5922937, 3134185, 4729620};
    vector<int> have = {23, 3, 12, 4};
    vector<int> values = {30000000, 6787425, 30000000, 30000000, 28546030, 30000000, 30000000, 30000000, 26645299, 9244894, 10820337, 30000000, 30000000, 5237366, 30000000, 30000000, 30000000, 28688771, 27920574, 26243418, 23911100, 30000000, 12738806, 17798899, 30000000, 16295568, 23638167};
    int K = 611834520;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 119759480;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> prices = {3543425, 3246871, 4016405, 2953819, 3933484, 1667336, 2563375, 358315, 1468715, 692131, 3363183, 1399235, 2815850, 4030364, 2664573, 2648424, 1370228, 1008845, 2519156, 2802861, 355158, 3430193, 1252503, 1259160, 420258, 4131118, 721417, 795482, 1057771};
    vector<int> have = {};
    vector<int> values = {16072975, 12382267, 17847297, 10842878, 15446791, 6687684, 9485000, 1542546, 6507876, 2386606, 11554551, 4995268, 13825260, 19957556, 11873870, 9265776, 6059970, 4737132, 11130638, 11830876, 1679613, 12663586, 4581906, 5198567, 2081033, 18860206, 2833004, 3214065, 4473736};
    int K = 65572457;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13819364;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> prices = {4757563, 3747621, 7534204, 3381032, 6253674, 2890778, 1062446, 4293208, 2714606, 7644784, 6843733, 6478582, 2242670, 2240184, 8278187, 6366046, 5502997, 1881118, 3058340, 1495839, 5292229, 781010, 683268, 1515143, 3975808, 2173664};
    vector<int> have = {25, 10, 7, 5, 13, 11, 3, 2, 9, 22, 0};
    vector<int> values = {11324902, 9126956, 18067021, 7609350, 16248295, 6321553, 2442563, 8396656, 6551430, 18634925, 14634638, 16547594, 5303914, 4100432, 19723608, 12856866, 11828141, 4945459, 6943655, 3642966, 13855055, 1939872, 1790298, 2796650, 9455266, 4203431};
    int K = 10438073;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> prices = {2858064, 1756551};
    vector<int> have = {1};
    vector<int> values = {1079468, 725590};
    int K = 1063156;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1101513;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> prices = {5597972, 13696634, 3718807, 13567979, 12813447, 13711787, 8711567, 19606961, 6094751, 21520865, 16671703, 390605, 15140708, 16567149, 20394634, 12152342};
    vector<int> have = {3, 11, 5, 7, 8, 10};
    vector<int> values = {30000000, 30000000, 21496563, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 1939939, 30000000, 30000000, 30000000, 30000000};
    int K = 155715558;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> prices = {6172527, 18220019, 16284131, 18818196, 11149327, 23110645};
    vector<int> have = {2, 1};
    vector<int> values = {30000000, 30000000, 30000000, 30000000, 30000000, 30000000};
    int K = 74594646;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> prices = {7899617, 13231644, 7925180, 4810449, 7419851, 9243331, 2094175, 774075, 6484527, 11026906, 9625697, 8544480, 1463986, 3011780, 8808704, 11946180, 3718046, 9104906, 2327201, 318031, 12642011, 11307135, 7246374, 732433};
    vector<int> have = {21, 19, 9, 4, 11, 3, 15, 17, 5, 2, 10, 22, 8, 13, 7, 12, 1};
    vector<int> values = {30000000, 30000000, 30000000, 25543484, 30000000, 30000000, 9078248, 3607189, 30000000, 30000000, 30000000, 30000000, 6119461, 12544063, 30000000, 30000000, 18534459, 30000000, 10274592, 1885923, 30000000, 30000000, 30000000, 4390935};
    int K = 312339554;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> prices = {16010498, 11618794, 24687102, 491088, 12607348, 15084152, 19621517, 1011195, 1936815, 20067842, 14833769, 16669944, 20412163, 22680955, 20445242, 10121313, 10805736, 461699, 492440, 8140259, 20394384, 20271869};
    vector<int> have = {10, 16, 5, 4};
    vector<int> values = {1832058, 1573516, 3290438, 70927, 1977552, 1825182, 2452689, 144311, 263960, 3345595, 2258971, 2581459, 2534024, 2883721, 2917828, 1674354, 1681063, 63582, 63524, 1128007, 3455391, 2557151};
    int K = 6305770;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> prices = {13274085, 4834870, 1180782, 18564766, 2011289, 8983603, 11054330, 6181280, 13790950, 11890641, 8026062, 12688483, 18676310, 1671366, 17939756, 4655916, 9503345, 7511523, 16442082, 8693907, 5819262, 1300421, 18098098, 155705};
    vector<int> have = {22, 5, 20, 13, 19, 2, 21, 8, 9};
    vector<int> values = {30000000, 21287932, 4084915, 30000000, 7426885, 30000000, 30000000, 24197238, 30000000, 30000000, 24885607, 30000000, 30000000, 7025085, 30000000, 20241594, 30000000, 30000000, 30000000, 30000000, 18689141, 5008831, 30000000, 642360};
    int K = 220836597;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> prices = {13158288};
    vector<int> have = {0};
    vector<int> values = {30000000};
    int K = 35102717;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> prices = {4944447, 1572856, 1796053, 6732189, 2903277, 4471789, 4530361, 5084794, 38546, 3380364, 4330242, 1809093, 2365993, 2729098, 1343104, 1361772, 2121039, 911624, 6411472, 4563377, 2505319, 1893240, 7665658, 7043801, 1945286, 1453412};
    vector<int> have = {16, 9, 23, 0, 14, 13, 6, 11, 24, 15, 1, 10, 22, 17, 4, 20, 7, 5, 3, 2, 12, 21, 25};
    vector<int> values = {482541, 130051, 139360, 679452, 270972, 408671, 346908, 564035, 3226, 323325, 435429, 141042, 250400, 268613, 131325, 146138, 181466, 80273, 617994, 361267, 232437, 186869, 661517, 736338, 207677, 144264};
    int K = 9357492;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> prices = {2198184, 6029963, 4535952, 412965, 8789660, 3334945, 6855226, 6673456, 3084552, 4412879, 8562526, 2698251, 6685376, 2744717, 1752053, 8682653, 5488423, 7769655, 3759000};
    vector<int> have = {15, 14, 6, 8};
    vector<int> values = {20849335, 30000000, 30000000, 4416412, 30000000, 30000000, 30000000, 30000000, 27657327, 30000000, 30000000, 28493530, 30000000, 25954043, 19527681, 30000000, 30000000, 30000000, 30000000};
    int K = 67435835;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> prices = {6568493, 7340914, 3524491, 1727416, 7346232, 81637, 5640656, 7200349, 6919060, 9281195, 6894659, 3738277, 1700533, 7473753, 6339847};
    vector<int> have = {9, 7, 5, 0, 3, 11, 12, 10, 6, 8, 13};
    vector<int> values = {961993, 990558, 376986, 185205, 982907, 10127, 799687, 898676, 826783, 1079673, 802049, 471306, 213750, 1014159, 909246};
    int K = 627905;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> prices = {10011083, 7147509, 8802071, 5523552, 8691825, 13003186, 4466920, 2997};
    vector<int> have = {7, 2, 6, 0};
    vector<int> values = {30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 28732};
    int K = 199101862;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 34363075;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> prices = {3446525, 37756, 1105062, 1998442, 632261, 3262744, 2971291, 3720569, 254612, 1598728, 3601770, 2973489, 2818517, 170633, 125311, 1745583, 2428069, 1181670, 2672495, 2716572, 1342483, 2344351, 3073008, 1952926};
    vector<int> have = {17, 13, 2, 6, 4, 1, 5, 0, 3, 20, 8, 15, 22, 19, 11, 9, 16, 10, 18};
    vector<int> values = {13938091, 134388, 4284988, 8532947, 2432940, 12277379, 8795021, 12871308, 1071127, 4903778, 11727363, 13037262, 9959229, 615558, 389466, 7356410, 7744083, 3777562, 9591584, 8975825, 5617888, 8899625, 9357616, 6467114};
    int K = 28973325;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> prices = {1679630, 3096481, 2970490, 1531754, 2358296, 2069329, 3039118, 699396, 1315552, 69333, 3623960, 2128788, 2889647, 2046200, 55766, 250063, 574106, 2246714, 1348147};
    vector<int> have = {8, 6, 2, 3, 7};
    vector<int> values = {151904, 341974, 339484, 162938, 297508, 252412, 369369, 86617, 149336, 7177, 363192, 195099, 378194, 251615, 5116, 23824, 68514, 209857, 159555};
    int K = 3321332;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 19361562;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> prices = {19716887, 2716826, 11820399, 7653524, 17018950, 13944896, 9249514, 927224, 9420230, 90259, 18826043, 265179, 13531949, 6199300, 17647858, 24708697, 13413081, 7593261, 18436936, 6696472, 12850594, 21979649};
    vector<int> have = {6, 20, 21, 18, 10, 0, 7, 16, 1, 9, 11, 19};
    vector<int> values = {30000000, 17146432, 30000000, 30000000, 30000000, 30000000, 30000000, 4465510, 30000000, 405876, 30000000, 1704782, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000};
    int K = 434152998;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 43025126;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> prices = {1732000, 1802964, 1703841, 429839, 910751, 911252, 679706, 599050, 1832692, 1467065, 691940, 1134719, 296814, 77058, 1185571, 1325972, 1679226, 673992};
    vector<int> have = {12, 11, 8, 16, 9, 0, 2};
    vector<int> values = {326286, 343726, 241011, 65377, 131030, 130808, 106779, 79035, 328406, 271880, 124995, 150258, 47011, 11260, 218948, 245946, 272467, 117405};
    int K = 2734599;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5850485;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> prices = {26699533, 5400678, 19267647, 22516802, 24542447, 23321136, 21139877, 26743014, 16302261, 17131859, 16611086, 3880379, 23001018, 18705535, 11794455, 1149430, 4275875, 22190994, 25591489, 14471496};
    vector<int> have = {8, 2, 6, 19, 14, 18, 10, 9, 15};
    vector<int> values = {30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 9379348, 30000000, 30000000, 30000000, 30000000};
    int K = 378822754;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50229344;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> prices = {2541637, 2766784, 5491679, 5822059, 2271749, 4863031, 2508046, 1962673, 1928230, 5278321, 6206812, 4675113, 5057875, 4493986, 3170788, 2432958, 660454, 4357589, 590001, 5225126, 2650098, 1900004};
    vector<int> have = {5, 11, 6, 2, 19, 0, 12, 8, 10, 4, 7, 15, 9, 18, 13, 21};
    vector<int> values = {2307806, 2445837, 5398320, 5164166, 1896910, 5237484, 2841616, 2225671, 1897378, 4338779, 5418546, 3987871, 4739228, 4480504, 3167617, 2547307, 657812, 4104848, 493830, 5188550, 2978710, 1911404};
    int K = 22597399;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> prices = {371612, 3480122, 3287262, 10315377, 3579341, 2556808, 2899484, 8557732, 4078132, 6157438, 11091756, 5344174, 6779904, 3579932, 2815457, 1194215, 3400360, 277063, 4790402, 4931113, 4223814, 5601599, 5236248, 3864285, 7326855, 6981820, 6354798};
    vector<int> have = {18, 9, 11, 14, 12, 17, 3, 21, 13, 4};
    vector<int> values = {2243495, 15184468, 20946433, 30000000, 21261285, 11597681, 15124868, 30000000, 23475359, 30000000, 30000000, 30000000, 30000000, 19834255, 17483987, 6590633, 16085062, 1253765, 25350807, 22926716, 20299650, 30000000, 30000000, 20261991, 30000000, 30000000, 30000000};
    int K = 20184301;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> prices = {1744136, 1048752, 4883012, 4074642, 2226359, 4536015, 4096943, 3507036, 2507400, 4646281, 3358789, 3595979, 2096250, 208, 2637873, 4900484, 1784905};
    vector<int> have = {12, 11, 13};
    vector<int> values = {4403594, 2290474, 9656644, 10248539, 5562335, 12802448, 9291866, 7171187, 5813156, 10415103, 6489180, 9191322, 4527900, 511, 6976646, 9785286, 3439868};
    int K = 136211738;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> prices = {20662877, 22125337, 9728011, 14328631, 14552022, 14742572, 19153436, 193858, 4878531, 701643, 17548505, 3631931, 10826452, 20992398, 16882722, 11919243, 663179, 9906198, 2975617, 18992687, 14031029, 15100446, 15917149, 21579051, 17847310, 6267730, 11566722, 614951, 9296513, 5470437, 9430434, 6043117};
    vector<int> have = {30, 31, 11, 29, 9, 24, 14, 25, 23, 18, 13, 12, 5, 16, 17, 4, 6, 2, 15, 26, 7, 22, 1, 27, 28};
    vector<int> values = {2329985, 1858528, 1102507, 1522928, 1122584, 1675036, 1632602, 18831, 509225, 66088, 1552624, 345898, 980567, 1813343, 1303989, 1283872, 72949, 815138, 301812, 2062063, 1595528, 1438137, 1661447, 1674945, 1781331, 669154, 1221666, 53998, 973035, 512658, 974478, 580139};
    int K = 36072313;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> prices = {4977615, 935872, 14466495, 34059, 12076768, 4917923, 3180195, 2661849, 13548578, 2815136, 3795623, 14620517, 10206781, 3858659, 765462};
    vector<int> have = {5, 14, 12, 4, 1, 3};
    vector<int> values = {741975, 148423, 2655958, 5625, 1975683, 638561, 491936, 375154, 1901034, 449542, 500547, 2021743, 1679334, 642707, 109795};
    int K = 1895818;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> prices = {280806, 1682397, 1465768, 168244, 98500, 1502195, 741628, 150026, 1564960, 749649, 648541, 453786, 1476915, 1525749, 1171193, 119867, 1567864, 1218593, 1439135, 16560, 1498538, 141132, 140217, 861058};
    vector<int> have = {13, 10, 5, 8, 18, 7};
    vector<int> values = {2299071, 13300021, 16203185, 1396458, 897197, 14403045, 8288879, 1659857, 13563195, 6433637, 6010937, 4913957, 14382789, 17095712, 12066098, 1292382, 16241189, 12107696, 12973226, 180570, 11733852, 1293474, 1412938, 9024748};
    int K = 75104986;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 143831;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> prices = {1967000, 1699580, 1268394, 2825869, 3432646, 849831, 3024490, 3236907, 819031, 1202019, 978578, 3337892, 1195613, 2067442, 2301584, 409643, 3104444, 3387738, 3124334, 1289710, 3586550, 1941601, 713216, 1114867, 781897, 2587064, 3525118, 613180, 2173223, 2548085, 200305, 3025714};
    vector<int> have = {14, 2, 10, 24, 8, 22, 25, 27, 6, 15, 5, 4, 19};
    vector<int> values = {17502562, 19019659, 13656290, 30000000, 30000000, 8308627, 30000000, 30000000, 7668341, 13767204, 10506306, 30000000, 12788157, 21361430, 21525794, 4017409, 27811782, 30000000, 30000000, 11541098, 29667582, 20159254, 6166180, 11203855, 8086691, 25371595, 30000000, 5710054, 22651937, 25941543, 2059495, 30000000};
    int K = 608270060;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 44445270;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> prices = {10972073, 253894, 5521339, 10903625, 378532, 9213394, 9332930, 11641939, 7882661, 4037690, 5191035, 5438298, 7460518, 8788847, 9673098, 11311819, 10748884};
    vector<int> have = {5, 15, 6, 8, 4, 7};
    vector<int> values = {30000000, 833280, 14808231, 30000000, 1048155, 28662868, 30000000, 28464540, 27857323, 12670271, 15822274, 18484774, 19292899, 27473935, 28903216, 30000000, 30000000};
    int K = 145646679;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> prices = {702066, 263349, 1188559, 1803493, 50289, 1060155, 1454664, 520052, 1715494, 1630025, 1776463, 1490133, 447612, 1022072, 1214450, 276211, 1679950, 1333615};
    vector<int> have = {2, 5, 16, 8, 1, 14, 13, 17, 3, 9, 0};
    vector<int> values = {1701807, 898283, 3965032, 4864020, 176363, 2665229, 4075968, 1720852, 5336901, 5594245, 5201483, 4345227, 1524118, 3470956, 3716217, 767314, 4908813, 4256899};
    int K = 22839201;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> prices = {8559768, 2578096, 2173303, 6459867, 6167183, 1120749, 2054512, 2389819, 8768343, 9364797, 4781666, 7113365, 6104458, 7302466, 3187585, 3394358, 9998928, 854085, 3542748, 7031339, 644334, 9339943, 2365951, 1962656, 9832961, 11751440, 9344218};
    vector<int> have = {15, 10, 3, 14, 8, 26, 6, 21};
    vector<int> values = {746881, 237336, 208381, 661186, 663879, 94934, 240297, 218598, 720379, 1100822, 486604, 599056, 699618, 685859, 371884, 334111, 928331, 72429, 407416, 812740, 60516, 1038381, 271388, 175292, 1103798, 1171687, 982975};
    int K = 5210790;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> prices = {9331556, 11626320, 7556008, 5130147, 3782256, 6126493, 6910276, 3623577, 10959655, 6389921, 1742729, 9563547, 7569673, 11285502, 378265, 2172834, 11430810, 8717010, 656110, 9351541, 2651568, 5364690, 2272936, 2473186, 8329229, 5216575, 4881861, 8348977, 5036037, 8612248, 10658574, 10410362};
    vector<int> have = {13, 25, 6, 31, 5, 28, 3, 2, 22, 23, 9, 4, 20};
    vector<int> values = {21269415, 23317747, 20732930, 10867190, 10143254, 15598663, 16402231, 9150981, 25938215, 14446972, 3487200, 23689862, 13980429, 22971639, 783878, 4127950, 24660829, 17903866, 1673539, 20196523, 6897523, 10487968, 4302440, 5688327, 20364131, 10618338, 10734235, 16955937, 11467056, 22601122, 28388045, 22531146};
    int K = 150947035;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> prices = {4028420, 3651113, 2740767, 4977140, 2906533, 2947034, 66135, 3323550, 1600805, 3514307, 366121, 4752376, 2396499, 657271, 167894, 291981, 1259101, 1586324, 679784, 1035143};
    vector<int> have = {8, 0, 3, 7, 19, 17, 15, 13, 9, 10, 2, 4, 5};
    vector<int> values = {872470, 1094373, 838818, 1079253, 630258, 839904, 16081, 759168, 402728, 978457, 87772, 1488244, 624351, 185938, 40029, 64235, 277664, 436656, 153130, 286026};
    int K = 5911095;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> prices = {462150, 268971, 282723, 150369, 79760, 180438};
    vector<int> have = {4, 5};
    vector<int> values = {393289, 243687, 306471, 174127, 82790, 174303};
    int K = 1387207;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> prices = {332582, 1457451, 2204220, 1928657, 961900, 1050931, 161276, 33856, 35684, 1047578, 1833031, 2587302, 1984400, 2926386};
    vector<int> have = {12, 6, 7, 9};
    vector<int> values = {38180, 137437, 248415, 160271, 100229, 117388, 15579, 3405, 3550, 124871, 198150, 238549, 203202, 290882};
    int K = 245821;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> prices = {1904939, 1165086, 2831671, 2429930, 1516689, 2117301, 1057785, 2548020, 2335200, 25165, 1385635, 3886746, 1391629, 143194, 3577116, 1922278, 2462758, 1474227, 1393466, 1489325, 288306, 2804453, 3451508, 1862899, 3259064, 1204065, 2010388, 827797, 2635527, 3557571, 3792064, 3567260};
    vector<int> have = {14, 11, 18, 19, 7, 15, 28, 31, 3, 27, 29, 2, 0, 22, 20, 16, 9, 21, 30, 1, 4};
    vector<int> values = {1281388, 723130, 2021813, 1934224, 1026292, 1599268, 807442, 1506729, 1539675, 18118, 794430, 2544523, 775601, 78565, 2000800, 1055971, 1939011, 953333, 860233, 1143801, 216806, 1649018, 2611641, 1347496, 2381289, 860505, 1561401, 512130, 1764046, 2061019, 2892080, 2841917};
    int K = 17458319;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> prices = {203142, 9005045, 9559519};
    vector<int> have = {1, 0, 2};
    vector<int> values = {1173145, 30000000, 30000000};
    int K = 44533798;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> prices = {11403353, 3402665, 26070924, 7958719, 4665958, 17800553, 9368747, 12678926, 26031797, 25016465, 21693110};
    vector<int> have = {6, 9, 8, 10, 1, 0, 2};
    vector<int> values = {2469799, 941127, 5875496, 1630566, 979851, 4076760, 1937731, 3157361, 5803185, 5344981, 6264546};
    int K = 19521358;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> prices = {14012338, 7540163, 4577008, 10133685, 10673154, 14180293};
    vector<int> have = {1};
    vector<int> values = {1497187, 898262, 457700, 1246883, 994227, 1798739};
    int K = 5734364;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 42903324;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> prices = {1467289, 13262038, 8522137, 437329, 2206063, 6628060, 4068032, 2847038, 9577340, 10959500, 12894323, 3737660, 7573025, 14253130, 1177486, 10354142, 5870464, 17484, 1261384, 13374873, 5358351, 15577865, 15490276, 11863401, 10458836, 14500100, 5847081, 15299524, 10907658, 4840480, 11716711, 3145078};
    vector<int> have = {3};
    vector<int> values = {7798641, 30000000, 30000000, 2326590, 10169950, 29759989, 16658591, 11544739, 30000000, 30000000, 30000000, 19622715, 30000000, 30000000, 5716694, 30000000, 27415066, 91004, 5909584, 30000000, 26631004, 30000000, 30000000, 30000000, 30000000, 30000000, 24762388, 30000000, 30000000, 27977974, 30000000, 18115649};
    int K = 162654500;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 31787539;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> prices = {384456, 9521409, 1100979, 10297717, 312728, 73500, 7059771, 213204, 759145, 11572254, 2484225, 6528566, 171857, 6463589, 1992059, 2494124, 5122931, 4719342, 1770798, 7895557, 1269619, 654233, 3247543, 4434267, 11463621, 11356600, 1834341, 7002658, 9666617, 3270789, 1902146, 9647009};
    vector<int> have = {8, 30, 7, 4, 29, 9, 12, 13, 23, 18, 15, 17, 11};
    vector<int> values = {1642857, 30000000, 3773275, 30000000, 1289064, 263277, 25466005, 642426, 2333915, 30000000, 9381427, 21270068, 636008, 22663928, 7436754, 9643281, 15860594, 19724961, 5501515, 30000000, 4780877, 2261029, 11878213, 16250701, 30000000, 30000000, 5289505, 30000000, 28640252, 13211370, 5943825, 28998909};
    int K = 82145550;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> prices = {5121, 3669111, 5186871, 3405825, 3166854, 7670, 620911, 3503875};
    vector<int> have = {};
    vector<int> values = {723, 492021, 797587, 582340, 486449, 1199, 84382, 617486};
    int K = 1506337;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10076554;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> prices = {1731864, 624888, 3866960, 5264204, 3790775, 2424756, 6620648, 3066239, 5032855, 3023242, 6817126, 273346, 5877919, 6024882, 5970539, 4590828, 4292054, 5532354, 6414370};
    vector<int> have = {16, 18, 7, 6, 14, 9, 12, 10, 3, 11, 2, 5, 1, 8, 0, 17, 13, 4, 15};
    vector<int> values = {10109582, 3060576, 22489465, 26721099, 23929646, 11103442, 30000000, 16623921, 22013707, 19492655, 30000000, 1214804, 30000000, 28207292, 30000000, 25087956, 19005215, 26887240, 30000000};
    int K = 180698849;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> prices = {23868223, 4861214, 2118758, 19564384, 9890254, 20601272, 20248669, 2010097, 2234001, 6018809, 25069867, 9023487, 13205679, 12392526, 17538839};
    vector<int> have = {};
    vector<int> values = {3976536, 775042, 418954, 4259867, 1713066, 4166898, 4278964, 381539, 437105, 1237830, 5557942, 1952818, 2065567, 2078670, 2918727};
    int K = 42536962;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> prices = {7356403, 1779593, 1785317, 4685339, 1599753, 886341, 4438150, 2823373, 5644392, 5081567, 1301171, 2098240, 6178260, 3015385, 5498069, 764084, 6213671, 3400743, 7070398, 2192391, 5554777, 4581419, 2963988, 6248575, 3486654, 4051450, 2289970, 5729579, 1366723, 2413558, 5563969, 6696609};
    vector<int> have = {26, 6, 12, 25, 21, 24, 27, 9, 15, 22, 23, 1, 17};
    vector<int> values = {30000000, 16413898, 20535608, 30000000, 18349806, 9019140, 30000000, 26222359, 30000000, 30000000, 15885606, 18409957, 30000000, 30000000, 30000000, 6932992, 30000000, 30000000, 30000000, 22684450, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 28325096, 30000000, 14697055, 24353041, 30000000, 30000000};
    int K = 325680721;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> prices = {29999979, 29999989, 29999997, 29999990, 29999988, 29999984, 29999995, 29999998, 29999978, 29999983, 29999996, 29999997, 29999974, 29999989, 29999987, 29999978, 29999989, 29999974, 30000000, 29999990, 29999988, 29999973, 29999996, 29999985, 29999984, 29999971, 29999988, 29999995, 29999996, 29999972, 29999997, 29999992};
    vector<int> have = {};
    vector<int> values = {29999982, 29999996, 29999997, 29999999, 29999993, 29999989, 30000000, 30000000, 29999985, 29999991, 29999999, 30000000, 29999983, 29999992, 29999996, 29999979, 29999997, 29999976, 30000000, 29999990, 29999989, 29999981, 30000000, 29999993, 29999990, 29999971, 29999997, 29999998, 29999996, 29999972, 30000000, 29999999};
    int K = 449999775;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 449999698;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> prices = {29999992, 29999982, 29999984, 29999981, 29999993, 29999997, 29999996, 29999983, 29999993, 29999988, 29999995, 29999984, 29999997, 29999982, 29999984, 29999993, 29999992, 29999987, 29999991, 29999981, 29999993, 29999998, 29999995, 29999996, 29999997, 30000000, 29999983, 29999996, 29999995, 29999999, 29999984, 29999989};
    vector<int> have = {};
    vector<int> values = {29999989, 29999975, 29999984, 29999972, 29999988, 29999992, 29999988, 29999980, 29999986, 29999980, 29999992, 29999977, 29999988, 29999979, 29999975, 29999992, 29999984, 29999985, 29999983, 29999981, 29999992, 29999990, 29999991, 29999988, 29999991, 30000000, 29999974, 29999993, 29999995, 29999999, 29999976, 29999982};
    int K = 659999824;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 689999724;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> prices = {29999998, 29999986, 29999984, 29999996, 29999984, 29999997, 29999991, 29999982, 30000000, 29999982, 29999983, 29999992, 30000000, 29999981, 29999996, 29999993, 29999986, 29999998, 29999988, 29999989, 30000000, 29999990, 29999999, 29999985, 29999990, 29999985, 30000000, 29999991, 29999992, 29999994, 29999993, 29999992};
    vector<int> have = {};
    vector<int> values = {29999994, 29999982, 29999976, 29999994, 29999977, 29999995, 29999986, 29999974, 29999996, 29999975, 29999980, 29999983, 29999995, 29999980, 29999987, 29999993, 29999984, 29999990, 29999985, 29999988, 29999996, 29999987, 29999998, 29999985, 29999986, 29999985, 29999993, 29999982, 29999992, 29999986, 29999992, 29999988};
    int K = 629999866;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 659999733;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> prices = {29999962, 29999952, 29999954, 29999951, 29999963, 29999967, 29999966, 29999953, 29999963, 29999958, 29999965, 29999954, 29999967, 29999952, 29999954, 29999963, 29999962, 29999957, 29999961, 29999951, 29999963, 29999968, 29999965, 29999966, 29999967, 29999970, 29999953, 29999966, 29999965, 29999969, 29999954, 29999959};
    vector<int> have = {};
    vector<int> values = {29999959, 29999945, 29999954, 29999942, 29999958, 29999962, 29999958, 29999950, 29999956, 29999950, 29999962, 29999947, 29999958, 29999949, 29999945, 29999962, 29999954, 29999955, 29999953, 29999951, 29999962, 29999960, 29999961, 29999958, 29999961, 29999970, 29999944, 29999963, 29999965, 29999969, 29999946, 29999952};
    int K = 659999164;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 689999034;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> prices = {29999968, 29999956, 29999954, 29999966, 29999954, 29999967, 29999961, 29999952, 29999970, 29999952, 29999953, 29999962, 29999970, 29999951, 29999966, 29999963, 29999956, 29999968, 29999958, 29999959, 29999970, 29999960, 29999969, 29999955, 29999960, 29999955, 29999970, 29999961, 29999962, 29999964, 29999963, 29999962};
    vector<int> have = {};
    vector<int> values = {29999964, 29999952, 29999946, 29999964, 29999947, 29999965, 29999956, 29999944, 29999966, 29999945, 29999950, 29999953, 29999965, 29999950, 29999957, 29999963, 29999954, 29999960, 29999955, 29999958, 29999966, 29999957, 29999968, 29999955, 29999956, 29999955, 29999963, 29999952, 29999962, 29999956, 29999962, 29999958};
    int K = 629999236;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 659999073;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> prices = {29999946, 29999981, 29999954, 29999947, 29999978, 29999973, 29999960, 29999961, 29999964, 29999968, 29999943, 29999943, 29999946, 29999966, 29999943, 29999986, 29999976, 29999988, 29999946, 29999989, 29999958, 29999941, 29999953, 29999973, 29999959, 29999972, 29999949, 29999969, 29999957, 29999955, 29999970, 29999985};
    vector<int> have = {};
    vector<int> values = {29999942, 29999980, 29999948, 29999943, 29999970, 29999963, 29999948, 29999954, 29999964, 29999949, 29999931, 29999931, 29999944, 29999962, 29999924, 29999967, 29999959, 29999979, 29999931, 29999977, 29999941, 29999937, 29999953, 29999972, 29999947, 29999969, 29999930, 29999969, 29999947, 29999948, 29999964, 29999966};
    int K = 659999178;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 689998970;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> prices = {2342342, 2834783, 343811, 1239834, 9819823, 123144, 8278273, 2323222};
    vector<int> have = {0, 2, 3};
    vector<int> values = {12323, 2323222, 1111, 1, 222222, 1231232, 1212121, 34234};
    int K = 0;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> prices = {7356403, 1779593, 1785317, 4685339, 1599753, 886341, 4438150, 2823373, 5644392, 5081567, 1301171, 2098240, 6178260, 3015385, 5498069, 764084, 6213671, 3400743, 7070398, 2192391, 5554777, 4581419, 2963988, 6248575, 3486654, 4051450, 2289970, 5729579, 1366723, 2413558, 5563969, 6696609};
    vector<int> have = {26, 6, 12, 25, 21, 24, 27, 9, 15, 22, 23, 1, 17};
    vector<int> values = {30000000, 16413898, 20535608, 30000000, 18349806, 9019140, 30000000, 26222359, 30000000, 30000000, 15885606, 18409957, 30000000, 30000000, 30000000, 6932992, 30000000, 30000000, 30000000, 22684450, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 28325096, 30000000, 14697055, 24353041, 30000000, 30000000};
    int K = 821829008;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 73765879;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> prices = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768};
    vector<int> have = {};
    vector<int> values = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768};
    int K = 40000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 40000;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> prices = {2, 15};
    vector<int> have = {};
    vector<int> values = {2, 21};
    int K = 13;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> prices = {25531655, 25718405, 1718567, 2341739, 7674817, 2992105, 5286812, 12424053, 25654627, 9860703, 21680245, 19375374, 5339292, 4644474, 25847544, 16278521, 18786757, 23175180, 25515766, 1986696, 19881104, 17131530, 29572873, 24742475, 8058573, 599307, 29242732, 19133155, 2391000, 10530799, 11317239, 28119540};
    vector<int> have = {};
    vector<int> values = {25531655, 25718405, 1718567, 2341739, 7674817, 2992105, 5286812, 12424053, 25654627, 9860703, 21680245, 19375374, 5339292, 4644474, 25847544, 16278521, 18786757, 23175180, 25515766, 1986696, 19881104, 17131530, 29572873, 24742475, 8058573, 599307, 29242732, 19133155, 2391000, 10530799, 11317239, 28119540};
    int K = 480000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 480162659;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> prices = {524288, 1048576, 2097152, 4194304, 8388608, 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 16777216, 18426252, 29485635, 24327675, 30000000, 32, 2, 2};
    vector<int> have = {};
    vector<int> values = {524288, 1048576, 2097152, 4194304, 8388608, 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 16777216, 18426252, 29485635, 24327675, 30000000, 32, 2, 2};
    int K = 71879431;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 71879431;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> prices = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 16777216, 16777216, 16777216, 16777216, 16777216, 16777216, 16777216};
    vector<int> have = {3, 7, 14, 15, 16, 17, 18, 19, 20, 21};
    vector<int> values = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 16777216, 16777216, 16777216, 16777216, 16777216, 16777216, 16777216};
    int K = 100000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 95821944;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> prices = {17832772, 25704741, 8007484, 16205744, 26924502, 999320, 10883681, 480179, 25562662, 17521059, 10165909, 26285596, 25920160, 14209147, 4482209, 11546756, 901439, 16475545, 10183260, 16063490, 6240207, 25641813, 5436213, 11728469, 21029709, 404381, 6766576, 18598697, 13522538, 22662482};
    vector<int> have = {0, 10, 11, 12, 13, 14, 15, 16, 2, 3};
    vector<int> values = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 19649189, 3810543, 1924438, 28059803, 10583263};
    int K = 97581600;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 187154961;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> prices = {28323645, 12657035, 19464205, 5048685, 26785242, 7647904, 24866701, 29432852, 1548240, 3211554, 15312941, 29133743, 4468268, 430581, 19165162, 21484135, 27375763, 10389222, 12221864, 2398867, 16782297, 21081821, 27262187, 10284, 17562636, 1662039, 27599850, 25515744, 16608529, 14148069, 7918444, 23829521};
    vector<int> have = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28};
    vector<int> values = {13788995, 21351829, 26366529, 7441643, 29407633, 29068777, 505427, 1437710, 9184274, 14082008, 23641168, 983130, 9972269, 17955196, 10217006, 13448271, 29402123, 11697253, 23923856, 29308336, 18374702, 22810530, 10176411, 7241825, 15394848, 19453922, 17486050, 25123203, 10048055, 29350957, 12824324, 17400171};
    int K = 600000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> prices = {17, 16, 4};
    vector<int> have = {};
    vector<int> values = {18, 16, 4};
    int K = 20;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> prices = {234234, 324553, 808923, 3479831, 8243421, 123908, 239874, 12873, 32987, 20987, 20984, 50832, 208734, 2098234, 89234, 98234, 10823, 423982, 98342, 98234, 340598, 98724, 280982, 98234, 209823, 985345, 98234, 98123, 3204981, 35098, 2309481, 230482};
    vector<int> have = {};
    vector<int> values = {234234, 324553, 808923, 3479831, 8243421, 123908, 239874, 12873, 32987, 20987, 20984, 50832, 208734, 2098234, 89234, 98234, 10823, 423982, 98342, 98234, 340598, 98724, 280982, 98234, 209823, 985345, 98234, 98123, 3204981, 35098, 2309481, 230482};
    int K = 3249283;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3249283;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> prices = {123, 2314, 14, 141, 42, 24, 24, 142, 2, 42, 452, 4, 5232, 5, 32532, 5, 3252, 5, 252, 5234, 2, 12312, 1, 23, 213, 141, 141, 4, 12, 3, 24, 231};
    vector<int> have = {};
    vector<int> values = {213, 13, 1321, 312, 43124, 142, 124, 14, 14, 143, 23, 2, 41, 451, 41, 414, 411, 13, 23, 13, 1, 123, 14, 141, 41, 412, 32, 4, 1, 231, 231, 13};
    int K = 1000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> prices = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 16777217, 16777218, 16777220, 16777224, 16777232, 16777248, 16777280};
    vector<int> have = {};
    vector<int> values = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 16777217, 16777218, 16777220, 16777224, 16777232, 16777248, 16777280};
    int K = 33554431;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 33554431;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> prices = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 30000000};
    vector<int> have = {};
    vector<int> values = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 30000000};
    int K = 30000059;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30000030;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> prices = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> have = {};
    vector<int> values = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 16;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> prices = {29296852, 110782, 28760337, 14459364, 11041596, 8307748, 29756461, 12092653, 10094912, 24070863, 10006103, 28361155, 7324, 844141, 13858759, 12637409, 7243873, 15796074, 6682637, 20968046, 5831171, 11654102, 11387676, 4784691, 25758231, 22291939, 8700521, 23363138, 25120089, 12066102, 21189610, 10035401};
    vector<int> have = {};
    vector<int> values = {26021911, 14404430, 18235113, 20025940, 28542435, 5479598, 28951688, 25081636, 24463636, 29286781, 8305917, 9332254, 11219214, 28268684, 28213750, 19309060, 11251258, 27447430, 11281471, 25271156, 28065430, 8912014, 11237525, 15072786, 21032135, 15063630, 2112185, 16784874, 18947415, 605182, 16167790, 20057068};
    int K = 200689718;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 58666029;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> prices = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> have = {};
    vector<int> values = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 12;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> prices = {25016601, 25031418, 25005081, 25011047, 25022631, 25026012, 25029644, 25002494, 25008342, 25017268, 25004181, 25001586, 25022602, 25011113, 25026765, 25005515, 25002428, 25001113, 25031078, 25027713, 25021717, 25029215, 25001506, 25030114, 25007035, 25010262, 25012163, 25023155, 25031531, 25017625, 25029442, 25023258};
    vector<int> have = {};
    vector<int> values = {25020616, 25006989, 25023876, 25032636, 25013234, 25003298, 25003209, 25026082, 25008987, 25022805, 25020967, 25011297, 25020630, 25001594, 25001783, 25016314, 25017585, 25018296, 25027598, 25005055, 25019525, 25001045, 25008494, 25000567, 25025675, 25025587, 25004862, 25023748, 25006129, 25001371, 25026360, 25028803};
    int K = 800000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 800541655;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> prices = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2};
    vector<int> have = {};
    vector<int> values = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2};
    int K = 1;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> prices = {28323645, 12657035, 19464205, 5048685, 26785242, 7647904, 24866701, 29432852, 1548240, 3211554, 15312941, 29133743, 4468268, 430581, 19165162, 21484135, 27375763, 10389222, 12221864, 2398867, 16782297, 21081821, 27262187, 10284, 17562636, 1662039, 27599850, 25515744, 16608529, 14148069, 7918444, 23829521};
    vector<int> have = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28};
    vector<int> values = {13788995, 21351829, 26366529, 7441643, 29407633, 29068777, 505427, 1437710, 9184274, 14082008, 23641168, 983130, 9972269, 17955196, 10217006, 13448271, 29402123, 11697253, 23923856, 29308336, 18374702, 22810530, 10176411, 7241825, 15394848, 19453922, 17486050, 25123203, 10048055, 29350957, 12824324, 17400171};
    int K = 300000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> prices = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 11, 12, 13, 2464444, 27664444, 9987, 14745, 1394, 11111111, 2834, 46, 3665, 3737, 33, 1, 2, 3, 4, 5, 6, 19};
    vector<int> have = {1, 4, 8};
    vector<int> values = {1, 2, 3, 5, 7, 11, 13, 17, 19, 32, 63, 75, 99, 12345678, 29999999, 3331, 5763, 5273, 1352245, 3425, 117, 36545, 3463, 35, 17, 18, 19, 28, 29, 30, 31};
    int K = 30000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 27664428;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> prices = {660357, 369232, 868981, 52860, 535666, 120653, 126631, 321379, 661558, 326892, 514344, 388719, 111958, 791436, 120749, 428048, 441627, 637322, 742506, 928453, 255535, 802760, 34799, 844746, 864883, 201550, 316891, 204588, 443916, 344870, 695242};
    vector<int> have = {};
    vector<int> values = {104273, 714102, 564223, 673485, 249769, 201228, 800117, 87500, 862787, 127009, 118197, 251506, 755319, 909633, 888607, 699719, 351260, 42282, 958577, 279713, 297817, 761338, 830865, 658915, 626221, 32415, 975806, 830809, 992683, 320677, 42403};
    int K = 9288288;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3072831;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> prices = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    vector<int> have = {};
    vector<int> values = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216};
    int K = 33554431;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 325;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> prices = {1886, 9237, 7047, 3552, 4200, 6102, 540, 3848, 7130, 4214, 442, 263, 4370, 6621, 1157, 1648, 6345, 1970, 3376, 5835, 6856, 2278, 367, 1240, 6205, 1905, 895, 1366, 9646, 3121, 9813, 3667};
    vector<int> have = {};
    vector<int> values = {1485, 6608, 5124, 5284, 7517, 2933, 5507, 1127, 8884, 2526, 3246, 7703, 5138, 989, 1931, 4960, 1105, 2192, 4048, 6324, 4893, 902, 9332, 8398, 3333, 7550, 259, 8980, 3714, 2274, 2166, 6578};
    int K = 71505;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16795;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> prices = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> have = {};
    vector<int> values = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 15;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> prices = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000};
    vector<int> have = {2};
    vector<int> values = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 29996666};
    int K = 267000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 267003326;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> prices = {13, 41, 73, 135, 190, 214, 219, 225, 233, 241, 262, 292, 318, 327, 338, 435, 1869, 8723, 12316, 14771, 15141, 17035, 17673, 20037, 22190, 25547, 25667, 27529, 28253, 28703, 31322, 32662};
    vector<int> have = {};
    vector<int> values = {35, 94, 153, 166, 174, 222, 268, 284, 316, 364, 388, 400, 439, 443, 491, 497, 778, 1842, 3035, 4664, 6868, 7711, 9741, 9894, 11538, 12859, 19912, 23811, 26299, 27644, 30333, 32757};
    int K = 40000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 46769;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> prices = {30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000};
    vector<int> have = {};
    vector<int> values = {30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000};
    int K = 600605000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 630000000;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> prices = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2345, 63, 654, 23, 52, 65, 76, 300000, 3000000, 4000000, 235, 3, 324, 586578, 5, 432, 5234, 234, 234, 234, 54, 64};
    vector<int> have = {0};
    vector<int> values = {1, 2, 300000, 400000, 87, 56, 42344, 3245, 45, 657, 87, 67, 54, 434, 23, 234, 54, 56, 67687, 98776, 2000000, 45, 650000, 8, 666666, 66666, 6666, 6666, 678, 65, 456, 33};
    int K = 1000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> prices = {1, 2, 4, 8, 85210, 16, 32, 23543210, 64, 128, 256, 770510, 512, 1024, 7643120, 2048, 98421, 4096, 8192, 16741021, 16383, 32768, 65536, 131072, 262144, 524287, 1048576, 1047111, 2097152, 4194304, 8388608, 16777216};
    vector<int> have = {0};
    vector<int> values = {1, 2, 4, 8, 85210, 16, 32, 23543210, 64, 128, 256, 770510, 512, 1024, 7643120, 2048, 98421, 4096, 8192, 16741021, 16383, 32768, 65536, 131072, 262144, 524287, 1048576, 1047111, 2097152, 4194304, 8388608, 16777216};
    int K = 20970101;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20970100;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> prices = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> have = {};
    vector<int> values = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 32;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> prices = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216};
    vector<int> have = {};
    vector<int> values = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216};
    int K = 11111111;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11111111;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> prices = {1, 1, 100};
    vector<int> have = {};
    vector<int> values = {20000000, 20000000, 30000000};
    int K = 40000001;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> prices = {2, 15};
    vector<int> have = {};
    vector<int> values = {4, 21};
    int K = 13;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> prices = {2087951, 728210, 1903198, 2232330, 2758850, 907562, 1966552, 2704833, 953521, 2688354, 926422, 728302, 1741973, 2041259, 2827789, 798614, 245452, 1276336, 220184, 1326599, 2551300, 671905, 1147155, 1046997, 2361053, 2906066, 2725982, 652130, 1964355, 1509887, 663940, 1619110};
    vector<int> have = {0};
    vector<int> values = {2201660, 1929107, 1528198, 1615447, 2512847, 1404144, 1296661, 469482, 252044, 1945129, 1412017, 867645, 2948089, 2816070, 28839, 1005706, 534667, 1153472, 1426666, 2478332, 428649, 2604309, 2470825, 1771362, 2427886, 2509002, 1438201, 1658752, 895385, 2223175, 427551, 2847473};
    int K = 12000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2484647;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> prices = {1, 2};
    vector<int> have = {};
    vector<int> values = {5, 6};
    int K = 6;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> prices = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 3000000, 200000, 100000, 1000000, 2000000, 555555, 666666, 777777, 888888, 999999, 1234567, 123232, 123232};
    vector<int> have = {};
    vector<int> values = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 3000000, 200000, 100000, 1000000, 2000000, 555555, 666666, 777777, 888888, 999999, 1234567, 123232, 123232};
    int K = 30000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> prices = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 16777216, 16777216, 16777216, 16777216, 16777216, 16777216, 16777216};
    vector<int> have = {};
    vector<int> values = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 16777216, 16777216, 16777216, 16777216, 16777216, 16777216, 16777216};
    int K = 1000000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> prices = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000};
    vector<int> have = {};
    vector<int> values = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000};
    int K = 500000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> prices = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> have = {4, 3};
    vector<int> values = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 16;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> prices = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 10000};
    vector<int> have = {};
    vector<int> values = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 10000};
    int K = 100;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> prices = {5, 964, 97, 2603, 16633958, 8, 160, 85, 8507, 18192998, 21266, 468, 8, 39024, 82, 938683, 3859544, 11, 851832, 10053116, 1045, 624, 1528, 121084, 1216, 4144, 228, 11519, 357, 76969, 340103, 1463};
    vector<int> have = {0, 2, 3, 5, 6};
    vector<int> values = {2, 424, 38, 1212, 16544404, 3, 64, 33, 4260, 18317652, 11312, 198, 3, 21656, 32, 675712, 3210487, 4, 607617, 9362803, 462, 268, 690, 73118, 542, 1984, 93, 5882, 149, 44892, 223464, 659};
    int K = 13000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14761619;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> prices = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> have = {};
    vector<int> values = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    int K = 160000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 160000;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> prices = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 3554432, 7108864, 14217728, 284354, 56, 26870912, 23741824};
    vector<int> have = {};
    vector<int> values = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 3554432, 7108864, 14217728, 284354, 56, 26870912, 23741824};
    int K = 100000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 100000000;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> prices = {21751992, 20613235, 7988552, 27390438, 19644043, 5873508, 13496344, 1154293, 1447786, 13611192, 179523, 27979181, 21605076, 13771803, 14669511, 4193227, 6885638, 28501194, 26511377, 11940667, 5188619, 23208803, 19791549, 11641260, 9369234, 5099827, 13365529, 28265226, 16842007, 8752934, 11966675, 12510338};
    vector<int> have = {};
    vector<int> values = {27271089, 15057986, 9398604, 10983666, 1391368, 20064868, 27203304, 2158335, 12311062, 11750253, 27560734, 15942701, 10723136, 29574993, 25114882, 29193857, 5618460, 10818502, 23181499, 15649616, 6190127, 11592001, 6474108, 14425152, 7220092, 5377926, 14425563, 14079012, 25522426, 21094251, 22670846, 5193603};
    int K = 485234022;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 455210581;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> prices = {30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000};
    vector<int> have = {};
    vector<int> values = {30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000};
    int K = 960000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 960000000;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> prices = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608};
    vector<int> have = {};
    vector<int> values = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608};
    int K = 7039242;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7039242;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> prices = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1};
    vector<int> have = {};
    vector<int> values = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int K = 32;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> prices = {3, 2, 2};
    vector<int> have = {};
    vector<int> values = {10, 5, 6};
    int K = 11;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> prices = {1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 262144, 29999974, 29999973, 29999972, 29999971, 29999970, 29999969, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 29999975};
    vector<int> have = {};
    vector<int> values = {30000000, 14999999, 7499998, 3749998, 1874998, 937498, 468748, 234373, 117185, 58591, 29294, 14646, 7322, 3660, 1829, 913, 455, 226, 112, 55, 26, 12, 5, 1, 29999976, 14999987, 7499992, 3749995, 1874996, 937497, 468747, 234372};
    int K = 89882680;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30261090;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> prices = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000};
    vector<int> have = {};
    vector<int> values = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000};
    int K = 1000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> prices = {10, 4, 4, 5};
    vector<int> have = {};
    vector<int> values = {2, 4, 6, 8};
    int K = 10;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> prices = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 1, 786432, 1572864, 3145728, 6291456, 12582912, 25165824};
    vector<int> have = {};
    vector<int> values = {1, 1, 1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767, 65535, 131071, 262143, 524287, 1048575, 2097151, 4194303, 8388607, 1, 393215, 786431, 1572863, 3145727, 6291455, 12582911};
    int K = 30000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 60000024;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> prices = {30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 16777216, 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
    vector<int> have = {};
    vector<int> values = {30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 16777216, 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
    int K = 142369621;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 142369621;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> prices = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131};
    vector<int> have = {};
    vector<int> values = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131};
    int K = 1850;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1851;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> prices = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000};
    vector<int> have = {};
    vector<int> values = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000};
    int K = 220000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 220000000;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> prices = {17, 16, 4, 100};
    vector<int> have = {3};
    vector<int> values = {18, 16, 4, 1};
    int K = 20;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> prices = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 100, 100};
    vector<int> have = {};
    vector<int> values = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 100, 100};
    int K = 216;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 216;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> prices = {100, 1000, 50, 1000, 19};
    vector<int> have = {};
    vector<int> values = {80, 700, 30, 550, 10};
    int K = 120;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> prices = {28323645, 12657035, 19464205, 5048685, 26785242, 7647904, 24866701, 29432852, 1548240, 3211554, 15312941, 29133743, 4468268, 430581, 19165162, 21484135, 27375763, 10389222, 12221864, 2398867, 16782297, 21081821, 27262187, 10284, 17562636, 1662039, 27599850, 25515744, 16608529, 14148069, 7918444, 23829521};
    vector<int> have = {};
    vector<int> values = {13788995, 21351829, 26366529, 7441643, 29407633, 29068777, 505427, 1437710, 9184274, 14082008, 23641168, 983130, 9972269, 17955196, 10217006, 13448271, 29402123, 11697253, 23923856, 29308336, 18374702, 22810530, 10176411, 7241825, 15394848, 19453922, 17486050, 25123203, 10048055, 29350957, 12824324, 17400171};
    int K = 300000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 129230801;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> prices = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2345, 63, 654, 23, 52, 65, 76, 300000, 3000000, 4000000, 235, 3, 324, 586578, 5, 432, 5234, 2340, 23400, 2340, 54000, 64000};
    vector<int> have = {0};
    vector<int> values = {1, 2, 30000000, 30000000, 87, 56, 42344, 3245, 45, 657, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 30000000, 5600000, 67687, 98776, 2000000, 30000000, 650000, 8, 666666, 66666, 666600, 666600, 30000000, 650000, 30000000, 30000000};
    int K = 100000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> prices = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> have = {};
    vector<int> values = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    int K = 32;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> prices = {4, 3, 3, 3};
    vector<int> have = {};
    vector<int> values = {5, 3, 2, 3};
    int K = 6;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> prices = {30000000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> have = {};
    vector<int> values = {30000000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int K = 30000000;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 30000000;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> prices = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
    vector<int> have = {};
    vector<int> values = {1, 2, 4, 8, 16, 32, 64, 128, 1, 2, 4, 8, 16, 32, 64, 128, 1, 2, 4, 8, 16, 32, 64, 128, 1, 2, 4, 8, 16, 32, 64, 128};
    int K = 255;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> prices = {15399165, 10492947, 3659490, 24864975, 2694477, 17529499, 2526708, 8829942, 14179718, 11576035, 5904686, 10712637, 9677161, 27565185, 6715999, 23911129, 23207592, 19758406, 2633455, 11577227, 13713793, 1540886, 24650979, 9599535, 13637714, 28282001, 25092522, 2466977, 24690604, 9157911, 15263200, 15000000};
    vector<int> have = {};
    vector<int> values = {24460563, 28039562, 19288564, 12716343, 3633142, 23192264, 15659762, 2153721, 5187478, 582650, 20290563, 20882938, 112804, 3056193, 11795760, 4014051, 2137117, 15232034, 7673424, 24386445, 4268055, 5905043, 17063822, 2574548, 22091205, 18623905, 24639177, 10240562, 25038298, 15747678, 17217476, 15000000};
    int K = 412345678;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 340575453;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> prices = {1};
    vector<int> have = {};
    vector<int> values = {1};
    int K = 0;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> prices = {1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608};
    vector<int> have = {};
    vector<int> values = {1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608};
    int K = 11184810;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 11184810;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> prices = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> have = {};
    vector<int> values = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    int K = 10;
    CollectingPostmarks* pObj = new CollectingPostmarks();
    clock_t start = clock();
    int result = pObj->amountOfMoney(prices, have, values, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15868491&rd=13506&pm=9958
********************************************************************************
#include <cstdio> 
#include <cstring> 
#include <cstdlib> 
#include <cmath> 
#include <cctype> 
 
#include <algorithm> 
#include <functional> 
#include <vector> 
#include <string> 
#include <set> 
#include <map> 
#include <sstream> 
#include <iostream> 
#include <functional> 
 
using namespace std; 
 
#define forn(i, n) for (int i = 0; i < (int)(n); i++) 
#define forit(i, a) for (__typeof((a).begin()) i = (a).begin(); i != (a).end(); i++) 
#define pb push_back 
#define mp make_pair 
#define sz(a) (int)(a).size() 
#define all(a) (a).begin(), (a).end() 
 
typedef long long ll; 
typedef vector <int> vi; 
typedef pair <int, int> pii; 
 
class CollectingPostmarks 
{ 
public: 
  int amountOfMoney(vector <int> p, vector <int> have, vector <int> v, int K) 
  { 
    int n = sz(p), money = 0; 
    if (n & 1) 
      p.pb(0), v.pb(0), n++; 
    forn(i, sz(have)) 
      money += p[have[i]]; 
 
    ll ans = (ll)1e12; 
    vector <pii> x, y; 
    forn(i, 1 << (n / 2)) 
    { 
      int pr = 0, val = 0; 
      forn(j, n / 2) 
        if ((i >> j) & 1) 
          pr += p[j], val += v[j]; 
      x.pb(mp(val, pr)); 
 
      pr = val = 0; 
      forn(j, n / 2) 
        if ((i >> j) & 1) 
          pr += p[j + n / 2], val += v[j + n / 2]; 
      y.pb(mp(val, pr)); 
    } 
    sort(all(x)), sort(all(y)); 
 
    ll mi = (ll)1e12; 
    int pos = sz(y) - 1; 
    forn(i, sz(x)) 
    { 
      while (pos >= 0 && y[pos].first + x[i].first >= K) 
        mi = min(mi, (ll)y[pos--].second); 
      ans = min(ans, x[i].second + mi); 
    } 
     
    if (ans > (ll)1e10) 
      return -1; 
    return max(ans - money, 0ll); 
  } 
};

********************************************************************************
*******************************************************************************/