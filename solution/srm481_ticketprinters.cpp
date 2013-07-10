/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11107
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

class TicketPrinters {
public:
    int minTime(int currentPrinter, vector<int> printerDistance, vector<int> startingValues, vector<int> wantedValues);
};

int TicketPrinters::minTime(int currentPrinter, vector<int> printerDistance, vector<int> startingValues, vector<int> wantedValues) {
    int ret;
    return ret;
}


int test0() {
    int currentPrinter = 0;
    vector<int> printerDistance = {100, 20, 50};
    vector<int> startingValues = {66, 78, 99, 5};
    vector<int> wantedValues = {99, 5, 78, 66};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int currentPrinter = 1;
    vector<int> printerDistance = {50, 50};
    vector<int> startingValues = {100, 200, 300};
    vector<int> wantedValues = {101, 201, 302};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 152;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int currentPrinter = 2;
    vector<int> printerDistance = {13, 26, 39, 13};
    vector<int> startingValues = {123, 12, 32, 67, 1015};
    vector<int> wantedValues = {1, 2, 3, 4, 5};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 1063;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int currentPrinter = 8;
    vector<int> printerDistance = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> startingValues = {449787, 614796, 54968, 786527, 9485, 580565, 863481, 75981, 376144, 655003, 614014, 539809, 530316, 933720, 331977, 852299};
    vector<int> wantedValues = {148911, 505520, 471407, 703590, 782713, 363320, 731199, 777341, 60611, 774001, 184862, 12720, 874230, 522316, 477209, 433213};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 147122;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int currentPrinter = 8;
    vector<int> printerDistance = {50786, 9196, 512090, 32939, 100741, 474428, 989373, 365848, 206504, 208140, 267419, 131983, 895520, 480880, 967392};
    vector<int> startingValues = {80756, 615730, 38519, 835172, 587564, 969197, 369071, 339844, 550224, 8133, 295471, 373624, 842247, 329170, 929143, 856805};
    vector<int> wantedValues = {691887, 84678, 281133, 247894, 325949, 391053, 27407, 278613, 882012, 35383, 88651, 735921, 53944, 854962, 552751, 640832};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 8230484;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int currentPrinter = 8;
    vector<int> printerDistance = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> startingValues = {825015, 365678, 782634, 669323, 73089, 402264, 340636, 560740, 923439, 937302, 202493, 169405, 314695, 417505, 816568, 202512};
    vector<int> wantedValues = {564314, 773352, 351322, 429090, 36700, 681711, 549163, 27962, 124314, 959102, 388989, 917978, 49109, 318801, 979671, 394050};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 22051664;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int currentPrinter = 8;
    vector<int> printerDistance = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> startingValues = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> wantedValues = {999981, 999903, 999938, 999956, 999995, 999985, 999922, 999974, 999950, 999911, 999924, 999972, 999996, 999957, 999988, 999992};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 22999903;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int currentPrinter = 2;
    vector<int> printerDistance = {12398, 16350, 41097};
    vector<int> startingValues = {373859, 152054, 223916, 395003};
    vector<int> wantedValues = {635542, 497593, 500631, 497941};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 361890;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int currentPrinter = 2;
    vector<int> printerDistance = {848091, 272744, 37065, 438282};
    vector<int> startingValues = {826358, 36950, 198537, 767967, 435356};
    vector<int> wantedValues = {184405, 282255, 92828, 600999, 826697};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 2071869;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int currentPrinter = 7;
    vector<int> printerDistance = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> startingValues = {1, 10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 110000, 120000, 130000, 140000, 150000};
    vector<int> wantedValues = {70120, 80119, 120075, 90114, 10042, 20065, 100105, 30084, 140029, 15, 130054, 110092, 50110, 150000, 60117, 40099};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int currentPrinter = 7;
    vector<int> printerDistance = {833, 833, 833, 833, 833, 833, 833, 833, 833, 833, 833, 833, 833, 833, 833};
    vector<int> startingValues = {1, 6250, 12500, 18750, 25000, 31250, 37500, 43750, 50000, 56250, 62500, 68750, 75000, 81250, 87500, 93750};
    vector<int> wantedValues = {149127, 88722, 93750, 111657, 149965, 126232, 122880, 12496, 137475, 134961, 41236, 66645, 107467, 143710, 145386, 151212};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 84548;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int currentPrinter = 11;
    vector<int> printerDistance = {815957, 959658, 801536, 304948, 938192, 334144, 839946, 518049, 618209, 629917, 803656, 319834, 5427, 348356};
    vector<int> startingValues = {707053, 310305, 611893, 355078, 15681, 567445, 577542, 509126, 940313, 789138, 273893, 104316, 876398, 804027, 361141};
    vector<int> wantedValues = {317574, 32666, 344354, 514018, 714658, 294010, 503061, 962020, 191525, 455023, 942506, 876702, 111734, 165558, 949336};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 8919052;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int currentPrinter = 1;
    vector<int> printerDistance = {866458, 728380, 635891, 990078, 187196, 709492, 150641, 148798, 699244, 782087, 702540, 532925, 830954, 803228, 800035};
    vector<int> startingValues = {281537, 161017, 893925, 39010, 711378, 219769, 930952, 583407, 268015, 901345, 183897, 575256, 908311, 739613, 380464, 767911};
    vector<int> wantedValues = {893837, 717808, 174832, 923668, 834152, 212598, 230544, 644466, 898077, 334188, 132613, 828070, 342150, 985389, 242079, 988658};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 10484509;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int currentPrinter = 5;
    vector<int> printerDistance = {428894, 844249, 243529, 240280, 833469, 806014, 194162, 169375, 157095, 3712, 127171, 725772, 380077, 596851};
    vector<int> startingValues = {184789, 370080, 930141, 769107, 937129, 363798, 468012, 155058, 900975, 747015, 877693, 297172, 375536, 991320, 423076};
    vector<int> wantedValues = {347159, 430134, 131938, 937457, 441212, 235461, 609388, 566134, 876155, 453967, 322447, 834867, 720850, 51231, 62893};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 8348130;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int currentPrinter = 3;
    vector<int> printerDistance = {363774, 593089, 214284, 129720, 869054, 643295, 816990, 786900, 158516, 502550, 628279, 728184, 908980};
    vector<int> startingValues = {350241, 407845, 242096, 309915, 936769, 979717, 640096, 9450, 504893, 501881, 672417, 199231, 789715, 894609};
    vector<int> wantedValues = {668358, 173002, 29298, 190042, 851399, 805138, 521410, 481802, 95430, 4198, 117064, 22295, 917993, 200288};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 8538147;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int currentPrinter = 14;
    vector<int> printerDistance = {768431, 767543, 445771, 452071, 618058, 805757, 131017, 453370, 294776, 333281, 696672, 922405, 237991, 603187};
    vector<int> startingValues = {274934, 73907, 81255, 300990, 952125, 693464, 883932, 610120, 89292, 948021, 789599, 84180, 901886, 844685, 990438};
    vector<int> wantedValues = {559019, 305566, 351751, 438703, 585364, 675764, 867813, 437882, 980147, 514875, 999615, 955229, 972726, 29106, 723227};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 7560963;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int currentPrinter = 0;
    vector<int> printerDistance = {851225, 629932, 193144, 395060, 75370, 749098, 159313, 673616, 586646, 153568, 495022, 279116, 899591, 734646, 587157};
    vector<int> startingValues = {283373, 305651, 162774, 850954, 627964, 494793, 595841, 386664, 883734, 460062, 447811, 637987, 628622, 260559, 980019, 226273};
    vector<int> wantedValues = {780911, 957634, 866639, 567511, 928070, 94303, 42794, 312249, 49545, 532165, 501539, 774903, 787307, 869676, 154728, 460386};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 7534050;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int currentPrinter = 1;
    vector<int> printerDistance = {722268, 14821, 212472, 248390, 489687, 269438, 295336, 727257, 792877, 751207, 777732, 284405, 65808, 893722, 118394};
    vector<int> startingValues = {235219, 131798, 13948, 615113, 291367, 456947, 680554, 628955, 118032, 763653, 441160, 921048, 385679, 366144, 923153, 858505};
    vector<int> wantedValues = {955229, 340300, 577331, 842889, 672764, 451049, 196426, 333396, 820352, 256511, 705858, 796180, 905641, 672126, 989834, 941685};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 7401699;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int currentPrinter = 14;
    vector<int> printerDistance = {86930, 227926, 735175, 497231, 391264, 892498, 194403, 925518, 243951, 916448, 49201, 220501, 999539, 54222};
    vector<int> startingValues = {167481, 880584, 346140, 817142, 687759, 688586, 835491, 444700, 534176, 459239, 759318, 628620, 559655, 546465, 937965};
    vector<int> wantedValues = {175397, 280224, 411913, 402428, 986616, 735355, 688487, 121764, 836348, 811827, 651912, 953033, 607626, 448410, 949338};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 6442724;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int currentPrinter = 2;
    vector<int> printerDistance = {603598, 77643, 866684, 919921, 940607, 733840, 523180, 806657, 936828, 576625, 144622, 852176, 287357, 120340, 169144};
    vector<int> startingValues = {997731, 231848, 732389, 37561, 152769, 52914, 361758, 383698, 779642, 306263, 74984, 599478, 914486, 55073, 658555, 190803};
    vector<int> wantedValues = {426521, 887307, 927091, 384021, 818575, 853103, 27408, 717674, 578175, 333901, 656102, 556715, 210403, 252274, 509721, 441031};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 9260064;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int currentPrinter = 0;
    vector<int> printerDistance = {273941, 144043, 1656, 456034, 706651, 437759, 520165, 523399, 341093, 843481, 591714, 562805, 181266, 826868, 373223};
    vector<int> startingValues = {215534, 386733, 886071, 773356, 918360, 702755, 560141, 200537, 181856, 498247, 280171, 918537, 361181, 692949, 525231, 595164};
    vector<int> wantedValues = {465630, 996111, 649865, 211295, 161869, 615173, 826440, 787810, 261468, 166309, 206368, 674560, 228324, 198403, 2944, 319313};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 6804108;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int currentPrinter = 2;
    vector<int> printerDistance = {789855, 592816};
    vector<int> startingValues = {503419, 132339, 995992};
    vector<int> wantedValues = {631023, 747292, 127381};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 1510276;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int currentPrinter = 1;
    vector<int> printerDistance = {949632, 519969};
    vector<int> startingValues = {955787, 686312, 318377};
    vector<int> wantedValues = {274855, 619735, 589257};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 2325623;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int currentPrinter = 1;
    vector<int> printerDistance = {689150};
    vector<int> startingValues = {24836, 717002};
    vector<int> wantedValues = {829549, 66005};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 730320;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int currentPrinter = 0;
    vector<int> printerDistance = {487843};
    vector<int> startingValues = {492302, 39247};
    vector<int> wantedValues = {727027, 782028};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 1175624;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int currentPrinter = 0;
    vector<int> printerDistance = {};
    vector<int> startingValues = {547422};
    vector<int> wantedValues = {882777};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 335356;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int currentPrinter = 0;
    vector<int> printerDistance = {557318};
    vector<int> startingValues = {1353, 473688};
    vector<int> wantedValues = {863969, 510152};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 862617;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int currentPrinter = 0;
    vector<int> printerDistance = {};
    vector<int> startingValues = {218280};
    vector<int> wantedValues = {327290};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 109011;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int currentPrinter = 1;
    vector<int> printerDistance = {170486, 179715};
    vector<int> startingValues = {505307, 153376, 249652};
    vector<int> wantedValues = {82739, 522510, 284708};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 547120;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int currentPrinter = 2;
    vector<int> printerDistance = {796094, 231488};
    vector<int> startingValues = {19190, 137746, 399170};
    vector<int> wantedValues = {998901, 873618, 192601};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 1200994;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int currentPrinter = 1;
    vector<int> printerDistance = {178607, 152632};
    vector<int> startingValues = {398509, 897591, 874871};
    vector<int> wantedValues = {706625, 313189, 932691};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 567667;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int currentPrinter = 1;
    vector<int> printerDistance = {3};
    vector<int> startingValues = {6, 7};
    vector<int> wantedValues = {3, 2};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int currentPrinter = 0;
    vector<int> printerDistance = {2};
    vector<int> startingValues = {5, 9};
    vector<int> wantedValues = {8, 7};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int currentPrinter = 1;
    vector<int> printerDistance = {10, 2};
    vector<int> startingValues = {3, 6, 4};
    vector<int> wantedValues = {3, 6, 8};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int currentPrinter = 0;
    vector<int> printerDistance = {};
    vector<int> startingValues = {5};
    vector<int> wantedValues = {2};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int currentPrinter = 2;
    vector<int> printerDistance = {6, 7};
    vector<int> startingValues = {3, 6, 7};
    vector<int> wantedValues = {4, 10, 3};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int currentPrinter = 9;
    vector<int> printerDistance = {33109, 293899, 790252, 110632, 605485, 650155, 927961, 994995, 419997, 370625, 706686, 875372, 883487, 426975, 857276};
    vector<int> startingValues = {747884, 81336, 634176, 552605, 84631, 827356, 957315, 879395, 438404, 370352, 780882, 924502, 55335, 452624, 303715, 639372};
    vector<int> wantedValues = {713426, 881226, 499008, 12482, 488585, 862798, 420259, 102360, 358250, 182431, 351263, 599744, 758027, 608138, 372275, 605788};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 13077471;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int currentPrinter = 14;
    vector<int> printerDistance = {385853, 32642, 881350, 846022, 133461, 907453, 482652, 823377, 675316, 502551, 896387, 86220, 297835, 51488, 169620};
    vector<int> startingValues = {508705, 229935, 136673, 52957, 543267, 219, 974747, 499161, 195057, 320958, 441081, 18742, 904746, 646352, 196661, 380879};
    vector<int> wantedValues = {131925, 696829, 23679, 757941, 280120, 368655, 837058, 52814, 135575, 29401, 49386, 473192, 632150, 152189, 396989, 847195};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 7377361;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int currentPrinter = 1;
    vector<int> printerDistance = {929013, 990827, 804363, 95964, 443642, 331128, 244820, 330385, 90670, 117645, 688243, 428778, 145748, 625541, 422103};
    vector<int> startingValues = {29990, 904473, 353717, 622747, 541661, 871757, 524670, 428718, 359005, 237363, 201235, 388455, 589090, 989440, 574906, 157292};
    vector<int> wantedValues = {775184, 103410, 775280, 275520, 593312, 422970, 894530, 24345, 30027, 951903, 667157, 877540, 376076, 520189, 184104, 989661};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 7644696;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int currentPrinter = 7;
    vector<int> printerDistance = {192680, 656550, 173328, 26599, 715624, 656960, 390853, 230728, 96395, 874325, 739917, 774507, 644501, 835967, 297159};
    vector<int> startingValues = {22331, 786894, 678995, 144424, 946594, 784478, 671138, 866207, 78791, 771412, 92265, 474519, 757619, 158116, 235744, 518399};
    vector<int> wantedValues = {977044, 399292, 979163, 119919, 987732, 698199, 451646, 861470, 272119, 434323, 292238, 90789, 40555, 379220, 613241, 322620};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 10185441;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int currentPrinter = 0;
    vector<int> printerDistance = {144038, 194069, 318557, 106729, 146330, 23678, 272596, 375451, 616554, 352846, 724137, 916250, 67429, 172458, 669453};
    vector<int> startingValues = {489344, 839115, 823340, 646296, 933784, 373619, 560685, 77326, 472917, 951590, 698786, 724215, 793376, 993666, 34367, 857392};
    vector<int> wantedValues = {823257, 432123, 288628, 209125, 552194, 789308, 789009, 827576, 913967, 796533, 384015, 340842, 199298, 609551, 777941, 149058};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 5130392;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int currentPrinter = 14;
    vector<int> printerDistance = {757622, 546410, 870550, 441852, 807111, 929693, 801057, 995497, 675546, 897051, 568697, 832535, 357911, 390258, 586338};
    vector<int> startingValues = {940702, 881779, 836935, 85723, 648128, 52324, 712036, 275536, 895193, 847888, 550415, 214035, 857265, 93518, 692753, 377549};
    vector<int> wantedValues = {360021, 291512, 262048, 856213, 184004, 502891, 34804, 362915, 589564, 32454, 5659, 834728, 493884, 64590, 896492, 197014};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 11088677;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int currentPrinter = 5;
    vector<int> printerDistance = {624175, 418501, 103123, 92490, 239394, 564636, 662636, 75202, 388112, 938811, 29957, 509369, 289896, 321066, 541418};
    vector<int> startingValues = {165783, 320936, 17225, 742053, 196249, 447384, 241023, 161221, 488418, 524417, 43034, 946492, 831804, 620838, 711987, 316649};
    vector<int> wantedValues = {714893, 892053, 402720, 214779, 213259, 917938, 201943, 472895, 691619, 807456, 840534, 731845, 784486, 974101, 901986, 682501};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 7362541;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int currentPrinter = 6;
    vector<int> printerDistance = {429255, 892982, 883244, 834786, 268585, 306056, 242126, 353747, 343907, 824019, 152276, 69494, 779790, 542123, 843553};
    vector<int> startingValues = {831241, 929326, 712012, 629154, 785517, 312044, 568827, 139980, 821011, 466755, 183616, 837579, 540502, 188515, 600424, 272022};
    vector<int> wantedValues = {722229, 134286, 729047, 80001, 338015, 406113, 828993, 182810, 53479, 223542, 163528, 700887, 272362, 645034, 593054, 127633};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 11381192;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int currentPrinter = 13;
    vector<int> printerDistance = {866506, 408928, 510410, 653732, 987182, 346341, 21568, 211920, 930520, 661652, 848336, 732183, 993009, 147898, 441956};
    vector<int> startingValues = {19860, 352931, 409069, 581532, 990838, 525683, 534378, 97929, 775287, 149608, 158152, 237067, 283133, 785001, 398887, 524372};
    vector<int> wantedValues = {236044, 2407, 265364, 365788, 527135, 417098, 989245, 403751, 956040, 946495, 561095, 911375, 973071, 654334, 230479, 221707};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 9369449;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int currentPrinter = 11;
    vector<int> printerDistance = {477685, 956563, 808025, 404379, 21885, 212508, 873574, 238043, 733451, 894452, 76383, 660057, 314861, 322982, 727551};
    vector<int> startingValues = {263977, 27031, 637829, 441062, 325922, 983373, 526279, 510167, 440009, 786553, 669924, 41993, 954426, 858476, 350168, 512987};
    vector<int> wantedValues = {141627, 741280, 725868, 55630, 175814, 831203, 318671, 946064, 201852, 18340, 90898, 858913, 452713, 296001, 276825, 305747};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 9760699;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int currentPrinter = 9;
    vector<int> printerDistance = {777024, 28950, 19093, 649205, 21983, 63696, 154284, 230705, 218903, 195783, 642732, 98499, 249369, 504250, 660288};
    vector<int> startingValues = {944457, 983169, 923052, 926080, 933558, 932488, 945191, 970097, 929281, 998688, 945654, 951323, 991565, 961439, 987271, 948845};
    vector<int> wantedValues = {987957, 970824, 907621, 940557, 984709, 954251, 913734, 914949, 904783, 923249, 960271, 901520, 948311, 992750, 940331, 963213};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 6679142;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int currentPrinter = 0;
    vector<int> printerDistance = {618158, 25574, 871586, 603665, 827323, 23166, 659125, 545293, 118226, 220398, 83382, 227662, 300924, 32005, 54547};
    vector<int> startingValues = {993221, 976855, 910110, 921793, 924755, 928631, 913732, 944220, 902473, 908404, 998310, 947990, 975791, 978489, 996134, 924423};
    vector<int> wantedValues = {988362, 914422, 916231, 944529, 922199, 996729, 916949, 972970, 924891, 992466, 986569, 958058, 915874, 926392, 959777, 932296};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 5211503;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int currentPrinter = 15;
    vector<int> printerDistance = {643269, 774113, 78869, 440071, 736105, 449362, 175281, 999770, 658751, 422645, 541353, 85927, 281483, 747414, 854525};
    vector<int> startingValues = {988952, 948533, 994310, 940351, 909588, 948392, 920848, 931715, 939097, 935182, 907037, 947149, 951821, 900593, 902869, 924196};
    vector<int> wantedValues = {976499, 902124, 971700, 995603, 931548, 962169, 913024, 956946, 906676, 955993, 913311, 950753, 911568, 984560, 925347, 971698};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 7893331;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int currentPrinter = 10;
    vector<int> printerDistance = {444290, 88357, 108191, 733284, 621473, 55358, 503890, 16453, 645646, 454661, 453345, 92329, 511964, 575019, 812356};
    vector<int> startingValues = {974964, 916745, 970400, 906950, 962339, 969499, 985840, 971102, 910510, 964634, 958869, 957117, 996351, 901573, 983634, 977489};
    vector<int> wantedValues = {959235, 994821, 960275, 929419, 926980, 993569, 994410, 929390, 908887, 989722, 927865, 920924, 952701, 932256, 949142, 947944};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 8576319;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int currentPrinter = 1;
    vector<int> printerDistance = {2749, 172526, 68757, 908954, 108303, 818644, 82370, 738426, 978168, 843105, 923407, 655842, 692366, 294776, 327331};
    vector<int> startingValues = {954142, 959312, 994667, 916291, 952878, 902609, 944112, 996189, 938809, 999944, 977886, 906927, 916473, 970015, 944873, 926045};
    vector<int> wantedValues = {989469, 945383, 911487, 984942, 905847, 968166, 981549, 903988, 906699, 985159, 969019, 915898, 992094, 950530, 935022, 943615};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 7627451;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int currentPrinter = 6;
    vector<int> printerDistance = {49255, 781031, 689945, 541916, 465203, 10119, 210696, 834268, 638863, 797965, 417605, 139006, 972751, 570734, 131238};
    vector<int> startingValues = {917186, 919839, 956721, 956231, 928464, 982472, 924812, 943135, 919165, 987888, 996868, 950750, 917489, 972447, 995924, 903157};
    vector<int> wantedValues = {913545, 936974, 939048, 976298, 979454, 913346, 984088, 980183, 912543, 994767, 918975, 908406, 914119, 907290, 997859, 960966};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 9792198;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int currentPrinter = 6;
    vector<int> printerDistance = {425085, 280031, 533225, 139527, 731018, 860077, 770284, 905644, 616397, 192412, 71940, 388508, 3626, 810521, 303431};
    vector<int> startingValues = {991645, 966785, 961945, 948731, 925292, 970187, 932323, 976237, 944317, 985331, 948129, 974455, 999956, 973048, 959228, 959046};
    vector<int> wantedValues = {971724, 978864, 921855, 920267, 976899, 988982, 926900, 992153, 966965, 948920, 952824, 997998, 990069, 972632, 954564, 919040};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 10005172;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int currentPrinter = 10;
    vector<int> printerDistance = {810580, 573058, 194682, 736645, 535487, 203678, 652261, 976996, 90946, 754269, 271643, 248790, 327307, 771514, 984632};
    vector<int> startingValues = {938864, 906426, 975073, 905549, 990951, 912693, 967993, 949356, 996326, 966131, 988875, 953756, 983431, 904267, 976494, 992652};
    vector<int> wantedValues = {960840, 975704, 909883, 939676, 930363, 965640, 956561, 907364, 911751, 991428, 963165, 959137, 950562, 929047, 914912, 927320};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 10737187;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int currentPrinter = 12;
    vector<int> printerDistance = {145112, 849905, 527352, 823049, 93973, 459298, 883213, 217494, 411345, 439200, 297848, 560477, 937132, 531981, 463296};
    vector<int> startingValues = {997856, 924083, 942420, 900293, 917393, 908290, 934992, 903616, 935763, 932751, 918529, 997309, 957825, 968808, 918161, 982935};
    vector<int> wantedValues = {927361, 967840, 970491, 944609, 986731, 916056, 927032, 978503, 936446, 965740, 915759, 970667, 910460, 974066, 963326, 981904};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 9584210;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int currentPrinter = 3;
    vector<int> printerDistance = {577294, 891471, 226962, 80666, 968974, 625166, 525464, 450175, 427507, 765850, 377526, 878574, 456394, 757301, 571676};
    vector<int> startingValues = {978932, 942907, 992672, 963507, 904871, 901751, 917831, 947706, 962134, 919821, 978763, 955989, 906863, 917774, 933586, 976957};
    vector<int> wantedValues = {969477, 987935, 938531, 958176, 975480, 925992, 941142, 944739, 904715, 988677, 999560, 944295, 937034, 914723, 990456, 953181};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 10278205;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int currentPrinter = 6;
    vector<int> printerDistance = {26921, 908849, 598610, 653620, 242717, 506587, 134505, 773013, 203341, 684591, 644428, 513085, 802336, 845456, 686777};
    vector<int> startingValues = {961778, 968840, 937993, 996275, 916344, 914984, 991020, 991652, 913643, 947245, 948039, 922852, 978483, 942378, 956789, 975727};
    vector<int> wantedValues = {33471, 6259, 52002, 56467, 17491, 2237, 11291, 87302, 85977, 96799, 21747, 64686, 48928, 75005, 83202, 68805};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 12041069;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int currentPrinter = 3;
    vector<int> printerDistance = {768501, 700716, 212821, 226699, 999882, 168437, 817283, 569297, 409929, 101117, 616878, 409338, 402487, 993213, 815412};
    vector<int> startingValues = {999203, 945326, 935817, 953573, 913416, 943321, 991989, 987238, 934543, 979935, 991176, 929196, 997764, 942217, 954908, 929317};
    vector<int> wantedValues = {79061, 84422, 82661, 67658, 46080, 32984, 71410, 90664, 36475, 1232, 84141, 19282, 14426, 65798, 57255, 10757};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 10732702;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int currentPrinter = 15;
    vector<int> printerDistance = {970271, 280581, 874385, 483748, 653112, 756985, 346978, 68796, 973616, 31955, 20006, 524053, 498547, 310888, 120812};
    vector<int> startingValues = {923981, 967405, 989622, 942180, 932939, 981054, 946181, 972547, 919519, 973704, 917481, 919121, 981193, 909792, 954803, 974423};
    vector<int> wantedValues = {83006, 46983, 57967, 66565, 20228, 97667, 58039, 61697, 95974, 74693, 55411, 86161, 41924, 90477, 24187, 19035};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 7741048;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int currentPrinter = 9;
    vector<int> printerDistance = {189188, 479616, 573098, 818015, 477911, 567296, 795324, 143759, 512538, 555423, 3668, 200221, 617363, 322203, 823574};
    vector<int> startingValues = {996617, 995302, 944300, 983962, 939544, 923642, 914774, 985394, 977042, 959301, 960798, 985829, 909904, 903144, 985181, 912682};
    vector<int> wantedValues = {42507, 56068, 14025, 41908, 48151, 70278, 36297, 63649, 22608, 71539, 57080, 16055, 67652, 5929, 79892, 67798};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 10518375;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int currentPrinter = 11;
    vector<int> printerDistance = {410575, 545203, 504449, 714050, 774933, 391968, 664457, 471904, 680880, 633408, 986786, 745187, 969265, 955555, 73004};
    vector<int> startingValues = {936968, 945193, 940186, 963914, 946541, 959089, 931306, 913177, 920843, 921272, 975277, 988564, 932418, 970878, 970739, 918509};
    vector<int> wantedValues = {96981, 80473, 66036, 95107, 29708, 66219, 79416, 99956, 36496, 3280, 92006, 26578, 47111, 25959, 91538, 34865};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 13101648;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int currentPrinter = 15;
    vector<int> printerDistance = {930959, 332638, 324671, 78643, 100101, 775917, 664065, 812443, 518659, 126427, 465049, 799064, 236527, 254847, 843700};
    vector<int> startingValues = {987793, 905194, 988986, 908169, 962460, 954323, 987882, 925005, 991533, 967771, 909001, 927757, 958813, 946548, 945657, 934117};
    vector<int> wantedValues = {25020, 39718, 1496, 43449, 22243, 33743, 6040, 83560, 43203, 38133, 68982, 21907, 80954, 23153, 29160, 15132};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 8167944;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int currentPrinter = 0;
    vector<int> printerDistance = {857883, 512041, 449291, 77611, 879542, 339158, 250897, 639668, 125643, 178310, 999159, 638506, 451337, 850053, 65404};
    vector<int> startingValues = {909048, 936578, 940959, 965765, 923996, 955361, 920432, 925329, 919600, 974953, 954896, 995596, 940957, 913521, 910557, 989751};
    vector<int> wantedValues = {98871, 88828, 93305, 71797, 49149, 75765, 70404, 25660, 16091, 26668, 38368, 53867, 57774, 33184, 87209, 31861};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 8205384;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int currentPrinter = 3;
    vector<int> printerDistance = {782381, 545297, 874718, 49347, 337409, 326856, 596471, 52466, 345538, 352080, 704067, 868391, 87216, 840205, 18953};
    vector<int> startingValues = {997856, 967271, 916834, 989246, 917089, 982294, 958720, 994568, 949449, 951942, 979453, 978067, 995486, 901521, 967456, 909015};
    vector<int> wantedValues = {2988, 93376, 7171, 55006, 7605, 45171, 38736, 61005, 59713, 20778, 46368, 21546, 40080, 29092, 20953, 43027};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 9838919;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int currentPrinter = 14;
    vector<int> printerDistance = {148471, 982019, 947305, 677332, 824793, 995800, 744231, 963834, 621813, 718733, 914538, 786408, 176051, 652881, 770530};
    vector<int> startingValues = {925326, 940791, 998647, 994761, 943851, 988310, 941647, 951281, 965627, 987692, 945224, 998805, 937125, 933983, 987046, 995220};
    vector<int> wantedValues = {85508, 49757, 53869, 11671, 38173, 22728, 29275, 86976, 9382, 97621, 34719, 81650, 65581, 76707, 56641, 88771};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 12522975;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int currentPrinter = 9;
    vector<int> printerDistance = {539069, 758873, 728396, 182278, 575925, 774901, 896191, 519331, 305327, 755482, 155524, 803850, 534300, 85569, 837655};
    vector<int> startingValues = {907641, 956590, 981490, 953297, 968716, 999985, 922494, 998472, 933210, 973401, 951419, 917503, 942164, 923065, 928201, 997224};
    vector<int> wantedValues = {29938, 90122, 43751, 61213, 8257, 31014, 2398, 29062, 52531, 28026, 14935, 19539, 24501, 68123, 28393, 20244};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 12442571;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int currentPrinter = 8;
    vector<int> printerDistance = {598254, 33267, 998835, 755985, 52944, 15808, 350680, 380672, 685349};
    vector<int> startingValues = {4513, 68075, 12074, 86200, 56208, 78, 73107, 90964, 73269, 65682};
    vector<int> wantedValues = {968600, 973670, 998868, 993439, 934594, 918854, 958110, 920339, 948399, 902676};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 5455307;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int currentPrinter = 4;
    vector<int> printerDistance = {4127, 848288, 858681, 828876, 368850, 532711, 531760, 539681, 86035};
    vector<int> startingValues = {43808, 30816, 9658, 61659, 38136, 86592, 79563, 13088, 2574, 56360};
    vector<int> wantedValues = {931286, 900824, 954331, 957368, 918382, 972763, 991548, 952217, 970906, 902302};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 7523928;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int currentPrinter = 7;
    vector<int> printerDistance = {879677, 580652, 162984, 411889, 674381, 474528, 535176, 963391, 303655, 920587, 580719};
    vector<int> startingValues = {3899, 64989, 4422, 19217, 26139, 69755, 91191, 61323, 26867, 99517, 14333, 12925};
    vector<int> wantedValues = {920430, 968428, 939431, 925308, 948494, 930961, 910604, 971628, 944921, 992897, 983388, 911098};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 10162697;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int currentPrinter = 7;
    vector<int> printerDistance = {513214, 901585, 930119, 273341, 124884, 9133, 176335, 399507, 913325, 403287, 917721, 867338, 234349};
    vector<int> startingValues = {32698, 68092, 18357, 80839, 98962, 10370, 98361, 25776, 73359, 31097, 93533, 58396, 42968, 57754};
    vector<int> wantedValues = {913871, 972396, 944049, 967120, 952745, 908301, 988146, 965429, 997523, 922226, 999751, 932872, 950585, 908656};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 10443297;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int currentPrinter = 12;
    vector<int> printerDistance = {775050, 233442, 139746, 386718, 390234, 751413, 135685, 399369, 393856, 118814, 132163, 955332, 866812};
    vector<int> startingValues = {22415, 95065, 87577, 45064, 99633, 27722, 3186, 1547, 69541, 26432, 24509, 10062, 56777, 65301};
    vector<int> wantedValues = {940676, 922955, 938069, 913787, 927319, 946749, 916244, 935051, 922820, 957553, 974668, 955819, 982947, 985223};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 7436819;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int currentPrinter = 2;
    vector<int> printerDistance = {352840, 330539, 41322, 101367, 444162, 601004, 842845, 677232, 887934, 385652};
    vector<int> startingValues = {80783, 2946, 86462, 21882, 96755, 11678, 27161, 46225, 95487, 44499, 33834};
    vector<int> wantedValues = {934630, 992125, 985924, 940749, 976742, 973313, 943602, 903716, 969274, 972063, 902958};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 6217401;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int currentPrinter = 3;
    vector<int> printerDistance = {527739, 631336, 277047, 217305, 768887, 786563, 328845, 369384, 253446, 670955, 804716, 717186};
    vector<int> startingValues = {84858, 15003, 62901, 14873, 90587, 13246, 65771, 21848, 60759, 24334, 8378, 28161, 89562};
    vector<int> wantedValues = {976711, 932819, 998891, 914667, 930150, 984127, 904641, 998534, 975910, 901049, 903404, 926126, 923873};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 8601019;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int currentPrinter = 7;
    vector<int> printerDistance = {230670, 180353, 32119, 981857, 535733, 464127, 289814, 895479, 354821, 409707, 79726, 549785, 706216};
    vector<int> startingValues = {54440, 52703, 29054, 6352, 47029, 71998, 15373, 88821, 79337, 94169, 63025, 31822, 85080, 25857};
    vector<int> wantedValues = {995531, 984191, 965873, 918775, 924073, 941642, 935496, 927149, 980249, 935203, 995051, 968002, 955530, 966322};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 9317999;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int currentPrinter = 3;
    vector<int> printerDistance = {388104, 749352, 148702, 999433, 455927, 446763, 696623, 921090, 857838, 918105};
    vector<int> startingValues = {89259, 17318, 21110, 19314, 72387, 85456, 11899, 80680, 6739, 44546, 9801};
    vector<int> wantedValues = {901841, 934298, 943043, 913507, 977038, 933036, 948443, 920522, 962956, 961481, 962342};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 8760136;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int currentPrinter = 3;
    vector<int> printerDistance = {630700, 83713, 215878, 493740, 786306, 440736, 995947, 907020, 277593, 913775, 785510, 163702, 589377, 691085, 477708};
    vector<int> startingValues = {74315, 34619, 31398, 88168, 4158, 73868, 23537, 47229, 82660, 14381, 82628, 99342, 61573, 88559, 95961, 56494};
    vector<int> wantedValues = {993770, 929180, 959926, 991440, 939652, 946002, 974864, 991848, 984320, 954440, 982034, 959422, 984199, 903125, 943151, 906048};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 10229713;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int currentPrinter = 4;
    vector<int> printerDistance = {999979, 999917, 999999, 999914, 999900, 999995, 999916, 999942, 999986};
    vector<int> startingValues = {31204, 66123, 97384, 576, 77929, 35911, 11641, 70166, 65909, 92838};
    vector<int> wantedValues = {941854, 973203, 978474, 937127, 949213, 907588, 963788, 975076, 922076, 999253};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 13814108;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int currentPrinter = 3;
    vector<int> printerDistance = {999980, 999968, 999976, 999933, 999992, 999994, 999951, 999980, 999914, 999949, 999920, 999955, 999983};
    vector<int> startingValues = {50772, 339, 30729, 44128, 57747, 31269, 14462, 4169, 50717, 54675, 67779, 19595, 85897, 30474};
    vector<int> wantedValues = {992540, 951935, 960083, 967017, 934579, 989298, 937967, 907602, 947204, 980933, 906789, 973215, 997013, 935703};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 16875735;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int currentPrinter = 10;
    vector<int> printerDistance = {999925, 999923, 999923, 999900, 999955, 999904, 999921, 999933, 999940, 999912};
    vector<int> startingValues = {98022, 25253, 90832, 75710, 94164, 38566, 80696, 33353, 64771, 90663, 84373};
    vector<int> wantedValues = {901319, 979655, 960795, 985023, 979194, 972138, 937445, 906980, 988756, 965746, 907537};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 10802534;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int currentPrinter = 1;
    vector<int> printerDistance = {999984, 999985, 999990, 999951, 999972, 999978, 999901, 999992, 999947, 999959, 999964, 999919, 999995, 999967};
    vector<int> startingValues = {66528, 25529, 38848, 54049, 75476, 52441, 44910, 88506, 99946, 29445, 31342, 34992, 7761, 95254, 25711};
    vector<int> wantedValues = {998773, 920734, 907150, 965274, 984346, 961593, 983841, 951858, 994940, 924387, 972122, 916519, 989280, 989893, 948655};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 15880928;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int currentPrinter = 8;
    vector<int> printerDistance = {999924, 999920, 999965, 999995, 999938, 999900, 999996, 999998, 999987};
    vector<int> startingValues = {75600, 1071, 64578, 77986, 55142, 21216, 1858, 97959, 38684, 86697};
    vector<int> wantedValues = {968850, 985167, 956418, 968755, 967766, 952772, 968385, 973631, 934378, 904178};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 10828189;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int currentPrinter = 2;
    vector<int> printerDistance = {999928, 999918, 999978, 999929, 999967, 999998, 999980, 999931, 999919, 999960, 999915, 999919, 999931, 999969, 999981};
    vector<int> startingValues = {42167, 66871, 89141, 14463, 57799, 80485, 27856, 76828, 91934, 32358, 18075, 24832, 36745, 25330, 54323, 28041};
    vector<int> wantedValues = {905982, 930910, 916335, 967535, 952394, 960676, 930137, 992242, 906202, 929530, 930375, 947930, 983536, 907167, 978943, 962506};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 17877011;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int currentPrinter = 1;
    vector<int> printerDistance = {999913, 999969, 999944, 999998, 999965, 999970, 999954, 999930, 999973};
    vector<int> startingValues = {32097, 61508, 59350, 48329, 66903, 30018, 67846, 93044, 63378, 69794};
    vector<int> wantedValues = {907380, 916081, 964978, 943144, 918375, 916116, 958241, 918391, 949096, 986134};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 10837116;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int currentPrinter = 13;
    vector<int> printerDistance = {999973, 999998, 999906, 999928, 999939, 999937, 999923, 999935, 999984, 999909, 999919, 999973, 999952, 999984, 999958};
    vector<int> startingValues = {41924, 77228, 58652, 15209, 92687, 95762, 18700, 42963, 69507, 15860, 45767, 3328, 30653, 45738, 39870, 92165};
    vector<int> wantedValues = {957178, 910221, 992150, 953631, 996600, 908004, 957693, 974719, 941999, 944106, 903933, 977229, 991731, 941550, 996572, 961048};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 17861170;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int currentPrinter = 9;
    vector<int> printerDistance = {999929, 999991, 999937, 999930, 999955, 999942, 999984, 999953, 999987, 999947};
    vector<int> startingValues = {6744, 14575, 80623, 85524, 96640, 86515, 61485, 73440, 78695, 974, 71177};
    vector<int> wantedValues = {965162, 963444, 910580, 985230, 912473, 933977, 947991, 970004, 942502, 945815, 968742};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 11903339;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int currentPrinter = 8;
    vector<int> printerDistance = {999938, 999983, 999902, 999992, 999918, 999969, 999979, 999946, 999912, 999924, 999964, 999941, 999961};
    vector<int> startingValues = {436, 73143, 15152, 21175, 62114, 19430, 46931, 2459, 49913, 70332, 57120, 84471, 75689, 56472};
    vector<int> wantedValues = {987687, 931825, 936498, 908580, 995377, 923308, 979106, 991058, 921588, 943876, 933521, 988371, 939901, 949789};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 18907176;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int currentPrinter = 9;
    vector<int> printerDistance = {999975, 999965, 999982, 999918, 999983, 999914, 999985, 999975, 999949, 999941, 999915, 999995, 1000000, 999964};
    vector<int> startingValues = {2910, 403152, 843461, 244864, 54963, 523901, 265030, 160979, 30727, 988625, 190832, 901421, 687404, 206945, 611257};
    vector<int> wantedValues = {458879, 339903, 492719, 763193, 497551, 862161, 105441, 735192, 613118, 138819, 406272, 503000, 812905, 326468, 270088};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 19101808;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int currentPrinter = 4;
    vector<int> printerDistance = {999934, 999906, 999917, 999956, 999999, 999974, 999913, 999968, 999943, 999982, 999905, 999950};
    vector<int> startingValues = {633528, 517278, 462359, 376018, 694390, 716354, 540814, 677383, 126727, 115487, 428756, 675492, 495752};
    vector<int> wantedValues = {457459, 355966, 727893, 59029, 695648, 850661, 647790, 133925, 807949, 101810, 95371, 661337, 546634};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 16037354;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int currentPrinter = 6;
    vector<int> printerDistance = {999987, 999917, 999982, 999989, 999955, 999985, 999968, 999975, 999907};
    vector<int> startingValues = {765534, 578886, 989364, 576912, 855988, 914724, 97772, 384932, 40221, 60626};
    vector<int> wantedValues = {793695, 908772, 806826, 844336, 908044, 696502, 155935, 977220, 728929, 460129};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 12027677;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int currentPrinter = 9;
    vector<int> printerDistance = {999946, 999991, 999929, 999967, 999923, 999961, 999953, 999942, 999904, 999931, 999913};
    vector<int> startingValues = {578049, 715164, 514318, 254995, 25501, 130625, 699510, 636224, 357448, 375429, 426826, 441430};
    vector<int> wantedValues = {629885, 120561, 993012, 120766, 83002, 666547, 127822, 266666, 571111, 194503, 63647, 734978};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 13006143;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int currentPrinter = 9;
    vector<int> printerDistance = {999986, 999946, 999904, 999943, 999908, 999990, 999949, 999953, 999962, 999917, 999954};
    vector<int> startingValues = {655461, 51869, 992360, 522430, 158097, 897614, 644651, 630646, 297678, 542179, 678609, 793646};
    vector<int> wantedValues = {197402, 688351, 390907, 135543, 635931, 214726, 829493, 288805, 685021, 611569, 420121, 496888};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 13018814;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int currentPrinter = 1;
    vector<int> printerDistance = {999919, 999951, 999911, 999920, 999913, 999923, 999950, 999928, 999940, 999996};
    vector<int> startingValues = {233038, 330436, 43825, 967829, 180936, 930260, 175370, 990531, 775077, 606597, 450303};
    vector<int> wantedValues = {234217, 526230, 264826, 255097, 918046, 258084, 712468, 461910, 248567, 545749, 603871};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 11010878;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int currentPrinter = 4;
    vector<int> printerDistance = {999971, 999938, 999905, 999954, 999984, 999993, 999946, 999960, 999993, 999932, 999997};
    vector<int> startingValues = {842105, 242232, 288088, 278783, 198079, 978982, 495064, 312164, 137264, 709475, 741624, 756263};
    vector<int> wantedValues = {603087, 714914, 921388, 676656, 114343, 188692, 239679, 614099, 729919, 914077, 96210, 306034};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 15025686;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int currentPrinter = 10;
    vector<int> printerDistance = {999913, 999918, 999928, 999972, 999907, 999924, 999927, 999953, 999999, 999990, 999942, 999983, 999910};
    vector<int> startingValues = {795232, 778878, 798748, 313078, 805335, 373638, 497976, 869107, 490737, 397012, 660070, 754116, 106807, 968918};
    vector<int> wantedValues = {677329, 791328, 678804, 624957, 586376, 982938, 113578, 282722, 808029, 397694, 968812, 26760, 104182, 956397};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 16003006;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int currentPrinter = 5;
    vector<int> printerDistance = {999971, 999910, 999989, 999907, 999949, 999998, 999943, 999915, 999909};
    vector<int> startingValues = {964799, 318519, 177259, 628281, 692213, 355013, 905466, 511899, 131651, 498604};
    vector<int> wantedValues = {802753, 545708, 123646, 871469, 84651, 323547, 70186, 147191, 857189, 811441};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 13092587;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int currentPrinter = 9;
    vector<int> printerDistance = {999924, 999936, 1000000, 999971, 999996, 999981, 999901, 999999, 999916, 999921, 999968, 999938, 999912};
    vector<int> startingValues = {553603, 312, 576058, 309770, 311763, 205144, 64872, 406664, 443916, 759047, 597503, 979478, 542490, 696451};
    vector<int> wantedValues = {507503, 966801, 273909, 116332, 642140, 571234, 624, 368734, 93870, 71135, 526566, 846842, 944441, 910412};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 17016734;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int currentPrinter = 2;
    vector<int> printerDistance = {1, 1, 1, 1};
    vector<int> startingValues = {1, 1000000, 2, 1000000, 3};
    vector<int> wantedValues = {1, 2, 3, 4, 5};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int currentPrinter = 2;
    vector<int> printerDistance = {13, 26, 39, 13};
    vector<int> startingValues = {123, 12, 32, 67, 1015};
    vector<int> wantedValues = {1, 2, 3, 4, 5};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 1063;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int currentPrinter = 9;
    vector<int> printerDistance = {1000000, 1000000, 999999, 888888, 1000000, 1000000, 999999, 888888, 1000000, 1000000, 999999, 888888, 1000000, 1000000, 999999};
    vector<int> startingValues = {1990, 654, 5498, 657498, 2126, 696999, 888888, 8, 9, 10, 2222, 13, 14, 1555, 7777, 4525};
    vector<int> wantedValues = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 16, 15, 14};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 20557521;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int currentPrinter = 0;
    vector<int> printerDistance = {1000};
    vector<int> startingValues = {100, 151};
    vector<int> wantedValues = {200, 150};
    TicketPrinters* pObj = new TicketPrinters();
    clock_t start = clock();
    int result = pObj->minTime(currentPrinter, printerDistance, startingValues, wantedValues);
    clock_t end = clock();
    delete pObj;
    int expected = 1002;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15868491&rd=14234&pm=11107
