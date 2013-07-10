/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7684
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

class FastPostman {
public:
    int minTime(vector<int> address, vector<int> maxTime, int initialPos);
};

int FastPostman::minTime(vector<int> address, vector<int> maxTime, int initialPos) {
    int ret;
    return ret;
}


int test0() {
    vector<int> address = {1, 3, 5, 7};
    vector<int> maxTime = {9, 2, 5, 100};
    int initialPos = 4;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> address = {1, 5};
    vector<int> maxTime = {6, 2};
    int initialPos = 3;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> address = {1000000};
    vector<int> maxTime = {45634};
    int initialPos = 876;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> address = {1, 7, 10, 4};
    vector<int> maxTime = {15, 6, 28, 39};
    int initialPos = 2;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> address = {1000000, 1000000, 1000000, 1000000};
    vector<int> maxTime = {563, 23452, 32426, 1};
    int initialPos = 1000000;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> address = {1000000, 1};
    vector<int> maxTime = {1000000, 1000000};
    int initialPos = 500000;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
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
    vector<int> address = {1000000};
    vector<int> maxTime = {999998};
    int initialPos = 1;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
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
    vector<int> address = {1};
    vector<int> maxTime = {999998};
    int initialPos = 1000000;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> address = {99988, 4, 22, 99986, 99987, 99982, 99994, 15, 23, 99990, 99992, 9, 10, 24, 16, 17, 3, 99996, 19, 99978, 14, 6, 99997, 99977, 99979, 99984, 100000, 18, 99983, 7, 99981, 99980, 99998, 20, 99995, 99999, 21, 5, 25, 2, 99993, 11, 99991, 12, 8, 99985, 99976, 99989, 1, 13};
    vector<int> maxTime = {2499050, 4398746, 799628, 2099160, 2299103, 1299428, 3698816, 2199131, 599715, 2898956, 3298878, 3398861, 3198896, 399806, 1999190, 1799253, 4598735, 4098770, 1399391, 499760, 2399076, 3998780, 4298753, 299853, 699671, 1699286, 4898726, 1599320, 1499355, 3798803, 1099505, 899586, 4498740, 1199466, 3898791, 4698731, 999545, 4198761, 199901, 4798728, 3498845, 2998935, 3098915, 2798978, 3598830, 1899221, 99950, 2699001, 4998725, 2599025};
    int initialPos = 26;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 4998725;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> address = {9, 8, 4, 99998, 2, 99996, 99999, 3, 5, 99992, 6, 99993, 7, 99997, 99991, 99995, 99994, 100000, 1};
    vector<int> maxTime = {199963, 399930, 1199838, 1499820, 1599816, 1099846, 1699813, 1399825, 999855, 299946, 799876, 499915, 599901, 1299831, 99981, 899865, 699888, 1899810, 1799811};
    int initialPos = 10;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1899810;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> address = {100000, 3, 99993, 12, 99996, 10, 99995, 99991, 99998, 7, 2, 99994, 99992, 6, 11, 99997, 5, 99990, 9, 1, 4, 99989, 8, 99999};
    vector<int> maxTime = {2299701, 1999710, 899820, 199953, 1499745, 599871, 1299766, 499890, 1899715, 1199778, 2199703, 1099791, 699853, 1399755, 399910, 1699728, 1599736, 299931, 799836, 2399700, 1799721, 99976, 999805, 2099706};
    int initialPos = 13;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 2399700;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> address = {798286, 934751, 432669, 430981, 870917, 269039, 649699, 960876, 542125, 76682, 482043, 733430, 378164, 466601, 845243, 88170, 707118, 6266, 789570, 550799, 272838, 921589, 786902, 802689, 652811, 839234, 197297, 113038, 61438, 494797, 421017, 144259, 820146, 124939, 61621, 578708, 95870, 705959, 554884, 149616, 818042, 875765, 922622, 411522, 589200, 858293, 435318, 149370, 694307, 553868};
    vector<int> maxTime = {8631986, 8768451, 2463835, 1850063, 8704617, 2123, 8483399, 8794576, 6325385, 4993590, 4588229, 8567130, 262330, 3815925, 8678943, 4194356, 8540818, 7839966, 8623270, 7295433, 5922, 8755289, 8620602, 8636389, 8486511, 8672934, 81463, 2783466, 6806072, 5411705, 1286583, 1563341, 8653846, 2156105, 5844881, 8412408, 3445194, 8539659, 8388584, 490878, 8651742, 8709465, 8756322, 752784, 8422900, 8691993, 3105746, 1014936, 8528007, 8387568};
    int initialPos = 271162;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 8794576;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> address = {836144, 600320, 370912, 201363, 620200, 344703, 339101, 811783, 715284, 426868, 910022, 736418, 270672, 583398, 469205};
    vector<int> maxTime = {42509, 625541, 854949, 1024498, 605661, 881158, 886760, 18148, 510577, 798993, 315839, 142235, 955189, 642463, 756656};
    int initialPos = 829931;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1024498;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> address = {705016, 567690, 722337, 136607, 100889, 387997, 647877, 76543, 476278, 533679, 767827, 146908, 970055, 480195, 804151, 909653, 337341, 278557, 973617, 24020, 823776, 523443, 504764, 91728, 782237, 88321, 456777, 271202, 918031, 320243, 379645, 81201, 149857, 465506, 613525, 917349, 339878};
    vector<int> maxTime = {5526418, 5389092, 5543739, 871251, 1313511, 2176453, 5469279, 3993429, 4393164, 5355081, 5589229, 480084, 5791457, 5301597, 5625553, 5731055, 670517, 7663, 5795019, 4845422, 5645178, 5344845, 5326166, 1880184, 5603639, 2476129, 2844585, 308, 5739433, 306749, 1592267, 3220161, 136363, 3604466, 5434927, 5738751, 1074522};
    int initialPos = 271510;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 5795019;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> address = {617323, 952301, 292819, 366911, 437240, 396739, 313041, 838307, 196517, 451201, 952101, 742361, 887216, 72350, 349950, 27412, 232827, 305406, 301348, 981419, 641303, 50353, 586076, 116921, 619067, 748911, 551812, 724182, 801077, 874056, 350688, 947408, 490935, 464523, 141161, 505659, 354996, 781413, 25602, 810057, 115493, 354252, 118752, 272140, 443133, 781162, 197628, 574960, 208852, 34538};
    vector<int> maxTime = {2671446, 12152902, 291926, 217834, 436347, 395846, 41398, 10413498, 2250640, 1201120, 12152702, 5801058, 12087817, 6549173, 4489, 9602603, 982746, 49033, 152271, 12182020, 4648380, 8028624, 2640199, 5172762, 3625514, 5807608, 1895345, 5782879, 7277900, 12074657, 3751, 12148009, 1240854, 1214442, 3147608, 1255578, 98623, 5840110, 11226203, 8819958, 5174190, 187, 4125829, 601447, 772440, 5839859, 2249529, 2629083, 1552385, 8044439};
    int initialPos = 354065;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 12182020;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> address = {541270, 19362, 871484, 179959, 561811, 19873, 816991, 573306, 183099, 616388};
    vector<int> maxTime = {903031, 1424939, 572817, 1264342, 263144, 1424428, 7964, 251649, 1261202, 208567};
    int initialPos = 809027;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1424939;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> address = {947003, 838170, 938831, 181062, 512364, 939057, 732750, 491971, 492237, 250174, 123706, 693087, 418599, 41746, 708575, 987329, 124136, 572587, 185137, 771180, 91654, 544652, 484380, 361203, 382099, 909228, 80086, 679516, 654567, 132632, 709664, 761165, 296792, 921332, 418487, 625113};
    vector<int> maxTime = {2769187, 758080, 858741, 4916202, 2074018, 1647325, 60230, 2094411, 2094145, 4847090, 4973558, 20567, 2167783, 5055518, 36055, 4109935, 4973128, 492497, 4912127, 691090, 5005610, 1252920, 2102002, 3354987, 2204283, 829138, 5017178, 6996, 138413, 4964632, 37144, 303919, 3419398, 841242, 2167895, 167867};
    int initialPos = 672520;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 5055518;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> address = {767080, 615231, 804450, 127718, 186549, 543063, 753761, 354850, 618143, 391072, 967343, 927563, 289446, 380907, 841783, 720086, 654111, 988584, 763131, 135124, 613245, 796233, 671939, 592317, 271802, 136554, 133509, 460730, 347718, 543614, 43685, 232501, 261767, 944503, 114129, 53754, 744445, 791825, 142298, 7854, 817332, 450992, 796993, 354801, 559094, 652647, 258335, 610588, 910080, 997272};
    vector<int> maxTime = {1012121, 860303, 1049502, 133062, 431599, 788119, 998832, 599927, 863215, 636113, 1212397, 1172591, 534501, 625959, 1086856, 965138, 899157, 1233613, 1008164, 380201, 858301, 1041263, 917014, 837377, 516873, 381629, 378583, 705760, 592775, 788677, 217083, 477539, 506806, 1189547, 119433, 59070, 989479, 1036878, 387330, 252923, 1062370, 696045, 1042042, 599842, 804157, 897678, 503389, 855659, 1155151, 1242322};
    int initialPos = 112808;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1242300;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> address = {272227, 300835, 959550, 745581, 445448, 946574, 239237, 955200, 489501, 35602, 21236, 803486, 126118, 957242, 330810, 876817, 61320, 549604, 143405, 933120, 302690, 54148, 989142, 646611, 547037, 13942, 997705, 393694, 866634, 578057};
    vector<int> maxTime = {2641728, 1481499, 10387565, 217179, 517320, 6641418, 2674710, 8500708, 473277, 7552344, 7566719, 978853, 4062992, 10385258, 1451527, 3312282, 5741785, 16080, 4045730, 4870001, 1479688, 5748967, 10417154, 118245, 18639, 9441980, 10425717, 569079, 2047323, 49689};
    int initialPos = 565659;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 10425694;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> address = {492230, 541559, 277363, 881411, 339783, 395933, 662484, 172460, 24949, 85436, 195089, 539158, 881852, 603842, 664333, 989225, 959719, 94608, 726491, 96862, 552290, 943859, 528291, 845558, 593081, 318905, 712376, 259631, 660824, 950705};
    vector<int> maxTime = {542090, 492757, 756931, 152885, 694529, 638382, 371836, 861840, 1009357, 948883, 839217, 495171, 152439, 430487, 369995, 45060, 15582, 939714, 307832, 937425, 482035, 90456, 506025, 188749, 441252, 715419, 321928, 774698, 373499, 6572};
    int initialPos = 944167;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1009334;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> address = {50731, 493117, 530505, 341248, 543570, 604287, 574561, 49075, 845808, 458274, 718306, 163675, 350283, 497216, 653552, 735679, 389402, 905405, 42846, 336924, 6571, 502013, 294991, 238235, 430947, 543436, 192118, 564298, 909581, 343712, 883577, 941653, 638554, 983310, 931600, 271321, 840406, 253371, 941253, 394853, 817300, 342944, 287959, 586891, 432978, 543814, 389092, 922833, 153433};
    vector<int> maxTime = {8121876, 65240, 316960, 1650692, 638734, 699416, 669681, 9988679, 3045245, 30400, 2036386, 8008911, 1021960, 69352, 1338359, 2053746, 483905, 3104843, 9994897, 1654994, 10031157, 74146, 2494444, 5048546, 3107, 329886, 6481383, 659459, 4377189, 1028517, 3083061, 7230923, 733721, 9054442, 5741941, 3738935, 3039857, 5033399, 7230525, 181315, 3016773, 1649009, 3722303, 682025, 1052, 638946, 484233, 5733179, 8019162};
    int initialPos = 434006;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 10031153;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> address = {567083, 852291, 383106, 846766, 804880, 330586, 974617, 251723, 929856, 913802, 734604, 715260, 542869, 387506, 525051, 684553, 803920, 872764, 752700, 816951, 99814, 645126, 795251, 56866, 98672, 491745, 400364, 388912, 197560, 903454, 531691, 342213, 723930};
    vector<int> maxTime = {569856, 284642, 753815, 290188, 332058, 806357, 162326, 885213, 3388, 19421, 402339, 421698, 594070, 749452, 611891, 452379, 333036, 60491, 384242, 320009, 1037131, 491817, 341684, 1080057, 1038257, 645174, 736585, 748029, 939367, 29760, 605226, 794714, 413008};
    int initialPos = 926506;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1080046;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> address = {186047, 367926, 87447, 714406, 381848, 485725, 370496, 713390, 284424, 473654, 940382, 421943, 897210, 185061, 288619, 951064, 425082, 332018, 470835, 578530, 53364, 214708, 213871, 490619, 890969, 715185, 602125};
    vector<int> maxTime = {3321582, 3139695, 3420196, 897735, 3125754, 669057, 3137101, 441374, 3223184, 1140054, 1606786, 3085698, 1563598, 3322547, 3218996, 2556552, 3082525, 3175611, 2076300, 130708, 3454273, 3292923, 3293750, 218646, 1557385, 898507, 107120};
    int initialPos = 709217;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 3454229;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> address = {161987, 953106, 931649, 383945, 471641, 773297, 566037, 202527, 511729, 870855, 661954, 693623, 804847, 9000, 189489, 908056, 588072, 483679, 752618, 563567, 232660, 699109, 125397, 431819, 593477, 659993, 770132, 955927, 798150, 362930, 231951, 74815, 79195, 182419, 667118, 436905, 155290, 936055, 851900, 340066, 832969, 593310, 392422, 815992, 36016, 408274, 367833, 323767, 591160, 955767};
    vector<int> maxTime = {7411037, 5388186, 3125073, 3672772, 2665066, 639910, 1280681, 7370479, 1906717, 2265855, 72961, 41326, 1041903, 7564044, 7383524, 3101512, 825118, 2653050, 300583, 1854898, 7340365, 35844, 7447656, 3624893, 141469, 74919, 636712, 6617108, 1035205, 4798020, 7341059, 7498230, 7493844, 7390606, 67823, 3619836, 7417723, 4224884, 1566560, 6001264, 1547639, 459929, 3664327, 1530676, 7537008, 3648441, 4793119, 7249287, 822028, 6616924};
    int initialPos = 734912;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 7564006;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> address = {498645, 872890, 739747, 264495, 531062, 895885, 950423, 137420, 369071, 52446, 194450, 874053, 814503, 713997, 149076, 933337, 585460, 244386, 13508, 364457, 864162, 491507, 976280, 138597, 622963};
    vector<int> maxTime = {1200921, 2545409, 2412267, 333516, 2203585, 2568411, 2622949, 669749, 438053, 754707, 51871, 2546603, 2487030, 2386538, 6503, 2605845, 2258012, 101800, 1686042, 433455, 2536676, 1193768, 2648786, 207585, 2295518};
    int initialPos = 155556;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 2648786;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> address = {649635, 298410, 744316, 660838, 777901, 742544, 941800, 745914, 807075, 439542, 62360, 875314, 161744, 295426, 897327, 504285, 490103, 841709};
    vector<int> maxTime = {268396, 805439, 1257293, 279598, 1290868, 361292, 2885881, 1258915, 2751131, 58284, 2006395, 2819398, 1907038, 808422, 2841380, 123005, 108828, 2785765};
    int initialPos = 381283;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 2885835;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> address = {192543, 755103, 975087, 766935, 304893, 42125, 101475, 351510, 993699, 785195, 285998, 728973, 76324, 71416, 776627, 985676, 722486, 977542, 673463, 381700, 523025, 154600, 224450, 411296, 231021, 751260, 447116, 245295, 520781, 502882, 122679, 759114, 57482, 949183, 853779, 6366, 22856, 892210, 604179, 731305, 551601, 83014, 539831, 483309, 781568, 721194, 302812, 925874, 420862};
    vector<int> maxTime = {3982875, 3396623, 9119125, 3408462, 456602, 11886866, 6513193, 409944, 10935252, 5829483, 1805670, 2330030, 10017916, 11857552, 4566962, 10927253, 2323575, 10919100, 1322719, 379777, 204863, 5198856, 3950981, 350201, 2872582, 2352346, 4057, 1846371, 202581, 184683, 6491951, 3400676, 11871485, 7360911, 7265486, 11922610, 11906120, 7303933, 1253443, 2332355, 703294, 8227074, 221647, 40251, 4571915, 1370450, 952077, 7337553, 102697};
    int initialPos = 443105;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 11922575;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> address = {149288, 186533, 709725, 782716, 564126, 572530, 695225, 350734, 657935, 584190, 800540, 663318, 315707, 128082, 857220, 341097, 932976, 749023, 700732, 300708, 419745, 369304, 4718, 123379, 133762, 810057, 884930, 683102, 918465, 790748, 595791, 99193, 507068, 843494, 971503, 710291, 606427, 973903, 662062, 125631, 224257, 163224, 658598};
    vector<int> maxTime = {165354, 6028, 1795607, 1868612, 1650045, 1658422, 1781125, 1436635, 1743830, 1670089, 1886420, 1749222, 728866, 186566, 1943133, 754227, 2018904, 1834948, 1786616, 359195, 1505635, 1455204, 1090639, 536518, 180868, 1895951, 1970843, 1769006, 2004365, 1876637, 1681672, 996140, 1592983, 1929382, 2057407, 1796197, 1692346, 2059807, 1747942, 534260, 90397, 29376, 1744495};
    int initialPos = 180506;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 2059781;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> address = {980527, 593434, 536520, 697223, 81465, 738557, 919914, 304869, 989681, 848242, 777958, 937571, 75827, 433399, 464714, 91172, 280415, 943747, 640941, 802291, 469796, 781706, 808790, 223204, 567238, 178057, 899660, 88687, 643471, 373642, 428133, 489934, 284344};
    vector<int> maxTime = {6630934, 635474, 191396, 2291066, 5720617, 3544529, 6570364, 924025, 6640113, 6498683, 3583892, 6587986, 5726271, 77740, 46399, 2897114, 948488, 6594172, 1309031, 4986790, 1037, 4966218, 4993290, 1726771, 222076, 1771908, 6550108, 4273198, 2237344, 415687, 82972, 21183, 944572};
    int initialPos = 470822;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 6640081;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> address = {779602, 864009, 277201, 454552, 302201, 494428, 648787, 897913, 607731, 959910, 6844, 456330, 989338, 163109, 326635, 864776, 450429, 742193, 160307, 436498, 96479, 930045, 503565, 337085, 133438, 584046, 663083, 36058, 959962, 652424, 315926, 294469, 67937, 594323, 349618, 66480, 686091, 517710, 670730, 549708, 745047, 395036, 933392, 501884, 375474, 557883, 748079, 537137, 22049, 741378};
    vector<int> maxTime = {5045613, 5130040, 282894, 1268675, 7920, 1954343, 4914801, 5163900, 4873764, 5225911, 4272851, 1270477, 5255363, 396971, 32354, 5130760, 684324, 5008193, 974415, 670385, 2352307, 5196069, 3776122, 107105, 1593356, 4850068, 4929101, 3280602, 5225957, 4918454, 21613, 64496, 2380810, 4860343, 119633, 3250209, 4952098, 4783729, 4936735, 4815703, 5011047, 165052, 5199389, 2814769, 145488, 4823871, 5014083, 4803148, 3294599, 5007372};
    int initialPos = 310078;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 5255322;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> address = {423732, 850165, 884887, 606100, 818759, 509097, 394868, 803137, 780703, 603308, 861021, 489363, 421241, 42327, 232963, 896136, 866463, 956949, 915239, 407341, 545561, 227164, 883515, 577064, 551146, 655790, 822431, 825333, 735298, 149998, 385236, 216260, 618535, 308201, 126962, 993599, 787826, 771117, 85598, 110171, 872759, 809363, 583686, 12283, 156355, 988297, 448147, 170616, 992266, 111143};
    vector<int> maxTime = {413040, 839479, 874209, 595436, 808104, 498402, 384207, 792444, 770034, 592643, 850335, 478709, 410551, 31662, 222271, 885457, 855776, 946254, 904545, 396647, 534889, 216481, 872841, 566401, 540474, 645131, 811774, 814648, 724599, 139340, 374566, 205570, 607841, 297516, 116266, 982911, 777174, 760439, 74942, 99517, 862103, 798664, 573009, 1596, 145672, 977612, 437490, 159943, 981604, 100466};
    int initialPos = 10701;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 982898;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> address = {88421, 954425, 488384, 983067, 834567, 74047, 260245, 850317, 992947, 866828, 366079, 447588, 369131, 535905, 190465, 259155, 362152, 415183, 431731, 695679, 881987, 45391, 841142, 412509, 47863, 209091, 517553, 479894, 721388, 607470, 644553, 570172, 705016, 513638, 664509, 697348, 259903};
    vector<int> maxTime = {76607, 942620, 476578, 971256, 822736, 62243, 248415, 838495, 981129, 855001, 354255, 435762, 357341, 524091, 178649, 247359, 350326, 403379, 419935, 683857, 870196, 33590, 829348, 400722, 36045, 197265, 505725, 468082, 709571, 595653, 632732, 558347, 693191, 501830, 652704, 685553, 248104};
    int initialPos = 11831;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 981116;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> address = {64671, 349689, 480610, 468748, 207303, 127626, 729943, 730186, 655263, 768419, 470499, 971358, 623575, 41939, 997435, 780921, 549792, 640576};
    vector<int> maxTime = {49453, 334471, 465397, 453525, 192091, 112415, 714691, 714971, 640031, 753178, 455272, 956097, 608356, 26683, 982188, 765661, 534580, 625359};
    int initialPos = 15261;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 982174;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> address = {334642, 579484, 669639, 675694, 858798, 993790, 118950, 751149, 499084, 237620, 177004, 621299, 426518, 515532, 640095, 208990, 52035, 891394, 274600, 758762, 877477, 76370, 501060, 71923, 782045, 759677, 464244, 368490, 629460, 221117, 959363, 962280, 838065, 502732, 552342, 53471, 975632, 990579, 956977, 460840, 561272, 245661, 546105, 643281, 2978, 945242, 394516, 832343, 5951, 571725};
    vector<int> maxTime = {660895, 416053, 325930, 319871, 136746, 1776, 876600, 244398, 496488, 757920, 818533, 374231, 569047, 480018, 355440, 786544, 943501, 104142, 720965, 236785, 118065, 919161, 494496, 923603, 213509, 235882, 531287, 627071, 366106, 774431, 36210, 33272, 157507, 492818, 443191, 942104, 19894, 4966, 38567, 534710, 434303, 749911, 449464, 352274, 992552, 50316, 601057, 163182, 989603, 423841};
    int initialPos = 995525;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 992547;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> address = {970443, 752835, 925661, 452674, 251626, 90715, 641441, 624313, 684582, 875374, 655572, 836881, 231837, 589274, 18335, 277524, 299839, 49786};
    vector<int> maxTime = {1082, 218677, 45881, 518832, 719910, 880815, 330051, 347193, 286945, 96127, 315943, 134631, 739668, 382244, 953186, 694012, 671661, 921720};
    int initialPos = 971492;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 953157;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> address = {93689, 769717, 10298, 207268, 815154, 429056, 313850, 408895, 909896, 950718, 596725, 490861, 644629, 668547, 377769, 314306, 233835, 815783, 192239, 418855, 253850, 450629, 740696, 799745, 275967, 348883, 695917, 830075, 437071, 194078, 254191, 168977, 493434, 822775, 110102, 481157, 222576};
    vector<int> maxTime = {872488, 196447, 955867, 758908, 151004, 537102, 652351, 557302, 56294, 15465, 369476, 475311, 321552, 297651, 588418, 651849, 732324, 150414, 773931, 547305, 712332, 515534, 225493, 166423, 690220, 617317, 270267, 136117, 529100, 772117, 711978, 797180, 472750, 143395, 856095, 485035, 743618};
    int initialPos = 966151;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 955853;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> address = {786303, 137461, 645562, 161924, 479232, 496242, 28174, 614868, 486786, 605971, 448345, 561448, 16372, 675367, 257251, 850681, 432421, 651891, 611079, 995227, 954046, 453344, 207796, 826661, 517607, 625781, 197063, 400617, 528288, 944522, 464782, 965, 921530, 869259, 320290, 309306, 335422, 555560, 139283, 833233, 446141, 257986, 956945, 105462, 907203, 549319, 611193, 369735, 429640, 226788};
    vector<int> maxTime = {1098753, 176927, 958022, 152435, 791663, 808704, 286177, 927292, 799247, 918399, 760774, 873889, 298017, 987806, 57140, 1163114, 744849, 964321, 923542, 1307667, 1266493, 765783, 106579, 1139093, 830061, 938232, 117317, 713042, 840743, 1256978, 777203, 313406, 1233970, 1181710, 632725, 5080, 647874, 868004, 175116, 1145661, 758578, 56390, 1269371, 208922, 1219659, 861746, 923644, 682155, 742072, 87594};
    int initialPos = 314350;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1307647;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> address = {265420, 708192, 33772, 264344, 223281, 731877, 746082};
    vector<int> maxTime = {413950, 856722, 182313, 412855, 371825, 880393, 894624};
    int initialPos = 216041;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 894579;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> address = {569225, 475699, 522314, 976714, 2015, 210350, 960669, 698175};
    vector<int> maxTime = {989087, 895591, 942201, 1396599, 421921, 213558, 1380558, 1118045};
    int initialPos = 423886;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1396570;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> address = {844897, 263269, 781317, 991201, 48701, 645463, 266601, 647631, 928717, 984372, 281839, 838549, 93432, 719294, 677226, 624925, 686970, 373169, 422921, 18965, 771217, 330335, 936677, 667418, 640106, 122716, 80995, 113080, 736765, 446509, 433155, 789697, 626272, 918698, 725074, 618189, 413416, 230509, 479361, 879044, 351934, 342453, 331560, 335311, 552820, 321811, 966550, 393399, 239933, 165036};
    vector<int> maxTime = {171226, 752844, 234774, 24888, 967427, 370625, 749495, 368460, 87409, 18096, 734257, 177571, 922695, 296839, 338906, 391174, 329134, 642935, 593183, 997126, 244885, 685784, 79412, 348684, 376022, 893405, 935135, 903043, 279368, 569595, 582967, 226404, 389826, 97434, 291038, 397925, 602679, 785623, 536754, 137070, 664180, 673664, 684543, 680814, 463286, 694311, 249, 622716, 776181, 851066};
    int initialPos = 966314;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 997123;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> address = {331483, 216365, 120933, 229121, 479045, 986199, 17135, 159052, 812855, 875290, 519355, 489239, 681664, 627508, 355420, 621356, 170640, 382485, 588069, 386035, 319323, 951348, 41711, 641314, 761562, 394045, 760344, 698612, 674401, 227480, 227622, 745573, 946607, 402712, 188046, 782531, 169310, 347631, 58505, 5572, 920937, 352899, 150729, 635177, 901447};
    vector<int> maxTime = {724164, 839268, 934672, 826524, 576570, 69405, 1038503, 896570, 242782, 180331, 536287, 566402, 373951, 428129, 700182, 434264, 885005, 673116, 467576, 669573, 736316, 34585, 1013931, 414334, 294080, 661558, 295273, 356986, 381236, 828165, 828012, 310040, 29852, 652911, 867579, 273106, 886327, 708007, 997128, 1050070, 4148, 702748, 904869, 420465, 154153};
    int initialPos = 916800;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1050026;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> address = {514939, 164179, 505516, 455420, 194836, 368409, 275143, 156134, 672296, 644674, 919272, 576514, 167577, 851045, 767954, 542284, 214405, 943228, 925954, 454763, 555578, 503271, 23204, 750141, 921896, 964288, 653352, 902504, 559184, 452199, 345083, 559340, 140533, 314668, 674725, 876389, 191020, 806904, 7750, 604144, 642942, 656968, 757796, 46829, 105865, 384757};
    vector<int> maxTime = {494111, 143361, 484699, 434593, 174035, 347569, 254327, 135310, 651472, 623830, 898450, 555716, 146747, 830231, 747118, 521445, 193575, 922411, 905132, 433959, 534739, 482473, 2394, 729313, 901095, 943462, 632548, 881704, 538340, 431357, 324279, 538500, 119688, 293863, 653914, 855569, 170191, 786082, 1899990, 583310, 622096, 636123, 736950, 26016, 85044, 363943};
    int initialPos = 20848;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1899978;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> address = {83858, 744147, 525214, 226390, 628686, 534441, 649228, 212612, 609148, 353437, 672057, 967242, 830103, 34762, 365572, 519961, 60771, 891563, 230196, 73418, 632783, 13576, 124732, 766296, 922125, 184525, 981836, 689898, 846744, 285694, 428722, 464336, 933441, 226619, 910719, 675890, 188850, 729624, 563987, 437147, 279026, 521782, 821115, 672874, 464945, 634477, 161712, 686326, 642485, 775530};
    vector<int> maxTime = {3383888, 65670, 2942528, 3241356, 2839061, 2933301, 905859, 3255135, 2858593, 3114305, 883032, 1805785, 563753, 3432981, 3102172, 2947785, 3406976, 625210, 3237548, 3394323, 2834961, 3454168, 3343013, 203464, 1178756, 3283222, 2485908, 11424, 580392, 3182053, 3039025, 3003408, 1190070, 3241122, 644369, 403503, 3278891, 51149, 2903760, 3030598, 3188717, 2945963, 258277, 406520, 3002802, 2138549, 3306028, 123494, 1481029, 212693};
    int initialPos = 701322;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> address = {937405, 99909, 469518, 188090, 437956, 871148, 418262, 126792, 771098, 75764, 409320, 358873, 156057, 338629, 301307, 581785, 856851, 703352, 287014, 412198, 340581, 732840, 423306, 122663, 199839, 56632, 885040};
    vector<int> maxTime = {4304150, 5141644, 351898, 5053463, 910103, 2261906, 1796891, 5114765, 1272544, 5165789, 2723733, 3725619, 5085497, 4902929, 4940247, 239633, 1358303, 118066, 4954541, 1802954, 4900971, 615221, 924756, 5118892, 5041717, 5184925, 3199451};
    int initialPos = 585284;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> address = {523078, 722788, 777144, 543218, 976050, 753313, 570066, 592766, 193155};
    vector<int> maxTime = {359040, 159328, 613102, 338897, 812011, 589273, 6608, 29303, 1594907};
    int initialPos = 563457;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> address = {407681, 687718, 249462, 727497, 820775, 954276, 473684, 816272, 191753, 338017, 326511, 479548, 518745, 190183, 555944, 655820, 543255, 184651, 953541, 611218, 716048, 593264, 180330, 173807, 27188, 607262, 426421, 65633, 497129, 594312, 443270, 269760, 137676, 378105, 735881, 277692, 949714, 465277, 882000, 431494, 231376, 720317, 118712, 270431, 323416, 266472, 268974, 722264, 605684, 632279};
    vector<int> maxTime = {2296994, 2577031, 159426, 2616805, 2710090, 2843585, 2362998, 2705587, 8274, 1525496, 992229, 2368859, 2408054, 89090, 2445256, 2545130, 2432565, 94620, 2842852, 2500528, 2605359, 2482578, 262585, 449310, 1916500, 2496575, 2315729, 1253113, 2386437, 2483620, 2332582, 352013, 485439, 1565586, 2625192, 625455, 2839023, 2354586, 2771308, 2320808, 47896, 2609629, 784432, 352684, 989139, 176442, 351225, 2611576, 2494992, 2521589};
    int initialPos = 200026;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> address = {960146, 909822, 339592, 328995, 601115, 244375, 799006, 734509, 607647, 588099, 587869, 610891};
    vector<int> maxTime = {552299, 501974, 1172853, 1183451, 911329, 1268066, 8439, 72933, 199800, 924341, 924574, 196552};
    int initialPos = 807447;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> address = {777690, 788920, 95812, 593807, 879029, 315678, 400570, 735395, 746698, 620046, 589223};
    vector<int> maxTime = {22664, 95875, 1076247, 578254, 293030, 856382, 771490, 149396, 53655, 552018, 582838};
    int initialPos = 755027;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> address = {311961, 71025, 667886, 735213, 80697, 107781, 373628, 633768, 210872, 873898, 722706, 973828, 678875, 687794, 657616, 482264, 351154, 952459, 186159, 14025, 623500, 500094, 37539, 518034, 510179, 111414, 616272, 770924, 463864, 140041, 229368, 835359, 135262, 291565, 390545, 934642, 192021, 601667, 157922, 565849, 965252, 293724, 809837, 925663, 303227, 240228, 903967, 461405, 792412};
    vector<int> maxTime = {1333505, 580202, 2285307, 2352630, 251466, 224384, 1991043, 2251188, 121292, 2491315, 2340121, 2591245, 2296293, 2305216, 2275038, 2099686, 1968576, 2569874, 96578, 1631441, 2240919, 2117515, 1059086, 2135450, 2127601, 21836, 2233693, 2388344, 2081284, 50464, 400141, 2452781, 45685, 800742, 2007965, 2552063, 102442, 2219087, 68339, 2183267, 2582671, 802903, 2427258, 2543082, 1324773, 410997, 2521382, 2078823, 2409828};
    int initialPos = 133251;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> address = {835451, 810023, 254485, 241209, 841540, 764222, 414780, 208220, 960201, 634795, 439300, 663609, 264159, 436474, 483452, 676265, 360670, 743829, 320005, 260765, 830010, 884045, 45825, 139626, 45076, 419403, 848977, 722519, 69444};
    vector<int> maxTime = {1385582, 228449, 3128099, 4330355, 2541044, 182649, 663665, 4363347, 5115326, 443651, 639149, 82038, 814288, 641974, 594995, 69380, 717781, 1816, 758440, 1960269, 248436, 5039167, 6029704, 5935900, 6030450, 659042, 3722591, 23129, 6006082};
    int initialPos = 745648;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> address = {394497, 383568};
    vector<int> maxTime = {11171, 243};
    int initialPos = 383812;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> address = {179544, 459223, 209818, 275070, 454072, 136683, 577946, 720343, 333712, 57751, 188485, 81905, 626538, 337215, 768229, 429641, 800481, 319652, 351705, 173092, 750097, 718579, 182747, 593764, 637539, 920575, 565362, 715665, 518241, 238575, 294651, 524242, 621947, 846402, 679002, 539098, 871690, 117045, 565481, 127794, 181743, 135069, 560069, 908703, 811880, 965658, 930735, 638010, 416775, 565332};
    vector<int> maxTime = {4873188, 484592, 1303994, 668741, 210602, 4916043, 1672120, 6675449, 90241, 10454283, 2093215, 8776531, 3409673, 86739, 6723333, 186171, 8057954, 345017, 72246, 4879638, 6705198, 6673686, 2965882, 1687940, 3420673, 11317107, 1659533, 5495027, 911910, 1275236, 649163, 917913, 2526681, 9541023, 4373728, 932773, 9566316, 7374519, 1659655, 6082902, 3876464, 6075621, 953744, 9603329, 9506503, 11362190, 11327262, 4332733, 7175, 1659509};
    int initialPos = 423953;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> address = {976529, 364683, 903445, 492110, 20607, 935361, 994528, 487223, 598787, 9477, 970159, 137352, 252763, 724590, 230, 146143, 454799, 657943, 374845, 219082, 844399, 592042, 870746, 645304, 294602, 307247, 826096, 833060, 608861, 169540, 888220, 5583, 903702, 689965, 488871, 286482, 410375, 234681, 90651, 652080, 644008, 379639, 329959, 647820, 706489, 755212, 295995, 807695, 689189, 50280};
    vector<int> maxTime = {6286588, 5674744, 1936103, 1518292, 8571650, 3913440, 7597728, 2352329, 452282, 8582783, 5069271, 8454908, 8339492, 265234, 8592027, 8446114, 2384747, 11100, 4473954, 8373173, 1166003, 913643, 1903403, 23741, 8297655, 8285010, 679591, 1154662, 149502, 8422720, 1920879, 8586675, 2833655, 68399, 1521532, 8305772, 3326976, 8357578, 8501607, 5239, 114360, 3357712, 6933159, 21226, 247132, 295853, 8296263, 661191, 67622, 8541978};
    int initialPos = 657321;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> address = {622595, 595715, 38732, 692898, 304623, 323362, 458008, 596275, 653975, 928479, 62894, 546635, 810667, 156943, 590932, 668658, 19385, 11628, 66450, 25286, 263249, 125480, 978992, 613323, 737712, 267648, 675871, 633813, 357460, 679444, 465271, 672290, 717749, 792528, 334367, 538562, 999019, 448141, 970594, 106678, 800068, 568008, 493334, 797005};
    vector<int> maxTime = {49769, 76655, 9081339, 1862205, 3120619, 3101880, 1164713, 23451, 134911, 6235107, 7184924, 443556, 6117301, 5400652, 197957, 321532, 9100684, 9108443, 7181372, 9094787, 4220702, 5432108, 8101024, 6408, 2577892, 3157594, 946850, 114749, 2197642, 1386148, 1157447, 585352, 2557929, 2632712, 3090872, 451629, 8121053, 1617448, 6277229, 7141140, 4757523, 220880, 764309, 3686945};
    int initialPos = 619730;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> address = {668325, 423564, 97926, 954911, 605066, 195706, 901573, 259950, 824386, 170461, 834090, 584713, 703691, 328045, 632242, 916417, 608344, 144726, 903639, 659377, 237231, 282933, 45972, 757285, 815096, 756373, 683293, 440039, 643724, 235621, 920064, 498006};
    vector<int> maxTime = {761905, 517149, 87599, 1048494, 698649, 289291, 995154, 353530, 917971, 264044, 927671, 678294, 797272, 421631, 725825, 1009997, 701925, 40802, 997225, 752961, 330812, 376514, 139553, 850869, 908679, 849959, 776877, 533624, 737303, 329207, 1013648, 591591};
    int initialPos = 103923;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> address = {662322, 255209, 883131, 369644, 5345, 20605, 14217, 73865, 102291, 900287, 31173, 263742, 211584, 154443, 950192, 795658, 704351, 281028, 414924, 402482, 149486, 269051, 960854, 430918, 11049, 221875, 381595, 827612, 533426, 686336, 681278, 522927, 717387, 829048, 86692, 628773, 987134, 600903, 903683, 601143, 115035, 255517, 795116, 198786, 161494, 932630, 128046, 928454, 569802, 446383};
    vector<int> maxTime = {861008, 6442421, 4441599, 2832072, 9680270, 9665011, 9671399, 9611751, 9583325, 5697533, 9654443, 5060988, 7897336, 9531173, 5747438, 1514024, 1422717, 3839496, 613610, 1120848, 9536130, 5055679, 7148066, 597616, 9674567, 7887045, 1928087, 2374104, 130328, 1404702, 1399644, 140827, 1435753, 3291476, 9598924, 399761, 8698482, 169, 5700929, 62611, 9570581, 6442113, 1513482, 7910134, 9524122, 5729876, 9557570, 5725700, 31270, 217371};
    int initialPos = 601072;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> address = {451789, 575661, 246557, 951293, 934779, 79270, 502623};
    vector<int> maxTime = {643394, 767266, 103588, 1142897, 1126384, 270875, 694228};
    int initialPos = 142969;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> address = {229331, 179837, 652296, 264677, 970520, 848949, 676683, 26736, 271756, 725129, 840323, 837422, 105811, 384505, 670331, 388341, 426719, 528242, 119723, 60162, 499943, 222796, 483329, 826934, 678401, 569372, 729325, 169215, 452626, 845482, 901731, 393205, 519192, 727578, 758615, 873831, 84956, 259241, 470786, 7208, 679207, 678027, 138664, 720300, 780989, 275586};
    vector<int> maxTime = {97545, 48051, 2507340, 132891, 4115739, 3994169, 3821903, 1881780, 457702, 3870349, 3985543, 3982642, 291757, 570451, 3815551, 574287, 1278751, 1380274, 277845, 912194, 1351975, 91010, 1335361, 3972154, 3823621, 2424416, 3874545, 37429, 1304658, 3990702, 4046951, 579151, 1371224, 3872798, 3903835, 4019051, 887400, 127455, 1322818, 3152428, 3824427, 3823247, 6878, 3865520, 3926209, 461532};
    int initialPos = 145542;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> address = {550883, 753139, 918661, 29126, 931168, 526218, 237920, 460679, 739166, 324354, 360763, 139675, 154905, 584384, 647116, 603506, 764809, 483817, 198296, 652272, 27695, 737849, 242681, 953062, 760803, 141087, 124769, 955450, 312639, 37933, 356278, 631240, 204941, 829401, 907917, 25735, 129197, 742429, 457116, 743396, 122876, 184343, 619393, 324737, 785793, 421670, 764969, 398902, 444956, 289123};
    vector<int> maxTime = {713432, 511151, 3226, 1235147, 37261, 738083, 1026374, 803593, 525108, 939927, 903511, 1124623, 1109389, 679926, 617191, 660798, 499482, 780486, 1065981, 612008, 1236604, 526435, 1021626, 59125, 503484, 1123216, 1139523, 308849, 951646, 1226380, 908008, 633072, 1059366, 182800, 13990, 1238555, 1135106, 521855, 807175, 520881, 1141433, 1079943, 644898, 939537, 478480, 842627, 499320, 865369, 819319, 975146};
    int initialPos = 915441;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1238534;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> address = {953553, 300301, 224531, 327076, 127194, 102820, 342525, 112219, 852330, 565007, 538318, 495830, 158737, 692370, 591921, 498076, 36237, 786466, 10286, 522872, 574062, 417260, 406653, 937702, 429136, 189143, 666495, 624887, 629450, 370571, 614111, 432956, 272704};
    vector<int> maxTime = {834170, 1487438, 1563177, 1460655, 1660550, 1684888, 1445202, 1675527, 732968, 137551, 418937, 1291925, 1628972, 264904, 35542, 1289667, 1751470, 667091, 1777430, 1264884, 17706, 1370471, 1381094, 818342, 1358580, 1598573, 239028, 68503, 73096, 1417142, 57746, 1354790, 1515010};
    int initialPos = 591734;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1777420;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> address = {729678, 46125, 97210, 470682};
    vector<int> maxTime = {752352, 68805, 17729, 493341};
    int initialPos = 79531;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 752317;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> address = {395783, 908610, 798226, 645914, 998779, 343945, 357254, 147282, 621741, 872258, 661411, 860381, 357438, 491606, 81361, 909315, 762439, 480263, 89221, 467059, 380994, 525656, 794333, 243118, 18267, 121456, 890007, 944202, 78700, 669807, 850873, 637609, 172188, 866932, 186210, 347676, 276424, 420646, 76667, 854617, 12107, 610196, 713824, 199365, 653807, 781863, 46075, 728290, 339934, 953975};
    vector<int> maxTime = {1754436, 10142222, 2983567, 15400, 13686615, 5438607, 4411401, 9264777, 55363, 8504302, 118110, 5963084, 3424374, 576201, 10969457, 11802732, 2121110, 587574, 9322849, 1067904, 2566350, 253859, 2153010, 7761355, 12693787, 9290598, 8522051, 13632055, 10972151, 398009, 3917774, 7092, 9239868, 7137525, 7818272, 4421006, 6547024, 1114309, 12635384, 4927925, 12699960, 66899, 821117, 7805103, 23289, 2140512, 12666010, 1421969, 5442609, 13641841};
    int initialPos = 644672;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 13686603;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> address = {126549, 706817, 824570, 276032, 524579, 844129, 297850};
    vector<int> maxTime = {1276057, 95802, 578030, 1126574, 278033, 1993630, 1104756};
    int initialPos = 802599;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1993612;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> address = {353406, 541714, 217173, 433260, 290001, 776543, 392791, 357149, 293645, 19388, 547375, 566944, 828728, 131583, 319715, 253641, 676594, 676296, 118231, 336052, 728948, 558853, 875297, 115113};
    vector<int> maxTime = {1242697, 38930, 1378945, 197810, 1306117, 622072, 238294, 1238942, 1302464, 1576733, 10277, 64158, 674220, 1464504, 1276410, 1342464, 522119, 521783, 1477896, 1260042, 574453, 21774, 720825, 1480993};
    int initialPos = 557649;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1576689;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> address = {149364, 60366, 973761, 447043, 3999, 862309, 664933, 866935, 923422, 630027, 596222, 110839, 706216, 204814, 390062, 121112, 862056, 516822, 185246, 130786, 869414, 925694, 282368, 433836, 362994, 408879, 582728, 702122, 54053, 245810, 70464, 901539, 948416, 149778, 183012, 861450, 670768, 805574, 616444, 233387, 408976, 397018, 136152, 316410, 923034, 247841, 957638, 806105, 301261, 61667};
    vector<int> maxTime = {259795, 1062092, 2693496, 2166790, 1723725, 2582042, 2384635, 2586662, 2643135, 2349760, 2315956, 532443, 2425935, 21594, 2109779, 522162, 2581798, 2236542, 2018, 278379, 2589122, 2645434, 802324, 2153541, 1364746, 2128625, 2302463, 2421820, 1673643, 163378, 572824, 2621242, 2668162, 259412, 100572, 2581167, 2390497, 2525302, 2336178, 50191, 2128702, 2116753, 273028, 1318129, 2642754, 395455, 2677378, 2525847, 821215, 581614};
    int initialPos = 183229;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 2693458;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> address = {839510, 531193, 48187, 583666, 836617, 319075, 448076, 615799, 814891, 986832};
    vector<int> maxTime = {234691, 837671, 1320670, 785172, 231792, 1049798, 920770, 11018, 210109, 382014};
    int initialPos = 604827;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1320650;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> address = {134592, 144468, 715028, 650963, 388569, 453837, 304363, 508441, 783908, 284445, 229558, 699888, 774084, 741442, 980110, 714076, 892684, 515864, 79622, 254682, 694104, 161287, 980142, 695008, 576432, 848280, 122670, 178320, 229957, 27755, 162103, 465386, 246722, 470776, 918134, 987462, 683477, 772405, 992546, 164303, 273818, 957486, 835726, 73295, 750183, 754976, 192551, 309336};
    vector<int> maxTime = {527300, 517403, 1321379, 1257339, 994932, 1060188, 910727, 1114816, 1390256, 377427, 4440, 1306241, 1380463, 1347813, 1586486, 1320427, 1499030, 1122235, 582253, 160906, 1300491, 254284, 1586530, 1301381, 1182808, 1454667, 539190, 56482, 4854, 634105, 253470, 1071768, 152901, 1077169, 1524485, 1593820, 1289849, 1378794, 1598929, 70511, 366825, 1563861, 1442102, 588607, 1356543, 1361344, 42259, 915704};
    int initialPos = 225133;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1598891;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> address = {642665, 450334, 308198, 437775, 383196, 322425, 299871, 30918, 757711, 694307, 578444, 41265, 632845, 688676, 532630, 598511, 637008, 293176, 911911, 376572, 335222, 874055, 477598, 540019, 19141, 350338, 373136, 607073, 736223, 760601, 153252, 740623, 22117, 551788, 602257, 990480, 501640, 487722, 292655, 319912, 255210, 418570, 886282, 414731, 647569, 515441, 631167, 18966, 303609, 900526};
    vector<int> maxTime = {2067497, 1875141, 109677, 1024969, 34715, 95473, 118004, 1431828, 2182521, 2119105, 2003282, 628450, 2057650, 2113473, 1957439, 2023337, 2061816, 124729, 2336713, 41318, 82685, 2298852, 1902429, 1964831, 1443586, 67570, 44771, 2031868, 2161045, 2185396, 516488, 2165433, 1440651, 1976586, 2027080, 2415321, 1926464, 1912530, 125223, 97970, 414495, 251182, 2311117, 3166, 2072398, 1940240, 2055970, 1443782, 114304, 2325365};
    int initialPos = 417875;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 2415273;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> address = {235802, 850668, 933507, 583361, 89187, 67483, 809886, 943771, 774157, 51902, 715448, 465100, 477104, 415436, 998540, 966024, 263477, 4618, 777597, 431549, 471774, 474170, 166523, 67471, 248051, 961197, 89435, 435684, 499684, 863833, 88350, 868080, 86047, 84576, 615422, 833329, 341893, 68673, 376784, 814780, 913519, 537123, 550197};
    vector<int> maxTime = {5692263, 13971, 1264056, 677409, 5838888, 5860586, 54744, 2269990, 90454, 5876144, 149187, 795655, 783667, 2833165, 4929528, 3461053, 4163605, 5923444, 87004, 2817027, 788992, 786570, 5761525, 5860602, 4179012, 2287403, 5838636, 1761869, 761054, 768, 5839726, 301800, 5842005, 5843474, 645313, 31268, 4085176, 5859388, 2871833, 49845, 347261, 723630, 710550};
    int initialPos = 864591;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 5923413;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> address = {6252, 946039, 745475, 21868, 133115, 298852, 336920, 199049, 60937, 722931, 540371, 139392, 853748, 801036, 905150, 694698, 908559, 322759, 367383, 458142, 464654, 277254, 559656, 916455, 630186};
    vector<int> maxTime = {2917, 942704, 742136, 18552, 129774, 295525, 333589, 195734, 57639, 719620, 537024, 136073, 850426, 797691, 901808, 691359, 905243, 319443, 364081, 454798, 461354, 273930, 556355, 913121, 626865};
    int initialPos = 9156;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 942691;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> address = {108596, 559432, 773288, 816138, 317239, 97680, 925723, 272557, 144076, 948650, 319225, 160727, 516362, 858549, 957436, 566591, 112247, 48456, 301609, 226726, 881334, 603589, 707277, 721923, 218297, 894554, 150708, 846161, 888302, 652734, 396775, 353956, 188732, 960707, 552388, 403158, 251876, 830586, 60233, 780396, 815823, 390218, 362460, 285550, 768833, 818154, 212693, 414994, 413498, 410136};
    vector<int> maxTime = {2486385, 3739675, 3612439, 7270901, 7535492, 8854068, 5848916, 2335580, 2789677, 2318642, 8929942, 6634011, 3178622, 5542118, 2760757, 6401680, 1615335, 3248461, 6547037, 9561056, 462582, 4480719, 4587599, 9054077, 8196214, 311432, 3793037, 4917055, 7916154, 9546957, 2969626, 3317534, 7259438, 4165465, 8474810, 9881458, 8455734, 5507462, 2511965, 1472819, 6123559, 8633234, 4459781, 7110572, 3231269, 6392364, 4181025, 4367047, 9446735, 5994267};
    int initialPos = 557646;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> address = {836732, 286780, 101612, 693310, 237115, 208685, 342022, 751721, 576593, 732984, 372004, 265279, 495409, 613855, 999644, 296400, 482912, 23368, 326346, 770016, 995653, 896523, 751785, 513735, 476433, 511521, 21040, 398360, 550943, 885161, 598994, 666651, 576675, 81127, 862530, 150701};
    vector<int> maxTime = {899958, 6941132, 7433154, 1682918, 8653727, 5604983, 6119735, 9768954, 1536785, 4168145, 4779483, 910139, 7485513, 1432238, 8214930, 233956, 5160889, 8730909, 8190774, 5822783, 7052049, 3194187, 5391890, 3769319, 8347515, 4182208, 1104077, 7821622, 3943432, 1313461, 322073, 702099, 6377692, 3631073, 5919231, 5098627};
    int initialPos = 225701;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> address = {715818, 176434, 752490, 477279};
    vector<int> maxTime = {7048235, 704163, 7038044, 5353853};
    int initialPos = 488203;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 887825;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> address = {325299, 924612, 170806, 966008, 184232, 648019, 451410, 825098, 513103, 756872, 432897, 379656, 603964, 676441, 739220, 610117, 288213, 418024, 827232, 5923, 932755, 216820, 899790, 806014, 33992, 976559, 40578, 92106, 86704, 573585, 114837, 502776};
    vector<int> maxTime = {2589049, 2238232, 7084951, 2267608, 9781839, 3124456, 2242484, 1505777, 721527, 9605827, 5362336, 3725532, 9578168, 1708272, 6013900, 4341026, 5161685, 8424816, 539015, 5389642, 279639, 9584136, 4829077, 8289186, 1171273, 1401198, 4146033, 7099527, 1962530, 9993288, 4471287, 6857807};
    int initialPos = 35773;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> address = {415757, 472742, 377807, 863808, 857775, 541140, 774213, 29514, 485987, 836545, 76080, 933500, 663810, 634690, 316443, 117132, 403991, 13112, 195581, 257428, 340600, 225024, 356625};
    vector<int> maxTime = {1430354, 1557921, 2741819, 5042642, 5815322, 2449606, 3716961, 1055915, 9100290, 8940946, 361127, 3952423, 8656445, 5388633, 5266198, 6725413, 7632309, 1350602, 6844386, 5513119, 4026360, 117933, 4324867};
    int initialPos = 125801;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1231523;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> address = {14002, 403451, 985647, 474510, 713209, 938147, 722597, 346929, 319033, 131370, 944939, 80782, 75849, 201801, 457169, 603394, 839460, 26109, 706502, 936079, 332344, 316453, 866979, 369856, 76936, 445249, 930596, 833175};
    vector<int> maxTime = {6425874, 8391811, 3167196, 2628332, 1267610, 2573424, 9285942, 5497654, 2294782, 9150507, 5195876, 6891782, 8379829, 8244993, 7001959, 113616, 2083535, 6997909, 7370746, 8083384, 2423406, 1653232, 1655626, 2186172, 1969892, 1279530, 2826470, 526038};
    int initialPos = 439777;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> address = {631954, 838703, 908364, 30509, 540841, 514455, 810637, 766443, 246908, 276215, 71919, 197122, 140204, 244080, 575748, 334337, 785364, 994192, 345656, 501150, 280011, 242799, 124644, 505285, 825214, 697797, 192180, 250941, 816599, 64697, 638164, 576291, 837963, 436821, 197904, 432404, 873660, 756366, 521601, 325818, 434473, 904798, 898016, 575667, 377237, 224513, 415900, 260964, 283094};
    vector<int> maxTime = {5610653, 4010994, 1766205, 8398980, 6326419, 405747, 2394439, 3590890, 20932, 2263006, 9186443, 9419497, 8387781, 5268780, 2250544, 6769741, 9528437, 6959057, 8894320, 8726999, 4579759, 2169766, 5258562, 942709, 5506068, 4240698, 3134196, 6803347, 4257946, 4446657, 4250856, 3800417, 823211, 3803505, 2881130, 8396430, 7295096, 1712699, 6464025, 4727587, 1399213, 1296438, 7339607, 6680478, 8342141, 3131863, 1733910, 9680629, 9686613};
    int initialPos = 633815;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
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
    vector<int> address = {252487, 16190, 836357, 600305, 670550, 941917, 969996, 781094, 604580, 480457, 368431, 62260, 159365, 971180, 192347, 14236, 166380, 355219, 627416, 58005, 994377, 518679, 649975, 185456, 34863, 105948, 946885, 312902, 56732, 610601, 485259, 233047, 983352, 209801, 114689, 65671, 450134, 436208, 469798, 981118, 922247, 588525, 123135, 11636, 478078, 998670, 54061, 374328, 759425, 343399};
    vector<int> maxTime = {7183103, 4023197, 4505551, 6019058, 6070789, 7465536, 7658119, 7335905, 6106926, 5581827, 8922553, 2249499, 4614706, 2158290, 6191093, 8738865, 6829057, 6496654, 3377052, 9957007, 6326253, 2918509, 2102594, 4485773, 1169937, 5436138, 6127074, 9618781, 4958610, 9824749, 2089481, 8477522, 9114898, 5502235, 4353201, 5310479, 1062680, 1341871, 4315712, 9534480, 2865732, 9170071, 9726241, 251040, 4944454, 2123724, 3620430, 8827539, 6904514, 997313};
    int initialPos = 800645;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> address = {510525, 24859, 886239, 60798, 915440, 713239, 564820, 37617, 114396, 3846, 504066, 756776, 48367, 187908, 896861, 214957, 856737, 365049, 516774, 481795, 836194, 763920, 796882, 289515, 523216, 234922, 527150, 297933, 160144, 679791, 692289, 430285};
    vector<int> maxTime = {310550, 1349576, 3245717, 7768008, 9359338, 4792688, 5624535, 9689805, 8185012, 5093219, 8726266, 6274816, 666289, 4372276, 6968184, 9332086, 3235090, 2315742, 5251582, 3603652, 1535293, 3020709, 5206199, 2882426, 4574639, 7541398, 1556323, 6858652, 5458425, 12365, 7915509, 3774446};
    int initialPos = 760954;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> address = {437419, 389567, 154240, 233716, 272228, 62764, 465768, 619743, 22764, 659170, 202174, 284760, 457080, 432718, 315109, 781279, 82993, 762903, 394817, 917547, 311080, 461554, 285982, 759673, 566410, 41362, 498755, 892880, 536724, 951727, 591004, 733389, 209571, 740523, 743530, 343882, 597831, 713227, 935342, 756692, 210286, 622475, 698691, 431312, 922331, 850663, 449623, 939659, 945658, 375144};
    vector<int> maxTime = {64857531, 96167991, 2155173, 17693571, 26531056, 82551068, 17836848, 21443319, 28237659, 26058855, 93669932, 48175565, 51231770, 12045933, 58344794, 54391505, 31472913, 5720598, 17523457, 36168507, 26165071, 27408057, 71972463, 24762992, 79819229, 24162284, 40176289, 1082771, 36775821, 65909668, 14790720, 24534222, 39282013, 32927351, 8592142, 77954975, 42988170, 30106094, 79709370, 20007583, 56648584, 59329396, 70400401, 96238618, 97286812, 9373767, 39740014, 97816225, 67672244, 58168976};
    int initialPos = 308409;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1572281;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> address = {813736, 187076, 92587, 37492, 533320, 522305, 934756};
    vector<int> maxTime = {84877665, 57937787, 11514104, 87386394, 61639269, 27265708, 13930973};
    int initialPos = 532830;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1299190;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> address = {898399, 704547, 957085, 8936, 149306, 398432, 358542, 970961, 310954, 562441, 5533, 162240, 478743, 934469, 188056, 99565, 391586, 766918, 220239, 612792, 391901, 984430, 766989, 506674, 361914, 612314, 828344, 504056, 726729, 891126, 871674, 390748, 846550, 898189, 677048, 708754, 730580, 915786, 694699, 466758, 105114, 943611, 439891, 203461, 951962, 489886, 79298, 761764, 936047, 867755};
    vector<int> maxTime = {67116809, 35249333, 46950209, 68049170, 46826961, 71613351, 27154030, 64484196, 21975718, 16870863, 32765069, 29446299, 81230740, 85698848, 80458249, 24025448, 37556553, 31733393, 6207765, 28080539, 533430, 97363676, 61247979, 46443860, 90389543, 59446995, 88638756, 83645517, 34542910, 18390444, 13424585, 32014433, 44438549, 68237441, 8795869, 7160655, 11848670, 37636273, 56768963, 61731622, 2714200, 26692277, 480144, 50512746, 17329907, 37789238, 32088443, 3779265, 45637896, 44470110};
    int initialPos = 194046;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1659100;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> address = {47895, 962341, 412832, 856897, 626361, 323934, 312415, 701478, 265455, 452416, 884284, 881200, 270540, 403563, 60115, 834692, 48506, 247172, 656072, 762105, 157334, 495749, 686090, 440615, 576570, 336869, 264252, 872571, 365631, 537385, 196283, 396098, 306294};
    vector<int> maxTime = {53066076, 59274407, 88037654, 33431050, 35711898, 20162311, 39075226, 60842942, 82410892, 23631180, 61822050, 7436337, 27974650, 5810738, 24142257, 97117507, 576619, 4415604, 14044420, 69383617, 96348822, 18511019, 48971991, 14482813, 59159143, 80760109, 54168311, 81129330, 5633475, 37506370, 70091778, 12726202, 72753201};
    int initialPos = 300940;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1167491;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> address = {389195, 699258, 860788, 621338, 512920, 171443, 515442, 961096, 46042, 252483, 701471, 819840, 754530, 48460, 929229, 111377, 316720, 232387, 893205, 733714, 345184, 849264, 789904, 106678, 345863, 421147, 952539, 359385, 939699, 986710, 58974, 524537, 88957, 257279, 926006, 34629, 595062, 941713, 669100, 303196, 858663, 978599, 109245, 979444, 681664, 526152, 856221, 873650, 410118};
    vector<int> maxTime = {5790688, 9268080, 43075818, 23559996, 1671518, 6686640, 28800155, 10468191, 18515382, 34095259, 5213664, 42953827, 46618487, 939206, 16892122, 22704785, 27663927, 41908107, 11191716, 36792570, 44689617, 7230222, 24447204, 46669582, 6307843, 31240069, 9651420, 4263874, 34615834, 13626502, 8798565, 28479267, 49642516, 11726887, 41041518, 277176, 20890377, 17008988, 11876338, 48781098, 7716059, 12543918, 22623416, 44591055, 19490581, 2715539, 48198443, 11066596, 43569435};
    int initialPos = 872957;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
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
    vector<int> address = {316520, 444456, 604106, 798128, 221663, 981536, 276694, 201707};
    vector<int> maxTime = {34398191, 46873726, 2954301, 44772821, 12903592, 37963558, 12994734, 29564122};
    int initialPos = 708626;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1052739;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> address = {641412, 380198, 187609, 726728, 297162, 479206, 231280, 339496, 200198, 601222, 615612, 905080, 149475, 685411, 61620, 501154, 764299, 566106, 941446, 373215, 94056, 80175, 966103, 283525, 45963, 680997, 201554, 640108, 341244, 595105};
    vector<int> maxTime = {43477762, 17753532, 30086544, 26713562, 19557924, 47212447, 13051973, 32810532, 22579633, 36734839, 16907418, 6850635, 10344796, 19466164, 35320432, 7032178, 48453088, 23090264, 38248111, 49768458, 13897935, 40459109, 40197403, 30703665, 22365344, 37579422, 21458648, 43125084, 32935480, 237977};
    int initialPos = 839843;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> address = {427451, 398328, 617969, 392043, 167845, 491559, 663188, 731076, 295424, 135913, 519631, 387463, 734915, 678261, 416663, 156918, 604703, 653233, 396206, 210645, 31764, 908743, 270008, 65911, 832510, 330749, 233567, 517308, 289164, 413626, 919777, 119832, 706226, 365752, 400518, 707128, 425231, 425096, 969677, 29511, 807984, 760562, 728402, 34941, 649408, 779775, 664975, 529969, 772515, 930830};
    vector<int> maxTime = {8051826, 29827471, 8102324, 25105345, 4358161, 29469191, 15020913, 18819947, 23604668, 19443533, 29137591, 11863395, 3861261, 11227043, 16289096, 5649034, 18007984, 25314884, 27919082, 6264860, 6073952, 18869360, 23110311, 16009665, 23065255, 23044614, 18401115, 11373345, 25188339, 14680584, 4487220, 5226377, 1713282, 25291813, 26272192, 26999196, 5139023, 6016690, 18294111, 111791, 6520794, 19250981, 8324210, 4465159, 8989315, 13750802, 7084805, 28232163, 22171038, 16296033};
    int initialPos = 658308;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> address = {320095, 830464, 249314, 110594, 769192, 997132, 315211, 174554, 319414, 180994, 636251, 364462, 953467, 581495, 691305, 379927, 419967, 708051, 458017, 721619, 93059, 336822, 756420, 752626, 225574, 553662, 955723, 342460, 836960, 592447, 384758, 483404, 133198, 596213, 939150, 712986, 401448};
    vector<int> maxTime = {19111575, 7272678, 4633686, 10129194, 2296088, 15650828, 21381381, 16059093, 15025226, 29792649, 1674011, 2762834, 1276601, 26417634, 938201, 11661126, 12747299, 24364336, 22965741, 5297443, 115890, 21096139, 17040319, 2498550, 29229521, 6067362, 19721108, 19090361, 22057035, 29831262, 1549980, 24141260, 20375965, 17260099, 20517544, 15901132, 15384205};
    int initialPos = 423363;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> address = {1, 7, 10, 4};
    vector<int> maxTime = {15, 6, 28, 39};
    int initialPos = 2;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> address = {1, 4, 7, 10};
    vector<int> maxTime = {15, 6, 28, 39};
    int initialPos = 2;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> address = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> maxTime = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int initialPos = 1;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> address = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 49, 51, 53, 57, 59, 61, 63, 67, 71, 73, 79, 81, 83, 87, 91, 93, 97, 2, 4, 8, 16, 18, 24, 25};
    vector<int> maxTime = {51, 63, 55, 47, 11, 53, 37, 34, 23, 29, 31, 37, 41, 78, 49, 51, 53, 57, 59, 61, 63, 67, 81, 73, 79, 81, 83, 87, 7, 93, 97, 73, 74, 78, 96, 98, 54, 56};
    int initialPos = 1;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> address = {1, 2, 10};
    vector<int> maxTime = {1, 14, 12};
    int initialPos = 1;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> address = {11, 22, 43, 54, 59, 60, 79, 98, 109, 210, 311, 412, 513, 614, 715, 816, 917, 1018, 1119, 1220, 1321, 1522, 2323, 824, 97825, 626, 86727, 6528, 229, 830, 8931, 832, 6533, 134, 325, 306, 56438, 3659, 640, 841, 442, 43, 442, 495, 49876, 5647, 6548, 649, 749850, 654};
    vector<int> maxTime = {987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321, 987654321};
    int initialPos = 1000;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 750828;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> address = {1, 5};
    vector<int> maxTime = {5, 12};
    int initialPos = 4;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> address = {1243, 1421, 11, 141, 145, 1141, 1151, 1141, 141, 14121, 141, 1141, 2151, 2512, 151, 141, 141, 241, 241, 41, 417, 5451, 8481, 84841, 444, 141, 1, 11000, 1000000, 1411, 114, 12};
    vector<int> maxTime = {10000000, 101010200, 1010100, 199999, 10000000, 101010200, 1010100, 199999, 10000000, 101010200, 1010100, 199999, 10000000, 101010200, 1010100, 199999, 10000000, 101010200, 1010100, 199999, 10000000, 101010200, 1010100, 199999, 10000000, 101010200, 1010100, 199999, 10000000, 101010200, 1010100, 199999};
    int initialPos = 1421;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 1001419;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> address = {1, 7, 10, 4, 2, 4};
    vector<int> maxTime = {15, 6, 28, 39, 16, 17};
    int initialPos = 2;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> address = {1, 2, 10, 40, 40, 45, 45, 45, 45, 6, 7, 34, 33, 33, 4, 345, 4545, 34, 555, 555, 4434, 4353, 43534, 34534, 3455, 453, 3434, 4343, 55, 443, 4544};
    vector<int> maxTime = {34, 45, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int initialPos = 200;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> address = {2, 4, 9, 12};
    vector<int> maxTime = {28, 8, 4, 20};
    int initialPos = 6;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> address = {1, 20, 300, 1000, 5000};
    vector<int> maxTime = {25, 6, 299, 700, 4000};
    int initialPos = 25;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> address = {1, 7, 10, 4, 5, 2};
    vector<int> maxTime = {15, 6, 28, 39, 17, 19};
    int initialPos = 2;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> address = {1, 10};
    vector<int> maxTime = {100, 100};
    int initialPos = 9;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
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
    vector<int> address = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> maxTime = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    int initialPos = 1;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> address = {1000000, 1000000, 1000000, 1000000};
    vector<int> maxTime = {563, 23452, 32426, 1};
    int initialPos = 1000000;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> address = {50, 45, 786, 78678, 76876, 78676, 786, 8676, 78676, 786786, 78676, 786786, 78678, 786778, 85786, 78678, 6786, 7867, 786786, 78678, 86786, 78678, 678678};
    vector<int> maxTime = {876786, 786786, 8676, 786786, 786786, 786786, 786786, 7867867, 478678, 786786, 786786, 7867867, 786786, 786786, 786786, 786786, 63938, 786786, 99999999, 9999980, 52452, 7865786, 2785677};
    int initialPos = 80059;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> address = {5, 10, 15};
    vector<int> maxTime = {50, 8, 20};
    int initialPos = 12;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> address = {1, 3, 5, 7, 200, 300, 200, 700, 99, 1000, 9000, 99000, 1992, 9292, 1222, 111, 111, 12, 33, 44, 444, 5555, 55, 999, 777, 666, 4};
    vector<int> maxTime = {9, 2, 5, 100, 70000, 70000, 970000, 970000, 7770000, 6670000, 5570000, 5570000, 5570000, 4470000, 7000012, 700002, 7000077, 7000098, 7000065, 7000011, 5670000, 4470000, 3370000, 1234, 1255555, 16777, 1000000000};
    int initialPos = 8777;
    FastPostman* pObj = new FastPostman();
    clock_t start = clock();
    int result = pObj->minTime(address, maxTime, initialPos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22672637&rd=10670&pm=7684
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <string> 
#include <vector> 
using namespace std; 
 
int opt[100][100][2]; 
const int INF = 1000000001; 
 
struct Node 
{ 
  int pos, T; 
} p[100]; 
 
bool cmp(Node a, Node b) 
{ 
  return a.pos < b.pos; 
} 
 
int abs(int a) 
{ 
  return a > 0 ? a : -a; 
} 
 
int min(int a, int b) 
{ 
  return a < b ? a : b; 
} 
 
class FastPostman 
{ 
public: 
   
  int minTime(vector <int> address, vector <int> maxTime, int initialPos) 
  { 
    int i, j, n = address.size(), res; 
     
    for (i = 0; i < n; i++) 
    { 
      p[i].pos = address[i]; 
      p[i].T = maxTime[i]; 
    } 
    sort(p, p+n, cmp); 
    for (i = 0; i < n; i++) 
    { 
      opt[i][i][0] = opt[i][i][1] = abs(initialPos-p[i].pos); 
      if (opt[i][i][0] > p[i].T) opt[i][i][0] = opt[i][i][1] = INF; 
    } 
    for (i = n-1; i >= 0; i--) 
    { 
      for (j = i+1; j < n; j++) 
      { 
        opt[i][j][0] = min(opt[i+1][j][0]+p[i+1].pos-p[i].pos, opt[i+1][j][1]+p[j].pos-p[i].pos); 
        if (opt[i][j][0] > p[i].T) opt[i][j][0] = INF; 
        opt[i][j][1] = min(opt[i][j-1][0]+p[j].pos-p[i].pos, opt[i][j-1][1]+p[j].pos-p[j-1].pos); 
        if (opt[i][j][1] > p[j].T) opt[i][j][1] = INF; 
      } 
    } 
    res = min(opt[0][n-1][0], opt[0][n-1][1]); 
    if (res == INF) return -1; 
    return res; 
  } 
};

********************************************************************************
*******************************************************************************/