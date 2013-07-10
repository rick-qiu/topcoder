/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2827
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

class ChangeOptimizer {
public:
    vector<int> fewestCoins(vector<int> coinTypes, int value);
};

vector<int> ChangeOptimizer::fewestCoins(vector<int> coinTypes, int value) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> coinTypes = {1, 10, 25};
    int value = 49;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 4, 0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> coinTypes = {1, 3, 6, 2};
    int value = 11;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> coinTypes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value = 1234567;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 0, 1, 0, 0, 0, 154320, 0, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> coinTypes = {91001, 3567, 222123, 4456, 1, 732234, 123793, 982312, 14781};
    int value = 65864135;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 14780, 0, 0, 0, 4455};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> coinTypes = {1, 10, 100, 1000, 10000};
    int value = 1000000;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000000, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> coinTypes = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864};
    int value = 134217727;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> coinTypes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int value = 3628799;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 0, 0, 0, 1, 0, 0, 0, 0, 362879};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> coinTypes = {5260, 259420, 415, 310420, 11519400, 80635800, 476, 3839800, 29055040, 77294580, 87165120, 395, 1, 20};
    int value = 806357999;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {729, 0, 0, 0, 6, 9, 0, 2, 0, 0, 0, 0, 19, 262};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> coinTypes = {3265020, 1, 938, 45710280, 812308, 91420560, 187, 16830};
    int value = 182841119;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 186, 0, 1, 0, 1, 89, 193};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> coinTypes = {233, 91197900, 92713920, 300, 1, 218700, 119995, 12359485, 37078455, 203320, 391, 74156910};
    int value = 889882919;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {514, 0, 0, 0, 232, 0, 102, 2, 1, 0, 0, 11};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> coinTypes = {23434944, 71625708, 5858736, 1, 410, 70304832, 130, 124, 567, 72930, 98658, 60240180, 85682016, 10992, 23436, 101680, 21420504, 30120090, 16, 42841008};
    int value = 140609663;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 3, 15, 0, 1, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 686, 0};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> coinTypes = {42557060, 99, 156, 12741, 366210, 90934272, 5616, 32559912, 85100, 11466900, 60191208, 25233824, 74547600, 97679736, 1, 10164, 137, 233830, 1280664, 585, 502856, 1636810, 3375570, 18636900, 20253420, 55220235, 60760260, 85114120, 78, 686, 698, 303, 965, 664048, 2066688, 62621910, 68801400, 80959816, 20873970, 86961, 75701472, 83061, 115, 363, 526, 306870, 1911150, 34400700};
    int value = 894418199;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 149, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 136, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> coinTypes = {4210320, 3572360, 16, 74476116, 93952170, 706, 412, 4240, 153, 57157760, 83633934, 31317390, 53534, 18619029, 37238058, 501, 1, 324760, 382748, 41816967, 21879, 92627040, 218937, 377};
    int value = 968189507;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 12, 0, 0, 0, 0, 142, 0, 0, 0, 0, 1, 1, 0, 152, 0, 0, 0, 850, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> coinTypes = {21179700, 34800480, 213, 831, 3834, 1, 17400240, 56134881, 42359400, 68685760, 81227124, 84718800, 91942224, 40613562, 790920, 858572, 63191295, 988, 221877, 489855, 466, 22, 7458, 141198, 999372, 845, 867, 7059900, 3692142, 8700120};
    int value = 162454247;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 17, 0, 962, 212, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> coinTypes = {46592, 1792, 12610, 538, 376, 217986, 128, 392740, 282, 29590, 34411520, 42071298, 52432380, 75699306, 84046360, 1, 513, 520, 312832, 88947540, 95047680, 99998080, 970, 765, 425277, 14824590, 420160, 19009536, 3745170, 26216190, 37849653, 42023180, 68823040, 84142596, 730};
    int value = 996215219;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 969, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 6, 1, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> coinTypes = {64423520, 76626432, 1, 42140, 575210, 27027000, 186116, 917, 606597, 732, 713426, 723, 276, 39828824, 4026470, 9009000, 54593730, 59927784, 64305640, 81081000, 391, 56, 42251040, 970, 84502080, 94248960, 216672, 24024, 312, 266064, 14981946, 32152820, 360360, 14083680, 172, 294528};
    int value = 422510399;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 731, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 4, 0, 64, 0, 0, 0, 0, 0, 0, 2, 0, 0};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> coinTypes = {34751808, 756, 87, 149, 68838, 318276, 383724, 817, 31644, 510625, 54, 4343976, 35631144, 43149876, 42180, 61908, 30314196, 47505915, 54244344, 56653128, 71262288, 86299752, 88848750, 90942588, 44424375, 57533520, 25704, 95011830, 66, 13561086, 14808125, 17815572, 459, 28766760, 53679, 1, 703, 72};
    int value = 570098303;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 585, 0, 1, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 53, 0, 0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> coinTypes = {623, 114, 639, 23798450, 737, 71556, 601, 10152108, 18590132, 27156, 604494, 28839672, 36779784, 14419836, 470, 549, 116090, 38211705, 41456250, 59679096, 22237, 382, 441396, 20485116, 71395350, 73559568, 76423410, 146, 23501340, 77979726, 81940464, 82912500, 86519016, 91368972, 94005360, 45828, 178, 1, 71816, 331650, 439215, 6828372, 890, 870420};
    int value = 778671143;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 8, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> coinTypes = {1, 454990, 78258280, 40, 761, 48216960, 99801600, 535744, 792, 526, 49900800, 920, 33480, 441600, 27855360, 31268160, 744480, 39129140, 83566080, 93804480};
    int value = 399206399;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {39, 0, 0, 22, 0, 0, 3, 0, 0, 0, 1, 479, 0, 112, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> coinTypes = {645116, 36570080, 80994800, 136948, 88740000, 94725924, 857, 859, 51614982, 301842, 77079564, 12846594, 119110, 94472820, 277, 1, 99992980, 44370000, 19998596, 442986, 731, 20679148, 55658344, 409, 92, 27829172, 47362962, 73140160, 52277, 484476, 45260, 50324, 118320, 82716592, 14790000, 292, 408, 469, 901};
    int value = 621179999;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 2, 0, 289, 0, 0};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> coinTypes = {950, 54188904, 39200, 27252100, 62025520, 210256, 98, 282310, 458, 120, 322553, 11, 370, 727, 781, 234900, 118, 75590880, 80740660, 1, 9537, 15680000, 81756300, 240, 82285196, 83755800, 348, 353400, 9031539, 44161200, 62611560, 88322400, 91804106, 74881, 87910, 226320, 78400000, 652, 272, 131446, 5450420, 27918600, 45902053, 645480, 37795440};
    int value = 377954399;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 119, 0, 0, 0, 942, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> coinTypes = {51499140, 691, 48386646, 36777312, 73554624, 862, 768042, 216144, 21257400, 68391540, 541053, 79371873, 81702432, 82941975, 85029600, 93061116, 96773292, 472, 896, 711, 37425, 810, 30081, 419580, 674325, 46530558, 63384408, 67496880, 94454340, 613085, 148, 182664, 23613585, 564, 1, 75, 675, 322608, 785, 365769, 2657175, 27647325, 48840, 37, 513, 12874785, 33748440, 42514800};
    int value = 995303699;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 8, 998, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> coinTypes = {188955, 30192750, 1700595, 54975875, 59520825, 765, 670950, 1, 2199035, 90578250, 23664, 10064250, 48, 205, 994, 3485};
    int value = 543469499;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 0, 0, 0, 0, 14, 993, 0, 5, 0, 2, 0, 0, 674, 0};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> coinTypes = {2091, 528066, 552767, 2055453, 6074016, 44880, 1, 922, 26802972, 30831795, 467232, 79433376, 172, 45674958, 489, 627, 657, 301713, 310714, 4880500, 68327000, 88610718, 92495385, 97184256, 98741552, 584, 72900, 942, 893, 33166020, 80408916, 547, 660, 405, 1525920, 542536, 63963156, 762, 39044, 66332040, 76041504, 57984960, 91349916, 51, 509257, 285138, 185592};
    int value = 647467694;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {982, 0, 0, 14, 0, 0, 50, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> coinTypes = {98475696, 348, 99740880, 99810576, 1484964, 1, 91410228, 186, 722, 36455, 70034, 189375, 247, 214578, 143, 416075, 82498, 994704, 27009906, 32669208, 32825232, 391, 317, 41638740, 51156, 45705114, 48253426, 30233196, 3128, 24935220, 273, 375, 49905288, 67694, 97092, 13879580, 935, 60466392, 54019812, 92784725, 181, 83277480, 60346, 96506852, 65338416};
    int value = 689329871;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 2, 7, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> coinTypes = {361120, 895, 773280, 1, 12372480, 592, 37117440, 48390080, 74234880};
    int value = 668113919;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 863, 15, 894, 2, 0, 1, 0, 8};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> coinTypes = {214926, 873, 188680, 45682344, 21707280, 890, 1, 317, 6287556, 2583, 330924, 35695044, 652, 876, 44012892, 754720, 88025784, 94567440, 43414560, 76931316, 369, 407044, 86829120, 88439337, 91364688, 436, 71390088, 841, 108252, 566588, 782649, 516840};
    int value = 792232055;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 435, 0, 6, 0, 18, 0, 0, 0, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> coinTypes = {12752640, 453, 717600, 714, 723, 762, 436639, 845, 821, 121240, 655979, 2125440, 22320456, 28863076, 48274380, 50920800, 53057550, 56690400, 3, 86589228, 741, 280, 1787940, 9127776, 53136, 26528775, 432, 58305, 33558, 1419, 800, 1, 4250880, 328422, 36783264, 10184160, 38257920, 52850151, 55453153, 73022208, 73566528, 76515840, 76786866, 96548760, 354699, 328242, 931, 673569, 893970};
    int value = 229547519;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 39, 0, 122, 0, 0, 0, 0, 2, 2, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> coinTypes = {8312997, 41410096, 43983216, 62357568, 478, 664, 28308672, 3145408, 86613504, 87966432, 24390288, 97561152, 204, 102, 17264, 7330536, 161000, 32436, 173992, 4454112, 21991608, 48780576, 56617344, 43306752, 49877982, 93380000, 679, 6, 68, 7616, 99755964, 50592, 1, 3354, 2710032, 395857, 161};
    int value = 703731455;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1, 0, 0, 0, 0, 0, 0, 7, 0, 0, 158, 1, 0, 2, 0, 225, 0, 0, 1, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 5, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> coinTypes = {65003400, 66388140, 92018556, 34914236, 74444, 97849142, 20431296, 30744, 17, 9, 728, 200392, 1, 1214582, 4369, 851, 56, 2844, 96119, 481936, 603359, 7747488, 11566464, 828996, 5107824, 54232416, 69828472, 347, 6500340, 8442, 43441848, 48924571, 78947830, 81725184, 86883696, 117, 91378752, 834, 57832320, 503, 30459584, 18, 296, 2553912, 85995, 40862592};
    int value = 490351103;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 8, 0, 0, 0, 0, 897, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 157, 0, 1, 0, 1};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> coinTypes = {13676850, 21657688, 22861440, 75, 31293288, 47739780, 627, 46812, 200598, 56555970, 73184520, 84672315, 1, 16934463, 82389120, 120960, 81870750, 998, 44919, 2763, 2729025, 7620480, 315, 884070, 45722880, 86630752, 91445760, 867, 93879864, 424, 15688, 95479560, 294690, 95737950, 634, 32617, 63, 69975, 1367685, 3, 14636904, 169, 198442, 338130, 188, 7823322, 8238912};
    int value = 640120319;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 62, 0, 0, 0, 0, 0, 2, 383, 0, 1, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> coinTypes = {99075600, 11310, 873080, 8256300, 13608000, 27216000, 1, 978, 51809550, 54432000, 62702416, 16512600, 30240, 83206656, 389456, 964, 950, 38000, 41603328, 12810204, 120, 22990000, 303600, 45980000, 85561840, 926, 435, 88954800, 797070, 6716, 7560, 866736, 907200, 23, 789, 4536000, 33025200, 660, 32349, 91960000};
    int value = 163295999;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 1, 1, 119, 0, 0, 2, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 2, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> coinTypes = {83736688, 4176, 375570, 87381504, 436020, 751, 688, 3276900, 94643640, 118, 553064, 9656766, 2152, 70792192, 89387775, 762, 112, 538, 16, 225, 507, 431825, 52430400, 560082, 78912720, 92583000, 182250, 94192, 7281792, 9900, 3640896, 47321820, 67597362, 584, 1, 53767872, 702, 3186, 260064, 438584, 657606, 14563584, 646, 46291500, 50437160, 43690752, 22, 1379538, 71507280};
    int value = 786433535;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 8, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 15, 0, 0, 0, 13, 0, 0, 2, 0, 0, 0, 1, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> coinTypes = {6046500, 1, 278, 434044, 982, 12093000, 96744000, 8340, 48372000, 4170, 96791812};
    int value = 290231999;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 277, 14, 0, 0, 3, 2, 724, 1, 1, 0};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> coinTypes = {66690, 206244, 1795013, 93366000, 95792060, 97939296, 306, 1, 6669000, 190, 12626640, 707, 620060, 266760, 13320580, 95, 163183, 44644320, 331, 313908, 8161608, 328055, 46683000, 19760, 47896030, 563, 63133200, 79923480, 455, 95147, 86828724, 89288640, 721};
    int value = 746927999;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 0, 0, 7, 0, 0, 0, 94, 6, 350, 0, 0, 0, 24, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> coinTypes = {20918486, 681, 80593668, 90789120, 197, 426, 279226, 33794, 62755458, 1, 717, 140, 932844, 69030456, 77168000, 88722424, 67257960, 280, 84804, 15762, 298, 83172, 1513152, 2555484, 27186, 19292000, 30263040, 145734, 89320, 265636, 17888388, 1484000, 29292534, 34515228, 58585068, 71553552, 14840, 382, 895, 742, 494935, 38584000, 44361212, 72598760, 554, 26726490};
    int value = 771679999;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 1, 0, 0, 9, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 99, 0, 0, 0, 0, 1, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> coinTypes = {98054145, 61, 419, 8, 433, 643, 138127, 380033, 1264896, 8740759, 1908424, 126309, 213, 34587, 17481518, 32684715, 34351632, 32, 6912, 326952, 5059584, 35417088, 1, 478, 63659736, 63814674, 68703264, 31907337, 70834176, 477106, 84353616, 87407590};
    int value = 637507583;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 215, 182, 0, 6, 1, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> coinTypes = {147323, 544149, 649, 26, 3473340, 267243, 6946680, 587, 13893360, 17103552, 27786720, 60400539, 83360160, 68414208, 72482916, 1, 687, 4758};
    int value = 333440639;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 182, 1, 0, 1, 0, 1, 0, 2, 0, 3, 0, 0, 25, 0, 729};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> coinTypes = {1127555, 36081760, 40440272, 410, 87344, 211, 86697, 44822349, 68085248, 4510220, 899, 181000, 9020440, 216832, 54942426, 72163520, 1, 75839000, 352, 724, 80880544, 106, 2717, 209, 56442500, 87787350, 89644698, 90308, 283185, 436051, 740, 95865520, 351, 344840, 809};
    int value = 649471679;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 3, 0, 0, 8, 208, 0, 0, 0, 0, 0, 414, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> coinTypes = {93945600, 932, 521920, 11946456, 116, 14872176, 95571648, 97212920, 1, 694, 107184, 144918, 2986614, 534, 4986, 3131520, 4941280, 30373920, 64080, 34588960, 18, 792, 61766, 66387200, 74360880, 890, 2898360, 75357360, 6, 943, 181368, 603520, 747, 33193600, 47785824, 50162112, 4, 12540528, 69177920, 585620, 91121760};
    int value = 764573183;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 3, 0, 0, 7, 0, 5, 0, 0, 0, 3, 0, 598, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> coinTypes = {17014, 35372106, 61, 636682, 36, 87444, 1684386, 5053158, 20958240, 8041728, 48992976, 24496488, 30852, 31917060, 160140, 56292096, 78311886, 83832960, 47, 251304, 855, 475380, 72257760, 95751180, 942, 70744212, 940, 85619600, 26103962, 97985952, 347, 42809800, 873260, 709, 41916480, 9032220, 44225, 10479120, 296, 1};
    int value = 251498879;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 19, 0, 0, 0, 0, 0, 0, 0, 928, 0, 0, 0, 0, 0, 11, 0, 1, 0, 0, 1, 0, 46};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> coinTypes = {284888, 338845, 211172, 75718, 344640, 373305, 660822, 73784828, 309399, 79611840, 1, 401, 131, 262, 419727, 22806576, 30030426, 52859820, 70652224, 90091278, 550, 91226304, 479, 88846590, 83945400, 168844, 60951603, 453, 483, 615, 93175902, 718, 11403288, 45613152, 61791, 45355082, 90710164, 596, 723, 884};
    int value = 912263039;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 130, 0, 1, 805, 0, 1, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> coinTypes = {686080, 91036980, 87203844, 620, 266190, 934, 2839290, 22984038, 26472528, 42497280, 10115220, 213, 18318, 8824176, 21248640, 4, 51681280, 71352320, 189, 88263, 68142960, 45968076, 309, 932, 79417584, 490232, 192, 980464, 44548, 84994560, 2560, 104780, 74, 91936152, 824, 193270, 27129732, 49749, 137088, 59619820, 9043244, 403760, 1, 251, 50443470, 6460160};
    int value = 397087919;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 232, 0, 0, 0, 0, 0, 0, 0, 525, 4, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> coinTypes = {1880013, 42188778, 78753060, 242592, 468350, 519, 84377556, 740154, 1, 11280078, 93201650, 797, 456, 475, 140130, 51, 9819040, 45120312, 9843, 843, 89264, 74233152, 90240624, 22560156};
    int value = 992646863;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 0, 0, 0, 0, 0, 0, 0, 50, 1, 0, 0, 0, 0, 0, 192, 0, 1, 190, 0, 0, 0, 10, 1};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> coinTypes = {74480, 1013824, 8110592, 638976, 24331776, 408, 257115, 29110725, 16, 79872, 6944, 85, 101, 593, 666, 53025, 47284224, 72841440, 92712305, 60386040, 94568448, 314279, 59596810, 1, 182, 97327104, 98217930, 59670, 18542461, 150878, 656370, 51112880, 115218, 196588, 58221450, 23642112, 70513416, 93982800, 476, 915, 34680, 323, 152, 18796560, 192};
    int value = 378273791;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 36, 0, 0, 0, 0, 11, 7, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 3, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 415};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> coinTypes = {148, 571, 2279200, 18778, 27635226, 72934400, 36467200, 82, 32782, 294636, 65120, 4558400, 1, 74, 63936012, 82905678};
    int value = 802278399;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {439, 0, 1, 0, 0, 10, 1, 0, 0, 0, 34, 7, 73, 1, 0, 0};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> coinTypes = {17838144, 83347440, 97849140, 72716, 660, 196, 95904, 172920, 525532, 9716690, 36, 96086, 937, 68016830, 211, 449, 74100012, 31858, 79270950, 165846, 41673720, 959, 1, 108, 35676288, 71352576, 8919072};
    int value = 570820607;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0, 0, 0, 0, 92, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 887, 1, 7, 1};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> coinTypes = {62480, 780346, 37456608, 9364152, 4682076, 1, 18728304, 74913216, 973, 142};
    int value = 973871807;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 1, 1, 1, 972, 1, 12, 801, 0};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> coinTypes = {80598240, 40299120, 32310495, 74064416, 336, 475, 96096, 521, 83729520, 300200, 13433040, 412, 88528320, 31095, 90309219, 98402304, 28, 99, 1008, 402524, 2697552, 203, 371385, 24600576, 29509440, 37032208, 50469664, 25234832, 27076, 100032, 1, 45, 917, 160979, 10296, 452592, 4, 30103073, 10770165, 49201152, 50733800, 64620990};
    int value = 688816127;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 285, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 6, 11, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 6, 0, 0, 1, 0, 0};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> coinTypes = {857, 335087, 204820, 2457840, 48922702, 84541061, 7373520, 913, 88482240, 44241120, 252, 820787, 14747040, 97845404, 1, 220};
    int value = 442411199;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 11, 2, 0, 0, 1, 0, 4, 1, 0, 0, 2, 0, 219, 930};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> coinTypes = {360, 7776, 733, 1, 352573, 2766960, 5533920, 51280515, 83559801, 22135680, 622, 43920, 62674560, 18, 357730, 93036894, 585, 634, 53890, 358605, 424826, 11067840, 830, 88542720, 404352, 94082990};
    int value = 265628159;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {121, 0, 0, 17, 0, 1, 1, 0, 0, 3, 0, 62, 0, 19, 0, 0, 0, 0, 0, 0, 0, 1, 0, 2, 0, 0};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> coinTypes = {785, 15000, 19, 123200, 9893205, 23443680, 37380000, 70331040, 14877, 74760000, 79145640, 275, 102050, 28952000, 39572820, 30, 1, 293046, 5340000, 19786410, 57904000, 338, 4959};
    int value = 158291279;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 260, 0, 1, 0, 0, 0, 664, 0, 1, 0, 0, 0, 1, 0, 18, 0, 0, 1, 0, 0, 2};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> coinTypes = {22626648, 12738786, 55619190, 81893340, 84208896, 19079424, 85346337, 89171502, 90506592, 11123838, 28448779, 798, 161, 921, 52095, 38158848, 521, 42104448, 1, 45253296, 57973754, 69863222, 76317696, 21052224, 30393, 23112, 80352, 115, 838, 24, 454, 588, 84847, 119834, 127573, 9539712, 90346, 96, 661, 298116, 596232, 27297780, 61478, 63550403};
    int value = 992130047;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 587, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 1, 0, 0, 0, 1, 15, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> coinTypes = {1};
    int value = 14398711;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14398711};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> coinTypes = {10, 1};
    int value = 1;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> coinTypes = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864};
    int value = 939524095;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 13};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> coinTypes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    int value = 1000000000;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52631578, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> coinTypes = {147323, 544149, 649, 26, 3473340, 267243, 6946680, 587, 13893360, 17103552, 27786720, 60400539, 83360160, 68414208, 72482916, 1, 687, 4758};
    int value = 333440639;
    ChangeOptimizer* pObj = new ChangeOptimizer();
    clock_t start = clock();
    vector<int> result = pObj->fewestCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 182, 1, 0, 1, 0, 1, 0, 2, 0, 3, 0, 0, 25, 0, 729};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=5070&pm=2827
