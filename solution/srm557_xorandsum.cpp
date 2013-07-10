/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12197
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

class XorAndSum {
public:
    long maxSum(vector<long> number);
};

long XorAndSum::maxSum(vector<long> number) {
    long ret;
    return ret;
}


int test0() {
    vector<long> number = {1, 0};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<long> number = {1, 2, 3};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<long> number = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<long> number = {2, 3, 5, 7, 11, 13, 17, 19};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 233;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<long> number = {123456789012345, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 1234567890123450;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<long> number = {627, 674, 281, 272, 289, 877, 62, 122, 603, 189, 615};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 10742;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<long> number = {6413, 6030, 5476, 5821, 5293, 5985, 6299, 5537, 6420, 5590, 5480, 5374, 5295, 6120, 6110, 5359, 6031, 5400, 5344, 5781, 5656, 6040, 6119, 5785, 5649, 5824, 5785, 6427, 5893, 5498};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 212963;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<long> number = {27479, 32870, 34306, 34836, 34350, 26420, 32594, 33068, 31770, 27536, 30467, 27838, 35378, 36884, 36742, 38726};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 1015787;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<long> number = {2871875458, 3371296737, 3207443132, 3903039989, 3225909397, 2877544504, 4393995748, 3713841453, 2845405547, 4412491878, 3114691036, 4816005217, 3523377570, 4302861281, 2724738848, 3161178627, 4351351807, 2662955589, 3752170350, 3342374557, 3676499664, 4652542698, 4263664834, 2627367021, 4576159178, 2892038856, 2669930683, 2717459453, 3320406864, 4019127176, 3331440290, 3502992804, 4290077972, 3405217856, 4220874521, 4328435319, 4706919668, 3618531588, 3134109359, 2958800738, 3093958353, 4320479601, 4730646389, 2960581006, 4311700252, 4562234210, 3557401628};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 399431958482;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<long> number = {3131516808, 6827157837, 5110323049, 6474596460, 4399654068, 6946032670, 6838501708, 4232539854, 6527721678, 4978790959, 5986550906, 6535152756, 3407323038, 3648091605, 3893013850, 3189017376, 3692532522, 5830034113, 5788473612, 5563190082, 2306284599, 4481262826, 6800932243, 4811266449, 4594416844, 6488751320, 3393374488, 4950828371, 6185277922, 2339307056, 3917102174, 6013386163, 6987739403, 3149218477, 6060081960, 6932486214, 6643812493, 5895486003, 4309042440, 6014468832, 6161360403, 3878810177};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 356482285527;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<long> number = {650, 587, 495, 514, 637, 473, 522, 496, 673, 631, 528, 659, 484, 672, 667, 559, 525, 585, 693, 544, 658, 477, 556, 588, 645, 569, 583, 594, 572, 549, 499, 529, 595, 525, 503, 616, 515, 583};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 38363;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<long> number = {58664, 40727, 43082, 59155, 35664, 50643, 47743, 46281, 44192, 34872, 57075, 27820, 59206};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 819151;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<long> number = {14728, 7479, 10523, 7506, 14989, 13671};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 85727;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<long> number = {38116379, 23202830, 35878222, 110551686, 31651237};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 599962913;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<long> number = {7007202, 8383112, 3688747, 3770345, 4876691, 4141859, 4527603, 2781474, 8718692, 3351802, 5617688, 6562951, 9039688, 6311529, 5428638, 8230068, 5177071, 2884442, 9198338, 6801983, 8441335, 4748614, 8339563, 6274862, 4207837, 6548159, 8788169, 3065216, 5451666, 2325456, 8224328, 9422147, 7408894, 4484435, 8422140, 4121297, 5427250, 5202575, 9158956, 4893947, 7570622, 3421223, 3618509, 3539633};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 729808853;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<long> number = {119790, 113827, 154441, 142822, 174307, 102964, 114917, 175457, 122675, 145754, 115247, 125948, 148539, 172049, 124789, 128637, 110389, 143724, 104715, 131428, 128593, 121975, 137331, 135017, 90148, 172841, 146055, 141163, 158338, 145454, 123573, 111743, 174645, 111706, 106048, 94097, 107825};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 9568220;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<long> number = {151772796311804, 144480010415206, 146447108172596, 147136191222359, 154218482881821, 153564179111553, 163335591764728, 151319438088360};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 1371030014337753;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<long> number = {232, 240, 229, 232, 225, 238, 233, 238, 236, 228, 225, 224, 225, 239, 236, 224, 225, 239, 233, 233, 240, 239, 230, 224, 238, 238, 237, 224, 235, 226, 233, 236, 234, 231, 237, 237, 234, 226};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 9659;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<long> number = {2379, 3606, 5809, 1841, 1540, 1914, 227, 692, 4189, 1763, 1203, 99, 5145, 4168, 2547, 1079, 4521, 3493, 647, 4209, 3908, 4158, 4057, 5839, 5651, 517, 5639, 4024, 1139, 3745, 1650};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 249826;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<long> number = {563, 542, 550, 513, 534, 542, 506, 511};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 7667;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<long> number = {2049, 2265, 2595, 2983, 2304, 2553, 3163, 3546, 2346};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 34795;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<long> number = {4944583656, 3872407298, 8476405492, 2626869132, 6707766968, 7451613786, 2557200147, 3215307316, 4950048933, 7403340073, 4539548204, 7734915538, 6319707268, 3047554630, 4490715299, 2817053968, 5444558765, 6770335628};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 150322199654;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<long> number = {27070494711342, 23698264089789, 30907701658032, 35016605495127, 25592416448801};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 156565857017912;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<long> number = {210283};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 210283;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<long> number = {185066725276669, 153452873834408, 141285857438952, 127535529984028, 190010866306624, 196345398446306, 178107595938473, 170086836733919, 158541179994678, 194070832097126, 173083227242897, 168757641426480, 141867996961587, 179196192705797, 124957824252270, 173657079225122, 174592537497895, 169710747293518, 145498373337815, 144468905341295, 116460771480809, 125214010042904, 133235934913995, 146168856037080, 126920116182203, 112878663763164, 153989177535668, 130886484872127, 176451026718915, 177116721419684, 126517340892712, 183195870773023, 195332431937214, 163903304350550, 144711546014937, 154984176475177, 185539081999922, 146358698932654, 175023514462924, 182558490218906, 152466863443555, 135234853044456, 154372636321754, 157403410416678, 140753836327702, 114356372915090, 186960284482161, 196631374900576};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 13370061393756067;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<long> number = {80327190311, 47852157667, 45330332155, 74952187664, 54962180627, 50974681516, 53153178249, 78371426469, 79408937981, 55907136412, 65606070720, 43756916458, 77328770593, 73707155321, 70430808415, 49587353176, 52292232373, 62154192800, 54635942451, 57202752274, 74802198482, 68044180907, 54220742208, 52256409823, 43336484330, 44722201916, 48678678343, 76920956186, 56174701971, 62866935404, 69286348951, 62387440250, 63969126907, 47758038720, 70340715046, 74989704196, 51901117390, 75888330815, 68085482303, 81006971892, 67436315510, 52999057017, 62168742321, 77823095806, 79263327681, 54967034334, 81058791459};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 6390911336402;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<long> number = {396515487831, 408084966924, 360891383790, 357376703763, 319912403210, 399613973603, 306132733112, 377347103268, 291317753909, 294392223399, 338423261044, 450225449953, 318169044426, 371981999668, 380217049758, 359900160052, 342808018715, 382725041359, 459694939357, 441534953976, 409028492696, 413606950219, 293339458165, 397979735977, 374558234104, 334473920017, 459914394100, 347207537344, 316740818527, 355974572708, 359332740170, 371037796940, 439721312789, 390673050001, 316987576718, 371371258814, 396949495888, 363866840465, 333695673926, 438965376223, 348304475871, 338488720335, 359119379866, 360230171572, 294510146721};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 24464133717972;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<long> number = {5745476737466, 5269510530661, 4072892086742, 4764241356029, 3908929811009, 5419185643675, 5303416475790, 4868797794987, 5933827554818, 4863385653600, 6396996668559, 6143646067645, 4567351460864, 6611943912067, 3892297398734, 4064097529856, 5739714400612, 5181134329344, 5202471997856, 6601776917771, 6375124619200, 6635793085275, 3780138145870, 3907069575509, 5551406835956, 5613379244006, 5189287256860, 4268382233921, 5225367476157, 4234431806869, 6236317329967, 5299072650770, 5881001215500, 6589319468055, 4130935041505, 5296878577264};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 312261302284401;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<long> number = {3, 3, 3, 2, 2, 2, 2, 2, 3, 3, 2, 3, 3, 2, 3, 2, 2, 3, 2, 2, 3, 2, 2, 3, 2, 2, 3, 3, 3, 3, 2, 2, 2, 3, 2};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 104;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<long> number = {852329113, 761680612, 847794045, 726430583, 687931616, 744463157, 636878635, 890153826, 917123397, 972022744, 858953524, 934782249, 972600106, 744424458, 877293531, 907438388, 849295502, 765785272, 877529324};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 19864202157;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<long> number = {23853, 65548, 44688, 41589, 62748, 69946, 45787, 59092, 24998, 76029, 83591, 24500, 70825, 27958, 77641, 74153, 38587, 58733, 57250, 55697, 72857, 49213, 81714, 70566, 29311, 37329, 47573, 27325, 57178, 77328, 62198};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 3997666;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<long> number = {681347, 858771, 539268, 876042, 1050012, 400341, 409398, 840342, 1116922, 1382018, 1034004, 1421581, 1403175, 439660, 1176493, 875283, 1116454, 1216287, 899876, 1034217, 986600, 1104670, 1315444, 595542, 540583, 847346, 1015252, 834955, 939981, 1092543, 1180182, 1171544, 1350724, 866102, 1171415, 1275830, 1020348, 795486, 1267216};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 80740314;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<long> number = {19830319968610, 19973106881824, 24337248860479, 19591278726925, 22581060419116, 23191544504266, 20525020758333, 20019605622439, 20982062697933, 23195356435332, 23393864225085, 21362129638590, 19958068597556, 21236827054548, 24513360835997, 24096275625460, 20390783972437, 21935442395056, 21600762377065};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 492580252649107;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<long> number = {1929715869, 1764472873, 1317242167, 1192342005, 2463845020, 1757543894, 1549615488, 1662508659, 1560763865};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 36089566791;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<long> number = {3, 2, 2, 2, 2, 3, 3, 2, 3, 2, 3, 2, 3, 3, 2, 3, 2, 3, 3, 2, 2, 3, 2, 2, 2, 2};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 77;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<long> number = {69, 183, 150, 119, 172, 178, 102, 157, 175, 125, 136, 136, 175, 122, 74, 63, 138, 180, 175, 131, 96, 62, 73, 160, 143, 125, 106, 91, 63, 180, 95, 124, 70, 108, 96, 81, 62, 64, 111, 157, 174, 129, 150, 102, 171, 108, 178, 172, 171};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 12368;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<long> number = {1195411565754, 441434454082, 1165002523828, 245623939221, 2041574663913, 442974239352, 1162415788008, 1692416849017, 977780104873, 1018995014558, 675291864653, 1149002831868, 1673247437523, 1014459208988, 518743757238, 1385743773897, 707563025119, 2058798253182, 2050596853913, 623959539902, 461942507320, 602681287068, 1703384959624, 234139132049, 981221628994, 94631091919, 1687511093103, 866197686286, 566281323160, 930555622295};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 64871185993905;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<long> number = {1613110, 3545853, 1905076, 3496083, 3124742, 2366576, 3578757, 1517577, 2145804, 3507425, 2188029, 4303214, 2303893, 1741859, 4427716, 2518877, 2258479, 1419190, 5102362, 4533799, 1399468, 3500735, 1382362, 3122554, 3135596, 4219832, 2973830, 5407427, 3776064, 2650290, 5507694, 1701501, 2064893, 4305345, 3563475, 4049120, 4864475, 1697749, 3758922, 2652574, 3011023, 2522579, 3674070, 2071857, 4510032};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 373293012;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<long> number = {47233748853815, 53809089179470, 57254380511583, 35312511682675, 4095960864394, 4560952609368, 16483512870096, 54628289033507, 41911632518106, 26410491634943, 57774765467678, 6981857832033, 45392463631955, 33937287472571, 51986969156221, 31719330306160, 33779738840216, 29373677896505, 35125358635836, 14160039799186, 37627560651987, 52552830669923, 7158899535202};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 1583296590269445;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<long> number = {55573541796863, 84651814540543, 64381806594352, 68244758179199, 54598409948467};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 630055676138525;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<long> number = {43, 48, 48, 47, 44, 21, 33, 27, 26, 48, 27, 54, 51, 51, 42, 44, 54, 28, 51, 36, 36, 27, 52, 46, 22, 22, 27, 34, 34, 43, 40, 44, 29, 29, 38, 34, 35, 38, 21, 30, 25, 44, 36, 47, 21, 52, 34, 21, 27};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 3056;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<long> number = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 160;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<long> number = {72995870, 22102024, 31205319, 56249920, 55335888, 78568232, 78965459, 90890109, 10948830, 73493503, 16630563, 12733429, 69525538, 30962471, 93000069, 81168817, 46272684, 72053697, 95197870, 30819494, 100142909, 36850207, 31339041, 106434481, 51940986, 28568214, 100594505, 55664436, 50729391, 10309030, 2843072, 43046873, 87128660, 87016714, 44071718, 52610637, 11928430, 42587168, 14844809, 56758846, 47367852, 45963501, 43232511, 89985728, 96368459, 33940431, 99073883, 67693686, 20218562};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 6509559760;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<long> number = {55, 75, 59, 68, 19, 76, 41, 33, 62, 50, 20, 47, 21, 62, 67, 67, 71, 50};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 2223;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<long> number = {2, 4, 3, 3, 4, 3, 4, 2};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 53;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<long> number = {2907511900812, 5106889207371, 2385167718608, 4560172054888, 3553555837031, 3996432060721, 3238327761958, 3664902620876, 3152004040412, 3807332744717, 4134756794875, 3563499760951, 4978556540648, 4655213320812, 5662789893554, 5774131034072, 5040307051369};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 145132830931160;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<long> number = {4847508861171, 3737876684245, 3074235745375, 2724623050294, 2673348287121, 3465954364922, 4879528725842, 3531979622692, 5114220231919, 2955620244839, 2952355296435, 2836953585656, 4397620530649, 2273605415765, 2302451462909, 4435861224962, 2306758594976, 4952702870943, 4659366966736, 2805397543945, 3974003719694, 2450504653477, 4120822765798, 4649980331041, 4205793643825, 4824910461650, 5046278444308, 4752578085548, 4617705085263};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 250688650921937;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<long> number = {58071657769400, 70651162746280, 39726645406482, 25736550161062, 46792157265951, 44667313151844, 27192934274744, 39054120726725, 23068855496972, 59885634309171, 54488749744618, 38280154843216, 21836830383735, 24899378375124, 33964257281129, 35340353805872, 72785348080949, 50333804417963, 59690199314032, 66897922670991, 51752999086262, 36086890425034, 58820468335778, 74635802843160, 38399646723157, 35161070826400, 75051008251153, 53275879097015, 32300242570000, 32673006391440, 66103910071504, 41284216742920, 24838783773299, 34760720369956, 31065509232573, 65703794676197, 66587186756101, 62041835972627, 63879834226100, 45116953144640, 61311156672167, 64633529402311, 55190986476480, 24046929351457, 47153220554222, 22551672960284};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 6403555720167356;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<long> number = {83480585537, 80619966809, 81690275205, 79146224271, 81590297448, 80369446251, 82033098655, 80693228838, 80462703372, 79493937715, 82386527675, 77492499120, 84172713113, 78108100690, 84107162713, 81495972602, 77654679849, 78123172022, 79052666009, 80751077951, 83101900448, 83691482833, 84201859548, 78681052218, 81296655062, 82681660820, 79168191834, 84111401040, 83927186614, 83449879567, 84316312887, 82222720587, 78290004455, 81103099714, 80521225621, 82953652473};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 3083786518493;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<long> number = {4481765561, 3762361274, 4052256797, 4457552581, 4252121327, 5177597119, 4978965006, 5112741245, 2445458510, 4688622311, 4906037038, 3097781902, 4827295179, 3590210157, 3268065552, 4203076523};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 133140302522;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<long> number = {173198187, 285254809, 318505842, 324739322, 143807359, 210393183, 348812473, 367581206, 292699127, 302764254, 285702702, 247202320, 222849404, 299454125, 391054317, 161313208, 230287317, 298627697, 389235864, 307995080};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 10468979047;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<long> number = {3903955569, 3869748990, 4041371112, 3839079037, 4453623150, 3979443481, 3772288332, 3783251511, 4348362795, 4484042182, 3771033329, 4486023276, 3998260252, 3972212322, 3743288449, 4403374768, 4167756580, 3859001715, 4313867513, 3904303390, 3937590734, 3760306404, 3751577016, 4064379072, 4398115695};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 210453395723;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<long> number = {2207817541, 2256560389, 2892454994, 2753264455, 1704764028, 2263826520, 2949253889, 1974760324, 2906927029, 2832792555, 2366654739, 2801268652, 1686374293, 2951714548, 1798919947, 1917217902, 2308356342, 1681578907, 2690697993, 1922842161, 2891906475, 1602132647, 2850986077, 2091287968, 2730360284, 2765030682, 1716134848, 2704060433, 1528510790, 2876327334, 2185813051, 2132316699, 2630817937, 3002389855, 2658016962, 2889855610, 2882578619, 2492280388, 2474386991, 1711509213, 2074132843, 1909734867, 2098352471, 1566770568};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 186831077333;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<long> number = {10292107545152, 13472511153218, 9982458459907, 7195541604092, 8373703433267, 24494692866768, 16813806707757, 17625941936269, 22803323390711, 15198200096321, 20174833802045, 16632464228498, 12007764992440, 10509459443343, 11410002478314, 27565213036420};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 545354374496880;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<long> number = {13118580557, 5615177904, 27415318723, 7999089424, 29924912896, 11976142746, 23111668171, 29456248524, 12775876443, 27036001541, 21807804819, 17832006173, 14156756884, 28049591950, 28747833838, 10894557061, 26940086612, 26628561978, 26340540637, 19319038913, 3519954347, 16415296736, 18524677480, 9356625854, 28046084906, 12946035594, 24756864027, 29360280085, 8413675278, 23507577190, 26741297133, 13759714227, 19220882058, 16670649616, 10947340561, 15848404413, 12014998057};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 1254130450396;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<long> number = {7511461, 7462247, 7485168, 4346613, 4958277, 5043315, 6404225, 6444151, 6814271, 6714733, 5697584, 7007774, 6012684, 5185627, 7140688, 7211271, 4568533, 7208672, 5410512, 4758530, 6489958, 6781480, 7219000, 5851244, 5087451, 7280359, 5948441, 5568810};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 230686693;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<long> number = {85404, 81346, 83517, 82368, 82485, 83285, 84661, 85629, 85646, 84887, 84557, 80387, 81503, 85789, 83227, 80673, 81555, 84509, 84700, 81254, 82351, 84532, 83753, 83430, 84527, 83419, 85023, 85190, 81689, 82795};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 2572259;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<long> number = {8226096, 4311483, 3472780, 3274405, 4514527, 7633284, 2397170, 8692619, 1086103, 8592934, 8400079, 6952699};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 192921010;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<long> number = {2430233166, 3373449376, 5174510090, 4093664247, 2336794151, 4310404648, 2997096724, 4492467050, 4067338203, 5576864312, 4921219149, 2952039529, 3257977145, 5639583697, 5538424590, 3837402558, 3913742974, 5613403294, 1602119810, 5369902726, 1640200485, 5593678071, 1944388776, 1562326588, 1598789288, 4650865267};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 219043328873;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<long> number = {8020153593294, 6798735970788, 7947556188971, 8240202694490, 7184251682078, 6292023604996, 5738250370879, 5962261442708, 7958379093899, 7901611161568, 6731557186602, 7057044072855, 7821606978621, 6492460010295, 6514336789633, 7176358397494, 7010290399660, 8196255563538, 6718283504514, 7318251865573, 7338907988322, 6468044324764, 7844942681054, 7715704091791, 7288908739135, 8025676592845, 7938227182353, 8322247890561, 7647026715924, 7786326527544, 7163322952083, 5862058320978, 5877857578687, 5824857820112, 6842415455066, 6451438238180, 7025582860178, 5715544991057};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 329853488331735;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<long> number = {164657969};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 164657969;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<long> number = {569837613204300, 725125432090605, 660231230340080, 666596291135404, 746831337121323, 747311943106149, 670601977984726, 646302475039912, 578888442304768, 594033970364515, 675162369855717, 740622742658120, 641137291088686, 612462120101797, 740718236029675, 562479331832517, 625704051469116, 570789872632331, 574282410869346, 635885507449423, 665481106781776, 715102097827314};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 24206845481969597;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<long> number = {39, 29, 30, 29, 31, 35, 36, 34, 39, 36, 29, 30, 36, 31, 37, 37, 37, 29, 38, 39, 34, 39, 32, 40, 35, 32, 34, 30, 30, 40, 36, 33, 39, 30, 30, 33, 33, 33, 38, 40};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 2489;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<long> number = {428583677429, 395856264512, 456130861410, 414275984831, 410761436306, 547120685055, 466321263875, 407155205278, 363083897120, 489178141422, 379060594208, 376851611112, 543493002771, 402523858390, 372702913484, 417452815106, 517280182081, 509973506775, 473676608587, 443197842598, 464643682129, 447363665096, 513928291625, 359766842991, 506277339251, 527390260317, 512749757940, 536235736078, 491849480233, 427104781945, 471422530641, 466393826653, 473020859502};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 17867063949119;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<long> number = {631981042945, 288824933006, 706769494358, 525429398326, 542667967673, 228562550026, 405150550143, 662222460151, 545542474813, 556824193855, 157900063099, 627113915573, 448467172784, 648795762228, 542326373533, 675986190597, 297745898415, 640980014219, 685183483024, 569971063155, 700659375463, 340547702338, 201041308404, 253012144137, 194252787764, 610654035913, 621897302015, 365517747138, 452503475366, 138090444495, 323822251723, 462251707932, 563134180715, 687694247159, 396362989561, 121625198535, 600860850418, 330353867793, 603714142505, 202939320485, 403221279298, 400901949302, 456288956753};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 46729244180418;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<long> number = {14965837043, 116986984683, 184235481576, 215086962116, 233846322315, 182649020391, 120788953409, 102133847854, 244918102778, 79458360741, 23943908100, 83247309632, 116472124295, 43466243250, 91516509125, 91274264611, 99009925020, 241128420715, 56580187181, 107654663536, 178388119471, 221789425655, 81900594364, 8916285803, 154559321167, 112684411410, 99297411850, 212504277209, 108042564550, 60189997527, 240103960659, 62250965316, 54925286736, 243533117292, 222934117815, 47238343621, 151140886812, 231059891115, 15075719879, 178523867960, 23696971301, 26062167179, 44752159010, 202489863232, 38708746007, 26864519405, 211647795810, 161902476026, 54034055570, 168392956461};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 13606456393679;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<long> number = {46130, 46887, 47079, 45993, 46844, 47133, 46102, 46644, 46393, 46855, 46858, 46217, 45783, 45836};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 684019;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<long> number = {61277795190518, 76137803962833, 73656176261280, 73173027379100};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 460431277815496;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<long> number = {7416994805, 10287068492, 10357351531, 13312762316, 7662867674, 13791967820, 14331367532, 10118227583, 7418891531, 11631579463, 11174828962, 8499275732, 12230995341, 9733988760, 14749913966, 9764295479, 13880630336, 7074970534};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 300646570209;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<long> number = {5783, 3196, 3281, 6314, 5974, 3783, 4595, 4102, 3137, 7429, 5910, 3885, 3157, 5036, 7159, 8107, 4729, 2658, 7282, 4432, 4436, 3198, 8215, 3740, 7252, 5290, 6399, 2463, 6020, 4249, 5288};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 499682;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<long> number = {59825467, 66947631, 62463595, 60333136, 59766468, 61380811};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 393659024;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<long> number = {7506780417122, 5563937371540, 6200427083627, 6835980681725, 7449234765707, 5005493567654, 6972372289249, 7341308878810};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 65891705160227;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<long> number = {39304653062793, 49046326376811, 23838894151643, 52653191551551, 45221006258382, 48526463677745, 51379005121367, 35404825818719, 47777189448339, 33193823609269, 28891185569584, 36129741200153, 28146075964679, 31536057897595, 51840530658893, 51522468796615, 31426751172657, 39383321763545, 32960181993111, 26015507656475, 36812519800552, 32078926680571, 25858011667122, 26800192594279, 52018399191914, 36436040148422, 29858446170343, 31528467381599, 50727617554484, 47603014897750, 36863268053249};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 2146246690320760;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<long> number = {28321, 46602, 31624, 37191, 17582, 20979, 45909, 20227, 26080, 24762, 49417, 45959, 22213, 26200, 22092, 27067, 43952, 33408, 38469};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 1212398;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<long> number = {255624970, 234896438, 272251468, 247385578, 276825353, 283074684, 224479647, 320963233};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 4019441115;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<long> number = {227, 213, 230, 235, 240, 216, 224, 232, 237, 229, 228, 227, 243, 242, 233, 223, 218, 238, 215, 232, 216};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 5292;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<long> number = {4932690279675, 4372771218447, 3527041262450, 4580123472446, 4064120147950, 5036369488626, 4742144356046, 4881744683993, 4075445981473, 3474049361128, 4441033288591, 3701473379888, 4063928417807, 3310083610994, 4679914103803, 4360721653132, 3780559587664, 4664577383703, 3377506943589, 3594807694609, 4101199772639, 4741010637049, 3750027166093, 3708549792281, 4600138518349, 3659717485479, 4669085789517, 3519318725736, 3553470998947, 4864994296571, 4815294234964, 5150996439294, 4941722543110, 5009573446988, 4147764871853, 3338993586285, 3779615766072, 4661021943577};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 329853488332205;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<long> number = {1256, 1120, 1117, 1225, 897, 807, 1365, 1546, 1052, 1349, 1272, 651, 1278, 786, 978, 684, 971, 1563, 909, 1166, 1036, 971, 1223, 1260, 1217, 902, 1168, 1239, 678, 1555, 1471};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 62434;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<long> number = {48424620881574, 52568796483567, 43194461960050, 42895764466384, 57452310333004, 46744542159795, 53769068962765, 61247278664371, 66883264373753, 52878477426017, 47097182820853, 67545952744437, 67892494380889, 59106274300234, 57683500169456, 42323441582623, 62980171413897, 47391307074495, 43444815720910, 61982575573022, 56157122977494, 66816515059296, 60013795309355, 62156122372971, 64719832410482, 56755805637102, 57771940406239, 52564668688848, 59102041540607, 60132538493303, 48009806574441, 56313342154019};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 2216615441349292;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<long> number = {875487, 882499, 919014, 931988, 878372, 928580, 855621, 890176, 877919, 903804, 980800, 973091, 902059, 920717, 932477, 861454, 848610, 911844, 951442, 844211, 887778, 968033, 868631, 964298, 979265, 928894, 953925, 829942, 911979, 957871, 870341, 964456, 870829, 839385, 830785, 894982, 840705, 915696, 845414, 863898, 935355, 874660, 978335, 853595, 909476};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 46923732;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<long> number = {110438208818250, 116027693520402, 93404973130777, 114077400092745, 65009930444134, 65963205400736, 101973595194881, 61954034209423, 118117768665098, 82026658312456, 81947121320941, 73835991994572, 59729590154009, 115164426715864, 113206547960435, 72258616962328, 76988645339503, 119040933046771, 85333704266672, 62469521621663, 58977242581355, 119690071782705, 62192622696441, 73462465560457, 108017106285559, 101222656216602, 112429706557209, 61858747586970, 96272446526768, 95133127650497, 61488064625559, 114539839241633, 112724274205784, 106650843952582, 120814607543914, 64803981266115, 70499306875329, 75247490389511, 79437139969971, 107614823314988, 119164296476732, 103490092296983, 68909608557558, 101405756466488, 79678106594326, 106556707770530, 104968742843305};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 6544293208522683;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<long> number = {38265191, 75183645};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 179834263;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<long> number = {7401130047, 7388483462, 6118832502, 5648659762, 6306931441, 8408401744, 6593052707, 5011110628, 8729079717, 5379930140};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 162953256457;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<long> number = {4202, 6985, 4451, 6638, 4973, 5031, 3507, 3323, 4759, 3850, 4000, 4005, 7175, 5357, 3670, 5428, 6894, 7910, 3162, 4562, 4134, 6583, 6020, 6848, 4232, 2505, 6043, 5357, 4940, 5122, 5664, 2633, 4789, 3186, 2780, 3895, 5305, 6780, 4812, 2539, 6616, 3806, 4752, 7633, 5843, 4440, 7895, 6375, 6319, 4920};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 405455;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<long> number = {4696731507, 5450621939, 2807293093, 4637979730, 5478379860, 5444725213, 2602685418, 4274015525, 4039771594, 2892804755, 3923809319};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 90161682545;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<long> number = {611799546, 644109251, 586203627, 649961840, 619847133, 621153098, 655213263, 653539715, 592991300, 653727506, 637629139, 649634257, 640391542, 595708227, 643272349, 633246738, 606694632, 594427343, 634560969, 624716587, 597597894, 609588331, 588642095, 615509146, 593974458, 627266035, 586027001, 620579280, 642411010, 639845567, 647848080, 586225506, 604238460, 628156110, 618744451, 611171613, 645592098, 586248028, 641858570, 624020654, 633185546, 641710780, 587140176};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 28722593750;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<long> number = {3, 2, 1, 6, 8, 0, 5, 2, 5, 6, 5, 1, 5, 1, 2, 5, 4, 6, 4, 2, 5, 8, 1, 2, 2, 0, 4, 3, 7, 6, 7, 5, 6, 3, 7, 5, 6, 8, 8, 4, 1, 1, 2, 5, 2, 1, 6};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 698;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<long> number = {3086, 3091, 3069, 3130, 3129, 3083, 3076, 3078, 3130, 3081, 3076, 3099, 3127, 3126, 3108, 3097, 3083, 3059, 3091, 3068, 3132, 3131, 3086, 3136, 3064, 3124, 3120, 3081, 3139, 3050, 3108, 3049, 3079, 3083, 3092, 3081, 3070, 3066, 3138, 3051, 3105, 3129, 3128, 3083, 3064};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 143700;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<long> number = {101285032, 74417011, 179720047, 122917757, 241835171, 96537637, 274642365, 243485769, 216093406, 232036688, 277832524};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 5635426252;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<long> number = {53210345011540, 47588234147283, 49367040127147, 50443095128245, 61379421555073, 43852043234416, 59726292752511, 45275733458632, 45723974252928, 55274726221406, 50418490451266, 58961802133086, 59498625607053, 46668433000637, 56458581475525, 45909933232066, 44988078480288, 52225646019955, 52869130063035, 50144949291915, 43790192027227, 50724776885100, 51490400758670, 48817535235160, 53998488736842, 53026660455169, 58446116296447, 47768512688917, 44902735142339};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 2005509206185246;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<long> number = {6877717511, 7048214973, 6562014674, 7152202222, 7076700336, 7151707175, 6728765662, 7195197793, 7148197021};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 66332365619;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<long> number = {7509183, 7232906, 4264783, 4507817, 3780577, 7064229, 5999455, 5036758, 4164177, 4567171, 6793122, 4500601, 3863461, 3597379, 8304777, 7967051, 9163990, 7107168, 4335769, 4289451, 8987882, 6422136, 3519817, 3383944, 6490351, 5488102, 4825851, 8223902, 3929852, 8242551, 3949293, 4647985, 3269995, 6639866, 6843780, 6879054, 3663925, 7086425, 8391851, 4119258, 6906135, 7829087, 8188674, 4244369, 6270708, 5632314};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 763363283;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<long> number = {48151719968, 33033635638, 39998616661, 40891878073, 38013564278, 47632637422, 54215180365, 57369299780, 30491722788, 44728137251, 51262816119, 33710201005, 54873176145, 33465540222, 51508694400, 38042942474, 31984737942, 37364479491, 49100408162, 44812633914, 38105041124, 48205912065, 50927652761, 61161970419};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 1614905835724;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<long> number = {36, 38, 46, 46, 46, 41, 38, 45, 42, 38, 39, 36, 46, 37, 40, 47, 36};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 784;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<long> number = {64388643310, 176170172312, 635713478139, 282287144362, 566998146816, 359654368771, 314883450808, 495866789963, 299171424515, 384956678743, 294943984264, 413524345750, 403417430465, 345869051876, 628471660118, 464640252378, 388669057274, 87409646253, 306713317886, 492801348507, 52243898048, 324937445000, 228598111080, 407445089748, 334495391251, 420571271837, 369518154980, 613082072736, 352668919446, 246965270263, 223429664962};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 33535104625219;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<long> number = {260518481, 236743077, 355742419, 251729891, 362105590, 387549283, 393815931, 270408786, 210175273, 299829671, 303675219, 224568121, 230710321, 227353840, 392864834, 385759293, 304184095, 376537181, 353723090, 232262989, 246162130, 315124112};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 11542663588;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<long> number = {1115556297};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 1115556297;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<long> number = {83054570081, 78989803029, 79748061108, 73835091138, 79337428767, 75088287091, 82523688600, 78839426949, 74894412301, 76654154732, 75233449432, 75854863125, 81668351226, 80672314946, 79208788799, 73369959394, 75314651525, 72880987950, 80371631191, 74203375622, 72829177040, 81854152472};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 1872605555838;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<long> number = {1, 0, 2, 2, 2, 2, 2, 0, 1, 0, 0, 0, 0, 2, 2, 2, 0, 0, 0, 0, 0, 1, 0, 2, 1, 2, 1, 2, 2};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 86;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<long> number = {507528712383, 546618109218, 625086590051, 583202276319, 571029934962, 425964148341, 643296355253, 619795811489, 515037314181, 440410912764, 522988677605, 462677003494, 539249320592, 632923690977, 614586598618, 483596169054, 447684436858, 564970310773, 471198639514, 439641427268, 432107134103, 548508038943, 565855122962, 459796154269, 480764465463, 525123697915, 544841910851, 599097019946, 504791531328, 536045238975, 565145707517, 629421521619, 616254176895, 534852516935, 558939398937, 441488475266, 508008628666, 638097453101, 512396596383, 562040950627, 637078533742, 602006597813, 590527251419, 499366363743, 499824879787, 632114960559, 606484092673, 421751914890, 443971627470};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 53326313947088;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<long> number = {37986501932696, 82515223182614, 34249392855913, 34901930417342, 40233628290725, 50670994086994, 49952707917648, 56873905571978, 77899135934583, 87610587178968, 87564774765365, 51135083873736, 52155862677640, 57936004707419, 70968416988271, 82465299437862, 74546205414321, 38641469201437, 80856379892472, 71060319406785, 70936991431807, 48918627726531, 53138432740375, 52150947360096, 66677835633399, 57386165615037, 88219862680484, 31759489384085, 39332844769562, 65519999765536, 52050230735176, 34328426213632, 80059277943242, 79619664322996, 70626486007464, 37764124964886, 81117067146209, 72818543335159, 55065886650605, 47814759435235, 69626863297118};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 5699868278388363;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<long> number = {254, 271, 241, 281, 285, 295, 291, 285, 209, 214, 237, 216, 249, 306, 286, 309, 260, 193, 269, 238, 232, 192, 317, 263, 284, 268, 315, 307, 221, 294, 248, 307, 249, 316, 240, 229, 286};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 18652;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<long> number = {15};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<long> number = {809, 877, 878, 892, 834, 826, 819};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 6134;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<long> number = {1006, 1841, 1686, 1282, 1590, 1566, 1370, 1052, 984};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 17388;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<long> number = {2030952, 1757564, 4113069, 3056453, 1230477, 3286183, 1435038, 3140411};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 31379276;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<long> number = {596271, 1289810, 1069912, 1119766, 619786, 1112703, 578359, 1098483, 1127008, 535912, 909308, 653142, 729628, 993051, 1266115, 1193317, 972808, 1063808, 825313, 1285610, 894058, 1327025, 893284, 643812};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 49283049;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<long> number = {170625374498, 297138899064, 341360310897, 148119284731, 74951129593, 178769945556, 76559865896, 68044318536, 70092254102, 175892992553, 388263667642, 178806578067, 140892560344, 335221114518, 107298296193, 88368050302, 64382596692, 171565950425, 198633010963, 110371469445, 379677115301, 133690052700, 371061496148, 74459115363, 348863315810, 104177641961, 308136632123};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 14568529016547;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<long> number = {315, 129, 567, 344, 234, 257, 550};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 6651;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<long> number = {29155};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 29155;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<long> number = {1052181716889, 982637980315, 815523015373, 999662281884, 1016091939852, 1150788054423, 828112171620, 1477506924294, 1332134783603, 902056594002, 1505015231010, 563588475327, 792287043179, 1101323385644, 1136599275534, 740716578986, 876375148476, 773202768804, 608461077032, 814953896434, 816817205459, 683014349742, 1180198808737, 766605619324, 883926086067, 864971078273, 1207567001731, 1483740501802, 1056451751436, 1157076556291, 1256887860381, 896548619290, 1177215141922, 1456205581533, 991338132012, 1115649415242, 999029665340, 633601032857, 1087908523614, 965969420439, 1224268506663, 1486247562486, 1018822061073, 819223473985, 1447063579572, 957027116076};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 100055558127571;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<long> number = {9517, 9488, 9495, 9502, 9507, 9526, 9519, 9464, 9485, 9524, 9468, 9515, 9497, 9517, 9509, 9475, 9522, 9513, 9458, 9532, 9490, 9477, 9501, 9468, 9460, 9468, 9467, 9522, 9490, 9510};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 285923;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<long> number = {78199835, 81098305};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 159298140;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<long> number = {70786053397208, 73370406894184, 52075204415040, 82161298166820, 45701744286916, 46328090001962, 72800792751040, 47272153686330, 87110600239357, 82841314921442, 47722359713041, 63893577830038, 83855798070010, 52701058343808, 68855646497577, 86121938810094, 59340161923270, 56471158812401, 63193087958905, 63861399117038, 68188555557974, 81499905379089, 76707444877657, 74029456187607, 53276386591812, 43828507553056, 80040770756202, 52439716484764};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 3870280913660454;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<long> number = {12198212819, 11308681049, 11955712637, 10002896999, 11877433584, 10576999330, 9859908151, 11930133219, 10401274453, 11081546233, 10020367028, 10174871644};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 150239252894;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<long> number = {3, 2, 2, 6, 5, 6, 2, 9, 1, 1, 8, 2, 8};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 188;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<long> number = {7, 8, 8, 8, 9, 9, 7, 8, 8, 8, 9, 7, 7, 8, 7, 7, 7, 9, 9, 9, 8, 7, 8, 7, 8, 8, 9, 9, 8, 9, 7, 8, 7, 9, 9};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 518;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<long> number = {97096693963632, 28134420018085, 27497061938472, 10126981571264};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 365061391270591;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<long> number = {34979056, 58324978, 59716869, 34443495, 46022755, 30351173, 41335531, 25789441, 52209425, 45212101, 22784355, 46951035, 46220397, 49261488, 29759959, 21582333, 27872078};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 1107247745;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<long> number = {837357795244975, 526469088306526, 453301549943332, 529642640223516, 726011935200592, 784606391907025, 428014702498653, 856494497227511, 397936474679013, 814110052390469, 937889798704725, 523569591971835, 518028138444041, 839748722549429, 699505365194463, 911010557405013, 507973921549403, 693995030541760, 771355661161198, 743237503339433, 769101888287868, 553935298169655, 433483368197483, 702045354614907, 502620504908778, 800708303883351, 966549011824621, 963812397524804, 865975530981330, 754962866853794, 894972434550348, 857471820708194, 472388990005313, 578181727641601, 479198116239110, 505316889519737, 976221341125172, 561386595876663, 997391422962491, 399003128051510, 984093242632848, 656263362444010, 973478300981035, 771043232296116, 588209657099385, 974560455498609, 396691059196238};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 52354345668181407;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<long> number = {441611435, 443586690, 505724532, 365957576, 357111493, 438691887, 419266138, 234496264, 350145428, 253469396, 236250034, 280014775, 335093291, 259889816, 291718068, 443553280, 235153522, 501578507, 506801199, 503778837, 254490745, 545468186, 313837385, 449776604, 340640734, 365947129, 309655226, 549914579, 530589579, 272894432, 566695308, 520586614, 368421415, 478460249, 310264111, 352467650, 510582858, 365203360, 268272283, 351022019};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 42412802009;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<long> number = {636187202275, 557308332566, 512143622651, 460668290592, 520286963434, 551312393448, 451567268872, 478801555519, 466948238016, 565914704956, 604989261210, 519843490905, 627382318695, 421404454316, 537370963774, 489490010439};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 17042384063387;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<long> number = {450305, 276466, 552283, 358560, 270375, 512178, 556912, 222074, 540615, 292291, 517491, 540771, 469533, 389547, 483575, 467386, 294172, 388191, 500903, 233044, 384078, 250590, 276662, 386488, 478488, 467283, 262753, 306017, 507745, 549788, 406969, 484471, 568644, 568663, 392810, 511202, 342433};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 38272988;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<long> number = {10, 8, 10, 8, 10, 8, 8, 9, 8, 10, 8, 8, 8, 9, 8, 8, 10, 8, 9, 9, 8, 9, 9, 9, 10, 9, 8, 10, 10, 8, 10, 10, 8, 10, 8, 10, 8, 9, 9, 10, 8, 10};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 459;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<long> number = {3675329916, 3935678705, 4929495182, 5534553484, 3888430915, 5048930266, 4260273137, 4137746930, 3938364886, 4549688758, 3862884016, 5396714628, 5499671157, 4724492714, 5423117188, 4852766213, 4105761519, 4631141949, 4162826993, 5437678839, 4944297184, 3997632629, 5174671487, 4303616819, 4110868772, 3858896060, 4564200489, 3790199777, 4998037035, 5136887020, 4441758637, 4908563030, 3821966080, 5318201686, 5575215293, 4598518102, 4317803818, 4750152762, 5445408047, 5333274491, 3713592869, 3692939284, 5244586365, 3772425595, 4028233060, 4860270927, 4192261723, 4363960519, 4186064860, 5055749068};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 425201762255;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<long> number = {894615839696, 975780900190, 989222773337, 943626765638, 908883223310, 981223923972, 936353213813, 891627496746, 927604415871, 979524507601, 989733983274, 990224860920, 907198311693, 958072636026, 943311448334, 952537326153, 947424397688, 970879150878, 954570545468, 979394544904, 945558060231, 933592171142, 886602609174, 952807644637, 943108690799, 990483969794, 940837257356, 991516074453};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 30511447638685;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<long> number = {1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000, 1000000000000000};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 50000000000000000;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<long> number = {577};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 577;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<long> number = {557};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 557;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<long> number = {8226313404080, 293736873134282, 418279488011505, 76775265969262, 74855963079771, 197586206281259, 112154216770001, 783647438810001, 625238336693427, 757455861441056, 98692774612931, 930185616039534, 933408719418428, 516953421696650, 712874910103330, 454685235862658, 336742687917227, 491028387923802, 54017335212073, 765802860114410, 575280403628540, 910018912794058, 956977897703307, 289089463476365, 919063568694492, 146706841609784, 25804988792168, 108544178057244, 577306204206833, 497408203884243, 646784563247619, 38458645194136, 841413688117232, 96060657188647, 713958725133459, 679304292305552, 149553379655920, 949280409378836, 281340901106281, 644519392784527, 344935741344340, 195488542852682, 604882967292438, 604245256357719, 475557856840907, 926970038295973, 6745792119131, 441322028235023, 74075470025862, 844066425308580};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 55732045388709819;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<long> number = {13398, 6019, 4413, 2880, 13522, 18874, 3289, 23017, 7074, 22317, 28693, 6578, 31501, 19162, 5257, 3621, 22408, 27181, 29055, 15027, 10959, 31687, 22439, 32667, 7476, 27518, 5389, 32269, 26935, 28581, 5447, 1935, 7512, 5005, 20979, 7329, 12329, 19275, 10081, 16028, 6823, 29884, 24972, 6368, 27850, 27079, 5455, 17710, 4187, 2018};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 1621967;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<long> number = {994793248104086, 121444713568855, 640052563825972, 674675666190824, 462504857296737, 188306307545936, 152698012611689, 366503508711240, 473218351271232, 589124907782107, 63908625967405, 792238682848286, 376161035943579, 826358000892614, 780180446701405, 193790330516086, 142474544013338, 633418838561347, 573596724344152, 968467115411363, 140976175574946, 899764588948424, 25343936085363, 383033632652538, 448680027851441, 735291836112396, 845308456898103, 726693401395307, 555817475557978, 755425085302286, 261730405369465, 80430593207278, 829538149464636, 791038738914758, 278255102600926, 696699257561342, 59681550711900, 176233581785090, 694545374146866, 437871642481193, 820501096204720, 945732944851630, 844702432629636, 730542983718517, 496453196966254, 713388042412005, 34725627497220, 41127042031532, 7212413433};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 54606145481867137;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<long> number = {3, 5};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<long> number = {557, 3453453453453, 32423534657, 980567457645, 6787896057, 5555, 5555, 767879, 546346456, 67978987, 457547, 235345, 4647, 458679, 456457, 568679, 456457, 5679789, 457457, 6798679, 56867978, 4575686798, 6798054645, 456457678, 456457, 457678, 657};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 111519979601482;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<long> number = {627, 674, 281, 272, 289, 877, 62, 122, 603, 189, 615};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 10742;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<long> number = {10255789528, 11266235189, 11242608872, 11137949908, 11277849958, 10777210498, 10653448036, 11908518808, 11023457753, 10364686248, 11309383303, 11129033333, 11329132133, 11280321648, 10501772890, 11781999754, 10150517567, 10212251746, 11983690368, 10364319529, 11034514500, 10484238046, 11775473788, 10624549797, 10767066249, 11886086990, 10739273303, 11750003033, 11415505363, 10078012497, 10552910253, 11671294892, 11344247686, 11795519125, 10661761152, 10474613996, 10425245975, 11315209188, 10235649157, 11448703729, 11679895436, 11545032460, 10430253414, 10861543921, 10677870460, 10932026304, 10496060028, 10828388027, 11144278050, 10332266748};
    XorAndSum* pObj = new XorAndSum();
    clock_t start = clock();
    long result = pObj->maxSum(number);
    clock_t end = clock();
    delete pObj;
    long expected = 639950127055;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22699521&rd=15179&pm=12197
********************************************************************************
#ifdef NALP_PROJECT
#include "my.h"
#endif
 
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <utility>
 
#include <set>
#include <map>
#include <vector>
#include <string>
#include <queue>
#include <memory.h>
 
#include <iostream>
#include <sstream>
 
using namespace std;
 
typedef long long int64;
 
#define forn(i, n) for(int i = 0; i < (int)(n); i++)
#define ford(i, n) for(int i = (int)(n) - 1; i >= 0; i--)
#define pb push_back
#define mp make_pair
#define y1 YYYYYYYYYYYY1
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
 
template<typename T> inline T Abs(T x) { return (x >= 0) ? x : -x; }
template<typename T> inline T sqr(T x) { return x * x; }
template<typename T> string toStr(T x) { stringstream st; st << x; string s; st >> s; return s; }
 
const int INF = (int)1E9;
const int64 INF64 = (int64)1E18;
const long double EPS = 1E-9;
const long double PI = 3.1415926535897932384626433832795;
 
 
 
 
class XorAndSum {
public:
 
 
 
 
 
 
long long maxSum(vector<long long> a) {
  while (true) {
    bool good = false;
    forn(i, a.size())
      forn(j, a.size())
        forn(k, a.size())
          if (i != j && i != k) {
            int64 nn = a[i] ^ a[j] ^ a[k];
            if (nn > a[i]) {
              a[i] = nn;
              good = true;
            }
          }
 
    forn(i, a.size())
      forn(j, a.size())
        if (i != j) {
          int64 nn = a[i] ^ a[j];
          if (nn > a[i]) {
            a[i] = nn;
            good = true;
          }
        }
 
    if (!good) break;
  }
 
  int64 ans = 0;
  forn(i, a.size())
    ans += a[i];
 
  return ans;
}
};
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/