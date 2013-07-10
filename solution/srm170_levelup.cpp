/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1930
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

class LevelUp {
public:
    int toNextLevel(vector<int> expNeeded, int received);
};

int LevelUp::toNextLevel(vector<int> expNeeded, int received) {
    int ret;
    return ret;
}


int test0() {
    vector<int> expNeeded = {150, 450, 900, 1800};
    int received = 133;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> expNeeded = {150, 450, 900, 1800};
    int received = 312;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> expNeeded = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 999999};
    int received = 157632;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 842367;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> expNeeded = {150, 450, 900, 1800};
    int received = 612;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 288;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> expNeeded = {159, 212, 599, 920, 1055, 1359, 1838, 2241, 2693, 4195, 5381, 6818, 7838, 8888, 10591, 18782, 19298, 22195, 28571, 33318, 35838, 38691, 44129, 49831, 54203, 59005, 65536, 78371, 88888, 91203, 97381, 105883, 157372, 188281, 195105, 215832, 245773, 274831, 293030, 315838, 375045, 391885, 412583, 433818, 583772, 677731, 683871, 735885, 870938, 999999};
    int received = 375612;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 16273;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> expNeeded = {150, 450, 900, 1800};
    int received = 450;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 450;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> expNeeded = {5487, 10989, 17046, 23592, 30905, 36820, 42594, 46574, 50052, 53216, 57032, 57846, 63933, 71256, 73871, 83767, 85871, 88262, 97900, 101917, 103402, 106719, 112613, 119359, 119915, 123096, 132363, 134593, 134962, 135569, 138750, 140959, 147068, 152658, 157765, 167539, 169044, 169925, 173679, 175015, 175412, 179335, 181485, 184321, 185567, 190332, 193065, 202767, 206276, 214999};
    int received = 79663;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 4104;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> expNeeded = {2040, 8005, 16097, 25045, 34191, 41551, 49081, 54948, 62915, 63626, 71702, 72131, 74784, 77968, 78171, 82330, 82747, 83057, 84904, 85719, 89952, 93949, 97600, 99431, 104545, 107281, 115166, 120141, 127952, 129556, 135878, 145729, 153298, 154064, 162864, 165931, 170409, 176739, 185673, 188119, 191513, 198524, 207751, 213798, 220345, 226127, 232685};
    int received = 142959;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 2770;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> expNeeded = {8405, 12536, 19213, 21615, 25750, 30610, 34479, 41350, 44095, 52939, 57622, 58323, 63489, 64375, 72645, 78578, 88264, 95953, 102716, 105085, 111709, 120918, 126681, 136668, 141456, 149618, 156152, 163075, 167796, 171294, 180661, 183787, 191417, 197462, 202991, 204756, 212013, 221411, 226399, 226402, 234644, 240667, 241371};
    int received = 64236;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> expNeeded = {5327, 7373, 10321, 13337, 22146, 23815, 29807, 34178, 41610, 47589, 56748};
    int received = 6583;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 790;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> expNeeded = {6082, 6398, 12410, 17860, 21302, 31296, 39143, 44466, 46225, 51329, 52402, 55501, 56960, 62628};
    int received = 21247;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> expNeeded = {5429, 7814, 11657, 19132, 20817, 24028, 26664, 30019, 39223, 46230, 53369, 58552, 61071, 63805, 71502};
    int received = 18883;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 249;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> expNeeded = {61, 6816, 16013};
    int received = 1149;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 5667;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> expNeeded = {872, 9038, 15097};
    int received = 1093;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 7945;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> expNeeded = {7518, 15132, 18224, 24258, 33653, 39130, 45359, 48581, 55744, 65185, 71043, 77913, 86558, 95776, 99785, 99965, 101702, 108446};
    int received = 69907;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 1136;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> expNeeded = {2498, 6788, 16586, 24633, 25330, 26082, 35002, 40217, 47028, 54246, 63431, 64113, 65297, 67574, 70642, 71221, 78976, 88274, 88427, 89697, 98436, 104447, 112587, 116323, 117904, 120053, 123969, 133639, 138884, 147030, 149743, 153839, 162627, 165138, 167281, 173119, 176382, 177445, 178498, 184925, 189558, 189796, 193257};
    int received = 37035;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 3182;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> expNeeded = {203, 9814, 10403, 15262, 15528, 17884, 20676, 23709, 29885, 35646, 41264, 48257, 51704, 55234, 61215, 64105, 73140, 74718, 82340, 89069, 94201, 103213, 106045, 114309, 120006, 124510, 134261, 136933, 145844, 152485, 153401, 158867, 165119, 166624, 166950, 169821, 170035, 179505, 185409, 188151, 193383, 201257, 210992};
    int received = 137319;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 8525;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> expNeeded = {2068, 6341, 13133, 16779, 25027, 34900, 40030, 47290};
    int received = 17817;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 7210;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> expNeeded = {9309, 12871, 22369, 30702, 39527, 42018, 51267, 55558, 64301, 71407, 72376, 80342, 84014, 84454, 88325, 94739, 96763, 104860, 107362, 114417, 120271, 124841, 126170, 135168, 139737, 149314, 158186, 167885, 171074, 175355, 184801, 193651, 197846, 206790, 210325, 213345, 214780, 217564, 221228, 227759, 234001, 238634, 243131, 249398, 254471, 259191};
    int received = 30612;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> expNeeded = {2818, 4353, 4858, 9882, 12340, 20526, 24549, 27928, 32043, 41290, 44368, 48024, 51552, 60429, 62935, 70659, 74832, 80873, 87969, 93578, 98755, 99515, 108007, 115778, 121172, 130513, 134551, 141370, 141784, 144856, 145125, 154709, 155668, 156442, 161050, 164467, 169779, 178410, 185206, 194633, 202511, 208738, 211821, 219580, 224684, 226625, 228460, 237737};
    int received = 179156;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 6050;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> expNeeded = {1238, 7101, 13145, 19227, 22861, 24299, 29723, 33748, 38357, 40547, 47644, 52522, 54296, 58704, 60708, 67090, 74916, 82232, 87246, 88220, 91315, 100559, 104112, 106642, 113645, 118654, 119477, 124667, 125306, 126815, 130937, 132814};
    int received = 4064;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 3037;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> expNeeded = {4312, 11671, 19627, 25715, 33451, 36016, 44294, 45479, 52923, 52975, 58568, 64368, 67154, 76925, 80042, 87842, 88588};
    int received = 18932;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 695;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> expNeeded = {651, 5746, 12498, 18159, 20429, 22372, 28672, 32452, 34869, 39398, 40550, 49485, 58326, 63189, 70080, 71361, 73960, 79768, 89327, 93111, 96363, 102326, 111704, 117109, 125859, 135008, 143530, 146432, 152679, 160117, 166416, 173315, 182200, 185252, 194164, 195320, 196667, 201879, 206815, 210579, 220320, 222760, 225459, 230394, 237698, 243640, 246208, 256111};
    int received = 63088;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> expNeeded = {40, 1395, 5838, 11608, 18368, 21561, 22832, 24466, 26914, 34433, 43505, 48604, 49374, 57332, 61835, 71517, 80631, 86481, 87727, 91777, 97743, 105082, 111572, 120237, 122511, 122657, 127264, 132107, 138509};
    int received = 8307;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 3301;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> expNeeded = {6442, 10507, 18273, 26837, 27662, 34974, 44809, 47268, 53380, 60734, 62265, 63476, 67952, 73793, 79508, 83666, 88621, 90186, 95590, 100947, 108479, 111223, 119423, 121972};
    int received = 3426;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 3016;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> expNeeded = {3509, 6074, 7174, 13393, 15633, 23175, 23459, 23466, 25924, 33385, 37056, 39350, 49270, 59053, 65053, 72856, 73850, 74327, 77972, 84681, 89316, 94268, 98895, 105287, 105597, 107756, 113244, 118106, 122814, 129672, 132880, 137449, 143225, 147534, 148322, 156338, 164541, 171965, 176340, 177002, 181887, 189933, 199241, 204046, 208227, 213535, 222496};
    int received = 173560;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 2780;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> expNeeded = {1, 450, 900};
    int received = 450;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 450;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> expNeeded = {100};
    int received = 0;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> expNeeded = {150, 300, 450};
    int received = 300;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> expNeeded = {150, 450, 900, 1800};
    int received = 0;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> expNeeded = {150, 450, 900, 1800};
    int received = 1000;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 800;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> expNeeded = {150, 450, 900, 1800};
    int received = 450;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 450;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> expNeeded = {10, 20};
    int received = 12;
    LevelUp* pObj = new LevelUp();
    clock_t start = clock();
    int result = pObj->toNextLevel(expNeeded, received);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7473757&rd=4655&pm=1930
********************************************************************************
#include <vector>
#include <string>
#include <algorithm>
#include <set>
 
using namespace std;
 
typedef vector<int> VI;
typedef vector<string> VS;
 
class LevelUp {
public:
  int toNextLevel(VI expNeeded, int received) {
    for(int i = 0; i < expNeeded.size(); i++) {
      if(expNeeded[i] > received) {
        return expNeeded[i] - received;
      }
    }
    return 0;
  }
};

********************************************************************************
*******************************************************************************/