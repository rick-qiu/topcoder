/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10998
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

class Reflections {
public:
    long minimumMoves(vector<int> mirrorX, vector<int> mirrorY, vector<int> mirrorZ, vector<int> finalPosition);
};

long Reflections::minimumMoves(vector<int> mirrorX, vector<int> mirrorY, vector<int> mirrorZ, vector<int> finalPosition) {
    long ret;
    return ret;
}


int test0() {
    vector<int> mirrorX = {};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {901, -15761, 10634};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 27296;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> mirrorX = {};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {121239174, -169776576, 46727479};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 337743229;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> mirrorX = {};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {-942375608, 890878630, 592242030};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 2425496268;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> mirrorX = {5016132};
    vector<int> mirrorY = {-4998477};
    vector<int> mirrorZ = {4188859};
    vector<int> finalPosition = {4655104, -5038294, 2984952};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 12598717;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> mirrorX = {};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {-307, 569, -611};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 1487;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> mirrorX = {1054};
    vector<int> mirrorY = {2233};
    vector<int> mirrorZ = {-2108};
    vector<int> finalPosition = {739, 750, -25};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 1514;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> mirrorX = {67095, -48095};
    vector<int> mirrorY = {57891};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {32270, -8419, -70605};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 111294;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> mirrorX = {195288, -186050};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {357326, -21552};
    vector<int> finalPosition = {283253, 306317, -24830};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 431916;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> mirrorX = {-2};
    vector<int> mirrorY = {1, -7};
    vector<int> mirrorZ = {6};
    vector<int> finalPosition = {9, 10, -9};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> mirrorX = {-8242, 8023};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {-6322, -1688, 6576};
    vector<int> finalPosition = {-5509, 8054, -4570};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 14758;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> mirrorX = {107, 115, 117};
    vector<int> mirrorY = {63};
    vector<int> mirrorZ = {106, -57};
    vector<int> finalPosition = {18, -2, 61};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 67;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> mirrorX = {948092, 599817, -763116};
    vector<int> mirrorY = {194181, 775311};
    vector<int> mirrorZ = {406179};
    vector<int> finalPosition = {-334613, 286793, 695784};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 552758;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> mirrorX = {-374, -414};
    vector<int> mirrorY = {-687};
    vector<int> mirrorZ = {127, -419, -614, -606};
    vector<int> finalPosition = {-304, -413, -412};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 663;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> mirrorX = {-17923};
    vector<int> mirrorY = {56770, 78359};
    vector<int> mirrorZ = {29718, -64070, 62012, 23655};
    vector<int> finalPosition = {20500, 81719, 55298};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 56461;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> mirrorX = {31, -202};
    vector<int> mirrorY = {-46, 104};
    vector<int> mirrorZ = {187};
    vector<int> finalPosition = {173, 37, 53};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 202;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> mirrorX = {};
    vector<int> mirrorY = {-101401, -612272, 728897};
    vector<int> mirrorZ = {-469777};
    vector<int> finalPosition = {-575566, -705597, -560633};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 1270635;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> mirrorX = {};
    vector<int> mirrorY = {154076, -144605, -166845, 102954, -126829};
    vector<int> mirrorZ = {126291, 133711, -45877, 157277, 99200};
    vector<int> finalPosition = {64475, -149640, -116605};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 66705;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> mirrorX = {-2, 2, -1, 0, 3};
    vector<int> mirrorY = {0};
    vector<int> mirrorZ = {-3, 2, 0};
    vector<int> finalPosition = {3, -1, 2};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> mirrorX = {-7, -19, 2, 14, 0};
    vector<int> mirrorY = {18, -5, 7, -16, -2};
    vector<int> mirrorZ = {8, -12, 15, 18, 3, -5};
    vector<int> finalPosition = {-4, -5, -9};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> mirrorX = {100802};
    vector<int> mirrorY = {141864, -113919, -226397, 380663};
    vector<int> mirrorZ = {527228, -227156};
    vector<int> finalPosition = {-428995, -284419, -602675};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 609140;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> mirrorX = {-44562122, 24517038, 54752647, 23742263, 17507858, 66056969};
    vector<int> mirrorY = {-7861052, -35785800, 36055272, -67554524};
    vector<int> mirrorZ = {1825838, -22485423, 57793752, 68258651, -38486219};
    vector<int> finalPosition = {23373893, 7984493, 10770470};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 1655185;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> mirrorX = {-39554047, -23223485};
    vector<int> mirrorY = {-60401708, -66395364, -53135415};
    vector<int> mirrorZ = {15805586, 32151, 60072998, 16854175};
    vector<int> finalPosition = {59524429, 6561527, -18939979};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 44895987;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> mirrorX = {-2, 1, 2, 3, 0, -4, -1};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {1, 4, -5, 0};
    vector<int> finalPosition = {5, -3, -1};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> mirrorX = {1728306, 4024712, 2142456, 6808804};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {1891446, 8201482, 980096, 2092759, 3219719, -4016644};
    vector<int> finalPosition = {-607065, 5750496, 7324596};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 5984075;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> mirrorX = {1859561, -6817346, -4745054};
    vector<int> mirrorY = {-1799437, 2765497, 462434, 4673124, -4537069, -6503665};
    vector<int> mirrorZ = {-1749857, 5112334, -3117938, -5816557, -473714, 5238063};
    vector<int> finalPosition = {5290725, 559358, -5033224};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 1181109;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> mirrorX = {-115, -3, 123, 108, -187};
    vector<int> mirrorY = {-172, 101, 187, 75};
    vector<int> mirrorZ = {-177, -10, -156};
    vector<int> finalPosition = {-77, 23, -148};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 117;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> mirrorX = {2236893, 44767328, 6054769, -58145165, -47628964, 24023834};
    vector<int> mirrorY = {39776951, -52029567, 45404266, -58309345, 9145845, -9117872};
    vector<int> mirrorZ = {-21614662, 4388367, 30960510, 9702068};
    vector<int> finalPosition = {14015214, 55137379, -23862890};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 9806253;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> mirrorX = {5688, 7383, -13512};
    vector<int> mirrorY = {12096, 20692, 13413};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {13047, 18663, -9165};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 12310;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> mirrorX = {17, -7, -3, -19, 12};
    vector<int> mirrorY = {-4, 12, -5, -13, 8, -9};
    vector<int> mirrorZ = {16, -14, -3, -11, -2};
    vector<int> finalPosition = {-18, -13, -15};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> mirrorX = {31450};
    vector<int> mirrorY = {10969, -9094, -1691, 15177, 16211, -31056, 14994, -37820};
    vector<int> mirrorZ = {-29427, -26980, -28391, 41444, 48186, -36384};
    vector<int> finalPosition = {20910, 3223, -41725};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 21867;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> mirrorX = {-7};
    vector<int> mirrorY = {39, 27, -24, -31, -36, 7, -15, -40, 8, -22};
    vector<int> mirrorZ = {4, 37, 23, -4};
    vector<int> finalPosition = {-14, -24, 0};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
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
    vector<int> mirrorX = {602161, -234982, 562751, 432249};
    vector<int> mirrorY = {-867738, 181591, -683693};
    vector<int> mirrorZ = {-539720, -352233, 493077, 492693, 72632};
    vector<int> finalPosition = {-455545, -599727, 702362};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 337244;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> mirrorX = {-445208507, -872009877, 50590776, -724417868, -699219776, 805526643, -231565328, 834728622, -999409472};
    vector<int> mirrorY = {449176581, -215949346, 565763001, -762316968, -555086600, 310687873, -47298569};
    vector<int> mirrorZ = {-507493359, -860076529, 84718677, 866846412, -785232021};
    vector<int> finalPosition = {-318505119, -637396018, -800623906};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 59901825;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> mirrorX = {3157, 7654, -193, 7316, 1885, 8149, 2363, 2365, 4112, -6054, 1389};
    vector<int> mirrorY = {-1038};
    vector<int> mirrorZ = {-7573, 8092, -5780, 6307};
    vector<int> finalPosition = {-3689, 6857, 7928};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 7640;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> mirrorX = {-26, -16, -55, 20, -36, 37, 4, -17, 44, -8, 35};
    vector<int> mirrorY = {28, 41, -17, -1};
    vector<int> mirrorZ = {-29, -7, 21};
    vector<int> finalPosition = {30, -20, -11};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> mirrorX = {};
    vector<int> mirrorY = {698, -1085, -1951};
    vector<int> mirrorZ = {327, 881, 54, -1265, -964, -1383, 1815, -89, -1530, 111};
    vector<int> finalPosition = {355, 280, 1762};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 636;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> mirrorX = {110, -225, -3082, 2708, -445, 2910, -1051, 860};
    vector<int> mirrorY = {-734, -546, -2798, 1273, -1343, -680, 3121};
    vector<int> mirrorZ = {-3102, 1538};
    vector<int> finalPosition = {830, -1657, 1938};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 1187;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> mirrorX = {1968, -4747, -31395, 38695, 1611, -7218};
    vector<int> mirrorY = {31471, 32988};
    vector<int> mirrorZ = {-1179, -15455, -11649, -20013, 24666, 33142, 17167, -17157, 18253, 2375};
    vector<int> finalPosition = {5616, -36761, -27578};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 33779;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> mirrorX = {-60570140, 70077361, -78892330, 16994255, 46143860, -68751912, -85053385, -66351455, 45537618, 67876718};
    vector<int> mirrorY = {8776705, 41415087, -9878738, -75065093, -10341981, -10012744, -2838199};
    vector<int> mirrorZ = {-78664029, 9427062, 65787451, 65361523, -35101963};
    vector<int> finalPosition = {52996198, 25667872, -64403938};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 3986013;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> mirrorX = {23407, 6351, -20387, 16933, 13162, 7415, 27418};
    vector<int> mirrorY = {-5092};
    vector<int> mirrorZ = {-16781, 11224, -26701, -29730, 21695, 24160, -23584, -12075, 27586, 6622, 6421, 16605};
    vector<int> finalPosition = {11932, -10855, 25873};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 765;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> mirrorX = {-456995624, -443433312, -197325803, 998136312, -752856457, 233942366, 90632142, -79250744, 912684857, -812190318};
    vector<int> mirrorY = {-696062088, 460922177};
    vector<int> mirrorZ = {366261847};
    vector<int> finalPosition = {-977475098, -981409916, -933077988};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 1343899335;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> mirrorX = {46025325, -18840482, -78211604, 17363807, 31040546, -38735129, -24579799, -18477338, 42735938, -61657423, -54422081, 16067343};
    vector<int> mirrorY = {-2763400, -2765955, 65918205, 31576997, 14200719, 27067855, -66055997, -57075662, 77940724, -54080182};
    vector<int> mirrorZ = {-42811093};
    vector<int> finalPosition = {-18624235, -91403563, 48908095};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 48939216;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> mirrorX = {-225936, -334334, 68691, -448183, -509087, -612278, 639314, 349352};
    vector<int> mirrorY = {-562522, -232874, -334841, 376231, -630854, 593560, -200045};
    vector<int> mirrorZ = {377056, 106635, 670861, -483219, -173316, 585962, 350769, -241431, -537714, -142659, 237375, -499915, -270926, -503109};
    vector<int> finalPosition = {-214677, 535027, 463959};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 5780;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> mirrorX = {149851384, 12390128, 223387626, -53016899};
    vector<int> mirrorY = {-163897982, -441522449, -171818125, 167390381, 374290098, 272624572, -69911466, 211622511, -460702856, 324384788, 386724054, -207962609, 206504072};
    vector<int> mirrorZ = {-473446269, -74233017, 359388164, 222385910, 116345522, 444589879, -10171844};
    vector<int> finalPosition = {8768621, -123960885, 479726023};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 9906228;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> mirrorX = {118561420, 93447014, 235687060, -238476350, -217655277, 178515694, -68500633, 249812037, -41023939, -206725131, -8502951, 93490598};
    vector<int> mirrorY = {-162112500, -62360156};
    vector<int> mirrorZ = {237166148, 129379636, 177132750, -3211844, -56400714, -119354021, 123752200, 145568475, -242390828, 194101368};
    vector<int> finalPosition = {-76560735, 80796249, -124335057};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 80817042;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> mirrorX = {-211625516, 569208506, 261460326, 491199440, -646005318, -199642760, -296096768, -222442353, -222052159, -489026404, -545179480, 296884515};
    vector<int> mirrorY = {-371543891};
    vector<int> mirrorZ = {-24102962, 254761476, 39821380, -375802036, 137784419, -30836171, -36585412, -105795738, 371357695, -141476863};
    vector<int> finalPosition = {214430319, -356058819, -162027415};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 356176902;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> mirrorX = {436945268, 173640221, 773978092, 282275459, 426506103, -344656784, -368426327, -290882619, -375958171, 821676747, 505089068, 12093717, -743870196};
    vector<int> mirrorY = {-444674761, 329740967, -411169456, -625807738, -862363124, 343007125};
    vector<int> mirrorZ = {84063891, -48314508, -853310047, -310843000};
    vector<int> finalPosition = {-14201650, -297812463, -697325041};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 100525395;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> mirrorX = {-1, -3, -2, 9, 1, -8};
    vector<int> mirrorY = {-4, 0};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {-11, 11, -6};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> mirrorX = {-84664, 53173};
    vector<int> mirrorY = {95214, 75985};
    vector<int> mirrorZ = {43936, 45936, -57126, 56204, -19459, -15795, -3279, -23105};
    vector<int> finalPosition = {-9405, 54381, -45860};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 25481;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> mirrorX = {-5366698, 631209};
    vector<int> mirrorY = {5463242, 736482, -5456274, -1343942};
    vector<int> mirrorZ = {-5131022, -3355094, -6357969, 4477612, -2739196, 4614115, 5086584, 675457, 4688522, 2666984, -3225724, 5908486, 1083933, -823104};
    vector<int> finalPosition = {3108094, 1274329, 5463060};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 1891166;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> mirrorX = {1655, 2240, 1859, 2995, 2616, 3367, -673, -1294, -27, -2637, -2800, 1952, 2628, 1917};
    vector<int> mirrorY = {-2521, -580, -2383, 2970, 1864, -416};
    vector<int> mirrorZ = {-3435, 1172, 175, 574, -2120, 845, -2246, 557, -45, -367, -2079, -2617};
    vector<int> finalPosition = {-1342, 2743, 590};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 45;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> mirrorX = {-197, 107, -45, -177, -132, 66, -118, 92, 178, 14, 137, -167, 73, -36};
    vector<int> mirrorY = {-188, -175};
    vector<int> mirrorZ = {68, 210, 186};
    vector<int> finalPosition = {-40, -8, -71};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 35;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> mirrorX = {17974, 9168, -34406, -36237};
    vector<int> mirrorY = {-22745, -9006};
    vector<int> mirrorZ = {8048, -24436, 19372, -1992, 31631, 31778, 8879, -24471, 24717, 22489, 24371, -15509, -3788, -26841};
    vector<int> finalPosition = {36669, -4281, 9260};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 5010;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> mirrorX = {290231854, 152212789, -598673411, -73974258, 168173373, 273074467, 615334860, -233212797, 856815741, -650975555, -204516607, 905786938, 709280815, -304450268};
    vector<int> mirrorY = {36207018};
    vector<int> mirrorZ = {-65578330, 461703569, 705717067, -827911944, 5742846, 173688629, 778537319, 390241028, -388452036, -375253831, -504280823, 359200762, 262415506, 870667868, 762301216};
    vector<int> finalPosition = {117308333, -432062284, 657976618};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 432067165;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> mirrorX = {601477, -71845, 45421, -650946, 653147, 376655, 426591, 24427, 267629, -38090, 23973, -307609, -117098, 606341};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {-364810, -529694, -106911, -68208, 377545, 629725, 488964, -423936};
    vector<int> finalPosition = {-375596, 78428, -589587};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 80804;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> mirrorX = {539, 2180, 2417, 1383, -404, 2526, -2938, 2756, -984, -2341, 1866, -3991, 854, 3080, -260, -2731, 2819};
    vector<int> mirrorY = {-1732, 2635, -3089};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {1148, 98, 308};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 410;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> mirrorX = {-206, 216};
    vector<int> mirrorY = {-152, -486, 604, -240, -451, 536, 570, -694, -385, -33, 394};
    vector<int> mirrorZ = {88, -366, -254, -708, -354};
    vector<int> finalPosition = {-579, 237, -68};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 194;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> mirrorX = {-602, 697, 475, 573, 262, 600, -873, -718, 230, -35, -447, -529, 362};
    vector<int> mirrorY = {-499, 237, 810, -487, 28, 868, -13, -311};
    vector<int> mirrorZ = {256, 152, 501, 247, 930, -311, -180, -417, 417, 465, -870, 27, -40, 843, 495};
    vector<int> finalPosition = {387, -234, 797};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> mirrorX = {397827018, 680470956, -211832082, -637570972, -122617322, 711682775, -298414015, -713852604, 473104422, 192690396, -746075750};
    vector<int> mirrorY = {-562734863, 355619103, 308743875, -655252082, 619942288, -61601615, 240115609, -802502602, 5520790, -798789658, -539553019, 251419627};
    vector<int> mirrorZ = {-201162317, 527719640, 575419965, -404131191, 482991716, 377399746, -24134089, 331424517, -536327395};
    vector<int> finalPosition = {-124001764, -26301937, -209590343};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 219321;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> mirrorX = {63388461, 14951852, 71131129, -53935159, 43817051, 80755499, -88770932, -53609530, -60050780, -71244412, 88869136, -18323696, -46290048, 65212026, 44465466, 18310597};
    vector<int> mirrorY = {43593834, 34057388, -83516030, 48977277, -22994400, -20701910, 13208153, 33125149, -8705586, -83066595, -33971444, -39047641, -49961138, -59213741};
    vector<int> mirrorZ = {75501943, 80893455, -13560712, 72120160, -76016286, 82086581, -12738027, -89277232, -84351063, -26864158, 32672839, -26276345, 93917172, 10415557, 37541492, -2299981};
    vector<int> finalPosition = {-12686338, -2598401, -44640858};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 1182;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> mirrorX = {-16, 1, 8, 3, -55, 37, -29, 13, -17, 57, -4, 18, 26};
    vector<int> mirrorY = {-12, 25, -17, 50, -54, -36, -40, -7, 54, 12};
    vector<int> mirrorZ = {12, -51, 54, -5, 11, -29, 44, 6, -45, 8, -18, -47};
    vector<int> finalPosition = {44, 4, -59};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> mirrorX = {3355987, -6226935, 830384, -5491263, 4710268, -1087239, -527866, 5151989, -5614475, 3257324, -1071537, 2844944, 124266, 5641285, 4294388, 4562950, 592292, 1901391};
    vector<int> mirrorY = {111602, 3817428, -2959010, -6376832, -2051525, -3465091, -792145, 3402579, 4589216, 2474249, 5942476, -4221294, -2028908, 3133114, 75548, -1330447, 2123593, 5834586};
    vector<int> mirrorZ = {-5757668, -4835456, 2032979, 5893881, -4603457, -3951903, 1908351};
    vector<int> finalPosition = {-2478774, -2327501, -5334183};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 11966;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> mirrorX = {325133, 47683, 72762, 275719, 386728, 478731, 562680, -397569, 703766, 459627, 33876};
    vector<int> mirrorY = {-511109, -51469, 445750, 122526, 164143, -251148};
    vector<int> mirrorZ = {-259544, 482865, -439128, 588391, 411493, -613144, -243361};
    vector<int> finalPosition = {-308422, 157249, -118768};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 9422;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> mirrorX = {};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {1000000000, -1000000000, 1000000000};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 3000000000;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> mirrorX = {-206, -59, 134, -372, -143, -377, 171, -290, -24, 398, -353, -126, -348, 152, 119, -268, -197, 100, -122, 205};
    vector<int> mirrorY = {-275, -37, 277, -76, -297, -61, 370, -334, -198, -96, 194, 230, -123, -220, 346, -380, 217, -182, -131, 24};
    vector<int> mirrorZ = {365, 379, -350, 321, 299, 20, -281, -68, -129, 238, -149, 87, -252, -370, -178, 51, 40, -77, -325, -326};
    vector<int> finalPosition = {-2, 390, -215};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> mirrorX = {-25472, 34197, 43786, -28204, 112485, -77026, -168540, 116995, -176423, -72589, 84084, -105570, -55983, 153431, -230257, 221938, -97205, 170514, 203529, -74364};
    vector<int> mirrorY = {127237, -141325, 137953, 50858, -39098, -199741, 123503, -93974, 163328, 113437, 219657, 155629, 107294, 27702, -173055, 122831, 175264, 204665, 66068, -204603};
    vector<int> mirrorZ = {-131307, -227185, -52570, 75359, 16731, 86144, 415, 143325, -70648, 14878, -160305, 207943, 223981, -192016, 30597, 221019, 164149, -222489, -128008, 136490};
    vector<int> finalPosition = {166851, -135630, 219591};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> mirrorX = {64, 34, -56, 22, -15, 17, -8, -50, -3, 14, -37, -21, 66, 54, 12, -5, -51, -67, 61, -19};
    vector<int> mirrorY = {-5, 58, -15, -17, 47, 44, -43, 30, -34, 24, -53, -49, -33, 5, -56, -45, 37, 29, 64, -66};
    vector<int> mirrorZ = {-11, -25, -59, 20, -38, 0, 62, 56, 61, 36, 16, 52, -2, -22, 5, 64, 24, 28, -48, -14};
    vector<int> finalPosition = {23, -64, -46};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> mirrorX = {54, -9, 33, -21, 40, 87, -68, -3, 59, -19, -57, 53, 63, 31, -32, 90, -42, 57, -38, -37};
    vector<int> mirrorY = {-3, -77, -46, 89, 61, 7, 45, -24, 13, 70, 85, 39, -52, -36, -51, -48, -28, -73, -18, -55};
    vector<int> mirrorZ = {8, 48, -78, 30, -25, -47, -37, -16, 37, -36, -5, -87, -28, -83, 53, -26, 7, -11, 82, 50};
    vector<int> finalPosition = {14, -5, -61};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> mirrorX = {447262649, -707013703, -757325102, 621362772, -369506504, 237910819, -747104492, -797015958, -79702000, -216552292, -360732765, -720886334, -576633445, -797649853, -989001059, -377134862, 895068188, 924884114, -159442374, 321684608};
    vector<int> mirrorY = {-61780364, 485705698, -659466384, -678615035, 12077494, 240088120, 465367799, -16491021, -762840929, -686729600, -135075286, -814600071, 185206331, 789312806, -198128471, -294596542, 841751138, -626742215, 446024991, 864081731};
    vector<int> mirrorZ = {163703734, -628449286, -734166037, 93111580, -709969993, 313274637, -883687531, -803891035, -166815286, 762734874, -978609449, 23516591, 722286999, 245069204, 883691842, 753833251, -947104804, -752721821, 185393808, -859507208};
    vector<int> finalPosition = {-684932077, 724892793, -161054802};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 52;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> mirrorX = {501678793, -135469857, -104239864, -339018620, 507979227, -10537916, -89042004, 279323220, -448402822, -107889059, 201526633, 262198314, -152423257, -391136416, -325926766, 154253394, -529481335, -97823265, 513489636, 145340091};
    vector<int> mirrorY = {376624194, -10432646, -498328473, -507739493, 486286609, 421905752, -467440639, 164874069, 247069418, 99884686, 448187250, -149526684, 275443668, -321467957, 360920569, 425319170, 416450631, -304672637, 258418403, 348199622};
    vector<int> mirrorZ = {-190769283, 122022110, 268615362, 36182463, -524780029, -106410850, -439767397, -137307391, 57223818, 45955668, 430191356, -455753227, -263302359, -208245617, 491203150, 30188081, 387711852, 10349259, 465538518, 491251002};
    vector<int> finalPosition = {-251136291, 205391403, -405707791};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 60;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> mirrorX = {-821373451, 319399321, 553090180, 495979885, 87004877, 802254369, -900307795, 131719575, -799601760, -424297554, -449796294, 384086615, 21759615, -397664041, 523879181, 936067614, -613471720, 953449139, 501874572, 807790685};
    vector<int> mirrorY = {163086474, 352244804, -36242432, 81947991, -290728320, 591455149, 303639434, -542864265, 117436157, -399140735, -895681330, -461623159, -264636616, -722243250, -656650681, -446082523, -71252351, 756962325, -463347124, -328746873};
    vector<int> mirrorZ = {-785107996, 942313985, 10539644, -276222190, 572373147, 467878129, 617861348, -294823195, -733463730, 419849549, -570685440, 92263524, -996969055, -822223175, -861691695, -811590295, 769967708, -402985677, 389660704, -357241320};
    vector<int> finalPosition = {644262424, 756008335, -573048523};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 65;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> mirrorX = {-4, 2, -2, 3, -3, 5, 0, -5, 1, 6, 4, -1, -6};
    vector<int> mirrorY = {6, -6, 3, 1, 4, -5, -4, 0, -1, -2, 2, 5, -3};
    vector<int> mirrorZ = {-4, 4, 5, -6, 2, -5, -2, 3, 6, 1, -1, 0, -3};
    vector<int> finalPosition = {-1, 6, -1};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> mirrorX = {0, 1, -1, -2, 2};
    vector<int> mirrorY = {2, 1, 0, -2, -1};
    vector<int> mirrorZ = {2, 0, -1, 1, -2};
    vector<int> finalPosition = {-2, 2, 1};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> mirrorX = {846780052, -428764424, -481602613, 892666455, -823713222, 78653230, -312726090, -612213844, 708860654, -750594874, -102713584, -437584820, 54957059, 578411162, 866355630, 74749637, 366719028, 588049770, 896721916, -417420803};
    vector<int> mirrorY = {-155869973, -698616213, -331558646, 746799461, 748055676, 502768745, 45346295, 200073580, -25455940, 437309820, 627307578, -170796709, 581748948, -721193639, 554565595, -775045675, -392480440, -182356624, -668655316, 527293755};
    vector<int> mirrorZ = {524081193, 45586662, 50338124, 824986749, -434778572, 133349922, -468190545, 331958440, 753708389, 635013622, -317209619, -625601483, 241790858, -704587641, -769310304, -764146698, 747711451, 180869900, 68431072, 8167934};
    vector<int> finalPosition = {499370087, 753344868, 139081675};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 56;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> mirrorX = {-561720425, 132339570, 461291508, 744934453, -787433296, -74740736, 525909693, 934997330, -658199612, -778344911, -159075450, 642861132, 643333499, 713306417, 797658620, 131806308, 523517378, 218968499, 6162552, 362906552};
    vector<int> mirrorY = {-645766854, -953772644, 426946703, 150787910, -592464645, 610073694, -385475084, 986430599, -223508334, -147590554, 178466314, -182336714, 132267416, 26177964, 673820170, 333772528, 25401703, -535627151, -940392036, -253563165};
    vector<int> mirrorZ = {-413084360, -94949060, -908682902, -699320767, -577146248, 896010789, -556717217, 17642914, -321703142, 929278571, -414587880, 538737231, -159922006, -284841778, 723599960, -665633974, -931738587, 970744279, 310364559, -741431111};
    vector<int> finalPosition = {305498172, -82187409, -489835884};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> mirrorX = {87, 75, -72, -18, -57, 7, -33, 77, -67, -28, 22, 89, 8, -60, 16, -56, -27, -23, -14, 81};
    vector<int> mirrorY = {-17, 51, 30, 53, 83, 58, 17, -91, -6, 6, -86, 66, 12, -52, 33, 85, -78, 76, 31, 18};
    vector<int> mirrorZ = {21, -7, -78, -88, 6, -50, -42, -34, -89, -60, -28, 57, -4, 15, 51, -12, 18, 88, 29, 75};
    vector<int> finalPosition = {-88, -84, -40};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> mirrorX = {77691416, -56621108, 93352240, -38497912, 5621186, 75442433, 12778751, -49213421, 31660578, 63367753, 92256846, -2455690, -25931904, -45087118, 69164174, 17753074, 37412348, 39032591, 83786704, 42109917};
    vector<int> mirrorY = {-68113223, -78871539, 63515745, -30879205, -54965018, -14776688, 45657282, -55174404, -30036594, 23303023, 4157162, 94305868, 38808636, 7286194, -4195492, 91897621, 70772019, -70170864, -81264604, -58356471};
    vector<int> mirrorZ = {55652306, -57143669, -33996532, 35850068, 23674413, 22393472, 30103309, 58294194, 59470285, -74253931, -1563604, -56308883, 3391500, -48824979, -64459428, 76987414, -94149163, -62609039, 3254531, 51603934};
    vector<int> finalPosition = {-14408681, -71757195, -40952053};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 35;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> mirrorX = {-583, 604, -127, -183, 414, 388, 1, -69, -626, 307, 387, -396, -417, 68, -243, 570, -56, -155, 175, -610};
    vector<int> mirrorY = {127, -239, -504, -225, -461, -552, 190, 91, 149, 608, 388, 17, -450, 240, 544, 640, -136, -139, 207, 396};
    vector<int> mirrorZ = {-268, -162, -353, 234, 391, -465, -259, 81, -524, -224, -397, 485, 275, -326, -21, -66, -567, 166, -232, 75};
    vector<int> finalPosition = {408, 62, -464};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> mirrorX = {554324286, 220739823, -879704406, 108928370, 693742367, 185526030, 468343903, -937574625, -267033562, 346567009, 393528571, -190722660, -498749293, 538635343, 659320897, -373912176, -79456660, -15646545, -84181021, -503910120};
    vector<int> mirrorY = {497221607, -481950714, -340425222, 502128821, 372838129, -510237009, -934184748, -128735807, -882707598, 812673137, -89637426, 194125477, -787156652, -747939882, -303106958, -500525807, -724493158, 494844290, -413956327, -396561931};
    vector<int> mirrorZ = {-675738598, 423986980, -813197019, 930303540, -25934370, 39664994, -550619310, 470680583, 403070241, -59451585, -128023821, -967614079, 402994931, -354534889, -937410922, -521185719, -668741885, -769340441, -741176238, -75094124};
    vector<int> finalPosition = {-489572252, -793143284, -328032650};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 54;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> mirrorX = {-100859022, -830626915, 813953478, -151046343, -300594477, -866751582, 20786206, -173661890, -778260230, -200552737, -868372481, -933729179, -152018178, -816233904, -300770287, 109485270, -749716530, 933949831, 99370055, 727426481};
    vector<int> mirrorY = {44981595, 203718305, 291022679, -220971266, 106875658, 583380811, -164798678, -685066866, -958888477, -29602590, 809132807, -74202275, -958587368, -811538922, -951566503, -913071488, 575552494, 308043378, 152190116, -802771718};
    vector<int> mirrorZ = {119048413, -720142773, -573743583, -725866030, 906838297, 453800732, -692714038, 595940543, 841167597, -895117246, -965572716, 264566384, -177925567, 229495120, -19497539, 357824373, 773472826, -566104048, 54382651, -886310963};
    vector<int> finalPosition = {-416852224, -951042025, -302808748};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 55;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> mirrorX = {-3086, 5514, -33408, -56125, -38071, -9899, 44481, -74047, 64482, 53282, -63091, -8596, 75751, -64812, -70210, 64348, -57407, 12080, 65795, 9502};
    vector<int> mirrorY = {34213, -61347, -67106, -6436, 33190, 45339, 56858, -49803, 54110, 64890, -40708, -2317, 18687, -46704, -57421, 16575, 27075, 38922, 50317, 48480};
    vector<int> mirrorZ = {50183, -66368, 64711, 20433, 31856, 16554, -42559, 12610, -26677, -76806, -29003, 25866, -13123, 70975, -56013, 28959, 6205, 15883, -54842, 4222};
    vector<int> finalPosition = {31217, 74753, -69104};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> mirrorX = {3013, -834, -1877, -6955, -3904, 4978, 3369, -1207, 6297, -1211, 50, -348, -4941, 1024, -5060, 3883, -3891, 3041, -5157, -4792};
    vector<int> mirrorY = {552, 2479, -4608, 7359, -897, -1110, 4339, -5703, 7022, -6969, -184, -7198, 2257, -1095, 1613, 2552, 3182, -4531, 4046, -1068};
    vector<int> mirrorZ = {-2597, 1653, -3526, 2785, -1927, -2966, -5009, -2186, -7018, 3317, 2852, -209, 7213, -5418, -5631, -5584, 251, 3594, -2418, 6250};
    vector<int> finalPosition = {444, 1909, 2879};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> mirrorX = {-212957, 47891, 84941, -339238, 21505, 107494, 301877, -246919, -44076, 143737, -60663, -330793, 3826, 150241, -42827, 232224, -180224, 324272, -4724, 226161};
    vector<int> mirrorY = {301439, -255550, 312378, 52072, -23995, -331387, -349557, -275645, -131094, -77890, -305110, -137212, -93198, -143286, -240789, 330995, 207108, 44205, -251445, -64156};
    vector<int> mirrorZ = {198377, 268173, 128345, 79366, 72385, 41370, -330698, -301497, -147188, -258414, 30769, 1347, 324233, 297033, -159690, -141870, 4664, -329859, 326214, 123969};
    vector<int> finalPosition = {342535, -147031, -57755};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> mirrorX = {-6, -23, 14, -40, 13, -7, -60, 3, -71, 55, -18, 27, 28, 2, -72, 25, -64, -5, -61, -73};
    vector<int> mirrorY = {42, -10, -58, 65, 37, -30, -54, 21, 36, 41, 8, 46, -65, 9, 0, 19, -5, 58, -71, 45};
    vector<int> mirrorZ = {66, 9, 35, -17, -63, -50, -29, -42, 55, 31, -16, 3, 33, -4, -56, -41, 46, -18, 59, 32};
    vector<int> finalPosition = {28, 22, 72};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> mirrorX = {-39, -479, 428, 498, 36, 216, 396, 370, 4, 495, -186, -516, 58, 519, 65, 163, -132, -440, -405, 296};
    vector<int> mirrorY = {-125, -503, -109, -330, -443, 60, 287, 514, 264, -488, -392, 395, -186, -436, -374, 230, 370, -264, -435, -456};
    vector<int> mirrorZ = {-440, 122, -400, -419, -549, 279, 230, -406, 377, -430, 511, 388, 301, -294, 33, -251, -243, 171, -515, 366};
    vector<int> finalPosition = {-454, -547, -180};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> mirrorX = {-71, -157, 178, -20, 94, 7, 69, 64, -189, 165, 153, -68, 164, 150, -60, -22, 0, -159, -73, -26};
    vector<int> mirrorY = {-57, -159, -86, -201, -219, -167, -181, 214, -207, -102, 168, -198, -117, -59, 155, 23, 51, 209, 45, -174};
    vector<int> mirrorZ = {88, 93, 99, -79, -128, -206, 72, -2, 142, -81, -69, 213, 10, -107, 102, -137, -102, -113, -195, -41};
    vector<int> finalPosition = {-3, 138, -213};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> mirrorX = {2, 0, 4, -2, 1, -3, -6, -4, -7, 3, 7, 6, 5, -5, -1};
    vector<int> mirrorY = {6, -6, 0, -7, 5, -5, 7, -1, -4, 4, 2, -2, -3, 3, 1};
    vector<int> mirrorZ = {5, 1, 2, 0, -5, -1, -3, 6, 7, 4, -7, -2, 3, -6, -4};
    vector<int> finalPosition = {-1, -3, 2};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> mirrorX = {-690263, 810034, -1266247, 1304490, -713844, -1213737, -823994, -1195201, -1157124, 885092, 2776, -354874, -438460, -1139721, -989177, -225769, -1241987, -293170, 1139440, -626766};
    vector<int> mirrorY = {-1040616, 1155199, 851061, 394776, -988968, 1327611, 121770, -1204522, 146003, 417794, 389565, -41313, -853570, 57423, 750624, 196452, -1303543, -174343, -622104, 463108};
    vector<int> mirrorZ = {1291038, 424423, -18030, 497335, 378548, -359330, -1294895, 269491, 788300, 533667, -1184304, 122267, 579637, -709851, -206632, 724847, 253002, 215777, -308852, 500766};
    vector<int> finalPosition = {362811, -196278, 322979};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> mirrorX = {4378, -148, -2546, 2589, 1705, -3418, 4145, -5245, -639, -4092, -1213, 1053, -5141, 3844, -582, 2080, 5018, 3351, 2155, -2048};
    vector<int> mirrorY = {1404, -1972, 4233, -1102, -1385, 1380, 1369, -1231, -4789, -4786, -4346, -1059, 3450, -303, -746, -2015, 5084, 1397, -2453, -335};
    vector<int> mirrorZ = {1309, -163, 1771, -221, -400, -4709, 3223, 5622, -2173, 983, 5644, -937, 557, -3575, -3741, 511, -4550, 1397, -3175, 4220};
    vector<int> finalPosition = {-81, 3541, -4372};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> mirrorX = {575519897, 209317732, -241575931, 38857950, 773283878, 916275041, -851210630, -166038962, -819892752, -337922394, -837422924, -929271868, 359659266, 27448634, 879585781, 382018909, 591745301, -663567891, -143118070, 724397928};
    vector<int> mirrorY = {-910179733, 999011273, -801418905, 627245690, -234536591, 326715763, -104797216, -751233377, -863812339, 161002667, 875006210, 960713643, -718336118, 377412590, 632157964, -53874514, 500137502, -216812485, 282381709, -364701563};
    vector<int> mirrorZ = {-224393452, -586533646, 283529371, 382518669, -89313126, 523266007, 273092013, -765237645, -20616663, 50935606, -646108138, -154878425, 610128524, 727301153, -92140769, -785149713, -335997808, 686681813, -380540993, -490221416};
    vector<int> finalPosition = {890709063, 938785595, 40035321};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 44;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> mirrorX = {51, 77, -19, -26, -49, -72, 36, 28, 55, -82, 38, 73, -74, 81, -3, -89, 0, 12, -20, 29};
    vector<int> mirrorY = {-2, -16, -89, 86, -9, -80, 65, -61, 57, -66, 73, -30, -32, -6, -55, 31, -52, -18, -12, 12};
    vector<int> mirrorZ = {-73, -39, 11, 9, -83, -69, -76, -30, 86, -81, 82, -65, -50, 68, 59, 84, 92, 62, 50, -4};
    vector<int> finalPosition = {13, 54, 92};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> mirrorX = {176501449, 522428221, -241028076, 398427369, -760438045, -310915737, -905311070, 116945722, -993401509, 439760876, 851709233, 905275896, 168660342, -376485629, 874619740, 690277511, 218865567, 860799524, -596513007, 615634162};
    vector<int> mirrorY = {134138804, 740634049, -710386496, -716665257, -15474920, -140791491, 756273795, 121165300, -107285970, -425185046, -399055378, -809607374, 832431640, 445982636, -81066847, 239347155, -522077030, 65084971, -933473283, 779393207};
    vector<int> mirrorZ = {108153885, 810294196, 77502963, -874158261, 990769616, 840239789, -437093489, 792658921, -491214571, 868895425, -842340855, -388806062, 632526874, 778454699, -864370242, -212327840, -278283534, -892544634, -364903134, -971715338};
    vector<int> finalPosition = {490932754, -416876918, 745990560};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 63;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> mirrorX = {14484, -20478, 9259, -19366, -6987, 16625, -9982, -19166, 5369, 4487, -7288, -11292, -19575, -9510, -19041, -9610, 11377, 9198, -18535, 15140};
    vector<int> mirrorY = {-14991, 20408, -9534, -14521, -11549, -19531, -20092, -2, -16356, 7082, -19877, 4985, 10478, -2088, -7170, -14058, 2148, -16244, -3009, 9279};
    vector<int> mirrorZ = {-20630, 5671, 3420, -12888, -21396, 3210, -5958, -14118, -11579, 3158, 6764, 15633, -15300, 1957, -3289, -8405, -16643, 1349, -3264, 9064};
    vector<int> finalPosition = {-4634, -21031, 18023};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> mirrorX = {66839849, 56094974, -122090440, -10176075, 91805380, -101250818, 152648613, -74354742, -152435684, -125638981, -108186455, 79930308, -58670856, 85683551, -80782141, -3362260, -77198136, -126142605, -92984231, -99094944};
    vector<int> mirrorY = {107346483, -24795486, 92220, 122705524, -87892177, -140576866, -29985568, -106658806, -126162135, 81914767, 151207889, 149825322, -45292636, -59700827, 121382134, 150350282, 44025741, -23487616, 28394656, 61536377};
    vector<int> mirrorZ = {139987417, -34766283, -66821121, -126989721, 10250074, -150201830, 28729270, 106084733, -10773878, 81039677, -21281361, -112862762, -12697345, -84759682, 19408818, 71810124, -134656690, -10687272, -159721684, 162543606};
    vector<int> finalPosition = {47723965, -49825232, 128868518};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> mirrorX = {-120171121, -407380773, 614733832, 209986408, -514934002, -73684104, -193968145, -714592997, -804625120, -728785919, 946032898, -737610771, -214814807, -590374086, -55338382, -528751325, -585696923, -339417186, -518743909, 432997774};
    vector<int> mirrorY = {642450641, -124841002, -996970846, 373654389, 377790965, 339058132, 72018123, -177846887, -126484696, 430401658, 80690557, -128064093, 343074906, -442013730, 101228477, 610173077, -889906539, 494096905, 714762557, -889340135};
    vector<int> mirrorZ = {-705837084, 974661870, 382500987, 182939759, 680375733, -699935801, -799348797, 60911396, 494634861, -338810573, 445734246, 340442802, 152449484, 668867569, 953058027, 12724171, -74972561, -842876614, -10680989, -1175739};
    vector<int> finalPosition = {-332702354, 8090298, 334346458};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 60;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> mirrorX = {226136483, -479038683, 310955565, 997898473, -982938308, 722817040, 203830419, -963985303, 832627979, -505558832, 486488847, 265095746, 467527186, -148970422, -893755550, -17224351, 96033131, 970819055, 521720318, 400786888};
    vector<int> mirrorY = {-480875284, -485869034, -695564342, -85074753, -326157194, -452450684, -326144654, -511368664, 110388699, 188432654, 699545191, 39332080, 832680297, 177737302, -319364742, -360679262, -96437993, -363771215, -270619376, -233478635};
    vector<int> mirrorZ = {-466544565, -35389655, 843371779, 213042502, 101229726, 99816470, -864049600, 324672813, 882382599, -427654382, 223784759, -746172491, -497206570, 814550913, 620283317, -800362647, -382183814, 83715078, 902551788, -219310693};
    vector<int> finalPosition = {252133886, -837895081, -558710998};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 57;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> mirrorX = {272834789, -963268914, 686538457, 287848554, -786695846, 764078490, -663546409, 504776710, 815836495, 83794003, 622469726, 587478922, 84562111, -63695277, -288243017, -146230107, -67589793, -770428775, 366397057, 689085497};
    vector<int> mirrorY = {238735679, -998824911, -703116693, -747494255, 532093465, 810344627, 804246924, 976566450, 568433466, 21999842, -334056865, 965015242, 108885002, 860719988, 892968286, -622894139, 735800634, 743861745, -407272647, 510100991};
    vector<int> mirrorZ = {67715720, 442647476, 816949427, -407422700, -804290766, -563676402, -189581798, 461450450, 739276533, -897611126, -369901471, 75931984, -814119488, -758200244, -372534760, 237002746, 223679891, -514468714, 246227583, -21439123};
    vector<int> finalPosition = {-501350307, -335593390, -450082611};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 68;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> mirrorX = {463457821, -412911559, -90055191, 869497560, -34815092, -824020540, 303612013, -521981267, 234112920, -101821103, 876394100, 58077970, 390681869, -181368606, 626368190, 404696772, 161129729, 30026603, -838673591, -753313498};
    vector<int> mirrorY = {-106538739, -351261056, -505133185, 757026234, 794315095, -577164058, -50477803, 519178244, -139595439, -701151454, 245112532, 257932329, -567081656, 150142621, 168170869, -57581788, -857698534, 922638704, 450762916, -541706081};
    vector<int> mirrorZ = {573301765, 496979495, -570394508, 324396442, -527930341, 224962840, 735799743, 211004020, -646778034, 519273887, -560695756, -646496994, 171625178, 716310410, -345689538, -662518693, -826952275, -992860854, 381052096, -329965316};
    vector<int> finalPosition = {-363729768, 243182711, 491793544};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> mirrorX = {-240147222, -539322285, 87856068, -740849146, -224318723, -580120739, -827360920, 415263180, 524533523, -267319109, -873121900, -580212867, -214146202, -515695552, 351868176, 660113534, 568587931, -832989102, 559615305, 300873225};
    vector<int> mirrorY = {920560283, 408761400, -288536449, 998288073, -662622729, 366729893, 493654609, -995055721, -663028099, -610655926, 727019232, 245887581, -292590736, -690788474, -442689373, 726999323, -60835482, -612897223, -742371129, 949113608};
    vector<int> mirrorZ = {566409667, -683976010, 294554688, 620124624, 968665037, 398145238, -248076431, 627045628, 947486061, 497819689, -603788684, -250207888, -732587647, 656721926, -708403443, -492555808, -552695738, -414359278, -992219529, -232740117};
    vector<int> finalPosition = {904735045, -665422120, -357160720};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 54;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> mirrorX = {159720484, 378541498, -93965213, -681214386, -413623722, 123555, 197195133, 227939673, 839707086, -105671404, -434617866, 294804744, 243189709, -373197586, 131990889, -109698945, 983886356, 300787570, -358858544, 375388531};
    vector<int> mirrorY = {-200885339, -178933987, 317242072, 276206822, -553165514, 922494171, 73319672, -530277397, 310091685, -622209591, -619154755, -642378397, 170318784, -915595208, 353435561, 298925233, -198517039, -856590168, 932710148, -883448878};
    vector<int> mirrorZ = {-343653589, -567733628, 156698199, 551167606, 503036900, -728343016, 663939997, -553393037, 595707676, -820214595, 448726542, -551872099, -540422988, 22354378, -357211985, 960581544, -935577162, -94441863, 91482123, 627720599};
    vector<int> finalPosition = {-665863930, 595201833, 546841087};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 56;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> mirrorX = {208288011, -353233749, -221751645, 786054822, 656966789, 690041446, 810623235, 373261641, 947199298, 994380218, 136448049, -903786570, 31955074, 434190040, 655635705, -699811542, -588975113, -321591994, -882564555, -439726223};
    vector<int> mirrorY = {827569602, -935325638, 104036684, -550956406, -939544359, -244523092, -549339439, 103915112, -107742948, -400392184, 509370602, 981144111, -864164190, -78495122, -865948666, 107458110, -165108615, 974388985, -367267643, 477364445};
    vector<int> mirrorZ = {539659172, 874651167, 867394616, 976289541, -166368005, -394917955, 609762322, 678404733, -143721371, 415017835, -270657678, 127721484, 881224088, 221144330, -592123053, -628946807, 301056498, 989128433, 139035700, 257113747};
    vector<int> finalPosition = {-743163128, -631092632, -894043338};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 59;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> mirrorX = {-657900381, 332135169, -117593962, 45654475, -965553655, 335056657, 164155395, -803331694, 920364055, -492205005, 359309149, 586165173, -219106436, -239206635, -661467, 169444322, -164780880, 637186212, 990943595, -447381276};
    vector<int> mirrorY = {-115810933, 789309743, 717460654, -951534371, 630368753, 407370810, 471838437, -494776542, -78857816, 70420194, -68517989, 41978291, 293759306, -728438041, 13484085, 508154966, -555784107, 897527899, 439229775, 207216463};
    vector<int> mirrorZ = {9006688, -78833690, 251296837, 690816957, -291843735, -847394893, -728574258, 909600659, -366547127, 107551995, 225832642, -869094606, 205421640, 21253164, -69780484, 554002080, 219683253, 833787482, 548947048, -613863378};
    vector<int> finalPosition = {384144753, 881409505, -174520306};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 58;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> mirrorX = {943162022, 333111981, 919339774, 863043116, -847356828, 751318744, -433032985, -39797824, -694298426, 283835424, 593981861, -147306360, -79787359, 572938010, 340921676, 269835897, 137375477, 326588310, 498601162, 408741173};
    vector<int> mirrorY = {919974502, -847006480, 122174689, -242667305, -496081740, -234597847, -391450519, 574217949, 364771609, -671042309, 157143879, 52248789, 181500770, -16262471, 949433582, 153176450, 977627719, 218990419, 532853763, -549400097};
    vector<int> mirrorZ = {803448465, 444953518, -891398944, -129714300, 636004587, 428337898, 744886052, -462297966, -109398657, -8047854, -562221536, -350334990, 963813908, 77554520, -470745528, -188341860, 394988415, -394699214, -60040790, 242589325};
    vector<int> finalPosition = {-443730008, 513805215, 141705740};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 51;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> mirrorX = {-34037289, 216387127, -8538744, 744047266, -469281582, -213634596, -962361279, -757140631, 3209328, 168420409, -612263901, 205566383, 486276716, 175371651, 197096687, -681219289, -981505988, 29121315, -458157436, 61144515};
    vector<int> mirrorY = {-347531297, -469344854, 322171532, 343295077, 197089670, 325197973, -900837471, 571806917, 217429824, 932373054, -633142717, -907741821, 318504160, 313169933, -887202054, 612854607, -380752276, 123410753, 218396235, 345658943};
    vector<int> mirrorZ = {-153703702, 934671933, 528454370, 216163236, -724089331, -477488628, 916869794, -80008771, 390683761, 571692056, 982222509, -264134387, 659805811, 432106237, -679353647, -42528644, -475513171, -293320070, 485161362, -821339749};
    vector<int> finalPosition = {-452950516, -801788208, 11972496};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 66;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> mirrorX = {600000000, -400000000, 200000000, 0, -1000000000, 1000000000, -600000000, -900000000, 800000000, -700000000, -800000000, -300000000, 500000000, 700000000, 900000000, 400000000, -100000000, 100000000, -500000000, 300000000};
    vector<int> mirrorY = {0, -500000000, -900000000, 600000000, 800000000, 500000000, 700000000, 900000000, 1000000000, -600000000, 100000000, -100000000, -400000000, -300000000, -200000000, 200000000, -800000000, -1000000000, 400000000, -700000000};
    vector<int> mirrorZ = {1000000000, 700000000, -1000000000, 900000000, -500000000, -600000000, 200000000, -900000000, -800000000, -700000000, 500000000, -100000000, 100000000, 300000000, 400000000, 0, 600000000, -300000000, -400000000, -200000000};
    vector<int> finalPosition = {200000000, 1000000000, 100000000};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 100000002;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> mirrorX = {43, -6, -63, -12, 23, 67, -35, -69};
    vector<int> mirrorY = {-39, -65, 36, 29, 47, 63, -7, 8};
    vector<int> mirrorZ = {-13, -39, -2, 42, -24, -42, 48, -1};
    vector<int> finalPosition = {-59, 2, -7};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> mirrorX = {81, -32, 161, -122, -155, 108, -41, 181};
    vector<int> mirrorY = {-207, -229, 215, 128, 73, -45, -16, -115};
    vector<int> mirrorZ = {-36, -30, -217, 150, 133, 74, 78, 174};
    vector<int> finalPosition = {133, -219, -116};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> mirrorX = {358, 365, 127, -240, 193, 117, 182, 305, 354, 241};
    vector<int> mirrorY = {88, -354, -266, -312, 1, -342, 161, 109, 197, -329};
    vector<int> mirrorZ = {-322, 361, 13, -95, 68, -197, -79, 366, -226, -355};
    vector<int> finalPosition = {2, 361, -321};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> mirrorX = {-51, 78, 111, 55, -14, 142, -59, -103, 195, 13};
    vector<int> mirrorY = {44, 126, 71, 152, -78, 109, -168, 178, 138, 79};
    vector<int> mirrorZ = {-100, 122, 7, -54, 105, 70, 37, 44, 3, 52};
    vector<int> finalPosition = {109, 2, 146};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> mirrorX = {-275, -176, 80, -183, -61, 92, -53, -184, 21, 108, 260, -272};
    vector<int> mirrorY = {-247, -64, 127, 186, 82, 58, 57, 94, -19, -152, -120, -223};
    vector<int> mirrorZ = {39, -10, 179, 265, 211, 128, -226, -92, -62, -102, 169, 21};
    vector<int> finalPosition = {-242, -244, -100};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> mirrorX = {7979, -2803, -8262, -5102, 3537, 158, -2291, 4199, -3987, 5249, 7007, 7768};
    vector<int> mirrorY = {-804, -8986, 2030, -6912, -4579, -1212, -2728, 2160, 4850, 7483, 7636, 5160};
    vector<int> mirrorZ = {-8519, 7102, 7233, 6806, 3233, -8222, -2497, -1745, -1564, 2268, 2854, 6487};
    vector<int> finalPosition = {1632, -2761, 1175};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> mirrorX = {97, 134, -717, 496, 51, 687, -79, 254, 301, -639, -408, 759, -20, -585};
    vector<int> mirrorY = {-282, 720, 459, 144, 232, -484, -392, 33, -50, -673, 461, -608, -591, -557};
    vector<int> mirrorZ = {-361, -125, -521, 608, 689, 472, -189, -760, -741, 695, -605, 499, 34, 558};
    vector<int> finalPosition = {-194, 2, 355};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> mirrorX = {-47, -37, -40, 43, 28, -21, 22, -22, 41, -31, -64, -28, 26, -43};
    vector<int> mirrorY = {60, -34, -41, -68, -46, 46, 41, -18, 15, 37, 71, -25, -7, 24};
    vector<int> mirrorZ = {-1, 50, -61, -70, 68, -40, 5, -64, 23, 60, -44, 42, 62, -37};
    vector<int> finalPosition = {62, -3, 48};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> mirrorX = {282, -163, -169, 165, -455, 293, -747, -589, -92, 753, -221, 338, 304, -877, 141, 485};
    vector<int> mirrorY = {-515, -278, -472, -576, 446, -800, -629, 522, -602, -613, 544, 864, -428, 765, 876, -835};
    vector<int> mirrorZ = {-87, -859, 334, -588, -195, -373, -342, 734, -241, -368, 351, 411, -695, 719, 158, 132};
    vector<int> finalPosition = {678, 363, 649};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> mirrorX = {-878, -1333, 2714, -3351, -1894, -203, 2262, 3711, -168, -3281, -4372, 3081, -2579, -3373, 4271, -3254};
    vector<int> mirrorY = {1297, 3476, -3604, -3838, 892, -1404, -1708, -3704, -3422, 4392, 2117, -681, 1028, -1395, -3359, 1685};
    vector<int> mirrorZ = {3277, -602, 3348, 3803, -126, 536, 4054, -4351, -2677, 925, 644, -7, -3693, -4159, 451, 1470};
    vector<int> finalPosition = {2663, -16, -550};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> mirrorX = {103, -440, 35, -132, -386, 70, -340, 217, 61, -65, 533, -500, 28, 175, -154, -491, 59, -222};
    vector<int> mirrorY = {320, 189, -443, 260, -430, 535, -178, -70, -367, -529, 288, 64, -441, 65, -191, 495, -521, 17};
    vector<int> mirrorZ = {-188, -399, 234, -535, -241, -517, -214, -1, 150, -105, 96, -31, 275, -358, -224, 230, -94, -155};
    vector<int> finalPosition = {363, -447, 3};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> mirrorX = {-323, -556, 323, 120, -218, -679, -841, 793, 123, -508, -444, -603, -364, 196, 337, -422, 142, -214};
    vector<int> mirrorY = {-39, 204, -436, -623, 18, 428, 683, 408, -427, -373, 434, 314, 302, -423, -798, -740, 550, -253};
    vector<int> mirrorZ = {646, -230, 645, 36, -329, 582, 19, 228, -346, -724, 446, 295, 172, 820, 724, -156, -727, -759};
    vector<int> finalPosition = {-207, -852, 322};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> mirrorX = {-1128, 760, -686, 669, -819, 628, 839, 725, 524, -212, 175, 75, -215, -1092, -990, 1007, -83, -274, 392, 965};
    vector<int> mirrorY = {823, -332, -602, -280, 319, 119, 591, 489, -581, 658, 738, 342, 23, 71, -43, -377, 251, 517, -770, -503};
    vector<int> mirrorZ = {-1130, -226, 920, -274, 143, 346, -422, -113, -547, -416, -275, -865, -469, -694, -332, 946, -40, 96, -512, 744};
    vector<int> finalPosition = {-591, -558, -1147};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> mirrorX = {80, 141, -103, 36, -177, 109, -113, 143, 149, -12, 63, -33, 12, -175, 11, 103, -77, -11, 48, -92};
    vector<int> mirrorY = {149, 29, 3, -106, 14, -131, -120, -82, -19, -116, 157, -34, -160, 40, 104, -135, 154, 64, -31, -77};
    vector<int> mirrorZ = {27, -6, -12, 22, -157, -38, -74, 140, 121, -33, -109, -18, -29, -143, -21, -62, -56, 128, -167, 144};
    vector<int> finalPosition = {88, 2, -49};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> mirrorX = {-1, 12, -2, 10, -10, 14, -3, -12};
    vector<int> mirrorY = {0, 6, -7, -5, -9, -2, 8, 2};
    vector<int> mirrorZ = {12, -9, -4, 7, -3, 11, 2, 0};
    vector<int> finalPosition = {8, 2, -3};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> mirrorX = {-46, -78, -158, -127, 88, 156, 181, 43};
    vector<int> mirrorY = {-24, -174, 101, -191, 81, -35, -10, -142};
    vector<int> mirrorZ = {21, 184, 169, 97, -189, 33, 40, 62};
    vector<int> finalPosition = {3, 152, -107};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> mirrorX = {30, -22, -10, 22, 45, -46, -28, 72, -53, 91};
    vector<int> mirrorY = {60, -28, 1, 91, -19, 84, 24, -70, 55, -1};
    vector<int> mirrorZ = {50, 49, -30, 52, 53, -81, -39, -83, -71, -66};
    vector<int> finalPosition = {2, 9, -22};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> mirrorX = {24, 4, 33, 6, -11, -4, -27, -25, 30, -29};
    vector<int> mirrorY = {-27, -14, 1, 5, 31, 4, 15, -30, 7, -29};
    vector<int> mirrorZ = {11, -5, -25, -10, -3, 27, 30, -15, -18, 2};
    vector<int> finalPosition = {-31, -32, 2};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> mirrorX = {-13, 69, 26, -22, 51, 85, 17, -75, 2, 32, -48, 43};
    vector<int> mirrorY = {-52, 69, -35, 43, 63, 55, -81, 32, -14, -29, 37, 9};
    vector<int> mirrorZ = {-30, 84, 63, 74, 51, -63, 85, -72, 68, -77, 6, 48};
    vector<int> finalPosition = {2, -23, -33};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> mirrorX = {64, -129, -247, -274, 70, 184, -182, 165, 214, -113, 174, -9};
    vector<int> mirrorY = {-274, -170, -189, 180, 229, 35, 182, -128, -243, -65, -120, -271};
    vector<int> mirrorZ = {34, 72, 129, 6, -149, 190, 57, 158, 266, -142, -239, -119};
    vector<int> finalPosition = {-247, -45, 146};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> mirrorX = {29, 6, -31, 43, -56, -68, -64, -8, -34, 13, -14, -28, 27, -73};
    vector<int> mirrorY = {-18, -51, 0, 44, -1, 49, -10, 45, 68, 11, -55, 54, 42, 61};
    vector<int> mirrorZ = {-68, -60, -20, 25, -13, -34, -29, -32, -17, 59, 58, 5, -33, 53};
    vector<int> finalPosition = {2, -24, -1};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> mirrorX = {-140, -532, 774, -445, 330, 392, -923, -199, -665, -885, 244, -23, 718, -240};
    vector<int> mirrorY = {272, -84, -850, 380, -557, 538, 85, -582, 394, 882, -595, -927, -200, 797};
    vector<int> mirrorZ = {298, 553, -494, 738, -669, -325, 54, -457, 733, -635, 58, 569, 355, 437};
    vector<int> finalPosition = {-396, -49, 706};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> mirrorX = {-64, -80, 63, -50, 0, -45, -133, 121, 93, -76, -120, 133, 20, 77, 67, -69};
    vector<int> mirrorY = {128, -120, 4, 113, 123, 79, 27, -62, 6, -18, 20, -29, 40, -65, -87, -9};
    vector<int> mirrorZ = {83, 108, -72, -51, 2, -106, 136, 65, -32, 89, -115, 107, -50, 99, -136, -121};
    vector<int> finalPosition = {2, -71, 43};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> mirrorX = {19, 60, 40, 22, -34, 15, -11, -50, 61, -30, -46, 35, 2, -32, -52, -38};
    vector<int> mirrorY = {55, 48, 13, -52, -15, -63, -38, -47, 19, 50, 22, 24, -45, -24, 6, -21};
    vector<int> mirrorZ = {62, 27, 60, 13, 43, -49, -44, -31, -51, -12, -26, 41, -8, -30, -56, 55};
    vector<int> finalPosition = {-30, 2, 22};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> mirrorX = {602, -558, -15, -304, -280, -94, -444, -593, 577, 263, -159, 440, -564, -583, -168, 405, -587, -580};
    vector<int> mirrorY = {430, 369, 81, 307, -132, 118, 30, -474, -418, -86, -618, 399, 571, 301, -476, 325, 536, -615};
    vector<int> mirrorZ = {146, 582, 483, -152, 312, -213, -479, -33, 269, 174, -373, 136, -107, -364, 231, 422, 502, 539};
    vector<int> finalPosition = {579, 92, 294};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> mirrorX = {-1867, -115, -2286, 2272, 789, -789, 243, 1518, 2374, -1071, -1572, 1778, -1390, -991, 2133, 469, -12, 2399};
    vector<int> mirrorY = {-1557, 737, -367, -1178, 2196, -1976, -442, -331, 2206, -2248, -932, -1808, 2032, -452, 323, -1134, 2432, -294};
    vector<int> mirrorZ = {1037, 241, -1764, 52, 1460, -2334, 1899, -2026, -2173, 252, -1224, -2043, 2312, -2333, -421, 525, -1601, 670};
    vector<int> finalPosition = {-2166, 406, -1334};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> mirrorX = {117, -443, 476, -252, 557, -352, 3, 222, -122, -202, 420, 487, -50, -41, -505, -189, 539, 267, 527, -482};
    vector<int> mirrorY = {-209, -509, 122, -311, -334, -461, 352, -177, 372, -307, 255, -335, -511, -398, 506, 302, 424, -1, -280, 325};
    vector<int> mirrorZ = {303, 328, -270, -345, -38, -243, -514, 56, 253, 233, 78, -324, -455, 432, 43, 363, -59, -349, 495, 103};
    vector<int> finalPosition = {-172, 32, 2};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> mirrorX = {-426, -462, 19, 899, 585, 677, -199, 185, 648, 494, -140, -910, -716, 320, 279, -539, -44, 194, -654, 588};
    vector<int> mirrorY = {-615, 261, 729, 774, 496, -826, 126, -7, -106, 231, -419, 681, -49, -748, -159, 878, 256, -435, 956, 776};
    vector<int> mirrorZ = {407, 110, -156, -305, 908, 635, 693, -614, 188, 524, 61, -554, -406, -787, -56, -366, 874, 593, -678, 362};
    vector<int> finalPosition = {560, 494, -513};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> mirrorX = {-3635, -419, -3244, 4451, 2127, 7506, -7977, -7910};
    vector<int> mirrorY = {7062, -4774, 8114, 9303, 3132, -180, 2057, 5370};
    vector<int> mirrorZ = {-808, 4830, 1406, 1298, -9188, -2492, -1695, -7864};
    vector<int> finalPosition = {-7883, -2111, 8206};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 102;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> mirrorX = {-50, 10, 63, 2, -43, -5, 43, 72};
    vector<int> mirrorY = {12, -5, -10, 6, 34, 51, -56, 47};
    vector<int> mirrorZ = {70, 0, -16, -45, -59, 4, -55, 2};
    vector<int> finalPosition = {-3, -16, -17};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> mirrorX = {855, 141, -781, -457, -48, 795, -109, -442, -432, -691};
    vector<int> mirrorY = {541, -504, 401, 224, 218, -559, 799, 461, 779, 577};
    vector<int> mirrorZ = {266, -673, 785, 603, 763, -249, -67, -455, -272, -38};
    vector<int> finalPosition = {779, -765, -80};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> mirrorX = {-62, -49, -85, -155, -203, -128, 122, 7, 54, -58};
    vector<int> mirrorY = {-171, -57, 183, -79, -78, -5, -146, -127, 189, 162};
    vector<int> mirrorZ = {-3, 36, 82, -14, 91, -86, 180, 182, 142, -173};
    vector<int> finalPosition = {-101, 21, 106};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> mirrorX = {-342, 52, -82, -265, 331, 155, -76, 296, -41, 239, 38, -88};
    vector<int> mirrorY = {-120, 3, -74, 74, -50, -115, -58, -116, -167, 133, 246, -289};
    vector<int> mirrorZ = {77, -171, 120, 123, -210, 291, -71, -13, -305, 131, -102, 73};
    vector<int> finalPosition = {226, -110, -3};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> mirrorX = {29, 49, 24, -27, 11, -51, 16, 6, 55, 37, -10, 76};
    vector<int> mirrorY = {36, -54, 50, -15, -70, -25, -68, 45, 47, -35, 0, -45};
    vector<int> mirrorZ = {30, -41, 26, 66, 22, -57, 14, -65, -38, -77, -59, 13};
    vector<int> finalPosition = {-3, 68, 27};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> mirrorX = {-21, -301, -84, 230, -75, 23, -295, 77, -72, -63, 6, 118, 234, -174};
    vector<int> mirrorY = {333, -131, -210, -30, -63, 135, -160, -90, 220, 8, -1, -161, 16, -194};
    vector<int> mirrorZ = {-330, -50, 205, 126, -26, 21, -241, 140, -14, -45, 172, 33, 300, -257};
    vector<int> finalPosition = {315, 62, -3};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> mirrorX = {-941, -301, 247, 1314, 1284, 273, 1175, 587, -695, 889, -142, 905, -998, 976};
    vector<int> mirrorY = {-1317, 1121, -430, -1152, -173, -809, 1214, 1288, -767, 1229, 598, -830, 305, -1088};
    vector<int> mirrorZ = {1292, -1080, 622, -955, -789, 1217, 1078, 751, -9, 74, 1202, -1248, 1113, -971};
    vector<int> finalPosition = {-414, -689, -1031};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> mirrorX = {-71, 46, 47, 83, -24, 33, 41, -89, -83, -6, 52, 8, 21, 48, -44, -46};
    vector<int> mirrorY = {-87, -63, 71, -85, 87, -81, -26, 70, 88, 32, -46, -66, -91, 65, 19, 38};
    vector<int> mirrorZ = {50, 78, -60, -40, -49, -86, -20, 70, 82, -16, 0, -77, 3, -46, 74, -67};
    vector<int> finalPosition = {15, 31, -3};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> mirrorX = {33, -78, -72, -57, -65, 2, 36, -61, 40, 32, 26, 39, 66, 12, -11, 76};
    vector<int> mirrorY = {-38, -70, -22, -43, 35, 26, 41, 47, 32, 63, -63, 23, 69, -7, 6, -66};
    vector<int> mirrorZ = {55, 4, -12, 3, 43, -43, 12, 75, -22, -27, 26, 31, 41, -26, -40, 27};
    vector<int> finalPosition = {43, -3, -22};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> mirrorX = {-307, 412, -116, -14, -26, -315, 253, 222, -208, 41, 430, -446, 373, 158, 392, -263, 247, -229};
    vector<int> mirrorY = {-350, -113, -49, -426, 153, -304, 488, 49, 4, 394, 148, -20, -149, -236, 139, 104, 198, 45};
    vector<int> mirrorZ = {-24, 234, -462, -361, 240, 423, -370, 471, -201, -465, 255, 130, 211, -298, -142, 34, 146, -437};
    vector<int> finalPosition = {-3, -147, 202};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> mirrorX = {426, 720, -747, 615, -255, -353, 562, 427, 274, -135, 713, 656, -291, 473, -251, -523, 53, -623};
    vector<int> mirrorY = {-721, 418, 545, 290, -495, 689, -404, 534, -415, 184, 599, -156, -123, -132, 191, -501, 103, 196};
    vector<int> mirrorZ = {-674, -379, 510, 569, -63, -614, -457, 136, 11, 499, 533, -506, 116, -164, 600, -148, -670, 632};
    vector<int> finalPosition = {-701, 620, -3};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> mirrorX = {2};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {3, 0, 1};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> mirrorX = {-5, 1, 4, 2, 3, 6, -6};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {9, 0, 0};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> mirrorX = {5, 8};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {4, 0, 0};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> mirrorX = {5};
    vector<int> mirrorY = {5};
    vector<int> mirrorZ = {1, 2, 3};
    vector<int> finalPosition = {10, 12, -1};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> mirrorX = {8, -3, 21};
    vector<int> mirrorY = {4, 5};
    vector<int> mirrorZ = {-7, -2, -1, 7, 14};
    vector<int> finalPosition = {40, -4, 31};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> mirrorX = {0, 315, 1, -5};
    vector<int> mirrorY = {4, 9, 21, -5655};
    vector<int> mirrorZ = {-1000000000, 1000000000};
    vector<int> finalPosition = {0, 0, 0};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> mirrorX = {};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {0, 0, 0};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> mirrorX = {5};
    vector<int> mirrorY = {5};
    vector<int> mirrorZ = {1, 2, 3};
    vector<int> finalPosition = {10, 12, -1};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> mirrorX = {8, -3, 21};
    vector<int> mirrorY = {4, 5};
    vector<int> mirrorZ = {-7, -2, -1, 7, 14};
    vector<int> finalPosition = {40, -4, 31};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> mirrorX = {-332174142, -638603452, -23120720, -179572821, -721016033, -257385004, 540831225, -680342386, -192705044, -638363532, 878697594, -184845502, -655088737, 350795696, -245684021, 584386630, -830330346, -759394703, 538975432, 721871889};
    vector<int> mirrorY = {-332174142, -638603452, -23120720, -179572821, -721016033, -257385004, 540831225, -680342386, -192705044, -638363532, 878697594, -184845502, -655088737, 350795696, -245684021, 584386630, -830330346, -759394703, 538975432, 721871889};
    vector<int> mirrorZ = {-332174142, -638603452, -23120720, -179572821, -721016033, -257385004, 540831225, -680342386, -192705044, -638363532, 878697594, -184845502, -655088737, 350795696, -245684021, 584386630, -830330346, -759394703, 538975432, 721871889};
    vector<int> finalPosition = {972407554, -411603950, -725275153};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 67;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> mirrorX = {11436, 5740, 12122, 18444, 11279, 8632, 9301, 6938, 10208, 5518, -29431, -575, -3830, -26684, -26910, -2627, -10758, -13205, -25112, -29156};
    vector<int> mirrorY = {-899994067, -587053738, 176679700, -194750248, -898632744, -223540289, -509387157, -503715892, 654048330, -327587831, -590663083, 365957972, 276306980, -649061451, 626858164, -186023449, -420013810, 117090635, 705877944, 862209862};
    vector<int> mirrorZ = {-900000000, 166410000, 100, 247950000, 176670000, -83790000, -194760000, 30, -898650000, -833670000, 15, -223560000, 209430000, -509400000, 752400000, -503730000, -105660000, 654030000, -820890000, -327600000};
    vector<int> finalPosition = {1000000000, 918742891, 170};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 999464222;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> mirrorX = {481765933, 85377743, 270216262, 191391529, -187330300, -446524492, -554650248, 344887256, -269582744, 812158119, -852300289, -119731649, 889772843, -313921295, -894245892, -817453607, 949118330, -779862634, 979932169, 89957932};
    vector<int> mirrorY = {481765933, 85377743, 270216262, 191391529, -187330300, -446524492, -554650248, 344887256, -269582744, 812158119, -852300289, -119731649, 889772843, -313921295, -894245892, -817453607, 949118330, -779862634, 979932169, 89957932};
    vector<int> mirrorZ = {481765933, 85377743, 270216262, 191391529, -187330300, -446524492, -554650248, 344887256, -269582744, 812158119, -852300289, -119731649, 889772843, -313921295, -894245892, -817453607, 949118330, -779862634, 979932169, 89957932};
    vector<int> finalPosition = {-984065896, 363674760, -95370251};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 85;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> mirrorX = {-83856, -98603, -83222, -92207, -77610, -70391, -73887, -90765, -88549, -99083, -83548, -80687, -94006, -94001, -90206, -76176, -92062, -86299, -71677, -77401};
    vector<int> mirrorY = {-68366, -78626, -92066, -85504, -78106, -73661, -80979, -89120, -85727, -75714, -86786, -70549, -73396, -72543, -97685, -96094, -93587, -86487, -80821, -79922};
    vector<int> mirrorZ = {-88645, -72699, -86870, -72414, -70223, -81262, -87305, -72548, -88223, -67735, -79875, -84180, -90613, -96613, -96747, -71144, -86802, -92869, -93799, -72289};
    vector<int> finalPosition = {6654, 17341, 23611};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> mirrorX = {1244, 3252, 6463463, 4363, 21425, 336, 215, 5748, 24325, 7457};
    vector<int> mirrorY = {12311, 25325, 2364376, 124124, 43643, 3214, 4363, 124};
    vector<int> mirrorZ = {11, 77, 5346, 8888888, 35235, 12411, 5474587};
    vector<int> finalPosition = {99955999, 1000000000, 999499798};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 2052510170;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> mirrorX = {-998638045, -792420988, -371854484, -623859538, -116484720, -813030415, -237111365, -673597461, -901847898, -841823428, 61402892, -872139111, -990419362, -429129956, -353860681, -821490978, -515972334, -938736696, -158917445, -441787226};
    vector<int> mirrorY = {-59436285, 26389629, -420886472, -503852001, -74198828, -162848260, 70301173, -343414725, -714154995, -97928950, -596426277, -272876238, -990532710, -703768338, -368734600, -100625667, -479309751, -201428490, -508252291, -200686628};
    vector<int> mirrorZ = {-356784305, -210795534, -385391552, -837266736, -543482684, -444746569, -193043909, -818542046, -471843294, -248645987, -841601141, -847959590, -256025398, -541999358, 37883250, -835443127, -117735296, -794538811, -122555691, -832964992};
    vector<int> finalPosition = {-214013462, -699793716, -267446593};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 37;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> mirrorX = {1, 5, 3, 7, 4, 9, 12};
    vector<int> mirrorY = {7, 12, 4, 2, 87, 5, 6};
    vector<int> mirrorZ = {7, 1, 2, 22, 9, 3, 6};
    vector<int> finalPosition = {23, 456, 123};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 317;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> mirrorX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 100564};
    vector<int> mirrorY = {1234, 314, 51234, 2134, 123, 2, 543, 214, 876, 986, 45};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {3213, 1235435, 45236342};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 46362202;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> mirrorX = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {100, 100, 100};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 205;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> mirrorX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> mirrorY = {1};
    vector<int> mirrorZ = {2};
    vector<int> finalPosition = {1, 2, 3};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> mirrorX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> mirrorY = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> mirrorZ = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> finalPosition = {0, 0, 0};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> mirrorX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> mirrorY = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> mirrorZ = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> finalPosition = {1, 1, 1};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> mirrorX = {-959666, -859726, -843558, -823507, -768486, -610884, -491067, -415053, -391859, -310011, -111746, 82135, 253154, 312973, 361955, 461087, 573522, 580634, 800710, 882732};
    vector<int> mirrorY = {-972576, -787505, -597624, -443209, -428889, -266817, -130241, -44312, 113239, 123399, 151322, 215374, 265085, 353638, 402362, 443871, 514839, 578909, 844863, 974231};
    vector<int> mirrorZ = {-999587, -929401, -861004, -854798, -852249, -847947, -735737, -699362, -601220, -482912, -436755, -30508, 34925, 204072, 263274, 373884, 457864, 467286, 747464, 860826};
    vector<int> finalPosition = {986146, -793866, -446959};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 23;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> mirrorX = {3, 6};
    vector<int> mirrorY = {3};
    vector<int> mirrorZ = {3};
    vector<int> finalPosition = {-9, 0, 0};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> mirrorX = {10, 3};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {14, 0, 0};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> mirrorX = {10, 19, 8};
    vector<int> mirrorY = {};
    vector<int> mirrorZ = {};
    vector<int> finalPosition = {-2, 0, 0};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> mirrorX = {3, 5};
    vector<int> mirrorY = {1};
    vector<int> mirrorZ = {1};
    vector<int> finalPosition = {-4, 0, 0};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> mirrorX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 123, 1245, 12356, 34534, 5465656, 1234458, 76, 654, 98765, 87654, 45400};
    vector<int> mirrorY = {123, 34554, 7654, 9876, 9965, 34456, 11123, 12343454, -123324, -324, -123456, -2345677, -4656877, 900887, -7878999, 123123123, 123125415, -1245677, -111111, -111999};
    vector<int> mirrorZ = {111111, 1222222, 33333, 4444, 55555, 66666, 7777, -44444, -33333, -22222, -1111111, 345456, 34554667, -123456, -3456789, -5555556, -8776565, -22211114, -11112321, -1001};
    vector<int> finalPosition = {-1000000000, 1000000000, -12312124};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 1433642732;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> mirrorX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> mirrorY = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> mirrorZ = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> finalPosition = {20, 20, 20};
    Reflections* pObj = new Reflections();
    clock_t start = clock();
    long result = pObj->minimumMoves(mirrorX, mirrorY, mirrorZ, finalPosition);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22694621&rd=14538&pm=10998
