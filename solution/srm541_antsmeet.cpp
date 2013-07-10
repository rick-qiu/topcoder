/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11887
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

class AntsMeet {
public:
    int countAnts(vector<int> x, vector<int> y, string direction);
};

int AntsMeet::countAnts(vector<int> x, vector<int> y, string direction) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 10, 20, 30};
    vector<int> y = {0, 10, 20, 30};
    string direction = "NWNE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {-10, 0, 0, 10};
    vector<int> y = {0, -10, 10, 0};
    string direction = "NEWS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {0, 9, 0, 0};
    vector<int> y = {0, 0, 4, 5};
    string direction = "EWSS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {-1, 1, 0, -1, 1, 0, 0, -1, 1};
    vector<int> y = {0, 0, 0, -1, -1, 1, -1, 1, 1};
    string direction = "EENWWSWSE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {-2, -3, -2, 1, -3};
    vector<int> y = {-1, -1, -3, 3, -2};
    string direction = "SWNSE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
    vector<int> y = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
    string direction = "ESEWNNEWW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {4, 7, 6, 2, 6, 5, 7, 7, 8, 4, 7, 8, 8, 8, 5, 4, 8, 9, 1, 5, 9, 3, 4, 0, 0, 1, 0, 7, 2, 6, 9, 6, 3, 0, 5, 5, 1, 2, 0, 4, 9, 7, 7, 1, 8, 1, 9, 2, 7, 3};
    vector<int> y = {2, 3, 0, 6, 8, 4, 9, 0, 5, 0, 2, 4, 3, 8, 1, 5, 0, 7, 3, 7, 0, 9, 8, 1, 9, 4, 7, 8, 1, 1, 6, 6, 6, 2, 8, 5, 1, 9, 0, 1, 1, 1, 7, 0, 2, 5, 4, 7, 5, 3};
    string direction = "SSNWSWSENSWSESWEWSWSENWNNNESWSWSWWSSWEEWWNWWWNWENN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {0};
    vector<int> y = {0};
    string direction = "N";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {-1000, 1000};
    vector<int> y = {-1000, 1000};
    string direction = "NW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {412, 412, 734, 734};
    vector<int> y = {597, 275, 597, 275};
    string direction = "SEEE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {-328, 312, 616, 632, 632, -328, 616, 535, 431, 312, 431, 535};
    vector<int> y = {707, 386, 123, -253, 707, -253, 308, 609, 308, 609, 123, 386};
    string direction = "NNWWEWNWSESE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {70, -126, 816, -479, 557, 918, -406, -126, -394, -394, 764, 816, 70, -479, 388, 557, -406, 764, 918, 388};
    vector<int> y = {7, 481, -246, 821, -604, 7, 821, 749, 481, 749, -397, -674, 855, 748, -246, -397, 748, -604, 855, -674};
    string direction = "WEEEESSSNNSSSESNEWEN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {-531, 406, 232, 648, 547, 470, 648, 406, -168, 814, 503, 322, 434, 828, 503, 648, -443, 828, -220, 470, 502, 404, -592, 322, 547, -531, 457, 648, 502, 729, -443, -168, 404, 729, 457, -220, 232, 814, 434, -592};
    vector<int> y = {625, -692, -73, 605, 179, 102, 585, -595, 585, 207, -692, -73, 387, -7, -595, -231, -218, 387, 991, 179, 459, 207, 564, 17, 102, 564, 991, 459, 605, 954, 954, -231, 617, -218, 314, 314, 17, 617, -7, 625};
    string direction = "ESNEWWSWNSWWNENNESNWSNSWWNNNSWNNWEEWESNN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {499, 497, 968, 601, -487, 234, -59, -59, 228, -297, 898, 497, 602, 224, 499, 228, 602, -487, 115, -256, 341, 573, 417, -331, 341, -465, 869, -297, 670, 716, 224, 23, 467, 670, 383, 756, 898, 115, 23, -331, 261, 261, 573, 417, -219, 869, 467, -219, 328, 601};
    vector<int> y = {604, 729, 324, 335, 862, 335, 434, 862, 211, 962, 163, 699, -129, 560, 433, -348, 138, 434, 119, 519, 324, 766, 606, -348, 962, -238, 138, 324, 163, 905, 359, 560, 729, 391, 119, 536, 391, -149, 359, 211, 766, 454, 454, 905, 519, -129, 699, 482, 433, -32};
    string direction = "WSNEWWNESESSWENSWSNWSSSESWENWSWNSNEWWSSNNNNWNNWSWW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {45, -16, -400, -271, -301, 883, -350, -214, -25, -641, -271, -697, -156, -301, 950, 552, 742, -670, -16, 883, -506, 314, -214, 542, 81, 45, 264, 81, 613, 348, 799, -25, 683, 552, -350, 542, -670, 692, 683, 742, 264, -697, 613, 950, -132, -641, 799, -506, -156, 862};
    vector<int> y = {591, -464, 525, 814, 259, 136, 599, -464, 744, 138, 675, 599, -119, 908, -137, -195, 437, 807, -266, -195, 631, 807, -266, 437, -119, 372, 372, -356, -381, 259, -381, 36, 36, 136, 946, 237, -177, -558, 744, 237, 591, 946, -195, 531, 675, 165, -195, 525, -356, -558};
    string direction = "NNSNSSSWNNNSNSENSNEWESWSWWWWSWEEWESEEWWSSEWSNNENEN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {-205, 454, -176, 667, 846, 51, 785, 846, 7, -160, 929, 87, -160, 503, -253, 881, -166, 830, 334, -533, 619, 486, -205, 63, 503, 486, -498, 667, 929, 51, 63, 583, 87, 830, 388, 7, 388, -54, -582, -257, 583, -371, -367, -176, -253, 454, -54, -180, -166, -498};
    vector<int> y = {-193, -193, 531, -185, 902, 695, 639, 542, 714, -280, -486, -151, 710, -51, 757, -180, -51, 710, -533, 469, -185, 902, 466, 695, 618, 542, -644, -137, 810, 707, 707, 118, 469, -280, 41, 531, 686, -686, -686, 41, -180, 875, -486, 714, 875, 466, -158, -533, 618, 639};
    string direction = "SWESEWENNSNNESWNSSESSWSENNWSWEWWWNEESWNENNWENNWWNS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {-173, -678, -129, 100, 965, -341, -388, -388, 694, 44, 152, -509, -193, -407, -407, 485, 44, 986, -97, 559, -97, -202, 986, -678, 379, -105, 888, -341, 270, 912, 559, 888, 18, 291, 270, 291, -193, -129, 485, 773, 912, -491, -665, 965, -598, -491, 694, -105, -202, -598};
    vector<int> y = {691, 691, -20, 668, 936, 668, -471, 69, 665, 796, 69, 226, 865, -235, 657, -235, 655, -622, 655, 385, 796, -322, 469, 186, 493, 469, 385, 227, 602, -240, 56, 56, 231, 999, 493, 110, -240, -382, 657, 231, 865, -382, 141, 665, 110, -20, 936, -622, 141, 999};
    string direction = "NESEENNSWWWWNSESSWENNNWNNSEWWESNNWNNSSNSSWWWEWWNNS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {545, 449, 683, 144, -584, 858, -237, -153, 538, 771, 339, 819, 631, 631, -544, 995, -193, -12, 84, 771, 84, 545, 764, -137, 819, -193, 538, -471, -237, 858, -12, 697, 144, 449, 289, -471, 72, 72, -137, 888, 289, -274, 888, 226, 120, 697, 683, 339, -274, 120};
    vector<int> y = {-325, 259, -320, 286, 35, -12, 975, 750, 462, -223, 559, -81, 773, 286, 359, -320, 503, 503, -216, 428, -228, -12, 462, 259, 975, 684, 236, 60, -81, -325, 684, 367, 773, 845, 654, 257, -228, -216, 845, 367, 336, 60, 176, 446, 428, 176, -8, 446, 257, -223};
    string direction = "NSESWENSWWNNSSWENNENSSESSSSENENSWSNEESWWNSSSEWSWWE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {-66, 903, 498, -394, 389, -381, 462, 184, -29, 231, 415, -469, -394, -388, 636, 636, 415, 498, -577, 288, -469, 4, 14, 462, -324, 0, 744, 402, -341, -341, 389, 903, -482, -324, -625, -625, -195, 231, -486, 582, 288, -490, -490, -577, 0, -388, -22, 4, 744, -482};
    vector<int> y = {820, -34, 57, 492, -306, 303, -45, -34, 571, 752, -306, 750, 820, 296, -94, 571, -332, 577, 750, -119, 858, -6, 535, -105, 924, -119, 558, -105, 558, -527, -332, 685, 674, 18, 817, 674, 39, 535, -6, 18, -407, 39, 334, 858, -407, 303, 57, 484, -527, 817};
    string direction = "SSNNSESSSEEWSNWSNEEWSEWWWNSSSSNSEEENESSWWEWWNEWWWW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {478, -664, 759, 434, -405, 513, 565, -396, 311, -174, 56, 993, 251, -341, 993, -112, 242, 129, 383, 513, -78, -341, -148, 129, 423, 493, 434, -405, 478, -148, 929, 251, 56, 242, 929, -78, 423, -664, 802, 251, 759, 383, -112, -591, -591, -248, 660, 660, 735, 493};
    vector<int> y = {-186, 98, 948, 795, 289, -678, 948, -170, -195, 290, -354, -424, 289, -157, -166, 150, 706, -678, 684, -294, -234, 36, 36, -294, -216, -234, 427, 945, 265, -157, 265, 715, 275, 715, -186, 337, 798, -170, 427, 706, 754, 961, 286, -216, 798, 286, 961, 684, -424, 337};
    string direction = "WNSNNSSWWWEENWESNSWSWSEWWEWEWWWNWESNSSNNSNNWWWNESE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {-12, 133, 648, 597, 231, 841, 455, 81, 257, -541, 589, -541, -142, -471, 359, 55, 55, -78, -12, -78, -220, 841, -220, 133, -691, -531, 111, -297, 771, 575, -471, -188, 597, 359, 575, 910, 81, 455, -277, -12, -277, 771, -490, 111, 231, 257, 648, -490, 910, -188};
    vector<int> y = {-197, -342, -84, -26, 384, 603, 603, -507, -507, 388, 402, 439, 76, -111, 512, -400, -267, -267, -342, -400, 626, 989, 594, -197, 731, 65, -111, 65, -84, 388, 471, 626, 287, 384, 402, 287, -331, 989, 612, 52, 489, -207, 439, 471, 512, -331, -207, 388, -26, 594};
    string direction = "SWSSNENWNNSWENSWESEEEESENNNSNWNSSWSSWEWWSSNNESSWSN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {-326, 275, 96, 528, -247, 584, 275, 511, 603, 436, 857, 857, -1, -247, 226, -470, 22, 625, -115, -117, 88, -388, 528, 511, 302, -326, 22, -59, 854, -1, -310, 722, 722, -117, 781, -59, 508, 697, 235, 235, 625, 864, -208, 508, 854, 781, 302, 584, -115, 603};
    vector<int> y = {398, 701, -24, -656, -208, 758, 254, 646, 609, -8, 270, -79, 728, -76, 202, 342, 67, -376, -76, 260, 728, 521, 342, 293, 308, -24, -692, 308, 830, 639, 260, 701, 254, 453, -692, -376, 270, 758, -209, -8, 308, 293, 701, -79, 202, 67, 609, 871, -208, 308};
    string direction = "SSWSWENSEWESWWNWWSWWESSSSWNNWNWNESWSEWWEWSWEWSEEWE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {532, -557, 662, 4, -624, -160, 460, 591, -557, -21, -201, -338, -474, 910, -338, 932, 29, 805, 459, 906, 821, 805, -160, 662, 906, -624, 932, 522, -311, 460, 4, -494, 459, -474, -494, 579, 454, 821, 591, 579, 910, 482, -177, 454, 29, 32, 532, -338, 482, -21};
    vector<int> y = {651, 895, 129, 334, 738, -438, 938, 687, 334, -576, 416, -259, -200, 700, -481, 789, 451, -241, 129, -438, 940, -564, 628, -74, 628, 82, -481, 312, 528, 301, 895, 528, -74, 853, 345, -200, 824, 651, 824, 853, 312, -241, 938, 687, 322, 82, 940, 789, -564, -259};
    string direction = "ESNWSNEWNSSSESSWENWSSSNNWNSENWWWSESSSNEWEEEEWEEWSS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {744, 193, -284, 582, -141, 193, 635, 75, -617, -125, -372, 258, 495, 71, 899, -141, 10, 816, -175, 497, 487, 582, 82, -617, 487, 899, 253, 744, 816, -478, 82, -536, -125, 161, -245, 253, 71, 342, 75, 792, -536, 296, 258, 10, 792, 161, 344, 497, -478, 635};
    vector<int> y = {-408, 786, 982, -365, 539, 344, 344, 854, 854, 342, 371, 723, 405, 417, 564, 573, 158, -408, 573, 645, 723, 342, 493, 162, 494, 671, 632, -480, -480, 371, 631, 127, -365, 127, 101, 543, 101, 543, 162, 564, 824, 402, 494, 645, 671, 824, 405, 158, 265, 786};
    string direction = "NNNWWSESSENNSWSEENNNNESWSSESSSNENSWEESNEESENSNNWWS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {255, -201, 617, 236, -572, -365, 236, 346, -497, -494, 303, -494, -572, 549, 878, -199, -676, 549, 16, 285, 245, 105, -658, -242, -450, 883, -201, -694, -269, -269, -676, -450, -694, 617, 896, 33, 910, 883, 896, -157, -365, 255, -86, 105, 878, -370, 285, 346, -497, -157};
    vector<int> y = {901, 670, -364, -394, 889, 682, 280, 757, -214, 96, 685, 52, 785, 931, -58, 300, 785, 685, 729, -58, 300, 757, 234, 670, 52, -364, 711, -214, 840, 739, 889, 96, -411, -98, -151, 901, -394, -98, 729, -267, 961, 679, 682, 516, 535, 840, 535, 516, -411, 234};
    string direction = "WWESWSNEEWWEESWWNEEESESNSSWSNWWWWSSSNNEWNNEWNESNWE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {-212, -154, 956, 653, 176, 72, -653, -157, -34, -653, -538, 200, 278, 5, -45, 397, 574, 571, 72, 534, 219, 397, 391, 239, -538, -212, 574, 160, 5, 457, -45, -60, 414, 150, -534, 150, 278, 653, 414, 939, 168, -60, 200, 956, -154, 219, 571, 457, -534, -157};
    vector<int> y = {-538, 259, 774, 397, 859, 797, -538, 825, 980, -97, 476, 763, 283, 663, 914, 859, 765, 479, 914, 262, 49, 638, 774, 802, 980, -97, 605, 183, 825, 104, 797, 259, 605, 11, 802, 281, 104, 479, 765, -143, 175, 353, 802, 209, 353, 802, 397, 283, 49, 663};
    string direction = "SNNWEEEWWSSNENSEWWNSNENESNWNNSEWWESESNWEESESSEWWNE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {-254, 230, 548, 701, -656, 450, 230, 333, -74, -495, 631, 631, -250, 830, 665, -74, 884, -45, -552, -224, 413, 429, 49, 418, 473, -656, -254, 830, 858, 858, 413, 665, 49, -552, 473, 478, 579, 579, 450, 884, 701, -224, 655, -417, -250, -237, 181, 655, 429, -495};
    vector<int> y = {665, 912, 912, 133, 691, 158, 594, 462, -12, -243, -596, 691, -540, -128, 373, -267, -130, 705, 625, 297, -243, 133, 826, 826, 281, -596, 648, -379, 705, -198, 665, 158, 457, 297, -130, -540, -379, -128, 373, 281, 405, 625, 541, -288, 188, 665, -267, 269, 405, 665};
    string direction = "NENWSWWESWSNSWSNNNNEENESWWSSSWESSEWSESNEEEWEWWSENN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {735, 226, 401, -248, -418, 226, 351, -168, 40, 246, 312, 401, 689, 299, -168, 606, 759, 241, 281, 606, 196, 533, 241, 485, 735, 281, 407, 437, 639, 485, -441, 533, 312, -441, -254, 842, -418, 196, 385, 689, -248, 437, 493, 246, 273, 493, 273, 385, 407, 368};
    vector<int> y = {995, 927, 995, 701, -93, 785, -18, 872, -477, -545, -479, 661, -111, 353, 463, 660, -18, 463, 485, 353, 752, -593, 872, 698, 661, 127, 264, 264, 127, -41, -116, -553, -545, -93, -41, 42, -116, 675, -477, 42, -28, 234, -593, -479, 752, -553, 675, -132, 234, 785};
    string direction = "ENEEWENWEWEEEESWWNSENWSESWNWWWNENESEWEEESNESSWSWEE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {-310, 899, 609, 733, 413, 733, -148, -545, 897, -257, -311, -480, -495, -429, 116, 897, 116, 938, 980, 938, 948, 444, 861, 109, 586, 586, 444, 980, 308, 184, -480, -310, 491, 254, 774, -257, 899, 641, 254, 413, 641, 609, 308, -495, -192, -582, -545, -429, 22, 861};
    vector<int> y = {-46, 728, -280, 47, 242, 6, 388, 381, 210, 696, -33, 754, 696, 754, 0, -503, 94, -655, -651, -25, -224, -7, -86, -46, 864, -33, 40, -280, -655, -503, 805, 373, 40, -86, 47, 934, 242, -224, -693, 728, 83, -651, -25, 934, 381, -46, 734, 805, 94, -693};
    string direction = "WNENEWSWSNSNSNSENNSEWSWNSNEEEESSNEENSNNWWESESNNNES";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {817, -543, 66, 823, 922, -234, -270, -453, 682, 322, -221, -299, 922, -184, -103, 66, -427, -184, -109, -128, 49, 1000, -218, -543, -573, -573, 49, -199, 823, 548, -270, 685, 682, 586, 690, -109, 578, -103, -199, 288, 900, -234, -299, -326, 817, 578, 322, 1000, -326, 548};
    vector<int> y = {-253, 868, -93, 772, -634, -550, 718, 172, -447, 955, 718, 634, -397, -600, -13, -268, 146, -550, -268, 12, 478, 261, 745, 524, 360, 634, 745, 524, -377, -186, 767, -397, -229, 261, -186, -93, 699, 12, 868, 276, -229, -600, 360, 772, 276, 955, 699, 675, -377, -44};
    string direction = "SWNWNESWENSENESNWESWNNESSWENNWSNSEENNWENNSNWNNSWES";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {-387, 447, -689, -689, 936, -150, 256, 0, 845, 993, 866, -460, 149, -382, -460, -660, 103, -617, 845, 798, 500, -353, 617, -472, -483, -270, -483, 993, 291, -628, -660, -617, 617, -353, 256, -214, 149, -472, -270, 936, 866, -150, 798, 447, 120, -628, -387, 120, 291, 459};
    vector<int> y = {-165, 84, -467, -165, -381, 0, -112, 714, -448, 794, -554, 239, 163, -171, 227, -555, 452, -555, 880, 794, 31, -112, 97, 227, -448, 482, 880, 599, 0, -422, -598, -598, 714, 497, 497, -8, -554, 239, 236, 452, 163, -441, 599, 31, -171, -8, -467, 331, -441, -214};
    string direction = "NNEESWEEWENSNEENSNNEWSWEEWWENWSWNNEWNSSEESSNWNEESS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {764, -214, -383, -49, 453, -52, 156, 617, -402, 599, 599, 810, 727, 462, 192, 357, -214, -204, 617, 59, 453, -237, 393, 712, 712, 764, 568, 810, 632, -49, -383, 357, 444, -535, 462, 576, -145, -52, -145, 140, -402, -204, 632, 568, 365, -247, -237, 727, 192, 576};
    vector<int> y = {-388, 716, 955, 621, 827, 322, 569, 239, 198, 133, 877, 588, 239, 221, -30, 116, 706, 706, 129, 666, 322, -431, 573, 870, 298, -584, -584, -30, 739, 955, 621, 221, 927, 198, 116, 600, 133, 827, 877, 870, 65, 716, 927, -388, 811, -67, -660, 129, 588, 811};
    string direction = "NSNNWWNEWWENNWSSSWSWWEWEWEWSNNNSEENSSSESSNESNEWEWW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {219, 4, -42, 120, -342, 142, -79, -69, 598, -79, -657, 430, 491, 433, 142, 618, 737, -317, 310, 565, 433, 219, 208, 709, -35, 430, 417, -342, 68, -2, 709, -42, 266, 84, 737, 618, 565, -516, -516, -657, 18, 266, 120, -2, 417, 598, 310, -69, -35, 869};
    vector<int> y = {288, 848, -44, 655, 782, 567, 74, 66, 847, 652, 652, -161, 567, 247, 218, -491, -263, 497, -130, 247, 115, 67, 847, -491, 655, 201, 415, 914, 201, 288, -582, 415, 401, 848, -395, -582, 115, 85, 619, 74, 85, 66, 500, 67, -44, 457, 497, 401, 500, -395};
    string direction = "NEENENEWEESESWSWWNNSNSNEWENEWEWENEEWNSSWSEEEWWESEW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {-2, -1, 0, 2, -3, 3, -3, 4, -1, -1, -4, 2, 4, 4, 0, -4, 4, 1, 1, -4, 0, 2, -3, -2, -3, 3, 3, 1, 4, -2, 2, 2, -1, 0, -4, -1, 2, -2, 2, 4, 1, 3, -2, 0, -4, 3, -1, 1, 1, -3};
    vector<int> y = {0, 3, -4, -2, -2, 1, -1, 2, 0, -2, 0, -3, -4, 1, 3, 1, 4, -3, 0, 3, 4, 0, 0, -4, 1, -2, -4, 3, -2, 2, 4, 1, -4, 2, 4, 2, 3, -3, -1, -3, 1, -3, 1, -2, 2, -1, 1, -1, -4, -4};
    string direction = "SNNNSNESNNNWNNWNWSSEEWWSSSWSSNWNNEESWEENSSWEWNESES";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {2, -2, 0, 3, 3, 1, 3, 2, 3, 2, 4, 3, 4, 0, 4, -2, -1, 1, 3, -3, -2, 0, -3, 4, 1, -1, 4, -1, 2, -2, -4, -4, 3, 4, -4, -3, -4, -2, -3, 4, 1, 2, -2, -1, 4, -4, -1, 2, -4, 1};
    vector<int> y = {-3, -2, 3, 0, 4, 2, -2, -4, 2, 2, 3, -3, 4, -2, 2, -1, 3, 3, -4, 1, -4, 2, -3, -4, -1, 4, -3, 0, -2, 0, 4, -3, 3, -1, -2, -1, 1, 3, 4, 1, 4, 4, -3, -3, -2, 2, 2, 0, 3, -2};
    string direction = "SENENWWNNSEWNENWEEWNEWWESWNWWENESSWSWSNSESEESSSEEE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {-3, 0, 4, -3, -2, 4, 1, 0, 4, -2, 0, -2, 3, 2, 0, -4, 2, 2, -1, -3, 4, 4, -4, 2, 0, 2, 4, -4, -4, 0, 0, -1, 2, -4, 1, -2, 1, -2, 1, 3, -3, -3, -4, 4, -3, -1, 2, 2, -1, -3};
    vector<int> y = {-4, 3, 3, 2, 3, -3, 2, -2, 2, 4, 0, 1, 2, -2, 1, -2, 3, -4, 1, -2, 0, -2, -4, -1, -4, 1, -1, 2, 4, 2, -1, 4, 2, 3, -1, 2, 3, -1, -4, 3, -1, 1, -1, 4, 4, -4, 4, 0, -3, 0};
    string direction = "EENESESNSNSEWSSWSEEEWSSNNSNEESNNNEESSSNESNNWWEEWWS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {-3, -4, 0, 4, -3, 3, -1, 3, -2, -1, 4, 4, 4, 2, 0, 2, -1, 2, 3, -2, 3, 0, 3, 4, -4, -3, -3, 1, -2, 1, 1, 0, -2, 2, 0, -3, -4, -1, -2, 3, 0, -1, -4, -3, -4, 2, -1, 2, -4, 2};
    vector<int> y = {3, -3, 1, -1, -3, -4, 1, 2, 2, -2, -2, 2, 3, 3, 0, 2, 4, 0, 3, -4, 0, 3, 1, 4, 3, 0, 1, -1, 3, 1, -3, 4, -3, -2, -3, -1, 1, -3, 0, -1, 2, -1, -1, 2, 4, -3, 3, -4, -4, 4};
    string direction = "SEWNESWSSNNEEESWNWNNNEWNEWSNSEESWWENSWSNWWNWWNSNWN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {3, -2, 1, 2, 1, 0, -1, 0, -4, -4, 4, -4, 0, -4, 0, 1, 4, -1, 0, 1, -4, 1, 4, -3, 4, 0, 3, 2, -1, 4, -4, 3, -1, -3, -2, -1, -2, 2, 3, -4, -4, 2, -3, 2, 3, -2, -1, 4, -3, 3};
    vector<int> y = {3, -1, -2, -1, 0, -4, 4, 2, 1, -4, -4, 3, -2, 4, 4, 3, 1, 3, -1, 1, 0, 4, 4, -4, -2, 3, -3, 2, 2, -3, -3, -2, 0, 1, 0, -2, -3, 1, -1, 2, -2, 0, -2, -2, 0, -2, -3, 0, 4, -4};
    string direction = "NSWWNNEWWWWNWEWSWNSSEEWNSSSSESSNEWEWWEWEWENWEWWESE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {0, -1, -4, -3, -4, 1, 0, 4, 3, -1, -2, -1, 1, -3, -4, -2, -2, 2, 1, 2, 0, 0, -4, -2, 3, 1, -1, -4, 4, 4, -2, 3, 3, 1, 3, -3, -4, -3, 0, 2, -2, -1, -1, 0, 0, 2, -1, 4, 0, 4};
    vector<int> y = {3, -2, 0, -2, -1, 4, 1, -1, 3, 1, -3, -3, 1, -3, -3, 4, -2, 3, -4, 0, -3, -2, -2, 3, -2, 0, 3, 3, -2, 3, 0, -1, -3, -2, 1, 3, 4, 1, 0, -1, 1, 4, -1, 2, -4, 4, 2, -3, 4, 2};
    string direction = "NSWEENNSWEWEENENNNSNEESNWWNESSNEEWEWSEWEENNWSNWWWW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {0, -3, 2, 2, 0, 1, 4, -3, 1, 4, 1, 2, 2, -2, -3, -4, -4, 4, 1, -2, 3, 0, 1, -2, 2, 1, 3, -1, 2, -4, -1, 3, -3, 4, -3, -3, 2, -3, -4, -1, -2, 0, 4, 3, 2, -2, 1, 1, -3, -1};
    vector<int> y = {-3, 2, -3, 3, 2, 0, 0, -4, 4, -2, -1, 4, -2, -2, 3, 3, 1, -3, 2, 3, 2, -1, 1, 0, 2, -2, -4, -4, -1, 0, -2, 4, 0, -4, -2, -1, 0, 4, -2, -1, 1, 0, 4, -1, -4, -4, 3, -4, -3, 2};
    string direction = "EWWESWESWWESWEEWWNSSENWSWESSSEEWNEWSESWWNESWESSNWE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {-3, 4, -4, -2, 1, 4, -4, 1, -2, -1, 2, -1, 1, 0, 1, 0, 4, -2, -3, 1, 0, -1, -2, -4, -2, 0, -2, -4, -4, -2, 3, -4, 2, 2, -3, 2, 2, 0, 3, -3, 3, 1, 3, -4, -3, 2, 2, -1, 0, -1};
    vector<int> y = {2, -1, 2, -3, 3, 2, -2, -3, -2, -1, 1, 3, -4, 4, 0, 2, 4, 3, -4, -1, 1, -3, 1, -1, 2, -4, -4, 0, -3, 4, -2, 4, 3, -2, -1, -4, -1, 3, -3, 1, -1, 2, -4, -4, -3, 4, -3, -2, 0, 2};
    string direction = "NEEWNNWSEWWEEENSSWNNSWSWEWSWNSNNNNWWNNSESSWSSSNEEN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {-4, 4, 3, 0, -4, 1, 3, -3, 1, -3, 4, 4, 1, -4, 3, 1, -1, -4, -1, -3, 2, 2, 2, 1, -3, -3, 0, 4, 2, 3, -2, 2, -2, 3, 0, 0, 0, 4, 1, -3, 4, 0, 2, -1, -3, 3, -4, 0, 0, -4};
    vector<int> y = {3, 1, 3, -1, 0, 0, -2, 2, 4, -4, -2, 3, -1, 4, 2, 3, 0, -2, -3, 4, -3, -2, -1, 2, 1, -2, 4, 2, -4, -4, 1, 2, -4, -3, 0, 2, 1, 0, -3, -3, -3, -2, 0, 3, 0, 1, -3, -4, -3, -4};
    string direction = "ESENNWNSNNNSNNNNNNESNEENNEWESEWEWSWNENENSSSWESWESE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {1, 0, 3, -4, -3, 2, 2, 0, -2, 2, 4, -3, 0, -3, -3, 1, 2, -1, -2, -1, 3, 4, 4, -3, -4, 3, -3, 1, -2, -4, -4, 4, -1, 2, 3, 0, 1, -3, -1, 3, -1, 4, 1, 2, -4, 3, -3, -4, -2, -4};
    vector<int> y = {1, 1, 1, 4, -3, 4, -4, 2, 2, 3, 2, -1, -2, 4, 0, -3, 0, 4, 1, -4, 3, -4, 3, -2, -3, 4, 1, 4, 3, -4, -2, 1, -1, 1, -1, -4, -4, 2, 2, 0, -2, 0, 3, -3, 1, 2, 3, 3, 0, 0};
    string direction = "NWENSWNNNNEWNEENSSEWSNWWEESSEEWWENWNNWESNSNWWNNEWS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {-796, 305, 835, -388, 713, -225, -633, -103, 632, 999, -592, 264, -756, -62, 101, 468, -348, 19, 142, -715, -429, -307, 428, -837, 672, 958, 387, -21, -511, -1000, -878, 876, 346, -552, 754, -470, 591, -266, -919, 509, -960, 550, 224, 60, 795, -674, -184, 183, 917, -144};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    string direction = "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {330, 410, -978, 963, -978, 27, 314, 423, 110, -93, -868, -854, 313, -621, 830, 548, 420, 464, 911, 283, 498, 674, 953, 567, 949, 131, 651, -486, 513, 816, 940, 697, -119, 202, -597, -42, -792, -593, 844, 815, -861, -793, -355, 511, -901, 158, 605, 763, 298, 367};
    vector<int> y = {729, -327, -119, -920, -329, 913, 643, -37, 690, 103, -250, 491, 63, -10, 61, 330, -762, 271, 125, 543, 81, -612, 952, -923, -997, 299, 996, -639, 423, -461, 641, -545, 934, -415, 440, -113, -395, -712, -496, -247, 896, 980, 688, -849, 602, -466, 500, 578, -249, 394};
    string direction = "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {872, -862, -390, -94, -133, -681, -290, -458, 735, -554, 610, -679, 666, -114, 251, -858, -933, 626, 662, -784, -962, -957, 153, -268, 268, 56, 416, 235, 794, -347, 867, -544, 51, -977, 667, 168, -733, -64, 477, -670, 448, -150, 192, 786, 90, -397, 932, -372, -738, -551};
    vector<int> y = {-314, -347, 68, 421, -378, 466, 908, -674, 192, 395, 832, -896, -601, -305, -288, -833, 308, -64, 84, 87, 140, 536, -185, 309, -113, -156, -928, 360, -140, 85, -789, 745, -241, 373, 784, 642, 86, 243, -724, -618, -389, 984, 942, -847, -691, -176, -794, -635, -715, 675};
    string direction = "ENWNWSSWWESWWESNNNESSEWNNSESWWEWNENEWSWEWSWSSESWNW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {726, -494, 2, 558, -430, 28, 210, 51, -949, -274, -985, -981, 563, 319, 403, 144, 641, 720, -32, -231, 138, 790, 287, 667, 805, 969, -604, 977, 652, 331, 600, -637, -445, -518, 750, -93, -170, 488, 739, -828, -394, -45, -527, 529, -326, 701, 985, 972, -120, 274};
    vector<int> y = {-500, -708, 144, -97, -907, -915, 244, 132, -50, -889, -644, -311, 481, 592, 437, 641, 605, 637, 661, 680, 458, -440, -688, 891, 645, -89, -815, 326, 718, -498, 887, -145, 380, 417, 560, 901, -210, 738, -283, -626, -682, 730, -672, 700, -115, 302, 251, 431, -480, -357};
    string direction = "NNWNNSSWESEWWEWWSESEENSWSWWSEWSWWEEENESWSWWENENSSW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {-531, 220, 126, -47, 966, 146, 910, 791, -373, -302, 644, 246, 350, 503, 156, 405, -145, -446, -807, 133, 621, 586, 365, 531, -946, 617, -792, -607, -584, -926, 623, 680, 654, 592, 751, -54, -718, -867, -648, 146, 519, -607, -108, 624, 429, 828, -480, 521, 292, -828};
    vector<int> y = {-604, -815, 75, 15, 551, 816, 185, 797, -310, 444, 286, 983, -771, 558, 758, 251, 665, 915, 440, 820, -537, -995, -911, 779, 139, -324, 577, 277, -251, 18, -540, -950, -224, -365, -864, -338, -855, 691, -582, -536, 495, 300, -3, -125, -851, 301, 742, 800, 151, 840};
    string direction = "SEESSNENSWSSSSENENEEWWWWNEWWESSNNEESNNNWEWNSNNWEWN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {520, 640, -400, -760, -280, 120, -560, -640, 0, 280, -840, -200, 840, 440, -240, -920, 680, 920, -160, 40, 800, -520, -880, 960, 240, -40, 320, 80, 480, -720, -680, 880, -480, -800, 360, -360, 400, 720, -1000, 760, -440, 560, -960, 600, -120, -80, 200, -320, 160, -600};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    string direction = "WWWWWEEWWEEEWWEEWEEEEWWWWEWEWWWWWEWWEEEEEWWWWWEWWW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {560, 520, 480, -920, -680, -600, -160, -120, -40, -320, -1000, -640, -720, 400, 640, -200, 120, -280, 720, 160, 920, 800, -400, 240, -960, -480, -760, -440, 680, 840, 280, -560, 960, -880, -840, 440, -80, -240, 320, 40, 880, 0, -360, 600, 80, 200, 360, -520, -800, 760};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    string direction = "EEWEEEEWWEEEEEWWWEEWEEWWWEWEWEWWEEWEEWEWEEWWWWEEWW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {0, 280, -360, -800, -960, -80, 360, -200, 40, 400, 920, 80, 680, 880, 960, 800, -40, -680, -760, 240, -160, -1000, 760, -640, 480, 560, -560, 520, -920, -240, -480, 720, -880, 600, 440, 320, 640, 200, -320, -520, -720, -400, -440, -280, -120, 120, -600, 840, 160, -840};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    string direction = "WEWWEWEEWEWEWWEEEWEEWWEEWWWWEWWEWWWWEEEWEWWWEWWWEW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {680, 0, -880, -360, -680, -560, -200, 640, 920, 520, -920, 880, 800, 280, -640, 480, 600, -480, 720, 40, 360, 80, 760, -120, -320, -440, -840, 320, -520, 240, 160, -760, -400, 200, -240, -1000, -720, -160, 400, -960, -600, 560, 960, 440, 840, -280, -80, 120, -40, -800};
    string direction = "SSNNSSSSNNSSSSNSNNNNNSSSSNNSSNNNSSSNSNSSSNSNSSNNNS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {320, -200, -520, -480, -160, -840, 880, -120, 920, 560, 400, 680, 80, 0, 480, 800, 640, -240, -880, -320, -680, 960, 40, -560, 360, 200, -440, -280, -800, 280, -720, 520, -960, -80, 440, 160, -400, -760, 120, -40, 760, -1000, 600, 240, -920, 720, -640, 840, -600, -360};
    string direction = "NSSSNSNSNSSSNSSSSNSNNSSNNSSNNNSNSNNNNSNNNSSSSNSNSS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {-920, -80, -320, 360, -40, -560, 80, 720, 960, 640, -280, -720, -440, 920, -760, 320, -240, 480, -1000, 40, -360, -480, -880, 880, 200, 160, -400, -520, 400, -120, 760, 280, 520, 120, 240, -680, 560, -600, 840, 680, 600, -800, 440, -960, -160, -200, -840, -640, 800, 0};
    string direction = "SSNNNSNNNNSNNSNNNSSNSSNSNSNNNNNSNNSNSNSNNNNSSNNNNN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {720, 200, -200, 0, 800, -840, -960, 160, -680, 320, 360, -160, -480, -240, -1000, -800, -360, -880, -280, 560, 960, -560, 480, 40, 240, -400, 440, 920, 400, 600, -640, 280, 640, -120, -40, 120, 520, -440, 760, -80, 840, -920, 880, -720, 680, 80, -520, -320, -600, -760};
    vector<int> y = {720, 200, -200, 0, 800, -840, -960, 160, -680, 320, 360, -160, -480, -240, -1000, -800, -360, -880, -280, 560, 960, -560, 480, 40, 240, -400, 440, 920, 400, 600, -640, 280, 640, -120, -40, 120, 520, -440, 760, -80, 840, -920, 880, -720, 680, 80, -520, -320, -600, -760};
    string direction = "ESSNESEWNWWWWSSSWESWWSESWSWEEWNNEWWNNSWENWWWNWNEEW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {960, 560, -400, 760, -600, -680, 0, -960, 840, -200, 360, 160, -280, -640, -760, -840, 600, 720, 320, -520, 240, -880, -40, 440, 880, -440, -720, -480, -120, -240, 280, 80, 480, 800, 680, 120, 40, 920, 200, -320, -80, 520, 400, -920, -800, -1000, -560, -360, -160, 640};
    vector<int> y = {960, 560, -400, 760, -600, -680, 0, -960, 840, -200, 360, 160, -280, -640, -760, -840, 600, 720, 320, -520, 240, -880, -40, 440, 880, -440, -720, -480, -120, -240, 280, 80, 480, 800, 680, 120, 40, 920, 200, -320, -80, 520, 400, -920, -800, -1000, -560, -360, -160, 640};
    string direction = "WWNSWWNNWEENENENSEEWEWENSEESENWWSSWSNEWSWWWNEEWSWN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {520, 40, 200, -360, -840, -920, 560, 840, 720, -80, 960, 160, 880, -160, -1000, 680, 360, 640, -240, -120, -40, 280, -320, 120, 480, -760, -520, 440, -560, -880, -200, -480, -440, -400, 0, 920, 80, -800, 320, -720, 600, -280, 760, -680, -960, 800, 400, 240, -600, -640};
    vector<int> y = {520, 40, 200, -360, -840, -920, 560, 840, 720, -80, 960, 160, 880, -160, -1000, 680, 360, 640, -240, -120, -40, 280, -320, 120, 480, -760, -520, 440, -560, -880, -200, -480, -440, -400, 0, 920, 80, -800, 320, -720, 600, -280, 760, -680, -960, 800, 400, 240, -600, -640};
    string direction = "SNNWWNSNSENWWENEWNSWESNNSNNSEWNNENWSWESNWNESSESNWE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {0, 10, 20, 30};
    vector<int> y = {0, 10, 20, 30};
    string direction = "NWNE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {0, 0, 0};
    vector<int> y = {0, 1, -1};
    string direction = "SSN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {375, 307, 377, 361, 204, 310, 280, 398, 345, 261, 232, 359, 392, 258, 207, 263, 216, 319, 260, 348, 358, 211, 243, 292, 343, 327, 219, 285, 342, 300, 242, 212, 250, 224, 400, 325, 389, 275, 344, -1000, 1000, 42, 42, 41, 43, -999, 999, -999, -100, -100};
    vector<int> y = {399, 203, 206, 248, 264, 283, 379, 339, 205, 228, 380, 267, 222, 333, 287, 361, 263, 328, 355, 207, 202, 257, 206, 204, 249, 380, 276, 250, 205, 381, 235, 332, 231, 377, 362, 396, 233, 393, 262, -1000, 1000, 43, 41, 42, 43, -999, 999, 999, -104, -101};
    string direction = "WEWSNNEENENEEENWNSWWSSWNWWSNEWSSSSNSWSWNWWENSESNNS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {0, 0};
    vector<int> y = {0, 1};
    string direction = "NS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {0, 1};
    vector<int> y = {0, 0};
    string direction = "EW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {0, 1};
    vector<int> y = {12, 12};
    string direction = "EW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {1, 0};
    vector<int> y = {0, 0};
    string direction = "WE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
    vector<int> y = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
    string direction = "EEEWWWEEE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {0, 0, 0, 1};
    vector<int> y = {0, 1, 2, 1};
    string direction = "NNSW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {0, 0};
    vector<int> y = {1, 0};
    string direction = "SN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {0, 1, 2, 1, 3, 3, 4, 4};
    vector<int> y = {0, 0, 1, 1, 1, 0, 0, 1};
    string direction = "EWWESNNS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {29, 30};
    vector<int> y = {30, 30};
    string direction = "EW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {0, 1, 1000, 999, -1000, -999};
    vector<int> y = {0, 0, 999, 1000, -999, -1000};
    string direction = "EWNESW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {0, 0};
    vector<int> y = {1, 2};
    string direction = "NS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {-1, -1, -2, -2, -3, -3, -4, -4, 0, 1, 1, 0, 0, 2, 2, 0};
    vector<int> y = {0, 1, 1, 0, 0, 2, 2, 0, 11, 11, 12, 12, 13, 13, 14, 14};
    string direction = "NSSNNSSNEWWEEWWE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {0, 0};
    vector<int> y = {0, -1};
    string direction = "SN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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

