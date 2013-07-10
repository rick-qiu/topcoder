/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2442
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

class ChangePurse {
public:
    vector<int> optimalCoins(vector<int> coinTypes, int value);
};

vector<int> ChangePurse::optimalCoins(vector<int> coinTypes, int value) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> coinTypes = {1, 25, 10};
    int value = 49;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 1, 0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> coinTypes = {1, 7};
    int value = 49;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> coinTypes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int value = 390700799;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19535039};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> coinTypes = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288};
    int value = 1048575;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> coinTypes = {11, 5, 10, 1};
    int value = 109;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 0, 0, 10};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> coinTypes = {14796, 236736, 839364, 37572, 639, 473472, 1, 751, 970, 301, 761450, 939300, 16680, 483720, 230679, 945392, 946944, 419682, 259095, 322, 236348, 238293, 472696, 518190, 922716, 953172, 967440, 556, 249, 678, 606, 822};
    int value = 373095935;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 1, 0, 0, 0, 1, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> coinTypes = {103, 935, 559440, 596806, 31080, 470378, 894795, 38522, 242374, 99568, 907, 958, 84, 910, 298680, 695, 525875, 479, 279720, 390976, 727122, 1, 337, 254, 158727, 454, 770440, 793635, 596, 414956, 796544, 248080, 886, 829912, 848120, 535845, 14224, 896040, 940756, 570, 398272, 781952, 992320, 601};
    int value = 959835519;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 55, 0, 0, 0, 0, 0, 0, 1204, 0, 0, 0, 0, 0, 6, 0, 0, 0, 1, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> coinTypes = {150463, 22736, 886704, 902778, 1, 379, 68302, 230265, 253106, 460530, 819624, 759318, 667, 731, 916, 236785, 717228, 947140, 156750, 923, 2193, 921060, 940500, 209, 116, 707};
    int value = 926586359;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 730, 0, 0, 1, 0, 1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 104, 1005, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> coinTypes = {81056, 95480, 82248, 96138, 460320, 596, 627936, 686244, 338436, 644820, 686592, 822480, 52788, 844, 668360, 676872, 513920, 920640, 1, 140, 162112, 961380, 423, 660, 480690, 704, 972672, 654, 298, 249, 357, 822, 149, 42912, 71910};
    int value = 985316735;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 5, 0, 0, 0, 0, 0, 1012, 0, 1, 0, 0, 0, 1, 0, 0};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> coinTypes = {485604, 501, 811, 261, 114240, 121401, 1, 562023, 720360, 791776, 913920, 956910, 971208, 979600, 180090, 97960, 191382, 987, 197944, 872, 5712, 158, 34, 706920, 456960, 685, 48980, 353460, 360180};
    int value = 788712959;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 3, 0, 33, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 167, 0, 1, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> coinTypes = {691966, 11310, 250488, 371, 279220, 852992, 976458, 500976, 607, 60928, 13, 41344, 426496, 31311, 436296, 72716, 385090, 469, 213, 443, 652, 896, 1, 345983, 165376, 417872, 539856, 218148, 622050, 676272, 770180, 837660, 872592, 992256, 338136, 574, 772, 794, 646, 711, 208936, 682560, 169068, 835744, 325486};
    int value = 758282447;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 1, 0, 0, 0, 0, 868, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> coinTypes = {232078, 881, 104429, 937, 332137, 358479, 393231, 220, 326880, 1, 277, 681, 171160, 570633, 639, 16940, 716958, 786462, 664274, 855800, 897820, 696234, 943, 260640, 85580, 720, 626574, 108960, 980640, 20, 959, 21087};
    int value = 213094199;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 388, 0, 19, 0, 0, 4, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 1, 0, 0, 0, 0, 10, 0, 0};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> coinTypes = {36096, 293160, 94, 420, 237, 649, 216576, 603, 14220, 866304, 895860, 970830, 489995, 979990, 485415, 1, 950, 108288, 586320};
    int value = 993650687;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 383, 0, 0, 0, 3, 0, 0, 1146, 0, 0, 0, 0, 0, 93, 0, 1, 0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> coinTypes = {703, 532, 86496, 366016, 731, 649110, 792, 842112, 957352, 875, 15824, 883008, 514596, 923136, 122760, 281, 441504, 610456, 461568, 958, 968, 732032, 93568, 636, 678, 724104, 859320, 87208, 617136, 147168, 811125, 1, 3934, 16, 224, 361, 991, 92416, 601, 739328, 369664, 120684, 787476, 257298};
    int value = 502431551;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 15, 0, 13, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> coinTypes = {291, 168, 846228, 894825, 987272, 754, 997248, 430, 473, 524, 2, 1568, 37972, 232232, 708, 249312, 292314, 863, 181248, 498624, 423114, 584628, 399812, 635808, 678540, 49, 724992, 888, 755112, 1, 10556, 727, 862, 317904, 339270, 178965, 799624, 57116, 125852, 377556, 696696};
    int value = 172083911;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 376, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> coinTypes = {196425, 237200, 326, 507256, 785700, 948800, 1, 47440, 80, 873, 253628, 474400};
    int value = 870049599;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 0, 0, 916, 79, 4, 592, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> coinTypes = {611, 499653, 999306, 9, 249, 227, 1, 293664, 612, 681156, 642, 219055, 307944, 480928, 43992, 548130, 452, 588, 658854, 693, 60116, 438110, 744120, 876220, 31005, 227052, 1323, 85905, 859050, 880992, 644, 43811, 45, 120232, 961856, 274065, 329427, 923832, 636222, 363};
    int value = 669451775;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 1, 0, 0, 132, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 695, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> coinTypes = {12852, 18540, 684, 222678, 60, 285120, 540, 344352, 539955, 667440, 732564, 850896, 890712, 71280, 172176, 126412, 612, 374, 179985, 195, 570240, 688704, 1, 267, 593, 379236, 682, 425448, 251432, 564014, 758472, 272};
    int value = 84965759;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 8, 1, 131, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 148, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> coinTypes = {148234, 325593, 651186, 279, 935088, 952320, 3864, 240, 24, 467544, 541, 119040, 444702, 476160, 108531, 1};
    int value = 106659839;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 111, 0, 495, 9, 0, 0, 3, 0, 1, 0, 23};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> coinTypes = {54, 866700, 875776, 940614, 963738, 8, 1339, 919, 261600, 132070, 1, 483, 313538, 759, 763230, 783783, 816072, 446, 819, 2538, 164970, 6, 281, 218944, 261261, 709044, 784800, 480, 660350, 2488, 40170, 103, 90, 48150, 35694, 354522, 433350, 437943, 659880};
    int value = 306811799;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 8, 0, 0, 1, 0, 0};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> coinTypes = {29210, 58420, 350520, 708072, 720035, 230, 42355, 1, 59006, 985, 236024, 163, 701040};
    int value = 929579039;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 1, 0, 0, 126, 0, 229, 0, 0, 0, 0, 1325};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> coinTypes = {716870, 405822, 358435, 318199, 621960, 403326, 683, 735244, 613, 17365, 271834, 385, 823, 346983, 566, 170145, 510435, 995, 258990, 977, 776970, 806652, 811644, 533, 937710, 551, 288, 219, 86330, 123975, 310980, 636398, 183287, 31098, 815502, 272736, 97, 115, 867825, 194, 104190, 545472, 347, 775266, 829473, 794, 129211, 1, 134442, 733148};
    int value = 430441379;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 553, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> coinTypes = {336986, 650760, 2535, 673972, 780780, 37, 38682, 928368, 23014, 965871, 285, 431, 1, 174096, 325380, 775200, 270146, 128851, 108460, 773106, 110, 518, 186, 5, 307, 845, 321957, 522288, 598364, 338, 96900, 387600, 269, 922, 991, 510365, 540292};
    int value = 848591039;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 1, 0, 0, 0, 2, 0, 985, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> coinTypes = {741312, 815544, 458, 594, 434, 234, 546084, 203886, 45, 1, 23166, 370980, 547420, 136770, 741960, 163, 760320, 874224, 914850, 986048, 457425, 723, 692, 299730, 370656, 54742, 246512, 213, 952, 40424, 606360, 407772, 696654, 729368, 899190, 952000, 535, 15840, 109278, 101, 582, 591, 126720, 364684, 813660, 101943, 81366, 291, 798, 820620};
    int value = 141089111;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 172, 0, 0, 0, 0, 0, 1, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> coinTypes = {151848, 1, 6, 4218, 83232, 911088, 153, 147392, 303696, 749088, 869, 736960, 784};
    int value = 664183151;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 702, 35, 0, 728, 0, 0, 2, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> coinTypes = {985, 545454, 534, 200, 181818, 262820, 427520, 623689, 392000, 682682, 269434, 916, 53440, 962, 49000, 784000, 1, 35244, 961, 213760, 525640, 563904, 340, 855040, 52514, 2, 808302, 331, 974165, 80, 847, 4};
    int value = 268482559;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 313, 0, 1, 0, 0, 0, 667, 0, 19};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> coinTypes = {409818, 522720, 548208, 898, 73440, 14976, 564, 153, 623, 565684, 587520, 24480, 124, 873, 501, 21450, 608844, 703872, 426024, 146880, 819636, 852048, 8577, 104, 293760, 1, 523197, 948600, 9, 261360, 432, 22, 316200, 63240};
    int value = 937094399;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 1, 0, 0, 159, 0, 0, 1594, 2, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 8, 0, 0, 16, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> coinTypes = {1752, 486864, 973728, 6, 7, 3381, 243432, 121716, 1, 40572};
    int value = 43817759;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 44, 0, 482, 11, 1, 1, 6, 2};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> coinTypes = {374680, 772800, 820800, 456203, 146, 456, 626, 5808, 32912, 98736, 511290, 617710, 872781, 992580, 997776, 973, 659456, 198516, 912406, 585, 22040, 156816, 313632, 559746, 691152, 896, 771, 312, 57524, 1, 732320, 749360, 58, 22, 88, 736, 932, 52272, 61771, 136800, 737, 2313, 966, 223, 166296, 410400, 578424, 627264};
    int value = 793488959;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 3, 65, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1264};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> coinTypes = {664, 163520, 178752, 559821, 650231, 592424, 690092, 742633, 1, 112, 977, 25440, 127092, 799, 612208, 762552, 763200, 41, 598, 1988, 254184, 12587, 817600, 934830, 377802, 755604, 693408, 536256, 992, 941, 81760, 714, 480, 59584, 103870, 14, 29792, 76160, 345046, 224, 453, 560};
    int value = 886431167;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 0, 0, 0, 0, 0, 13, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1652, 0, 0, 0, 0, 0, 2, 0, 7, 1, 0, 0, 132, 0, 0};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> coinTypes = {23868, 242, 71604, 119652, 328152, 859248, 957216, 984456, 507, 82038, 429624, 1, 3, 234, 214812, 239304};
    int value = 139198175;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 2, 0, 0, 161, 0, 0, 0, 0, 1, 2, 77, 101, 1, 0};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> coinTypes = {278, 739, 752, 30, 949, 472538, 211152, 26688, 422304, 8896, 796, 427008, 610740, 731610, 167634, 55878, 139, 106752, 358722, 739968, 844608, 424, 213504, 21060, 502902, 717444, 854016, 1, 517, 945076};
    int value = 151160831;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 0, 0, 0, 0, 0, 0, 3, 0, 2, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 176, 138, 0, 0};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> coinTypes = {582256, 646, 304, 604, 238, 76860, 210140, 331200, 662400, 110240, 665, 62288, 490, 120, 230580, 41400, 498864, 498304, 20468, 156800, 531658, 661440, 567450, 166288, 958, 769274, 840560, 234, 922320, 520, 940800, 1, 996608, 165600, 777784, 997728, 10, 183, 916, 82800, 113490};
    int value = 559727999;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 1, 844, 0, 0, 0, 0, 344, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 1, 0, 0, 11, 0, 0, 1, 0};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> coinTypes = {795, 5536, 26, 915, 18590, 60840, 49140, 2, 119700, 162235, 369000, 383936, 478800, 505995, 949, 95984, 455, 8, 420, 239400, 276800, 191968, 619305, 654810, 706420, 393120, 738000, 767872, 425880, 786240, 830400, 676, 4500, 851760, 957600, 648940, 1, 112, 180, 457};
    int value = 687245439;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 1, 0, 13, 0, 0, 0, 1, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 0, 0, 0, 0, 1, 856, 0, 0};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> coinTypes = {899, 48480, 387840, 448601, 1, 543, 766700, 973628, 647, 286621, 502275, 606, 697, 303, 917, 6060, 36960, 62418, 153340, 245756, 554400, 193920, 624180, 698, 802, 12120, 110880, 486814, 573242, 583528, 737268, 775680, 480, 897202};
    int value = 464632319;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 1, 0, 302, 0, 0, 0, 0, 0, 0, 9, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 3, 0, 0, 0, 0, 0, 598, 0, 0};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> coinTypes = {89880, 390588, 519, 887040, 70, 961, 269, 9240, 1, 156600, 861021, 867, 221760, 65098, 626400, 10, 280, 313200, 676830, 123003, 719040, 781176, 946585, 770, 73920, 5400};
    int value = 474566399;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 534, 10, 0, 0, 7, 9, 0, 0, 0, 3, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 11, 2, 0};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> coinTypes = {784, 462000, 670, 77000, 2780, 1, 440, 911, 704634, 924000, 354, 15400, 231000, 258540, 57024, 298776, 446890, 597552, 50331, 726484, 513216, 821632, 410816, 870916, 836, 20, 57, 893780, 352};
    int value = 773387999;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0, 2, 0, 19, 34, 0, 0, 836, 0, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> coinTypes = {128115, 101400, 259374, 357680, 437080, 526318, 725052, 811200, 874160, 940416, 33800, 129687, 778122, 561212, 351, 362526, 786, 6760, 646758, 715360, 426, 178840, 1, 231012, 13, 490, 25668, 26, 653166, 294515, 311, 215586, 405600, 693036, 768690, 883545, 263, 992, 806, 124, 609, 811, 2561};
    int value = 313123199;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 0, 0, 0, 0, 0, 385, 0, 0, 2, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 12, 0, 1, 0, 0, 259, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> coinTypes = {910, 56160, 1, 108882, 199818, 3132, 112320, 435528, 492310, 673920, 871056, 217764, 20400, 336960, 979200, 984620, 999090, 180, 6, 18720, 653, 244800, 526, 300};
    int value = 884856959;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 5, 0, 0, 0, 2, 0, 0, 1312, 0, 0, 0, 1, 0, 0, 0, 103, 29, 2, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> coinTypes = {144000, 239859, 886, 472270, 533390, 689010, 180, 893964, 176157, 295, 90, 1, 966, 285600, 41005, 285292, 517776, 544, 830, 106380, 965, 142646, 288000, 943, 480960, 571200, 576000, 819, 660933, 944540, 959436, 984120, 529, 528471, 570584, 746, 5010, 744660, 106678, 148994, 258888, 30, 72000, 919, 40800};
    int value = 225215999;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0, 0, 0, 0, 399, 0, 0, 0, 1, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> coinTypes = {151050, 216, 40, 901, 710955, 190, 337, 786, 1, 67620, 302100, 405720, 733860, 8050, 966, 811440, 414222, 99576, 7, 202860, 234889, 828444, 852600, 3480, 896184, 990150, 604200, 593759, 322, 33810, 45, 40770, 3885};
    int value = 310781519;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 6, 2, 0, 1, 0, 0, 34, 382, 0, 0, 45, 1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> coinTypes = {268500, 351582, 68, 888160, 444080, 244, 534720, 537000, 89205, 338099, 95, 33, 50226, 66, 486528, 596904, 442519, 676198, 375, 778, 535230, 578160, 22100, 703164, 781000, 795600, 885038, 896, 47, 960, 979, 1, 5016, 14899, 264, 17080, 536364, 963164, 973056, 539, 88400, 19272, 607, 481582, 38544, 192720, 781};
    int value = 523812959;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 905, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 72, 0, 0, 0, 0, 0, 0, 1, 0, 0, 4, 2, 0};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> coinTypes = {9, 371, 79023, 365500, 400860, 774, 153, 60787, 538560, 80172, 801, 731, 573516, 731000, 820440, 948276, 1, 698544, 972592, 269280, 801720, 306, 486296, 205110, 89, 3969, 40086, 91375};
    int value = 801719999;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 0, 0, 0, 1, 0, 1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 999, 130, 0, 0, 0, 0, 1, 0};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> coinTypes = {40950, 608, 52312, 251015, 362806, 503, 502030, 572565, 823, 114513, 59100, 295500, 315, 325797, 409500, 858600, 889304, 977391, 591000, 1, 829, 5400, 204750, 566, 287, 298528, 158752, 725612, 968, 819000, 895584, 952512, 8190, 9, 591};
    int value = 787058999;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 1, 0, 0, 0, 0, 8, 0, 0, 1, 0, 0, 0, 0, 0, 0, 960, 0, 0, 4, 34, 0};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> coinTypes = {705960, 352980, 143, 89232, 763182, 766878, 803088, 821610, 45645, 429, 537, 798, 117660, 410805, 589248, 363, 392, 673, 11154, 49104, 674240, 684255, 535392, 22308, 792, 1, 212, 52635, 109026, 267696, 337120};
    int value = 284293151;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 2, 0, 0, 353, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 142, 0, 0, 0, 2, 0};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> coinTypes = {634, 192, 7267, 988, 29068, 62016, 116272, 493, 14534, 466336, 307768, 481008, 697632, 429110, 527, 380400, 760800, 868224, 169, 26, 232544, 472006, 1, 986, 912050, 923304, 962016, 944012, 492507, 517, 528, 54723, 85822, 182410, 465088, 858220, 930176, 985014, 713};
    int value = 785998719;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1, 0, 3, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 1, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 844, 0, 0};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> coinTypes = {962850, 138432, 210, 240, 913, 69216, 965760, 968760, 80730, 1, 603, 989100, 4, 243, 342, 766, 877, 120720, 241440, 276864, 481425, 82764, 443232, 530838, 543609, 13851, 720017, 805, 188580, 1624, 482880, 553728, 187, 315, 19720, 40, 60401, 49455, 402804, 754320, 802256, 805266, 130, 886464, 618, 48258, 744625, 910404, 946560, 525};
    int value = 364091519;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 502, 0, 0, 376, 0, 0, 3, 0, 0, 9, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> coinTypes = {965024, 56, 699312, 712062, 882777, 168, 357213, 179, 798132, 408, 217728, 501, 435456, 77, 571, 265, 65912, 135150, 85344, 569, 66511, 1, 349656, 6981, 511700, 482512, 512064, 525891, 227, 889, 8064, 602, 72576, 593208, 714426, 102, 870912};
    int value = 238629887;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 0, 0, 0, 47, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 2, 0, 0, 0, 273};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> coinTypes = {952820, 112, 845748, 15939, 965600, 71, 483, 450087, 43310, 96560, 66304, 382832, 482800, 660450, 737, 191416, 792360, 771060, 638028, 385530, 765664, 899388, 900174, 958, 142, 573, 95708, 131186, 31262, 66030, 340, 111, 94350, 1, 262372, 759, 355, 396180, 449694, 937860, 154, 281916, 426, 747, 468930, 476410, 198090, 729344, 787116, 940401};
    int value = 127569959;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0, 70, 0, 0, 0, 1, 0, 0, 0, 0, 154, 0, 0, 0, 1, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> coinTypes = {598, 195024, 780096, 865, 377856, 308320, 911710, 96063, 455855, 864567, 1, 188928, 213, 984, 576472, 702, 956, 675563, 835380, 328, 119340, 616640, 755712, 47232, 833, 41};
    int value = 285659135;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 40, 1, 0, 47, 0, 0, 0, 0, 0, 2, 0, 0, 377, 3, 0, 7};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> coinTypes = {794, 385920, 206424, 492480, 529618, 621376, 355218, 146, 1, 38836, 133693, 451178, 654192, 710436, 746496, 606690, 246240, 41040, 771840, 807070, 269, 378, 233920, 483, 467840, 842, 121338, 582002, 825696, 240, 488, 118406, 373248, 861672, 708, 403535, 60, 902356, 1536, 935851, 984960, 511, 12, 667, 860, 64320, 215418, 518};
    int value = 390044159;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 395, 0, 4, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> coinTypes = {955350, 971140, 171954, 66, 46, 402213, 202000, 187128, 419040, 515862, 48, 740532, 748512, 77517, 823, 1, 223, 369, 25668, 250, 242785, 276906, 477675, 616032, 154008, 399, 308016, 50424, 23280, 77004, 209520, 374256, 620136, 504240, 804426, 830718, 62376, 749, 99, 7878, 85977, 808000, 606, 965, 92, 838080};
    int value = 105957503;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 2, 0, 0, 0, 0, 171, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> coinTypes = {494208, 722376, 731798, 809064, 920448, 1, 988416, 9152, 158, 991014, 282720, 40132, 608, 143, 289755, 734, 579510, 828400, 330338, 816, 460224, 27456, 675783, 331, 436, 82368, 729, 306, 202266, 247104, 414200, 705};
    int value = 419088383;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0, 0, 0, 142, 423, 2, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> coinTypes = {28, 286, 1, 203, 781, 263978, 371625, 673960, 991, 441, 700749, 743250, 766080, 159885, 959310, 127680, 187, 830, 215040, 42560, 168490, 8512, 7168, 56, 383040, 324597, 108199, 645120, 100107, 709148, 336980, 649194, 791934};
    int value = 94227839;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 2, 0, 0, 0, 2, 0, 4, 0, 151, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> coinTypes = {944208, 248, 2136, 49104, 122, 347325, 78684, 723, 79, 421, 315840, 245520, 664, 403704, 539168, 653718, 506620, 2, 884952, 912072, 228018, 63168, 947520, 982080, 159943, 134792, 253310, 329, 365, 36873, 76006, 314736, 368104, 694650, 986, 8, 959658, 184052, 491040, 313, 1, 446, 517, 807408, 736208};
    int value = 210165119;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 197, 0, 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 1, 0, 1, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> coinTypes = {236304, 578, 154665, 518670, 588426, 201196, 645468, 658041, 401, 693600, 1, 725900, 415225, 804784, 161367, 173400, 144, 78768, 6, 216108, 259335, 219347, 322734, 830450, 12, 447, 472608, 945216, 425, 346800, 648324, 276, 459, 5826, 281, 315, 854};
    int value = 45370367;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 546, 2, 1, 0, 0, 0, 0, 0, 11, 0, 1, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> coinTypes = {1};
    int value = 23456;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23456};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> coinTypes = {494208, 722376, 731798, 809064, 920448, 1, 988416, 9152, 158, 991014, 282720, 40132, 608, 143, 289755, 734, 579510, 828400, 330338, 816, 460224, 27456, 675783, 331, 436, 82368, 729, 306, 202266, 247104, 414200, 705};
    int value = 419088383;
    ChangePurse* pObj = new ChangePurse();
    clock_t start = clock();
    vector<int> result = pObj->optimalCoins(coinTypes, value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0, 0, 0, 142, 423, 2, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 1, 0, 0};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9924770&rd=5070&pm=2442
