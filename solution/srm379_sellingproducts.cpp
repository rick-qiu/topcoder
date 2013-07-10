/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8440
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

class SellingProducts {
public:
    int optimalPrice(vector<int> price, vector<int> cost);
};

int SellingProducts::optimalPrice(vector<int> price, vector<int> cost) {
    int ret;
    return ret;
}


int test0() {
    vector<int> price = {13, 22, 35};
    vector<int> cost = {0, 0, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> price = {13, 22, 35};
    vector<int> cost = {5, 15, 30};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> price = {13, 22, 35};
    vector<int> cost = {15, 30, 40};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> price = {10, 10, 20, 20, 5};
    vector<int> cost = {1, 5, 11, 15, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> price = {13, 17, 14, 30, 19, 17, 55, 16};
    vector<int> cost = {12, 1, 5, 10, 3, 2, 40, 19};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> price = {4, 9, 4, 2, 2};
    vector<int> cost = {8, 0, 0, 6, 2};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> price = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> cost = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> price = {467293, 358484, 827680, 435564, 382129, 726324, 298368, 333351, 868294, 859686, 34874, 942224, 728480, 548236, 840210, 438682, 82811, 658065, 385348, 829507, 289175, 573376, 724025, 337450, 908264, 946084, 590862, 536924, 349689, 20752, 733772, 787227, 483159, 513496, 248919, 8620, 484898, 503134, 796218, 157463, 179152, 887341, 55056, 432994, 997441, 476335, 509403, 788854, 284906, 931337};
    vector<int> cost = {166214, 109881, 354022, 339321, 227020, 663828, 196547, 106519, 388609, 480446, 11258, 196693, 335701, 288858, 517228, 228904, 742, 473396, 275692, 737682, 170767, 172934, 36341, 245983, 729412, 138480, 144401, 363441, 267621, 13492, 21474, 116055, 479128, 226755, 215419, 4022, 215803, 211286, 524844, 87053, 112047, 94218, 5446, 389390, 690167, 386352, 310767, 176841, 113475, 119247};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 724025;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> price = {904795, 387026, 429038, 621091, 585174, 100975, 615344, 761417, 13979, 983500, 72033, 507926, 728778, 78911, 330061, 541048, 669817, 324430, 154189, 101495, 189846, 34282, 255113, 562426, 2091, 409474, 242046, 335239, 854157, 703578, 304627, 114421, 967306, 679524, 56129, 273573, 50443, 499374, 626573, 690107, 325311, 313879, 87728, 409424, 355547, 98031, 584830, 195611, 11977, 977539};
    vector<int> cost = {310420, 275381, 289102, 92995, 290939, 99132, 569572, 409224, 3614, 853902, 54318, 6472, 526302, 1700, 125364, 214725, 479897, 208846, 123112, 39569, 97935, 20059, 250777, 72205, 470, 65802, 79193, 101010, 184875, 357846, 35693, 107312, 435002, 96957, 47422, 10384, 23479, 16808, 496305, 604665, 193253, 282590, 1759, 23559, 167594, 47802, 70530, 131426, 10279, 191658};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 499374;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> price = {310705, 173005, 702553, 287205, 335748, 104156, 543902, 411464, 82930, 154939, 493581, 857422, 160199, 305681, 418483, 343183, 446844, 335636, 718991, 853089, 87590, 577268, 797753, 94547, 582837, 987617, 692312, 580317, 589760, 250879, 511665, 41477, 59471, 651320, 646350, 328714, 831799, 297777, 5996, 390148, 665777, 187642, 419963, 288760, 488490, 153834, 691881, 917614, 924258, 61543};
    vector<int> cost = {139363, 121111, 413123, 116610, 172374, 51847, 37518, 155048, 50078, 150668, 72718, 408512, 91795, 5393, 301089, 18223, 200209, 24778, 380083, 757660, 69555, 548494, 224033, 11761, 164184, 648562, 586065, 350687, 83595, 196616, 14656, 25681, 47894, 388496, 351074, 306632, 425499, 262254, 3434, 33585, 78028, 82418, 48092, 98245, 371807, 60726, 55130, 245129, 230607, 31736};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 488490;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> price = {603875, 216153, 220035, 500054, 793572, 724531, 897981, 7609, 599878, 430889, 444382, 991458, 321402, 229627, 584934, 781473, 179044, 252396, 800867, 263880, 707055, 253905, 911167, 689308, 668959, 850939, 671027, 198120, 949934, 644711, 75549, 450678, 523576, 655894, 773878, 408913, 674886, 161884, 178978, 398677, 624052, 265836, 765308, 79916, 102813, 452849, 599214, 927097, 14077, 120382};
    vector<int> cost = {591991, 443889, 579916, 906579, 770798, 587746, 569253, 311106, 178865, 169759, 646510, 758444, 148407, 7905, 662700, 73065, 787007, 222692, 838841, 374393, 809822, 390961, 894289, 716049, 768959, 427118, 223893, 498945, 761190, 301931, 688418, 834297, 625187, 270144, 662449, 609710, 147868, 22657, 102137, 47825, 445377, 175455, 483864, 966080, 227521, 308711, 815605, 751818, 505979, 876484};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 599878;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> price = {511598, 858102, 167675, 651767, 427735, 990621, 231261, 296937, 527340, 182837, 301344, 400565, 701247, 598297, 134064, 258752, 153804, 986749, 140983, 83091, 948725, 146474, 57384, 35874, 957007, 961181, 693047, 308881, 889531, 356177, 32844, 145649, 976604, 906489, 564366, 642430, 49191, 231967, 722902, 108226, 857661, 400709, 795598, 910050, 898489, 974096, 95915, 259496, 530792, 158123};
    vector<int> cost = {294728, 669658, 715962, 244287, 382175, 972671, 616817, 696882, 402859, 631279, 421681, 104959, 417452, 116487, 483346, 98469, 153183, 546360, 232360, 604635, 270973, 982960, 614853, 826278, 19252, 269509, 983591, 409455, 619555, 345567, 256332, 688461, 949418, 211886, 10499, 658927, 54895, 980728, 295462, 496986, 721529, 787276, 217128, 717215, 312104, 501097, 99378, 351029, 164538, 299245};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 857661;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> price = {951769};
    vector<int> cost = {0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 951769;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> price = {1426, 6};
    vector<int> cost = {82333, 238478};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
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
    vector<int> price = {54167, 5563, 9};
    vector<int> cost = {546091, 35, 6};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 5563;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> price = {1, 74, 2037, 61012};
    vector<int> cost = {2, 730841, 484, 548};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 61012;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> price = {8460, 91033, 8976, 6, 8};
    vector<int> cost = {7, 29, 138, 3257, 17};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 91033;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> price = {2040, 97, 9076, 842268, 3, 4120};
    vector<int> cost = {1201, 4339, 115804, 441226, 33, 20};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 842268;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> price = {62249, 225020, 44, 58879, 27, 5047, 934};
    vector<int> cost = {99081, 555, 594, 704983, 33218, 1, 77188};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 225020;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> price = {897316, 496362, 7575, 10, 68573, 2, 267670, 9784};
    vector<int> cost = {26989, 3964, 38, 2, 364, 0, 3, 526};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 496362;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> price = {66, 60, 37100, 3, 57, 85985, 838713, 9, 34468};
    vector<int> cost = {65, 8, 213507, 907, 167127, 5512, 60344, 89017, 79};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 838713;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> price = {85324, 4, 17999, 21499, 5, 6233, 1, 54792, 32, 31905};
    vector<int> cost = {1551, 9852, 93188, 7, 3, 6187, 5339, 2491, 767, 8};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 54792;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> price = {5896, 8, 904387, 39456, 4450, 639713, 90998, 227027, 9, 576, 6};
    vector<int> cost = {8735, 214, 9, 658917, 23773, 693, 9, 935425, 947960, 527, 48028};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 639713;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> price = {42798, 4984, 178887, 33578, 165782, 15118, 686169, 61452, 923443, 931478, 943, 405};
    vector<int> cost = {13661, 755, 7, 34, 1, 4, 328427, 149998, 241, 621, 41734, 952};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 923443;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> price = {36, 400, 95, 1, 9, 1033, 7, 1, 22750, 17, 9, 2716, 136};
    vector<int> cost = {48591, 2455, 65, 0, 2, 1364, 643, 27, 76, 3365, 175, 4943, 75390};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 22750;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> price = {3, 704, 8408, 96, 62, 2066, 1, 84196, 10, 133037, 33535, 8, 60, 6};
    vector<int> cost = {962104, 919, 868, 15, 60528, 4, 10783, 51, 3036, 412219, 4, 522, 938, 92};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 84196;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> price = {58, 10, 3067, 74, 47848, 491, 740, 8975, 15601, 91, 895, 29331, 4, 5506, 5575};
    vector<int> cost = {1, 3, 968, 799918, 6, 93, 32, 94, 94622, 16, 7, 3753, 75092, 7614, 54013};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 29331;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> price = {44407, 5587, 771, 33, 10, 902, 81, 645, 805, 8, 70215, 70718, 9385, 304215, 7, 59157};
    vector<int> cost = {6, 66356, 7, 5300, 930, 802, 8247, 271642, 287, 575, 958, 1888, 1166, 27, 468, 39};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 304215;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> price = {329, 684, 447, 6, 69461, 51004, 9303, 6, 6125, 338, 54, 382, 7, 1099, 679, 162848, 8};
    vector<int> cost = {3487, 3, 449, 12281, 81984, 60068, 69, 41176, 697, 26040, 297, 6381, 60, 70, 501, 763, 933};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 162848;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> price = {4175, 672, 745, 93, 38220, 396, 2, 411, 39, 135, 639031, 84, 151036, 69, 9, 6271, 10, 7};
    vector<int> cost = {8, 537552, 59746, 387818, 31, 58, 940, 70465, 103110, 3, 34126, 55, 273, 5, 2, 58439, 43, 3};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 639031;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> price = {76, 73, 657714, 935, 8, 91715, 3527, 8, 2, 96, 4638, 54963, 13872, 53194, 86175, 4, 78, 2, 715};
    vector<int> cost = {9, 9, 69, 39, 735114, 0, 90144, 11416, 600368, 8690, 423775, 760, 1445, 925, 92396, 9330, 193189, 7711, 41};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 657714;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> price = {355, 705, 993, 44822, 62716, 77, 6, 36, 49, 7, 8, 681, 1967, 5, 8, 17, 6900, 174, 6, 820229};
    vector<int> cost = {77, 4554, 33142, 3715, 20, 3, 979, 30, 6178, 43, 8, 2110, 313, 258265, 68618, 4, 31187, 9, 79, 224688};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 820229;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> price = {67327, 250, 434178, 90999, 366, 935016, 5260, 27, 1, 238123, 2, 89, 519, 38460, 289149, 295, 685730, 6, 154, 342134, 2};
    vector<int> cost = {176445, 356387, 55, 6059, 530, 3, 77377, 5, 37, 97, 5, 29, 369, 676593, 506, 8, 146208, 5343, 855, 10, 8082};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 289149;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> price = {34266, 543, 830, 8, 689, 7149, 8, 848, 6, 828, 6, 4, 1332, 6, 48, 2049, 836, 308, 28, 132445, 29, 1};
    vector<int> cost = {572, 3111, 16733, 108, 10, 86, 7, 0, 3, 8, 56, 310, 3, 51819, 916, 68414, 6, 620, 328, 84525, 63, 4};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 132445;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> price = {435151, 795629, 755, 20, 2, 56, 36, 61228, 95, 1833, 80, 309138, 269696, 5, 8, 504, 14410, 654, 56801, 94, 530, 2, 9404};
    vector<int> cost = {40781, 3, 909, 407168, 190999, 391, 28246, 15640, 993, 4519, 926944, 53113, 47754, 305, 0, 157, 87, 9909, 5, 66, 46959, 0, 22612};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 269696;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> price = {1, 293368, 2563, 4, 64329, 824559, 3738, 8, 349876, 791362, 1222, 4, 733766, 5, 767, 453, 2, 19203, 20, 6, 9369, 47957, 255, 59100};
    vector<int> cost = {92293, 50465, 84350, 138, 9, 8855, 16470, 6, 222, 169612, 350, 9973, 38, 843913, 60, 693, 63591, 3913, 1460, 354877, 6896, 45, 14285, 1444};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 733766;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> price = {183, 8035, 83, 5190, 997, 4428, 7, 50, 4520, 1969, 8766, 85, 82958, 3891, 458173, 74535, 733879, 190965, 410, 2348, 1306, 469, 197, 23, 7139};
    vector<int> cost = {682, 32, 555186, 6, 983614, 59387, 90006, 2391, 8950, 6, 42, 62, 13, 46, 28765, 8025, 753, 5, 520, 95233, 3170, 826228, 5497, 793397, 7423};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 458173;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> price = {830814, 4, 10123, 633276, 1, 306684, 37, 224661, 37, 380, 40, 3, 1907, 836, 733, 7, 566, 3056, 138722, 7561, 897, 247379, 82790, 9334, 54, 4};
    vector<int> cost = {64238, 9, 903849, 44863, 57, 0, 403, 3483, 2573, 715964, 805, 8, 8, 222, 3778, 72159, 718, 2416, 670436, 9066, 60, 71833, 87905, 716752, 59717, 760580};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 633276;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> price = {2, 847, 904080, 14, 58, 5702, 835, 14579, 21650, 58, 5946, 75, 3, 9243, 714, 748729, 523134, 19984, 225, 46, 647410, 468, 6, 5, 2, 14, 6};
    vector<int> cost = {8, 26, 4, 5005, 9298, 85235, 22, 6, 810, 53, 287017, 725, 4226, 3401, 4, 5264, 68, 64735, 584, 6396, 9, 8145, 91464, 7, 93677, 4360, 96};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 523134;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> price = {282, 76, 44, 53, 993, 9, 64, 10, 31, 720802, 44, 2, 77284, 4004, 8, 81513, 99278, 4796, 8693, 17944, 1, 1311, 864, 36, 500513, 743257, 560, 169};
    vector<int> cost = {47804, 2462, 68432, 69940, 6, 97122, 31042, 83727, 312, 4, 831301, 602, 0, 7, 48, 129, 913884, 30, 62, 1547, 8, 681, 256, 5, 3, 809, 6, 66607};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 500513;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> price = {72, 80, 2, 10, 3290, 31455, 2, 100, 412, 8901, 573581, 6774, 46754, 14297, 492, 1027, 4849, 34, 22045, 4890, 503, 5, 34426, 20, 811, 499, 27931, 22, 3294};
    vector<int> cost = {788832, 751765, 678552, 56652, 250, 94427, 11802, 18, 610039, 15193, 8617, 3, 226, 764, 9, 29565, 98, 240058, 6, 58863, 44964, 2, 31, 4551, 5, 39313, 922, 87, 25};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 573581;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> price = {19, 1, 64868, 20, 3288, 256288, 280144, 10, 9809, 55126, 3, 297, 94, 8829, 95, 711031, 469580, 790634, 2959, 18, 8, 9, 213376, 973448, 90, 5, 6885, 85295, 696740, 6};
    vector<int> cost = {630, 6, 1437, 3, 65970, 79, 64, 92086, 8, 790, 2, 24207, 48, 895938, 7, 90672, 111, 48, 944, 369100, 22, 68863, 25817, 836972, 2063, 25, 30181, 212086, 4, 1288};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 696740;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> price = {38, 587, 533633, 112831, 804, 639, 6, 8292, 64437, 10, 352, 736450, 2318, 1, 74456, 4, 6, 56, 3, 43, 2007, 4498, 4, 9, 593231, 4, 2818, 825, 5642, 931107, 2};
    vector<int> cost = {36737, 6, 6, 72170, 458, 8, 8059, 882914, 31, 94, 91, 315990, 743002, 542, 29317, 9154, 9382, 46280, 9213, 309, 48, 6, 365881, 690733, 71589, 6, 320, 57319, 212, 5189, 42269};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 533633;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> price = {70131, 60, 87187, 377326, 4, 94, 4, 61952, 422, 1, 169429, 93117, 8168, 8690, 89, 950, 852276, 777619, 86, 7853, 24, 48166, 70, 258, 213595, 751, 83993, 849586, 41597, 686744, 44876, 506234};
    vector<int> cost = {2635, 2, 231895, 48, 64, 960863, 826, 89574, 76, 40, 259415, 14, 888939, 798, 6406, 7213, 181084, 47071, 640517, 31630, 6461, 763240, 30720, 50, 828, 9541, 9428, 654, 91, 3087, 964300, 727};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 686744;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> price = {8818, 47, 11, 69695, 5763, 49953, 2, 892421, 405, 757110, 977, 5, 429, 462483, 337199, 660, 7086, 512841, 9, 921946, 96561, 3812, 8281, 3, 8, 3, 668, 61, 346, 608, 886, 34, 9};
    vector<int> cost = {85, 4501, 8, 33, 85891, 799029, 5, 208250, 130061, 7, 540, 599, 8973, 0, 26, 9951, 758714, 3, 4790, 2550, 0, 88, 2, 75511, 41462, 88, 7, 946, 32414, 77, 35, 12, 809201};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 462483;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> price = {6655, 12485, 33939, 664604, 899349, 823, 6667, 9, 193, 3172, 6172, 73915, 4390, 458, 16, 491, 66762, 695329, 40578, 40819, 972, 374, 55512, 9, 508589, 3, 691988, 712, 294960, 481, 842, 138274, 325, 1};
    vector<int> cost = {816, 507, 37488, 553635, 488, 72155, 285891, 39, 6858, 709, 484, 1814, 166, 25, 128, 554851, 94228, 744, 25745, 1604, 3035, 1442, 5063, 649, 73, 25, 7806, 9, 48, 817, 4330, 3, 9697, 1474};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 664604;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> price = {4, 2253, 81767, 2125, 958403, 461272, 85, 3318, 197888, 121782, 10, 59, 279, 82772, 62426, 8, 4597, 3747, 57193, 436, 7233, 4013, 12259, 285211, 21013, 8, 66, 796823, 7682, 7, 9982, 68483, 914, 479259, 459};
    vector<int> cost = {1, 657058, 14399, 16599, 208666, 7, 55156, 397, 37, 8, 971, 0, 2137, 53, 2, 4340, 60, 3, 7544, 0, 57, 8527, 8, 255, 77, 815, 440, 119, 46, 4284, 764, 25, 16853, 82300, 81};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 461272;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> price = {2770, 8560, 24, 726, 67443, 276, 281, 19, 388, 6, 21619, 968082, 2889, 57, 8674, 8195, 616437, 1176, 7, 97, 43, 236, 11, 310, 144, 10, 646795, 956, 121801, 2603, 670, 3, 728660, 52997, 54145, 25535};
    vector<int> cost = {9471, 898, 55492, 21026, 80427, 815480, 667316, 435655, 586229, 84, 62, 222219, 6528, 8588, 24, 4905, 87, 35, 796, 892537, 402, 3886, 980, 339, 554, 526482, 1414, 30, 96, 725, 461312, 850503, 94, 9, 6, 89};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 616437;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> price = {3, 313287, 87225, 44, 532, 4907, 44, 67, 8747, 96441, 444, 51941, 169, 3718, 9, 527770, 4, 3618, 419, 10, 9544, 80300, 4, 67, 2, 5, 33511, 295035, 6689, 9253, 45, 72307, 952, 43706, 83, 559161, 920654};
    vector<int> cost = {18205, 605973, 632, 671, 82, 78, 4596, 92, 263081, 517567, 11, 71608, 757, 12, 216, 4, 1, 68589, 3, 48, 67013, 3698, 8, 16, 7518, 136768, 80828, 674898, 42315, 4, 9, 5829, 24, 84, 4178, 4, 122};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 527770;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> price = {503, 34538, 2648, 3625, 12, 11, 1172, 721918, 5812, 4, 73771, 562, 71107, 40799, 7261, 638363, 859, 556823, 67, 2745, 304, 528558, 773287, 69824, 66, 9, 45, 8, 79, 624535, 8889, 8, 18, 5, 43, 42, 58, 92};
    vector<int> cost = {5, 210, 295, 33322, 701, 29418, 8779, 474, 542313, 7244, 96, 7, 110316, 528, 8110, 3, 1032, 29, 494564, 381503, 698635, 106630, 357308, 83004, 7227, 89, 4, 1281, 64902, 235, 2804, 759, 94949, 5, 95670, 1618, 2258, 17};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 528558;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> price = {7, 7431, 33, 89, 9316, 41, 8296, 661936, 58020, 742557, 10, 55002, 7485, 55107, 2, 8407, 26711, 9019, 60, 47957, 1, 9816, 96576, 54163, 71, 5962, 9195, 11736, 488494, 81475, 946103, 707, 838, 27413, 733673, 527, 370, 28, 6};
    vector<int> cost = {21, 1, 2, 26079, 7, 9, 4971, 631, 9513, 47270, 83563, 30316, 5862, 6, 7, 7, 7407, 498, 65, 56014, 82, 53054, 230, 999439, 6412, 661933, 481331, 87, 4, 38166, 1676, 49, 3566, 953, 2248, 55528, 740052, 12, 109};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 661936;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> price = {145, 271, 7, 5442, 888, 817813, 47309, 1, 223, 405968, 74, 181032, 1079, 730, 603767, 4, 45, 6, 825, 178896, 520, 46182, 947, 933, 6, 6, 182, 77, 486, 101, 949420, 4, 60687, 2813, 91694, 66, 2469, 8, 279787, 643};
    vector<int> cost = {964472, 3, 4706, 669, 29, 1702, 2, 37, 3, 69, 263, 372198, 252, 54932, 8396, 17012, 24507, 256621, 6, 0, 350158, 4999, 1, 830, 25225, 407, 9443, 7, 3838, 183933, 74216, 65, 465, 240940, 524634, 50946, 7719, 7831, 63600, 92};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 603767;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> price = {35941, 4, 50, 686417, 8, 7828, 73, 38, 1135, 315, 18, 518126, 75458, 9270, 24502, 6, 126, 2165, 6, 485, 6, 196645, 6, 4, 52534, 9, 1, 2, 91534, 1353, 9440, 565, 5, 612283, 5078, 299267, 444, 7024, 2, 286, 237};
    vector<int> cost = {21096, 268408, 5945, 19625, 98820, 856578, 3021, 8, 676501, 42, 420411, 389308, 4522, 2, 68, 50345, 8443, 71463, 5646, 106, 733, 4272, 699768, 34543, 53604, 28585, 12, 620606, 1, 91, 4871, 0, 5851, 889, 836, 482, 63906, 5713, 62, 4, 4};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 612283;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> price = {3857, 9, 685676, 28, 5288, 18722, 120, 356135, 805, 65357, 5, 4021, 9692, 2, 63682, 3, 9, 4, 469018, 226924, 679, 1, 8, 259660, 6, 857752, 10374, 2483, 984, 327, 581481, 81824, 79976, 461, 28281, 63922, 8, 655630, 89, 3034, 72214, 91};
    vector<int> cost = {40, 3, 4, 1, 26785, 99, 729308, 284818, 12951, 801, 53, 74837, 97106, 2172, 9482, 41, 5592, 86, 288838, 4179, 0, 780, 648, 1, 991796, 742, 544, 945, 2947, 34, 47, 903823, 90994, 40334, 1964, 864, 673, 0, 632, 651617, 139437, 363729};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 581481;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> price = {39, 715, 394, 132950, 466022, 392444, 292220, 4588, 819, 687973, 32, 5, 32487, 47515, 8792, 79778, 5010, 548324, 37101, 9, 4673, 498574, 8982, 7551, 952761, 9, 358563, 8, 33, 9732, 509, 850, 876449, 5573, 8, 84430, 477, 35895, 997, 3, 26827, 4298, 658};
    vector<int> cost = {5600, 2, 5, 757, 52318, 8, 3, 872, 2586, 1, 48630, 992798, 78, 445006, 22610, 93357, 6086, 85458, 95868, 8, 91, 7089, 6, 737, 69530, 357106, 66850, 33521, 749, 232096, 5243, 4, 0, 5515, 95723, 80, 5558, 4, 3, 79219, 33, 8381, 79424};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 358563;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> price = {6793, 144, 335, 23917, 6, 3, 836941, 33, 86, 368117, 381, 600116, 63979, 5, 237465, 5, 446, 327, 69, 607857, 92443, 739005, 70908, 548656, 35, 229, 420, 898452, 45366, 1682, 636358, 189, 990, 833101, 9, 7722, 102, 3, 53692, 69, 828346, 476, 345644, 71020};
    vector<int> cost = {262266, 2, 1892, 53, 78440, 407, 830, 2, 143, 7, 1408, 2, 8699, 4075, 438135, 7, 72, 18727, 6, 10819, 890856, 2241, 17, 8, 719056, 756, 10, 47868, 3260, 698, 43716, 2265, 4903, 14974, 4, 66, 980, 86244, 48069, 1, 415289, 918024, 3852, 405};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 548656;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> price = {898, 3761, 267, 637125, 667, 701, 88954, 13402, 607302, 300, 37, 3, 3, 65490, 9, 4660, 9, 75, 4, 9538, 128, 847904, 4841, 2, 7, 95887, 3, 6552, 4342, 32322, 5, 9, 714853, 84521, 60469, 6, 7, 319, 10, 6567, 853337, 3363, 208, 3601, 411};
    vector<int> cost = {38, 167100, 92675, 108078, 2, 632, 4, 273, 20, 379367, 408, 0, 117, 7204, 996972, 992825, 291, 2969, 3, 75863, 6834, 590865, 5260, 76160, 73725, 19195, 199707, 27832, 10, 7, 2, 7, 1800, 830371, 1296, 73056, 4705, 88413, 19, 6, 9573, 55576, 2, 43722, 694957};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 607302;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> price = {57, 70, 2373, 639263, 421, 160, 40, 845, 9189, 806, 674, 4797, 482858, 593839, 63, 3, 68533, 8374, 257, 244, 42520, 14777, 82, 313, 92, 7, 4526, 10, 96974, 8, 2820, 873, 1, 8, 83, 38294, 702269, 684739, 634245, 908800, 579, 906987, 3, 79, 4, 6};
    vector<int> cost = {314013, 9, 846093, 1, 69, 63785, 0, 949343, 8, 6, 1323, 31, 9284, 45, 609394, 706, 322570, 516494, 31, 32, 25, 8, 19, 509343, 41, 185, 3, 58407, 626, 316, 10633, 862750, 331, 693832, 2223, 29, 7687, 8888, 653, 20262, 39899, 82, 630002, 3, 854049, 84};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 593839;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> price = {89, 248079, 3, 746102, 23813, 99404, 19581, 829150, 97428, 3, 10, 836425, 675, 52849, 919024, 662, 6, 933, 9, 2, 839, 80, 725213, 314, 978982, 70, 5929, 917, 45, 759728, 7112, 50924, 97, 187, 2, 86783, 1, 99, 10, 7674, 5534, 32, 893, 723722, 84, 839, 4252};
    vector<int> cost = {30296, 74, 1, 6140, 1, 8, 9045, 1233, 49, 7254, 4182, 5, 816, 461238, 31704, 84630, 97, 430, 18, 5, 147670, 1, 4279, 3, 56199, 721136, 253976, 889498, 4, 3, 665, 247921, 764, 0, 3570, 0, 59, 54, 47959, 0, 612758, 214100, 627943, 477, 181, 173782, 620170};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 723722;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> price = {7, 4, 325, 588952, 3638, 50572, 343, 5398, 865254, 266821, 22220, 52, 954363, 31, 485, 201406, 893313, 91599, 8, 72, 5582, 3963, 272, 699, 91170, 841994, 127, 5, 28, 814141, 738, 1242, 88, 88658, 355, 10, 31, 868, 694, 195101, 193642, 939274, 12, 658, 70, 46712, 12, 313};
    vector<int> cost = {1, 42, 1, 36692, 3, 72, 68, 593, 87848, 9837, 20, 51568, 14829, 4883, 148, 3788, 91, 5557, 4, 98873, 6517, 0, 866853, 2484, 553, 215078, 426737, 557725, 6821, 9, 29, 187623, 12, 68, 85, 951252, 917, 2706, 7333, 632, 33, 8323, 791, 23, 16603, 4, 848569, 53939};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 814141;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> price = {425104, 398692, 8671, 10, 62328, 5, 729162, 18, 33, 230, 95, 87, 531989, 106901, 1201, 67978, 364, 22688, 876, 2, 73443, 4462, 463739, 9972, 969632, 503414, 97783, 162803, 3723, 9162, 67983, 606, 4700, 4, 56275, 25282, 610160, 22, 90747, 400, 741, 7558, 2, 99434, 2346, 466138, 2, 1403, 7426};
    vector<int> cost = {484, 30, 504, 926, 991, 75, 73, 1, 5224, 197002, 63, 175, 320, 58347, 1, 421, 3, 613420, 217, 11990, 538, 50, 5, 101297, 70, 33, 275, 46, 40, 8, 6, 59676, 11, 51, 8, 521801, 234, 772, 3520, 5, 32101, 2183, 259026, 9, 6, 6704, 58, 12714, 3857};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 398692;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> price = {8, 377, 899548, 90970, 840384, 60900, 1, 24399, 257068, 724223, 33213, 44, 82, 832, 352, 33903, 3, 6255, 73746, 9, 206548, 409, 5839, 58989, 23767, 787, 281, 37124, 12, 2, 692, 7780, 86536, 8672, 47, 7127, 2461, 395593, 46, 233072, 701737, 210443, 344629, 97, 805195, 8, 4264, 4, 799, 4124};
    vector<int> cost = {4, 40487, 271, 497416, 2332, 89592, 4395, 337, 195, 2, 7, 98652, 890, 483, 3, 7, 1, 650, 11409, 1846, 639964, 67, 3476, 1, 2, 769865, 20, 3637, 16, 281884, 64, 63, 27605, 93, 872, 552279, 3, 9877, 9610, 341, 46, 32361, 58187, 935, 686079, 859968, 237059, 119515, 521, 808975};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 701737;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> price = {10, 10, 20, 20, 5};
    vector<int> cost = {1, 5, 11, 15, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> price = {13, 22, 35};
    vector<int> cost = {0, 0, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> price = {4, 2};
    vector<int> cost = {2, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> price = {30, 15};
    vector<int> cost = {20, 5};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> price = {50, 10, 10, 10, 25};
    vector<int> cost = {0, 0, 0, 0, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> price = {20, 10, 10, 20, 5};
    vector<int> cost = {11, 1, 5, 15, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> price = {1000000, 1000000, 1000000, 1, 2};
    vector<int> cost = {1000000, 1000000, 999999, 0, 1};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
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
    vector<int> price = {30, 20};
    vector<int> cost = {10, 10};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
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
    vector<int> price = {20, 20, 10, 10, 5};
    vector<int> cost = {11, 15, 1, 5, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> price = {20, 9};
    vector<int> cost = {12, 1};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> price = {20, 10};
    vector<int> cost = {15, 5};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> price = {5, 3};
    vector<int> cost = {0, 1};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> price = {999999, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> cost = {999950, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> price = {8, 6, 4};
    vector<int> cost = {7, 5, 3};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> price = {50, 25};
    vector<int> cost = {30, 5};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> price = {5, 3};
    vector<int> cost = {4, 2};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> price = {2000};
    vector<int> cost = {1000};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> price = {15, 10, 5};
    vector<int> cost = {10, 5, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> price = {4, 2, 2, 4};
    vector<int> cost = {0, 0, 0, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> price = {50, 25, 75};
    vector<int> cost = {30, 5, 55};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> price = {2, 1};
    vector<int> cost = {1, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> price = {13, 22, 35};
    vector<int> cost = {5, 15, 30};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> price = {100};
    vector<int> cost = {100};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
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
    vector<int> price = {20, 20, 5, 10, 10};
    vector<int> cost = {11, 15, 0, 1, 5};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> price = {10, 5, 3};
    vector<int> cost = {9, 4, 2};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> price = {20, 20, 10, 10, 5};
    vector<int> cost = {15, 11, 5, 1, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> price = {13, 22, 35, 10, 9};
    vector<int> cost = {5, 15, 30, 0, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> price = {17, 15};
    vector<int> cost = {15, 13};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> price = {3, 1};
    vector<int> cost = {2, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> price = {9, 6};
    vector<int> cost = {6, 3};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> price = {10, 3, 5};
    vector<int> cost = {9, 2, 4};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> price = {5, 20, 20, 10, 10};
    vector<int> cost = {0, 15, 11, 5, 1};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> price = {20, 10};
    vector<int> cost = {10, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> price = {13};
    vector<int> cost = {13};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> price = {1000000};
    vector<int> cost = {0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> price = {20, 20, 10, 10, 6};
    vector<int> cost = {11, 15, 1, 5, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> price = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> cost = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> price = {3, 2};
    vector<int> cost = {0, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> price = {15, 8, 1};
    vector<int> cost = {14, 7, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
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
    vector<int> price = {20, 10, 30};
    vector<int> cost = {10, 0, 20};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> price = {50, 60};
    vector<int> cost = {40, 30};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> price = {2, 1, 1};
    vector<int> cost = {0, 0, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> price = {20, 10};
    vector<int> cost = {0, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> price = {3, 3, 2};
    vector<int> cost = {2, 2, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
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
    vector<int> price = {7, 5};
    vector<int> cost = {5, 3};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> price = {10, 1};
    vector<int> cost = {60, 7};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> price = {5, 3, 3};
    vector<int> cost = {3, 2, 2};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> price = {1};
    vector<int> cost = {1};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> price = {2};
    vector<int> cost = {3};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> price = {20, 10};
    vector<int> cost = {11, 1};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> price = {2, 1};
    vector<int> cost = {0, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> price = {5, 3};
    vector<int> cost = {3, 1};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> price = {3, 2};
    vector<int> cost = {2, 1};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
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
    vector<int> price = {5, 4, 9};
    vector<int> cost = {2, 3, 4};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> price = {30, 20, 60};
    vector<int> cost = {0, 0, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> price = {100, 50, 50, 50};
    vector<int> cost = {0, 10, 10, 10};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> price = {10, 6};
    vector<int> cost = {0, 2};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> price = {4, 4, 4, 3};
    vector<int> cost = {0, 0, 0, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> price = {20, 10, 10, 20, 5};
    vector<int> cost = {11, 5, 1, 15, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> price = {4, 5, 6};
    vector<int> cost = {3, 3, 1};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> price = {10, 11};
    vector<int> cost = {1, 1};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> price = {1, 3, 2, 4};
    vector<int> cost = {0, 0, 0, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
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
    vector<int> price = {1000000, 1000000, 1000000, 1000000, 1000000, 1, 2};
    vector<int> cost = {1000000, 1000000, 999999, 999999, 999999, 0, 1};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> price = {3, 4, 9};
    vector<int> cost = {2, 5, 7};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> price = {1000000, 1000000, 1000000};
    vector<int> cost = {10, 10, 10};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> price = {2};
    vector<int> cost = {0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> price = {13, 22, 35};
    vector<int> cost = {5, 15, 20};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> price = {59, 39, 69};
    vector<int> cost = {50, 30, 60};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> price = {12, 10};
    vector<int> cost = {10, 8};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> price = {6, 10, 20};
    vector<int> cost = {1, 1, 30};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> price = {10, 10, 5, 5};
    vector<int> cost = {0, 0, 0, 0};
    SellingProducts* pObj = new SellingProducts();
    clock_t start = clock();
    int result = pObj->optimalPrice(price, cost);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=10800&pm=8440
********************************************************************************
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
 
class SellingProducts {
public:
int optimalPrice(vector <int> price, vector <int> cost) {
  int i, j, k, x, y, z;
  int ret = 0, mxp = 0;
 
  for (int p = 1; p <= 1000000; p++) {
    x = 0;
    for (i = 0; i < price.size(); i++) if (price[i] >= p) {
      y = p - cost[i];
      x += max(y, 0);
    }
    if (x > mxp) {
      mxp = x;
      ret = p;
    }
  }
  return ret;
}
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/