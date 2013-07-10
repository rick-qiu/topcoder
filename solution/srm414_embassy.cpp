/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9895
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

class Embassy {
public:
    int visaApplication(vector<int> forms, int dayLength, int openTime);
};

int Embassy::visaApplication(vector<int> forms, int dayLength, int openTime) {
    int ret;
    return ret;
}


int test0() {
    vector<int> forms = {4, 4, 4};
    int dayLength = 24;
    int openTime = 8;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> forms = {4, 4, 4, 4};
    int dayLength = 24;
    int openTime = 8;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> forms = {2, 2, 2, 2};
    int dayLength = 24;
    int openTime = 1;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> forms = {25, 500, 630, 2500, 1000, 350, 22, 58, 100, 400, 500, 5000};
    int dayLength = 1440;
    int openTime = 360;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 16945;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> forms = {567213, 494175, 41987, 510822, 279719, 889559, 572483, 117704, 641618, 110895, 259588, 721431, 930617, 438350, 184363, 37908, 784347, 842509, 563146, 965103, 966945, 204978, 136741, 308997, 814758, 672822, 774768, 279015, 303415, 142975, 980557, 678292, 354894, 539685, 246801, 649725, 110680, 480112, 286912, 941249, 157936, 208727, 608459, 283950, 983841, 505666, 684633, 863492, 84134, 478601};
    int dayLength = 389114;
    int openTime = 349228;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 24712086;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> forms = {889580, 869937, 865011, 116251, 240526, 124148, 801592, 708043, 687255, 650744, 270700, 63427, 272771, 966678, 910755, 500529, 912189, 398677, 395295, 672054, 188961, 788267, 572694, 517536, 300730, 563969, 140777, 582576, 229444, 78383, 869420, 213909, 184235, 824891, 833892, 183022, 75977, 271837, 273411, 58507, 141290, 420221, 386990, 6956, 434506, 720818, 721911, 149823, 235733, 965188};
    int dayLength = 503266;
    int openTime = 46143;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 35065525;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> forms = {822309, 543722, 719971, 835309, 730439, 550668, 140188, 15318, 314613, 891904, 771106, 47760, 546908, 468752, 961208, 823739, 102358, 696370, 898450, 51877, 855792, 246285, 188499, 473551, 919013, 389369, 333646, 838248, 860192, 915711, 95176, 328784, 340221, 556563, 292274, 521301, 800391, 503457, 202802, 401911, 952314, 491005, 473947, 184167, 835456, 395056, 839152, 252548, 37367, 849200};
    int dayLength = 808932;
    int openTime = 130971;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 38788777;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> forms = {986281, 794727, 150874, 73327, 999891, 852459, 110313, 972204, 980574, 344772, 715024, 203317, 830311, 939112, 984389, 21399, 167097, 232577, 559532, 562516, 786064, 642149, 843286, 272281, 618712, 293658, 160138, 42054, 789419, 343579, 585976, 195819, 591958, 794893, 711174, 483912, 756051, 537416, 996230, 763468, 826639, 53972, 199739, 9494, 992932, 158184, 878427, 619638, 616159, 452012};
    int dayLength = 185096;
    int openTime = 178356;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 27496129;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> forms = {944891, 531831, 160598, 119270, 205410, 143441, 774535, 148228, 658098, 180080, 230735, 270935, 184821, 879805, 345043, 282653, 10215, 226128, 421286, 618438, 175283, 363247, 351499, 978865, 173877, 555411, 378228, 85615, 29496, 488418, 179335, 619390, 72312, 570036, 549399, 50574, 906208, 957970, 600167, 110909, 875532, 455601, 549738, 674205, 598663, 811577, 911556, 757933, 648653, 895044};
    int dayLength = 297033;
    int openTime = 296155;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 22711182;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> forms = {223497, 750486, 458108, 181064, 397207, 982953, 82256, 703362, 643588, 797539, 226026, 576011, 71943, 976029, 131292, 229840, 189712, 7069, 294762, 886065, 835705, 105180, 642440, 92351, 279948, 288767, 173400, 941880, 395783, 358817, 631344, 331916, 490004, 568392, 969169, 527834, 717774, 233321, 168943, 820466, 438658, 156911, 814255, 751059, 779947, 450737, 964259, 658797, 723060, 689652};
    int dayLength = 128720;
    int openTime = 417;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 28026600;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> forms = {676344, 516658, 89960, 697659, 287877, 266130, 637071, 733629, 137875, 270186, 790553, 484886, 753681, 618564, 106952, 506918, 385048, 289685, 880274, 561084, 134771, 345991, 463959, 642966, 874529, 922479, 395310, 693734, 749450, 308310, 665370, 871307, 111244, 334132, 893451, 176851, 876271, 925871, 483368, 99774, 341171, 992927, 106244, 257725, 16896, 962763, 706403, 222702, 970292, 264364};
    int dayLength = 9335;
    int openTime = 4819;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 25564852;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> forms = {388440, 207849, 537123, 813653, 191850, 383128, 289788, 467450, 579539, 843843, 207877, 544432, 667377, 978207, 183154, 734981, 71566, 870166, 735141, 328698, 215654, 728957, 133492, 636798, 603747, 595230, 895392, 584944, 13923, 13422, 863646, 727137, 952496, 165462, 811857, 19726, 602758, 113581, 961933, 45289, 329360, 275131, 348436, 378128, 91306, 674871, 443868, 26003, 451295, 793673};
    int dayLength = 638725;
    int openTime = 2467;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 41903098;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> forms = {776683, 969160, 400486, 962970, 487737, 385083, 992513, 759662, 538022, 874587, 265161, 948027, 290810, 287310, 260898, 630467, 74485, 494957, 244321, 461746, 403968, 324798, 328582, 654059, 487990, 230073, 871367, 964027, 718179, 105926, 602313, 981155, 37700, 690045, 44187, 157073, 734786, 68387, 27333, 914790, 341243, 736690, 426999, 444913, 316089, 803729, 309783, 111538, 154167, 66327};
    int dayLength = 807671;
    int openTime = 291129;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 32146212;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> forms = {17698, 262667, 449563, 586368, 993236, 902566, 77559, 559487, 384218, 439951, 519663, 335952, 628720, 62684, 879828, 301795, 961918, 223255, 351211, 121946, 703843, 162869, 171112, 20162, 524970, 8608, 349359, 90397, 743500, 885100, 160849, 401431, 382903, 745828, 629204, 682131, 421062, 465535, 65577, 660957, 865092, 590626, 184311, 772535, 145070, 608808, 433615, 932625, 267821, 458645};
    int dayLength = 317429;
    int openTime = 48555;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 27902895;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> forms = {10, 7, 4, 3, 4, 1, 3, 3, 4, 3, 9, 4, 10, 8, 6, 3, 7, 7, 8, 10, 7, 8, 9, 7, 7, 3, 8, 6, 9, 10, 2, 7, 7, 9, 9, 1, 2, 5, 5, 10, 4, 1, 9, 7, 9, 4, 10, 7, 6, 6};
    int dayLength = 9;
    int openTime = 2;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 422;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> forms = {4, 8, 2, 1, 9, 1, 5, 3, 9, 10, 3, 4, 3, 5, 8, 6, 10, 4, 10, 3, 10, 1, 6, 9, 3, 10, 4, 9, 10, 2, 3, 6, 7, 4, 5, 6, 1, 5, 6, 2, 8, 9, 4, 5, 7, 3, 1, 4, 9, 1};
    int dayLength = 9;
    int openTime = 7;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 271;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> forms = {2, 6, 9, 1, 7, 7, 8, 7, 1, 10, 8, 9, 3, 3, 7, 7, 4, 2, 6, 7, 2, 8, 8, 2, 9, 9, 2, 4, 6, 6, 8, 8, 7, 3, 8, 6, 3, 1, 8, 2, 8, 1, 6, 6, 3, 6, 10, 5, 5, 8};
    int dayLength = 8;
    int openTime = 5;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 299;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> forms = {3, 7, 5, 7, 1, 8, 2, 4, 7, 5, 10, 5, 9, 2, 3, 3, 6, 1, 5, 2, 2, 9, 7, 9, 4, 10, 9, 9, 2, 10, 4, 2, 8, 7, 10, 2, 4, 8, 4, 10, 9, 10, 8, 6, 7, 9, 4, 1, 10, 10};
    int dayLength = 1;
    int openTime = 1;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 299;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> forms = {3, 9, 2, 7, 9, 6, 5, 10, 7, 5, 4, 1, 7, 4, 3, 5, 7, 2, 5, 5, 1, 2, 3, 2, 1, 1, 4, 5, 6, 7, 3, 3, 6, 9, 4, 7, 3, 9, 6, 2, 7, 2, 6, 4, 5, 4, 2, 10, 6, 4};
    int dayLength = 8;
    int openTime = 7;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> forms = {4, 1, 6, 2, 1, 8, 3, 7, 9, 1, 3, 6, 5, 10, 7, 5, 7, 2, 4, 2, 8, 9, 2, 10, 2, 4, 1, 3, 2, 4, 1, 5, 2, 7, 1, 1, 9, 10, 3, 1, 10, 1, 5, 1, 5, 2, 2, 2, 4, 7};
    int dayLength = 3;
    int openTime = 1;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 235;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> forms = {2, 8, 6, 10, 2, 9, 7, 8, 4, 8, 5, 4, 4, 6, 8, 9, 4, 3, 4, 9, 5, 4, 1, 5, 9, 1, 2, 5, 3, 2, 6, 4, 10, 8, 6, 9, 2, 5, 4, 8, 1, 7, 9, 1, 7, 2, 3, 5, 1, 7};
    int dayLength = 4;
    int openTime = 3;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 262;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> forms = {2, 5, 1, 4, 2, 8, 9, 6, 3, 9, 7, 3, 10, 1, 6, 7, 6, 1, 6, 1, 4, 2, 7, 5, 4, 7, 10, 5, 5, 7, 6, 9, 8, 2, 9, 5, 4, 3, 6, 5, 5, 8, 9, 10, 9, 1, 7, 1, 8, 2};
    int dayLength = 9;
    int openTime = 5;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 305;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> forms = {6, 5, 3, 8, 3, 5, 5, 2, 1, 2, 1, 3, 6, 7, 1, 1, 2, 8, 3, 1, 4, 1, 6, 9, 3, 3, 6, 2, 2, 3, 2, 4, 5, 3, 3, 5, 5, 8, 10, 8, 4, 7, 3, 1, 10, 7, 5, 4, 2, 9};
    int dayLength = 7;
    int openTime = 7;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 217;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> forms = {7, 2, 1, 1, 9, 1, 1, 9, 7, 2, 5, 2, 6, 3, 2, 7, 7, 4, 4, 5, 6, 8, 10, 9, 1, 2, 3, 1, 5, 3, 10, 4, 1, 5, 3, 9, 10, 8, 3, 2, 7, 10, 9, 1, 5, 2, 3, 8, 2, 1};
    int dayLength = 5;
    int openTime = 2;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 267;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> forms = {89, 22, 22, 9, 97, 89, 79, 74, 68, 86, 90, 61, 38, 29, 35, 96, 26, 70, 45, 79, 23, 58, 39, 69, 51, 32, 98, 83, 39, 48, 9, 46, 97, 21, 78, 93, 52, 95, 5, 23, 13, 8, 75, 56, 35, 27, 67, 45, 84, 88};
    int dayLength = 84;
    int openTime = 73;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2770;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> forms = {43, 16, 82, 90, 27, 98, 94, 57, 100, 6, 60, 67, 22, 79, 44, 14, 35, 76, 87, 3, 84, 34, 79, 97, 14, 16, 58, 80, 25, 81, 46, 3, 68, 29, 63, 64, 90, 26, 58, 2, 4, 59, 19, 21, 43, 31, 53, 23, 100, 21};
    int dayLength = 19;
    int openTime = 8;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2624;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> forms = {70, 46, 59, 58, 22, 61, 77, 67, 25, 33, 63, 11, 89, 92, 18, 3, 92, 11, 25, 27, 30, 83, 36, 91, 54, 6, 62, 8, 52, 61, 75, 36, 55, 6, 93, 78, 80, 92, 6, 96, 16, 48, 43, 3, 98, 60, 9, 77, 21, 9};
    int dayLength = 19;
    int openTime = 14;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2447;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> forms = {60, 9, 29, 20, 29, 61, 1, 14, 48, 59, 13, 57, 4, 24, 66, 54, 49, 30, 74, 13, 91, 6, 33, 49, 40, 86, 99, 16, 60, 47, 24, 4, 40, 71, 13, 65, 22, 67, 28, 52, 2, 48, 18, 1, 91, 29, 14, 55, 29, 96};
    int dayLength = 9;
    int openTime = 9;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2010;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> forms = {36, 11, 43, 47, 86, 79, 12, 24, 63, 96, 87, 58, 16, 63, 27, 4, 51, 72, 29, 93, 3, 81, 27, 47, 98, 26, 25, 4, 13, 99, 58, 15, 39, 99, 28, 11, 71, 3, 32, 46, 37, 48, 50, 70, 58, 31, 96, 6, 90, 23};
    int dayLength = 49;
    int openTime = 30;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2490;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> forms = {80, 1, 66, 74, 59, 81, 64, 59, 15, 15, 28, 57, 94, 99, 8, 71, 51, 81, 30, 93, 34, 50, 91, 17, 13, 38, 73, 15, 81, 38, 65, 21, 52, 27, 88, 27, 3, 35, 97, 50, 56, 85, 24, 34, 68, 45, 63, 13, 86, 64};
    int dayLength = 24;
    int openTime = 20;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2591;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> forms = {30, 9, 44, 35, 81, 83, 17, 56, 98, 15, 11, 11, 46, 92, 74, 62, 82, 89, 13, 16, 96, 86, 15, 26, 65, 74, 57, 96, 88, 41, 61, 20, 64, 14, 96, 65, 56, 96, 43, 38, 39, 8, 41, 64, 99, 61, 62, 2, 60, 37};
    int dayLength = 100;
    int openTime = 65;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2835;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> forms = {95, 6, 21, 32, 61, 2, 90, 63, 5, 64, 25, 70, 2, 69, 58, 36, 28, 88, 13, 29, 22, 96, 97, 84, 12, 97, 13, 47, 21, 61, 70, 69, 97, 86, 34, 77, 32, 76, 74, 39, 16, 100, 55, 15, 59, 24, 52, 44, 53, 22};
    int dayLength = 9;
    int openTime = 4;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2561;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> forms = {21, 82, 92, 91, 74, 99, 20, 56, 53, 63, 43, 35, 3, 24, 27, 38, 83, 79, 73, 46, 23, 78, 66, 12, 91, 82, 77, 50, 26, 53, 81, 59, 98, 91, 59, 13, 13, 20, 45, 16, 17, 68, 76, 57, 62, 53, 25, 62, 24, 92};
    int dayLength = 43;
    int openTime = 36;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2703;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> forms = {97, 51, 87, 84, 93, 23, 65, 71, 45, 90, 11, 9, 31, 8, 53, 78, 7, 61, 57, 31, 67, 61, 31, 66, 10, 13, 23, 16, 51, 64, 40, 68, 38, 87, 42, 98, 63, 87, 39, 4, 60, 9, 73, 83, 38, 56, 5, 18, 15, 93};
    int dayLength = 88;
    int openTime = 72;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2476;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> forms = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int dayLength = 999999;
    int openTime = 49;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 50000000;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> forms = {999999, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int dayLength = 999999;
    int openTime = 49;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 49999999;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> forms = {999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999};
    int dayLength = 1000000;
    int openTime = 49;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 49999950;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> forms = {999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999, 999999};
    int dayLength = 1000000;
    int openTime = 1;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 49999998;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> forms = {999999, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int dayLength = 999999;
    int openTime = 1;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 73999927;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> forms = {2, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int dayLength = 1000000;
    int openTime = 1;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 49000002;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> forms = {737694, 129837, 342608, 993554, 666642, 234695, 392026, 400099, 825661, 322874, 116904, 423881, 96968, 847914, 991485, 248640, 11339, 59883, 597511, 391219, 288461, 758975, 506022, 708031, 675076, 568220, 264360, 970798, 462104, 635043, 62157, 337338, 53027, 150698, 485190, 75666, 854953, 708722, 805680, 437520, 631076, 165487, 331485, 399806, 314683, 77637, 975820, 195097, 55300, 481672};
    int dayLength = 972523;
    int openTime = 378099;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 31480331;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> forms = {562505, 836348, 270427, 650229, 882431, 69907, 7786, 16859, 623888, 994608, 821849, 65789, 395857, 560169, 762647, 254789, 153100, 125631, 394436, 382990, 901366, 988391, 977262, 943141, 384184, 54916, 138838, 426630, 416041, 292649, 69545, 831961, 779281, 381467, 437002, 200830, 123815, 412300, 401991, 631485, 844627, 293792, 37856, 348563, 257068, 722602, 163268, 147947, 524537, 287600};
    int dayLength = 262673;
    int openTime = 82596;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 26040200;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> forms = {654451, 293730, 856600, 837505, 664896, 850789, 366233, 459588, 409145, 1677, 115716, 11481, 595876, 504861, 476150, 206617, 237945, 918345, 877440, 906641, 435552, 6323, 900257, 686587, 613169, 291376, 316938, 562884, 127345, 416899, 996442, 895751, 66202, 356256, 155231, 708622, 288851, 243370, 508953, 226455, 639219, 279476, 340217, 437963, 23938, 962498, 446044, 737864, 516342, 847368};
    int dayLength = 538964;
    int openTime = 185364;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 30651071;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> forms = {804281, 185832, 699358, 189623, 377056, 954552, 273581, 731280, 957749, 414010, 667357, 251006, 798061, 321633, 417344, 438415, 713777, 561873, 100115, 276348, 872728, 216797, 777544, 516464, 367979, 475659, 431741, 608586, 666655, 71435, 624386, 513491, 680157, 724161, 108886, 100421, 295868, 332740, 892394, 395343, 591939, 374036, 246812, 930314, 738859, 46501, 894203, 521539, 747994, 551644};
    int dayLength = 732488;
    int openTime = 587891;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 25889596;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> forms = {906921, 611530, 718451, 686729, 283167, 316725, 487513, 536479, 13170, 366288, 402315, 416384, 19915, 416766, 386378, 143399, 89858, 823058, 641410, 204865, 251549, 873744, 453845, 439400, 193556, 742060, 966162, 614505, 816463, 250953, 549945, 542911, 122917, 845370, 328505, 644757, 815837, 305219, 120433, 44615, 652784, 571225, 106672, 831264, 261956, 995549, 852983, 881115, 862643, 693539};
    int dayLength = 990581;
    int openTime = 339682;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 35237574;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> forms = {94657, 750063, 841738, 285913, 694504, 392118, 273732, 793859, 374926, 503449, 792676, 273949, 834379, 974381, 640281, 281171, 879335, 131636, 384771, 203265, 778713, 752932, 395312, 721011, 363017, 415903, 827872, 685411, 945231, 952055, 120899, 562558, 859312, 481459, 609274, 73886, 259622, 15171, 262801, 101455, 200920, 896524, 346378, 542158, 33181, 154851, 462868, 841092, 552764, 390089};
    int dayLength = 13008;
    int openTime = 2991;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 25158082;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> forms = {229678, 394227, 502154, 370233, 85209, 409731, 181316, 569726, 121429, 575695, 854892, 859208, 314347, 3160, 248100, 278197, 388496, 660563, 893689, 904783, 815725, 593635, 127532, 345554, 323929, 701020, 25388, 600489, 7644, 963712, 26648, 602992, 522606, 885508, 761343, 709042, 803379, 772492, 7075, 164075, 300232, 994345, 922673, 281862, 812464, 117345, 473354, 793823, 127909, 441190};
    int dayLength = 968764;
    int openTime = 631882;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 27133508;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> forms = {513230, 505885, 280008, 524201, 313153, 154519, 264093, 419137, 773960, 544922, 383642, 404644, 496216, 775129, 730512, 411294, 505050, 686966, 142653, 772844, 40037, 795846, 921361, 929207, 446209, 628172, 645674, 771933, 883045, 279228, 931931, 589991, 265592, 927800, 44000, 977811, 56339, 444246, 84394, 380363, 55997, 16855, 945560, 629291, 52781, 129776, 678268, 83390, 954314, 624900};
    int dayLength = 296465;
    int openTime = 221574;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 25091540;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> forms = {671852, 668263, 257354, 385499, 695452, 854235, 803910, 107501, 508047, 254805, 69204, 881216, 399470, 24760, 981490, 288272, 512593, 111832, 295378, 954696, 867326, 682679, 895761, 767237, 612909, 465035, 551490, 431952, 491270, 350965, 367650, 707814, 233760, 588681, 466144, 105907, 845379, 148812, 566876, 17233, 18854, 31921, 631847, 228684, 79664, 996890, 623615, 711777, 901177, 504284};
    int dayLength = 577044;
    int openTime = 397813;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 25435504;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> forms = {219593, 72954, 997574, 245233, 144408, 138536, 713187, 612501, 396365, 78729, 744812, 677471, 446014, 532208, 950224, 965628, 732340, 154209, 940654, 621511, 175206, 465296, 214, 321674, 731132, 784160, 499592, 473731, 923021, 421412, 414770, 277788, 737121, 458081, 983477, 844529, 678639, 989577, 593824, 426061, 173534, 540095, 294322, 239404, 735943, 865177, 343387, 772409, 448881, 27161};
    int dayLength = 900539;
    int openTime = 598584;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 27637833;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> forms = {909203, 929332, 946299, 918164, 123049, 99456, 207198, 847038, 423185, 998596, 369377, 420903, 429507, 162184, 711541, 147978, 109354, 102527, 975035, 640214, 779741, 417295, 272007, 305960, 416872, 943118, 173976, 284558, 348099, 979650, 698976, 865350, 640472, 202400, 540672, 697850, 170369, 449421, 884171, 867724, 603526, 909598, 586882, 771720, 834595, 148251, 393174, 760234, 763007, 443895};
    int dayLength = 230888;
    int openTime = 62400;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 30659882;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> forms = {389493, 962136, 279500, 955530, 961933, 872724, 218496, 266418, 60290, 966704, 443896, 481880, 272317, 626979, 715477, 900137, 132120, 946449, 165223, 575745, 296731, 293967, 507058, 186672, 502081, 991140, 615782, 201009, 142259, 325445, 877412, 302771, 304459, 11160, 39680, 674258, 849233, 924976, 681976, 373662, 946368, 944662, 497407, 249490, 107009, 632637, 325304, 811294, 540333, 571659};
    int dayLength = 421747;
    int openTime = 417961;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 25921341;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> forms = {39183, 942551, 862129, 927966, 198110, 873317, 759461, 800414, 402951, 448426, 73583, 754250, 492128, 689998, 297762, 960834, 726901, 166244, 699326, 853072, 658813, 178866, 834934, 868211, 59556, 999598, 91690, 6618, 281602, 820605, 285293, 628576, 270945, 324406, 931454, 673940, 654139, 73564, 398866, 919347, 477433, 901351, 365641, 804970, 790900, 802491, 956915, 475800, 437686, 660974};
    int dayLength = 341844;
    int openTime = 292157;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 28636138;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> forms = {204601, 59845, 241179, 683580, 432229, 481142, 545516, 157725, 887958, 641638, 967318, 294474, 204690, 939436, 865371, 621264, 992791, 450636, 881327, 662510, 521546, 291067, 396210, 594769, 651912, 150560, 795124, 459669, 920663, 893647, 387960, 901898, 592691, 914575, 338992, 621035, 783558, 890262, 539387, 323495, 213224, 112198, 33838, 802395, 924003, 998521, 266952, 804757, 592945, 348849};
    int dayLength = 814267;
    int openTime = 744856;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 28281932;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> forms = {402107, 29797, 453353, 650751, 913562, 247100, 715556, 540218, 18584, 154120, 392619, 573713, 506350, 39185, 622131, 91649, 63238, 398347, 214939, 241080, 854970, 955230, 438133, 281107, 223443, 550685, 511939, 421087, 573322, 659726, 868726, 495963, 631433, 753255, 630512, 112756, 608875, 766862, 881538, 925190, 412342, 541528, 650606, 400480, 212711, 436937, 389733, 279038, 538853, 949401};
    int dayLength = 748489;
    int openTime = 4792;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 43061188;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> forms = {925194, 215404, 422507, 922930, 284897, 515864, 752589, 181362, 927459, 629282, 295648, 51852, 719864, 230144, 281286, 540655, 670651, 931799, 810896, 275128, 170100, 153086, 7808, 918005, 817054, 822073, 393735, 205027, 545443, 841981, 539846, 81712, 406810, 582897, 329488, 532919, 30095, 652137, 139174, 347786, 548667, 472748, 57017, 64867, 470662, 419888, 531883, 975986, 713802, 158488};
    int dayLength = 634188;
    int openTime = 367021;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 25665397;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> forms = {972753, 407739, 275424, 725649, 873558, 878047, 64342, 217069, 579904, 52856, 216210, 833557, 768297, 811437, 659556, 754276, 382683, 428562, 918350, 213354, 106769, 210734, 243904, 55842, 201522, 476534, 154014, 687675, 703896, 312400, 902008, 862738, 597517, 951824, 233807, 551860, 487499, 577276, 55190, 238688, 71675, 396938, 759278, 605570, 927031, 238624, 42279, 908409, 588103, 345042};
    int dayLength = 629637;
    int openTime = 284048;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 29075896;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> forms = {335142, 960167, 330744, 227720, 682941, 166804, 790241, 106508, 608422, 457534, 486738, 935930, 81769, 11642, 210510, 705055, 569536, 923024, 440004, 584569, 419350, 334644, 214360, 940279, 417027, 3529, 723865, 704052, 537297, 645225, 777866, 80959, 30779, 516247, 88797, 843156, 458023, 161160, 245043, 501411, 364081, 459363, 873436, 743432, 202723, 458941, 502299, 979216, 192181, 695067};
    int dayLength = 294433;
    int openTime = 177362;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 24548028;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> forms = {23504, 680884, 563153, 542065, 446607, 669162, 10170, 913494, 926524, 312599, 255135, 347251, 541710, 577789, 348978, 457672, 6320, 644436, 644627, 204866, 323709, 25408, 192661, 427453, 608508, 810967, 469496, 391817, 266087, 994910, 950382, 534880, 151721, 445194, 400089, 793523, 836826, 440131, 758155, 729055, 3203, 590812, 180932, 451952, 406752, 874460, 587702, 563235, 936472, 352566};
    int dayLength = 277059;
    int openTime = 70854;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 28766786;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> forms = {358471, 53908, 995005, 681306, 174644, 99399, 601507, 318728, 605593, 729495, 836074, 344750, 720929, 151544, 481456, 42557, 927076, 846674, 953866, 213967, 914475, 688823, 189175, 333554, 908402, 588721, 607017, 842532, 953440, 212209, 625026, 484052, 468624, 543326, 185619, 389021, 840202, 165198, 516830, 420942, 412298, 65864, 348948, 795429, 355191, 809469, 627095, 220940, 120300, 482648};
    int dayLength = 163320;
    int openTime = 22701;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 28263490;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> forms = {358577, 333867, 432121, 670396, 876418, 64892, 850570, 398285, 473222, 733889, 103759, 759495, 619736, 457439, 507736, 534856, 349633, 523629, 221287, 816155, 693178, 201902, 499117, 781568, 291245, 684762, 720460, 901988, 432179, 907157, 339797, 799395, 548184, 349557, 769098, 982860, 109713, 63423, 505755, 142493, 135243, 844264, 421356, 611842, 135776, 114520, 800973, 326553, 449366, 142818};
    int dayLength = 366144;
    int openTime = 57967;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 32521282;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> forms = {166249, 948173, 69366, 937668, 476866, 721421, 196049, 242882, 491067, 295945, 16545, 122696, 632412, 623061, 770474, 982053, 856096, 735993, 921820, 337811, 580912, 664616, 283992, 117380, 564198, 60232, 357745, 100945, 564042, 250991, 149863, 331915, 547543, 84450, 360749, 900205, 214326, 574487, 551971, 948007, 829056, 564596, 954204, 593748, 114879, 203406, 910233, 188355, 12781, 490473};
    int dayLength = 446090;
    int openTime = 99477;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 30960139;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> forms = {547956, 801789, 207122, 866764, 614315, 420206, 599555, 323953, 694365, 41682, 899998, 587629, 395140, 937710, 479763, 660159, 385864, 122424, 26181, 494355, 107269, 499605, 202374, 113928, 402882, 719580, 467798, 21930, 278458, 347473, 620457, 338614, 386838, 635242, 413277, 936283, 124527, 965515, 753285, 463479, 974031, 804749, 237027, 242838, 425072, 189426, 854633, 206583, 2811, 278449};
    int dayLength = 600375;
    int openTime = 295734;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 26870136;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> forms = {599560, 49326, 423392, 521057, 418148, 835266, 851619, 261334, 775749, 100208, 439669, 220450, 511575, 866221, 577845, 592882, 545970, 789024, 982261, 952677, 698592, 90206, 713912, 671495, 613530, 457515, 108205, 821399, 562060, 437439, 709111, 577600, 126987, 774847, 281575, 974690, 182628, 113919, 664831, 392266, 818000, 191301, 671089, 66484, 821751, 874184, 214301, 203792, 426100, 145452};
    int dayLength = 62485;
    int openTime = 35361;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 25958633;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> forms = {63376, 769799, 369243, 536511, 709316, 488989, 701473, 108317, 525819, 414310, 493959, 295874, 28941, 591750, 631903, 345418, 294340, 379155, 832299, 545861, 655001, 413970, 694748, 170158, 829686, 7802, 448852, 68725, 23350, 676782, 575395, 878516, 40223, 811653, 723214, 568317, 914029, 868997, 613763, 218250, 583626, 218595, 65764, 512969, 708365, 610244, 396869, 469081, 484290, 100030};
    int dayLength = 117029;
    int openTime = 28036;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 24845628;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> forms = {858274, 370710, 85366, 379919, 12949, 613762, 376922, 554911, 692533, 670503, 38818, 150679, 730062, 54747, 138127, 138882, 9237, 20837, 658644, 529438, 521400, 148855, 82514, 544024, 439117, 811449, 915098, 474447, 932384, 776448, 800366, 320463, 710377, 727633, 964799, 993110, 240338, 749793, 833774, 929299, 302837, 121176, 907022, 250913, 522843, 692618, 199712, 913102, 971132, 853371};
    int dayLength = 782677;
    int openTime = 493143;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 28285596;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> forms = {221380, 440034, 462350, 869934, 75020, 625381, 43550, 713772, 111453, 844697, 321606, 140191, 73776, 956162, 715063, 432262, 473071, 729816, 398417, 526348, 274611, 930944, 115945, 65169, 810438, 469901, 881023, 37538, 773922, 822664, 512387, 201276, 309553, 357924, 637850, 547659, 922697, 98696, 124753, 832176, 234168, 193928, 27628, 478326, 198261, 46123, 232605, 707675, 63529, 902502};
    int dayLength = 197061;
    int openTime = 48977;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 25048001;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> forms = {477040, 159902, 378037, 575784, 240977, 740009, 91502, 726204, 684743, 190156, 372322, 414789, 344443, 912061, 494388, 959792, 319558, 276066, 269939, 472858, 900467, 580239, 583138, 787795, 397178, 919819, 993843, 307416, 5700, 356363, 1414, 494933, 846828, 288179, 661998, 635943, 399035, 247579, 771435, 834717, 226987, 350279, 598064, 887924, 661092, 626413, 431773, 552539, 346818, 523955};
    int dayLength = 563461;
    int openTime = 542859;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 25320433;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> forms = {195916, 860013, 720359, 781624, 244028, 825249, 735288, 885307, 361021, 374535, 228631, 500643, 769576, 765120, 98391, 260748, 190916, 87844, 895800, 577094, 536718, 207994, 812460, 578892, 432685, 543285, 335381, 417549, 407420, 276283, 829508, 604838, 105797, 535074, 751419, 236452, 244799, 717488, 224300, 187590, 156245, 143833, 166775, 771960, 149218, 488964, 237806, 77977, 426604, 939909};
    int dayLength = 81171;
    int openTime = 42066;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 23287585;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> forms = {461040, 575843, 800215, 415114, 379605, 444819, 670556, 226438, 484278, 415866, 697651, 159045, 846684, 330734, 84831, 90775, 747585, 69941, 131918, 900856, 420045, 816322, 458469, 899541, 629531, 458174, 468981, 553548, 401651, 255485, 269758, 842603, 168785, 297156, 827698, 805679, 998748, 500488, 966195, 521734, 13102, 212848, 799441, 906573, 80147, 199697, 840081, 572049, 323904, 677808};
    int dayLength = 967265;
    int openTime = 124659;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 43863306;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> forms = {350, 636, 897, 298, 829, 877, 624, 131, 778, 590, 493, 80, 25, 693, 29, 764, 193, 381, 143, 320, 94, 192, 39, 467, 397, 542, 690, 355, 598, 595, 607, 927, 228, 638, 459, 528, 950, 762, 931, 520, 890, 311, 709, 777, 196, 576, 62, 805, 802, 782};
    int dayLength = 941;
    int openTime = 746;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 25970;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> forms = {51, 923, 973, 424, 729, 999, 158, 980, 908, 742, 356, 879, 34, 247, 124, 316, 919, 629, 470, 293, 241, 336, 605, 658, 502, 107, 750, 565, 763, 167, 954, 816, 470, 373, 820, 788, 803, 320, 801, 84, 162, 320, 824, 638, 190, 447, 693, 784, 951, 103};
    int dayLength = 247;
    int openTime = 164;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 27907;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> forms = {240, 127, 627, 177, 559, 389, 334, 740, 540, 95, 494, 475, 129, 319, 56, 184, 77, 520, 274, 930, 374, 298, 642, 461, 562, 78, 700, 250, 229, 784, 895, 210, 453, 159, 888, 599, 664, 709, 188, 810, 866, 629, 208, 701, 739, 815, 332, 393, 158, 486};
    int dayLength = 627;
    int openTime = 94;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 35885;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> forms = {530, 721, 883, 11, 572, 892, 962, 948, 378, 239, 54, 908, 826, 812, 956, 612, 606, 813, 609, 999, 440, 210, 354, 878, 668, 599, 999, 98, 38, 467, 995, 20, 300, 313, 180, 832, 854, 425, 248, 196, 406, 302, 476, 724, 100, 41, 535, 713, 149, 404};
    int dayLength = 381;
    int openTime = 26;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 35198;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> forms = {941, 887, 635, 550, 732, 13, 256, 890, 613, 103, 369, 128, 367, 295, 660, 996};
    int dayLength = 824;
    int openTime = 242;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 10822;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> forms = {25, 500, 630, 2500, 1000, 350, 22, 58, 100, 400, 500, 5000};
    int dayLength = 1440;
    int openTime = 360;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 16945;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> forms = {2, 2, 2, 2};
    int dayLength = 24;
    int openTime = 1;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> forms = {25, 500, 630, 2500, 1000, 350, 22, 58, 100, 400, 500, 5000, 5000, 6000};
    int dayLength = 1450;
    int openTime = 360;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 28865;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> forms = {386291, 290658, 179663, 994703, 477306, 352469, 989725, 782832, 147750, 215895, 164052, 919433, 5166, 393507, 358604, 319473, 441608, 28271, 996323, 908552, 817510, 601232, 445385, 357108, 275754, 92737, 855739, 131797, 875150, 420453, 675673, 851897, 592954, 814385, 246169, 916093, 887586, 157222, 27985, 373788, 935608, 217798, 954921, 55138, 361104, 136088, 126416, 45290, 260959, 480070};
    int dayLength = 553640;
    int openTime = 382472;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 23890578;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> forms = {25, 500, 630, 2500, 1000, 350, 22, 58, 100, 400, 500, 5000};
    int dayLength = 1440;
    int openTime = 37;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 20148;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> forms = {21312, 34534, 124434, 254356, 345477, 12367, 152457, 12354, 2450, 7654, 32456, 45823, 949999, 214312, 344534, 142834, 25356, 344877, 123467, 142457, 184354, 245480, 76454, 32486, 45623, 99999, 28312, 34534, 12384, 25356, 34577, 12367, 12857, 123544, 24450, 76354, 32456, 456323, 999999, 23312, 34834, 12334, 25356, 34277, 12367, 12457, 12354, 2450, 7654, 325456};
    int dayLength = 935235;
    int openTime = 334555;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 10944111;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> forms = {2, 2, 1};
    int dayLength = 24;
    int openTime = 1;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> forms = {41, 18467, 6334, 26500, 19169, 15724, 11478, 29358, 26962, 24464, 5705, 28145, 23281, 16827, 9961, 491, 2995, 11942, 4827, 5436, 32391, 14604, 3902, 153, 292, 12382, 17421, 18716, 19718, 19895, 5447, 21726, 14771, 11538, 1869, 19912, 25667, 26299, 17035, 9894, 28703, 23811, 31322, 30333, 17673, 4664, 15141, 7711, 28253, 6868};
    int dayLength = 1000000;
    int openTime = 123456;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5084900;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> forms = {25, 500, 630, 250000, 1000, 350, 22, 58, 1, 400, 500000, 5000};
    int dayLength = 1440;
    int openTime = 360;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 762865;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> forms = {999999, 996999, 999499, 999399, 999199, 999969, 999099, 999969, 1000000, 999999, 999999, 1, 3, 214215, 999999, 996999, 999499, 999399, 999199, 999969, 999099, 999969, 1000000, 999999, 999999, 1, 3, 214215, 999999, 996999, 999499, 999399, 999199, 999969, 999099, 999969, 1000000, 999999};
    int dayLength = 1000000;
    int openTime = 1000000;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 32410829;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> forms = {12, 2, 9, 4, 10};
    int dayLength = 12;
    int openTime = 6;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> forms = {446468, 411850, 481085, 941043, 559453, 388802, 364571, 313292, 116166, 65005, 316340, 286473, 390194, 119612, 928013, 894594, 129836, 441904, 590690, 813863, 900731, 261402, 979707, 6842, 387112, 489122, 306939, 707619, 423883, 912934, 278813, 404106, 60988, 948, 396348, 449303, 907730, 9469, 596733, 618536, 985720, 383208, 23414, 922684, 119378, 399158, 774602, 648365, 315241, 162252};
    int dayLength = 100000;
    int openTime = 50000;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 23230446;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> forms = {6, 4, 3};
    int dayLength = 8;
    int openTime = 7;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> forms = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int dayLength = 999999;
    int openTime = 1;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 73999928;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> forms = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int dayLength = 1000;
    int openTime = 1;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 50000000;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> forms = {4, 20};
    int dayLength = 24;
    int openTime = 8;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> forms = {4, 1, 5};
    int dayLength = 10;
    int openTime = 4;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> forms = {5, 5, 5};
    int dayLength = 24;
    int openTime = 8;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> forms = {2, 1, 3};
    int dayLength = 10;
    int openTime = 2;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> forms = {383, 886, 777, 915, 793, 335, 386, 492, 649, 421, 362, 27, 690, 59, 763, 926, 540, 426, 172, 736, 211, 368, 567, 429, 782, 530, 862, 123, 67, 135, 929, 802, 22, 58, 69, 167, 393, 456, 11, 42, 229, 373, 421, 919, 784, 537, 198, 324, 315, 370};
    int dayLength = 2300;
    int openTime = 1500;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 27369;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> forms = {999929, 992999, 999999, 999992};
    int dayLength = 1000000;
    int openTime = 1000000;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3992919;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> forms = {1};
    int dayLength = 1;
    int openTime = 1;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> forms = {5, 2, 2};
    int dayLength = 24;
    int openTime = 4;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> forms = {999999, 999997, 1989, 7, 15, 199993, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 999995, 123456, 123456, 123456, 123456, 543126, 543126, 543126, 543126, 543126, 543126, 543126, 543126, 543126, 543126, 543126, 543126, 543126, 543126, 543126, 12312};
    int dayLength = 31;
    int openTime = 10;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 33855246;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> forms = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 7, 1, 2, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 8, 9, 6, 5, 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6, 1, 2, 500000};
    int dayLength = 1000000;
    int openTime = 499999;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 500181;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> forms = {58284, 4285, 275822, 58382, 100000, 1, 1, 28, 5726, 4582, 5725, 8, 1, 2, 5, 1825, 28572};
    int dayLength = 10000;
    int openTime = 1000;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 577284;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> forms = {1000000, 1000000, 1000000, 1000000};
    int dayLength = 999;
    int openTime = 1;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4000997;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> forms = {10, 52, 11, 100, 34, 52, 90, 12, 330, 402, 526, 988, 155, 33, 12, 312, 1, 25, 3, 58, 44, 98, 55, 55, 65, 85, 88, 99, 547, 6, 3, 2, 1, 58, 5, 5, 6, 8, 8, 8, 9, 45, 65, 66, 54, 25, 88, 95, 65, 645};
    int dayLength = 396;
    int openTime = 215;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 6603;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> forms = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int dayLength = 999999;
    int openTime = 500000;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 50000000;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> forms = {1, 1, 1, 2};
    int dayLength = 24;
    int openTime = 3;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> forms = {3434, 2332, 21223, 122, 1, 232, 1244, 5334, 1, 1, 1, 1, 1, 1, 1, 1, 2, 12, 2, 2, 2, 2, 3, 3, 3, 4, 4554, 34545, 34443, 3223, 22222, 345644, 32334, 33425, 66754};
    int dayLength = 100;
    int openTime = 50;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 611284;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> forms = {999999, 999999, 99999, 999999, 99999, 9999, 9999, 999, 99999, 9999, 999999};
    int dayLength = 1000000;
    int openTime = 99999;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 6009996;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> forms = {914, 550, 84, 947, 309, 277, 84, 82, 523, 278, 57};
    int dayLength = 452;
    int openTime = 382;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4105;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> forms = {1, 25, 2};
    int dayLength = 24;
    int openTime = 3;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> forms = {200, 200, 200};
    int dayLength = 3;
    int openTime = 2;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> forms = {500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001, 500001};
    int dayLength = 1000000;
    int openTime = 500000;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 49000001;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> forms = {100, 9500, 999};
    int dayLength = 10000;
    int openTime = 1000;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 10599;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> forms = {25, 500, 630, 2500, 1000, 350, 22, 58, 100, 400, 500, 5000, 1131, 131, 1313, 133, 133, 133, 343, 344};
    int dayLength = 1347;
    int openTime = 131;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 26834;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> forms = {4, 8, 3};
    int dayLength = 1000000;
    int openTime = 10000;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> forms = {10, 4, 5, 2};
    int dayLength = 4;
    int openTime = 2;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> forms = {25, 25, 500, 630, 2500, 1000, 350, 22, 58, 100, 400, 500, 5000};
    int dayLength = 1440;
    int openTime = 360;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 16970;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> forms = {1000000};
    int dayLength = 24;
    int openTime = 1;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> forms = {2, 2, 4, 1};
    int dayLength = 7;
    int openTime = 3;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> forms = {2, 1, 3, 5};
    int dayLength = 10;
    int openTime = 5;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> forms = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int dayLength = 734234;
    int openTime = 334212;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 54796402;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> forms = {4, 32, 49, 48, 16, 4, 48};
    int dayLength = 24;
    int openTime = 8;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 216;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> forms = {2, 2, 5};
    int dayLength = 4;
    int openTime = 2;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> forms = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int dayLength = 1;
    int openTime = 1;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 50000000;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> forms = {1000000};
    int dayLength = 1;
    int openTime = 1;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> forms = {1, 5, 4};
    int dayLength = 12;
    int openTime = 7;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> forms = {1, 1, 1, 6, 1};
    int dayLength = 24;
    int openTime = 8;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> forms = {25, 25, 25, 25, 25, 500, 630, 2500, 1000, 350, 22, 58, 100, 400, 500, 5000};
    int dayLength = 1440;
    int openTime = 360;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 17045;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> forms = {3, 2, 2, 5};
    int dayLength = 10;
    int openTime = 4;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> forms = {25, 500, 630, 2500, 1000, 350, 22, 58, 100, 400, 500, 5000, 6788, 78985, 555, 555555, 5555, 5555, 5555, 55555, 5555, 2345};
    int dayLength = 1000000;
    int openTime = 999999;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 733088;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> forms = {1, 2, 40, 40};
    int dayLength = 7;
    int openTime = 4;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> forms = {1, 1, 10};
    int dayLength = 13;
    int openTime = 3;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> forms = {4, 3, 4, 5};
    int dayLength = 24;
    int openTime = 8;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> forms = {100, 5, 8, 23, 12, 14, 24, 5};
    int dayLength = 36;
    int openTime = 16;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> forms = {2, 4, 16};
    int dayLength = 24;
    int openTime = 8;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> forms = {4, 20, 4};
    int dayLength = 24;
    int openTime = 8;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> forms = {1, 1000000, 1000000, 1000000, 1000000};
    int dayLength = 2;
    int openTime = 1;
    Embassy* pObj = new Embassy();
    clock_t start = clock();
    int result = pObj->visaApplication(forms, dayLength, openTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4000001;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9906197&rd=13505&pm=9895
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <list> 
using namespace std; 
 
#define PB push_back 
#define MP make_pair 
#define SZ(v) ((int)(v).size()) 
#define FOR(i,a,b) for(int i=(a);i<(b);++i) 
#define REP(i,n) FOR(i,0,n) 
#define FORE(i,a,b) for(int i=(a);i<=(b);++i) 
#define REPE(i,n) FORE(i,0,n) 
#define FORSZ(i,a,v) FOR(i,a,SZ(v)) 
#define REPSZ(i,v) REP(i,SZ(v)) 
typedef long long ll; 
 
 
class Embassy { 
public:   
  int visaApplication(vector <int> forms, int len, int open) { 
    int ret=INT_MAX; 
    REP(start,len) { 
      int at=start; 
      REPSZ(i,forms) { 
        at+=forms[i]; 
        int mod=at%len; 
        if(mod>open) at+=len-mod; 
      } 
      ret<?=at-start; 
    } 
    return ret; 
  }   
};

********************************************************************************
*******************************************************************************/