********************************************************************************
# include <string> 
# include <vector> 
# include <stdlib.h> 
 
using namespace std ; 
 
typedef struct pair1_ 
{ 
  int val ; 
  int num ; 
} pair1 ; 
 
int cmp ( const void * a , const void * b ) 
{ 
  return ( ( pair1 * ) b ) -> val - ( ( pair1 * ) a ) -> val ; 
} 
 
class ChangePurse  
{ 
public : 
  vector <int> optimalCoins ( vector <int> coinTypes, int value )  
  { 
    pair1 * t = new pair1 [ coinTypes . size ( ) ] ; 
    vector <int> res ( coinTypes . size ( ) ) ; 
    int i ; 
 
    for ( i = 0 ; i < coinTypes . size ( ) ; i ++ ) 
    { 
      t [ i ] . val = coinTypes [ i ] ; 
      t [ i ] . num = i ; 
    } 
    qsort ( t , coinTypes . size ( ) , sizeof ( pair1 ) , & cmp ) ; 
    for ( i = 0 ; i < coinTypes . size ( ) - 1 ; i ++ ) 
      if ( value % t [ i ] . val == t [ i ] . val - 1 ) 
      { 
        res [ t [ i ] . num ] = value / t [ i ] . val ; 
        value = t [ i ] . val - 1 ; 
      } 
      else 
        res [ t [ i ] . num ] = 0 ; 
    res [ t [ i ] . num ] = value ; 
    return res ; 
  }     
} ; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/