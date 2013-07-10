/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12398
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

class BallsSeparating {
public:
    int minOperations(vector<int> red, vector<int> green, vector<int> blue);
};

int BallsSeparating::minOperations(vector<int> red, vector<int> green, vector<int> blue) {
    int ret;
    return ret;
}


int test0() {
    vector<int> red = {1, 1, 1};
    vector<int> green = {1, 1, 1};
    vector<int> blue = {1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> red = {5};
    vector<int> green = {6};
    vector<int> blue = {8};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> red = {4, 6, 5, 7};
    vector<int> green = {7, 4, 6, 3};
    vector<int> blue = {6, 5, 3, 8};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> red = {7, 12, 9, 9, 7};
    vector<int> green = {7, 10, 8, 8, 9};
    vector<int> blue = {8, 9, 5, 6, 13};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> red = {842398, 491273, 958925, 849859, 771363, 67803, 184892, 391907, 256150, 75799};
    vector<int> green = {268944, 342402, 894352, 228640, 903885, 908656, 414271, 292588, 852057, 889141};
    vector<int> blue = {662939, 340220, 600081, 390298, 376707, 372199, 435097, 40266, 145590, 505103};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 7230607;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> red = {842398};
    vector<int> green = {491273};
    vector<int> blue = {958925};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> red = {849859, 771363};
    vector<int> green = {67803, 184892};
    vector<int> blue = {391907, 256150};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
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
    vector<int> red = {75799, 268944, 342402};
    vector<int> green = {894352, 228640, 903885};
    vector<int> blue = {908656, 414271, 292588};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 2248052;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> red = {852057, 889141, 662939, 340220};
    vector<int> green = {600081, 390298, 376707, 372199};
    vector<int> blue = {435097, 40266, 145590, 505103};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 2952434;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> red = {586410, 129103, 63503, 583203, 295241};
    vector<int> green = {464255, 68654, 572239, 15842, 881367};
    vector<int> blue = {503768, 863329, 208278, 279088, 731501};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 2759233;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> red = {420946, 319181, 374129, 467387, 58896, 966139, 416910, 869945, 386923, 222765, 666414, 106023, 6550, 306395, 31521, 841395, 939693, 828807, 875462, 401340, 827469, 539183, 3302, 703208, 601565, 829542, 413486, 557622, 961247, 162599, 948591, 570797, 702239, 116279, 272031, 971105, 76654, 483146, 949226, 181525, 859897, 184069, 930713, 705634, 678779, 603501, 246430, 745730, 801898, 679289};
    vector<int> green = {302999, 312528, 93813, 909347, 486597, 286361, 797674, 646495, 964216, 476660, 649633, 417894, 815841, 800031, 590823, 646630, 245334, 329383, 302150, 173283, 482727, 577220, 300668, 636491, 693964, 541276, 42642, 862773, 179872, 190437, 486089, 206566, 422508, 236052, 761943, 468261, 870946, 215684, 114528, 874326, 433624, 840024, 447655, 75599, 564524, 210759, 690214, 516605, 599307, 624147};
    vector<int> blue = {516061, 503277, 790821, 685495, 467442, 321982, 749896, 655375, 199133, 704058, 211900, 149202, 59380, 583930, 737890, 922392, 473774, 664485, 596946, 534443, 225910, 877823, 287097, 731660, 94804, 673291, 440728, 948258, 774341, 807582, 32647, 700838, 817387, 991849, 938602, 676227, 322769, 913379, 913622, 306737, 984216, 685757, 788821, 875839, 390981, 185244, 697995, 765268, 940891, 942107};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 41787727;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> red = {88287, 989461, 132354, 784684, 22740, 900170, 718040, 931081, 738415, 240365, 981928, 510304, 467491, 806460, 679883, 964745, 246714, 993126, 453908, 191353, 722571, 648728, 938019, 549840, 205122, 686370, 464988, 421665, 354987, 325396, 552158, 948186, 761120, 441816, 824650, 117254, 190442, 685565, 78238, 922706, 133145, 713578, 240376, 10181, 450059, 191352, 175464, 6344, 631797, 895114};
    vector<int> green = {104011, 433199, 80134, 674078, 895666, 803114, 738916, 314681, 604514, 80839, 523252, 411674, 220537, 254506, 714841, 197977, 765193, 428994, 790532, 121897, 145342, 412127, 307578, 785637, 112758, 287091, 569528, 33062, 12714, 790720, 658556, 815378, 250597, 455069, 292967, 879370, 60474, 41788, 214153, 232914, 418850, 939622, 469509, 488518, 7012, 660059, 137497, 200853, 241223, 685398};
    vector<int> blue = {457326, 889360, 965669, 71730, 713681, 877759, 204103, 874339, 996784, 939681, 498789, 613887, 359237, 806746, 130114, 427253, 650838, 341172, 339103, 969674, 682825, 37774, 797454, 807657, 572650, 841209, 247675, 46302, 17947, 593449, 988385, 538609, 95351, 505177, 529865, 554149, 893590, 631212, 627329, 765023, 256707, 965180, 31046, 520666, 149507, 639934, 189312, 571647, 707259, 27947};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 36634673;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> red = {296353, 1280, 800355, 445546, 649237, 917188, 680983, 945407, 965737, 256662, 732316, 19860, 884312, 810030, 216881, 770422, 224083, 401226, 793494, 995521, 255740, 583858, 801994, 298725, 188355, 725451, 115898, 443106, 802376, 571594, 382206, 897886, 642958, 960134, 560668, 86659, 561578, 506344, 142377, 408308, 705433, 60723, 805122, 670464, 976799, 359181, 488426, 875146, 999246, 437367};
    vector<int> green = {118102, 853365, 314459, 31714, 397155, 501326, 110535, 725181, 481382, 908984, 82588, 412258, 243078, 363388, 391531, 215129, 751517, 474075, 480661, 746813, 703071, 833958, 754978, 79623, 764534, 508486, 162988, 71081, 447344, 457103, 394710, 898211, 396649, 454056, 595744, 769188, 314353, 29391, 779297, 919723, 907156, 904771, 773286, 734476, 632436, 170786, 636580, 703838, 325775, 491426};
    vector<int> blue = {830659, 363729, 107744, 621506, 77494, 43480, 413568, 597175, 781056, 325993, 834184, 29497, 559301, 976889, 557527, 252010, 418933, 925200, 884954, 852430, 134769, 675568, 496513, 905439, 836420, 643701, 778340, 137657, 485694, 323899, 666236, 828665, 987792, 850582, 326321, 471603, 586128, 669371, 239593, 618972, 914875, 199934, 665396, 802145, 25184, 462767, 697077, 931712, 243388, 245213};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 41257839;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> red = {430788, 103464, 439127, 378400, 280183, 574601, 944154, 858795, 717545, 902306, 525883, 14634, 246827, 62459, 613273, 316882, 97207, 94414, 911392, 514025, 344981, 673029, 219111, 272402, 495401, 520745, 640392, 386201, 654530, 917996, 682079, 367695, 680018, 405137, 230563, 980763, 304558, 412833, 722844, 45651, 848910, 276824, 64276, 657748, 30015, 928001, 706437, 433946, 762293, 473778};
    vector<int> green = {351550, 919953, 646182, 743813, 254918, 380674, 672468, 299745, 747174, 88326, 700812, 786670, 199769, 386038, 975591, 714751, 946428, 26408, 158056, 737587, 364830, 146078, 174416, 249177, 504287, 803166, 436309, 20072, 543385, 173762, 587657, 280116, 917778, 301365, 39829, 388608, 631201, 291539, 909971, 995373, 758488, 475085, 160519, 838354, 798026, 519900, 327708, 494030, 229592, 5831};
    vector<int> blue = {247180, 694394, 623009, 548419, 243037, 204362, 233662, 840010, 496673, 915991, 281922, 139928, 13418, 365953, 932101, 646457, 151442, 912878, 549525, 564135, 624565, 980013, 904353, 716779, 347885, 178413, 346623, 581311, 255109, 238885, 886177, 493319, 876940, 837354, 56993, 777518, 983893, 170142, 806735, 713988, 160524, 433478, 85220, 588121, 47271, 454021, 755441, 832444, 648419, 944606};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 37900214;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> red = {593633, 211316, 46137, 237279, 341207, 383572, 32736, 39339, 457733, 976647, 936427, 370527, 663144, 523038, 55546, 45875, 384421, 930620, 92741, 806460, 614363, 851389, 157524, 782148, 791526, 621541, 229605, 792784, 674698, 453232, 339522, 206915, 911094, 498363, 67339, 73740, 720783, 604107, 315456, 296207, 767669, 327099, 82766, 297005, 481234, 868477, 232044, 811528, 386635, 116589};
    vector<int> green = {581606, 344355, 539392, 107584, 6247, 476731, 283909, 192119, 536154, 112385, 518864, 419309, 103608, 240114, 174019, 417338, 546623, 255782, 616012, 821750, 811090, 130300, 411073, 849526, 915036, 874752, 315333, 991465, 11545, 892774, 86677, 864862, 477402, 695379, 52258, 302661, 871685, 20473, 343326, 563033, 885263, 562211, 924155, 605257, 476478, 206575, 852290, 914024, 301077, 818675};
    vector<int> blue = {356079, 486648, 225494, 523195, 986436, 821025, 738039, 205869, 861592, 931534, 276083, 834584, 105338, 818044, 866221, 468466, 417944, 42253, 197656, 702004, 865723, 487838, 669021, 833309, 745388, 853227, 123547, 638191, 117769, 918374, 401330, 565617, 94498, 998787, 110890, 336896, 293902, 342820, 448302, 647186, 788734, 981589, 429579, 908541, 359347, 610617, 689037, 682546, 762716, 903090};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 38459049;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> red = {58190, 367975, 716754, 901290, 889681, 653589, 660004, 640767, 939806, 44119, 928119, 880866, 298303, 961351, 474928, 113449, 270065, 741875, 836703, 777404, 551359, 511031, 347260, 316203, 877647, 555142, 16775, 679952, 573813, 805621, 463360, 687659};
    vector<int> green = {141602, 291956, 153974, 219365, 963651, 213486, 428037, 900262, 682406, 384927, 421686, 122577, 646333, 739239, 755028, 125826, 625067, 330266, 53920, 175751, 870039, 526013, 591724, 138997, 58988, 448218, 780744, 632364, 395381, 885671, 421517, 962356};
    vector<int> blue = {41985, 820239, 100722, 290954, 433154, 855582, 13107, 669617, 120950, 882588, 6412, 773197, 429625, 245790, 416088, 122846, 241480, 377481, 779862, 735710, 11325, 470768, 859148, 147458, 413910, 189310, 955911, 291190, 597227, 445475, 771273, 800900};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 24022783;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> red = {759564, 499725, 752986, 786187, 225323, 988351, 815046, 523270};
    vector<int> green = {812696, 345573, 327941, 114064, 772300, 218251, 195578, 291685};
    vector<int> blue = {369269, 964300, 274165, 989620, 192456, 438171, 578367, 441979};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 6058298;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> red = {382705, 665763, 524402, 484723, 316633, 714413, 565943};
    vector<int> green = {961524, 145697, 865564, 418674, 345961, 827770, 129711};
    vector<int> blue = {758879, 62719, 998888, 719554, 631190, 249664, 397118};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 5796863;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> red = {254763, 269005, 250268, 570597, 739592, 294462, 617859, 805256, 809919, 165416, 711301, 197442, 297841, 729000, 106284, 85282, 148046, 465233, 754835, 152090, 857540, 965221};
    vector<int> green = {157580, 838328, 966623, 100717, 372906, 443048, 109436, 982952, 589140, 77694, 597519, 490638, 959779, 736105, 344241, 575552, 353392, 272847, 787966, 438886, 338955, 872572};
    vector<int> blue = {576124, 353862, 307601, 530968, 190460, 71041, 100361, 69409, 610672, 583893, 821322, 295177, 273408, 642680, 235816, 877303, 287860, 441150, 31835, 408724, 890399, 628103};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 15622876;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> red = {411676, 18815, 268762, 679015, 325806, 920720, 221570, 888081, 484116, 949630, 830200, 423754, 149279, 130003, 60543, 149855, 836090, 7661, 914631, 759631, 340555, 262623, 116482, 701946, 174657, 885530, 395573, 89633, 265538, 975040, 965555, 460594, 848505, 919993, 514084, 184729, 214671, 850199, 245816, 654807, 977632, 872991, 181239, 603688, 204804, 852674};
    vector<int> green = {207796, 130588, 479855, 394077, 833101, 378890, 21183, 400446, 116932, 2504, 124913, 517787, 905066, 236493, 808239, 257341, 361725, 538423, 460183, 755655, 867958, 93821, 91333, 436027, 853826, 364749, 57356, 869349, 710718, 181402, 109165, 622557, 131267, 286251, 671107, 756793, 373099, 138333, 135265, 998352, 881439, 983749, 819202, 230484, 867855, 581103};
    vector<int> blue = {508295, 837637, 996115, 647194, 532901, 584088, 921677, 599076, 238124, 164665, 652139, 45827, 277140, 159521, 113460, 776650, 100664, 43490, 567257, 545295, 67892, 591598, 751558, 565677, 299907, 279867, 628329, 962080, 585475, 769407, 381211, 489821, 579808, 956470, 4468, 533311, 182573, 297031, 368257, 954062, 340291, 874018, 554647, 672996, 731717, 849873};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 32161530;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> red = {1000000};
    vector<int> green = {1000000};
    vector<int> blue = {1000000};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> red = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> green = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> blue = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 100000000;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> red = {1000000, 1000000, 1000000};
    vector<int> green = {1000000, 1000000, 1000000};
    vector<int> blue = {1000000, 1000000, 1000000};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 6000000;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> red = {1};
    vector<int> green = {1};
    vector<int> blue = {1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> red = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> green = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> blue = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> red = {112442, 784601, 915510, 711696, 608886, 610619, 864418, 635647, 191136, 113083, 701369, 929753, 800617, 81667, 505648, 140509, 302836, 935466, 665677, 768308, 155101, 697235, 226694, 815398, 775173, 80986, 323471, 324259, 349989, 809227, 536553, 573404, 470792, 314365, 572577, 936399, 904129, 913802, 458134, 765391, 681017, 300721};
    vector<int> green = {321607, 347920, 360296, 208140, 272286, 341431, 264164, 398707, 301018, 137999, 366273, 311035, 386215, 217243, 198700, 122970, 410462, 293753, 339671, 368953, 281407, 284090, 207600, 161010, 299817, 397787, 377502, 434753, 130817, 176415, 206604, 418411, 358818, 199169, 115391, 434057, 308571, 301619, 307038, 195258, 329432, 264139};
    vector<int> blue = {122698, 568639, 486991, 104143, 768165, 43963, 780644, 272617, 336814, 546361, 549082, 82678, 403731, 738899, 352962, 532253, 777310, 638740, 632774, 334137, 147968, 729485, 207801, 290919, 120749, 201009, 44110, 807608, 582556, 186429, 690686, 258896, 458536, 409896, 520394, 614728, 245401, 428434, 677410, 530310, 595822, 583994};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 26096923;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> red = {374805, 429667, 457309, 383514, 401790, 416216, 438115, 463478, 382238, 456628, 423510, 389519, 415807, 463607, 443867, 433150, 443867, 418987, 375902, 429559, 394310, 386809};
    vector<int> green = {680094, 634415, 573327, 735071, 681026, 729182, 585087, 607765, 603030, 602742, 704359, 673719, 590807, 606079, 605489, 725188, 673207, 643496, 604514, 587679, 660043, 682149};
    vector<int> blue = {127785, 76469, 148205, 97802, 103766, 118725, 170288, 69317, 70693, 79573, 197547, 90172, 185435, 145573, 185056, 103729, 133692, 152070, 168806, 95281, 177015, 177137};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 12618180;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> red = {714910, 502640, 63791, 276904, 93673, 530857, 653487, 714148, 697324, 200136, 610227, 578780, 187188, 328432, 538958, 644963, 44904, 691252, 86553, 172679, 236068, 492422, 191483, 588853, 75372, 639981, 552618, 585304, 704037, 588849, 577928, 598741, 658065, 322250, 565361, 316619, 451970, 558782, 694107};
    vector<int> green = {498007, 476843, 229166, 402574, 410683, 381463, 460930, 395481, 573721, 335387, 295123, 406731, 349410, 461479, 529560, 367460, 455284, 604706, 621618, 584474, 491893, 537983, 237787, 392448, 261335, 247167, 554450, 450923, 325785, 374145, 300727, 361217, 601603, 265550, 604522, 232815, 563395, 550228, 551306};
    vector<int> blue = {703694, 885697, 860017, 629547, 513925, 261600, 344432, 917202, 341097, 466836, 791998, 221239, 880899, 404717, 245705, 289775, 572624, 534949, 812423, 770266, 884680, 739390, 436659, 181627, 691090, 587869, 893656, 567833, 738580, 182985, 179384, 336586, 343803, 254682, 191656, 737906, 927703, 376973, 922398};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 29791316;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> red = {301777, 471160, 223945, 448873, 319723, 242318, 467560, 152496, 451663, 195271, 299763, 244671, 185330, 133118, 288281, 381186, 312903, 170959, 238801, 402417, 300305, 446375, 147140, 173286, 352500, 347627, 254297, 99763, 359307, 301568, 192042, 254013, 113509, 211675, 132171, 142206, 356025, 345497, 120393, 450182, 400551, 334584, 130856};
    vector<int> green = {288169, 314573, 329075, 346659, 297694, 374716, 288900, 365016, 352228, 344169, 364500, 312511, 358051, 355204, 338682, 304744, 363817, 301540, 377370, 312249, 370234, 386670, 308910, 278577, 304759, 313365, 369442, 376266, 379524, 369289, 292387, 318162, 301565, 297812, 340238, 353798, 373995, 311290, 352304, 387849, 370915, 332971, 301856};
    vector<int> blue = {310512, 367240, 568164, 520907, 243698, 541287, 167937, 230630, 299177, 26990, 419988, 172479, 770963, 660203, 829073, 75308, 361866, 883942, 415658, 547081, 793735, 500181, 100909, 487442, 50632, 352667, 504460, 68291, 432163, 169610, 215618, 526504, 75663, 244206, 296191, 111328, 467503, 746951, 635059, 388425, 284130, 26584, 242394};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 22642695;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> red = {202109, 333739, 150575, 225999, 461374, 107646};
    vector<int> green = {617123, 310904, 387673, 312390, 672558, 390594};
    vector<int> blue = {299925, 675010, 415375, 506904, 218150, 501873};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 3612262;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> red = {755299, 756013, 766964, 769292, 760604, 755704, 763973, 763526, 748416, 758334, 744663, 760136, 746623, 748028, 769222, 767461, 758540, 752177, 746323, 760686, 752643, 769480, 764082, 763145, 763761, 750455, 747973, 758791, 771550, 763141, 746327, 746268, 766183, 761759, 771173, 771109, 753575, 747174, 743640, 769292, 768004, 758483, 767195};
    vector<int> green = {406561, 524868, 351482, 682455, 119448, 538734, 354991, 928309, 732957, 546361, 835960, 660974, 451808, 340435, 699889, 742418, 666340, 901299, 434379, 458536, 716368, 213918, 822694, 614644, 123410, 233608, 609510, 548062, 680432, 510521, 92089, 673923, 817387, 371972, 799262, 632116, 411481, 165979, 853080, 426794, 698700, 876606, 345420};
    vector<int> blue = {386030, 236493, 383317, 538822, 220672, 105429, 144753, 463071, 53028, 243603, 339546, 55431, 329884, 393552, 99365, 386755, 347515, 146825, 174065, 341878, 262610, 170327, 491712, 72005, 130169, 237135, 449409, 300029, 453127, 365486, 119892, 391549, 494284, 206637, 268271, 64448, 513746, 319895, 324099, 512967, 62270, 472835, 129952};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 35278868;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> red = {650290, 860271, 801083, 721645, 937810, 868819, 589084, 933947, 798380, 901513, 931727, 743077, 667525, 748644, 620149, 940869, 931997, 689892};
    vector<int> green = {620145, 580652, 619915, 720714, 718687, 652482, 708848, 624723, 663598, 618775, 626666, 564222, 704514, 699270, 631630, 734817, 564186, 708835};
    vector<int> blue = {708156, 746775, 750694, 722829, 714687, 752280, 744712, 709038, 735280, 760199, 718395, 750413, 758970, 767454, 761284, 764278, 750174, 732750};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 24596900;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> red = {412298, 555829, 314615, 655520};
    vector<int> green = {465472, 301999, 261128, 289468};
    vector<int> blue = {850727, 882058, 655951, 570134};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 3556198;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> red = {355723, 288961, 257461, 220459, 278321, 343608, 218725, 268467, 340249, 197454, 327061, 289865, 263049, 316619, 246723, 313483, 343493, 212043, 256816, 251993, 312721, 234238, 303059, 214531, 242050, 345199, 350084, 340857, 253487, 241252, 223224, 230359, 275609, 236845, 284870, 320729, 221579, 213555, 286793};
    vector<int> green = {565375, 413735, 255428, 427024, 520376, 204061, 481862, 198024, 555219, 314096, 206404, 374294, 485323, 287808, 437438, 416677, 212803, 394865, 394417, 335257, 401682, 246029, 473246, 464808, 416150, 493771, 455118, 529921, 254466, 216336, 385392, 388149, 515209, 391276, 201492, 452448, 529082, 370274, 533648};
    vector<int> blue = {881615, 846523, 817676, 867449, 858898, 835785, 807544, 862969, 831796, 863776, 803697, 868897, 867779, 864934, 832498, 806176, 879504, 884302, 839714, 822056, 815056, 848433, 847714, 825388, 857851, 814316, 817335, 877547, 876033, 812744, 859362, 854406, 830465, 844070, 828071, 815880, 845043, 874224, 811480};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 26664425;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> red = {240693};
    vector<int> green = {753362};
    vector<int> blue = {103372};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> red = {962421, 947245};
    vector<int> green = {499576, 357330};
    vector<int> blue = {433645, 418221};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> red = {704768, 625554, 527265, 498799, 633470, 749265, 749397, 441993, 670757, 425917, 659897, 409802, 423773, 427100, 443404, 758831, 453518, 429250, 584921, 705329, 538299, 720710};
    vector<int> green = {555850, 556268, 555175, 557775, 559119, 553940, 559206, 560032, 556945, 553806, 555936, 558832, 553962, 559810, 558319, 556744, 560481, 560069, 556480, 560770, 559095, 553788};
    vector<int> blue = {478671, 478253, 478772, 478258, 478756, 478074, 478132, 478882, 478723, 477893, 478716, 478887, 478695, 478548, 477805, 478078, 477847, 478040, 478449, 478093, 478517, 478864};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 21744386;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> red = {480373, 369586, 412004, 352745, 508712, 454201, 487615, 340073, 506372, 321504, 560620, 437131, 458408, 545956, 320906, 496824, 366809, 445471, 495278, 540963, 427375, 553767, 405756, 506683, 536645, 369425, 411600, 555404, 408234};
    vector<int> green = {861885, 817619, 985957, 957509, 916360, 916031, 883775, 958797, 988683, 841204, 981977, 974499, 841910, 907935, 859724, 961675, 856410, 954901, 939632, 869628, 985677, 838059, 840539, 916034, 892685, 932361, 962178, 979766, 958407};
    vector<int> blue = {637219, 706293, 651879, 592253, 697679, 823187, 517441, 622651, 553942, 719043, 538368, 746360, 757264, 864521, 654543, 655527, 700160, 737462, 755229, 764012, 831983, 580563, 840931, 583005, 769325, 604647, 528234, 657419, 556770};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 33008250;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> red = {622855, 561043, 622529, 268323, 499103, 418895, 437651, 503703, 480488, 383476, 511525, 451083, 245416, 508407, 364825, 248107, 398265, 601207, 600985, 265509, 364308, 481667, 316059, 498596, 354775, 429959, 558856, 297533, 613850, 238941, 447415, 612181, 514013, 589916, 325137, 459508, 350389, 491664, 602791, 616622, 332485, 296927};
    vector<int> green = {88735, 66938, 67731, 87415, 80439, 87718, 73508, 89802, 102888, 69166, 66346, 89455, 71652, 85444, 76895, 98958, 77710, 82047, 79235, 89589, 92887, 66639, 67687, 95826, 73970, 110187, 74020, 93415, 105162, 87430, 71517, 90408, 109456, 102495, 75379, 93618, 105065, 91444, 105540, 71449, 85599, 101615};
    vector<int> blue = {573616, 534307, 554184, 550811, 419074, 498611, 519684, 430330, 579333, 538019, 600358, 583723, 381009, 387052, 573527, 379996, 574428, 641573, 552722, 426485, 425490, 595309, 451723, 522277, 554208, 424651, 375667, 461165, 681995, 554422, 447086, 484438, 512530, 615040, 595044, 390228, 437250, 421381, 481300, 430309, 659148, 481674};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 21437745;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> red = {268394, 395553, 501637, 409865, 241489, 686392, 183713, 270900, 477318, 550591, 74540, 718275, 166335, 593943, 760327, 722383, 718658, 342856, 788753, 88830, 547171, 274453, 774200, 341398, 76481, 557272, 288646, 793041, 490948, 728777, 355980, 572765, 241354, 419487, 791589, 548062, 491059, 551287};
    vector<int> green = {774968, 758708, 826529, 842734, 782724, 758879, 753317, 814908, 866618, 791484, 842889, 821312, 809203, 806399, 854007, 758659, 808483, 867627, 856625, 769121, 869099, 808535, 842563, 776293, 869362, 872355, 807746, 839490, 849619, 853301, 733971, 785785, 750643, 763494, 785883, 731326, 824452, 844704};
    vector<int> blue = {714863, 753183, 788217, 785123, 699018, 770442, 693680, 721277, 762743, 736755, 734118, 746820, 701316, 752328, 703554, 703270, 705911, 726161, 774095, 711104, 721692, 772897, 774961, 735020, 713756, 723595, 696561, 749163, 734208, 782305, 759957, 790952, 760240, 751125, 712654, 717118, 793803, 718791};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 45839479;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> red = {935068, 918515, 946172, 928026, 899168, 959562, 869100, 917727, 889533, 942004, 881689, 868386, 925337, 948044, 925791, 869075, 877946, 914508, 893614, 933289, 941041, 884138, 923056, 878871, 913834, 883625, 925582, 906224, 939371, 948046, 909306, 897752, 923286, 937700, 952961, 879145, 929058, 907807, 933372, 875746, 921641, 958638, 959515, 935612, 895209, 880170, 946633};
    vector<int> green = {280372, 152518, 333078, 305571, 914727, 390833, 375764, 670813, 658245, 97947, 124990, 958875, 770314, 121196, 623583, 305504, 93126, 840804, 880341, 164489, 803586, 652084, 466716, 561973, 651880, 261883, 815074, 597420, 790039, 836052, 564722, 872091, 788745, 438959, 763696, 373828, 354139, 250885, 103140, 525938, 650764, 382931, 446902, 902913, 616624, 633997, 655513};
    vector<int> blue = {355090, 392162, 614682, 71549, 355842, 85533, 305220, 286146, 478346, 588524, 582728, 100324, 228268, 330052, 454553, 456762, 474555, 299166, 231646, 198660, 574615, 251211, 397477, 72093, 322453, 159652, 282719, 498372, 218635, 336919, 513529, 291209, 570011, 454725, 623857, 361123, 212961, 334147, 559649, 618504, 402767, 148547, 90187, 523242, 145060, 160289, 309415};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 41299954;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> red = {441402, 340892, 507260, 552959, 574124, 282116, 540537, 609320, 480250, 435351, 634650, 540085, 489825, 369433, 422254, 562438, 301799, 627622, 340242, 622340, 601132, 508125, 472220, 270844, 393598, 428456, 642188, 466546, 311188, 555430, 356071, 367305, 402060, 308971, 455418, 293895, 361990, 532462, 644499, 273559, 454448, 507950, 599932, 470326, 596286, 291092, 644228};
    vector<int> green = {342356, 253221, 383018, 379233, 284228, 264404, 264734, 234769, 406001, 237146, 331924, 408549, 291744, 406105, 404170, 304050, 251837, 329069, 279463, 396566, 363960, 299708, 396751, 393589, 272116, 306624, 390697, 339814, 230419, 316549, 324453, 389850, 380789, 411672, 321556, 400729, 408019, 329434, 231959, 344665, 359677, 350028, 279258, 379593, 273410, 233867, 330517};
    vector<int> blue = {463943, 476989, 554213, 538593, 527732, 533683, 468055, 488600, 516251, 488222, 580192, 551068, 551541, 577535, 557059, 448922, 449227, 512689, 525862, 493381, 502248, 569225, 526094, 512959, 554449, 545935, 443303, 529161, 578983, 445479, 456610, 485882, 487732, 506758, 539990, 580768, 518943, 508204, 500111, 545157, 465702, 502282, 502287, 458442, 441875, 548474, 549783};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 35881896;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> red = {950142, 942085, 942180, 935617, 949420, 948661, 932973, 949171, 944597, 948822, 948475, 928598};
    vector<int> green = {317875, 355695, 326425, 306391, 324406, 370845, 394216, 359196, 354667, 378078, 344306, 303086};
    vector<int> blue = {636869, 616830, 603674, 801913, 757434, 357937, 449887, 365394, 604303, 718587, 888156, 436155};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 11971401;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> red = {505699, 797916, 730414, 475273, 747859, 570501, 488289, 811433, 505927, 413386, 446627, 655674, 753902, 506206};
    vector<int> green = {442986, 570311, 466339, 502024, 491855, 578333, 565170, 445164, 520347, 586677, 437692, 556735, 549329, 548311};
    vector<int> blue = {43633, 103665, 64699, 591212, 114242, 533858, 551249, 313426, 156977, 369575, 278545, 570320, 54041, 241258};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 10817505;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> red = {684431, 880894, 762644, 866340, 732295, 749843, 842738, 674376, 952314, 844977, 853630, 704884, 662195, 758000, 910297, 793777, 843348, 842063, 870857, 959358, 861976, 816498, 839833, 958815, 812375, 714933, 952245, 689323};
    vector<int> green = {601758, 569710, 569548, 614151, 647254, 587922, 540463, 669494, 625185, 606302, 585761, 524652, 598746, 618873, 624266, 688687, 694334, 673333, 681190, 635056, 681003, 609741, 627654, 586271, 577087, 604487, 668469, 680993};
    vector<int> blue = {483291, 463651, 552208, 384732, 550850, 311439, 564607, 523993, 552571, 486573, 291926, 562573, 377464, 412787, 438235, 544800, 378768, 392063, 304555, 559777, 463382, 538632, 461436, 296529, 377620, 409680, 454528, 485005};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 30163258;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> red = {789037, 580476, 725738, 738490, 770952, 788276, 808463, 531159, 796124, 637345, 586468, 669066, 620398, 600891, 787937, 708272, 584561, 564621, 774182, 796360, 756468, 572651, 774774, 754439, 635909, 718781, 743265, 598020, 589085, 792597, 638521, 559950, 636313, 800336, 697559, 620123, 603912, 810164, 663204, 555074, 738986, 788294, 753012, 561063, 728936, 673854, 806858, 635191, 686775, 759705};
    vector<int> green = {975872, 987786, 981293, 971873, 957260, 952557, 983607, 956800, 971753, 975793, 986246, 956545, 962791, 959592, 964852, 973067, 979708, 985541, 970346, 983431, 960939, 985179, 988025, 978600, 985740, 982623, 959508, 985776, 956796, 975448, 952881, 978074, 981750, 975262, 956899, 955420, 976835, 979925, 955039, 977416, 967540, 988348, 974738, 969713, 987363, 963510, 975661, 971584, 980649, 954489};
    vector<int> blue = {595444, 283383, 440637, 213236, 379420, 459545, 336525, 604033, 583094, 280387, 294854, 239052, 410350, 442459, 359347, 479757, 241838, 437419, 384350, 299315, 492433, 472001, 312373, 382522, 382189, 466147, 252449, 467418, 333625, 290771, 419868, 214477, 612608, 320771, 567319, 585236, 383282, 285461, 621718, 337228, 299117, 432565, 606979, 357952, 475163, 573309, 232191, 605853, 445993, 392430};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 55396130;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> red = {561048, 519358, 621815, 618012, 533592, 578770, 544925, 589819, 607725, 642652, 637025, 509375, 618720, 571678, 528567, 598106, 598670, 596636, 655508, 559336, 647075, 620947, 585907, 573056, 598364, 631091, 651714, 629861, 566815, 628852, 580325, 556737, 547743, 604646, 594410, 630800, 625152, 613070, 522256, 619886, 608831, 585642, 654931, 643107, 519625, 538168, 613284, 561886, 633627, 601912};
    vector<int> green = {621485, 482145, 667160, 763004, 748817, 493936, 636950, 406473, 533601, 499111, 501132, 694731, 769076, 466497, 595584, 674699, 450961, 402473, 365250, 538053, 672604, 638685, 615679, 661708, 705947, 514154, 505484, 628720, 723684, 495796, 713935, 498270, 588210, 574497, 569819, 379163, 624861, 650427, 679193, 555126, 418487, 461440, 555476, 461950, 698773, 695031, 679328, 493319, 709747, 368185};
    vector<int> blue = {174477, 303267, 308968, 261291, 478628, 135107, 217176, 269513, 279129, 402426, 455106, 148898, 396061, 319526, 98083, 345800, 316040, 290278, 224407, 139158, 383373, 450903, 294171, 297954, 350891, 148800, 379296, 312277, 334103, 270072, 131615, 275439, 104377, 252748, 454998, 115450, 358841, 461501, 376624, 107886, 223437, 179004, 367140, 395544, 150891, 471229, 224789, 124285, 309770, 363403};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 40912363;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> red = {747658, 856086, 768990, 756014, 747030, 774967, 853765, 765091, 880048, 804604, 774056, 825283, 805634, 757809, 889469, 829972, 872190, 745373, 875313, 890175, 877036, 872959, 846805, 853242, 746176, 741997, 899895, 893719, 823392, 764257, 803269, 823756, 862459, 762546, 772747, 871475, 898588, 887722, 778922, 878454, 824156, 840846, 847087, 766579, 829964, 861445, 757529, 854063, 887785, 888596};
    vector<int> green = {707208, 856672, 619234, 616329, 679705, 577064, 547454, 626419, 893046, 853139, 550993, 553198, 777419, 819034, 864863, 698054, 547724, 584465, 726339, 832392, 937705, 690817, 719210, 563028, 768528, 551163, 613969, 890265, 593764, 711129, 605029, 864238, 708474, 739623, 697263, 559237, 807706, 807402, 890395, 589920, 538906, 769910, 780418, 756544, 893948, 745077, 911536, 918951, 566038, 722555};
    vector<int> blue = {409702, 272148, 294869, 256924, 347048, 265348, 325819, 324454, 239663, 239098, 243426, 307704, 337234, 344793, 352890, 414639, 395269, 272267, 301169, 383430, 349533, 348568, 379155, 271874, 253405, 217384, 371657, 409640, 300542, 235922, 256569, 221514, 337899, 346250, 218690, 320849, 275356, 331029, 282449, 336403, 343144, 231487, 270554, 298292, 230587, 286954, 311069, 366676, 315447, 382973};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 50970021;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> red = {787558, 536887, 662051, 457729, 764547, 386857, 511087, 410624, 389314, 683081, 797906, 404891, 474675, 727265, 812793, 741787, 509983, 671747, 653613, 752968, 673722, 391968, 652521, 505794, 428023, 771897, 691212, 492553, 573160, 422428, 724545, 693605, 432017, 661886, 587037, 414175, 768091, 541114, 383757, 759022, 626295, 443469, 697834, 830004, 705397, 758552, 444279, 639904, 526866, 760932};
    vector<int> green = {306987, 389604, 320069, 383718, 276207, 319880, 353904, 281723, 384383, 329315, 453925, 377651, 285025, 291635, 446625, 283768, 313743, 353252, 276096, 410384, 399322, 283542, 382755, 460416, 399291, 496676, 421151, 424787, 466710, 492672, 474415, 341077, 295210, 446186, 445817, 312623, 402136, 441748, 395182, 475888, 335619, 327416, 342335, 367297, 297138, 281577, 328270, 436251, 507564, 362831};
    vector<int> blue = {130905, 154394, 88701, 177688, 113375, 144600, 247018, 232970, 109627, 124241, 203750, 249305, 208021, 92802, 118870, 174082, 229049, 189988, 254245, 72427, 169675, 264878, 215797, 179864, 252227, 108972, 193192, 263794, 173710, 179306, 200713, 172868, 272976, 175091, 86710, 203539, 143629, 259616, 88011, 219860, 177906, 214290, 212074, 201846, 145610, 220292, 202362, 180239, 253345, 231503};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 27907170;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> red = {616389, 547302, 524921, 607812, 596290, 611640, 655988, 629136, 650630, 633791, 581417, 558019, 666460, 646185, 589425, 528731, 660252, 627714, 666899, 558957, 517358, 616583, 617295, 543498, 577604, 667337, 537459, 550716, 623938, 654412, 575895, 560446, 590907, 558722, 648061, 594030, 525938, 631401, 612043, 561320, 654445, 563267, 536562, 518850, 530968, 644535, 576871, 564858, 570795, 596242};
    vector<int> green = {520883, 519804, 503930, 511219, 548017, 519211, 581487, 614296, 626190, 516906, 449690, 491017, 499082, 528480, 463193, 548112, 602693, 623609, 509745, 625866, 540312, 605650, 546381, 621171, 627228, 489993, 626379, 545264, 528826, 629787, 471415, 621045, 538698, 628260, 455190, 517183, 498781, 469291, 608097, 451686, 539833, 498414, 454272, 511861, 475656, 570460, 436394, 463658, 544007, 571041};
    vector<int> blue = {280529, 344255, 435478, 294657, 257584, 295762, 259414, 343719, 173397, 178658, 255082, 437163, 313439, 367629, 426349, 364346, 377052, 306695, 272291, 192190, 360473, 319497, 425468, 358560, 304862, 428779, 330808, 193805, 201931, 314491, 254670, 298102, 245686, 225616, 369419, 275186, 195333, 176329, 298043, 203597, 427788, 414379, 210210, 423630, 306488, 269344, 242945, 408027, 400450, 383088};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 41966201;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> red = {831204, 650172, 698041, 806375, 674169, 587946, 630252, 611921, 724823, 589334, 749812, 735790, 637227, 585548, 624182, 649812, 843130, 660820, 601481, 700808, 732512, 679495, 814065, 725488, 694770, 664014, 791768, 655788, 566585, 809195, 722597, 722277, 857993, 585246, 611345, 683474, 834872, 573650, 820268, 749516, 827376, 761938, 611719, 664853, 631367, 666709, 661656, 589691, 731278, 703143};
    vector<int> green = {880691, 749124, 753485, 887802, 861304, 872139, 842492, 861166, 698116, 921747, 691303, 916826, 747715, 882713, 925042, 916431, 859351, 906694, 706075, 787594, 741675, 716218, 798366, 904614, 743202, 737847, 856642, 829805, 865826, 728563, 769881, 906821, 716918, 708855, 903892, 873928, 822278, 914991, 915267, 730033, 768919, 756532, 746512, 784452, 913877, 911701, 865653, 887095, 695360, 922999};
    vector<int> blue = {464096, 613013, 589868, 603495, 402155, 358248, 177031, 613178, 133134, 442838, 446823, 145597, 517622, 126725, 235688, 103995, 282529, 403184, 394495, 103801, 602452, 207010, 394124, 602521, 209920, 228742, 624235, 372891, 171674, 147906, 419032, 447779, 554146, 132718, 154111, 624413, 425124, 102336, 315872, 454796, 585612, 608791, 506066, 609559, 515610, 366526, 304121, 155608, 241741, 613110};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 53275187;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> red = {741776, 594514, 553375, 531930, 547766, 763028, 714540, 550635, 538391, 734886, 677318, 773681, 770504, 748016, 809357, 618647, 657340, 535544, 729047, 601385, 664338, 818139, 572207, 773937, 736237, 592937, 525747, 683208, 698560, 719455, 786613, 690595, 751779, 748000, 612969, 589839, 603346, 553676, 745713, 712695, 635730, 740563, 711133, 582936, 731303, 800898, 706910, 629982, 728914, 593938};
    vector<int> green = {257034, 62258, 144706, 164470, 105277, 96006, 258837, 206315, 82118, 74963, 195715, 150972, 208844, 208195, 238099, 258425, 108439, 244439, 251405, 180331, 70257, 112095, 211975, 251591, 82846, 138157, 216943, 160806, 241128, 260711, 95747, 203213, 155279, 235195, 99991, 161675, 172217, 129063, 191168, 81426, 120094, 152802, 262955, 72930, 153978, 245357, 171667, 240246, 172977, 103993};
    vector<int> blue = {492026, 666317, 248347, 282130, 354401, 326614, 694392, 569172, 663087, 529413, 512205, 384476, 672185, 368268, 661491, 528794, 236114, 483506, 211637, 477126, 296322, 613672, 700577, 426655, 345630, 288262, 452771, 433691, 362701, 628183, 545254, 575210, 463359, 647571, 552037, 298942, 260736, 505578, 621447, 564303, 429919, 615755, 383097, 552574, 439277, 228749, 534294, 600977, 578016, 348101};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 32068390;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> red = {307450, 465348, 181111, 577899, 280159, 197935, 156758, 269636, 487763, 468248, 144987, 276631, 360619, 111006, 146168, 617703, 118606, 487023, 472224, 527271, 395449, 438565, 460438, 454797, 352125, 577616, 147297, 422222, 364587, 418934, 351967, 324161, 265992, 541877, 474933, 342266, 253637, 267123, 595733, 220491, 618380, 219832, 233161, 281621, 523348, 432447, 597492, 363876, 595393, 497910};
    vector<int> green = {601938, 654784, 249723, 419233, 674930, 573147, 393141, 330650, 694018, 484683, 750768, 199249, 718365, 122659, 750120, 288470, 683532, 676759, 708318, 643521, 865817, 238785, 598621, 356825, 816449, 581719, 698391, 429313, 340853, 191492, 816701, 859437, 545274, 305646, 236206, 436472, 272116, 460208, 550721, 616972, 404802, 521293, 336166, 836542, 619660, 404576, 764531, 388132, 384947, 162903};
    vector<int> blue = {483471, 506374, 565513, 703423, 470558, 476808, 634691, 659797, 513000, 583744, 516884, 604470, 537155, 676809, 630833, 539552, 527894, 681197, 533645, 480207, 531139, 657805, 645675, 678713, 592780, 560666, 573889, 493218, 478488, 581975, 528134, 573419, 607726, 675728, 688468, 545910, 580864, 542719, 538965, 564228, 601459, 671210, 468331, 586369, 695244, 593267, 689513, 617105, 615768, 568657};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 40762919;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> red = {284944, 258321, 250074, 226226, 258599, 242232, 300701, 313343, 311440, 408496, 264373, 263864, 298324, 317200, 184645, 188861, 246792, 365739, 392024, 302145, 256630, 336075, 306733, 291959, 402302, 287470, 379517, 263959, 241269, 332560, 218767, 417553, 411208, 215722, 363663, 302726, 190036, 228750, 188328, 271683, 411262, 394417, 294084, 309136, 407323, 318077, 343407, 291532, 373493, 303955};
    vector<int> green = {436360, 312481, 394320, 140626, 889557, 674336, 796258, 273173, 365305, 327829, 873242, 528319, 659285, 471624, 914692, 179455, 110799, 506574, 672568, 638772, 871393, 304655, 660056, 363910, 448859, 358617, 911848, 451714, 716038, 833050, 546456, 190521, 247312, 560252, 145892, 657382, 164738, 165348, 439553, 851327, 134368, 578208, 185493, 714997, 152171, 173929, 489252, 280356, 668490, 519079};
    vector<int> blue = {684393, 664499, 678928, 676163, 657225, 717364, 696533, 695619, 707874, 712112, 690357, 697588, 669830, 676183, 662651, 674606, 677092, 658220, 709823, 694965, 697176, 657369, 701995, 715549, 705267, 700681, 661321, 707101, 710635, 671595, 704284, 688871, 688434, 675967, 696350, 713988, 706339, 683943, 675884, 657690, 675225, 708865, 716557, 691334, 706899, 698569, 711065, 661111, 666035, 713125};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 37668401;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> red = {331664, 335388, 275869, 202607, 187330, 226768, 224183, 212017, 276684, 363721, 229897, 388883, 308956, 306585, 190356, 264719, 262646, 398318, 356900, 332444, 234177, 353356, 438157, 342428, 197201, 384415, 388955, 179395, 351504, 397792, 312613, 267615, 427786, 427056, 255853, 366267, 240481, 437241, 251669, 275745, 220918, 394011, 357939, 198446, 224847, 223880, 315406, 180998, 254004, 203481};
    vector<int> green = {461227, 464501, 523025, 523020, 519858, 483876, 473947, 474894, 490788, 474716, 470097, 467925, 512460, 519304, 501514, 493340, 477634, 504977, 474865, 463899, 479933, 518182, 462872, 483501, 489412, 492522, 459730, 474384, 490187, 516168, 506544, 501562, 482623, 504463, 493265, 482491, 514570, 509300, 509982, 499598, 522679, 502802, 509387, 489120, 482306, 506219, 515142, 474609, 495619, 480697};
    vector<int> blue = {506249, 636060, 653775, 492632, 307356, 358799, 755358, 342127, 438852, 326104, 519118, 653797, 565749, 615952, 586075, 401089, 398960, 652679, 569212, 464422, 635241, 432844, 750886, 416258, 753295, 483657, 354230, 514930, 383757, 661321, 686635, 734433, 311767, 631309, 600127, 671582, 772011, 589579, 599761, 498360, 739579, 779366, 609696, 338883, 306432, 711457, 714917, 721275, 655434, 383185};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 37618844;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> red = {1, 1, 1};
    vector<int> green = {1, 1, 1};
    vector<int> blue = {1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> red = {842398, 491273, 958925, 849859, 771363, 67803, 184892, 391907, 256150, 75799};
    vector<int> green = {268944, 342402, 894352, 228640, 903885, 908656, 414271, 292588, 852057, 889141};
    vector<int> blue = {662939, 340220, 600081, 390298, 376707, 372199, 435097, 40266, 145590, 505103};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 7230607;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> red = {4, 6, 5, 7};
    vector<int> green = {7, 4, 6, 3};
    vector<int> blue = {6, 5, 3, 8};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> red = {1, 2, 1};
    vector<int> green = {2, 1, 2};
    vector<int> blue = {3, 3, 3};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> red = {842398, 491273, 958925, 849859, 771363, 67803, 184892, 391907, 256150, 75799};
    vector<int> green = {268944, 342402, 894352, 228640, 903885, 908656, 414271, 292588, 852057, 889141};
    vector<int> blue = {662939, 340220, 600081, 390298, 376707, 372199, 435097, 40266, 145590, 26935};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 6752439;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> red = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> green = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> blue = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 100000000;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> red = {1, 1, 1};
    vector<int> green = {1, 1, 1};
    vector<int> blue = {3, 3, 3};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> red = {7, 12, 9, 9, 7};
    vector<int> green = {7, 10, 8, 8, 9};
    vector<int> blue = {8, 9, 5, 6, 13};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> red = {806001, 549081, 341301, 873650, 554200, 674693, 508824, 983896, 236468, 661566, 420424, 776772, 544959, 81689, 285366, 668806, 686874, 688048, 507237, 690391, 222453, 486689, 959986, 790879, 497813, 586283, 951166, 957686, 460154, 850265, 396144, 781680, 764490, 948110, 137101, 980531, 948897, 355089, 282364, 697246, 790737, 95023, 340697, 218366, 220774, 661749, 243554, 274048, 166809, 687181};
    vector<int> green = {255752, 730881, 228817, 850124, 265163, 979754, 99590, 605416, 527093, 88247, 163085, 256151, 361764, 185681, 449279, 727418, 250151, 449431, 424384, 215959, 603176, 539019, 918952, 977711, 99207, 123976, 465865, 511859, 439473, 88021, 298821, 482432, 875644, 708329, 120177, 593686, 673084, 682599, 182824, 708801, 624773, 944282, 538029, 99372, 118364, 665423, 27215, 451474, 768478, 552274};
    vector<int> blue = {306432, 658256, 67511, 22468, 573180, 353159, 308324, 565404, 501380, 396741, 721385, 482742, 414943, 780420, 334652, 260254, 949830, 847333, 375962, 501907, 361395, 76139, 909086, 333191, 264454, 278455, 341529, 312278, 644973, 854570, 345037, 102739, 853992, 446841, 660631, 399885, 389642, 791243, 47584, 766051, 248966, 4999, 974198, 616922, 944839, 903484, 353790, 845617, 451993, 263483};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 38687603;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> red = {5, 7, 9, 10};
    vector<int> green = {4, 6, 8, 7};
    vector<int> blue = {3, 4, 5, 7};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> red = {1, 1};
    vector<int> green = {1, 1};
    vector<int> blue = {1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> red = {1000000, 1, 1000000};
    vector<int> green = {1, 99999, 1};
    vector<int> blue = {1, 500, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 1000504;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> red = {1, 1, 1};
    vector<int> green = {2, 6, 4};
    vector<int> blue = {3, 1000, 6};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> red = {5, 5, 5, 5, 5};
    vector<int> green = {1, 1, 3, 3, 3};
    vector<int> blue = {1, 1, 3, 3, 3};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> red = {10, 10, 10, 10};
    vector<int> green = {4, 4, 2, 3};
    vector<int> blue = {6, 6, 4, 4};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> red = {1000000, 1000000, 1000000};
    vector<int> green = {1, 1, 1};
    vector<int> blue = {1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 2000004;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> red = {1, 1, 1};
    vector<int> green = {2, 2, 2};
    vector<int> blue = {33, 33, 33};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> red = {12, 10, 11};
    vector<int> green = {12, 9, 7};
    vector<int> blue = {12, 8, 6};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> red = {101, 1, 1, 100, 99, 90, 1};
    vector<int> green = {101, 1, 1, 99, 100, 1, 91};
    vector<int> blue = {10000, 10000, 10000, 10000, 10000, 10000, 10000};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 20586;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> red = {10, 9, 8};
    vector<int> green = {5, 1, 2};
    vector<int> blue = {3, 7, 5};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> red = {1, 1, 1, 1};
    vector<int> green = {2, 4, 4, 4};
    vector<int> blue = {3, 2, 2, 2};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> red = {2, 5};
    vector<int> green = {3, 6};
    vector<int> blue = {7, 8};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
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
    vector<int> red = {17, 12, 9, 9, 27};
    vector<int> green = {7, 10, 8, 8, 9};
    vector<int> blue = {8, 9, 5, 6, 13};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> red = {10, 2, 10};
    vector<int> green = {1, 2, 1};
    vector<int> blue = {1, 3, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> red = {7, 4, 4, 4, 6};
    vector<int> green = {5, 5, 5, 5, 5};
    vector<int> blue = {2, 6, 6, 6, 5};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> red = {1, 2, 3, 4};
    vector<int> green = {7, 4, 6, 3};
    vector<int> blue = {6, 5, 3, 6};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> red = {1, 100, 100};
    vector<int> green = {100, 1, 100};
    vector<int> blue = {100, 100, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 303;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> red = {10, 15, 21, 30};
    vector<int> green = {1, 2, 3, 4};
    vector<int> blue = {2, 1, 4, 3};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> red = {11, 22};
    vector<int> green = {13, 26};
    vector<int> blue = {45, 56};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
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
    vector<int> red = {1000, 1000, 1000};
    vector<int> green = {1, 1, 1};
    vector<int> blue = {1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 2004;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> red = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> green = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    vector<int> blue = {1, 1, 1, 1, 1, 1, 12, 2, 22, 2, 2, 2, 3, 3, 4, 4, 5, 55, 5, 3, 55, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 177;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> red = {100000, 100000, 1};
    vector<int> green = {1, 1, 1000};
    vector<int> blue = {1, 1, 1000};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 101004;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> red = {400, 600, 500, 700};
    vector<int> green = {7, 4, 6, 3};
    vector<int> blue = {6, 5, 3, 8};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 930;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> red = {42, 18468, 6335, 26501, 19170, 15725, 11479, 29359, 26963, 24465, 5706, 28146, 23282, 16828, 9962, 492, 2996, 11943, 4828, 5437, 32392, 14605, 3903, 154, 293, 12383, 17422, 18717, 19719, 19896, 5448, 21727, 14772, 11539, 1870, 19913, 25668, 26300, 17036, 9895, 28704, 23812, 31323, 30334, 17674, 4665, 15142, 7712, 28254, 6869};
    vector<int> green = {25548, 27645, 32663, 32758, 20038, 12860, 8724, 9742, 27530, 779, 12317, 3036, 22191, 1843, 289, 30107, 9041, 8943, 19265, 22649, 27447, 23806, 15891, 6730, 24371, 15351, 15007, 31102, 24394, 3549, 19630, 12624, 24085, 19955, 18757, 11841, 4967, 7377, 13932, 26309, 16945, 32440, 24627, 11324, 5538, 21539, 16119, 2083, 22930, 16542};
    vector<int> blue = {4834, 31116, 4640, 29659, 22705, 9931, 13978, 2307, 31674, 22387, 5022, 28746, 26925, 19073, 6271, 5830, 26778, 15574, 5098, 16513, 23987, 13291, 9162, 18637, 22356, 24768, 23656, 15575, 4032, 12053, 27351, 1151, 16942, 21725, 13967, 3431, 31108, 30192, 18008, 11338, 15458, 12288, 27754, 10384, 14946, 8910, 32210, 9759, 24222, 18589};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 1267458;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> red = {4, 4, 5, 7};
    vector<int> green = {7, 6, 6, 3};
    vector<int> blue = {6, 5, 3, 8};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> red = {3, 3, 3, 3};
    vector<int> green = {2, 2, 2, 2};
    vector<int> blue = {2, 2, 2, 2};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> red = {9, 9, 9};
    vector<int> green = {4, 4, 4};
    vector<int> blue = {3, 2, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> red = {3, 3, 1};
    vector<int> green = {3, 1, 3};
    vector<int> blue = {1, 3, 3};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> red = {1, 2, 2};
    vector<int> green = {2, 1, 1};
    vector<int> blue = {100, 100, 100};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 205;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> red = {1, 3, 1};
    vector<int> green = {1, 5, 3};
    vector<int> blue = {100, 1, 3};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> red = {8, 12, 9, 9, 13};
    vector<int> green = {7, 10, 8, 8, 9};
    vector<int> blue = {7, 9, 5, 6, 7};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> red = {2, 2, 9, 2};
    vector<int> green = {2, 2, 9, 2};
    vector<int> blue = {10, 10, 10, 10};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> red = {7, 7, 7};
    vector<int> green = {4, 4, 4};
    vector<int> blue = {1, 2, 2};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> red = {999999, 999999, 999999};
    vector<int> green = {999999, 999999, 999999};
    vector<int> blue = {999999, 999999, 999999};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 5999994;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> red = {1, 1, 10};
    vector<int> green = {1, 10, 1};
    vector<int> blue = {10, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> red = {1, 1, 1};
    vector<int> green = {1, 1, 1};
    vector<int> blue = {2, 2, 2};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> red = {714993, 259246, 101941, 138334};
    vector<int> green = {892489, 701811, 622022, 866706};
    vector<int> blue = {579722, 639937, 605872, 586634};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 3820325;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> red = {10, 10, 10};
    vector<int> green = {100, 100, 100};
    vector<int> blue = {10, 10, 10};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> red = {50, 55, 60, 65};
    vector<int> green = {20, 22, 24, 26};
    vector<int> blue = {10, 12, 14, 16};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 217;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> red = {13, 2, 2};
    vector<int> green = {13, 1, 1};
    vector<int> blue = {13, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> red = {1, 2, 1};
    vector<int> green = {1, 2, 1};
    vector<int> blue = {10, 2, 10};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> red = {4, 5, 6};
    vector<int> green = {1, 1, 1};
    vector<int> blue = {1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> red = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> green = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> blue = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> red = {42, 1, 29, 15, 32, 42, 28, 5, 43, 17};
    vector<int> green = {18, 20, 9, 6, 28, 46, 37, 3, 33, 19};
    vector<int> blue = {35, 25, 13, 46, 12, 43, 42, 4, 22, 46};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 405;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> red = {1, 1, 1};
    vector<int> green = {3, 3, 3};
    vector<int> blue = {1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> red = {1, 1, 1};
    vector<int> green = {2, 2, 2};
    vector<int> blue = {3, 3, 3};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> red = {14628, 2085, 19097, 25732, 25566, 27571, 15097, 28549, 9911, 3793, 18659, 12606, 11115, 32349, 28556, 4766, 26489, 2277, 30233, 26055, 11724, 6588, 11873, 14787, 923, 19021, 4341, 5746, 15502, 7600, 23134, 13511, 8738, 6779, 3493, 1844, 10830, 14043, 25, 9827, 359, 19171, 21068, 30247, 27457, 32035, 31327, 5810, 16279, 23933};
    vector<int> green = {17279, 30216, 1452, 8756, 26288, 5556, 29491, 15174, 8393, 22713, 21100, 12284, 27072, 28107, 5009, 31423, 12584, 10687, 3440, 22317, 17400, 26177, 12633, 13932, 16270, 14533, 13882, 19902, 13812, 5568, 32521, 29526, 26465, 13335, 16482, 15723, 13571, 17623, 10610, 6026, 12539, 21288, 5139, 16944, 28586, 24700, 56, 28824, 32299, 4364};
    vector<int> blue = {24204, 30930, 8736, 31877, 28246, 18965, 18098, 30462, 12960, 7510, 15059, 26158, 17048, 5145, 9414, 30428, 31030, 14728, 20194, 18070, 18463, 6594, 12691, 21926, 12746, 25461, 24225, 21826, 12001, 18351, 12725, 9731, 746, 3057, 27161, 6809, 17446, 646, 4543, 21180, 6841, 23826, 21893, 16997, 31500, 3438, 12983, 14655, 24432, 10419};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 1250634;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> red = {1, 1, 100};
    vector<int> green = {100, 1, 1};
    vector<int> blue = {1, 100, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> red = {10, 12, 9, 9, 12};
    vector<int> green = {7, 10, 8, 8, 10};
    vector<int> blue = {12, 9, 5, 13, 13};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> red = {10, 1, 1};
    vector<int> green = {10, 1, 1};
    vector<int> blue = {1, 10, 10};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> red = {1, 1, 1, 1};
    vector<int> green = {7, 4, 6, 3};
    vector<int> blue = {6, 5, 3, 8};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> red = {1, 1, 2};
    vector<int> green = {1, 1, 2};
    vector<int> blue = {2, 2, 2};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> red = {1, 7, 7, 4};
    vector<int> green = {8, 7, 3, 8};
    vector<int> blue = {6, 2, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> red = {1, 8, 8};
    vector<int> green = {7, 8, 8};
    vector<int> blue = {8, 8, 8};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> red = {1, 2, 2};
    vector<int> green = {2, 1, 2};
    vector<int> blue = {2, 2, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> red = {100, 100, 1};
    vector<int> green = {1, 1, 2};
    vector<int> blue = {1, 1, 2};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> red = {2, 3, 3};
    vector<int> green = {1, 1, 1};
    vector<int> blue = {1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
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
    vector<int> red = {5, 6};
    vector<int> green = {6, 7};
    vector<int> blue = {8, 3};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> red = {2, 3, 2};
    vector<int> green = {1, 3, 1};
    vector<int> blue = {4, 4, 4};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> red = {9, 9, 1};
    vector<int> green = {1, 2, 3};
    vector<int> blue = {1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> red = {1, 1, 1000000};
    vector<int> green = {1000000, 1, 1};
    vector<int> blue = {1, 1000000, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> red = {8, 8, 8};
    vector<int> green = {2, 2, 2};
    vector<int> blue = {1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> red = {1, 1, 1};
    vector<int> green = {2, 3, 2};
    vector<int> blue = {4, 2, 4};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> red = {2, 2};
    vector<int> green = {3, 3};
    vector<int> blue = {4, 4};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> red = {2, 4, 4, 7, 1};
    vector<int> green = {1, 4, 4, 6, 2};
    vector<int> blue = {8, 10, 10, 10, 7};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> red = {999999, 999999};
    vector<int> green = {999999, 999999};
    vector<int> blue = {999999, 999999};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> red = {2, 1, 1};
    vector<int> green = {3, 2, 1};
    vector<int> blue = {5, 5, 5};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> red = {10, 10, 10};
    vector<int> green = {9, 5, 5};
    vector<int> blue = {9, 5, 5};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> red = {5, 8};
    vector<int> green = {7, 5};
    vector<int> blue = {8, 2};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> red = {100, 1, 1};
    vector<int> green = {100, 1, 1};
    vector<int> blue = {100, 100, 100};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 303;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> red = {100, 100, 100, 100};
    vector<int> green = {101, 1, 1, 1};
    vector<int> blue = {102, 1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 306;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> red = {2, 2, 2};
    vector<int> green = {1, 1, 1};
    vector<int> blue = {1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> red = {89384, 30887, 92778, 36916, 47794, 38336, 85387, 60493, 16650, 41422, 2363, 90028, 68691, 20060, 97764, 13927, 80541, 83427, 89173, 55737, 5212, 95369, 2568, 56430, 65783, 21531, 22863, 65124, 74068, 3136, 13930, 79803, 34023, 23059, 33070, 98168, 61394, 18457, 75012, 78043, 76230, 77374, 84422, 44920, 13785, 98538, 75199, 94325, 98316, 64371};
    vector<int> green = {66414, 3527, 76092, 68981, 59957, 41874, 6863, 99171, 6997, 97282, 2306, 20926, 77085, 36328, 60337, 26506, 50847, 21730, 61314, 25858, 16125, 53896, 19583, 546, 98815, 33368, 15435, 90365, 44044, 13751, 71088, 26809, 17277, 47179, 95789, 93585, 5404, 2652, 92755, 12400, 99933, 95061, 49677, 93369, 47740, 10013, 36227, 98587, 48095, 97540};
    vector<int> blue = {40796, 80571, 51435, 60379, 97468, 66602, 10098, 12903, 73318, 70493, 26653, 60757, 97302, 60281, 24287, 9442, 53866, 29690, 28445, 46620, 58441, 44730, 58032, 8118, 38098, 5772, 34482, 90676, 20710, 98928, 4568, 77857, 79498, 72354, 54587, 76966, 55307, 64684, 6220, 28625, 51529, 32872, 5733, 48830, 9504, 30020, 58271, 63369, 59709, 86716};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 3721152;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> red = {10, 10, 10};
    vector<int> green = {10, 10, 10};
    vector<int> blue = {1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> red = {7, 12, 9, 9, 7};
    vector<int> green = {7, 10, 8, 7, 9};
    vector<int> blue = {8, 9, 12, 6, 13};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> red = {6, 8, 5, 8};
    vector<int> green = {6, 10, 7, 8};
    vector<int> blue = {9, 11, 8, 6};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> red = {9, 9, 9};
    vector<int> green = {1, 8, 6};
    vector<int> blue = {1, 7, 4};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> red = {842398, 491273, 958925, 849859, 771363, 67803, 184892, 391907, 256150, 75799, 842398, 491273, 958925, 849859, 771363, 67803, 184892, 391907, 256150, 75799, 842398, 491273, 958925, 849859, 771363, 67803, 184892, 391907, 256150, 75799, 842398, 491273, 958925, 849859, 771363, 67803, 184892, 391907, 256150, 75799, 842398, 491273, 958925, 849859, 771363, 67803, 184892, 391907, 256150, 75799};
    vector<int> green = {268944, 342402, 894352, 228640, 903885, 908656, 414271, 292588, 852057, 889141, 268944, 342402, 894352, 228640, 903885, 908656, 414271, 292588, 852057, 889141, 268944, 342402, 894352, 228640, 903885, 908656, 414271, 292588, 852057, 889141, 268944, 342402, 894352, 228640, 903885, 908656, 414271, 292588, 852057, 889141, 268944, 342402, 894352, 228640, 903885, 908656, 414271, 292588, 852057, 889141};
    vector<int> blue = {662939, 340220, 600081, 390298, 376707, 372199, 435097, 40266, 145590, 505103, 662939, 340220, 600081, 390298, 376707, 372199, 435097, 40266, 145590, 505103, 662939, 340220, 600081, 390298, 376707, 372199, 435097, 40266, 145590, 505103, 662939, 340220, 600081, 390298, 376707, 372199, 435097, 40266, 145590, 505103, 662939, 340220, 600081, 390298, 376707, 372199, 435097, 40266, 145590, 505103};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 36153035;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> red = {10, 9, 8};
    vector<int> green = {6, 4, 2};
    vector<int> blue = {6, 4, 2};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> red = {10, 10, 1};
    vector<int> green = {5, 5, 2};
    vector<int> blue = {1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> red = {9, 5, 5};
    vector<int> green = {2, 2, 2};
    vector<int> blue = {2, 9, 3};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> red = {10, 10, 10};
    vector<int> green = {1, 1, 1};
    vector<int> blue = {1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> red = {31, 38, 33, 33, 27, 8, 11, 10, 45, 1};
    vector<int> green = {40, 6, 16, 44, 11, 34, 9, 26, 8, 31};
    vector<int> blue = {18, 3, 5, 48, 21, 18, 3, 47, 22, 32};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 324;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> red = {29374, 422372, 882728, 86181, 643111, 654829, 121832, 6454, 6479, 316317, 835597, 259329, 699523, 118459, 852717, 363481, 166389, 14261, 750872, 454532, 66554, 947864, 386817, 721165, 650923, 971823, 122767, 322840, 478400, 832458, 958894, 539411, 197423, 934335, 160916, 62443, 20809};
    vector<int> green = {36917, 781388, 757817, 900695, 318541, 898287, 301664, 618179, 159779, 534911, 946765, 749454, 865903, 889467, 377674, 548860, 314952, 268558, 811131, 525613, 88196, 107176, 661977, 526455, 553603, 103994, 87976, 309787, 324307, 43556, 44920, 19117, 303565, 529766, 42253, 574195, 513936};
    vector<int> blue = {11879, 796783, 534653, 399336, 309993, 580702, 689752, 224503, 846641, 876893, 927417, 182375, 974875, 136954, 21181, 591338, 60366, 24310, 699620, 603407, 527386, 377827, 229102, 605883, 655604, 458734, 29420, 321922, 739575, 90432, 768738, 616399, 798432, 585807, 401430, 40074, 853671};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 24261962;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> red = {10, 10, 10};
    vector<int> green = {6, 4, 1};
    vector<int> blue = {6, 3, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> red = {10, 10, 10};
    vector<int> green = {5, 9, 7};
    vector<int> blue = {5, 9, 8};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> red = {40, 41, 42, 43};
    vector<int> green = {21, 22, 23, 24};
    vector<int> blue = {1, 2, 3, 4};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> red = {5, 1, 5};
    vector<int> green = {3, 5, 4};
    vector<int> blue = {3, 4, 5};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> red = {10000, 1000, 10000, 1000, 10000};
    vector<int> green = {100, 99, 101, 99, 102};
    vector<int> blue = {501, 499, 501, 498, 501};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 4403;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> red = {400, 10, 10, 10};
    vector<int> green = {400, 5, 5, 5};
    vector<int> blue = {400, 5, 5, 5};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 835;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> red = {9, 9, 10, 5, 8};
    vector<int> green = {1, 6, 2, 3, 2};
    vector<int> blue = {2, 3, 1, 3, 5};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> red = {10, 9, 9, 9};
    vector<int> green = {9, 1, 1, 1};
    vector<int> blue = {9, 1, 1, 1};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> red = {4, 10000, 10000};
    vector<int> green = {3, 1, 1};
    vector<int> blue = {2, 10000, 10000};
    BallsSeparating* pObj = new BallsSeparating();
    clock_t start = clock();
    int result = pObj->minOperations(red, green, blue);
    clock_t end = clock();
    delete pObj;
    int expected = 20008;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22711754&rd=15488&pm=12398
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <queue> 
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
 
typedef long long llint; 
typedef pair< int, int > par; 
#define x first 
#define y second 
 
class BallsSeparating { 
public: 
  int minOperations( vector <int> red, vector <int> green, vector <int> blue ) { 
    int n = red.size(); 
    int ans = 1000000000; 
    for( int i = 0; i < n; ++i ) 
      for( int j = 0; j < n; ++j ) 
        for( int k = 0; k < n; ++k ) { 
          if( i == j || j == k || i == k ) continue; 
          int c = 0; 
          for( int l = 0; l < n; ++l ) 
            if( l == i ) c += green[l]+blue[l]; else 
              if( l == j ) c += red[l]+blue[l]; else 
                if( l == k ) c += red[l]+green[l]; else 
                  c += green[l]+blue[l]+red[l] - max(max(green[l],blue[l]),red[l]); 
          ans = min( ans, c ); 
        } 
    return ans == 1000000000 ? -1 : ans; 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.17 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/