********************************************************************************
#include <algorithm>
#include <iostream>
#include <sstream>
#include <numeric>
#include <string>
#include <utility>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <list>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstdarg>
#include <cstring>
using namespace std;
 
#define ALL(c) (c).begin(), (c).end()
#define FOR(i, n) for (int i = 0; i < (int)(n); ++i)
#define FOREACH(i, n) for (typeof(n.begin()) i = n.begin(); i != n.end(); ++i)
#define MEMSET(p, c) memset(p, c, sizeof(p))
typedef long long llint;
typedef pair<int, int> PII;
#ifndef WATASHI_PC
#define errf(fmt, ...) do { } while (false)
#endif
 
struct Reflections {
  long long minimumMoves(vector <int> mirrorX, vector <int> mirrorY, vector <int> mirrorZ, vector <int> finalPosition);
};
 
const long long INF = 1000000000000LL;
 
void gao(vector<long long> v, vector<long long> w[12][12]) {
  int n = v.size();
  for (int i = 0; i < 12; ++i) {
    for (int j = 0; j < 12; ++j) {
      w[i][j].clear();
    }
  }
  w[0][0].push_back(0);
  for (int k = 0; k < n; ++k) {
    for (int i = 11; i >= 0; --i) {
      for (int j = 11; j >= 0; --j) {
        for (vector<long long>::const_iterator wi = w[i][j].begin(); wi != w[i][j].end(); ++wi) {
          w[i + 1][j].push_back(*wi + 2 * v[k]);
          w[i][j + 1].push_back(*wi - 2 * v[k]);
        }
      }
    }
  }
  for (int i = 0; i < 12; ++i) {
    for (int j = 0; j < 12; ++j) {
      sort(ALL(w[i][j]));
    }
  }
}
 