********************************************************************************
#include <cmath>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
 
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <functional>
#include <map>
#include <set>
 
using namespace std;
 
#define forn(i, n) for (int i = 0; i < (int)(n); i++)
#define forab(a, b, n) for (int i = (int)(a); i < (int)(b); i++)
#define forit(i, a) for (__typeof((a).begin()) i = (a).begin(); i != (a).end(); i++)
#define sz(a) (int)(a).size()
#define all(a) (a).begin(), (a).end()
#define zero(a) memset(a, 0, sizeof(a))
#define pb push_back
#define mp make_pair
 
typedef double dbl;
typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> pii;
 
const int maxn = 16;
const int inf = (int)1e9;
 
int n, f[1 << maxn][maxn][2];
vi d, a, b;
 
int D[maxn][maxn];
 
int Go( int L, int R, int pr, int side )
{
  if ((pr == (1 << n) - 1))
    return 0;
 
  int &res = f[pr][L][side];
  if (res != -1)
    return res;
  res = inf;
  int x = side ? R : L;
  if (L > 0)
  {
    int dist = D[x][L - 1];
    forn(j, n)   
      if (!((pr >> j) & 1))
        res = min(res, dist + max(Go(L - 1, R, pr | (1 << j), 0), abs(a[L - 1] - b[j])));
  }
  if (R + 1 < n)
  {
    int dist = D[x][R + 1];
    forn(j, n)
      if (!((pr >> j) & 1))
        res = min(res, dist + max(Go(L, R + 1, pr | (1 << j), 1), abs(a[R + 1] - b[j])));
  }
//  fprintf(stderr, "Go(L=%d,R=%d,pr=%d,side=%d) = %d\n", L, R, pr, side, res);
  return res;
}
 
int GetDist1( int a, int b )
{
  if (a > b)
    swap(a, b);
 
  int sum = 0;
  while (a < b)
    sum += d[a++];
  return sum;
}
 
struct TicketPrinters
{
  int minTime( int st, vector <int> _d, vector <int> _a, vector <int> _b )
  {
    d = _d, a = _a, b = _b;
  memset(f, -1, sizeof(f));
    n = sz(a);
 
  forn(i, n)
    forn(j, n)
      D[i][j] = GetDist1(i, j);
  
  int res = inf;
  forn(i, n)
    res = min(res, max(Go(st, st, 1 << i, 0), abs(a[st] - b[i])));
  return 1 + res;
  }
};

********************************************************************************
*******************************************************************************/