/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8442
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

class FillBox {
public:
    int minCubes(int length, int width, int height, vector<int> cubes);
};

int FillBox::minCubes(int length, int width, int height, vector<int> cubes) {
    int ret;
    return ret;
}


int test0() {
    int length = 4;
    int width = 4;
    int height = 8;
    vector<int> cubes = {10, 10, 10};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
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
    int length = 4;
    int width = 4;
    int height = 8;
    vector<int> cubes = {10, 10, 1};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int length = 10;
    int width = 10;
    int height = 11;
    vector<int> cubes = {2000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 1100;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int length = 10;
    int width = 10;
    int height = 11;
    vector<int> cubes = {1099};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
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
    int length = 37;
    int width = 42;
    int height = 59;
    vector<int> cubes = {143821, 14382, 1438, 143, 14, 1};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 5061;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int length = 524288;
    int width = 524288;
    int height = 524288;
    vector<int> cubes = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
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
    int length = 1;
    int width = 1;
    int height = 1;
    vector<int> cubes = {0};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int length = 464;
    int width = 464;
    int height = 464;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 195112;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int length = 524288;
    int width = 524288;
    int height = 524287;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int length = 163840;
    int width = 698368;
    int height = 179200;
    vector<int> cubes = {146071, 777733, 599818, 266038, 12509, 478351, 201640, 618984, 143988, 87783, 837107, 349651, 99683, 484992, 553337, 438088, 68198, 972282, 890781, 586124};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 152390;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int length = 826368;
    int width = 57344;
    int height = 352256;
    vector<int> cubes = {300483, 12903, 885770, 893074, 783710, 83450, 145620, 356667, 677191, 627276, 513995, 926532, 444279, 237315, 785832, 411595, 106453, 89134, 746365, 281031};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 31584;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int length = 372736;
    int width = 786432;
    int height = 245760;
    vector<int> cubes = {332834, 20121, 76680, 588957, 322200, 231687, 728795, 929130, 819202, 475810, 71693, 37304, 323102, 771307, 36319, 561510, 973081, 517179, 498001, 850892};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 15960;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int length = 106496;
    int width = 643072;
    int height = 759808;
    vector<int> cubes = {213209, 274503, 297801, 147439, 967620, 962303, 519679, 275682, 463091, 876840, 379622, 730730, 736467, 401244, 634502, 16937, 915244, 134688, 703446, 718121};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 33264;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int length = 30208;
    int width = 534016;
    int height = 139264;
    vector<int> cubes = {26896, 258866, 167125, 249270, 49081, 1735, 695066, 236752, 566678, 645580, 44228, 650999, 387151, 998523, 107388, 596931, 191246, 808950, 468673, 317313};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 593131;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int length = 524288;
    int width = 819200;
    int height = 851968;
    vector<int> cubes = {640188, 494640, 929124, 399776, 679394, 546986, 826758, 682435, 662649, 242966, 225652, 957443, 492133, 733054, 512856, 18927, 384267, 630293, 992229, 494846};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 523;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int length = 475136;
    int width = 292864;
    int height = 229376;
    vector<int> cubes = {605242, 385053, 297374, 988809, 730761, 242863, 983510, 962548, 531708, 46968, 522217, 859929, 695062, 523161, 22103, 550080, 164490, 925140, 215163, 82564};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 34888;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int length = 327680;
    int width = 224256;
    int height = 493568;
    vector<int> cubes = {786516, 991129, 530463, 289500, 818570, 474342, 540249, 463889, 193206, 88031, 249552, 982900, 674263, 436114, 129260, 989520, 740925, 358246, 831787, 250853};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 213203;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int length = 524288;
    int width = 565248;
    int height = 98304;
    vector<int> cubes = {153167, 305221, 502628, 367453, 778840, 358931, 709335, 736494, 9786, 522353, 791050, 936559, 619917, 594750, 320388, 594037, 795906, 876909, 179859, 40525};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 1136;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int length = 581632;
    int width = 720896;
    int height = 524288;
    vector<int> cubes = {48181, 387895, 196695, 528162, 788050, 997336, 538392, 665914, 987442, 727209, 816227, 483984, 686875, 875717, 370969, 220161, 559646, 726869, 288440, 799841};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 7473;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int length = 442368;
    int width = 879616;
    int height = 196608;
    vector<int> cubes = {21503, 875324, 908533, 750502, 813631, 860977, 289238, 986025, 774422, 645483, 415078, 874278, 198020, 247570, 700543, 440825, 38147, 304770, 957750, 893849};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 106188;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int length = 688128;
    int width = 264192;
    int height = 262144;
    vector<int> cubes = {784559, 756319, 446612, 981045, 328201, 727918, 55001, 858147, 512017, 591359, 321597, 454274, 555985, 516997, 289311, 168986, 113119, 672155, 891044, 836331};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 43078;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int length = 524288;
    int width = 294912;
    int height = 667648;
    vector<int> cubes = {799123, 297905, 343351, 715576, 454620, 501664, 177792, 643283, 161111, 356930, 38113, 208389, 307541, 71872, 859993, 646933, 134582, 54250, 909714, 210356};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 11852;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int length = 548864;
    int width = 507904;
    int height = 7168;
    vector<int> cubes = {384539, 424702, 498337, 706388, 27569, 75072, 730529, 748431, 344800, 864185, 807585, 550941, 557110, 715488, 116527, 138492, 649617, 253613, 928290, 785792};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 348936;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int length = 131072;
    int width = 819200;
    int height = 823296;
    vector<int> cubes = {176338, 320841, 954656, 235775, 540303, 647894, 244610, 452096, 4861, 266390, 412541, 523420, 178141, 8791, 65118, 557856, 395157, 466117, 221251, 177501};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 6632;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int length = 325632;
    int width = 624640;
    int height = 417792;
    vector<int> cubes = {753188, 681108, 928939, 817030, 676934, 505266, 100889, 34643, 139448, 310775, 216855, 438767, 124010, 874244, 439769, 560297, 621031, 448488, 328734, 254159};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 118712;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int length = 632064;
    int width = 136192;
    int height = 65536;
    vector<int> cubes = {284736, 284218, 945770, 195660, 60777, 768182, 812838, 972252, 399860, 846543, 161220, 697147, 217447, 636066, 253895, 307723, 451856, 400442, 873975, 635246};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 186746;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int length = 524288;
    int width = 151552;
    int height = 873472;
    vector<int> cubes = {291091, 950578, 162425, 423123, 534999, 989561, 638673, 474419, 517335, 435187, 596504, 530616, 818898, 333787, 624785, 826185, 769563, 242630, 423008, 438776};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 109640;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int length = 253952;
    int width = 622592;
    int height = 327680;
    vector<int> cubes = {747736, 598845, 885357, 56688, 899362, 919198, 860544, 105974, 218045, 773807, 848666, 333181, 315193, 678409, 369082, 659267, 153233, 886886, 305579, 357106};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 4129;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int length = 923648;
    int width = 69632;
    int height = 802816;
    vector<int> cubes = {251070, 498168, 501701, 633651, 965335, 667053, 935932, 878691, 878076, 396008, 379692, 152483, 843197, 27994, 67978, 836083, 757323, 345721, 393387, 300896};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 60956;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int length = 337920;
    int width = 49152;
    int height = 937984;
    vector<int> cubes = {487553, 0, 0, 928191, 134501, 0, 0, 0, 0, 0, 977350, 408348, 0, 859030, 304427, 95783, 649599, 0, 0, 0};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 21008;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int length = 811008;
    int width = 65536;
    int height = 761856;
    vector<int> cubes = {228805, 0, 0, 472408, 0, 0, 88948, 219734, 0, 667790, 0, 0, 248630, 221779, 71501, 0, 0, 0, 580884, 0};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 10544;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int length = 333824;
    int width = 135168;
    int height = 516096;
    vector<int> cubes = {283564, 77392, 590113, 435779, 601494, 754825, 507409, 0, 0, 771800, 710923, 482364, 160524, 654170, 0, 129117, 333401, 268914, 0, 203642};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 32858;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int length = 163840;
    int width = 915456;
    int height = 540672;
    vector<int> cubes = {0, 0, 0, 0, 31754, 638726, 554309, 0, 0, 0, 0, 654027, 755529, 611469, 672973, 0, 123101, 777856, 567866, 753281};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 32598;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int length = 691200;
    int width = 712704;
    int height = 450560;
    vector<int> cubes = {0, 402208, 0, 976710, 0, 0, 220164, 0, 0, 0, 970900, 0, 215534, 414737, 165193, 0, 969752, 685995, 997302, 71936};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 940973;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int length = 835584;
    int width = 704512;
    int height = 231424;
    vector<int> cubes = {496077, 275518, 0, 0, 0, 0, 0, 0, 188251, 0, 0, 820551, 0, 992569, 360599, 697803, 482345, 248250, 0, 757278};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 142599;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int length = 571392;
    int width = 389120;
    int height = 802816;
    vector<int> cubes = {156047, 0, 608750, 0, 406647, 508608, 229921, 0, 0, 616768, 0, 883177, 364431, 21665, 34122, 739397, 931614, 0, 821100, 0};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 134582;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int length = 180224;
    int width = 475136;
    int height = 557056;
    vector<int> cubes = {449997, 0, 0, 0, 0, 433913, 0, 210615, 428578, 0, 678977, 727959, 295095, 0, 0, 0, 0, 589704, 0, 611792};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 341771;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int length = 212992;
    int width = 47104;
    int height = 581632;
    vector<int> cubes = {0, 363308, 690474, 377751, 0, 0, 0, 186251, 733443, 521186, 0, 54664, 357648, 485057, 0, 771610, 638674, 647146, 93752, 223471};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 39724;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int length = 792064;
    int width = 311296;
    int height = 276480;
    vector<int> cubes = {0, 0, 824419, 659680, 0, 0, 0, 0, 0, 802024, 25116, 643220, 499028, 0, 206632, 548249, 0, 644374, 40454, 52222};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 917651;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int length = 573440;
    int width = 577536;
    int height = 200704;
    vector<int> cubes = {341769, 0, 0, 228353, 0, 872866, 0, 0, 0, 0, 0, 786700, 0, 220582, 0, 0, 0, 0, 981167, 973864};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 329280;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int length = 720896;
    int width = 102400;
    int height = 319488;
    vector<int> cubes = {0, 937731, 65746, 117569, 0, 0, 589274, 0, 322464, 957378, 947460, 0, 722795, 0, 453403, 0, 382145, 591325, 542518, 0};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 24420;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int length = 776192;
    int width = 651264;
    int height = 16384;
    vector<int> cubes = {23353, 0, 0, 413860, 598816, 0, 328998, 763469, 0, 0, 679083, 0, 983190, 700751, 583354, 0, 815777, 0, 190939, 0};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 23761;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int length = 405504;
    int width = 685056;
    int height = 649216;
    vector<int> cubes = {0, 0, 0, 0, 708622, 0, 0, 32687, 0, 303838, 509629, 891821, 0, 142139, 0, 803968, 325187, 0, 0, 0};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 682389;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int length = 851968;
    int width = 850944;
    int height = 12288;
    vector<int> cubes = {142636, 0, 0, 516257, 0, 0, 224348, 413283, 313676, 644095, 0, 0, 671675, 267387, 828868, 0, 0, 0, 0, 0};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 293800;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int length = 689152;
    int width = 708608;
    int height = 69632;
    vector<int> cubes = {0, 348339, 0, 540032, 378625, 0, 441844, 11096, 0, 403023, 0, 355015, 0, 0, 633320, 0, 576251, 357456, 0, 0};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 631388;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int length = 564224;
    int width = 968704;
    int height = 65536;
    vector<int> cubes = {0, 845139, 633491, 0, 752538, 0, 924035, 0, 0, 0, 938576, 812332, 201853, 960822, 236044, 518882, 384209, 0, 123557, 0};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 88562;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int length = 620544;
    int width = 8192;
    int height = 538112;
    vector<int> cubes = {861692, 240743, 0, 741789, 0, 483966, 0, 49882, 317529, 611945, 306550, 466649, 498392, 664820, 572349, 630894, 0, 0, 487410, 899762};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 30725;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int length = 20480;
    int width = 339968;
    int height = 258048;
    vector<int> cubes = {626265, 0, 366069, 938305, 0, 0, 0, 0, 0, 659054, 51607, 638650, 0, 447664, 0, 0, 0, 0, 45119, 353530};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 49014;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int length = 854016;
    int width = 122880;
    int height = 474112;
    vector<int> cubes = {760252, 46406, 0, 0, 0, 0, 53255, 876128, 0, 0, 569492, 856735, 200565, 428597, 0, 0, 0, 0, 0, 0};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 234060;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int length = 786432;
    int width = 876544;
    int height = 880640;
    vector<int> cubes = {860914, 258588, 233332, 384780, 541663, 556208, 354609, 180352, 620573, 520368, 610110, 237308, 410484, 54898, 459691, 32989, 754567, 277294, 138003, 257917};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 66896;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int length = 200192;
    int width = 8434;
    int height = 737280;
    vector<int> cubes = {969907, 558422, 672280, 411971, 201743, 391115, 804544, 122673, 332086, 224872, 250197, 430588, 781267, 504610, 933899, 81455, 585949, 704983, 633218, 218771};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int length = 98048;
    int width = 672512;
    int height = 182528;
    vector<int> cubes = {315349, 636117, 574099, 68572, 615267, 669997, 834269, 897396, 460384, 243644, 43052, 636535, 903709, 962805, 668598, 478387, 126863, 446716, 508721, 350769};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int length = 30038;
    int width = 22016;
    int height = 903872;
    vector<int> cubes = {127755, 128603, 444890, 177794, 853230, 321799, 830214, 980440, 623200, 654791, 731231, 904515, 519985, 249318, 867632, 61875, 533932, 491876, 790875, 895677};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
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
    int length = 34736;
    int width = 386560;
    int height = 270592;
    vector<int> cubes = {439455, 744497, 639712, 890997, 322702, 608657, 545608, 735821, 489565, 891742, 377386, 938919, 354253, 947960, 652764, 802804, 279794, 983717, 888630, 335775};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int length = 6528;
    int width = 93376;
    int height = 144816;
    vector<int> cubes = {701511, 716861, 680614, 515923, 442793, 147729, 428404, 413661, 75567, 334418, 473284, 277149, 998424, 106214, 417348, 952735, 439979, 440685, 103226, 6227};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int length = 704512;
    int width = 999424;
    int height = 428032;
    vector<int> cubes = {852715, 213550, 485911, 245556, 560025, 136426, 434027, 776333, 654175, 149430, 753906, 270703, 584079, 956061, 920656, 70841, 958911, 330368, 335344, 735905};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 171663;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int length = 39040;
    int width = 120832;
    int height = 88064;
    vector<int> cubes = {489198, 868915, 60528, 504410, 783751, 730361, 412219, 640522, 693899, 260578, 913066, 573247, 847649, 47391, 897481, 560039, 8948, 293304, 335505, 555744};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 717506;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int length = 749248;
    int width = 180224;
    int height = 453760;
    vector<int> cubes = {685799, 918865, 939325, 948946, 225160, 733753, 75092, 176140, 540137, 44406, 555864, 770332, 294901, 780664, 448040, 787021, 467071, 720938, 413042, 144685};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int length = 835584;
    int width = 377504;
    int height = 31897;
    vector<int> cubes = {666356, 675530, 9303, 80278, 247527, 164222, 870575, 295891, 888711, 667278, 468939, 32806, 834446, 850694, 600510, 39930, 245161, 240337, 153703, 814651};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int length = 53;
    int width = 51;
    int height = 14;
    vector<int> cubes = {5417, 4054};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 9464;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int length = 4;
    int width = 94;
    int height = 65;
    vector<int> cubes = {2263, 2784};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 4952;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int length = 54;
    int width = 46;
    int height = 96;
    vector<int> cubes = {820, 5014, 3087};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 8885;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int length = 93;
    int width = 84;
    int height = 64;
    vector<int> cubes = {12529, 24759, 4522};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 41769;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int length = 10;
    int width = 7;
    int height = 9;
    vector<int> cubes = {334, 5, 16, 327};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 343;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int length = 8;
    int width = 7;
    int height = 5;
    vector<int> cubes = {132, 21};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int length = 9;
    int width = 8;
    int height = 9;
    vector<int> cubes = {528, 15};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 543;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int length = 6;
    int width = 8;
    int height = 8;
    vector<int> cubes = {15, 31, 2};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int length = 1;
    int width = 6;
    int height = 4;
    vector<int> cubes = {6, 13, 0};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int length = 2;
    int width = 3;
    int height = 3;
    vector<int> cubes = {2, 28, 8, 34};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int length = 1000000;
    int width = 1000000;
    int height = 1000000;
    vector<int> cubes = {1000000, 4545, 45643, 3454, 345};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int length = 657;
    int width = 24366;
    int height = 1235;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int length = 1000000;
    int width = 1000000;
    int height = 1000000;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int length = 1000000;
    int width = 1;
    int height = 1;
    vector<int> cubes = {1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int length = 66560;
    int width = 526336;
    int height = 270336;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 140464;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int length = 1000000;
    int width = 123;
    int height = 2;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000, 1000000, 900017, 1000000, 1000000, 1000000, 1000000, 1000000, 100009, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int length = 524288;
    int width = 524288;
    int height = 524288;
    vector<int> cubes = {1};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int length = 324793;
    int width = 322543;
    int height = 436544;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int length = 1000000;
    int width = 1000000;
    int height = 1000000;
    vector<int> cubes = {1099};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int length = 2048;
    int width = 2048;
    int height = 2048;
    vector<int> cubes = {1};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
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
    int length = 1000000;
    int width = 1000000;
    int height = 1000000;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int length = 64;
    int width = 64;
    int height = 524288;
    vector<int> cubes = {1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int length = 1000000;
    int width = 1000000;
    int height = 1000000;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000, 1000000, 800000, 900000, 280000, 0, 0, 0, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int length = 65536;
    int width = 65536;
    int height = 1;
    vector<int> cubes = {1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int length = 524287;
    int width = 524287;
    int height = 524287;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int length = 1;
    int width = 1;
    int height = 1;
    vector<int> cubes = {143821, 14382, 1438, 143, 14, 1};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int length = 37;
    int width = 42;
    int height = 59;
    vector<int> cubes = {143821, 14382, 1438, 143, 14, 1};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 5061;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int length = 524289;
    int width = 524288;
    int height = 524288;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int length = 1000000;
    int width = 1000000;
    int height = 1000000;
    vector<int> cubes = {1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int length = 99999;
    int width = 99999;
    int height = 99999;
    vector<int> cubes = {4554, 4, 4, 5, 5, 4545, 5, 4, 5, 4, 544, 4545, 54, 4, 55, 44, 87, 787, 8888};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int length = 262144;
    int width = 262144;
    int height = 262144;
    vector<int> cubes = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000, 1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int length = 100000;
    int width = 100000;
    int height = 100000;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int length = 524288;
    int width = 524288;
    int height = 524288;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int length = 97897;
    int width = 56734;
    int height = 32424;
    vector<int> cubes = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int length = 823;
    int width = 45;
    int height = 567;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 583093;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int length = 99999;
    int width = 99999;
    int height = 99999;
    vector<int> cubes = {45542, 4, 22222, 5, 5, 4545, 5, 4, 5, 4, 544, 4545, 54, 4, 55, 44, 87, 787, 8888};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int length = 1;
    int width = 100000;
    int height = 40000;
    vector<int> cubes = {100000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int length = 100000;
    int width = 100000;
    int height = 100000;
    vector<int> cubes = {1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int length = 5;
    int width = 5;
    int height = 5;
    vector<int> cubes = {109, 1};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int length = 1000000;
    int width = 1000000;
    int height = 1000000;
    vector<int> cubes = {1000000, 1000000, 1000000, 10, 10, 10};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int length = 1;
    int width = 65536;
    int height = 65536;
    vector<int> cubes = {1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int length = 1;
    int width = 1000000;
    int height = 1;
    vector<int> cubes = {1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int length = 688128;
    int width = 500736;
    int height = 363520;
    vector<int> cubes = {999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 500000, 500000, 82000, 5, 4000, 100, 1000, 100, 20, 1, 1};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 1342418;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int length = 63;
    int width = 117;
    int height = 251;
    vector<int> cubes = {99999, 99999, 99999, 2, 0, 12};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 81935;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int length = 32768;
    int width = 32768;
    int height = 32768;
    vector<int> cubes = {10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int length = 10000;
    int width = 2000;
    int height = 1000;
    vector<int> cubes = {1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int length = 3;
    int width = 3;
    int height = 3;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int length = 1000000;
    int width = 1;
    int height = 1;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int length = 1000000;
    int width = 1000000;
    int height = 1;
    vector<int> cubes = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
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
    int length = 1000000;
    int width = 1000000;
    int height = 1000000;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
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
    int length = 65536;
    int width = 65536;
    int height = 1;
    vector<int> cubes = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int length = 65536;
    int width = 999999;
    int height = 65536;
    vector<int> cubes = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int length = 1;
    int width = 1000000;
    int height = 1000000;
    vector<int> cubes = {1000000};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int length = 482928;
    int width = 554607;
    int height = 135730;
    vector<int> cubes = {466583, 980409, 178559, 43021, 959429, 435920, 408967, 989235, 490736, 773889, 247523, 568911, 69401, 91407, 582871, 119965};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int length = 1000000;
    int width = 3000;
    int height = 1;
    vector<int> cubes = {0, 0};
    FillBox* pObj = new FillBox();
    clock_t start = clock();
    int result = pObj->minCubes(length, width, height, cubes);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7462740&rd=10800&pm=8442
********************************************************************************
#include <string> 
#include <vector> 
#include <cmath> 
#include <cctype> 
#include <queue> 
#include <map> 
#include <set> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <utility> 
#include <numeric> 
#include <complex> 
 
using namespace std; 
 
typedef long long ll; 
 
ll needed[20]; 
 
class FillBox { 
  public: 
  int minCubes(int l, int w, int h, vector <int> cubes) { 
     
    for (int i = 0; i < 20; i++) 
      for (int j = 0; j < 20; j++) 
        for (int k = 0; k < 20; k++) 
    if ((l>>i)&(w>>j)&(h>>k)&1) 
      { 
        int m = min(min(i, j), k); 
        needed[m] += 1LL<<(i+j+k-3*m); 
      } 
    while (cubes.size() < 20) cubes.push_back(0); 
    int ans = 0; 
    for (int i = 19; i >= 0; i--) 
      { 
        if (cubes[i] >= needed[i]) 
    { 
      ans += needed[i]; 
      needed[i] = 0; 
    } 
        else 
    { 
      ans += cubes[i]; 
      needed[i-1] += 8 * (needed[i] - cubes[i]); 
    } 
      } 
    return needed[0] ? -1 : ans; 
 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/