long long gao(vector<long long> v, long long w) {
  int n = v.size();
  long long ret = INF;
  vector<long long> s1[12][12], s2[12][12];
  gao(vector<long long>(v.begin(), v.begin() + n / 2), s1);
  gao(vector<long long>(v.begin() + n / 2, v.end()), s2);
  FOR (i1, 12) FOR (j1, 12) FOR (i2, 12) FOR (j2, 12) {
    if (i1 + i2 < j1 + j2 || i1 + i2 > j1 + j2 + 1 || s1[i1][j1].empty() || s2[i2][j2].empty()) {
      continue;
    }
    int add = i1 + i2 + j1 + j2;
    for (vector<long long>::const_iterator k1 = s1[i1][j1].begin(); k1 != s1[i1][j1].end(); ++k1) {
      vector<long long>::const_iterator k2 = lower_bound(ALL(s2[i2][j2]), w - *k1);
      if (k2 != s2[i2][j2].end()) {
        ret = min(ret, *k1 + *k2 - w + add);
      }
      if (k2 != s2[i2][j2].begin()) {
        --k2;
        ret = min(ret, w - *k1 - *k2 + add);
      }
    }
  }
  return ret;
}
 
long long Reflections::minimumMoves(vector <int> mirrorX, vector <int> mirrorY, vector <int> mirrorZ, vector <int> finalPosition) {
  long long ret = 0;
  ret += gao(vector<long long>(ALL(mirrorX)), finalPosition[0]);
  ret += gao(vector<long long>(ALL(mirrorY)), finalPosition[1]);
  ret += gao(vector<long long>(ALL(mirrorZ)), finalPosition[2]);
  return ret;
}
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/