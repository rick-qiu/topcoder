/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12425
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

class RobotHerbDiv2 {
public:
    int getdist(int T, vector<int> a);
};

int RobotHerbDiv2::getdist(int T, vector<int> a) {
    int ret;
    return ret;
}


int test0() {
    int T = 100;
    vector<int> a = {1};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int T = 5;
    vector<int> a = {1, 1, 2};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int T = 1;
    vector<int> a = {1, 2, 3};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
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
    int T = 100;
    vector<int> a = {400000};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 40000000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int T = 100;
    vector<int> a = {100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000, 100000};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int T = 1;
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int T = 87;
    vector<int> a = {220403};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 220403;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int T = 46;
    vector<int> a = {302003, 193029, 310424, 230014, 296521, 36349};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 35663708;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int T = 99;
    vector<int> a = {172596, 249834, 134241, 102651, 324984, 165366, 290995, 304384, 346831, 128544, 357883};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 1151459;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int T = 25;
    vector<int> a = {214327, 118860, 114647, 162670, 375836, 358973, 387692, 129373, 187218, 257232, 329149, 243510, 42686, 241249, 67260, 11176};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 1832824;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int T = 2;
    vector<int> a = {101857, 15626, 25871, 301305, 87883, 234884, 137543, 11019, 256631, 372267, 16186, 43356, 77269, 336445, 211599, 8963, 256263, 149805, 10087, 359324, 187915};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
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
    int T = 83;
    vector<int> a = {353250, 214794, 326733, 295151, 97008, 330776, 254365, 382667, 139733, 249223, 356578, 247431, 49033, 33024, 212620, 381934, 380599, 332355, 315937, 93209, 224800, 43370, 394082, 114749, 225073, 265950};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 110537076;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int T = 57;
    vector<int> a = {362586, 94703, 40427, 225404, 300267, 36144, 125255, 117292, 364450, 19556, 103737, 61095, 340785, 20161, 385954, 332562, 306767, 323140, 55296, 65230, 124163, 128117, 50739, 191476, 227442, 56393, 336216, 244750, 395031, 360601, 342445};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 28958850;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int T = 60;
    vector<int> a = {384611, 34417, 253351, 142478, 310189, 339823, 163477, 300337, 251067, 136709, 168356, 383112, 242163, 92954, 172937, 362424, 20485, 280885, 241597, 28200, 295333, 260804, 381611, 89359, 133283, 217917, 338113, 44513, 308682, 259998, 197244, 42804, 136879, 259676, 43397, 244476};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int T = 20;
    vector<int> a = {262346, 37496, 230777, 142715, 188934, 27667, 392246, 118645, 251487, 198766, 258766, 230842, 87404, 258579, 180047, 90237, 158089, 283512, 237684, 29534, 368798, 87779, 228972, 7673, 339325, 155258, 391014, 155415, 310812, 15757, 243352, 123846, 53009, 185386, 355035, 283041, 138421, 312082, 179013, 361801, 209186};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 31715640;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int T = 16;
    vector<int> a = {361348, 216521, 150328, 162362, 307266, 85764, 271053, 186644, 339114, 334725, 359234, 214045, 382942, 116821, 28294, 150802, 287707, 292862, 42380, 234650, 265345, 55467, 52755, 8222, 362889, 238573, 191832, 394562, 116774, 342564, 82320, 71661, 104311, 240353, 66280, 120911, 101472, 157624, 112055, 307320, 221591, 82305, 228593, 90116, 66466, 121046};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
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
    int T = 76;
    vector<int> a = {289995, 296645, 16549, 170037, 199748, 146421, 393191, 377645, 390346, 99443, 327229, 228067, 45770, 368691, 359183, 290791, 148527, 304178, 473, 220939, 218564, 372647, 110501, 100476, 23756, 340306, 310046, 66569, 225288, 165488, 223895, 363513, 309961, 328310, 64617, 231263, 126473, 148823, 5740, 121232, 31500, 215563, 210574, 270546, 263917, 6024, 54209, 258939};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 163029728;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int T = 83;
    vector<int> a = {89789, 160170, 22640, 222789, 66977, 376436, 168501, 259699, 314098, 194365, 234014, 80084, 377858, 304702, 287801, 100746, 236418, 139995, 17780, 350306, 109577, 55671, 365423, 229828, 127229, 148484, 197880, 151784, 268731, 358512, 184013, 256555, 361640, 7558, 128877, 315650, 367826, 53280, 211214, 266821, 72344, 239706, 393721, 168009, 162414, 391006, 166762};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 1695545;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int T = 99;
    vector<int> a = {51194, 71952, 291596, 137739, 122217, 55278, 301272, 262775, 301819, 131307, 363295, 34050, 74791, 94680, 129177, 313113, 258829, 363739, 89977, 387553, 83728, 350935, 43132, 397680, 5340, 309074, 23772, 182970, 290184, 310562, 15477, 73835, 84641, 11286, 131607, 226701, 316196, 325743, 203286, 28584, 68438, 3333, 133057, 43505, 391249, 259561, 272652, 302449, 43983, 285735};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 363009834;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int T = 3;
    vector<int> a = {203694, 237555, 350812, 268739, 350613, 185294, 244945, 276160, 290601, 240514, 145720, 371589, 107381, 64945, 171685, 29601, 310647, 89540, 271867, 226808, 278175, 286437, 160996, 232651, 92914, 80067, 280062, 56282, 158681, 313308, 71667, 70727, 75387, 184438, 67090, 321549, 36138, 199420, 329326, 260353, 118361, 243630, 257409, 389190, 381254, 50804, 260308, 87243, 342569};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 378548;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int T = 83;
    vector<int> a = {89578, 131331, 203310, 371451, 74264, 320576, 268033, 372182, 161820, 222173, 186143, 261677, 224810, 394868, 51834, 87594, 38893, 361720, 300954, 16483, 35982, 331313, 255762, 381786, 15859, 19861, 30395, 381218, 375791, 98890, 74254, 86032, 13646, 55774, 205169, 348882, 213987, 134088, 369836, 190613, 132961, 245158, 343462, 324142, 385192, 345595, 282837, 48653};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 81704536;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int T = 84;
    vector<int> a = {112932, 231510, 254587, 189994, 377544, 385053, 394397, 264637, 107464, 17614, 347643, 20788, 364716, 304004, 146108, 383664, 9255, 39849, 130294, 295753, 86061, 173327, 366625, 222474, 100302, 120652, 19883, 147538, 51173, 379006, 40103, 294634, 349389, 67084, 309242, 188533, 41722, 174913, 385449, 49222, 111568, 227764, 169829, 120911, 260099, 296013, 109639};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int T = 70;
    vector<int> a = {105452, 332908, 46755, 241217, 369062, 54550, 264275, 222599, 149189, 309725, 26377, 11312, 210401, 210412, 215125, 362867, 108006, 87482, 217734, 379778, 19733, 193289, 253565, 240627, 191592, 285740, 324884, 278685, 137828, 372749, 348342, 24048, 162979, 49898, 53633, 171811, 233, 296700, 394839, 380195, 226882, 29979, 316820, 283288, 12630, 296261, 248171, 68432, 13841, 223490};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int T = 80;
    vector<int> a = {386475, 203938, 344759, 337315, 349342, 219479, 268498, 121132, 106902, 79296, 75866, 87618, 218515, 53726, 182108, 268101, 121578, 82645, 27936, 85588, 250403, 173905, 389565, 351231, 305507, 218252, 113122, 119063, 391834, 318650, 233047, 208256, 118540, 246610, 38178, 262708, 76554, 301475, 358736, 189000, 214249, 96772, 351700, 31796, 244863, 194095, 343070, 341502, 290431};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
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
    int T = 25;
    vector<int> a = {276227, 209958, 170353, 89631, 247550, 201350, 236274, 283863, 69204, 9204, 386079, 138798, 270505, 368349, 351958, 171273, 92624, 315593, 100894, 308336, 269569, 263676, 317604, 170471, 260995, 98048, 354689, 193655, 231506, 336010, 392160, 75991, 262649, 358174, 240845, 217693, 226287, 345482, 195723, 136702, 189367, 243650, 207004, 284258, 253549, 90208, 142133, 231283};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 11091550;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int T = 72;
    vector<int> a = {64418, 265433, 174902, 247526, 319123, 290105, 74307, 35926, 344622, 182376, 299575, 20710, 48405, 9945, 155280, 331272, 69527, 383237, 357340, 344609, 394320, 267038, 189755, 326418, 100942, 25252, 378009, 379841, 260193, 379231, 198463, 331268, 41586, 6899, 79443, 207858, 299938, 257370, 125927, 274622, 273571, 153316, 390176, 151509, 333470, 221920, 60655};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 129665808;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int T = 3;
    vector<int> a = {152359};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 152359;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int T = 1;
    vector<int> a = {88697, 391616, 206200, 217329, 279143, 220301};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 1225892;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int T = 1;
    vector<int> a = {399040, 11811, 284182, 36818, 181434, 168355, 200843, 168683, 38875, 347244, 126895};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 617832;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int T = 2;
    vector<int> a = {244325, 136835, 115973, 149479, 363280, 284489, 29019, 234519, 116047, 152124, 339744, 158327, 287688, 378563, 128297, 183970};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 2099014;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int T = 2;
    vector<int> a = {196142, 395538, 109368, 87449, 318162, 22071, 308438, 146482, 382310, 73683, 46253, 65551, 31299, 67191, 226515, 109926, 342759, 259689, 51889, 260195, 76502};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 2561148;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int T = 1;
    vector<int> a = {303595, 148834, 136628, 226194, 392838, 290134, 177028, 136249, 66540, 216336, 15409, 9834, 153999, 336801, 214858, 17306, 165322, 365573, 271564, 375252, 75286, 156269, 169159, 3599, 307741, 93135};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 686061;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int T = 3;
    vector<int> a = {212082, 152053, 300340, 64625, 88815, 326826, 144435, 383415, 88377, 78380, 142856, 284341, 5979, 214894, 35821, 176423, 327141, 358811, 371574, 311667, 111686, 198074, 310868, 211985, 19045, 204641, 57444, 81041, 253775, 171775, 62433};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 2126800;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int T = 1;
    vector<int> a = {18322, 321048, 131307, 262013, 356125, 111811, 206196, 213558, 218100, 340369, 95362, 1419, 236114, 136005, 23932, 239415, 66976, 189456, 212783, 191113, 210525, 43008, 42696, 295460, 166636, 372967, 219003, 205232, 82179, 147150, 203174, 375119, 133439, 178577, 11465, 343216};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 1431182;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int T = 3;
    vector<int> a = {247530, 8704, 68928, 110171, 244733, 392066, 218521, 358963, 94, 125989, 239105, 290636, 93863, 288833, 282148, 165570, 340937, 245733, 388875, 144941, 274094, 158002, 391052, 39341, 229385, 386566, 212904, 200990, 108950, 148464, 376846, 340655, 282328, 340397, 25728, 246963, 229664, 388100, 36531, 29972, 182591};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 2421321;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int T = 2;
    vector<int> a = {46129, 318580, 120514, 88663, 141280, 305211, 365129, 285745, 322970, 343055, 1555, 244146, 326365, 167520, 80896, 392382, 290030, 375834, 322634, 318379, 144301, 297555, 212401, 335854, 350078, 250040, 191026, 22888, 144918, 89003, 160598, 214781, 25049, 181429, 34626, 94783, 339627, 223390, 24814, 17721, 327911, 5570, 123912, 93388, 326737, 313839};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 5186460;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int T = 98;
    vector<int> a = {358008, 11711, 147060, 268160, 322012, 192778, 237778, 122912, 332164, 26587, 347941, 325506, 13923, 287482, 314651, 37795, 278046, 54461, 262998, 126430, 272137, 314280, 95913, 107136, 387780, 52818, 182192, 320954, 314879, 190832, 309803, 1696, 244907, 282978, 97338, 70258, 147536, 97611, 39549, 95437, 220355, 174080, 83744, 204098, 257202, 193010, 54517, 284543, 33684};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int T = 97;
    vector<int> a = {367599, 231179, 114785, 288848, 354397, 399770, 66027, 385416, 173589, 180874, 192451, 214775, 151756, 310208, 241114, 16088, 68548, 169849, 224591, 53626, 285867, 52630, 331301, 286430, 202790, 264163, 389478, 52244, 149137, 42281, 372027, 20192, 71471, 80946, 186402, 354166, 77450, 213689, 324124, 362495, 44156, 110653, 105781, 369450, 113487, 35014, 348155};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 1834985;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int T = 99;
    vector<int> a = {134075, 352800, 297751, 387349, 79262, 294560, 15974, 201613, 157111, 361095, 15060, 271305, 385061, 253026, 301740, 25399, 382164, 266607, 134900, 154302, 834, 284818, 52876, 389542, 58870, 113189, 372115, 178437, 79483, 14572, 387466, 290441, 49920, 382237, 40029, 307538, 113897, 25264, 147241, 18013, 126861, 42390, 156082, 152294, 32973, 117561, 227318};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 1354763;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int T = 98;
    vector<int> a = {266434, 66361, 255168, 312818, 289934, 164479, 329728, 100491, 315995, 52905, 395661, 386320, 214486, 193567, 12360, 248199, 339559, 264273, 46014, 227056, 5361, 16814, 251218, 384422, 344943, 234345, 143913, 286003, 225585, 162501, 365088, 282999, 51824, 99765, 263580, 91624, 360273, 219242, 348034, 178270, 384164, 87327, 72103, 230184, 187094, 94605, 335257, 238910};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 180966016;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int T = 100;
    vector<int> a = {326109, 29451, 171400, 312523, 321054, 45873, 254021, 267025, 52979, 172882, 289088, 258038, 137162, 212270, 369014, 308323, 150051, 384766, 105029, 378579, 166443, 13148, 212586, 124147, 81550, 212533, 388716, 97421, 120914, 118579, 95048, 45870, 46020, 94684, 25709, 18582, 220822, 37543, 133218, 249089, 76160, 329742, 68137, 277390, 42409, 29200, 323424};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
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
    int T = 100;
    vector<int> a = {287128, 253931, 141887, 294275, 96979, 150081, 284258, 228009, 233355, 75787, 79297, 385526, 352421, 260161, 265361, 116397, 213337, 77290, 233602, 390269, 41435, 121792, 234814, 71456, 187368, 138879, 119391, 394835, 312244, 129180, 309021, 168709, 74687, 192867, 257528, 82484, 397020, 188462, 343095, 12079, 366582, 225848, 99226, 259035, 43400, 203099, 179198, 298806, 298667};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
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
    int T = 99;
    vector<int> a = {214811, 317290, 71644, 308189, 121105, 348383, 21421, 210028, 381012, 82051, 43531, 4000, 111305, 229707, 26153, 149496, 189637, 216848, 160384, 326893, 4338, 355840, 290311, 324972, 13684, 154225, 200210, 258528, 138023, 6116, 7473, 122566, 383239, 102088, 262112, 312009, 72804, 97393, 89790, 71847, 90206, 262296, 193782, 153179, 211467, 233390, 76848};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 235735830;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int T = 97;
    vector<int> a = {350635, 138237, 70766, 199559, 133859, 255167, 57686, 21652, 395705, 48832, 127734, 223826, 274638, 167792, 358577, 48296, 358762, 58765, 330057, 114126, 183208, 239417, 160029, 216714, 370364, 54202, 179515, 181696, 74833, 342813, 121660, 97374, 82769, 399315, 284908, 341552, 50521, 200567, 351180, 70295, 33976, 192517, 81409, 67323, 15096, 350813, 337442, 43081};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 424545720;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int T = 97;
    vector<int> a = {25318, 172873, 66594, 276668, 336204, 144517, 295923, 293657, 52785, 60321, 22603, 365630, 216547, 170807, 74641, 210616, 89229, 340168, 372499, 151226, 389913, 43549, 170252, 237931, 132539, 206693, 368923, 82046, 160043, 148136, 323627, 340509, 321228, 385432, 70858, 338360, 334286, 114487, 362069, 170492, 125700, 95549, 205776, 216682, 268856, 250435, 281063, 196257, 240532, 230088};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 1102245;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int T = 98;
    vector<int> a = {119510, 281225, 166684, 43668, 319783, 383872, 193977, 382520, 28062, 228055, 85259, 129313, 143490, 164026, 101971, 230789, 83890, 212429, 4988, 203070, 317604, 91158, 172640, 32501, 319407, 223806, 60131, 31043, 347996, 72691, 140826, 341554, 137062, 234099, 166540, 344470, 134628, 56831, 115463, 141970, 124325, 218699, 9440, 372067, 2036, 6995, 120856, 92224};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 3660664;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int T = 100;
    vector<int> a = {399999, 400000, 400000, 399998, 399998, 399999, 399999, 399999, 399998, 399997, 399997, 399999, 399998, 399999, 399998, 399999, 399999, 400000, 399997, 399997, 399999, 399998, 400000, 399999, 399999, 400000, 400000, 399999, 399997, 400000, 399997, 399998, 399999, 400000, 399997, 399997, 399997, 400000, 399998, 399997, 399998, 399999, 399997, 400000, 399998, 399997, 399997, 399997};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int T = 98;
    vector<int> a = {399997, 400000, 399999, 399998, 400000, 399999, 399999, 399998, 399997, 399997, 399998, 399998, 399997, 400000, 399997, 399998, 400000, 399998, 400000, 399999, 400000, 399997, 399997, 399998, 399998, 399997, 399997, 399997, 399998, 400000, 400000, 400000, 399998, 399997, 399998, 399998, 399999, 399999, 400000, 399997, 399997, 400000, 399998, 399999, 399998, 400000, 400000, 399997, 399999};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
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
    int T = 99;
    vector<int> a = {400000, 399999, 400000, 399999, 400000, 399998, 399998, 399999, 399999, 399998, 399998, 399999, 399998, 399998, 399998, 400000, 399999, 400000, 399998, 399997, 399998, 399998, 399999, 399997, 399997, 399999, 399997, 399999, 399997, 399997, 399997, 400000, 399997, 399998, 399999, 399997, 399999, 400000, 399998, 399997, 399997, 399997, 400000, 400000, 399998, 399997, 399999, 399998, 400000, 399997};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 2400006;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int T = 97;
    vector<int> a = {399998, 400000, 399999, 399999, 399999, 399998, 399997, 399998, 399999, 399999, 399997, 400000, 399999, 399997, 400000, 400000, 399997, 399998, 400000, 399999, 399998, 399997, 399997, 399997, 399999, 399999, 399999, 400000, 399997, 399998, 399999, 399998, 399999, 399998, 399999, 399999, 399999, 399998, 399999, 399999, 399998, 399997, 399999, 399999, 399999, 399997, 399999, 399997};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 3999998;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int T = 98;
    vector<int> a = {399999, 400000, 399998, 400000, 399998, 399999, 399999, 399998, 400000, 399997, 399997, 399998, 399999, 399998, 400000, 400000, 400000, 400000, 400000, 400000, 399998, 400000, 399997, 399998, 399997, 399998, 400000, 399998, 399998, 399997, 399999, 399999, 399999, 399999, 399998, 399999, 399998, 399998, 399997, 400000, 399999, 399998, 399998, 400000, 399999, 399997, 400000, 399999, 399997, 399997};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 1600012;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int T = 58;
    vector<int> a = {570, 2013, 2, 13, 1414, 1732};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 65888;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int T = 5;
    vector<int> a = {1, 1, 2};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
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
    int T = 100;
    vector<int> a = {400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000000;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int T = 100;
    vector<int> a = {400000};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 40000000;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int T = 100;
    vector<int> a = {400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000, 400000};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 1560000000;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int T = 2;
    vector<int> a = {2};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
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
    int T = 5;
    vector<int> a = {1, 2, 2};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int T = 50;
    vector<int> a = {1, 1, 2};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int T = 1;
    vector<int> a = {3, 2, 3};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int T = 100;
    vector<int> a = {399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999, 399999};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int T = 11;
    vector<int> a = {2, 3, 5, 7, 11, 13};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int T = 100;
    vector<int> a = {1, 1, 2, 45, 23, 23, 23, 4, 65, 76, 45, 34, 23, 45, 45, 65, 34, 23};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int T = 1;
    vector<int> a = {1};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int T = 1;
    vector<int> a = {6, 6};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int T = 1;
    vector<int> a = {2, 2};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int T = 100;
    vector<int> a = {1, 1};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int T = 1;
    vector<int> a = {1, 2, 3};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
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
    int T = 2;
    vector<int> a = {1, 2, 3};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int T = 5;
    vector<int> a = {10, 6};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int T = 100;
    vector<int> a = {1};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
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
    int T = 100;
    vector<int> a = {399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998, 399998};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int T = 4;
    vector<int> a = {1};
    RobotHerbDiv2* pObj = new RobotHerbDiv2();
    clock_t start = clock();
    int result = pObj->getdist(T, a);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23019050&rd=15490&pm=12425
********************************************************************************
#include <iostream>
#include <queue>
#include <cstdio>
#include <algorithm>
#include <vector>
 
using namespace std;
 
#define REP(i,x,y) for(int i = x; i < int(y); i++)
 
class RobotHerbDiv2 {
  public: int getdist(int T, vector<int> a){
    int dx[]={ 1, 0, -1,  0};
    int dy[]={ 0, 1,  0, -1};
    int x=0,y=0,j=0;
    while(T--){
      REP(i, 0, a.size()){
        x+=dx[j]*a[i];
        y+=dy[j]*a[i];
        j=(j+a[i])%4;
      }
    }
    int ans=abs(x)+abs(y);
    return int(ans);
  }
};

********************************************************************************
*******************************************************************************/