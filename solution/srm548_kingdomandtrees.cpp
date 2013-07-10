/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11967
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

class KingdomAndTrees {
public:
    int minLevel(vector<int> heights);
};

int KingdomAndTrees::minLevel(vector<int> heights) {
    int ret;
    return ret;
}


int test0() {
    vector<int> heights = {9, 5, 11};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> heights = {5, 8};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
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
    vector<int> heights = {1, 1, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> heights = {548, 47, 58, 250, 2012};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 251;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> heights = {1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> heights = {2, 2};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
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
    vector<int> heights = {2, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> heights = {1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
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
    vector<int> heights = {8, 5, 100, 90};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> heights = {5, 4, 3, 2, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
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
    vector<int> heights = {548, 7, 2, 2012};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 274;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> heights = {1000000000, 1000000000};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
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
    vector<int> heights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> heights = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> heights = {1, 999999999, 2, 999999998, 3, 999999997, 4, 999999996, 5, 999999995, 6, 999999994, 7, 999999993, 8, 999999992, 9, 999999991, 10, 999999990, 11, 999999989, 12, 999999988, 13, 999999987, 14, 999999986, 15, 999999985, 16, 999999984, 17, 999999983, 18, 999999982, 19, 999999981, 20, 999999980, 21, 999999979, 22, 999999978, 23, 999999977, 24, 999999976, 25, 999999975};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000011;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> heights = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> heights = {654914335, 770745116, 950029501, 116648027, 602800923, 742336129, 976019296, 870244936, 183567425, 553245339, 599783804, 355942031, 609224485, 914303931, 322713429, 698460259, 952212914, 436949547, 106066931, 217367893, 213218886, 32083533, 813721427, 54811269, 281854248, 117721910, 651592383, 566763127, 434294918, 191486567, 854490778, 89209252, 962231682, 804520278, 58373630, 565032604, 399372758, 886909278, 287793891, 435456534, 292670968, 740094047, 791398565, 901895452, 654397977, 114111993, 452872063, 459127242, 403577891};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 471967889;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> heights = {676495135, 616796776, 443538877, 342732913, 524124397, 577909476, 312971174, 175716779, 144672603, 747266091, 367203345, 851679732, 688991694, 181951379, 508716361, 599881676, 746983982, 908089119, 486790953, 887294225, 196062004, 779461920, 627388271, 987460568, 533873724, 134302599, 954088912, 986745786, 445946192, 357666802, 398201130, 122441326, 974463578, 841740006, 317690591, 351104326, 272165833, 483178116, 526821104, 269354787, 82960559, 746540801, 121034518};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 452250013;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> heights = {928492179, 629750879};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 149370651;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> heights = {527992512, 390356349, 711141231, 415286736, 586418352, 343119503, 895191358, 426395272, 876993226, 29493956, 380484183, 716255363, 327956500, 590667337, 114456492, 302914177, 417647266, 808712849, 620604767, 768751591, 80878681, 103782883, 148089046, 350233468, 39259793, 894629846, 323784337, 811212044, 823122024};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 432848703;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> heights = {35562323, 203630888, 196407915, 599219905, 618917623, 635342619, 794855759, 366625333, 61737890, 524365336, 248635640, 294738424, 240620698, 576592139, 885405760};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 366558936;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> heights = {879506316, 303053025, 16306389, 352627434, 71804615, 97185070, 308926668, 72410013, 299934889, 348186460, 967039858, 623719225, 11914856, 642678234, 429770792, 47477178, 846309121, 478695058, 499213434, 317743095, 114037676, 146585545, 684368427, 28291917, 670950880, 933004067, 323030341, 911571578, 509596205, 208436100, 119165118, 241618872, 364005477, 987987859, 594246306, 288326443, 937689280, 903172973, 360736455, 90140520, 251359433};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 477562502;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> heights = {713859744, 263274288, 970454546, 996146887, 163267817, 669280018, 474841945, 514997602, 987023112, 441395972, 661583146, 671391539, 469687889};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 416439536;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> heights = {456911957, 792718229, 96621955, 966508161, 1154328, 68303424, 60643385, 217676156, 56291282, 654889690, 506002599, 846496913, 558062662, 866739053, 936637432, 661938446, 47031717, 503013528, 925212733, 17486262, 499160414, 940996901, 539282631, 826518710, 455994503, 526305743};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 482676917;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> heights = {117577648, 50213633, 737602570, 302628025, 507125589, 382837150, 251766331, 326150101, 236507829, 320069755, 386793485, 454183985, 228877388, 41683174, 960186583, 75374301, 452262188, 826925635, 864528084, 114200633, 873957352, 367541611, 891929718, 743959965, 719218377, 685442970, 135758948, 545737086, 141437472, 662064690, 666168119, 111531472};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 442406142;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> heights = {256287040, 266675848, 71920262, 639124189, 518442179, 250586714, 875632018, 691028285, 489896551, 329816002, 919905672, 384096076, 142518936, 847796324, 836358263, 969444570, 564840760, 803075248, 695918273, 932382370, 547521317, 292394590, 504117098, 85480638};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 441981970;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> heights = {49854184, 79434462, 942734578, 568538654, 43482285, 507529251, 824825694, 310158132, 431965864, 463949882, 681116662, 535068929, 192098251, 372144946, 24965479, 521914252, 144566970, 409061555, 664433187, 844879645, 97936169, 486394109, 409720404, 753527768, 34828733, 194619126, 153565436, 179739674, 698736223, 239046074, 607893210, 601106758, 318480535, 403144139, 22161764, 361962819, 910673389};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 460286423;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> heights = {672120950, 195155604, 163453690, 205753964, 730224533, 355551941, 577898909};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 254333631;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> heights = {877466192, 574982230, 16767917, 394415731, 419861875, 967220438, 733326191, 682098630, 720748205, 768154923, 876717755, 874313641, 947894597};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 430349139;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> heights = {113359714, 408304158, 881593439, 284356600, 811448297, 903755202, 646319418, 574638037, 750742658, 170956719, 622309993, 914196348, 376710682, 205050877, 122264640, 954609591, 812757239, 999730831, 382108172, 682041508, 246662913, 801970046, 649261945, 979989103, 336585028, 222526501, 600660378, 65819134, 949356493, 401071326};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 466955854;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> heights = {915232558, 661891835, 227899254, 199589157, 325856483, 131654455, 845908574, 900494520, 734913465, 16865293, 375320864, 501626164, 246092326};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 449183637;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> heights = {623890803, 53218268, 393128978, 476137985, 435326440, 75170485, 722800898, 89812837, 576948781, 555306352, 426397864, 651991634, 8483081, 492216998, 601348126, 262070758, 986006460, 369097036, 923962593, 66422065, 568686192, 249819075, 198076520, 267111118, 2829946, 932989984, 136492762, 378150809, 287132499, 382585087, 958522548, 911023301, 435803355, 204167878, 387161285, 871129794, 131854714, 962478534, 960942630, 561319847};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 491588261;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> heights = {239856846, 213311480, 378784318, 732073843, 667175957, 640855076, 570596654, 36272992, 417334020, 637018719, 457475536, 667153094, 835095238, 724586653, 522499392, 620601573, 713595766, 900650200, 907734071, 96180852, 711689100, 671273723, 384500558, 768373329, 58435007, 108146703, 900228042, 873429893, 921605685, 314064240, 243731130, 161462530, 527375719, 475031799, 893536372, 47068028, 115886874, 316649377};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 437268832;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> heights = {385737245, 953668095, 540816554, 52890339, 641279684, 117919558, 427906082, 114397608, 831515323, 181072633, 22131678, 780212527, 892761732, 545921752, 17229436, 513651412, 456873111, 125376139, 266395806};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 468219336;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> heights = {899498175, 580460045, 426550484};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 236473847;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> heights = {107835764, 901582282, 807013427, 7420143};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 447081071;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> heights = {123662803, 90761161, 255722752, 929847250, 484094067, 161129442, 571126933, 602013624};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 384358905;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> heights = {685524541, 286045299, 770108156, 560172570, 918774177, 515386239, 106094322, 936003612, 29037651, 415483784, 913896102, 147949808, 745786786, 665910628, 728409852, 24853621, 579387683, 688761967, 926435902, 238917461, 696182109, 796421409, 215096616};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 455575000;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> heights = {904660513, 144943865, 123553688, 65789954, 568587149, 725567311, 507341829, 106628041, 864128961, 129966336, 666800611, 782903137, 497868926, 625411284, 571423101, 379422928, 40895067, 337835554, 527372735, 639198204};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 431882731;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> heights = {255782587, 664051824, 435650216, 944544553, 443004077, 674567677, 493243014, 91941838, 889664292, 132702635, 996602350, 34608156, 256256322, 914908655, 455711656, 981823632, 274766835, 562339697, 698468945, 404733170, 81656659, 333888433, 902602096, 707067942, 905311533, 134541375, 600479360, 95663439, 661914110, 92193915, 951925972, 917696696};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 480997098;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> heights = {387576187, 714757600, 51766166, 62143863, 60516965, 143708003, 804324506, 193219599, 140310352, 691449013, 449475920, 907735359, 147160669, 283815904, 182502193, 709500365, 982284848, 439751715, 791157023, 316173280, 194870162, 350741316, 74001165, 329411536, 803737027, 22180955, 991325645, 895930941, 974106926, 761538692, 357209382, 214199464, 328812644, 408975547, 128859679, 389329608, 405199902, 933184184, 582549207, 398026605};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 480051951;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> heights = {32025126, 305761963, 624310217, 315841029, 340780508, 186326933, 150642228, 780532222, 977483955, 466815508, 975402383, 180741622, 393333024, 304813918, 984478648, 415513978, 148655915, 732925940, 389620903, 910194606, 90135321, 603820366, 239007249, 351627219, 732680044, 628336857, 756827120, 518380580, 63402415, 7370077, 143013776, 95427540, 313132039, 619840344, 263784921, 653912546, 806167276, 414427148, 286961119, 636167582, 881242655, 262363501, 816909203, 127092030, 419693771, 653904202, 542606007};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 488554293;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> heights = {239346493, 932226909, 478544290, 181998165, 388563627, 570067891, 386141735, 973760022, 50921099, 142968855, 492140601, 114323513, 2855283, 487670728, 209751052, 315987321, 107511071, 473535972, 822416219, 766194698, 887963120, 109377337, 402362279, 621722126, 224257190, 71787833, 748814156, 643950960, 578208386, 143936514, 212300644, 817554878, 76163423, 543361285, 852069394};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 485452372;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> heights = {113429175, 712323};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 56358427;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> heights = {143519774, 164350273, 233696335, 635660375, 278673785, 236551617, 975847454, 340941189, 405055289, 935874877, 814477160, 227471507, 702069574, 554956631, 189365196, 956948205, 29195109, 413622385, 28736037, 630525616, 57573344, 459460775, 774462129, 122390339, 129532004, 703141903, 665751623, 981601398, 20385303};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 480608048;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> heights = {72328878, 16421429, 796047422, 306025212, 652081803, 74721207, 395093180, 480445608, 268178747, 800148468, 416320484, 82655906, 27619975, 970906410, 490128889, 69501522, 927854614, 371840349, 483123906, 809107002, 2365964, 540697249, 121084128, 776828092, 663087587, 250616132, 332486347, 181355561, 232217529, 205388001, 960536358, 304546406, 221809429, 609100132, 463087969, 873891231, 536337690, 858181148, 206853191, 804516436, 658329615, 623173674, 739688693, 538465941, 446596435, 82333933, 607967462, 226967400};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 484270227;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> heights = {91091367, 36074402, 456540244, 484304967, 9674881, 85884688, 999908905, 260291012, 418371034, 181264466, 492508540, 623759034, 994317175, 649571297, 845568463, 603417306, 112659265, 571976045, 139754995, 970840412, 778829235, 796787782, 481686379, 254519261, 536476475, 872668671, 701115695, 618810407, 333152485, 928083095, 72984688};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 463462121;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> heights = {816673848, 382041283, 761065170};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 217316283;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> heights = {320442322, 613490426, 86639740, 738813355, 794754891, 431664631, 215088741, 641588418, 81235928, 913173555, 97522075, 46411544, 337665951, 89793422, 869768308, 116495186, 886581203, 203971038, 223530798, 275574029, 76639708, 777162844, 894384436, 409792192, 557762290, 819885475, 686552395, 226952489};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 433381007;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> heights = {300133916, 53301217, 374885431, 913624341, 992457308, 966215137, 560895584, 276638290, 33820229};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 479318542;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> heights = {210390569, 946993783, 152522427};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 397235679;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> heights = {284659734, 242315848, 979086772, 253671271, 128897051, 183057809, 329718420, 404471079, 112213868, 106881263, 151371866, 522006060, 664643553, 823773692, 61074806};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 459005989;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> heights = {878216801, 213725073, 797413609, 105618583, 127349413, 642387268, 71833719, 540761348, 771541910, 105653948, 595761700, 981932478, 905164082, 748284127, 91250942, 42340167, 990599974, 922854065, 296011437, 972013376, 105911873, 625729856, 229000807, 70642093, 585127471, 380372672, 592648152, 102287375, 56662716, 506239309, 993883415, 934879516, 719964381, 643813376, 893014450, 699830145, 138716995, 817364520, 93107845, 910258904, 775534819};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 469796158;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> heights = {744707734, 680698901, 289670022, 688475027, 723039067, 132786348, 463845444, 871566856, 104799723, 422273668, 349813063, 186316881, 492915760, 934940533, 566689553, 85563911, 37227907, 623352268, 444319571, 883627674, 410748135, 164283951, 379957401, 156278936, 864114096, 518674395, 973643455, 957221940, 281449651, 749178274, 498607835, 878673736, 282393526, 640794209, 419665114, 857948944, 773580556, 883510557, 729515799, 730896630, 305784225, 79328862, 917213511, 798699984};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 448856315;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> heights = {336419415, 736780247, 904013653, 812288034, 33616169, 640157678, 75552520, 197900120, 20115078, 231831455, 914530567, 391305824, 205474909, 724268858, 672755474, 807169534, 75393044, 403945561, 89563059, 716187252, 823610675, 800028355, 342284159, 707121231, 382060505, 73180789, 865421807, 313905718, 842910651, 516638143, 180691464, 31846417, 105934741, 937221468, 844134450, 139550909, 577379145, 919686969, 337451028, 450010574, 4034775, 104497946, 841316397, 209509683, 828766803, 366588223};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 466593350;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> heights = {904159847, 770533783, 958758627, 620347098, 594144457, 611303333, 962631257, 153782040, 993363838, 888328397, 19203846, 307269555, 583755399, 388358340, 340477370, 468118167, 494293080};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 487079997;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> heights = {164768968, 139537085, 707594333, 669267270, 971295016, 186309890, 88490710, 40506632, 998921303, 151595441, 757076116, 218025877, 19712312, 5401754, 988559659, 830987291, 134099412, 32922232, 442290623, 64665774, 589002507, 288170812, 690091768, 80539168, 595440367, 126363518, 849081044, 237755648, 594481684, 195890475, 66132925, 31788476, 829734463, 114258331, 696222938, 653545831, 783848515};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 496759777;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> heights = {581855144, 53431025, 787746742, 551184517, 853312045, 659975406, 852683573, 136504557, 490962696, 22932200, 129608522, 8118538, 788546355, 141518318, 73940482, 73768964, 31850084, 12295856, 605001639, 128445840, 310331287, 51999674, 929337953, 447126258, 811250324, 136571768, 2707820, 1925341, 265134598, 195748746, 144703259, 123473446, 274358854, 138813228, 38437351, 12987719, 297458109, 296204705, 822058952, 144302900, 730420258, 221247216, 426706826, 238846134, 522794853, 455057601, 850121085, 704523851, 22544506};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 463706309;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> heights = {140608766, 44783378, 359638748, 350669223, 561856355, 47176361, 681535486, 417080526, 530878683, 415791400, 56153211, 22719394, 793659823, 330512064, 165580997, 10706206, 458182961, 4856144, 575734448, 132758264, 103976261, 58439573, 84425737, 24128664, 677637669};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 394401842;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> heights = {31330392, 23899937, 14381877, 7983485, 835397828, 319592815, 91783392, 47552927, 77453713, 34535551, 218441998, 103663204, 923236623, 826084057, 705659280, 568071273, 129935325, 52482204, 162418248, 133098073, 36448978, 16846176, 758555425, 95072575, 753359472, 109172213, 770854482, 690301560, 393214770, 268847840, 150038501, 76753505, 828767254, 335653124, 35969113, 13113851, 171927372, 120631997, 564234360, 249381084};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 455061398;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> heights = {782676357, 225693924, 114694281, 8182016, 566545912, 394446377};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 387247172;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> heights = {918381365, 109018713, 809965032, 807346694, 729619920, 421036809, 272046471, 247309859, 283568493, 192195473, 25797303, 13353555};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 452513911;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> heights = {28352155, 20175362, 172676706};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 4088397;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> heights = {694846592, 299664955, 364699903, 216315836, 106108850, 22448236, 14056753, 5180304, 474967618, 228880561, 125814945, 34993969, 75351498, 40671021, 812411245, 36886562, 155261392, 67144019, 766506481, 576298200, 891804409, 62714167, 859866693, 787221712, 832832230, 241682659, 131131164, 74397400, 48043785, 12192866, 53956916, 1880652};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 444961884;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> heights = {271173170, 123038527, 951791208, 737770508, 137095280, 47949405, 212738125, 203719539, 671424062};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 451920903;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> heights = {46230513, 8441245, 919179250, 244758574, 319465461, 71988079};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 423595587;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> heights = {895763661, 135774300, 101851934, 80367695, 38951366, 17660619, 13124987};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 441319340;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> heights = {55707798, 23447761, 16072225, 4203238, 760393, 63675, 33160, 30705, 17830, 412, 380, 321, 223, 80, 42, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 27853910;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> heights = {180053133, 34694728, 11972282, 1580381, 81661, 3447, 258, 46, 44, 9, 3, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 90026573;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> heights = {449460736, 262615566, 81576237, 17467687, 6329329, 6132220, 3190368, 2879309, 620241, 12353, 5745, 2452, 47, 17, 5, 3, 3, 3};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 224730375;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> heights = {415158159, 162071499, 13291613, 8070883};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 203543640;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> heights = {821200900, 237907910, 128143638, 123034369, 2486969, 1463211, 696037, 462505, 343841, 71590, 4002, 344, 12, 7, 2, 2, 2, 1, 1, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 410600460;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> heights = {687118319, 495213611, 105922484, 89749281, 27236098, 15878449, 6312880, 824470, 532760, 326760, 291239, 49352, 42119, 9274};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 343554529;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> heights = {67575430, 28981946, 10617134, 9761447, 4220750, 1474876, 1168639, 1011808, 508429, 162382, 65920, 51688, 9879, 4913, 1526, 982, 186, 86, 24, 14, 11, 4, 4, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 33787735;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> heights = {653542622, 344464322, 226047418, 19531619, 14289993, 11531674, 1411351, 1086913, 180094, 13636, 10240, 6141, 3656, 2218, 1892, 173, 140, 65, 60, 8, 7, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 326771321;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> heights = {474629743, 147880994, 97690363, 11981898, 319196, 107459, 37647, 18799, 10883, 9535, 8907, 1213, 1001, 344, 77, 64, 25, 11, 10, 5, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 237314881;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> heights = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000024;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> heights = {999999999, 917696313, 643458748, 352502678, 282885968, 55795538, 428777941, 10, 2, 1, 996870494, 100754939, 718010953, 619402895, 10784141, 585455719, 766719333, 100722341, 297951058, 270547856, 266016068, 249044131, 670308446, 201649739, 440943110, 111046815, 952303703, 420234404, 430037680, 805931049, 913609218, 212225808, 326370439, 763231768, 398943455, 551046017, 41602827, 27643379, 298522255, 164340272, 491304108, 56747151, 465346710, 263125748, 427215609, 747335691, 541109067, 407983707, 824974940, 75391708};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000004;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> heights = {1, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> heights = {548, 47, 1, 190};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 275;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> heights = {999999999, 1, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000001;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> heights = {475371543, 883459160, 686970804, 824067167, 783594393, 650744997, 911038547, 444166379, 67985790, 558350160, 617394721, 969012112, 937785269, 682259789, 386297246, 290825382, 384872726, 216050177, 387218580, 793197197, 323941864, 146648730, 456327523, 878082454, 994723964, 354848520, 839613818, 759330449, 48556022, 213980827, 226524660, 464153899, 130430522, 414939892, 576069540, 522522022, 189012541, 658213419, 613974725, 623792404, 163388375, 823802113, 861575301, 395872866, 901814835, 720815947, 921982493, 491712542, 284925572, 139042449};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 473083973;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> heights = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000017;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> heights = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1, 1000000000, 9999999, 1000000000, 1000000000, 1000000000, 4343523, 1000000000, 1000000000, 1000000000, 2342342, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 2};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000021;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> heights = {5, 4, 1, 1000000000};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> heights = {2, 2, 2, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> heights = {1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000023;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> heights = {1000000000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000024;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> heights = {2, 5, 8, 4, 3, 5, 2, 9, 12};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> heights = {1361956, 207579013, 628145517, 376140463, 883515281, 186969586, 762888636, 326402540, 98152103, 158176573, 61402893, 127860890, 9580639, 570870045, 646139320, 178509023, 484027667, 61263305, 841082556, 558212775, 940563716, 26389630, 579113529, 496148000, 925801173, 837151741, 70301174, 656585276, 285845006, 902071051, 403573724, 727123763, 9467291, 296231663, 631265401, 899374334, 520690250, 798571511, 491747710, 799313373, 643215696, 789204467, 614608449, 162733265, 456517317, 555253432, 806956092, 181457955, 528156707, 751354014};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 465548219;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> heights = {5922, 5368, 9248, 3011, 4080, 1770, 351, 4987, 6098, 205, 1951, 3647, 4156, 1019, 2158, 362, 6282, 9273, 4321, 2694, 3973, 5025, 585, 5934, 6594, 6570, 7629, 9569, 4438, 2208, 1956, 5654, 5697, 914, 1265, 8673, 1717, 5710, 678, 112, 9718, 8220, 3365, 8457, 2168000, 1906000, 1, 1000000000, 213, 9460};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 499999894;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> heights = {1000000000, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> heights = {43, 31, 15};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> heights = {35115719, 967932552, 558797765, 540180489, 131993355, 398713335, 202649385, 600486207, 947890119, 71411671, 945768001, 546880314, 976509218, 10687437, 987640039, 725018214, 750029649, 570501896, 32355621, 418741002, 281659991, 810028985, 153594841, 926496537, 243704622, 411766801, 123156046, 645914710, 737575925, 598798668, 674347951, 16849261, 497960090, 876122019, 643544069, 963887096, 745731971, 446932285, 803176355, 899612299, 984932085, 430283373, 56467803, 22573762, 816629996, 667249486, 433888575, 940445709, 209450684, 87940214};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 485395398;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> heights = {5, 4, 3, 2, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> heights = {12313, 141255125, 1231, 1231, 235235235, 234234, 234234, 234212, 132, 5155555, 16626346, 123123, 12312, 1231, 123, 12, 23, 123, 4, 12, 5, 5, 1, 23, 123, 151, 12, 125, 25, 512, 123123, 123, 123, 123, 23, 123123, 12, 123, 23, 3, 123, 12, 123, 123, 23, 23, 31, 55, 5};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 117617637;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> heights = {1000000000, 11};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 499999995;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> heights = {12, 52, 4, 12, 36, 58, 4, 7, 5};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> heights = {1, 2, 3, 4, 3};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> heights = {1, 2, 3, 1000000000, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> heights = {1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> heights = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> heights = {1, 1000000000, 1000000000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000008;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> heights = {1, 1000000000, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> heights = {3, 2, 1, 3, 4, 2, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> heights = {1, 2, 3, 2};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
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
    vector<int> heights = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 99};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 499999954;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> heights = {6, 3, 2};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> heights = {1000000, 5555, 5555};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 497224;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> heights = {90, 1000000, 1, 1000000000, 1, 1, 1, 1, 1, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 999999999, 999999998, 1, 1, 1, 1, 1, 999999997, 999999999, 500000, 6000000, 7000000, 1000000, 1000000000, 1, 4, 56, 7, 8, 9, 1, 19000000, 342, 674674564, 4564224, 60, 61, 63, 64, 65, 63, 63, 63};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000016;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> heights = {1, 1, 1, 1, 1, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> heights = {9, 5, 3};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> heights = {2, 2, 2, 2, 2};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> heights = {1000000000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 11, 1, 1, 1, 11, 11, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 11, 1, 11, 11, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000024;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> heights = {6, 4, 7, 4, 5};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> heights = {1, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> heights = {907815324, 743545519, 811641654, 738779146, 48315017, 17000870, 149359420, 194703905, 630089468, 909761222, 495191458, 189139312, 460909998, 78690738, 846437235, 566535782, 255264309, 6838671, 940792329, 159984110, 24465582, 779518450, 2168356, 754644742, 637794430, 685109205, 899399326, 521013943, 140339607, 595986796, 852366306, 758419739, 72230471, 591668173, 93539634, 917358952, 205359115, 407126647, 797233833, 931730520, 888304538, 493001662, 192623574, 757123195, 113477754, 184384472, 384113854, 163151277, 478147381, 700135378};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 469311989;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> heights = {2, 10, 2, 2};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> heights = {4, 4, 3, 1, 2};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> heights = {1000000000, 1000000000, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000001;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> heights = {1, 2, 2, 3};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
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
    vector<int> heights = {5, 4, 5, 8};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> heights = {1000000000, 1, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000022;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> heights = {5, 5, 5, 5};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> heights = {5, 1, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> heights = {2, 3, 7, 3};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> heights = {1, 20, 39, 20};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> heights = {1000000000, 500000001, 2};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> heights = {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> heights = {1000000000, 1, 499999999, 15922, 12, 124124, 9999, 1, 124124124, 124124, 112312, 12344, 46456, 78678, 1, 1, 1, 1, 1, 436456, 1, 1, 1, 1, 56457, 666, 888, 33334, 234, 124, 12, 1, 2, 232332, 24421, 124};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000015;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> heights = {2, 2, 2, 2, 2, 2, 2};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> heights = {3, 2, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> heights = {3, 3, 4};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> heights = {10, 5, 5, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> heights = {2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000, 2, 1000000000};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000023;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> heights = {5, 4, 5, 8, 9, 8};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> heights = {2, 4, 3};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> heights = {3, 3, 3, 3, 3, 3, 3, 3, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> heights = {100, 70, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> heights = {201629285, 54181223, 90731827, 216410213, 516618714, 327303149, 71367048, 608557413, 707296471, 2763724, 791209384, 637357858, 425071364, 643788020, 915600326, 419826452, 539381563, 650417126, 661835224, 292280080, 56187065, 236158547, 566902967, 700691471, 514194721, 596463513, 308581989, 164464812, 348624789, 1422901, 85338762, 562458510, 17146670, 421257186, 963407784, 760889080, 145116516, 17801770, 487083229, 993129211, 279727987, 339535998, 510430079, 394129760, 299292166, 589694460, 150720087, 62244168, 899135837, 726550292};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 472803009;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> heights = {1, 2, 2};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> heights = {1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 2, 1, 2, 2, 2, 2, 1, 2, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> heights = {1000000000, 999999900, 999999800, 999999700, 999999600, 999999500, 999999400, 999999300, 999999200, 999999100, 999999000, 999998900, 999998800, 999998700, 999998600, 999998500, 999998400, 999998300, 999998200, 999998100, 999998000, 999997900, 999997800, 999997700, 999997600, 999997500, 999997400, 999997300, 999997200, 999997100, 999997000, 999996900, 999996800, 999996700, 999996600, 999996500, 999996400, 999996300, 999996200, 999996100, 999996000, 999995900, 999995800, 999995700, 999995600, 999995500, 999995400, 999995300, 999995200, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000024;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> heights = {1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000024;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> heights = {1, 109, 106, 105};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> heights = {10, 5, 20, 2, 25, 4, 40, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> heights = {548000000, 47000000, 58000000, 250000000, 201200000, 548000000, 47000000, 58000000, 250000000, 201200000, 548000000, 47000000, 58000000, 250000000, 201200000, 548000000, 47000000, 58000000, 25000000, 201200000, 548000000, 47000000, 58000000, 250000000, 201200000, 548000000, 47000000, 58000000, 250000000, 201200000, 548000000, 47000000};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 261500009;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> heights = {281, 617, 46, 529, 432, 145, 700, 145, 649, 180, 19, 460, 342, 219, 603, 874, 593, 218, 43, 989, 855, 379, 952, 108, 505, 554, 468, 25, 45, 646, 374};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 486;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> heights = {1, 102, 100, 50};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> heights = {4, 1, 1, 6, 9, 1, 1, 4, 1, 4, 9, 221, 1, 1, 1, 34};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> heights = {2, 2, 2};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> heights = {9, 6, 9, 9, 9, 10, 7, 10, 10, 10, 11, 8, 11, 11, 11};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> heights = {200, 20, 10};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> heights = {1, 1, 2, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> heights = {1, 7, 3};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> heights = {20, 10, 9};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> heights = {3, 3, 3, 5};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> heights = {2, 1, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> heights = {9, 5, 11, 1443, 23, 343435, 221, 1, 233456, 10000000, 5000000};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2500001;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> heights = {5, 5, 5, 5, 5};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> heights = {999999999, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> heights = {10, 30, 20};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> heights = {10, 10, 10, 5};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> heights = {10, 5, 20, 2, 25, 4, 40, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 100, 4, 4, 4, 4, 4, 100000000, 5, 5};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 49999999;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> heights = {300, 285, 548, 47, 3};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 274;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> heights = {10, 10, 10, 10, 10};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> heights = {1, 2, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> heights = {10, 6, 4};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> heights = {1000000000, 900000000, 800000000, 700000000, 600000000, 500000000, 400000000, 300000000, 200000000, 100000000, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000005;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> heights = {2, 2, 2, 2};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> heights = {4, 3, 2, 1, 6, 5, 4, 3};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> heights = {1, 1, 1, 1, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> heights = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> heights = {5, 5, 3, 1, 2, 3, 2, 1, 1, 2, 1, 2, 4, 6, 5, 3, 4};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> heights = {4, 4, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> heights = {2, 3, 4, 5, 6, 7, 8, 9, 9};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> heights = {4, 2, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> heights = {11, 11, 11, 11, 11};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> heights = {100000016, 100000008, 100000000};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> heights = {1, 14};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> heights = {9, 5, 10, 5};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> heights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> heights = {1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 1000000000, 1, 100000000, 1, 1000000000, 1, 100000000, 1, 100000000, 1, 100000000, 1, 100000000, 1, 100000000, 1, 100000000, 1, 100000000, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 500000023;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> heights = {1, 1, 2};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> heights = {1, 4900, 5000, 100};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2451;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> heights = {1, 100000000, 1, 100000000, 1, 100000000, 1, 1, 1, 1, 1, 1, 1, 100000000, 100000000, 1, 1, 100000000, 100000000, 100000000, 100000000, 100000000, 1, 1, 1, 1, 100000000, 100000000, 1};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 50000013;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> heights = {9, 5, 11};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> heights = {1, 2, 100, 3};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> heights = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    KingdomAndTrees* pObj = new KingdomAndTrees();
    clock_t start = clock();
    int result = pObj->minLevel(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=15170&pm=11967
********************************************************************************
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
 
class KingdomAndTrees {
public:
  int minLevel(vector <int>);
};
 
int KingdomAndTrees::minLevel(vector <int> a) {
  int ll = 0, rr = 1000000100, mid, n = a.size(), i, ok, p, lg, rg;
  while (ll < rr) {
    mid = (ll+rr) >> 1;
    p = 0; ok = 1;
    for (i=0;i<n;i++) {
      lg = a[i]-mid;
      rg = a[i]+mid;
      if (rg <= p) { ok = 0; break; }
      if (lg > p) p = lg;
      else p++;
    }
    if (ok) rr = mid;
    else ll = mid+1;
  }
  return ll;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/