********************************************************************************
#line 2 "ChangeOptimizer.cpp" 
 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <ctype.h> 
#include <math.h> 
#include <iostream> 
#include <set> 
#include <sstream> 
#include <map> 
#include <complex> 
 
using namespace std; 
 
typedef vector<string> vs; 
typedef vector<int> vi; 
typedef long long ll; 
typedef long double ld; 
  
#define LS < 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); k++) 
#define SIZE(x) (int(x.size())) 
#define LET(k,val) typeof(val) k = (val) 
  
#define CLC(act,val) (*({act; static typeof(val) CLCR; CLCR = (val); &CLCR;})) 
  
#define FIRST(k,a,b,cond) CLC(LET(k, a); for(; k LS (b); k++) if(cond) break, k) 
#define EXISTS(k,a,b,cond) (FIRST(k,a,b,cond) LS (b)) 
#define FORALL(k,a,b,cond) (!EXISTS(k,a,b,!(cond))) 
  
#define FOLD0(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(; k LS (b); k++) {act;}, R##k) 
#define SUMTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k += (x)) 
#define PRODTO(k,a,b,init,x) FOLD0(k,a,b,init,R##k *= (x)) 
#define MAXTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k >?= (x)) 
#define MINTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k <?= (x)) 
#define SUM(k,a,b,x) SUMTO(k,a,b,(typeof(x)) (0), x) 
#define PROD(k,a,b,x) PRODTO(k,a,b,(typeof(x)) (1), x) 
  
