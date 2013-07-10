/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6447
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

class PartSorting {
public:
    vector<int> process(vector<int> data, int nSwaps);
};

vector<int> PartSorting::process(vector<int> data, int nSwaps) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> data = {10, 20, 30, 40, 50, 60, 70};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 10, 30, 40, 50, 60, 70};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> data = {3, 5, 1, 2, 4};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 2, 1, 4};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> data = {19, 20, 17, 18, 15, 16, 13, 14, 11, 12};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> data = {89, 103, 107, 90, 97, 85, 12, 29, 71, 10, 94, 18, 15, 36, 55, 13, 77, 86, 5, 4, 48, 47, 3, 43, 25, 41, 74, 119, 8, 113, 42, 98, 14, 80, 37, 110, 11, 115, 87, 21, 127, 28, 124, 61, 102, 39, 70, 38, 81, 73};
    int nSwaps = 10;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {107, 103, 97, 90, 89, 85, 94, 12, 29, 71, 10, 18, 15, 36, 55, 13, 77, 86, 5, 4, 48, 47, 3, 43, 25, 41, 74, 119, 8, 113, 42, 98, 14, 80, 37, 110, 11, 115, 87, 21, 127, 28, 124, 61, 102, 39, 70, 38, 81, 73};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> data = {89, 103, 107, 90, 97, 85, 12, 29, 71, 10, 94, 18, 15, 36, 55, 13, 77, 86, 5, 4, 48, 47, 3, 43, 25, 41, 74, 119, 8, 113, 42, 98, 14, 80, 37, 110, 11, 115, 87, 21, 127, 28, 124, 61, 102, 39, 70, 38, 81, 73};
    int nSwaps = 20;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {107, 103, 97, 94, 90, 89, 85, 71, 36, 12, 29, 10, 18, 15, 55, 13, 77, 86, 5, 4, 48, 47, 3, 43, 25, 41, 74, 119, 8, 113, 42, 98, 14, 80, 37, 110, 11, 115, 87, 21, 127, 28, 124, 61, 102, 39, 70, 38, 81, 73};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> data = {314174};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {314174};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> data = {571682, 890110};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {890110, 571682};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> data = {171746, 338693, 36218};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {338693, 171746, 36218};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> data = {536903, 509931, 530286, 878308, 464830, 986224, 45169, 741940, 155545, 423744, 432779, 308627, 651031, 765599, 782478, 290983, 678497, 611458, 610642, 844576, 370443, 458342, 936777, 601058, 640825, 326093, 371632, 758474, 622623, 299926, 919266, 699359, 855776, 224440, 799431, 512023, 149720, 179355, 910377, 967107, 337205, 785619, 737895, 338840, 892736, 787577, 580738, 990554, 99450, 629672};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {990554, 986224, 967107, 936777, 919266, 910377, 892736, 878308, 855776, 844576, 799431, 787577, 785619, 782478, 765599, 758474, 741940, 737895, 699359, 678497, 651031, 640825, 629672, 622623, 611458, 610642, 601058, 580738, 536903, 530286, 512023, 509931, 464830, 458342, 432779, 423744, 371632, 370443, 338840, 337205, 326093, 308627, 299926, 290983, 224440, 179355, 155545, 149720, 99450, 45169};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> data = {18836, 302758, 367009, 883857, 752097, 677469, 656786, 132668, 124294, 237737, 8840, 623771, 218318, 881773, 364866, 747980, 344164, 516877, 688387, 763948, 312290, 888022, 686835, 691155, 804359, 976716, 780899, 712751, 188040, 332239, 367982, 152000, 730173, 818985, 101818, 832941, 716732, 951159, 468062, 573570, 390595, 560753, 586014, 168327, 470606, 534935, 21521, 714302, 638217};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {976716, 951159, 888022, 883857, 881773, 832941, 818985, 804359, 780899, 763948, 752097, 747980, 730173, 716732, 714302, 712751, 691155, 688387, 686835, 677469, 656786, 638217, 623771, 586014, 573570, 560753, 534935, 516877, 470606, 468062, 390595, 367982, 367009, 364866, 344164, 332239, 312290, 302758, 237737, 218318, 188040, 168327, 152000, 132668, 124294, 101818, 21521, 18836, 8840};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> data = {685113, 915364, 964856, 801568, 464099, 158391, 569236, 414770, 658340, 840101, 113109, 650723, 475962, 906849, 988959, 344336, 234524, 692667, 802318, 867998, 76452, 469570, 720307, 20140, 904150, 819972, 390380, 465127, 788113, 891761, 680095, 520891, 624848, 6174, 549907, 567014, 313693, 242405, 181739, 499305, 84, 890089, 102399, 772633, 594256, 228151, 970904, 293586};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {988959, 970904, 964856, 915364, 906849, 904150, 891761, 890089, 867998, 840101, 819972, 802318, 801568, 788113, 772633, 720307, 692667, 685113, 680095, 658340, 650723, 624848, 594256, 569236, 567014, 549907, 520891, 499305, 475962, 469570, 465127, 464099, 414770, 390380, 344336, 313693, 293586, 242405, 234524, 228151, 181739, 158391, 113109, 102399, 76452, 20140, 6174, 84};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> data = {307700, 14152, 521992, 719306, 132888, 257059, 544932, 929475, 187277, 993759, 556704, 710042, 913999, 726854, 906629, 461117, 868806, 444181, 138513, 269626, 601593, 467809, 570667, 962418, 892240, 688531, 570369, 47276, 194948, 470996, 993984, 468294, 949477, 541700, 44975, 177286, 216583, 435107, 96232, 958926, 286666, 7250, 651829, 698350, 283845, 152244, 625283};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {993984, 993759, 962418, 958926, 949477, 929475, 913999, 906629, 892240, 868806, 726854, 719306, 710042, 698350, 688531, 651829, 625283, 601593, 570667, 570369, 556704, 544932, 541700, 521992, 470996, 468294, 467809, 461117, 444181, 435107, 307700, 286666, 283845, 269626, 257059, 216583, 194948, 187277, 177286, 152244, 138513, 132888, 96232, 47276, 44975, 14152, 7250};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> data = {947220, 577551, 693615, 504517, 961886, 224105, 16975, 91624, 488912, 913483, 904713, 392302, 823265, 435081, 873372, 944170, 322736, 702434, 609171, 87703, 382356, 330918, 89128, 953300, 226896, 24001, 25794, 975424, 375845, 668391, 537695, 535726, 842306, 775262, 960845, 844037, 448599, 582627, 908371, 948407, 751111, 69626, 813164, 977052, 797692, 782357};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {977052, 975424, 961886, 960845, 953300, 948407, 947220, 944170, 913483, 908371, 904713, 873372, 844037, 842306, 823265, 813164, 797692, 782357, 775262, 751111, 702434, 693615, 668391, 609171, 582627, 577551, 537695, 535726, 504517, 488912, 448599, 435081, 392302, 382356, 375845, 330918, 322736, 226896, 224105, 91624, 89128, 87703, 69626, 25794, 24001, 16975};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> data = {796147, 266986, 431892, 910624, 691034, 206355, 476217, 802023, 983316, 698299, 658062, 669413, 719699, 523925, 62661, 822634, 479787, 853401, 447117, 827175, 498326, 972132, 249321, 138457, 776081, 330283, 373404, 787792, 481763, 790365, 62912, 987932, 746685, 284501, 463094, 132819, 581757, 903737, 841848, 699264, 455309, 732018, 590795, 701931, 123816};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {987932, 983316, 972132, 910624, 903737, 853401, 841848, 827175, 822634, 802023, 796147, 790365, 787792, 776081, 746685, 732018, 719699, 701931, 699264, 698299, 691034, 669413, 658062, 590795, 581757, 523925, 498326, 481763, 479787, 476217, 463094, 455309, 447117, 431892, 373404, 330283, 284501, 266986, 249321, 206355, 138457, 132819, 123816, 62912, 62661};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> data = {545416};
    int nSwaps = 0;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {545416};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> data = {28048, 285569};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {285569, 28048};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> data = {946744, 802400, 545835};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {946744, 802400, 545835};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> data = {105153, 700589, 148505, 552594};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {700589, 552594, 105153, 148505};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> data = {118598, 448563, 504848, 405534, 870590};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {504848, 448563, 118598, 405534, 870590};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> data = {246943, 859483, 41495, 329572, 69493, 624972};
    int nSwaps = 9;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {859483, 624972, 329572, 246943, 69493, 41495};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> data = {284198, 591340, 682250, 914720, 919991, 825216, 597512};
    int nSwaps = 10;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {919991, 914720, 825216, 284198, 591340, 682250, 597512};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> data = {913229, 666407, 824014, 636427, 597524, 951981, 662532, 4823};
    int nSwaps = 4;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {913229, 951981, 666407, 824014, 636427, 597524, 662532, 4823};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> data = {864998, 685434, 611834, 824454, 861478, 375460, 319758, 939736, 932999};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {864998, 685434, 824454, 611834, 861478, 375460, 319758, 939736, 932999};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> data = {280850, 520171, 557552, 545239, 839865, 282811, 55038, 171621, 297728, 132077};
    int nSwaps = 15;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {839865, 557552, 545239, 520171, 297728, 282811, 280850, 171621, 55038, 132077};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> data = {640923, 956981, 374735, 577073, 447474, 279498, 65821, 707489, 849457, 691027, 309750, 555612, 799932, 873262, 217777, 446759, 426432, 223197, 124198, 556538, 920485, 733710, 887082, 213724, 18527, 645702, 449398, 754330, 865892, 930473, 708646, 527651, 723320, 650088, 135389, 971651, 951203, 365639, 901637, 958202, 893444};
    int nSwaps = 448;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {971651, 958202, 956981, 951203, 930473, 920485, 901637, 893444, 887082, 873262, 865892, 849457, 799932, 754330, 733710, 723320, 708646, 707489, 691027, 650088, 645702, 640923, 577073, 556538, 555612, 447474, 446759, 426432, 374735, 279498, 65821, 309750, 217777, 223197, 124198, 213724, 18527, 449398, 527651, 135389, 365639};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> data = {345720, 496320, 713531, 125290, 311352, 390163, 743579, 178551, 471414, 425350, 870691, 574522, 443534, 456257, 419637, 462531, 383795, 768184, 699172, 672410, 901576, 501249, 612444, 210393, 496542, 668934, 978736, 684660, 729803, 872918, 999807, 525913, 396131, 867222, 1985, 310450, 41750, 193428, 519347, 226888, 63590, 234620};
    int nSwaps = 130;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999807, 978736, 901576, 872918, 870691, 768184, 496320, 345720, 713531, 125290, 311352, 390163, 743579, 178551, 471414, 425350, 574522, 443534, 456257, 419637, 462531, 383795, 699172, 672410, 501249, 612444, 210393, 496542, 668934, 684660, 729803, 525913, 396131, 867222, 1985, 310450, 41750, 193428, 519347, 226888, 63590, 234620};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> data = {219075, 549667, 615293, 32522, 654468, 520705, 806674, 561359, 10372, 960764, 747526, 687783, 179223, 885919, 655096, 316237, 287208, 30761, 539558, 348297, 66736, 515970, 180788, 955054, 386389, 496456, 106971, 158332, 835421, 612744, 534001, 355301, 802381, 76233, 813840, 589677, 890914, 57346, 384422, 320618, 901291, 666859, 52825};
    int nSwaps = 301;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {960764, 955054, 901291, 890914, 885919, 835421, 813840, 806674, 802381, 747526, 687783, 666859, 655096, 654468, 615293, 612744, 561359, 549667, 539558, 520705, 219075, 316237, 32522, 10372, 179223, 287208, 30761, 348297, 66736, 515970, 180788, 386389, 496456, 106971, 158332, 534001, 355301, 76233, 589677, 57346, 384422, 320618, 52825};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> data = {251952, 852692, 36405, 728100, 521730, 657779, 206121, 779124, 68680, 101383, 310401, 47305, 33716, 325062, 346681, 237359, 706480, 152530, 684426, 951681, 353782, 681572, 713297, 577825, 674303, 123093, 488399, 981969, 931155, 169929, 978954, 572209, 594879, 296888, 815504, 310485, 148133, 784602, 329115, 683394, 289197, 109423, 276432, 944069};
    int nSwaps = 40;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {981969, 852692, 779124, 728100, 657779, 251952, 521730, 36405, 206121, 68680, 101383, 310401, 47305, 33716, 325062, 346681, 237359, 706480, 152530, 684426, 951681, 353782, 681572, 713297, 577825, 674303, 123093, 488399, 931155, 169929, 978954, 572209, 594879, 296888, 815504, 310485, 148133, 784602, 329115, 683394, 289197, 109423, 276432, 944069};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> data = {686626, 251569, 99383, 747637, 741587, 535219, 504175, 379372, 273435, 989971, 38332, 888851, 184161, 273737, 453816, 621194, 945958, 940474, 618831, 68696, 596545, 824398, 488854, 18448, 382085, 265007, 350708, 114911, 587198, 182815, 692606, 146997, 741466, 805430, 121953, 683598, 640165, 256375, 497592, 674268, 897581, 404174, 837054, 293843, 443205};
    int nSwaps = 521;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {989971, 945958, 940474, 897581, 888851, 837054, 824398, 805430, 747637, 741587, 741466, 692606, 686626, 683598, 674268, 640165, 621194, 618831, 596545, 587198, 535219, 504175, 497592, 488854, 453816, 443205, 404174, 382085, 379372, 350708, 293843, 273737, 273435, 265007, 256375, 251569, 184161, 182815, 146997, 121953, 114911, 99383, 68696, 38332, 18448};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> data = {794960, 130660, 525104, 261733, 948455, 254061, 233250, 163544, 465544, 214537, 986317, 234786, 95052, 246384, 472170, 390822, 212578, 169287, 233491, 175603, 792720, 482340, 486625, 490325, 749608, 955053, 929446, 878536, 570314, 737630, 781444, 829064, 551952, 26728, 151848, 421187, 600154, 952759, 777575, 875696, 476021, 449868, 351795, 999673, 647722, 732682};
    int nSwaps = 693;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999673, 986317, 955053, 952759, 948455, 929446, 878536, 875696, 829064, 794960, 792720, 781444, 777575, 749608, 737630, 732682, 647722, 600154, 570314, 551952, 525104, 490325, 486625, 482340, 476021, 472170, 465544, 449868, 421187, 390822, 351795, 261733, 254061, 246384, 234786, 233491, 233250, 214537, 212578, 175603, 169287, 163544, 151848, 130660, 95052, 26728};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> data = {222177, 391436, 503899, 746864, 971377, 1971, 817349, 975882, 913541, 186429, 951854, 251166, 719084, 654416, 910189, 492923, 129276, 385047, 153909, 241519, 978468, 157251, 897455, 590882, 773133, 786739, 106034, 947071, 395885, 840750, 164258, 272141, 309288, 761485, 558690, 17180, 320610, 252726, 13815, 491226, 908005, 465155, 681210, 645381, 92460, 629056, 937849};
    int nSwaps = 810;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {978468, 975882, 971377, 951854, 947071, 937849, 913541, 910189, 908005, 897455, 840750, 817349, 786739, 773133, 761485, 746864, 719084, 681210, 654416, 645381, 629056, 590882, 558690, 503899, 492923, 491226, 465155, 395885, 391436, 385047, 320610, 309288, 272141, 252726, 251166, 241519, 222177, 186429, 164258, 157251, 153909, 129276, 106034, 92460, 17180, 13815, 1971};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> data = {867859, 182252, 416365, 125498, 623351, 231823, 42930, 864580, 74593, 659233, 239927, 508040, 390147, 3831, 176405, 39786, 270830, 385853, 97531, 481946, 494610, 753418, 325642, 599678, 367713, 377887, 186624, 316927, 738194, 407933, 703179, 147885, 496002, 520480, 888895, 124816, 458676, 272923, 277155, 412364, 650425, 325329, 582246, 102319, 569835, 858765, 460783, 358555};
    int nSwaps = 483;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {888895, 867859, 864580, 858765, 753418, 738194, 703179, 659233, 650425, 623351, 599678, 582246, 569835, 520480, 508040, 496002, 494610, 481946, 460783, 458676, 416365, 412364, 407933, 390147, 385853, 377887, 182252, 125498, 231823, 42930, 74593, 239927, 3831, 176405, 39786, 270830, 97531, 325642, 367713, 186624, 316927, 147885, 124816, 272923, 277155, 325329, 102319, 358555};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> data = {924050, 164939, 158442, 373652, 882846, 336835, 516221, 66992, 266643, 552152, 744041, 678731, 778865, 411225, 467526, 64357, 149355, 928857, 713889, 97639, 652347, 15578, 449697, 303960, 88271, 86744, 19850, 214136, 772897, 930095, 941536, 765, 647652, 804521, 754019, 796775, 692890, 622760, 507577, 63490, 16834, 89773, 583338, 15864, 139119, 710082, 671301, 158736, 544692};
    int nSwaps = 178;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {941536, 930095, 928857, 924050, 882846, 804521, 796775, 778865, 772897, 744041, 164939, 158442, 373652, 336835, 516221, 66992, 266643, 552152, 678731, 411225, 467526, 64357, 149355, 713889, 97639, 652347, 15578, 449697, 303960, 88271, 86744, 19850, 214136, 765, 647652, 754019, 692890, 622760, 507577, 63490, 16834, 89773, 583338, 15864, 139119, 710082, 671301, 158736, 544692};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> data = {884807, 330748, 337251, 894843, 278857, 311798, 693813, 744773, 881676, 76141, 392922, 559609, 355658, 364533, 410090, 12833, 882457, 881089, 487777, 98683, 853864, 812626, 321199, 624440, 617112, 107338, 728157, 219169, 262644, 440223, 155287, 412053, 476687, 161386, 996954, 8877, 407225, 112031, 640571, 84480, 223965, 259800, 811729, 599362, 961146, 242570, 60736, 654343, 728188, 835800};
    int nSwaps = 369;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {996954, 961146, 894843, 884807, 882457, 881676, 881089, 853864, 835800, 812626, 811729, 744773, 728188, 728157, 693813, 654343, 640571, 624440, 559609, 392922, 337251, 330748, 278857, 311798, 76141, 355658, 364533, 410090, 12833, 487777, 98683, 321199, 617112, 107338, 219169, 262644, 440223, 155287, 412053, 476687, 161386, 8877, 407225, 112031, 84480, 223965, 259800, 599362, 242570, 60736};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> data = {370486, 838150, 496149, 852600, 500671, 566726, 140636, 673088, 890022, 105966, 157491, 291876, 628307, 633163, 101811, 757530, 958267, 450639, 597469, 582110, 243775, 541797, 945222, 829215, 395490, 955877, 526815, 452218, 175653, 947683, 156128, 395101, 106177, 198306, 464657, 307022, 70977, 883302, 150453, 610948, 313209, 356903, 322451, 418803, 817318, 188578, 379746, 329061, 760932, 156169};
    int nSwaps = 12;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {890022, 852600, 838150, 370486, 496149, 500671, 566726, 140636, 673088, 105966, 157491, 291876, 628307, 633163, 101811, 757530, 958267, 450639, 597469, 582110, 243775, 541797, 945222, 829215, 395490, 955877, 526815, 452218, 175653, 947683, 156128, 395101, 106177, 198306, 464657, 307022, 70977, 883302, 150453, 610948, 313209, 356903, 322451, 418803, 817318, 188578, 379746, 329061, 760932, 156169};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> data = {862150, 314714, 6063, 409460, 314709, 97037, 603069, 826013, 134056, 416998, 996238, 793670, 654173, 123819, 111704, 576925, 384433, 528624, 2011, 50899, 672897, 885198, 160171, 784740, 872542, 90866, 434779, 446388, 751751, 619665, 970376, 532117, 774213, 947961, 942143, 170085, 724456, 283011, 117132, 667412, 109401, 616037, 144160, 852676, 506524, 723684, 291678, 418569, 543653, 13222};
    int nSwaps = 40;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {996238, 970376, 862150, 314714, 409460, 6063, 314709, 97037, 603069, 826013, 134056, 416998, 793670, 654173, 123819, 111704, 576925, 384433, 528624, 2011, 50899, 672897, 885198, 160171, 784740, 872542, 90866, 434779, 446388, 751751, 619665, 532117, 774213, 947961, 942143, 170085, 724456, 283011, 117132, 667412, 109401, 616037, 144160, 852676, 506524, 723684, 291678, 418569, 543653, 13222};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> data = {236371, 477157, 932142, 766811, 613965, 717184, 186323, 649578, 495416, 359531, 792696, 485622, 813842, 353351, 857130, 327126, 401902, 467661, 518784, 273669, 132492, 683107, 375626, 981947, 310612, 281553, 390038, 398583, 53231, 36109, 835614, 533022, 160323, 824050, 440593, 234877, 598857, 307087, 816060, 643371, 158284, 681116, 901909, 288714, 26879, 670344, 985060, 797612, 144060, 620910};
    int nSwaps = 109;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {985060, 981947, 932142, 857130, 813842, 792696, 766811, 717184, 236371, 477157, 613965, 186323, 649578, 495416, 359531, 485622, 353351, 327126, 401902, 467661, 518784, 273669, 132492, 683107, 375626, 310612, 281553, 390038, 398583, 53231, 36109, 835614, 533022, 160323, 824050, 440593, 234877, 598857, 307087, 816060, 643371, 158284, 681116, 901909, 288714, 26879, 670344, 797612, 144060, 620910};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> data = {245717, 540837, 893504, 773838, 482201, 583158, 581045, 305418, 976997, 592169, 427683, 125475, 852899, 152248, 207432, 862638, 722724, 718821, 545996, 98715, 552726, 42023, 8019, 549366, 736866, 616575, 673378, 175049, 486244, 876138, 684651, 119711, 3016, 596975, 349302, 361379, 596734, 951192, 549166, 456295, 285721, 99389, 224902, 419586, 807625, 610747, 261446, 351441, 213811, 124548};
    int nSwaps = 78;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {976997, 951192, 893504, 876138, 773838, 583158, 245717, 540837, 482201, 581045, 305418, 592169, 427683, 125475, 852899, 152248, 207432, 862638, 722724, 718821, 545996, 98715, 552726, 42023, 8019, 549366, 736866, 616575, 673378, 175049, 486244, 684651, 119711, 3016, 596975, 349302, 361379, 596734, 549166, 456295, 285721, 99389, 224902, 419586, 807625, 610747, 261446, 351441, 213811, 124548};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> data = {536298, 93905, 68709, 826909, 155789, 409010, 567190, 499730, 796029, 978821, 689544, 98704, 528632, 549381, 988449, 777757, 267991, 115002, 841142, 354034, 424544, 516686, 473913, 793566, 585609, 928960, 896960, 177802, 966090, 647985, 188846, 791191, 579869, 979036, 578944, 388068, 798037, 579299, 154806, 656875, 837336, 105284, 496347, 480395, 39995, 742698, 654259, 706144, 804984, 853152};
    int nSwaps = 284;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {988449, 979036, 978821, 966090, 928960, 896960, 853152, 841142, 837336, 826909, 804984, 796029, 777757, 567190, 536298, 93905, 68709, 155789, 409010, 499730, 689544, 98704, 528632, 549381, 267991, 115002, 354034, 424544, 516686, 473913, 793566, 585609, 177802, 647985, 188846, 791191, 579869, 578944, 388068, 798037, 579299, 154806, 656875, 105284, 496347, 480395, 39995, 742698, 654259, 706144};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> data = {587214, 161440, 762098, 297501, 720566, 184714, 138857, 482558, 396605, 555440, 169192, 626668, 657859, 656206, 129752, 56430, 628686, 581783, 128949, 536889, 291788, 597162, 678488, 185010, 445731, 563812, 948386, 67344, 774455, 19855, 310018, 411424, 177335, 772343, 810724, 556962, 902948, 555101, 884727, 483729, 543200, 774789, 555736, 927360, 209326, 612202, 952224, 472032, 145804, 393810};
    int nSwaps = 20;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {762098, 720566, 657859, 587214, 482558, 297501, 161440, 184714, 138857, 396605, 555440, 169192, 626668, 656206, 129752, 56430, 628686, 581783, 128949, 536889, 291788, 597162, 678488, 185010, 445731, 563812, 948386, 67344, 774455, 19855, 310018, 411424, 177335, 772343, 810724, 556962, 902948, 555101, 884727, 483729, 543200, 774789, 555736, 927360, 209326, 612202, 952224, 472032, 145804, 393810};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> data = {619370, 549628, 632307, 500265, 440518, 617909, 282657, 932369, 923365, 827913, 469423, 443595, 976431, 919127, 369475, 109969, 407016, 79422, 629468, 351142, 752007, 65971, 870835, 427127, 617397, 569909, 90445, 797213, 778851, 72215, 951520, 929279, 909064, 282620, 35231, 438165, 576950, 263458, 989284, 83527, 425240, 417428, 408121, 331188, 113482, 173955, 313923, 860622, 378773, 790511};
    int nSwaps = 272;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {989284, 976431, 951520, 932369, 929279, 923365, 919127, 909064, 870835, 860622, 827913, 797213, 778851, 632307, 619370, 617909, 549628, 500265, 469423, 443595, 440518, 369475, 282657, 109969, 407016, 79422, 629468, 351142, 752007, 65971, 427127, 617397, 569909, 90445, 72215, 282620, 35231, 438165, 576950, 263458, 83527, 425240, 417428, 408121, 331188, 113482, 173955, 313923, 378773, 790511};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> data = {990854, 421312, 419500, 181557, 596009, 32945, 396114, 512458, 573927, 40492, 908788, 566593, 199609, 567728, 590353, 388313, 965064, 927790, 936927, 89750, 68259, 360884, 418711, 403646, 61404, 15232, 524249, 195005, 432255, 636151, 53820, 857832, 366896, 215470, 682486, 507998, 676768, 408676, 53989, 560395, 776876, 462931, 954040, 262150, 561298, 548763, 322493, 300122, 399824, 847007};
    int nSwaps = 623;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {990854, 965064, 954040, 936927, 927790, 908788, 857832, 847007, 776876, 682486, 676768, 636151, 596009, 590353, 573927, 567728, 566593, 561298, 560395, 548763, 524249, 512458, 507998, 462931, 432255, 421312, 419500, 418711, 408676, 403646, 399824, 396114, 388313, 366896, 360884, 322493, 300122, 262150, 215470, 199609, 195005, 181557, 89750, 68259, 61404, 53989, 53820, 40492, 32945, 15232};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> data = {767195, 806827, 61947, 619405, 49465, 74834, 352439, 17538, 975867, 539927, 493984, 827037, 270171, 36161, 220423, 412310, 537710, 418706, 576184, 128835, 219589, 898512, 372958, 703220, 844134, 58242, 677014, 775996, 50850, 70135, 806734, 936655, 369939, 527231, 723354, 239879, 535348, 85053, 354387, 547713, 461533, 219476, 508908, 74980, 688665, 748159, 307539, 596993, 981221, 55037};
    int nSwaps = 543;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {981221, 975867, 936655, 898512, 844134, 827037, 806827, 806734, 775996, 767195, 748159, 723354, 703220, 688665, 677014, 619405, 596993, 576184, 547713, 539927, 537710, 535348, 527231, 508908, 493984, 461533, 418706, 412310, 372958, 369939, 352439, 270171, 220423, 74834, 61947, 49465, 17538, 36161, 128835, 219589, 58242, 50850, 70135, 239879, 85053, 354387, 219476, 74980, 307539, 55037};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> data = {22408, 460009, 943452, 584045, 605258, 274728, 555665, 948130, 645522, 920315, 613354, 794753, 16800, 832372, 865895, 304270, 445987, 750725, 126816, 37278, 265783, 405811, 626707, 823458, 534847, 754410, 76428, 374276, 753884, 340075, 224047, 34409, 132423, 252832, 189029, 563799, 735441, 455953, 802337, 11568, 697972, 622126, 184142, 288029, 630868, 160460, 713623, 97990, 92504, 673901};
    int nSwaps = 832;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {948130, 943452, 920315, 865895, 832372, 823458, 802337, 794753, 754410, 753884, 750725, 735441, 713623, 697972, 673901, 645522, 630868, 626707, 622126, 613354, 605258, 584045, 563799, 555665, 534847, 460009, 455953, 445987, 405811, 374276, 340075, 304270, 288029, 274728, 265783, 252832, 224047, 189029, 184142, 160460, 132423, 126816, 97990, 92504, 76428, 37278, 34409, 22408, 16800, 11568};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> data = {999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    int nSwaps = 0;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> data = {999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999952, 999951, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> data = {999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999953, 999951, 999952, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> data = {999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    int nSwaps = 83;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000000, 999985, 999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> data = {999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    int nSwaps = 67;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000000, 999969, 999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> data = {999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    int nSwaps = 116;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000000, 999999, 999970, 999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> data = {999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    int nSwaps = 26;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999977, 999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> data = {999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    int nSwaps = 29;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999980, 999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> data = {999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    int nSwaps = 119;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000000, 999999, 999973, 999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> data = {999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999959, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997, 999998, 999999, 1000000};
    int nSwaps = 152;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000000, 999999, 999998, 999959, 999951, 999952, 999953, 999954, 999955, 999956, 999957, 999958, 999960, 999961, 999962, 999963, 999964, 999965, 999966, 999967, 999968, 999969, 999970, 999971, 999972, 999973, 999974, 999975, 999976, 999977, 999978, 999979, 999980, 999981, 999982, 999983, 999984, 999985, 999986, 999987, 999988, 999989, 999990, 999991, 999992, 999993, 999994, 999995, 999996, 999997};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> data = {1000000, 999999, 999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 999990, 999989, 999988, 999987, 999986, 999985, 999984, 999983, 999982, 999981, 999980, 999979, 999978, 999977, 999976, 999975, 999974, 999973, 999972, 999971, 999970, 999969, 999968, 999967, 999966, 999965, 999964, 999963, 999962, 999961, 999960, 999959, 999958, 999957, 999956, 999955, 999954, 999953, 999952, 999951};
    int nSwaps = 0;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000000, 999999, 999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 999990, 999989, 999988, 999987, 999986, 999985, 999984, 999983, 999982, 999981, 999980, 999979, 999978, 999977, 999976, 999975, 999974, 999973, 999972, 999971, 999970, 999969, 999968, 999967, 999966, 999965, 999964, 999963, 999962, 999961, 999960, 999959, 999958, 999957, 999956, 999955, 999954, 999953, 999952, 999951};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> data = {1000000, 999999, 999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 999990, 999989, 999988, 999987, 999986, 999985, 999984, 999983, 999982, 999981, 999980, 999979, 999978, 999977, 999976, 999975, 999974, 999973, 999972, 999971, 999970, 999969, 999968, 999967, 999966, 999965, 999964, 999963, 999962, 999961, 999960, 999959, 999958, 999957, 999956, 999955, 999954, 999953, 999952, 999951};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000000, 999999, 999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 999990, 999989, 999988, 999987, 999986, 999985, 999984, 999983, 999982, 999981, 999980, 999979, 999978, 999977, 999976, 999975, 999974, 999973, 999972, 999971, 999970, 999969, 999968, 999967, 999966, 999965, 999964, 999963, 999962, 999961, 999960, 999959, 999958, 999957, 999956, 999955, 999954, 999953, 999952, 999951};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> data = {1000000, 999999, 999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 999990, 999989, 999988, 999987, 999986, 999985, 999984, 999983, 999982, 999981, 999980, 999979, 999978, 999977, 999976, 999975, 999974, 999973, 999972, 999971, 999970, 999969, 999968, 999967, 999966, 999965, 999964, 999963, 999962, 999961, 999960, 999959, 999958, 999957, 999956, 999955, 999954, 999953, 999952, 999951};
    int nSwaps = 245345;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000000, 999999, 999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 999990, 999989, 999988, 999987, 999986, 999985, 999984, 999983, 999982, 999981, 999980, 999979, 999978, 999977, 999976, 999975, 999974, 999973, 999972, 999971, 999970, 999969, 999968, 999967, 999966, 999965, 999964, 999963, 999962, 999961, 999960, 999959, 999958, 999957, 999956, 999955, 999954, 999953, 999952, 999951};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> data = {1000000, 999999, 999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 999990, 999989, 999988, 999987, 999986, 999985, 999984, 999983, 999982, 999981, 999980, 999979, 999978, 999977, 999976, 999975, 999974, 999973, 999972, 999971, 999970, 999969, 999968, 999967, 999966, 999965, 999964, 999963, 999962, 999961, 999960, 999959, 999958, 999957, 999956, 999955, 999954, 999953, 999952, 999951};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000000, 999999, 999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 999990, 999989, 999988, 999987, 999986, 999985, 999984, 999983, 999982, 999981, 999980, 999979, 999978, 999977, 999976, 999975, 999974, 999973, 999972, 999971, 999970, 999969, 999968, 999967, 999966, 999965, 999964, 999963, 999962, 999961, 999960, 999959, 999958, 999957, 999956, 999955, 999954, 999953, 999952, 999951};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> data = {429842, 757932, 312895, 899877, 521445, 570688, 132116, 124441, 612574, 206187, 366607, 788860, 128890, 534323, 162155, 341045, 844382, 771692, 558410, 548708, 614724, 294423, 414452, 919764, 583488, 801573, 378414, 712333, 66286, 991193, 318966, 139271, 625466, 760139, 848922, 792952, 935884, 932424, 715698, 677582, 994510, 104215, 196352, 593145, 703707, 18007, 810530, 800287, 317957, 960836};
    int nSwaps = 716;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {994510, 991193, 960836, 935884, 932424, 919764, 899877, 848922, 844382, 810530, 801573, 800287, 792952, 788860, 771692, 760139, 757932, 715698, 712333, 703707, 677582, 625466, 614724, 612574, 593145, 583488, 570688, 558410, 548708, 534323, 521445, 429842, 414452, 378414, 366607, 341045, 318966, 317957, 312895, 294423, 206187, 196352, 162155, 132116, 128890, 124441, 66286, 139271, 104215, 18007};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> data = {429842, 757932, 312895, 899877, 521445, 570688, 132116, 124441, 612574, 206187, 366607, 788860, 128890, 534323, 162155, 341045, 844382, 771692, 558410, 548708, 614724, 294423, 414452, 919764, 583488, 801573, 378414, 712333, 66286, 991193, 318966, 139271, 625466, 760139, 848922, 792952, 935884, 932424, 715698, 677582, 994510, 104215, 196352, 593145, 703707, 18007, 810530, 800287, 317957, 960836};
    int nSwaps = 717;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {994510, 991193, 960836, 935884, 932424, 919764, 899877, 848922, 844382, 810530, 801573, 800287, 792952, 788860, 771692, 760139, 757932, 715698, 712333, 703707, 677582, 625466, 614724, 612574, 593145, 583488, 570688, 558410, 548708, 534323, 521445, 429842, 414452, 378414, 366607, 341045, 318966, 317957, 312895, 294423, 206187, 196352, 162155, 132116, 128890, 124441, 139271, 66286, 104215, 18007};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> data = {429842, 757932, 312895, 899877, 521445, 570688, 132116, 124441, 612574, 206187, 366607, 788860, 128890, 534323, 162155, 341045, 844382, 771692, 558410, 548708, 614724, 294423, 414452, 919764, 583488, 801573, 378414, 712333, 66286, 991193, 318966, 139271, 625466, 760139, 848922, 792952, 935884, 932424, 715698, 677582, 994510, 104215, 196352, 593145, 703707, 18007, 810530, 800287, 317957, 960836};
    int nSwaps = 718;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {994510, 991193, 960836, 935884, 932424, 919764, 899877, 848922, 844382, 810530, 801573, 800287, 792952, 788860, 771692, 760139, 757932, 715698, 712333, 703707, 677582, 625466, 614724, 612574, 593145, 583488, 570688, 558410, 548708, 534323, 521445, 429842, 414452, 378414, 366607, 341045, 318966, 317957, 312895, 294423, 206187, 196352, 162155, 132116, 139271, 124441, 128890, 66286, 104215, 18007};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> data = {429842, 757932, 312895, 899877, 521445, 570688, 132116, 124441, 612574, 206187, 366607, 788860, 128890, 534323, 162155, 341045, 844382, 771692, 558410, 548708, 614724, 294423, 414452, 919764, 583488, 801573, 378414, 712333, 66286, 991193, 318966, 139271, 625466, 760139, 848922, 792952, 935884, 932424, 715698, 677582, 994510, 104215, 196352, 593145, 703707, 18007, 810530, 800287, 317957, 960836};
    int nSwaps = 719;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {994510, 991193, 960836, 935884, 932424, 919764, 899877, 848922, 844382, 810530, 801573, 800287, 792952, 788860, 771692, 760139, 757932, 715698, 712333, 703707, 677582, 625466, 614724, 612574, 593145, 583488, 570688, 558410, 548708, 534323, 521445, 429842, 414452, 378414, 366607, 341045, 318966, 317957, 312895, 294423, 206187, 196352, 162155, 139271, 132116, 124441, 128890, 66286, 104215, 18007};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> data = {429842, 757932, 312895, 899877, 521445, 570688, 132116, 124441, 612574, 206187, 366607, 788860, 128890, 534323, 162155, 341045, 844382, 771692, 558410, 548708, 614724, 294423, 414452, 919764, 583488, 801573, 378414, 712333, 66286, 991193, 318966, 139271, 625466, 760139, 848922, 792952, 935884, 932424, 715698, 677582, 994510, 104215, 196352, 593145, 703707, 18007, 810530, 800287, 317957, 960836};
    int nSwaps = 720;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {994510, 991193, 960836, 935884, 932424, 919764, 899877, 848922, 844382, 810530, 801573, 800287, 792952, 788860, 771692, 760139, 757932, 715698, 712333, 703707, 677582, 625466, 614724, 612574, 593145, 583488, 570688, 558410, 548708, 534323, 521445, 429842, 414452, 378414, 366607, 341045, 318966, 317957, 312895, 294423, 206187, 196352, 162155, 139271, 132116, 128890, 124441, 66286, 104215, 18007};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> data = {429842, 757932, 312895, 899877, 521445, 570688, 132116, 124441, 612574, 206187, 366607, 788860, 128890, 534323, 162155, 341045, 844382, 771692, 558410, 548708, 614724, 294423, 414452, 919764, 583488, 801573, 378414, 712333, 66286, 991193, 318966, 139271, 625466, 760139, 848922, 792952, 935884, 932424, 715698, 677582, 994510, 104215, 196352, 593145, 703707, 18007, 810530, 800287, 317957, 960836};
    int nSwaps = 721;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {994510, 991193, 960836, 935884, 932424, 919764, 899877, 848922, 844382, 810530, 801573, 800287, 792952, 788860, 771692, 760139, 757932, 715698, 712333, 703707, 677582, 625466, 614724, 612574, 593145, 583488, 570688, 558410, 548708, 534323, 521445, 429842, 414452, 378414, 366607, 341045, 318966, 317957, 312895, 294423, 206187, 196352, 162155, 139271, 132116, 128890, 124441, 104215, 66286, 18007};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> data = {429842, 757932, 312895, 899877, 521445, 570688, 132116, 124441, 612574, 206187, 366607, 788860, 128890, 534323, 162155, 341045, 844382, 771692, 558410, 548708, 614724, 294423, 414452, 919764, 583488, 801573, 378414, 712333, 66286, 991193, 318966, 139271, 625466, 760139, 848922, 792952, 935884, 932424, 715698, 677582, 994510, 104215, 196352, 593145, 703707, 18007, 810530, 800287, 317957, 960836};
    int nSwaps = 722;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {994510, 991193, 960836, 935884, 932424, 919764, 899877, 848922, 844382, 810530, 801573, 800287, 792952, 788860, 771692, 760139, 757932, 715698, 712333, 703707, 677582, 625466, 614724, 612574, 593145, 583488, 570688, 558410, 548708, 534323, 521445, 429842, 414452, 378414, 366607, 341045, 318966, 317957, 312895, 294423, 206187, 196352, 162155, 139271, 132116, 128890, 124441, 104215, 66286, 18007};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> data = {1, 2, 3};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 2};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> data = {1, 2, 5};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 2};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> data = {10, 20, 30, 40, 50, 60, 70};
    int nSwaps = 100000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 60, 50, 40, 30, 20, 10};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> data = {2, 4, 1, 5, 3};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 5, 1, 3};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> data = {10, 20, 30, 40, 50, 60, 70};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 10, 20, 40, 50, 60, 70};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> data = {1, 2, 3, 4};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 2, 4};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> data = {3, 5, 10, 11};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 3, 5, 11};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> data = {1, 2, 3, 4, 5};
    int nSwaps = 4;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> data = {1, 2, 3, 4};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> data = {1, 2, 3};
    int nSwaps = 1000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 1};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> data = {2, 3, 1, 4};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 3, 1};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> data = {10, 9};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 9};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> data = {3, 4, 5};
    int nSwaps = 10000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> data = {3, 4, 5};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 4};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 20};
    int nSwaps = 10000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> data = {1, 2, 3, 4, 5};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2, 1, 3, 4};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> data = {1, 2, 3, 4, 7};
    int nSwaps = 4;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> data = {15, 14, 13, 12, 11, 16, 10, 9, 8, 2, 3, 4, 5, 6, 17};
    int nSwaps = 13;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 15, 14, 13, 12, 11, 17, 10, 9, 8, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> data = {15, 14, 13, 12, 11, 16, 10, 9, 8, 2, 3, 4, 5, 6, 17};
    int nSwaps = 1300;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 6, 5, 4, 3, 2};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> data = {15, 14, 13, 12, 11, 16, 10, 9, 8, 2, 3, 4, 5, 6, 17, 18, 19, 23, 24, 20, 21, 30, 28, 27};
    int nSwaps = 100;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 28, 27, 24, 23, 15, 14, 13, 16, 12, 11, 10, 9, 8, 2, 3, 4, 5, 6, 17, 18, 19, 20, 21};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> data = {1, 3, 5};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 3};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> data = {1, 2, 3, 4, 5};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> data = {1};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> data = {10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 110000, 120000, 130000, 140000, 150000, 160000, 170000, 180000, 190000, 200000, 210000, 220000, 230000, 240000, 250000, 260000, 270000, 280000, 290000, 300000, 310000, 320000, 330000, 340000, 350000, 360000, 370000, 380000, 390000, 400000, 410000, 420000, 430000, 440000, 450000, 460000, 470000, 480000, 490000, 500000};
    int nSwaps = 1224;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {500000, 490000, 480000, 470000, 460000, 450000, 440000, 430000, 420000, 410000, 400000, 390000, 380000, 370000, 360000, 350000, 340000, 330000, 320000, 310000, 300000, 290000, 280000, 270000, 260000, 250000, 240000, 230000, 220000, 210000, 200000, 190000, 180000, 170000, 160000, 150000, 140000, 130000, 120000, 110000, 100000, 90000, 80000, 70000, 60000, 50000, 40000, 30000, 10000, 20000};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> data = {7, 5, 3, 2, 4};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 5, 3, 4, 2};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> data = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 999, 998, 997, 996, 995, 994, 993, 992, 50, 51, 52, 53, 54, 55, 56, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999, 998, 997, 996, 995, 994, 993, 992, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 56, 55, 54, 53, 52, 51, 50, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> data = {2, 1, 3, 4, 5};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 1, 4, 5};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> data = {1};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> data = {19, 20, 17, 18, 15, 16, 13, 14, 11, 12};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> data = {5, 2, 4, 1, 9, 6};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 9, 2, 4, 1, 6};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> data = {1, 2, 3, 5, 4};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> data = {4, 1, 2, 5, 3};
    int nSwaps = 4;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 2, 1, 3};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> data = {10, 20, 30, 40};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {40, 10, 20, 30};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> data = {19, 20, 100, 18, 15, 16, 13, 14, 11, 12};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 20, 19, 18, 16, 15, 14, 13, 11, 12};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int nSwaps = 37;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> data = {5, 8, 19, 24, 16, 7, 13, 28, 61, 700, 48, 15, 33, 80, 85, 93, 77, 17, 25, 601, 123, 128, 126, 124, 111, 502, 507, 204, 503, 666, 303};
    int nSwaps = 220;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {700, 666, 601, 507, 503, 502, 303, 204, 128, 126, 61, 5, 8, 19, 24, 16, 7, 13, 28, 48, 15, 33, 80, 85, 93, 77, 17, 25, 123, 124, 111};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> data = {3, 5, 1, 2, 4};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 4, 1, 2};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> data = {1, 2, 3, 4, 5};
    int nSwaps = 100000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int nSwaps = 104;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 49, 8, 1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> data = {3, 5, 1, 2, 4};
    int nSwaps = 1000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> data = {3, 5, 1, 2, 4};
    int nSwaps = 1100;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> data = {1, 2, 5, 4};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 2, 4};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> data = {1, 2, 3, 4, 5};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 2, 4, 5};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> data = {1, 2, 4};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1, 2};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> data = {3, 5, 1, 2, 4};
    int nSwaps = 0;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 1, 2, 4};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> data = {20, 10};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 10};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> data = {1, 2, 3, 5, 6};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 2, 3, 6};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> data = {4, 1, 2, 3, 5};
    int nSwaps = 4;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> data = {2, 3, 4};
    int nSwaps = 4;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> data = {999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 190, 30, 280, 90, 120, 110, 20, 340, 270, 140, 40, 180, 370, 10, 290, 160, 390, 50, 400, 360, 170, 80, 240, 300, 260, 70, 220, 60, 310, 100, 380, 130, 350, 210, 320, 200, 250, 230, 150, 330, 999999};
    int nSwaps = 193;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999999, 999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 400, 390, 380, 370, 360, 350, 340, 300, 280, 190, 90, 30, 120, 110, 20, 270, 140, 40, 180, 10, 290, 160, 50, 170, 80, 240, 260, 70, 220, 60, 310, 100, 130, 210, 320, 200, 250, 230, 150, 330};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> data = {2, 1, 4, 3};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> data = {10, 20, 30, 40, 50, 60, 70, 2, 1, 6, 1000};
    int nSwaps = 7;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 20, 10, 30, 40, 50, 60, 2, 1, 6, 1000};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> data = {3, 5, 1, 2, 4};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> data = {1, 2, 3, 4, 5, 6};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> data = {4, 7, 5, 6, 1, 2};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 6, 4, 5, 1, 2};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> data = {10, 20, 30, 40, 50};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 10, 20, 40, 50};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> data = {3, 1, 2};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 1};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> data = {1, 3, 2, 4, 6};
    int nSwaps = 15;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> data = {3, 2, 1, 4};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> data = {10, 20, 30};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 10, 20};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> data = {19, 20, 17, 18, 15, 16, 13, 14, 11, 12};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> data = {1000, 1, 999, 2, 998, 3, 997, 4, 996, 5, 995, 6, 994, 7, 993, 8, 992, 9, 991, 10, 990, 11, 989, 12, 988, 13, 987, 14, 986, 15, 985, 16, 984, 17, 983, 18, 982, 19, 981, 20, 980, 21, 979, 22, 978, 23, 977, 24, 976, 25};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 989, 988, 987, 986, 985, 984, 983, 982, 981, 980, 979, 978, 977, 976, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> data = {1000, 1, 999, 2, 998, 3, 997, 4, 996, 5, 995, 6, 994, 7, 993, 8, 992, 9, 991, 10, 990, 11, 989, 12, 988, 13, 987, 14, 986, 15, 985, 16, 984, 17, 983, 18, 982, 19, 981, 20, 980, 21, 979, 22, 978, 23, 977, 24, 976, 25};
    int nSwaps = 500;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 989, 988, 987, 986, 985, 984, 983, 982, 981, 980, 979, 978, 977, 976, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 6, 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> data = {10, 20, 30, 40, 50, 60, 70};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 60, 50, 40, 30, 20, 10};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> data = {3, 1, 4, 5, 2};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 1, 4, 2};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> data = {19, 20, 17, 18, 15, 16, 13, 14, 11, 12};
    int nSwaps = 999999;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> data = {2, 1};
    int nSwaps = 100;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> data = {1, 2, 3, 4, 6, 5};
    int nSwaps = 8;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 5, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> data = {9, 8, 7, 6, 5, 4, 3, 2, 1, 100};
    int nSwaps = 100;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> data = {15, 14, 13, 12, 11, 10, 9, 8, 1, 2};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 14, 13, 12, 11, 10, 9, 8, 2, 1};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> data = {3, 1, 2, 41, 5, 7, 212, 9, 4, 6, 31, 8, 412};
    int nSwaps = 4;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41, 3, 2, 1, 5, 7, 212, 9, 4, 6, 31, 8, 412};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> data = {1, 2, 5, 3, 4};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> data = {19, 17, 18, 15, 16, 20, 13, 14, 11, 12};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 19, 17, 18, 15, 16, 13, 14, 11, 12};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> data = {19, 1, 17, 18, 15, 16, 13, 14, 11, 12, 123, 115, 143, 1000, 67};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 18, 17, 16, 1, 15, 13, 14, 11, 12, 123, 115, 143, 1000, 67};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> data = {1, 2};
    int nSwaps = 0;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> data = {3, 5, 1, 2, 4};
    int nSwaps = 7;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> data = {2, 4, 5, 9, 7, 8, 6, 3, 45, 11};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2, 4, 9, 7, 8, 6, 3, 45, 11};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> data = {2, 4, 5};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 2};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> data = {3, 16, 22, 84, 10, 13, 62, 34, 79, 52, 14, 92, 86, 71, 6, 91, 35, 75, 33, 72};
    int nSwaps = 101;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {92, 91, 86, 84, 79, 75, 72, 71, 62, 52, 35, 22, 3, 16, 10, 13, 34, 14, 6, 33};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> data = {1, 2, 3, 4, 5};
    int nSwaps = 10;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> data = {19, 20, 17, 18, 15, 16, 13, 14, 11, 12};
    int nSwaps = 20;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> data = {19, 20, 17, 18, 15, 16, 13, 14, 11, 12};
    int nSwaps = 9;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> data = {3, 4, 2, 5};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 4, 2};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> data = {19, 21, 17, 18, 15, 20, 13, 14, 11, 12};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 20, 19, 17, 18, 15, 13, 14, 11, 12};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> data = {19, 20, 17, 30, 18, 15, 16, 13, 14, 11, 12};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 20, 19, 18, 17, 15, 16, 13, 14, 11, 12};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> data = {1, 2, 3, 4, 5};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1, 2, 3, 5};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> data = {48, 47, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26, 27, 28, 29, 30, 31, 32, 33, 36, 37, 38, 40, 41, 42, 60, 69, 79, 89, 999, 1000, 2000, 3000, 4000};
    int nSwaps = 100000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4000, 3000, 2000, 1000, 999, 89, 79, 69, 60, 48, 47, 42, 41, 40, 38, 37, 36, 33, 32, 31, 30, 29, 28, 27, 26, 25, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> data = {5, 4, 1, 3, 2, 6};
    int nSwaps = 4;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 4, 1, 3, 2};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> data = {10, 20, 50};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 10, 20};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> data = {1, 2, 3};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 2};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> data = {1, 2, 5};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 2};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> data = {10, 20, 30, 40, 50, 60, 70};
    int nSwaps = 100000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 60, 50, 40, 30, 20, 10};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> data = {2, 4, 1, 5, 3};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 5, 1, 3};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> data = {10, 20, 30, 40, 50, 60, 70};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 10, 20, 40, 50, 60, 70};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> data = {1, 2, 3, 4};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 2, 4};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> data = {3, 5, 10, 11};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 3, 5, 11};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> data = {1, 2, 3, 4, 5};
    int nSwaps = 4;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> data = {1, 2, 3, 4};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> data = {1, 2, 3};
    int nSwaps = 1000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 1};
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> data = {2, 3, 1, 4};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 3, 1};
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> data = {10, 9};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 9};
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> data = {3, 4, 5};
    int nSwaps = 10000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3};
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> data = {3, 4, 5};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 4};
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 20};
    int nSwaps = 10000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> data = {1, 2, 3, 4, 5};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2, 1, 3, 4};
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> data = {1, 2, 3, 4, 7};
    int nSwaps = 4;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> data = {15, 14, 13, 12, 11, 16, 10, 9, 8, 2, 3, 4, 5, 6, 17};
    int nSwaps = 13;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 15, 14, 13, 12, 11, 17, 10, 9, 8, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> data = {15, 14, 13, 12, 11, 16, 10, 9, 8, 2, 3, 4, 5, 6, 17};
    int nSwaps = 1300;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 6, 5, 4, 3, 2};
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> data = {15, 14, 13, 12, 11, 16, 10, 9, 8, 2, 3, 4, 5, 6, 17, 18, 19, 23, 24, 20, 21, 30, 28, 27};
    int nSwaps = 100;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 28, 27, 24, 23, 15, 14, 13, 16, 12, 11, 10, 9, 8, 2, 3, 4, 5, 6, 17, 18, 19, 20, 21};
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> data = {1, 3, 5};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 3};
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> data = {1, 2, 3, 4, 5};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> data = {1};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> data = {10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 110000, 120000, 130000, 140000, 150000, 160000, 170000, 180000, 190000, 200000, 210000, 220000, 230000, 240000, 250000, 260000, 270000, 280000, 290000, 300000, 310000, 320000, 330000, 340000, 350000, 360000, 370000, 380000, 390000, 400000, 410000, 420000, 430000, 440000, 450000, 460000, 470000, 480000, 490000, 500000};
    int nSwaps = 1224;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {500000, 490000, 480000, 470000, 460000, 450000, 440000, 430000, 420000, 410000, 400000, 390000, 380000, 370000, 360000, 350000, 340000, 330000, 320000, 310000, 300000, 290000, 280000, 270000, 260000, 250000, 240000, 230000, 220000, 210000, 200000, 190000, 180000, 170000, 160000, 150000, 140000, 130000, 120000, 110000, 100000, 90000, 80000, 70000, 60000, 50000, 40000, 30000, 10000, 20000};
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> data = {7, 5, 3, 2, 4};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 5, 3, 4, 2};
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> data = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 999, 998, 997, 996, 995, 994, 993, 992, 50, 51, 52, 53, 54, 55, 56, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999, 998, 997, 996, 995, 994, 993, 992, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 56, 55, 54, 53, 52, 51, 50, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> data = {2, 1, 3, 4, 5};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 1, 4, 5};
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> data = {1};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> data = {19, 20, 17, 18, 15, 16, 13, 14, 11, 12};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> data = {5, 2, 4, 1, 9, 6};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 9, 2, 4, 1, 6};
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> data = {1, 2, 3, 5, 4};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> data = {4, 1, 2, 5, 3};
    int nSwaps = 4;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 2, 1, 3};
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> data = {10, 20, 30, 40};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {40, 10, 20, 30};
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> data = {19, 20, 100, 18, 15, 16, 13, 14, 11, 12};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 20, 19, 18, 16, 15, 14, 13, 11, 12};
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int nSwaps = 37;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> data = {5, 8, 19, 24, 16, 7, 13, 28, 61, 700, 48, 15, 33, 80, 85, 93, 77, 17, 25, 601, 123, 128, 126, 124, 111, 502, 507, 204, 503, 666, 303};
    int nSwaps = 220;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {700, 666, 601, 507, 503, 502, 303, 204, 128, 126, 61, 5, 8, 19, 24, 16, 7, 13, 28, 48, 15, 33, 80, 85, 93, 77, 17, 25, 123, 124, 111};
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> data = {3, 5, 1, 2, 4};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 4, 1, 2};
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> data = {1, 2, 3, 4, 5};
    int nSwaps = 100000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int nSwaps = 104;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 49, 8, 1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48};
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> data = {3, 5, 1, 2, 4};
    int nSwaps = 1000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> data = {3, 5, 1, 2, 4};
    int nSwaps = 1100;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> data = {1, 2, 5, 4};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 2, 4};
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> data = {1, 2, 3, 4, 5};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 2, 4, 5};
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> data = {1, 2, 4};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1, 2};
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> data = {3, 5, 1, 2, 4};
    int nSwaps = 0;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 1, 2, 4};
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> data = {20, 10};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 10};
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> data = {1, 2, 3, 5, 6};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 2, 3, 6};
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> data = {4, 1, 2, 3, 5};
    int nSwaps = 4;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> data = {2, 3, 4};
    int nSwaps = 4;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2};
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> data = {999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 190, 30, 280, 90, 120, 110, 20, 340, 270, 140, 40, 180, 370, 10, 290, 160, 390, 50, 400, 360, 170, 80, 240, 300, 260, 70, 220, 60, 310, 100, 380, 130, 350, 210, 320, 200, 250, 230, 150, 330, 999999};
    int nSwaps = 193;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999999, 999998, 999997, 999996, 999995, 999994, 999993, 999992, 999991, 400, 390, 380, 370, 360, 350, 340, 300, 280, 190, 90, 30, 120, 110, 20, 270, 140, 40, 180, 10, 290, 160, 50, 170, 80, 240, 260, 70, 220, 60, 310, 100, 130, 210, 320, 200, 250, 230, 150, 330};
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> data = {2, 1, 4, 3};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> data = {10, 20, 30, 40, 50, 60, 70, 2, 1, 6, 1000};
    int nSwaps = 7;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 20, 10, 30, 40, 50, 60, 2, 1, 6, 1000};
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> data = {3, 5, 1, 2, 4};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> data = {1, 2, 3, 4, 5, 6};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> data = {4, 7, 5, 6, 1, 2};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 6, 4, 5, 1, 2};
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> data = {10, 20, 30, 40, 50};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 10, 20, 40, 50};
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> data = {3, 1, 2};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 1};
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> data = {1, 3, 2, 4, 6};
    int nSwaps = 15;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> data = {3, 2, 1, 4};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> data = {10, 20, 30};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 10, 20};
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> data = {19, 20, 17, 18, 15, 16, 13, 14, 11, 12};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> data = {1000, 1, 999, 2, 998, 3, 997, 4, 996, 5, 995, 6, 994, 7, 993, 8, 992, 9, 991, 10, 990, 11, 989, 12, 988, 13, 987, 14, 986, 15, 985, 16, 984, 17, 983, 18, 982, 19, 981, 20, 980, 21, 979, 22, 978, 23, 977, 24, 976, 25};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 989, 988, 987, 986, 985, 984, 983, 982, 981, 980, 979, 978, 977, 976, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> data = {1000, 1, 999, 2, 998, 3, 997, 4, 996, 5, 995, 6, 994, 7, 993, 8, 992, 9, 991, 10, 990, 11, 989, 12, 988, 13, 987, 14, 986, 15, 985, 16, 984, 17, 983, 18, 982, 19, 981, 20, 980, 21, 979, 22, 978, 23, 977, 24, 976, 25};
    int nSwaps = 500;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000, 999, 998, 997, 996, 995, 994, 993, 992, 991, 990, 989, 988, 987, 986, 985, 984, 983, 982, 981, 980, 979, 978, 977, 976, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 6, 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> data = {10, 20, 30, 40, 50, 60, 70};
    int nSwaps = 1000000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 60, 50, 40, 30, 20, 10};
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> data = {3, 1, 4, 5, 2};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 1, 4, 2};
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> data = {19, 20, 17, 18, 15, 16, 13, 14, 11, 12};
    int nSwaps = 999999;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> data = {2, 1};
    int nSwaps = 100;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> data = {1, 2, 3, 4, 6, 5};
    int nSwaps = 8;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 5, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<int> data = {9, 8, 7, 6, 5, 4, 3, 2, 1, 100};
    int nSwaps = 100;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<int> data = {15, 14, 13, 12, 11, 10, 9, 8, 1, 2};
    int nSwaps = 1;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 14, 13, 12, 11, 10, 9, 8, 2, 1};
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<int> data = {3, 1, 2, 41, 5, 7, 212, 9, 4, 6, 31, 8, 412};
    int nSwaps = 4;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41, 3, 2, 1, 5, 7, 212, 9, 4, 6, 31, 8, 412};
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<int> data = {1, 2, 5, 3, 4};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<int> data = {19, 17, 18, 15, 16, 20, 13, 14, 11, 12};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 19, 17, 18, 15, 16, 13, 14, 11, 12};
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<int> data = {19, 1, 17, 18, 15, 16, 13, 14, 11, 12, 123, 115, 143, 1000, 67};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 18, 17, 16, 1, 15, 13, 14, 11, 12, 123, 115, 143, 1000, 67};
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<int> data = {1, 2};
    int nSwaps = 0;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<int> data = {3, 5, 1, 2, 4};
    int nSwaps = 7;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<int> data = {2, 4, 5, 9, 7, 8, 6, 3, 45, 11};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2, 4, 9, 7, 8, 6, 3, 45, 11};
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<int> data = {2, 4, 5};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 2};
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<int> data = {3, 16, 22, 84, 10, 13, 62, 34, 79, 52, 14, 92, 86, 71, 6, 91, 35, 75, 33, 72};
    int nSwaps = 101;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {92, 91, 86, 84, 79, 75, 72, 71, 62, 52, 35, 22, 3, 16, 10, 13, 34, 14, 6, 33};
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<int> data = {1, 2, 3, 4, 5};
    int nSwaps = 10;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<int> data = {19, 20, 17, 18, 15, 16, 13, 14, 11, 12};
    int nSwaps = 20;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<int> data = {19, 20, 17, 18, 15, 16, 13, 14, 11, 12};
    int nSwaps = 9;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11};
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<int> data = {3, 4, 2, 5};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 4, 2};
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<int> data = {19, 21, 17, 18, 15, 20, 13, 14, 11, 12};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 20, 19, 17, 18, 15, 13, 14, 11, 12};
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<int> data = {19, 20, 17, 30, 18, 15, 16, 13, 14, 11, 12};
    int nSwaps = 5;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 20, 19, 18, 17, 15, 16, 13, 14, 11, 12};
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    vector<int> data = {1, 2, 3, 4, 5};
    int nSwaps = 3;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1, 2, 3, 5};
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    vector<int> data = {48, 47, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26, 27, 28, 29, 30, 31, 32, 33, 36, 37, 38, 40, 41, 42, 60, 69, 79, 89, 999, 1000, 2000, 3000, 4000};
    int nSwaps = 100000;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4000, 3000, 2000, 1000, 999, 89, 79, 69, 60, 48, 47, 42, 41, 40, 38, 37, 36, 33, 32, 31, 30, 29, 28, 27, 26, 25, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    vector<int> data = {5, 4, 1, 3, 2, 6};
    int nSwaps = 4;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 4, 1, 3, 2};
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    vector<int> data = {10, 20, 50};
    int nSwaps = 2;
    PartSorting* pObj = new PartSorting();
    clock_t start = clock();
    vector<int> result = pObj->process(data, nSwaps);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 10, 20};
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=9987&pm=6447
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
 
class PartSorting {
public:
  vector <int> process(vector<int> A, int m)
  {
    int n=A.size();
    for (int k=0;k<n;k++)
    {
      if (m==0)
        break;
      int maxv=-100000000,maxd,i;
      for (i=k;i<n;i++)
        if (A[i]>maxv && i-k<=m)
        {
          maxv=A[i];
          maxd=i;
        }
      for (i=maxd;i>k;i--)
      {
        m--;
        swap(A[i],A[i-1]);
      }
    }
    return A;
  }
};

********************************************************************************
*******************************************************************************/