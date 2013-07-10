/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2929
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

class Crossings {
public:
    vector<int> getOut(vector<int> positions, vector<int> angles);
};

vector<int> Crossings::getOut(vector<int> positions, vector<int> angles) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> positions = {0, 40, 20, 10, 30, 50};
    vector<int> angles = {105, 40, 30, 75, 135, 75};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 5};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> positions = {0, 40, 20};
    vector<int> angles = {40, 40, 140};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> positions = {10, 11, 22, 33};
    vector<int> angles = {10, 10, 10, 10};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> positions = {10, 8, 6, 4, 2, 1, 3, 5, 7, 9};
    vector<int> angles = {179, 179, 179, 179, 179, 179, 179, 179, 179, 179};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> positions = {0, 10, 20, 30, 40, 50};
    vector<int> angles = {45, 90, 135, 179, 86, 84};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 5};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> positions = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> angles = {179, 178, 133, 100, 7, 6, 5, 4, 3, 2, 1};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> positions = {10, 20, 30, 40, 50, 1000000};
    vector<int> angles = {45, 135, 45, 135, 45, 135};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> positions = {10, 20, 30, 40, 50, 1000000};
    vector<int> angles = {45, 135, 44, 135, 45, 135};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> positions = {577197, 828599};
    vector<int> angles = {86, 63};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> positions = {100, 20, 30};
    vector<int> angles = {90, 90, 90};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> positions = {407512, 911028, 586051, 544198, 863641, 673202, 862126, 112760, 321963, 292344, 143750, 854724, 614765, 258147, 1062, 825873, 215118, 566014, 116465, 770702, 556075, 447206, 712297, 447238, 591545, 643164, 516986, 712946, 194344, 182468, 99640, 96448, 953049, 916296, 232787, 420206, 643618, 462477, 612649, 875848, 639738, 579384, 188755};
    vector<int> angles = {100, 163, 44, 34, 109, 126, 105, 63, 89, 15, 133, 110, 112, 124, 145, 27, 104, 156, 164, 111, 131, 8, 120, 175, 57, 102, 55, 32, 20, 153, 134, 28, 59, 14, 115, 147, 98, 81, 74, 54, 84, 90, 58};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 16, 30, 32, 40, 41};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> positions = {321846, 982894, 742307, 966130, 67803, 537624, 979074, 896669, 329107, 517232, 297942, 564678, 117504, 388508, 812521, 391704, 544620, 404006, 724103, 638883, 503765, 508389, 804566, 365978, 645180, 383134, 761974, 626028, 337057, 654134, 867885, 611738, 874015, 129724, 631222, 67172, 639349, 327376};
    vector<int> angles = {119, 144, 145, 95, 110, 143, 162, 26, 113, 73, 46, 25, 154, 12, 77, 103, 55, 99, 41, 56, 20, 51, 142, 161, 134, 111, 65, 155, 42, 45, 98, 177, 10, 15, 94, 17, 47, 160};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 15, 17, 34};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> positions = {150128, 953082, 48060, 344936, 408443, 968857, 547862, 710407, 265004, 538977, 408246, 599261, 700967};
    vector<int> angles = {78, 160, 2, 169, 108, 141, 104, 26, 40, 69, 1, 75, 15};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> positions = {875066, 830677, 708821, 542702, 146706, 745796, 31889, 659723, 87565, 970060, 281148, 634299, 944376, 711223, 159246, 533923, 108924, 452082, 800175, 997794, 891215, 467003, 768116, 414318, 39258, 193253, 157635, 906961, 200798, 661672, 930466, 943680, 154651, 583432};
    vector<int> angles = {169, 97, 104, 46, 72, 63, 7, 143, 36, 13, 70, 106, 28, 116, 82, 109, 125, 80, 123, 150, 107, 171, 157, 71, 177, 34, 161, 103, 113, 127, 9, 52, 47, 73};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 16, 31};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> positions = {727745, 917403, 406925, 316397, 584362, 751763, 754757, 142204, 279696, 932376, 530112, 929207, 530670, 449704, 92081, 77028, 363314, 714146, 404069, 691742, 203710, 630670, 557100, 558050, 997475, 993745, 543696, 709381, 397051, 829173, 62318, 803217, 329496, 9450, 520620, 776410, 358862, 964638, 54576, 884396, 313291, 27627, 400019, 31466, 878959};
    vector<int> angles = {72, 131, 110, 145, 157, 105, 107, 15, 143, 83, 106, 102, 147, 121, 62, 2, 48, 42, 139, 67, 156, 21, 130, 113, 161, 33, 96, 162, 140, 173, 36, 171, 152, 160, 34, 111, 45, 132, 142, 31, 128, 87, 154, 23, 56};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 25, 33, 41};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> positions = {484780, 196745, 15663, 708178, 73281, 692859, 570380, 798238, 653237, 209994, 288023, 787155, 48009, 356659, 351424, 426092, 558716, 346673, 897548, 583055, 476266, 437884, 498089, 579726, 797884, 870300, 885660, 764848, 783892, 930934};
    vector<int> angles = {94, 79, 20, 64, 148, 77, 31, 1, 118, 139, 12, 17, 70, 123, 145, 28, 26, 9, 62, 4, 176, 116, 10, 164, 115, 78, 44, 71, 141, 5};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 18, 25, 29};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> positions = {141649, 563474, 219307, 800350, 492622, 104773, 154467, 728794, 657636, 968704, 296580, 297561, 729252, 559504, 974685, 783638, 456817, 763209, 644931, 605940, 517501, 460910, 962187, 258207, 748963, 640042, 656035, 569557, 457062, 130615, 51176, 676340, 323669, 420437, 226694, 170509, 519821, 445004, 347384, 131847, 750912, 658666};
    vector<int> angles = {93, 132, 172, 84, 66, 21, 162, 148, 82, 20, 156, 137, 8, 75, 168, 13, 30, 38, 106, 22, 111, 104, 124, 131, 164, 120, 54, 145, 68, 179, 139, 37, 31, 70, 33, 105, 36, 35, 69, 55, 9, 158};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 9, 30};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> positions = {459436, 820472};
    vector<int> angles = {89, 135};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> positions = {572094, 944915, 877061, 502647, 765774, 261931, 810204, 566052, 534809, 721024, 749566, 936896, 816312};
    vector<int> angles = {71, 87, 10, 117, 1, 138, 136, 40, 28, 11, 121, 6, 62};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 5};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> positions = {817446, 650302, 488895, 81103, 146146, 940316, 382833, 47833, 245919, 262275, 213234, 866895, 908865, 623041, 177188, 364460, 189915, 637559, 933535, 748992, 888860, 150383, 291175, 997759, 733031, 660832, 753837, 127736, 384665, 937911, 32792, 459007, 234428, 160941, 513248, 772928};
    vector<int> angles = {39, 6, 139, 41, 100, 145, 153, 60, 97, 178, 156, 116, 146, 67, 66, 7, 101, 72, 22, 59, 161, 37, 169, 23, 80, 40, 114, 112, 76, 3, 155, 26, 48, 53, 123, 172};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 8, 23, 24, 27, 30};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> positions = {807432, 838757, 139528, 20007, 766341, 923473, 786051, 646024, 698992, 512723, 272842, 662611, 269864, 471766, 360014, 487641, 413392, 28295, 611905, 442953, 392545, 10997, 885447, 716340, 616510, 573039, 387238, 959880, 987623, 597078, 416312};
    vector<int> angles = {90, 15, 157, 55, 140, 168, 106, 39, 51, 101, 45, 54, 131, 156, 42, 35, 81, 160, 103, 6, 179, 11, 111, 47, 31, 21, 89, 172, 9, 61, 93};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 28};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> positions = {422946, 615299, 487411, 974561, 854813, 820607, 890325, 961274, 965736, 130793, 484180, 27042, 465882, 139014, 217838, 816798, 674305, 800943, 862248, 510023, 77031, 364732, 419184, 305186, 762137, 59538};
    vector<int> angles = {65, 145, 29, 162, 24, 6, 33, 147, 45, 103, 63, 97, 120, 156, 167, 170, 19, 28, 100, 144, 161, 13, 157, 148, 70, 99};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 11};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> positions = {461288, 972745, 609278, 135202, 614499, 363235, 489708, 970687, 243525, 241919, 495334, 550584, 344356, 173297, 224944, 757826, 666703, 276785, 65739, 879349, 45495, 21858, 633553, 618582, 796655, 713778, 888161, 433805, 21448, 43518, 275069, 250518, 630072, 376978};
    vector<int> angles = {155, 61, 44, 52, 10, 178, 31, 13, 40, 54, 141, 117, 15, 48, 25, 39, 101, 32, 114, 20, 82, 136, 60, 11, 51, 125, 157, 102, 156, 143, 179, 111, 107, 35};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 20, 21, 28};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> positions = {237043, 244261, 416814, 279921, 388745, 211054, 619362, 369684, 999229, 917355, 976681, 206289, 363544, 297225, 102109, 726864, 687838, 5503, 619957, 297620, 764894, 934850, 620312, 803153, 555705, 404104, 421028, 703265, 173234, 193882, 781048, 494057, 984087, 579985, 587899, 418412, 423674, 843967, 289002, 631050, 671432, 977618, 205424, 348638, 827004, 107403, 283324, 844873, 319202, 578480};
    vector<int> angles = {179, 78, 66, 75, 69, 104, 158, 61, 71, 171, 92, 109, 140, 15, 28, 38, 16, 57, 85, 113, 60, 111, 26, 51, 148, 79, 40, 20, 93, 48, 2, 138, 174, 67, 162, 94, 55, 86, 56, 137, 151, 70, 77, 130, 132, 17, 135, 152, 115, 65};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 10, 28};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> positions = {96425, 192351, 935234, 317157, 349186, 278210, 176343, 67513, 986828, 457934, 183493, 483716, 254959, 284306, 842839, 645814, 7267, 296975, 880529, 724262, 943503, 95845, 78289, 393658, 527441};
    vector<int> angles = {26, 175, 14, 1, 164, 74, 136, 34, 19, 76, 122, 95, 148, 150, 49, 90, 156, 27, 174, 97, 40, 12, 37, 36, 35};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 8, 10, 11, 14, 15, 16, 20};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> positions = {979607, 756301, 696804, 943950, 864265, 107063, 925151, 914368, 979390, 339700, 908389};
    vector<int> angles = {78, 121, 48, 87, 95, 144, 143, 134, 88, 149, 101};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 5, 8};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> positions = {355055, 933781, 377289, 216332, 51902, 254413, 148896, 622802, 201462, 780443, 651823, 178330, 986726, 202883, 48761};
    vector<int> angles = {7, 24, 15, 99, 102, 96, 40, 14, 55, 12, 74, 46, 147, 92, 49};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 10, 13};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> positions = {938124, 291723, 482301, 352537, 830529, 68849, 567106, 521969, 740485, 462940, 562374, 905675, 125519, 115286, 559810, 378878, 762474, 368452, 599388, 647570, 494856, 190009, 111041, 227262, 420724, 453136, 557877, 825223, 945320, 146621, 10978, 550396, 12242, 906606, 156016, 548938, 668229, 415988, 99409, 518343, 336640, 256296, 546920, 489336, 690471, 596422, 944123, 680152, 253114, 104706};
    vector<int> angles = {148, 88, 82, 118, 75, 115, 18, 149, 67, 158, 94, 173, 71, 130, 113, 146, 153, 12, 134, 65, 43, 147, 141, 50, 101, 32, 23, 136, 51, 31, 98, 44, 58, 41, 126, 121, 116, 11, 60, 171, 56, 30, 66, 47, 112, 105, 49, 128, 61, 4};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 28, 30};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> positions = {349740, 617636, 915698, 241111, 544732, 581015, 523469, 994910, 719251, 106273, 477621, 50395, 119757, 41004, 696979, 723768, 144694, 627678, 999072, 929881, 643910, 588155, 920587, 269179, 640854, 686879, 459675, 725059, 835764, 997855, 321120, 210298, 970862, 255221, 886441, 210951, 771399, 383571};
    vector<int> angles = {113, 169, 132, 70, 99, 176, 59, 78, 125, 88, 120, 49, 19, 12, 26, 82, 33, 116, 154, 48, 147, 112, 165, 46, 90, 126, 127, 20, 67, 87, 173, 18, 17, 94, 142, 148, 133, 101};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 29};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> positions = {191437, 658738, 922863, 937494};
    vector<int> angles = {86, 131, 136, 69};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> positions = {280371, 31841, 776445, 229084, 272640, 785333, 260496, 769575, 356713, 990411, 279910, 606621, 355820, 849834, 433083, 647705, 511188, 580244, 882295, 839412, 329408, 673953, 925284, 781538, 975939, 657049, 269295, 811264, 293360, 936838, 249329, 235984, 251955, 837105, 591232, 384196, 805918, 316055};
    vector<int> angles = {135, 129, 101, 99, 67, 20, 13, 139, 5, 58, 56, 26, 95, 59, 133, 108, 104, 166, 119, 128, 105, 53, 3, 179, 55, 86, 25, 93, 34, 68, 92, 122, 130, 127, 111, 23, 172, 131};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 9, 29, 30};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> positions = {233510, 136997, 467803, 626793};
    vector<int> angles = {110, 151, 52, 179};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> positions = {345161, 110986, 598116, 70338, 407441, 752823, 611899, 577929, 210234, 183449, 328221, 854802, 876407, 453971, 48807, 307531, 226684, 296176, 893483, 863933, 599163, 456698, 837988, 526090, 51590, 883606, 617594, 289807, 396902, 122991, 59428, 352367, 2324, 216800, 502062, 910407, 582455, 723582, 599620, 200384, 794927, 577831, 818970, 788201};
    vector<int> angles = {113, 93, 152, 148, 131, 124, 111, 72, 158, 176, 96, 46, 108, 122, 115, 171, 101, 49, 92, 37, 157, 31, 27, 130, 100, 112, 179, 95, 9, 150, 160, 99, 47, 1, 168, 147, 18, 24, 154, 69, 137, 12, 59, 3};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 14, 18, 24};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> positions = {378006, 235588, 764363, 449117, 846404};
    vector<int> angles = {58, 168, 107, 102, 157};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> positions = {242329, 239641, 671673, 778511, 523179, 429482, 908022, 75094, 398324, 954852, 587506, 404941, 534115, 881427, 770234, 30476, 121363, 348966, 20964, 799795, 794768, 628045, 54567, 714138, 293748, 338356, 522933, 967947, 881583, 962708};
    vector<int> angles = {55, 178, 77, 169, 109, 88, 30, 130, 9, 58, 91, 40, 3, 29, 97, 54, 152, 98, 63, 1, 21, 52, 99, 138, 14, 165, 145, 38, 69, 81};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 17, 22, 27, 29};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> positions = {895937, 551659, 255627, 658730, 976583, 148355, 879796, 758964, 825111, 121026, 965450, 207652, 202340, 778664, 976157, 649181, 432078, 403774, 785851, 708416, 510656, 85290, 186237, 636033, 341540, 57584, 424147, 407156, 309223, 53271, 610876, 342596, 944753, 26808, 650082, 106537, 613446, 21683, 430077, 351840};
    vector<int> angles = {20, 162, 105, 128, 34, 111, 8, 50, 101, 114, 151, 99, 116, 103, 172, 59, 10, 118, 37, 142, 152, 44, 158, 88, 138, 4, 132, 83, 52, 77, 117, 17, 166, 5, 39, 135, 97, 1, 164, 126};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 11, 23};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> positions = {789050, 216252, 560026, 147550, 391467, 867021, 420159, 757369, 389163, 368507, 322383, 566715, 469380, 214158, 372464};
    vector<int> angles = {38, 149, 161, 126, 78, 127, 52, 87, 32, 85, 59, 76, 4, 81, 54};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 7};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> positions = {19565, 866787, 641562, 691000, 488950, 706668, 757927, 565403, 390814, 198284, 76393, 338447, 71468, 510079, 806144, 671837, 430226, 877781};
    vector<int> angles = {60, 14, 11, 41, 92, 75, 104, 90, 165, 77, 39, 102, 164, 97, 108, 36, 114, 81};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 11, 17};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> positions = {316588, 539692, 988135, 299037, 3408, 143185, 637020, 930781, 887373, 507585, 417816, 172250, 549342, 721452, 779482, 55531, 950464, 658221, 264793, 423230, 195864, 477672, 16336, 170534, 871076, 561887, 705422, 608731, 702297, 888636, 445669, 893563, 136170, 349645, 935359, 453663, 15211, 558929, 832233, 804645, 266227};
    vector<int> angles = {45, 96, 136, 149, 7, 139, 174, 26, 1, 155, 121, 68, 74, 140, 18, 167, 65, 152, 148, 141, 37, 117, 116, 133, 90, 72, 132, 54, 109, 159, 85, 144, 170, 76, 157, 103, 126, 172, 91, 94, 8};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 22, 24, 36, 38, 39};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> positions = {442837, 280598, 589459, 958742, 406381, 659235, 796199, 341558, 118011, 355258, 357473, 923798, 453404, 746634, 379044, 160202, 127135, 432061, 791831, 509549, 119847, 201530, 983854, 890542, 540262, 443753, 72622, 49045, 185683, 219982, 872436, 561359};
    vector<int> angles = {146, 38, 11, 139, 30, 156, 29, 94, 157, 86, 46, 21, 72, 20, 171, 35, 152, 12, 143, 26, 150, 179, 8, 1, 40, 113, 125, 124, 75, 133, 141, 74};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 9, 22, 27, 31};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> positions = {518675, 140613, 929262, 831584, 841570, 185456, 878671, 709196, 668526, 358650, 768962, 932464, 758817, 384376, 822004, 132327, 325329, 695919};
    vector<int> angles = {124, 90, 66, 146, 13, 139, 177, 125, 50, 122, 178, 38, 11, 44, 36, 80, 169, 96};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 11};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> positions = {227582, 422767, 72816, 566383, 81557, 677514, 717566, 346404, 161078, 190298, 84681, 734665, 632860, 19790, 678175, 181899, 992588, 255892, 191856, 196467, 444391, 837412, 272459, 219591, 209614, 818906, 555449, 842934, 32680, 832703, 248132, 35457, 882058, 472861, 744073, 316471};
    vector<int> angles = {156, 36, 118, 18, 60, 90, 32, 117, 20, 86, 98, 16, 154, 166, 89, 65, 147, 67, 114, 145, 58, 170, 135, 51, 41, 52, 80, 75, 49, 99, 44, 158, 78, 9, 70, 57};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5, 10, 13, 14, 32};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> positions = {782960, 749764, 445923, 630170, 849228, 415753, 729595, 2968, 595469, 439366, 618613, 432013};
    vector<int> angles = {19, 108, 44, 20, 8, 70, 35, 6, 158, 48, 137, 102};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 11};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> positions = {239861, 869106};
    vector<int> angles = {127, 128};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> positions = {89920, 947348, 498762, 787140};
    vector<int> angles = {126, 96, 77, 42};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> positions = {100550, 775851, 865280, 563649, 366632, 993740, 921682, 26602, 840342, 749519, 433010, 571563, 508934, 339280, 746384, 332558, 922223, 260305, 882124, 911237, 904562, 246969, 453768, 16442, 726320, 685184, 162451, 193944, 827163, 596951, 413877, 111277, 269687, 348518, 641569, 714586, 299904, 75876, 196494, 163660, 674656, 831900};
    vector<int> angles = {115, 156, 173, 166, 4, 8, 155, 154, 122, 135, 101, 46, 116, 176, 43, 148, 71, 89, 129, 145, 147, 158, 6, 22, 24, 19, 175, 69, 134, 95, 26, 31, 92, 98, 48, 139, 44, 143, 138, 55, 100, 27};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 7, 16, 17, 37};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> positions = {153865, 790159, 241637, 123559, 332906, 841750, 624335, 89715, 826332, 738761, 376985, 667025, 501122, 319549, 840512, 165689, 366039, 117063, 624567, 178807, 534099, 44716, 214884, 934037, 104779, 222055, 930832, 509351, 335663, 872300, 663549, 567343, 326410, 531177, 390157, 432048};
    vector<int> angles = {147, 46, 26, 7, 133, 142, 119, 175, 146, 149, 20, 171, 144, 67, 14, 3, 127, 110, 154, 57, 160, 152, 5, 115, 6, 105, 17, 63, 8, 158, 38, 11, 62, 82, 47, 159};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 21, 25, 33};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> positions = {430291, 630752, 913839, 526476};
    vector<int> angles = {109, 73, 36, 138};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> positions = {382194, 997315, 602386, 200476, 129301, 155569, 753553, 28584, 318348, 948385, 216222, 985065, 369330, 418140, 806457, 808870, 773241, 351455, 154678, 766618, 288269, 537886, 747194, 17315, 446608, 365280, 669390, 336421, 961887, 535846, 853373, 722628, 391239, 807571, 173436, 333283};
    vector<int> angles = {179, 10, 167, 108, 159, 3, 92, 83, 98, 37, 139, 9, 176, 65, 150, 104, 64, 6, 71, 147, 135, 66, 124, 78, 163, 70, 121, 148, 69, 7, 73, 138, 77, 57, 26, 59};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 6, 28, 30};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> positions = {126430, 725231, 271686, 524459, 873700, 498420, 500683, 515572, 162177, 876656, 246730, 583410, 543316, 890829, 702789, 468867, 9787, 375978, 29868, 93303, 264009, 257327, 390962, 925583, 405479, 504535, 157518, 995740, 370280, 53686, 990082, 866388, 365933, 893914, 615238, 377469, 431181, 463051, 331809, 583086, 316861, 610902, 71800, 85564, 479959};
    vector<int> angles = {148, 168, 152, 36, 158, 23, 104, 3, 134, 110, 133, 171, 143, 106, 65, 108, 117, 77, 22, 27, 122, 151, 160, 57, 37, 155, 11, 6, 118, 4, 103, 50, 164, 136, 84, 95, 79, 163, 165, 31, 28, 54, 156, 132, 20};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 27, 34, 35};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> positions = {620920, 382818, 756484, 515567, 969720, 426488, 781835, 491871, 684870, 629284, 282247, 196110, 645042, 688169, 184060, 967338, 711602, 818455, 321885, 534802, 312304, 750454};
    vector<int> angles = {2, 85, 66, 4, 167, 158, 112, 153, 34, 59, 42, 145, 8, 88, 63, 129, 119, 89, 15, 60, 58, 50};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> positions = {784258, 183708, 443396, 442787, 280932, 964343, 278884, 123053, 257882, 358606, 257107, 596965, 259323, 143164, 555806, 214494, 177098, 229188, 759317, 517880, 568957, 683564, 82185, 619290, 545030, 669750, 696767, 936489, 581584, 417895, 510198, 671813, 566667, 44889, 715890, 149131};
    vector<int> angles = {127, 7, 83, 110, 69, 80, 86, 50, 10, 172, 57, 34, 136, 156, 84, 31, 100, 114, 177, 128, 24, 148, 17, 18, 119, 129, 53, 158, 28, 152, 37, 135, 112, 85, 6, 4};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 14};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> positions = {4415, 655470, 430850, 569513, 857207, 837869, 605982, 277624, 599160, 644101, 179563, 969717, 601026, 279797, 217486, 254916, 478371, 782037, 63134, 988420, 505702, 195740, 631063, 60457, 533984, 36984, 239289, 551930, 188067, 187411, 996260};
    vector<int> angles = {160, 116, 108, 166, 57, 134, 6, 159, 79, 27, 54, 62, 31, 158, 87, 18, 98, 32, 80, 84, 76, 95, 46, 55, 161, 21, 48, 14, 34, 154, 92};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 21, 30};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> positions = {799337, 675911, 595722, 199294};
    vector<int> angles = {72, 31, 36, 110};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> positions = {162844, 523143, 465633, 176786, 544135, 527745, 771963, 324707, 630557, 630431, 691211, 333581, 331257, 473620, 67884, 905244, 465923, 983019, 350794, 70498, 610935, 334610, 973862, 476723, 139430, 265967, 970261, 411185, 423853, 251452, 724393, 320037, 978771, 276237, 595012, 207942, 198732, 778408, 874822, 237987, 693422, 270002, 20441, 839249};
    vector<int> angles = {61, 11, 23, 8, 176, 93, 27, 131, 107, 114, 56, 64, 38, 165, 163, 116, 95, 29, 141, 132, 154, 110, 151, 98, 16, 135, 18, 112, 65, 111, 133, 73, 147, 129, 7, 10, 100, 88, 91, 13, 143, 4, 6, 57};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 14, 16, 17, 19, 36, 38};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> positions = {633390, 777992, 814834, 481565, 132546, 624945, 641279, 520468, 607905, 482163, 769502, 800751, 850899, 655401, 271048, 665015, 841960, 778982, 342887, 69271, 181736, 401583, 673413, 15514, 991635, 520849, 879476, 45151, 703926, 103412, 4664};
    vector<int> angles = {173, 179, 59, 83, 166, 144, 46, 74, 111, 147, 105, 30, 63, 143, 136, 153, 103, 38, 67, 80, 155, 100, 93, 49, 77, 45, 125, 134, 97, 88, 121};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 29, 30};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> positions = {578571, 1977, 100624, 910180, 739028, 293469, 188545, 679636, 108377, 336024, 261993, 16573, 655502, 491966, 616965, 68503, 645065, 461016, 289686, 207240, 622538, 837845};
    vector<int> angles = {106, 23, 173, 145, 115, 60, 42, 67, 127, 40, 37, 157, 15, 13, 120, 61, 128, 131, 167, 162, 142, 121};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> positions = {10, 20};
    vector<int> angles = {89, 91};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> positions = {10, 20, 0};
    vector<int> angles = {40, 140, 40};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> positions = {10, 0};
    vector<int> angles = {140, 40};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> positions = {10, 20, 30, 0};
    vector<int> angles = {40, 140, 140, 40};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> positions = {0, 2, 3, 1};
    vector<int> angles = {40, 140, 140, 40};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> positions = {1, 0, 2};
    vector<int> angles = {100, 80, 100};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> positions = {1, 0, 2};
    vector<int> angles = {135, 45, 135};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> positions = {1, 0, 2};
    vector<int> angles = {120, 60, 120};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> positions = {20, 10, 30};
    vector<int> angles = {135, 45, 135};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> positions = {1, 2, 0};
    vector<int> angles = {60, 120, 60};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> positions = {0, 1000000};
    vector<int> angles = {1, 179};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> positions = {10, 0, 20};
    vector<int> angles = {100, 80, 100};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> positions = {100, 10, 110, 20, 130, 40, 140, 150, 50, 500, 60};
    vector<int> angles = {91, 89, 91, 89, 91, 89, 91, 89, 91, 89, 89};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 6, 7, 9};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> positions = {0, 100, 50, 20, 70, 10, 80, 2, 62, 5};
    vector<int> angles = {1, 179, 40, 20, 60, 150, 120, 140, 33, 67};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 9};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> positions = {60, 50};
    vector<int> angles = {135, 45};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> positions = {10, 20, 0};
    vector<int> angles = {60, 120, 60};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> positions = {1, 2, 3, 7, 6, 4};
    vector<int> angles = {45, 90, 135, 1, 179, 1};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> positions = {2, 1, 3};
    vector<int> angles = {91, 89, 91};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> positions = {0, 1};
    vector<int> angles = {50, 40};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> positions = {100, 50};
    vector<int> angles = {45, 135};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> positions = {50, 70, 90};
    vector<int> angles = {45, 132, 134};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> positions = {1, 0, 9, 10, 8};
    vector<int> angles = {150, 150, 60, 120, 60};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> positions = {2, 1, 3};
    vector<int> angles = {135, 45, 135};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> positions = {1, 2, 0};
    vector<int> angles = {45, 135, 45};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> positions = {1, 0, 2};
    vector<int> angles = {100, 80, 100};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> positions = {1, 0, 2};
    vector<int> angles = {135, 45, 135};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> positions = {1, 0, 2};
    vector<int> angles = {120, 60, 120};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> positions = {20, 10, 30};
    vector<int> angles = {135, 45, 135};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> positions = {1, 2, 0};
    vector<int> angles = {60, 120, 60};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> positions = {0, 1000000};
    vector<int> angles = {1, 179};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> positions = {10, 0, 20};
    vector<int> angles = {100, 80, 100};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> positions = {100, 10, 110, 20, 130, 40, 140, 150, 50, 500, 60};
    vector<int> angles = {91, 89, 91, 89, 91, 89, 91, 89, 91, 89, 89};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 6, 7, 9};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> positions = {0, 100, 50, 20, 70, 10, 80, 2, 62, 5};
    vector<int> angles = {1, 179, 40, 20, 60, 150, 120, 140, 33, 67};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 9};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> positions = {60, 50};
    vector<int> angles = {135, 45};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> positions = {10, 20, 0};
    vector<int> angles = {60, 120, 60};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> positions = {1, 2, 3, 7, 6, 4};
    vector<int> angles = {45, 90, 135, 1, 179, 1};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> positions = {2, 1, 3};
    vector<int> angles = {91, 89, 91};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> positions = {0, 1};
    vector<int> angles = {50, 40};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> positions = {100, 50};
    vector<int> angles = {45, 135};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> positions = {50, 70, 90};
    vector<int> angles = {45, 132, 134};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> positions = {1, 0, 9, 10, 8};
    vector<int> angles = {150, 150, 60, 120, 60};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> positions = {2, 1, 3};
    vector<int> angles = {135, 45, 135};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> positions = {1, 2, 0};
    vector<int> angles = {45, 135, 45};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> positions = {1, 0, 2};
    vector<int> angles = {100, 80, 100};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> positions = {1, 0, 2};
    vector<int> angles = {135, 45, 135};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> positions = {1, 0, 2};
    vector<int> angles = {120, 60, 120};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> positions = {20, 10, 30};
    vector<int> angles = {135, 45, 135};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> positions = {1, 2, 0};
    vector<int> angles = {60, 120, 60};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> positions = {0, 1000000};
    vector<int> angles = {1, 179};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> positions = {10, 0, 20};
    vector<int> angles = {100, 80, 100};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> positions = {100, 10, 110, 20, 130, 40, 140, 150, 50, 500, 60};
    vector<int> angles = {91, 89, 91, 89, 91, 89, 91, 89, 91, 89, 89};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 6, 7, 9};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> positions = {0, 100, 50, 20, 70, 10, 80, 2, 62, 5};
    vector<int> angles = {1, 179, 40, 20, 60, 150, 120, 140, 33, 67};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 9};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> positions = {60, 50};
    vector<int> angles = {135, 45};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> positions = {10, 20, 0};
    vector<int> angles = {60, 120, 60};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> positions = {1, 2, 3, 7, 6, 4};
    vector<int> angles = {45, 90, 135, 1, 179, 1};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> positions = {2, 1, 3};
    vector<int> angles = {91, 89, 91};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> positions = {0, 1};
    vector<int> angles = {50, 40};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> positions = {100, 50};
    vector<int> angles = {45, 135};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> positions = {50, 70, 90};
    vector<int> angles = {45, 132, 134};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> positions = {1, 0, 9, 10, 8};
    vector<int> angles = {150, 150, 60, 120, 60};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> positions = {2, 1, 3};
    vector<int> angles = {135, 45, 135};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> positions = {1, 2, 0};
    vector<int> angles = {45, 135, 45};
    Crossings* pObj = new Crossings();
    clock_t start = clock();
    vector<int> result = pObj->getOut(positions, angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=152340&rd=5863&pm=2929
********************************************************************************
using namespace std;
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stack>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <iostream>
#include <sstream>
typedef long long I64;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<I64> VI64;
typedef unsigned uint;
typedef const char cchar;
typedef pair<int,int> PII;
typedef vector<double> VD;
typedef vector<PII> VPII;
#define FOR(i,n) for(int i=0;i<(n);i++)
#define FORR(i,a,b) for(int i=(a);i<=(b);i++)
#define VAR(a,b) __typeof(b) a=b
#define FORIT(it,c) for(VAR(it,(c).begin());it!=(c).end();it++)
#define ALL(x) (x).begin(),(x).end()
#define UNIQ(x) (x).erase(unique(ALL(x)),(x).end())
 
double CONV = M_PI/180.0;
 
struct CrossingsImpl {
    vector <int> positions;
    vector <int> angles;
    CrossingsImpl(vector <int> _positions,vector <int> _angles) {
        positions = _positions;
        angles = _angles;
    }
 
    vector <int> getOut() {
        int n = positions.size();
        double hitdist[60][60];
        int hitfirst[60][60];
 
        vector<double> dists;
 
        FOR(i,n) FOR(j,n) hitdist[i][j] = 0.0;
 
        FOR(i,n) for(int j=i+1;j<n;j++) {
            if(i==j) continue;
 
            double m1 = cos(angles[i]*CONV) / sin(angles[i]*CONV);
            double m2 = cos(angles[j]*CONV) / sin(angles[j]*CONV);
 
            if(angles[i] == angles[j]) continue;
 
            double y = (positions[i]-positions[j]) / (m2 - m1);
            if(y < 0.0) continue;
 
            printf("%d,%d hit at %g\n",positions[i],positions[j],y);
 
            hitdist[i][j] = y;
            hitfirst[i][j] = abs(angles[i]-90) <= abs(angles[j]-90) ? i : j;
            dists.push_back(y);
        }
 
        sort(ALL(dists));
        UNIQ(dists);
 
        vector<bool> in(n,1);
 
        FOR(d,dists.size()) {
            FOR(i,n) for(int j=i+1;j<n;j++) {
                if(fabs(hitdist[i][j]-dists[d])<1e-10 && in[i] && in[j]) {
                    if(hitfirst[i][j]==i)
                        in[j] = 0;
                    else
                        in[i] = 0;
                }
            }
        }
        
        VI ret;
        FOR(i,n) {
            if(in[i]) ret.push_back(i);
        }
        return ret;
    };
};
 
 
struct Crossings {
    vector <int> getOut(vector <int> positions,vector <int> angles) {
        CrossingsImpl impl(positions,angles);
        return impl.getOut();
    }
 
};
 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/