#define FOLD1(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(k++; k LS (b); k++) act, R##k) 
#define MAX(k,a,b,x) FOLD1(k,a,b,x, R##k >?= (x)) 
#define MIN(k,a,b,x) FOLD1(k,a,b,x, R##k <?= (x)) 
  
 
ll cv[200], mc[200]; 
 
class ChangeOptimizer { 
  public: 
  vector <int> fewestCoins(vector <int> coinTypes, int value) { 
    vi cts = coinTypes; 
    sort(coinTypes.begin(), coinTypes.end()); 
    value++; 
    if(FORALL(k,0,SIZE(coinTypes), coinTypes[k] != value)) coinTypes.push_back(value); 
    int N = SIZE(coinTypes); 
    FOR(k,0,N) cv[k] = coinTypes[k]; 
    mc[0] = 0; 
    FOR(l,1,N) mc[l] =  
      MIN(m,0,l, (cv[l] % cv[m] == 0) ? mc[m] + (cv[l] / cv[m]) - 1 : 2000000000); 
//  FOR(l,0,N) printf("%Ld:%Ld ", cv[l], mc[l]); printf("\n"); 
    vector<int> res; 
    FOR(k,0,N) res.push_back(0); 
    int s = FIRST(k,0,N, cv[k] == value); 
    while(s) { 
      int s1 = s - 1; 
      while(s1 && (cv[s] % cv[s1] || mc[s] != mc[s1] + (cv[s] / cv[s1]) - 1)) s1--; 
//    printf("s1 = %d\n", s1); 
      res[s1] = cv[s] / cv[s1] - 1; 
      s = s1; 
      } 
    vector<int> res1; 
    FOR(k,0,N-1) res1.push_back(res[FIRST(l,0,N, cv[l] == cts[k])]); 
    return res1; 
    } 
   
  
  }; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/