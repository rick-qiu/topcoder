/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11741
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

class PairingPawns {
public:
    int savedPawnCount(vector<int> start);
};

int PairingPawns::savedPawnCount(vector<int> start) {
    int ret;
    return ret;
}


int test0() {
    vector<int> start = {0, 2};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
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
    vector<int> start = {10, 3};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> start = {0, 0, 0, 8};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> start = {0, 1, 1, 2};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
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
    vector<int> start = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123456};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> start = {0, 0, 0, 7, 0, 0, 7, 0, 0, 7, 0, 0, 7, 0, 0, 7, 0, 0, 8};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> start = {0, 0, 0, 7, 0, 0, 7, 0, 0, 7, 0, 0, 7, 0, 0, 7, 0, 0, 7};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> start = {0};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> start = {47};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> start = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1999998;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> start = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
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
    vector<int> start = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
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
    vector<int> start = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> start = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524288};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> start = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524287};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
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
    vector<int> start = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
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
    vector<int> start = {296172, 23166, 484266, 687650};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 514777;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> start = {326498, 573090, 43163, 237303, 308856, 936954, 287349, 333671, 380443, 816305, 136232, 641843, 537022};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 712834;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> start = {935806, 930822, 726198, 91596, 874671, 926003, 584880, 583333, 951900, 125157, 843631, 706680, 969893};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1696885;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> start = {628467, 764087, 996960, 189181, 290032, 661246, 371913, 786053, 69227, 748484, 934722, 481379, 226438};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1337076;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> start = {408610, 692840, 133581, 606047, 377552, 418390, 970948, 386835, 434282, 499504, 772163, 21519, 499425};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 922604;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> start = {104312, 205556, 385889, 515195, 524230, 805166, 698782, 462888, 867430, 910398};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 445588;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> start = {834584, 374313, 670825};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1189446;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> start = {90628, 745761, 174598, 344859, 199502, 691156, 750761, 643245, 374202, 20591, 178485, 274317, 625374};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 603051;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> start = {595437, 681024, 987140, 560231, 71792, 231829};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1264494;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> start = {619305, 859420, 298876, 481878, 962945, 304731, 366576, 963210, 619741, 615607, 410461, 592172};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1271241;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> start = {370011, 663212, 762762, 458496, 914591, 269474, 482930, 972100, 798919, 20788, 982460, 802120, 978784, 896382, 550700, 844141, 771965, 178721, 287008};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1035277;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> start = {23487, 827261, 753020, 725053, 884126, 526825, 227472, 568060, 720019, 555970, 405658, 943208, 222104};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 800526;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> start = {420184, 260533, 909871, 307463, 561129, 210216, 916947, 936018, 576308, 433888};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 882729;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> start = {472170, 503962, 680078, 46334, 586035, 384550, 894619, 358283, 931703, 379962, 537917, 352437};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 970463;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> start = {414916, 216937, 350163, 990649, 124295, 12533, 502296};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 750764;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> start = {143544, 742937, 588822, 51132, 18569, 678930, 551704, 539019, 87963, 81057, 344078, 76651, 892682, 655345, 453020, 816349};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 705043;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> start = {665901, 483893, 823767, 244403, 13778, 997276, 926260, 581622, 554753, 781922, 570864, 707929, 66155, 681048, 28483, 513813, 115033, 386375, 769387};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1200104;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> start = {25703, 525269, 581823, 719566, 496756, 529524, 901339, 711643, 769279, 581100, 285451, 882139, 180353, 229155, 116604, 627613, 377505, 171870};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 595931;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> start = {669675, 560739, 91551, 446108, 669164, 399005, 607221, 213327, 927559, 173339, 327036, 288732, 332767, 280493, 381870, 104675};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1098706;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> start = {479733, 731593, 346458, 550679, 404094, 881478, 480409, 442523, 477508, 199819, 284563, 391653, 802012};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1067665;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> start = {129695, 344160, 175962, 256509, 297311, 792405, 468074, 848459, 176097};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 435803;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> start = {639871, 278691, 310078, 786778, 777235, 416673, 581410, 832767, 402632, 952157};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1035704;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> start = {377631, 783115, 555323, 679812, 124445, 339174, 192583, 153299, 716775};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1018379;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> start = {846358, 465074, 919870, 265206, 710677, 736564, 181904, 293138, 847844, 413971, 821, 669847, 304173, 3882, 136508, 579580, 365473, 586875};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1419139;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> start = {514815, 77494, 971997, 800270, 779312, 199340, 38552, 338413, 242151, 581449, 961285, 264528, 922495, 91620};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 958163;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> start = {539824, 706411, 532646, 217935, 244537, 414565, 774413, 574258, 348731};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1099620;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> start = {838210, 509291, 227539, 416539, 802745, 252432, 274816, 946024, 456107, 55436, 942099, 827606, 999663, 813063, 816048};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1275159;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> start = {803045, 626042, 801560, 491300, 6743, 367226, 184079, 747639, 232039, 789334, 321098, 302152, 543591, 41240, 535224, 304246, 223321, 421076, 129852, 128707};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1401579;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> start = {776229, 271206, 852186, 487211, 369999, 209936, 518235, 773140, 538277, 226707, 759121, 207552, 330575, 838177, 304929, 650151, 79921};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1233213;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> start = {725827, 870860, 283813};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1232210;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> start = {171281, 194433};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 268497;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> start = {844814, 545853, 937420, 185729, 396950, 986527, 529001, 120770, 793719, 870887, 514368};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1445462;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> start = {111390, 593097, 152175, 781919, 886101, 249006, 455193, 597895, 731502, 390868, 54193, 620412, 642823, 386547, 133072, 715807, 91317, 451484, 461303};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 622885;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> start = {16486, 885946, 587769};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 606401;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> start = {864829, 99999, 666570};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1081471;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> start = {783978, 868842, 504466, 390541, 29485, 917708, 599039, 86954, 703341, 72310, 628731, 711403, 673179, 693511, 262066, 285459};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1438017;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> start = {509556, 210186, 817277, 768305, 812004, 208690};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 972278;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> start = {441067, 908974, 684086, 692685, 780154, 548427, 147564, 371123, 213025};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1225096;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> start = {47135, 797542, 30905, 540146, 100368, 310079, 150378, 684789, 643288, 162806, 458893, 191799, 969485, 110973, 496563, 984099, 647640, 234895, 449146};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 548509;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> start = {298485, 504433, 622026};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 706208;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> start = {630763, 357931, 359398, 360280, 717663};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 989466;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> start = {293367, 60639, 60116, 60689, 61348, 60296, 60583, 60296, 60530, 121732};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 353912;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> start = {589110, 221135, 220185, 220443, 219518, 218538, 220338, 440048};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 809708;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> start = {595544, 40478, 39855, 40020, 39560, 40156, 39302, 40343, 39549, 40060, 39546, 39513, 39969, 39687, 39561, 79962};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 635715;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> start = {660788, 96621, 96733, 95541, 95712, 97110, 96699, 95592, 97548, 95442, 96068, 95815, 193108};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 757254;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> start = {742366, 64522, 65092, 63906, 64071, 66162, 64154, 64271, 64244, 64264, 64354, 64144, 129396};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 806966;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> start = {643107, 22729, 22706, 22638, 23083, 22442, 22828, 22803, 23365, 22318, 22939, 22447, 22817, 23406, 22292, 23127, 45794};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 665836;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> start = {625313, 97013, 97622, 98339, 97995, 97924, 97635, 98260, 97695, 195058};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 722757;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> start = {456451, 133971, 135547, 133939, 134792, 135502, 134590, 135549, 267902};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 590933;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> start = {501761, 171672, 172733, 174315, 172861, 172146, 347016};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 674175;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> start = {486479, 125863, 125148, 124352, 125547, 126000, 123202, 250146};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 611904;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> start = {132644, 115472, 113462, 116034, 228904};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 247556;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> start = {106540, 277819};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 245449;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> start = {641023, 234613, 235639, 234274, 235315, 235923, 234933, 470510};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 875949;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> start = {270491, 156475, 310160};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 426268;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> start = {309181, 132916, 267757};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 442578;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> start = {63894, 2806, 2896, 3263, 2842, 2850, 2874, 2944, 3004, 3055, 3061, 2876, 2931, 2919, 2967, 3031, 2845, 3021, 5930};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 66786;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> start = {287718, 34002, 32959, 33426, 33144, 33100, 33186, 33209, 33162, 33311, 32939, 33198, 33140, 33009, 66382};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 321280;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> start = {382391, 450678, 450366, 897750};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 832540;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> start = {403096, 39170, 38626, 38240, 39625, 37828, 38966, 38782, 38402, 38361, 38307, 38521, 38572, 38281, 77718};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 441987;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> start = {229978, 22876, 21694, 22706, 22168, 23018, 22520, 45001};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 252486;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> start = {599167, 37834, 36853, 37349, 37749, 37780, 36458, 37612, 37408, 37390, 37117, 37389, 36563, 37410, 37067, 37400, 36981, 74782};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 636661;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> start = {616881, 49093, 49837, 50352, 50003, 49224, 50651, 49732, 49963, 50295, 49814, 50237, 49626, 49699, 99882};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 666414;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> start = {262318, 605651};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 565143;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> start = {844456, 119182, 118188, 118044, 117017, 117107, 235358};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 963000;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> start = {788187, 122603, 123364, 122395, 123463, 122657, 123481, 123080, 121917, 124048, 123433, 124041, 122580, 246990};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 911029;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> start = {646118, 317398, 319261, 319634, 318605, 637304};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 964415;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> start = {807428, 115142, 117032, 114721, 116532, 114501, 116178, 116546, 114439, 116121, 115611, 115756, 115490, 115199, 232074};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 923084;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> start = {734477, 95016, 95689, 94142, 94789, 94818, 191144};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 829549;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> start = {562247, 114189, 113560, 112649, 114277, 114491, 113899, 111770, 113385, 228582};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 676075;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> start = {526893, 179756, 178057, 179368, 179269, 359150};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 706134;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> start = {645573, 242294, 240675, 243116, 242589, 483294};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 887543;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> start = {467694, 334537, 337157, 332816, 668896};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 802659;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> start = {109688, 5736, 5369, 5702, 5333, 5972, 5538, 5743, 5359, 5627, 5423, 5506, 5688, 5729, 5388, 5518, 5586, 11220};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 115305;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> start = {362174, 85593, 83540, 84308, 84278, 84574, 85784, 84682, 169148};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 446967;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> start = {13362, 12283, 12891, 13096, 25582};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 25962;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> start = {322388, 110268, 109760, 110708, 110177, 111237, 109559, 221366};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 432604;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> start = {48348, 25665, 25058, 51535};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 73886;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> start = {221969, 36085, 36869, 37218, 36723, 36283, 36430, 36928, 36861, 37185, 36962, 72785};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 258456;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> start = {5676, 1011, 960, 962, 1138, 935, 1051, 1015, 885, 1151, 903, 958, 1106, 1916};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 6674;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> start = {632880, 106605, 106958, 106698, 107961, 106866, 106745, 107165, 105430, 108400, 213966};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 739683;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> start = {295504, 34564, 35139, 33814, 34033, 34380, 34655, 34556, 34460, 34479, 34489, 34929, 34661, 34607, 34560, 35296, 68760};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 330080;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> start = {753955, 40118, 39273, 39795, 39665, 40132, 39822, 40428, 39275, 39606, 40391, 40139, 39463, 39386, 39858, 39895, 40569, 38296, 79764};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 793787;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> start = {221909, 20492, 21750, 20324, 20781, 21270, 20520, 20989, 20788, 20865, 21107, 20924, 20631, 20831, 20817, 20693, 20769, 20647, 20658, 41544};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 242744;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> start = {108876, 3888, 4050, 4445, 3986, 4211, 4061, 4055, 4116, 4074, 4069, 4139, 4098, 4103, 3911, 4272, 3983, 4035, 8304};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 112896;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> start = {430234, 18752, 18351, 18448, 18654, 19080, 18444, 18390, 19025, 18450, 18298, 18220, 18811, 18883, 18832, 17710, 18488, 18309, 36487};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 448844;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> start = {72418, 919411};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 532123;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> start = {164202, 7538, 7395, 7990, 7515, 7795, 7435, 7240, 7728, 7360, 7582, 7870, 7234, 15634};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 171763;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> start = {677913, 131801, 129722, 129161, 129954, 130959, 130634, 130476, 261063};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 808683;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> start = {578114, 133960, 133679, 133308, 132755, 267570};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 711836;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> start = {678514, 101497, 101912, 99862, 101007, 100437, 99865, 101139, 100698, 100143, 102749, 100528, 100698, 100702, 202672};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 779813;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> start = {351016, 1000000};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 851016;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> start = {54182, 2586, 2567, 2411, 2465, 2633, 2488, 2431, 2540, 2558, 2452, 2324, 2426, 5116};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 56732;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> start = {899687, 66754, 66493, 66411, 66987, 65762, 66490, 67793, 66094, 66822, 66779, 67020, 66534, 65763, 67600, 66583, 66170, 66618, 133452};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 966318;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> start = {51117, 12379, 12470, 12632, 12012, 12434, 12467, 24178};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 63526;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> start = {316755, 87459, 88438, 86393, 86466, 88042, 86947, 175098};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 404275;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> start = {884302, 60715, 59575, 60135, 60240, 61322, 60478, 60358, 121100};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 944641;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> start = {746433, 61232, 61874, 60872, 60071, 61941, 60744, 61716, 60131, 60882, 62105, 61063, 60876, 61226, 62345, 61066, 60477, 61485, 60930, 122404};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 807722;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> start = {35216, 14560, 14684, 14826, 14479, 15051, 29280};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 49853;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> start = {19753, 1128, 1060, 1174, 1040, 1147, 1076, 1100, 929, 1192, 1043, 1043, 1042, 1085, 1029, 1036, 1167, 1050, 2116};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 20863;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> start = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 3921;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> start = {0, 1, 1, 2, 32, 11, 21, 1, 0, 99, 87};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
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
    vector<int> start = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 3921;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> start = {0, 2};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> start = {0, 0, 4};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> start = {100};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> start = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1999938;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> start = {0, 0, 0, 8};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> start = {0, 2, 0, 0};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> start = {1};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> start = {1, 1, 2};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
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
    vector<int> start = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190};
    PairingPawns* pObj = new PairingPawns();
    clock_t start = clock();
    int result = pObj->savedPawnCount(start);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23042079&rd=14722&pm=11741
********************************************************************************
#include<iostream> 
#include<vector> 
#include<cstring> 
#include<algorithm> 
#include<string> 
#include<cmath> 
#include<math.h> 
using namespace std; 
   
class PairingPawns {  
        public:  
        int savedPawnCount(vector <int> a)  {  
           int n=a.size(); 
           int i; 
           for(i=n-1;i>=1;i--){ 
           a[i-1]+=a[i]/2; 
           } 
           if(a[0]<=0) 
           return 0; 
           else 
           return a[0]; 
            }  
        };

********************************************************************************
*******************************************************************************/