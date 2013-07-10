/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2420
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

class WorldPeace {
public:
    long numGroups(int k, vector<int> countries);
};

long WorldPeace::numGroups(int k, vector<int> countries) {
    long ret;
    return ret;
}


int test0() {
    int k = 2;
    vector<int> countries = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 5000000000;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int k = 2;
    vector<int> countries = {1, 2, 3, 4, 5, 10000};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int k = 4;
    vector<int> countries = {4, 4, 4, 4, 4};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int k = 5;
    vector<int> countries = {1, 2, 3, 4, 5, 6};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int k = 2;
    vector<int> countries = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 3000000000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int k = 7;
    vector<int> countries = {96, 17, 32, 138, 112, 50, 7, 19, 412, 23, 14, 50, 47, 343, 427, 22, 39};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 166;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int k = 4;
    vector<int> countries = {11, 7, 19, 20};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int k = 4;
    vector<int> countries = {10, 11, 12, 13, 14, 15};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int k = 20;
    vector<int> countries = {779627264, 93189506, 613466388, 134427144, 828724020, 544708317, 42347176, 37421484, 74484324, 520323545, 234449936, 196844102, 912238837, 551556697, 817814869, 747734358, 269911175, 567298611, 306200728, 395940546, 21525713, 579409252, 410141724, 72210874, 326985688, 879159886, 742795969, 705906481, 765095838, 229899691, 463828983, 862019855, 174654779, 65742820, 968052250, 650219887, 447544129, 761736194, 70263040, 10935236, 128093184, 627882505, 263709203, 211025620, 564598826, 397556360, 536827919, 140380264, 531732785, 630266277};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 1095445512;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int k = 20;
    vector<int> countries = {921385133, 790821665, 696669406, 629378824, 414868114, 119982058, 37118381, 187335494, 170960800, 355358559, 336049477, 714056927, 884157521, 677542714, 175746499, 78642955, 108047781, 136658582, 432930531, 800141367, 841531080, 602333054, 137043306, 60072120, 93197385, 525060743, 695383137, 377557617, 291335284, 295615380, 911638059, 687324348, 345506765, 29197955, 928461497, 991504508, 885353733, 672301705, 210088033, 718080603, 703278098, 432812568, 947587990, 411980479, 709864060, 667653099, 817211438, 409243463, 774387240, 527316494};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 1268388701;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int k = 20;
    vector<int> countries = {851373528, 700343230, 667482447, 852927139, 292184590, 275666245, 949018142, 49002282, 689030432, 864309560, 51452024, 913879220, 174559276, 126774957, 997419305, 699811244, 807533640, 42801203, 160031249, 996024117, 106357046, 447489713, 225338308, 380565035, 413686851, 412043300, 48638853, 170563977, 530396191, 439851648, 409790936, 15566846, 136249554, 254321295, 767411134, 524889291, 875007969, 291761655, 987820971, 597478355, 623281503, 880803148, 681828276, 631558678, 385298266, 489237224, 220906956, 331379031, 459860611, 349832303};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 1212541937;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int k = 20;
    vector<int> countries = {724065689, 399663895, 11110909, 238593518, 307672214, 6913631, 941330709, 172098483, 672726710, 562486539, 11848830, 314955144, 667554291, 977434362, 487235259, 444091954, 808612951, 305352366, 188309458, 903504601, 868090233, 375044037, 731093358, 101247755, 544188329, 787589579, 901690442, 249873919, 918473591, 440446187, 571174429, 232186216, 874393463, 562497525, 289922196, 186085456, 902040002, 96508662, 717427486, 645455850, 746466149, 149231738, 341483139, 848448473, 170336890, 144446887, 519721539, 130184838, 696424647, 260511833};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 1207412318;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int k = 20;
    vector<int> countries = {736854234, 153817364, 571434187, 711532836, 112553317, 102047734, 349869625, 440058352, 617768922, 850617954, 435131784, 829236387, 161378428, 575953033, 634761420, 113664934, 694414704, 211048275, 287720323, 270704751, 745722392, 656858411, 803828350, 307811838, 350742550, 680859614, 518951537, 26486857, 164227676, 990119561, 614262981, 539727447, 658040687, 53124777, 473874164, 47408321, 696793007, 862778964, 262361918, 632803537, 456928501, 982399019, 692191811, 133503748, 608961249, 897200945, 920765947, 461271007, 917927373, 905680577};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 1296209166;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int k = 2;
    vector<int> countries = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 25000000000;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int k = 13;
    vector<int> countries = {664200243, 892452227, 673566186, 693683287, 728264260, 674789880, 933016497, 787976560, 706644330, 867748883, 849252185, 705566904, 693093026, 824641596, 921736452, 968187934, 738736894, 693362287, 872488647, 690194575, 679681728, 759530598, 898318214, 757029994, 926439271, 843573627, 669627346, 809224259, 995314429, 822608511, 722522963, 795950531, 710720233, 774940456, 921057041, 820367893, 618716102, 634444311, 758992084, 919682818, 825892821, 994050701, 825566953, 906064628, 814055948, 812011322, 977316227, 640253278, 779987387, 651570564};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 3049624237;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int k = 10;
    vector<int> countries = {638074479, 717901019, 910893151, 924124222, 991874870, 919392444, 729973192, 607898881, 838529741, 907090878, 632877562, 678638852, 749258866, 949661738, 784641190, 815740520, 689809286, 711327114, 658017649, 636727234, 871088534, 964608547, 867960437, 964911023, 642411618, 868318236, 793328473, 849540177, 960039699, 998262224, 775720601, 634685437, 743766982, 826321850, 846671921, 712570181, 676890302, 814283264, 958273130, 899003369, 909973864, 921987721, 978601888, 633027021, 896400011, 725078407, 662183572, 629843174, 617774786, 695823011};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 3983180234;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int k = 20;
    vector<int> countries = {24555, 10027, 113879318, 4, 348589382, 14824189, 147761, 214483647, 475906539, 212566, 361, 2789, 2134625, 144730, 18, 537787, 18228647, 76570565, 862764, 108634017, 6014, 189886689, 521242, 434753491, 518, 1718, 65932, 21145, 111591972, 46, 670, 300359704, 81705, 25, 18740, 38136, 20, 28829193, 22669310, 598, 22498619, 50316556, 59, 558231, 8420544, 214748647, 10546, 828395, 12, 59357};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 3145548;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int k = 20;
    vector<int> countries = {143, 26167551, 42881, 7850070, 518948905, 126693, 87, 1236406, 11809, 15414, 949446851, 945078080, 9028, 47234125, 32350, 281, 615909512, 247483647, 2, 54606, 12, 96755454, 88048592, 778513924, 46381829, 199204, 1201, 9, 233420733, 168872, 9437, 104, 27428, 23152, 102, 1503, 3, 190173, 2498, 112092, 246663585, 142844, 16973, 21948, 13655, 578763, 604499, 572603, 53979301, 940};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 745327;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int k = 20;
    vector<int> countries = {4898850, 2688, 178, 174, 81, 520507, 6197, 547102, 15624, 4560, 15531, 11, 2, 194616562, 10357, 24080, 72833078, 21, 14, 244543813, 667678639, 43354221, 86623, 241738, 373024, 49822, 1936, 5069, 4, 958, 24623630, 15509617, 14781263, 2109109, 5, 534338464, 117808, 285903811, 126234987, 163491, 29820, 58670477, 15157, 537602839, 327989544, 2272, 214789, 815, 40985, 2362094};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 830481;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int k = 20;
    vector<int> countries = {1126, 327315894, 730211407, 336889, 6339, 592356681, 1866913, 100, 214748347, 12931516, 593128246, 158, 2275159, 18, 17876191, 66, 4871, 206942, 8, 10, 747483647, 14, 2066708, 3383, 16, 847483647, 3, 214463647, 17546, 6, 11, 2745, 5853, 70006228, 2, 657654619, 1284, 3356, 11312, 225727, 1181538, 3, 636842341, 117133210, 783289527, 3, 41, 161194987, 473504183, 722615792};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 4109075;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int k = 6;
    vector<int> countries = {10923, 48723, 13, 100, 782, 1092, 99990};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 113;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int k = 11;
    vector<int> countries = {1230498, 39482, 57, 1237, 348972, 890, 123468, 3475923, 2384765, 87542, 34281};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 57;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int k = 7;
    vector<int> countries = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int k = 7;
    vector<int> countries = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int k = 4;
    vector<int> countries = {1000, 100, 10, 5, 1};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int k = 7;
    vector<int> countries = {842, 6, 2360319, 565, 6864, 14, 3489, 2, 21723};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 22;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int k = 14;
    vector<int> countries = {32761689, 2804845, 249467, 1474245, 170277, 126220346, 3, 20744334, 3, 5958688, 775, 791, 147907115, 8, 102973, 62268205, 92425, 2287089, 16875493, 102652, 40};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 149835;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int k = 10;
    vector<int> countries = {158086265, 293395644, 199838070, 129404, 21112, 6, 43, 4, 317618267, 704, 42362, 45561146, 75672, 68, 395751475, 236172945, 45758684, 396946, 3, 26042214, 2461594, 301267235, 436820240, 4, 84702299, 212, 8854, 109, 54992, 6, 23494, 5748663, 3942, 129372};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 105580954;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int k = 6;
    vector<int> countries = {362, 5, 25, 17, 1072913, 3844, 11652522, 4, 366655597, 8625, 7835709, 3, 141, 218541918, 262, 6042250, 2024470, 2944, 1730, 5681077, 22, 3, 10223486, 426, 13750043, 1085, 186145018, 745, 1334176, 87162819, 1283833, 30514555, 14865212, 11, 93466, 1457054, 61406345, 41, 3, 8, 250006596, 30138, 40597, 53019451, 2563, 441, 153328804, 20, 137};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 216329135;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int k = 20;
    vector<int> countries = {34107563, 30308835, 3189323, 18777, 131210, 74102, 587481, 114, 47, 6, 1027, 4754, 23135369, 27617137, 8220, 136, 2012, 4, 4, 1439, 47864, 1343864, 38805176, 696762, 31821135, 340874935, 35929162, 20351204, 32018420, 268032, 5834, 329, 252, 107818107, 95179, 5, 91828312, 232379802, 36202031, 50965};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 355156;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int k = 16;
    vector<int> countries = {785, 2468, 408462733, 7713, 9, 22939874, 18, 198990, 340, 51, 69737, 16731, 39302, 23152, 41, 74, 348194297, 3427, 350485, 459304, 18614, 3036117, 136827, 112962239, 2634, 367168, 247767, 9895, 31, 6993728};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 41761;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int k = 12;
    vector<int> countries = {263295, 55, 637600, 164536319, 29550, 16794400, 79515, 2010157, 1570, 5319604, 103, 2140918, 42, 712628, 31515, 13, 114193614, 23070, 27283, 18181, 572, 2307905, 11951, 193621962, 47683, 518848, 45864436, 115540, 7181, 188, 70642, 861887, 9986, 7636172, 12575, 11695, 1820995, 5, 22, 100483716, 116055402, 174, 10, 1971, 109102813, 504, 7};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 5698480;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int k = 16;
    vector<int> countries = {22593, 81, 12, 1958, 44936987, 7659246, 22072, 3014526, 25935041, 387746, 715050, 194, 120641, 42275, 642488, 183859559, 2742427, 83861, 3, 77522, 431110288, 578525, 50, 40049234, 83274, 19, 315, 121, 447268379, 27823};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 160938;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int k = 4;
    vector<int> countries = {3251, 14288, 79585086, 179760452, 64, 66773, 27119, 968, 397581, 1581, 5721, 116677, 570, 24, 187515588, 5};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 634622;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int k = 8;
    vector<int> countries = {387871, 55, 250, 72, 9, 50238, 29, 490456, 32, 992975, 49518, 1118, 98701, 64, 941, 2310098};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 2570;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int k = 14;
    vector<int> countries = {2924, 140139, 80613166, 82873, 74041, 792, 8705840, 44, 151, 6376, 158, 867, 71455, 13033, 4, 31056780, 247321809, 245118847, 46124, 667, 4181, 5858572, 105112, 2028285, 401, 103767, 98, 144522493, 575, 215767087, 17710, 15, 15042829, 56120013, 230, 9432, 17, 9, 681, 61815257, 2502, 132998, 3140, 1038};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 410777;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int k = 9;
    vector<int> countries = {11, 13, 86869026, 19005815, 2228, 29520, 1623249, 112588578, 456, 179506201, 1630, 94815, 197201845, 9486229, 38, 24566128, 357, 2371};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 131439;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int k = 10;
    vector<int> countries = {12017, 214544, 18198461, 43, 887, 331733, 277503912, 60290438, 197962, 20, 71426, 188527, 69, 2973117, 26411, 868159, 17766, 2771, 100258, 1304013, 3422844, 31, 1982293, 19, 135886, 4, 10214408, 41, 2801, 71, 237761678, 443066, 30, 27825, 68529, 263112941, 16842887, 3, 31545404, 3, 28207, 173845646, 1073, 62, 5, 893812, 50, 379, 3, 8751};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 11769959;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int k = 20;
    vector<int> countries = {252526585, 153, 1008129, 17051546, 98643374, 40055593, 2129337, 2441, 4400, 843750, 38147, 516095, 88449183, 14743352, 32208113, 12, 2990, 71632636, 230284533, 10840, 221113, 1016, 23456, 4, 1091629, 45911, 12, 1290, 329774078, 2, 39, 74684434, 74376, 1709420, 69925, 3931806, 278236, 318859, 423539, 314583, 1207, 15894, 305, 77, 14, 271, 8};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 788405;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int k = 13;
    vector<int> countries = {353000, 91, 104, 10, 55, 465634801, 741080, 903124, 916309, 483769365, 12553991, 196004506, 9, 6176, 459, 150556370, 340, 101487, 93};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 580;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int k = 10;
    vector<int> countries = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 1100000000;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int k = 8;
    vector<int> countries = {8, 8, 8, 8, 8, 8, 8, 8, 8};
    WorldPeace* pObj = new WorldPeace();
    clock_t start = clock();
    long result = pObj->numGroups(k, countries);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=5850&pm=2420
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
class WorldPeace { 
public: 
long long numGroups(int a, vector <int> b) { 
  long long ret; 
  i64 hi = 10000000000000000ll, lo = 0; 
  while( hi > lo ) { 
    i64 mid = (hi+lo+1)/2; 
    i64 x = 0; 
    for( int i = 0; i < b.size(); i++ ) 
      x += b[i] <? mid; 
    if( x >= a*mid ) lo = mid; else hi = mid-1; 
  } 
  return hi; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/