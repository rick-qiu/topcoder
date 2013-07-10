/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12048
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

class ContestWinner {
public:
    int getWinner(vector<int> events);
};

int ContestWinner::getWinner(vector<int> events) {
    int ret;
    return ret;
}


int test0() {
    vector<int> events = {4, 7, 4, 1};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> events = {10, 20, 30, 40, 50};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
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
    vector<int> events = {123, 123, 456, 456, 456, 123};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 456;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> events = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> events = {47};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> events = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> events = {993751, 927536, 635861, 460252, 672, 972843, 941845, 871280, 371771, 889768, 490119, 601862, 879629, 794779, 561324, 650783, 34961, 803208, 990, 686402, 985755, 643519, 74250, 636121, 717515, 793937, 771189, 641960, 322255, 189108, 734710, 963115, 770065, 964991, 494763, 936259, 595172, 908959, 820457, 461033, 880301, 124895, 500427, 292030, 934931, 124138, 602009, 621690, 311663, 355586};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 993751;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> events = {715970, 704035, 376128, 157205, 951174, 344473, 220275, 165725, 333946, 271175, 278805, 528090, 780605, 333946, 559640, 99775, 271175, 715970, 165725, 75300, 220275, 668322, 75300, 324607, 943592, 943592, 702569, 970186, 593946, 780605, 668322, 672412, 157205, 690564, 647483, 528090, 324607, 951174, 647483, 278805, 559640, 344473, 99775, 376128, 690564, 672412, 970186, 593946, 704035, 702569};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 333946;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> events = {524582, 707168, 487712, 751206, 916613, 665323, 103052, 61053, 771663, 487712, 918689, 707168, 916613, 111369, 310, 524582, 633218, 665323, 918689, 200915, 238443, 771663, 904318, 61053, 273122, 310, 200915, 904318, 498710, 498710, 751206, 446498, 103052, 558245, 490143, 633218, 238443, 66136, 390462, 273122, 330833, 205776, 558245, 390462, 490143, 66136, 111369, 330833, 446498, 205776};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 487712;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> events = {918035, 360258, 89749, 728820, 425881, 242553, 410926, 373549, 792262, 425881, 58459, 670673, 610113, 621892, 149638, 930335, 217887, 54978, 435059, 728820, 792262, 224849, 918035, 621892, 224849, 410926, 778268, 610113, 285412, 54978, 930335, 645066, 645066, 778268, 149638, 670673, 559295, 217887, 360258, 888624, 68718, 373549, 242553, 68718, 285412, 435059, 89749, 559295, 58459, 888624};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 425881;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> events = {748912, 184091, 304990, 707556, 425669, 831196, 271158, 252017, 40609, 354544, 707556, 425669, 478868, 478868, 315805, 529244, 876359, 494513, 494513, 831196, 115845, 992660, 315805, 992660, 802112, 354544, 802112, 340276, 340276, 883028, 523056, 184091, 523056, 623901, 115845, 189454, 883028, 271158, 987183, 529244, 674138, 189454, 674138, 304990, 623901, 40609, 748912, 987183, 876359, 252017};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 707556;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> events = {136437, 457447, 453136, 453136, 629082, 694416, 209830, 464920, 119947, 310535, 730857, 478368, 719098, 172221, 543777, 310535, 321456, 730857, 808798, 136437, 735130, 17890, 808798, 62289, 457447, 26613, 62289, 209830, 146736, 368129, 324529, 478368, 735130, 172221, 237005, 612635, 719098, 146736, 612635, 368129, 26613, 629082, 17890, 324529, 694416, 119947, 543777, 464920, 321456, 237005};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 453136;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> events = {101335, 101335, 101335, 770112, 101335, 770112, 770112, 770112, 101335, 101335, 101335, 770112, 770112, 770112, 770112, 770112, 770112, 770112, 770112, 770112, 101335, 101335, 770112, 101335, 101335, 770112, 770112, 770112, 101335, 770112, 101335, 101335, 101335, 770112, 101335, 101335, 101335, 101335, 101335, 770112, 101335, 101335, 770112, 770112, 770112, 770112, 101335, 101335, 101335, 770112};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 101335;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> events = {216477, 899398, 899398, 216477, 216477, 899398, 216477, 899398, 216477, 899398, 899398, 899398, 216477, 899398, 216477, 216477, 899398, 216477, 899398, 216477, 216477, 216477, 899398, 899398, 216477, 216477, 216477, 899398, 216477, 899398, 216477, 216477, 899398, 899398, 899398, 899398, 899398, 899398, 899398, 216477, 216477, 216477, 899398, 899398, 899398, 216477, 899398, 899398, 216477, 216477};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 899398;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> events = {257382, 455520, 784632, 108137, 725727, 176775, 463536, 766888, 342745, 966105, 796431, 196260, 615237, 566028, 478905, 375572, 886293, 590118, 784632, 38534, 838453, 261221, 759347, 200818, 726671, 483010, 437969, 463536, 252290, 590118, 501892, 882002, 185906, 501892, 84456, 178132, 858792, 376868, 726671, 393093, 351719, 448138, 204377, 985190, 737889, 647217, 510944, 784505, 817048, 961778};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 784632;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> events = {927862, 5029, 413185, 846981, 178488, 61292, 620293, 404750, 433571, 368662, 897204, 446747, 853957, 822669, 799790, 738072, 301774, 127379, 150315, 500849, 620293, 215836, 465851, 312446, 853957, 581383, 835257, 465851, 961162, 835257, 726216, 819837, 870154, 612400, 623806, 738072, 312446, 996876, 726216, 435892, 819837, 127379, 897204, 996876, 611496, 404750, 974636, 927862, 215836, 494271};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 620293;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> events = {444366, 793321, 844608, 228611, 461276, 36611, 832799, 719465, 942361, 635724, 809082, 297127, 256, 957931, 461276, 653017, 29017, 138989, 985155, 888211, 407414, 366068, 219859, 959280, 219994, 761426, 980069, 60641, 653017, 498767, 116217, 840212, 742124, 689257, 753444, 213000, 617312, 942361, 801707, 444366, 633031, 501809, 719465, 247470, 314299, 61546, 888211, 624498, 980069, 60111};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 461276;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> events = {415015, 310937, 300795, 278796, 161593, 413198, 678335, 91687, 251924, 420456, 776589, 758064, 170024, 426757, 425517, 845746, 621799, 160246, 103247, 82401, 845746, 740005, 138744, 138744, 879851, 103247, 310937, 161689, 497492, 161593, 736817, 648566, 670720, 893595, 678628, 937400, 41320, 41320, 679384, 448962, 505202, 505202, 651728, 594436, 497492, 458231, 300795, 879851, 75574, 195054};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 845746;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> events = {751155, 792335, 454172, 767763, 259824, 655938, 335214, 83924, 926160, 523488, 112157, 180674, 789603, 482543, 971001, 26482, 62347, 944253, 578498, 586751, 467612, 743378, 350783, 43163, 586751, 262674, 466195, 38072, 713124, 725733, 188440, 779742, 190232, 259824, 242711, 908904, 406186, 173181, 482543, 331892, 40105, 844329, 843562, 437984, 86925, 817692, 437984, 519364, 8666, 9597};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 586751;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> events = {710859, 172393, 542286, 805716, 855806, 184188, 739730, 542745, 886846, 300068, 739730, 511773, 511773, 238249, 780354, 522741, 670953, 389715, 629221, 173815, 75126, 75126, 280144, 994760, 249612, 528925, 249612, 352634, 264678, 135929, 352634, 264678, 973388, 479355, 258170, 789017, 812600, 249664, 502081, 697845, 353684, 21236, 112554, 112915, 21236, 855806, 925653, 508269, 303248, 681211};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 739730;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> events = {811430, 621648, 812563, 504637, 932888, 950218, 154810, 812563, 269852, 62145, 879983, 630604, 577552, 547656, 269852, 915569, 490051, 139635, 916799, 139635, 62145, 547656, 868271, 950218, 153169, 544960, 946623, 151396, 451516, 876605, 777544, 946623, 256553, 876605, 38830, 410860, 410860, 145637, 510007, 470146, 38830, 497245, 154810, 2465, 879983, 89778, 504928, 777544, 750334, 451516};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 812563;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> events = {726037, 914283, 119554, 632676, 27553, 823253, 726037, 27553, 105738, 788484, 918958, 956135, 956135, 220824, 220824, 242715, 12607, 329447, 119554, 713649, 508990, 53498, 132690, 904111, 274765, 712123, 366898, 83955, 949563, 914283, 710297, 358805, 949563, 788484, 193979, 12607, 230102, 551677, 859574, 508990, 242715, 132690, 859574, 83955, 882667, 230102, 310563, 276203, 366898, 655446};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 726037;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> events = {964903, 409985, 230489, 127335, 322535, 462841, 284244, 9604, 928430, 803746, 462841, 773822, 507771, 437985, 157426, 10693, 983993, 248028, 723024, 413181, 642549, 623985, 989820, 985934, 507771, 119582, 264528, 906203, 707285, 322028, 99391, 230008, 480433, 980896, 322535, 100088, 96191, 893594, 88589, 5512, 496766, 912944, 279402, 76696, 96191, 151949, 9604, 378307, 832026, 5512};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 462841;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> events = {417839, 849172, 269965, 356226, 334245, 417839, 491495, 53613, 337468, 356226, 272766, 166091, 152733, 132317, 630533, 398393, 590456, 53613, 491495, 398393, 559534, 590456, 700784, 817163, 90370, 767397, 168374, 132317, 559534, 166091, 630533, 168374, 16302, 334245, 528404, 849172, 272766, 16302, 528404, 90370, 843896, 843896, 269965, 767397, 952468, 337468, 817163, 152733, 952468, 700784};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 417839;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> events = {860129, 776768, 360260, 23275, 604264, 113377, 931910, 834803, 787356, 254316, 704514, 864725, 43318, 396344, 391279, 208171, 400038, 264843, 882, 532455, 406003, 504068, 15097, 601313, 115443, 315045, 143855, 938547, 264843, 415919, 849981, 331856, 243752, 311537, 998258, 30033, 466556, 621574, 992295, 197427, 620879, 85001, 984589, 620827, 860129, 224574, 197427, 631776, 214416, 633651};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 264843;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> events = {209768, 336985, 878525, 766773, 301287, 390795, 411507, 398225, 529843, 6318, 419025, 361111, 419025, 387201, 294106, 782535, 901844, 559959, 442657, 14626, 346632, 697107, 621949, 499758, 9267, 730110, 457503, 565034, 518671, 361129, 217140, 67732, 551779, 621949, 240027, 19321, 578680, 234941, 741551, 398225, 147177, 410591, 77953, 991296, 467988, 6318, 924453, 467862, 487447, 19321};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 419025;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> events = {116606, 425317, 917038, 384251, 571945, 580670, 917038, 658189, 229405, 87477, 72787, 866676, 384251, 866676, 437909, 66536, 611246, 967363, 874098, 425317, 571945, 384251, 917038, 967363, 518156, 813517, 471940, 87477, 611246, 498047, 66536, 152733, 611246, 571945, 471940, 993048, 87477, 66536, 874098, 993048, 229405, 874098, 437909, 229405, 540352, 866676, 425317, 813517, 993048, 813517};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 384251;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> events = {790739, 379049, 16147, 673812, 240975, 39600, 883032, 836295, 211608, 805256, 569102, 199387, 39528, 349984, 300405, 381078, 199387, 240975, 416680, 985608, 818961, 12495, 346173, 703274, 942837, 75978, 477761, 582471, 836295, 703274, 12495, 551131, 882459, 569102, 12495, 381078, 882459, 346173, 637054, 416680, 527602, 276231, 569102, 589622, 818961, 807516, 16147, 477761, 416680, 805256};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 12495;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> events = {480242, 735495, 376995, 402773, 422089, 290296, 447685, 252068, 376995, 154473, 538684, 139286, 735495, 447685, 376995, 301082, 806314, 402773, 447685, 568164, 879816, 154473, 568164, 290296, 806314, 139286, 903316, 290296, 301082, 436971, 436971, 972350, 402773, 818406, 903316, 139286, 559045, 514769, 252068, 422089, 835447, 818406, 559045, 835447, 903316, 432350, 301082, 514769, 436971, 480242};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 376995;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> events = {397187, 861525, 923907, 772036, 89119, 630430, 504182, 588828, 135324, 409361, 409361, 485306, 931826, 89119, 147174, 485306, 95640, 121500, 322409, 135324, 22294, 360799, 244089, 89119, 588828, 449852, 482715, 923907, 452926, 397507, 244089, 768949, 260184, 545773, 630430, 22294, 368546, 244089, 786190, 368546, 135324, 988522, 957173, 995036, 996709, 288908, 147174, 322409, 923907, 996709};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 89119;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> events = {483690, 736490, 999284, 485619, 312730, 188805, 697644, 437743, 514047, 622715, 97208, 797415, 697644, 48375, 587270, 622715, 8885, 420447, 877000, 642031, 695964, 945128, 362314, 857627, 797415, 695964, 797887, 8832, 544720, 697644, 483690, 219735, 840773, 877000, 527558, 581919, 236987, 127266, 514337, 178830, 568394, 188805, 485619, 261183, 81758, 690394, 291439, 690394, 500058, 562189};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 697644;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> events = {638626, 336058, 427092, 403814, 438090, 809665, 537308, 780078, 836459, 185149, 693653, 631594, 388295, 43081, 836459, 159405, 707902, 820841, 815852, 815852, 151796, 631594, 73574, 336058, 438090, 881637, 907817, 336058, 385839, 902440, 537308, 567233, 315002, 43081, 123500, 712382, 43081, 170062, 882888, 222125, 289533, 998157, 881637, 537308, 289533, 789554, 815852, 998157, 762122, 307973};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 336058;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> events = {379027, 364979, 379027, 52796, 361704, 324202, 431470, 218126, 463865, 271486, 933913, 379027, 89187, 463865, 491825, 335080, 324202, 903088, 280575, 218126, 52796, 399769, 335080, 271486, 324202, 491825, 361704, 381469, 399769, 218126, 21670, 903088, 399769, 381469, 903088, 381469, 361704, 431470, 463865, 52796, 364979, 271486, 280575, 21670, 364979, 431470, 335080, 280575, 933913, 933913};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 379027;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> events = {384173, 642958, 127939, 839096, 954106, 41041, 356605, 356605, 294626, 49077, 107390, 304477, 304477, 35808, 81135, 593766, 208347, 339535, 738145, 603685, 232733, 593766, 29093, 13787, 232733, 491052, 593766, 579519, 839096, 323955, 759936, 29093, 13787, 779268, 323955, 954106, 35808, 48301, 29093, 80945, 356605, 339535, 956824, 107390, 127939, 954106, 323955, 133235, 13787, 304477};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 593766;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> events = {569681, 916474, 361678, 375834, 75902, 471809, 565662, 569681, 540674, 375834, 716530, 471124, 12250, 790574, 464794, 535334, 12250, 375834, 74007, 565662, 74007, 471809, 471124, 916474, 790574, 189875, 75902, 361678, 471809, 790574, 75902, 716530, 540674, 464794, 12250, 464794, 569681, 189875, 535334, 535334, 74007, 19281, 19281, 471124, 716530, 189875, 565662, 916474, 540674, 361678};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 375834;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> events = {246824, 365324, 113373, 266182, 632951, 144870, 40416, 428916, 929524, 587406, 525690, 428529, 68749, 578696, 144870, 976762, 364077, 144870, 769110, 987650, 538396, 60795, 40416, 113373, 210231, 84965, 960348, 661592, 364077, 530851, 408644, 67175, 881338, 189838, 23735, 8821, 602617, 880779, 600222, 881338, 60795, 351753, 249720, 31814, 335981, 877627, 40416, 433336, 830851, 468813};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 144870;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> events = {510892, 677989, 947805, 741623, 991594, 583101, 422141, 823210, 841827, 740475, 608492, 704892, 740475, 991594, 677989, 399746, 704892, 677989, 991594, 422141, 399746, 583101, 704892, 899497, 4841, 741623, 947805, 823210, 341001, 341001, 637905, 740475, 841827, 637905, 583101, 4841, 341001, 608492, 608492, 422141, 510892, 823210, 841827, 899497, 899497, 637905, 741623, 947805, 510892, 4841};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 677989;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> events = {726138, 738809, 726138, 738809, 720550, 764024, 738809, 492944, 720550, 4745, 726138, 669211, 492944, 49467, 57730, 485349, 57730, 218845, 249535, 261419, 229816, 570379, 792930, 669211, 218845, 942497, 607484, 720550, 182600, 261419, 607484, 942497, 485349, 764024, 570379, 218845, 49467, 4745, 792930, 485349, 492944, 49467, 792930, 669211, 182600, 229816, 764024, 249535, 229816, 942497};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 738809;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> events = {646165, 57003, 213481, 534784, 845828, 133767, 193521, 737406, 287732, 504665, 287732, 646165, 713783, 432237, 193521, 651801, 575529, 845828, 213481, 189350, 798478, 192928, 133767, 798478, 605471, 287732, 798478, 376864, 57003, 57003, 432237, 605471, 737406, 651801, 142027, 534784, 192928, 376864, 189350, 142027, 575529, 651801, 504665, 504665, 193521, 192928, 432237, 713783, 646165, 605471};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 287732;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> events = {573653, 540002, 383870, 549081, 163469, 206943, 549081, 449286, 417708, 592644, 599824, 232703, 206943, 573653, 87168, 210928, 210928, 86933, 553609, 383870, 513791, 768698, 818586, 783910, 540002, 290171, 758416, 768698, 40926, 818586, 783910, 40926, 592644, 232703, 402341, 417708, 163469, 758416, 290171, 631647, 540002, 599824, 290171, 449286, 87168, 631647, 553609, 402341, 513791, 86933};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 540002;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> events = {835742, 11910, 328699, 626064, 11910, 949441, 949441, 504811, 124118, 982782, 835742, 466227, 803146, 181085, 2126, 281424, 901744, 803146, 466227, 281424, 537432, 626064, 328699, 826243, 835742, 613103, 982782, 328699, 537432, 2126, 901744, 781161, 386533, 826243, 386533, 227538, 781161, 803146, 466227, 11910, 181085, 260707, 781161, 227538, 227538, 124118, 181085, 504811, 260707, 613103};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 835742;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> events = {864470, 77252, 247263, 231749, 864470, 611300, 268917, 590144, 387233, 110089, 231749, 247263, 309576, 517352, 231749, 824673, 864562, 180810, 507336, 110089, 517352, 507336, 269768, 824673, 611300, 864562, 110089, 387233, 269768, 523968, 661397, 590144, 309576, 269768, 864562, 590144, 387233, 268917, 247263, 611300, 824673, 180810, 309576, 507336, 661397, 180810, 661397, 864470, 523968, 77252};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 231749;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> events = {473291, 868039, 954486, 232444, 954486, 151426, 984045, 10123, 322439, 530269, 274094, 10123, 364754, 73740, 727540, 473291, 322439, 643151, 727540, 73740, 991, 530269, 124801, 746351, 746351, 419846, 13986, 705833, 364754, 997267, 705833, 124801, 13986, 10123, 232444, 727540, 151426, 13986, 274094, 73740, 868039, 419846, 991, 151426, 643151, 746351, 954486, 364754, 997267, 984045};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 10123;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> events = {273369, 45122, 600510, 49721, 946764, 709408, 25687, 685078, 642466, 45122, 639038, 288505, 444902, 355201, 685078, 968987, 273369, 49721, 968987, 709408, 639038, 575242, 700964, 946764, 355201, 288505, 25687, 357503, 575242, 700964, 639038, 444902, 45122, 758712, 830395, 25687, 764883, 709408, 758712, 758712, 642466, 764883, 830395, 357503, 600510, 642466, 946764, 273369, 600510, 49721};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 639038;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> events = {101799, 432987, 213826, 768000, 634347, 432987, 360731, 354398, 553726, 101799, 435426, 741701, 741701, 996664, 503822, 213826, 996664, 354398, 939791, 536192, 741701, 57439, 663177, 57439, 57439, 435426, 536192, 634347, 996664, 185479, 663177, 971522, 768000, 432987, 213826, 939791, 553726, 939791, 503822, 435426, 503822, 354398, 971522, 971522, 360731, 768000, 536192, 634347, 553726, 185479};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 741701;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> events = {275234, 255451, 742518, 231586, 440222, 837214, 837214, 860480, 980656, 509879, 161597, 440222, 310336, 231586, 326810, 951592, 161597, 161597, 247082, 509879, 76845, 400514, 185005, 373060, 247082, 373060, 185005, 373060, 275234, 860480, 742518, 801067, 400514, 980656, 474984, 76845, 474984, 185005, 326810, 860480, 247082, 255451, 598110, 742518, 598110, 440222, 801067, 951592, 275234, 310336};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 161597;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> events = {512028, 148176, 721006, 337220, 721006, 512028, 607901, 547573, 512028, 512028, 337220, 148176, 607901, 707176, 812967, 547573, 337220, 607901, 707176, 707176, 721006, 337220, 547573, 812967, 721006, 148176, 148176, 721006, 607901, 681672, 547573, 607901, 812967, 681672, 681672, 547573, 681672, 512028, 337220, 812967, 607901, 707176, 607901, 681672, 148176, 721006, 721006, 812967, 707176, 512028};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 607901;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> events = {112541, 146650, 650135, 146650, 677676, 246527, 246527, 338264, 338264, 653121, 103314, 112541, 103314, 677676, 246527, 103314, 650135, 650135, 650135, 653121, 112541, 650135, 338264, 146650, 677676, 246527, 653121, 677676, 677676, 112541, 103314, 246527, 653121, 103314, 112541, 338264, 146650, 246527, 146650, 677676, 146650, 650135, 338264, 650135, 653121, 653121, 146650, 338264, 112541, 103314};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 650135;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> events = {205274, 628477, 225045, 205274, 540330, 597226, 225045, 597226, 597226, 628477, 628477, 540330, 628477, 320320, 963830, 484524, 540330, 628477, 540330, 484524, 597226, 205274, 225045, 597226, 320320, 963830, 484524, 883143, 963830, 883143, 963830, 484524, 883143, 484524, 963830, 484524, 883143, 320320, 320320, 883143, 963830, 484524, 484524, 225045, 540330, 628477, 205274, 484524, 225045, 963830};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 484524;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> events = {598696, 598696, 63607, 63607, 63607, 601520, 601520, 9007, 63607, 747770, 9007, 601520, 9007, 601520, 9007, 601520, 601520, 747770, 9007, 598696, 63607, 747770, 601520, 9007, 63607, 63607, 63607, 598696, 747770, 601520, 598696, 598696, 747770, 9007, 747770, 63607, 747770, 747770, 598696, 598696, 9007, 601520, 601520, 747770, 9007, 598696, 63607, 598696, 9007, 747770};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 601520;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> events = {58530, 213367, 571891, 571891, 641142, 505629, 709726, 240855, 861800, 750844, 685079, 579395, 750844, 579395, 709726, 750844, 579395, 861800, 750844, 213367, 139192, 763629, 240855, 571891, 139192, 58530, 641142, 685079, 240855, 763629, 139192, 505629, 641142, 505629, 213367, 58530, 709726, 763629, 58530, 861800, 139192, 571891, 505629, 685079, 861800, 579395, 763629, 641142, 709726, 685079};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 750844;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> events = {785111, 216964, 216964, 658107, 216964, 216964, 216964, 755383, 392251, 392251, 785111, 392251, 392251, 755383, 658107, 658107, 216964, 785111, 755383, 392251, 755383, 658107, 658107, 392251, 392251, 392251, 658107, 785111, 216964, 755383, 755383, 658107, 785111, 216964, 658107, 658107, 216964, 216964, 785111, 785111, 785111, 755383, 755383, 755383, 392251, 658107, 785111, 755383, 392251, 785111};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 216964;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> events = {999517, 276728, 374577, 814316, 806063, 806063, 303475, 595963, 814316, 806063, 926228, 999517, 814316, 926228, 103035, 999517, 662176, 276728, 806063, 999517, 814316, 303475, 595963, 276728, 926228, 303475, 999517, 662176, 595963, 926228, 595963, 374577, 595963, 303475, 374577, 276728, 103035, 662176, 662176, 103035, 926228, 814316, 103035, 374577, 276728, 374577, 103035, 662176, 303475, 806063};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 999517;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> events = {264399, 932114, 342231, 264399, 342231, 583409, 932114, 264399, 583409, 264399, 583409, 264399, 342231, 583409, 583409, 932114, 932114, 264399, 342231, 932114, 583409, 583409, 932114, 264399, 932114, 932114, 264399, 342231, 583409, 583409, 264399, 342231, 342231, 342231, 264399, 932114, 264399, 342231, 932114, 342231, 583409, 264399, 932114, 342231, 932114, 583409, 583409, 342231, 583409, 264399};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 583409;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> events = {614002, 212018, 614002, 251001, 390495, 217773, 212018, 614002, 390495, 732269, 251001, 732269, 619825, 891870, 251001, 619825, 217773, 891870, 251001, 175030, 614002, 217773, 891870, 732269, 891870, 619825, 175030, 217773, 732269, 732269, 891870, 390495, 732269, 212018, 390495, 619825, 251001, 217773, 175030, 891870, 175030, 619825, 212018, 619825, 212018, 175030, 390495, 251001, 175030, 614002};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 732269;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> events = {358435, 358435, 358435, 358435, 358435, 358435, 358435, 524254, 358435, 974970, 358435, 358435, 534874, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435, 358435};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 358435;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> events = {4, 7, 4, 1};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> events = {1000000, 1000000, 1000000, 1, 1, 1, 1};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
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
    vector<int> events = {1000000};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> events = {1000000, 100, 1000000, 1000000};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> events = {1000000, 1, 1000000, 1};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> events = {1000000, 1000000, 1, 1, 1000000};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> events = {1000000, 1, 2};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> events = {999999, 1, 999999};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> events = {123, 123, 456, 456, 456, 123};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 456;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> events = {2, 1};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
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
    vector<int> events = {1000000, 1000000, 1};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> events = {1000000, 1, 1};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> events = {1, 1, 1, 5, 5, 5, 4};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
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
    vector<int> events = {99999, 999999, 999999};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> events = {1000000, 1000000};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> events = {1, 2, 1, 2};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> events = {1};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> events = {2, 1, 1, 1, 2, 2, 2};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> events = {1000000, 1000000, 65555, 1000000, 655555};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> events = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> events = {1000000, 999999};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> events = {1000000, 1000000, 1000000, 2};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> events = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 999999, 999999, 999999, 999999, 999999};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> events = {1000000, 7, 1000000, 1};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> events = {1, 456};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> events = {51, 60, 3, 82, 100000};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> events = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> events = {123, 123, 456, 456, 456, 123, 155, 666};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 456;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> events = {4, 5, 6, 5};
    ContestWinner* pObj = new ContestWinner();
    clock_t start = clock();
    int result = pObj->getWinner(events);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23049504&rd=14738&pm=12048
********************************************************************************
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <vector>
#include <list>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
 
class ContestWinner
{
 
 
public :
 
int getWinner(vector <int> events)
{
int i ;
// map<int,int> mymap;
 map<int, int> sc, mark; 
 map<int,int>::iterator ret;
 map<int,int>:: reverse_iterator re, pos;
 
int max = 0; 
for(i = 0 ; i < events.size(); i++)
{
 
sc[events[i]]++;
if (!i)
  max = events[0];
if (sc[events[i]] > sc[max])
    max  =  events[i];
 
}
 
return (max);
}
};

********************************************************************************
*******************************************************************************/