int test73() {
    vector<int> x = {-1000, 1000};
    vector<int> y = {-1000, 1000};
    string direction = "NW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {-1, 0};
    vector<int> y = {-1, -1};
    string direction = "EW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {1, 1};
    vector<int> y = {0, 1};
    string direction = "NS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {-9, -3, 0, -9, -6, -3, -2, -10, 8, -5, 6, 1, 9, -2, -9, -2, 0, 5, -8, -7, 3, 0, -1, 7, 8, -6, 9, -10, -4, 2, 5, 5, -8, -1, -3, -6, 5, 3, -4, 8, -5, -5, -4, -4, 2, 7, 9, -3, 6, -8};
    vector<int> y = {-1, -8, -8, -3, 8, -6, 1, 1, 6, 6, 3, -7, 0, 6, 6, -3, -7, 3, 1, -8, 6, 5, -3, -6, 4, 4, -9, 2, 3, -4, 7, -3, 7, -4, 4, -2, -6, -1, -10, -8, -5, -8, -4, -7, 9, 3, 4, -1, 2, -1};
    string direction = "WEWWNNNESENSNNSWNWWWEWNNWENWWSESWEEWESNWWNENNWWESS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {0, 0, 0, 2};
    vector<int> y = {0, -1, -2, 0};
    string direction = "SNNW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {478, -664, 759, 434, -405, 513, 565, -396, 311, -174, 56, 993, 251, -341, 993, -112, 242, 129, 383, 513, -78, -341, -148, 129, 423, 493, 434, -405, 478, -148, 929, 251, 56, 242, 929, -78, 423, -664, 802, 251, 759, 383, -112, -591, -591, -248, 660, 660, 735, 493};
    vector<int> y = {-186, 98, 948, 795, 289, -678, 948, -170, -195, 290, -354, -424, 289, -157, -166, 150, 706, -678, 684, -294, -234, 36, 36, -294, -216, -234, 427, 945, 265, -157, 265, 715, 275, 715, -186, 337, 798, -170, 427, 706, 754, 961, 286, -216, 798, 286, 961, 684, -424, 337};
    string direction = "WNSNNSSWWWEENWESNSWSWSEWWEWEWWWNWESNSSNNSNNWWWNESE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {7, 7, 0, 1, 2, 3, 3, 4};
    vector<int> y = {0, 1, 5, 4, 3, 1, 0, 1};
    string direction = "NSSSSSNW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {0, 1, -1, 2, -2, 3, -3, 0, 0, 0, 8, 13, 15, 9, 11, 11};
    vector<int> y = {0, 1, 1, 2, 2, 3, 3, 3, 4, 2, 2, 2, 2, 2, 0, 4};
    string direction = "NWEWEWESSNEWWENS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {0, 1, 10, 9, 11, 10, -1000, 1000};
    vector<int> y = {330, 330, 9, 10, 10, 11, -1000, 1000};
    string direction = "EWNEWSNW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {-1000, 1000};
    vector<int> y = {-1000, 1000};
    string direction = "ES";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {-1, 0};
    vector<int> y = {0, 0};
    string direction = "EW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {0, 0};
    vector<int> y = {0, 3};
    string direction = "NS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {-1000, 1000, 120, 100, 110, 120, 130, 140, 200, 201, 200, 201, 300, 300, 300, 400, 411, 500, 501, 600, 600, 700, 700};
    vector<int> y = {1000, -1000, 110, 110, 140, 130, 120, 130, 200, 200, 201, 201, 300, 301, 302, 400, 400, 500, 500, 600, 601, 700, 717};
    string direction = "SWNESSWWEWSSNSSEWEWNSNS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {1, 1};
    vector<int> y = {1, 0};
    string direction = "SN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {4, 7, 6, 2, 6, 5, 7, 7, 8, 4, 7, 8, 8, 8, 5, 4, 8, 9, 1, 5, 9, 3, 4, 0, 0, 1, 0, 7, 2, 6, 9, 6, 3, 0, 5, 5, 1, 2, 0, 4, 9, 7, 7, 1, 8, 1, 9, 2, 7, 3};
    vector<int> y = {2, 3, 0, 6, 8, 4, 9, 0, 5, 0, 2, 4, 3, 8, 1, 5, 0, 7, 3, 7, 0, 9, 8, 1, 9, 4, 7, 8, 1, 1, 6, 6, 6, 2, 8, 5, 1, 9, 0, 1, 1, 1, 7, 0, 2, 5, 4, 7, 5, 3};
    string direction = "SEENNEEESSSNSNSSWENEWNWNSESWSNESNESWWNNNWEWWWSWNEW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {0, 1, 49, 50, 51, 50};
    vector<int> y = {77, 77, 50, 49, 50, 51};
    string direction = "EWENWS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {-1, -1};
    vector<int> y = {-1, 0};
    string direction = "NS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {1, 1};
    vector<int> y = {1, 2};
    string direction = "NS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {-71, -69, -62, -88, -95, -53, -53, -76, -61, -100, -58, -56, -91, -60, -53, -91, -61, -71, -91, -78, -92, -82, -72, -76, -75, -63, -52, -94, -80, -75, -65, -100, -92, -74, -86, -87, -77, -89, -61, -85, -86, -69, -91, -75, -77, -94, -66, -88, -63, -54};
    vector<int> y = {-84, -82, -86, -82, -64, -87, -97, -73, -87, -87, -74, -55, -52, -79, -100, -70, -93, -54, -84, -93, -91, -80, -62, -53, -86, -82, -81, -94, -87, -97, -94, -69, -77, -80, -100, -91, -67, -95, -61, -52, -81, -85, -57, -81, -64, -55, -99, -56, -58, -83};
    string direction = "EEEENSEEWESSWSWSNSWEEESEWENNNNNWEWSWSNSSEWWENWWSSW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {-926, 648, 136, -11, -989, -777, 834, -915, -762, -481, -774, -415, 294, -550, -493, -968, 31, -646, 134, 307, 474, 573, -22, -237, 250, -335, 131, 633, 344, 138, -312, 718, 10, -415, 330, -332, 457, -961, -943, 861, -590, 298, 553, -1000, 1000, 1000, 1000, -1, 0, 0};
    vector<int> y = {-878, -955, 119, -336, 296, -40, 438, -370, 364, -478, -370, 94, 577, 239, -976, 750, 913, -589, -146, 407, 862, 417, 656, 290, 174, 430, -475, -179, -617, -172, -579, 31, 663, 219, 311, -152, -409, 149, -297, -804, 816, 825, -613, -1000, 1000, -999, 0, 0, 0, 1};
    string direction = "ENWWWNEENEWSSNSSENSNSNNESENEWEESNSNSSENWNENESNSEWS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {0, 0};
    vector<int> y = {5, 6};
    string direction = "NS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {0, 3};
    vector<int> y = {0, 0};
    string direction = "EW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {0, 1};
    vector<int> y = {1000, -1000};
    string direction = "NS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
    vector<int> y = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
    string direction = "ESEWNNEWW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {1, 2};
    vector<int> y = {0, 0};
    string direction = "EW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {2, 2, 4, 7};
    vector<int> y = {2, 5, 3, 3};
    string direction = "NSEW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {1000, -999};
    vector<int> y = {1000, 1000};
    string direction = "WE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {0, 1};
    vector<int> y = {1, 1};
    string direction = "EW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {1000, -1000};
    vector<int> y = {1000, -1000};
    string direction = "WN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {10, 10};
    vector<int> y = {10, 9};
    string direction = "SN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {-1000, 1000, 0, 0};
    vector<int> y = {0, 0, -1000, 1000};
    string direction = "EWNS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {0, 0};
    vector<int> y = {3, 0};
    string direction = "SN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {0, 0, 0};
    vector<int> y = {0, 3, 7};
    string direction = "NSS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x = {0, 0, 1, 7};
    vector<int> y = {0, 2, 1, 7};
    string direction = "EWSN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x = {4, 7, 6, 2, 6, 5, 7, 7, 8, 4, 7, 8, 8, 8, 5, 4, 8, 9, 1, 5, 9, 3, 4, 0, 0, 1, 0, 7, 2, 6, 9, 6, 3, 0, 5, 5, 1, 2, 0, 4, 9, 7, 7, 1, 8, 1, 9, 2, 7, 3};
    vector<int> y = {2, 3, 0, 6, 8, 4, 9, 0, 5, 0, 2, 4, 3, 8, 1, 5, 0, 7, 3, 7, 0, 9, 8, 1, 9, 4, 7, 8, 1, 1, 6, 6, 6, 2, 8, 5, 1, 9, 0, 1, 1, 1, 7, 0, 2, 5, 4, 7, 5, 3};
    string direction = "SSNWSWSENSWSESWEWSWSENWNNNESWSWSWWSSWEEWWNWWWNWENN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x = {-1000, 1000};
    vector<int> y = {1000, -1000};
    string direction = "EN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x = {-1, 0, 0, 1};
    vector<int> y = {0, -1, 0, 0};
    string direction = "NNSN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {-5, -6};
    vector<int> y = {-6, -5};
    string direction = "EN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x = {0, 2, 2, 4, 4, 4, 5, 6, 7, 11, 12, 13, 14, 15, 16, 16, 18, 18, 19};
    vector<int> y = {14, 12, 15, 2, 9, 11, 5, 7, 1, 1, 9, 2, 15, 18, 1, 7, 11, 18, 7};
    string direction = "EESWWNWEWNENSWWEEWW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> x = {478, -664, 433, 759, -405, 513, 565, -396, 311, -174, 56, 993, 251, -341, 993, -112, 242, 129, 383, 513, -78, -341, -148, 129, 423, 493, 434, -405, 478, -148, 929, 251, 56, 242, 929, -78, 423, -664, 802, 251, 759, 383, -112, -591, -591, -248, 660, 660, 735, 493};
    vector<int> y = {-186, 98, 948, 75, 289, -678, 948, -170, -195, 290, -354, -424, 289, -157, -166, 150, 706, -678, 684, -294, -234, 36, 36, -294, -216, -234, 427, 945, 265, -157, 265, 715, 275, 715, -186, 337, 798, -170, 427, 706, 754, 961, 286, -216, 798, 286, 961, 684, -424, 337};
    string direction = "WNSNNSSWWWEENWESNSWSWSEWWEWEWWWNWESNSSNNSNNWWWNESE";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> x = {-1000, 1000};
    vector<int> y = {0, 0};
    string direction = "EW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> x = {2, 10, 0, 0};
    vector<int> y = {2, 2, 2, 0};
    string direction = "EWEN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> x = {2, 0, 1};
    vector<int> y = {0, 2, 1};
    string direction = "NEN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> x = {-1000, 1000};
    vector<int> y = {1000, -1000};
    string direction = "SW";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> x = {0, 0, 2, 3, 4};
    vector<int> y = {0, -1, 2, 3, 4};
    string direction = "SNSSS";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
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
    vector<int> x = {0, 0};
    vector<int> y = {10, 0};
    string direction = "SN";
    AntsMeet* pObj = new AntsMeet();
    clock_t start = clock();
    int result = pObj->countAnts(x, y, direction);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22763515&rd=14733&pm=11887
********************************************************************************
#line 5 "AntsMeet.cpp" 
#include <cstdlib> 
#include <cctype> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <sstream> 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
#include <fstream> 
#include <numeric> 
#include <iomanip> 
#include <bitset> 
#include <list> 
#include <stdexcept> 
#include <functional> 
#include <utility> 
#include <ctime> 
using namespace std; 
 
#define PB push_back 
#define MP make_pair 
 
#define REP(i,n) for(i=0;i<(n);++i) 
#define FOR(i,l,h) for(i=(l);i<=(h);++i) 
#define FORD(i,h,l) for(i=(h);i>=(l);--i) 
#define sqr(x) ((x)*(x)) 
#define lowbit(x) ((x)&(-(x))) 
 
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef vector<double> VD; 
typedef long long LL; 
typedef pair<int,int> PII; 
 
map<PII,int> hash; 
 
class AntsMeet 
{ 
        public: 
        int countAnts(vector <int> x, vector <int> y, string direction) 
        { 
            int n=x.size(); 
            set<int> vis; 
            for (int i=0;i<n;++i){ 
              x[i]=x[i]*2; 
              y[i]=y[i]*2; 
      } 
            for (int ti=0;ti<10000;++ti){ 
        hash.clear(); 
        for (int i=0;i<n;++i) 
        if (!vis.count(i)){ 
          hash[MP(x[i],y[i])]++; 
        } 
        for (int i=0;i<n;++i) 
        if (hash[MP(x[i],y[i])]>1){ 
          vis.insert(i); 
        } 
              for (int i=0;i<n;++i) 
        if (direction[i]=='N'){ 
          ++y[i]; 
        }else if (direction[i]=='S'){ 
          --y[i]; 
        }else if (direction[i]=='E'){ 
          ++x[i]; 
        }else if (direction[i]=='W'){ 
          --x[i]; 
        } 
      } 
      return n-vis.size(); 
        } 
         
 
}; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/