/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12464
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

class WolfPack {
public:
    int calc(vector<int> x, vector<int> y, int m);
};

int WolfPack::calc(vector<int> x, vector<int> y, int m) {
    int ret;
    return ret;
}


int test0() {
    vector<int> x = {3, 5};
    vector<int> y = {0, 0};
    int m = 1;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {0, 0};
    vector<int> y = {0, 1};
    int m = 1;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
    vector<int> y = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 219188304;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
    vector<int> y = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    int m = 12;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
    vector<int> y = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    int m = 13;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 378422470;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {0, 2, 4};
    vector<int> y = {0, 0, 0};
    int m = 2;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {7578, -82993, 84139, 36695, -86798, 8749, -26229, 52324, -15918, 58702, -7569, 8311, -92114, 88642, 52810, -64501, -25926, 44460, -40086, -41880, 4721, -3996, 78020, 84117, -75361, 98520, 56564, -39274, 81966, 253, -63246, 20646, -99520, -24206, -45363, 36638, -86780, -88479, 39968, -57647, -37395, 4937};
    vector<int> y = {-10327, -43857, 46404, -14160, -95452, -69386, 41457, 43744, 8961, 15008, -70212, 17481, 60092, -47100, 73734, 24544, 53146, 2154, 34130, 79225, -26481, -89753, 31454, -58186, 54746, -75656, -23045, -61088, 46039, 44907, -16631, -85342, -69919, -45283, -66744, -60679, -75995, 33518, -28283, 68412, -64726, 352};
    int m = 54649;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {-90520, 29879, -8465, -43390, 75779, -1595, -10874, -21883, -66265, -34541, -58365, 49282, 23577, 54894, 68665, 24742, 46754, -41102, 38086, -27969, -61102, 79144, -86632, 83584, 60943, 99263, 77027, -14937, -87673, 47186};
    vector<int> y = {-46819, 62068, 37505, -6247, 63654, 97554, -85226, 64786, -9266, -80708, 81177, 12076, -3361, 49265, 41721, -78376, -87140, -32616, -93665, 67561, -34998, -58332, 97432, -84835, 82690, -35195, 66396, 48802, -14469, -41118};
    int m = 64460;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {74351, 90128, 78507, 16473, 63397, 11343, -12263, -56302, 22753, -58619, -94728, 39591, -27963, -54858, 11281, 23140, 25128, -48122, -86810, -90858, -16290, 10748, 71967, -68328, -66206, 59081, -45837, -41576, -47824, -95034, -89090, 50511, -89818};
    vector<int> y = {61819, -23690, 34207, 73858, -81240, 46757, 34336, -41985, -29872, 36034, 63328, -69514, -91278, 36403, 62282, 51710, -5094, 28999, 68524, -41918, 98887, -99039, -58045, -65289, -56705, -70899, 10684, -71935, 15859, 86252, 86320, -85381, -98329};
    int m = 67654;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {-8237, 82707, -96291, 79280, 25851, -99831};
    vector<int> y = {-82872, -3017, -37290, -44031, -58944, 32551};
    int m = 82249;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {41066, 88305, 98978, 50608, 19039, -7696, -35075, -82653, -23560, -56327, 48487, -71702, -15511, -71138, 72078, 25105, -91013, 79622, -1142, -16938, 33121, -86208, 28787, -34157, 23292, 45204, 3735, -93956, 86335, 59836, 10212, 34454, 85591, 42997, 22493, -53762, -82744, -32756, -54666, -20495};
    vector<int> y = {35897, 60101, -60716, 62968, -12576, 69697, 67490, -85523, -36291, 64824, -38808, -91126, -46831, -88924, -66132, 12543, 8284, 4377, 75666, 67560, 25999, -84322, 36013, -3311, -37796, -54077, 97834, -90404, 31454, -25672, 85630, -66390, -95535, 48251, -24734, 7724, 66121, 25860, -51235, 37765};
    int m = 50559;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {33970, 54484, -20613, -26240, 67968, -31449, 82838, -22132, 31006};
    vector<int> y = {28865, 56097, 4655, -66003, -90393, 63026, -30646, -85810, 69350};
    int m = 30944;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {14580, 84387, -82685, 58414, -30463, 16710};
    vector<int> y = {10043, -6954, -74033, -31333, -76700, 38874};
    int m = 66686;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {-3130, -73947, 55231, 33747, 78866, 92327, -12427, 90957, -26684, -73369, 23684, 90858, 45099, -88910, 9970, 15260, 51999, 77423, -31389, 50978, 35834, -52507, 3865, 71539, 85995, 43959, -20109, -41799, 65183, -26196, 799, -95627, -82030, 80704, -73598, -75062};
    vector<int> y = {74130, 62789, 5429, -37268, -60423, 16957, 40429, 94679, 72122, -617, -42612, 32336, -685, 27646, -13841, 56524, -69444, -72056, 11629, 51437, -58043, 99917, 11230, 789, 79669, -7750, -75988, -23184, 36562, -5203, 59397, -22476, -52210, 34143, 46098, -31783};
    int m = 44660;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
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
    vector<int> x = {11260, -60070, -48324, 11418, 43054, -62138, -46341, 52946, 11963, 57083, -53240, 13568, 28785, -67921, -41707, -47337, -36532, 32712, 77863, -63744, -81834, 62149, -36423, 24752, 29926, -71397, 24635, -60812, -48660, -95230, 46522, 95830, 78523, -88093, 43078, -68112, 26364, 62323, -16224, -26718, 53873, 18568, 63323};
    vector<int> y = {79028, 78723, -60094, 53299, -18969, -44285, 40483, -37355, 94052, -76085, 47398, 36324, -78481, 47989, 43192, -12008, -61190, -29139, -35903, 89528, 4259, -73662, -75005, 43084, 12173, 78871, -68724, -58389, 45084, 33126, 67616, 53036, -25122, -77000, -12385, -18248, -29008, -35095, -90625, 10151, -44773, 95522, 70910};
    int m = 69267;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {74983, 47497, -40508, -61148};
    vector<int> y = {-84520, 18497, 19418, 96787};
    int m = 14122;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {-51206, -30521, 38732, -16815, 4619, -23981, -68519, -16660};
    vector<int> y = {61468, 23426, -60031, -29004, -79331, -94954, -6593, 26261};
    int m = 13365;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {9989, 73921, -29216, 17429, 72381, 96321, -13364, 56413, -76074, -98584, 90323, -54265, 73500, 8290, 76698, 75759, 57288, -46335, 45414, 87053};
    vector<int> y = {-96588, -93129, -95509, -79297, 50707, 91660, -70755, -80353, -90602, -6771, 42874, 3391, 4477, 65587, -61329, 93639, -90814, 66737, -15896, -19312};
    int m = 64749;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {-93024, 59177, -96680, -70491, 54447, -61870, -32288, -16985, 53275, 8176, -83251, -5888, 87578, 20961, 82237, 37828, 29519, -37161, 77815, -26976, 77703, 10524, 7280, 54868, 52382, 61312, -34838, -56031, 46214, -95858, 70885, 89758, -45935, -33965, -95894, -64906, -35936, -82668, -64337, 15310, -64169, -68824};
    vector<int> y = {-76426, 87711, 21505, -38459, 23122, -56731, -47179, 86816, -60525, -9992, -42893, -42004, 86184, 52282, 41222, -21911, -38599, 36896, -35532, -13110, -7605, -18994, 94310, 62900, -62523, -92682, -83089, -60306, 87048, 14706, -17422, -27765, 48513, -59851, -90263, 88488, 40941, 91433, 23699, 75912, -99159, -63024};
    int m = 21823;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {24648, 31776, 1994, 88644, -59108, -5119, -43555, -20739, 24132, -44235, -97288, -87543, 59963, -91132, -86734, 13612, 9054, 79729, 56296, 20641, 16993, -2892, 81765, 50940, 48163, 75858, -42005, 42316, -41477, -66635, 17302};
    vector<int> y = {92097, 1236, 73006, 57489, 18362, 33185, -60561, 17515, 20516, 21535, -3816, -83574, 83271, -28141, -21195, -63973, 75816, 12444, 12195, -20160, -60666, -16632, -78668, -20727, -24724, -32813, -90014, 70143, -48823, 62033, 39850};
    int m = 14454;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {-8858, 69689, -73640, -82170, 45473, 91464, 4527, 92849, -21385, 23914, -95707, -82609};
    vector<int> y = {-18504, -94055, -60736, -58424, 93182, 26198, 91918, -32941, 33372, -20897, 77221, 18120};
    int m = 41273;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {85520, -38627, 70004};
    vector<int> y = {-69593, -22444, -38348};
    int m = 77026;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {-24281, -79796, 68426, 86476, 55221, 91805, -81508, 20331, 94269, -31794, 76420, 11375, 70967, -45107, 97929, -49918, 84327, -65521, -31975, -65899, -72383, 70346, -44500, 41875, 37907, -52648, 18400, 55088, 70515, 7388, -94875, 83926, 62945};
    vector<int> y = {25871, 87097, 19511, -56511, 67718, -79435, -26755, 76909, 25998, 30047, -73670, 17557, -328, 39215, 45488, 97402, -5328, 97594, 65460, -31588, 79886, 17126, -27669, 72386, -27220, -92954, -25419, -79676, 25083, 79202, -90247, -87844, -15950};
    int m = 17104;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {-37453, 20480, 92681, 10710, 43656, 79390, -45784, 29846, -48277, 18204, 92627, -66568, 92395, 60375, 10394, 6094, -44089, 28278, -99844, 6090, 8832, -50674, 60601, -45923, 92780, 9653, -2364, 3780};
    vector<int> y = {-51343, -78850, -79736, 91796, -6836, 41209, -38341, 64724, -28387, 45693, -1763, -3610, -79148, -12118, 58168, -32983, 25056, 26286, -4878, -20293, 94925, 10199, -69854, -43668, -38709, -25813, 51803, 93384};
    int m = 60523;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {38374, 24702, -3333, -98138, 84788, -74352, -27123, -91105, 53140, 52082, -52866, -80220, 11123, 98068, 43420, -23345, -93623, -91405, -56939, 99455, -67535, 42137, -86426, 29639, -5411, 46517, 61632, -59522, -60488, 77109, -97847, 96777, 38042, 44163, 85711};
    vector<int> y = {-34124, 97694, 39692, 28755, -14584, 55979, 89585, -58158, -61342, 42101, 69625, 2791, 59934, 37103, 23099, -64455, -70802, -19054, -37099, 97526, 85899, 63968, -49127, -47489, -43743, 41238, -43740, -21856, -70988, 98084, 83930, -82531, 24433, 12501, -92385};
    int m = 91194;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {18603, 86055, 3202, -2772, 79311, 88915, 37914, -20366, -68715, 93302, 89399, -96433, 3076, 85563, 16630, -50977, -5365, 66518, -64247, -39066, 6905, 29011, -32109, 35374, 96266, 44758, 42932, -8733, -88327, 18163, 50365, -39418, 95515, -87961, 44684, -14647, -34314, -26494, -7201, 81029, -6280, 97545, 64366};
    vector<int> y = {-53251, 63775, -64853, -1764, 61869, 87443, -85581, -36216, 66811, 5417, 52164, 10351, 51133, 6185, -2414, -29849, 69487, -81169, -66720, -86866, -36165, -89708, -72012, -73631, 24249, -68288, 7936, -99323, -87123, -61842, -96028, -84393, -46895, -82037, 97030, -17689, -11893, -15177, -37597, -89823, 92022, 15075, -98019};
    int m = 24800;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {-45801, 80290, -16051, -52928, 54166, 21560, 46342, 68928, 69698, -2180, 46591, -37304, 34755, 80815, -44017, -58797, -74434, -80826, -75969, 52827, -69531, 48034, 27647, 63217, 51180, 57058, -4739, -3941, -97339, 39748, -58841, 22914, -92011, -90116, 27394, 93628, -63465, -87690, -94150, -68715, 2226, -56604, 83817, -82140, -85730, -96800, 67878, -48430, -39610};
    vector<int> y = {85267, 70197, 24622, 80138, 10925, -52453, 23240, -75769, 41487, -98687, -52338, 6045, -56963, -90054, 89421, 21196, 39338, 71823, -41839, -40756, -11944, 91110, 5755, 29816, 43120, 51748, -21257, 91752, 63802, 95445, -46838, -9647, -30560, -9216, -57404, -17089, 74777, 32262, 27625, 9064, 82736, -26512, -23607, 2953, 45254, 3906, -24333, -26724, -10141};
    int m = 12356;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {25316, 86486, -98790, -49024, 20121, -55775, -80407, -17450, 90330, 89332, -20177, -95890, -81311, 12944, -33266, -39923, -57797, -4171, 11438, 87319, -69413, -90830, -57947, 28742, 46920, 80743, 93084, -40471, 79083, -69189, -34888, -66697, 85936, -66721, 34594, -49696, 12651, 58731, 37553, -52376, 90632, 80292, 31269, -96348, 16061, 42071, 13506, 57074, 34372};
    vector<int> y = {-24680, -3644, -64613, -48101, 37176, -387, 57672, -68044, -85492, -32050, -16383, 50457, -93203, -14428, 74048, -27943, -28750, 17353, -63478, -76805, -41519, 47781, 12113, -2560, -69974, 22152, -26125, 73336, -30834, -45351, -77443, 2273, -59033, 56183, 38361, -15465, 46105, -93624, -24218, -74187, -39912, -10772, -94636, 70090, -90698, -50638, -6225, 10011, 86735};
    int m = 48344;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {-65710, -38345, -44688, 81319, 85750, 19299, 50180, 74077, 23908, 7961};
    vector<int> y = {31772, 94803, -35498, 21584, 73763, -76727, -81893, -35857, -56177, 74006};
    int m = 8810;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {85636, -23078, -59982, -45349, -65112, 84454, -33445, 25195, 5364, -77466, -27562, 76343, 46519};
    vector<int> y = {-58185, 73939, 41773, 75934, -79656, -79656, 46390, -12745, -38193, 60252, 24511, 62916, 42814};
    int m = 25033;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {16119, 98282, 37021, -64728, 70786, -72803, -41035, 16861, 39923, -20094, 40469, 88067, 21252, 88823, -5068, 85991, 42568, -92722, 56771, -88275, 42159, -30089, -25125, -60962, -55402, 57963, -82611, -52079, -62126, 69414, 17830, -52663, -13607, 5847, -21236, 18211, -84891, -63574, -76402, 3179, 10325};
    vector<int> y = {95593, 21675, 64699, -39934, 9280, 47430, 67677, -33120, 14136, 9669, 12170, 48326, 10123, 66357, -26090, 81950, 95476, -51302, 18469, -71029, -27984, -43116, 41473, 63872, -22320, 88353, -95490, 17009, -12429, -82191, 1900, -76839, -52830, 41147, -17740, -90441, -79546, -36212, 18653, -72125, -76904};
    int m = 14970;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {-38166, -20968, -12092, -73548, 63404, 32315, 74077, -86643, -92310, -46112, 75416, -19763, 44993, -42408, 16693, -9403, -91702, 47194, 91922, -61362, 78888, 13040, -34873, 73921, 95702, -68144, 55794, 33128, -44381, 75716, -36870, 41650, -87489, -9157, 27782, 32593, 50377, 54179, 48756, 72085, -18628, 64195, -29703, -80234};
    vector<int> y = {-48371, -56956, 67412, 64752, 67038, 56426, -47021, 85197, -40360, -90438, -59089, 16800, 3273, -28969, -74284, -64763, -75268, -16137, -209, 83069, 1841, -87470, 34260, -30481, -17391, 9608, 91637, -79188, 50532, -74067, -6505, 62848, 33704, 69921, 11196, -46793, -70198, 18369, 62559, 60320, -95195, -62930, 29852, -7107};
    int m = 82279;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {-96790, 88850, 3676, -54559, -50726, 43762, 45037, -84567, -75133, -72761, 42508, -89019, -88648, -43849, -54119, -2935, -4926, -39232, -14750, -82142, 39589, 5480, -61333, 74332, -60364};
    vector<int> y = {-22823, 26583, 36092, 28653, -38613, -17737, 28609, 7461, -44304, -36568, 75914, 91504, -34250, -77104, 27396, -81877, 41398, -64136, -42516, -55879, -53516, -43299, 64184, 39197, 37779};
    int m = 28845;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {27478, -46196, 49401, 38820, -65328};
    vector<int> y = {12605, 51657, -59803, 58686, 63386};
    int m = 21240;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {-38819, -65409, -23190, -11172};
    vector<int> y = {80631, 25550, 82838, 40088};
    int m = 78794;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {-90032, -63714, -7239, -60464, 56712, -52341, 98120, 8599, -26851, 36133, -99310, 73122, 67090, 84476, 99548, -84062, 118, 36218};
    vector<int> y = {52133, 23458, 9452, -58477, -79749, 12782, 76648, -85746, -51585, 74068, -27677, 35681, 12569, 52518, -87446, 61100, 23323, 69676};
    int m = 90773;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {17321, -10121};
    vector<int> y = {-18461, -22409};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 871281956;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {756, -15042, 2245, -20545};
    vector<int> y = {-2818, 15464, 3989, -20975};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 76626840;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {-13279, -10390, 7828, 9564, 19490, -1234};
    vector<int> y = {10821, 12928, -17700, 2458, -2694, -522};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 72184962;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {-806, -18891, -21654, 731, 20765, 17866, -8107, -439};
    vector<int> y = {5540, -13307, -6116, -175, 6041, 7828, 19643, 12963};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 828384540;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {7709, -2459, -2908, 22004, 8264, 9811, -19820, -13814, 21992, -6591};
    vector<int> y = {6885, 22397, 2346, -14258, 23730, -15437, 21266, 12996, 16622, -2739};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 959132617;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {3665, 8422, 12364, 522, -6921, -21612, -19284, 22698, -22459, 3209, -4008, 18156};
    vector<int> y = {-10669, 13188, 6360, -23612, 10319, 11758, -3734, -18072, -16883, -10931, -6374, 16446};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 623789293;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {4516, -13178, 20379, 15926, 16622, -4095, 16354, -9792, 22675, 19717, -23347, -4961, -4501, -9627};
    vector<int> y = {18158, -16716, 5329, 1312, 19842, 681, -4992, -4992, -22887, 1241, -16657, 23675, 9699, 14019};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 462214225;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {-22866, 22229, -22416, 18142, 23431, 1626, 12283, -13110, 17263, -7777, 7706, 11327, 6920, -6475, 15506, -7398};
    vector<int> y = {-10312, -6023, -9998, -3824, 2501, -2440, -9795, 4762, -14741, -23147, 21662, -10369, -10838, -6963, -8394, -21830};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 403530043;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {-8241, 23688, -15861, 543, 16407, 6246, -17854, 14212, 16551, 1934, -3505, -18565, 7750, 14869, 395, -16349, 21027, 1243};
    vector<int> y = {14441, 21548, -563, 3747, -22607, 346, 13684, -7306, -14085, -18684, -4457, 16019, 3634, 21119, -18837, 6595, -16913, 21501};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 563430866;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {-3347, -19457, -2333, 10810, 12590, -14230, 23069, 18240, 11447, -18072, 4799, -15132, 17992, 22135, 2868, -5594, -11258, -2286, 6022, 21511};
    vector<int> y = {-3621, -11899, -18967, 12302, -15440, 9532, -5069, -20658, 3835, 18560, 15859, 22868, -20976, -23639, 3112, 15700, -10928, -2726, -14618, 6657};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 717961031;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {15831, -11478, -6972, 236, 5236, -10467, 7951, 20794, -19217, 13611, 7119, -9635, 13397, -19442, 14340, 5384, -11158, -20251, -21641, -3517, -23231, -16708};
    vector<int> y = {-20663, 23672, -17698, 7732, -17148, 5231, -17069, 8632, -7255, 16399, -16139, 22025, -6393, 15642, -15510, 4626, 15440, 10569, -667, 19155, -11829, -1242};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 876154849;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {-10026, -22938, 7083, 20307, -19047, 2194, 12726, 10276, -4629, -5857, -4352, 10256, -10158, -5252, 17351, -1982, 16320, -8030, 10301, 11215, -21503, -7010, 10867, 18491};
    vector<int> y = {1502, -15102, 3279, 17087, -21223, 18222, 19362, -10160, 7301, -6809, -12136, -22042, -10558, -12914, -18877, -20148, 23298, 8754, -647, -17007, -21471, 16764, -12763, -12771};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 801625218;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {-1800, 10037, 22769, -10814, 779, 23535, 1019, 5985, 7962, 21190, 20562, -925, 12617, 19952, 11705, -23590, -18933, 8946, 10499, 20869, 16625, -2110, -23290, 2082, 2108, 13870};
    vector<int> y = {6956, -403, 15087, 22856, 19703, 13903, -8539, 23725, 23964, -22524, -14264, -22487, 19243, -8564, 1753, -18906, -7483, 11544, -19297, -20855, -23007, 4784, 3944, 19054, 5156, 15940};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 143926258;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {17903, -11186, -5189, 13186, -3454, -20899, -986, 2361, -9658, -6679, -21135, 23837, -17142, 15630, -16804, 14542, -15346, 14890, -1101, 4322, -10769, 10320, -82, -5868, -1118, -363, 21811, 2874};
    vector<int> y = {-14549, 5604, 20029, -17322, 23894, 23765, 5120, 18539, -2288, 1927, 7129, 13895, 17524, 2248, -11326, -21712, -20392, -10936, 18535, -15432, 6169, 1088, -20344, 20604, -22320, 13055, -14059, 1360};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 836374888;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {-4127, -16752, -23665, 8335, 20844, 19947, -22233, 6478, 4428, 5935, 3003, -2596, -4302, 6567, 2524, -22086, 843, 15521, -20470, 10944, -1688, -20472, 11270, 12271, 17512, 13720, 23782, 7952, 16298, -4569};
    vector<int> y = {829, -17710, 12205, -5407, -12448, -21557, 4089, 12176, -23748, 14063, -16101, 752, -326, -7087, 20196, -14334, -3257, -17061, -14548, 5638, -12792, 7856, 20202, 23025, -5004, 18826, -15912, -19780, 15554, 16803};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 98521263;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {3093, 4216, 6411, -11943, 19706, -390, 16197, 9090, 8797, -16775, 6547, 22964, -6671, 18357, -4143, 23257, 3605, -18019, 23924, -13480, 1839, 17905, 18986, 4988, -982, 5674, -6465, -9599, -19592, -8963, 14373, -10437};
    vector<int> y = {12805, 8784, -12321, -3639, -5764, 1596, -18327, -238, -9845, -7351, 23799, 8824, -11425, 19687, 19545, 16579, 16231, -23851, -19362, 524, 17123, -15341, 12540, 13502, -6826, 22590, 7859, 4923, -2986, 20461, -14593, 15539};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 170542850;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {-18106, 3593, -17452, 7372, -12741, -3784, -10844, -18651, -15803, -15179, 20735, 6610, -21821, -22048, -20845, 15343, -19783, -854, -484, -2586, -1670, -11567, 8780, -11307, 9987, 12804, -1633, 9341, 10002, -21944, -4712, -11680, -14755, -4321};
    vector<int> y = {-5190, 3503, -4768, 15480, 18353, -23546, -23756, 22507, -14403, 223, 7185, -8348, 18085, -17830, -16927, 7671, -15557, 1142, -704, 13072, 8544, -13165, 13620, -5423, -2773, -17084, 21565, -15403, -9680, -19858, 16764, -16412, -19393, 23445};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 429681902;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {-14894, -13132, 10028, 16419, -19832, -19576, -23099, -11558, -5386, 20463, 12103, -10825, -19500, -15205, -21040, -23579, 21295, -10694, -3891, 8951, 17491, -4374, -8486, -17336, 9357, -13945, -23117, -23388, -14767, -5560, 10242, -5368, -13634, 164, 1754, 14271};
    vector<int> y = {-9518, 12234, 2904, 20109, -6262, -7462, 17937, -14760, 844, 5885, 15753, -23313, -12638, -7581, 19350, 5491, -15067, 714, 15713, -6679, -17545, -976, -20964, -1198, -23821, -2139, 5897, 18648, 2991, -21888, 16094, 12684, -7568, 19626, -18288, -12681};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 118960537;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {18957, 20111, 23265, 10026, -13944, -9347, 1910, -17065, -16361, 5367, 5808, 17164, -4577, -4426, 8113, 15477, -22964, -17081, -20648, 13070, -2594, -11193, -23422, -22827, 23529, -10035, 14801, -16858, -775, -13595, 7649, 3765, 4940, 3864, -12712, 805, 1965, 5115};
    vector<int> y = {-17727, -11475, -1781, 16622, -23086, 17921, -10142, -22117, 21653, 22649, 11488, 11768, -11307, 17232, 22419, 6121, 14172, -16177, 3308, -16080, -2190, 11495, -11266, 4163, 6387, -9601, 13529, 15892, 19021, -15363, -6739, -131, -4290, 23596, 21340, -21017, 9891, -7119};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 598796963;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {-20137, 18595, 6630, 20206, -17278, -17920, 12144, -3774, -8381, 7909, -2024, 11526, 21444, -4647, -11874, -13770, -17956, -20952, -17915, -23170, 21180, 21805, 6152, 19049, 11989, 7188, 2118, -499, 19604, 4578, -11330, -7486, -9975, 6076, -22928, -14382, 17093, -8653, 1763, -1985};
    vector<int> y = {5085, -7823, -5026, 630, 13778, -17668, 16482, -3368, -6051, 21549, -2790, -9466, 17816, -3535, -5086, 2574, -8090, 8176, 13493, -14922, -1056, 11017, 17100, -20675, -4831, -13046, 8214, -17117, -4108, -17270, -2756, -21402, 11071, 10206, -20262, -7516, -5957, -10281, -14501, -9861};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 695514633;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {8088, 21839, 2632, -14596, 11563, -3074, 19756, 6277, -1561, 22745, 14006, 3963, 23249, -14560, -23965, 22567, -17745, 14664, 3917, 12290, 2879, -14798, 14707, 5892, -17515, -22921, 9292, 23094, 15276, -15782, 16519, 23878, 23423, -11561, -23237, 16278, 21554, -499, -18960, -7856, -15627, -3726};
    vector<int> y = {7356, 23161, -17198, -17854, -297, -1192, 5938, -22945, 17139, -15367, -18748, -733, 23179, 13956, 6521, 55, -15587, 19276, 8015, -5464, 18837, 13744, 6089, 10102, 2163, -22849, -2822, -5546, 6926, 10038, 16369, 5198, -11173, -4855, 10041, -11432, -7544, 21349, 13314, 8608, -4969, -2576};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 488524514;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {22714, -4370, 3977, -11862, -15539, 1632, -15217, 7896, -10123, -18674, 13708, -23063, -6167, -23009, 1688, -16576, 10035, -6820, -20310, 18885, -8078, -9316, 13353, -296, 13968, 14438, -10659, 16022, -20250, 708, 13366, -1546, 11534, -3, -20413, -22526, -14510, 23875, 6003, 9617, 16603, -7015, 15573, 18782};
    vector<int> y = {3438, -18952, -5967, -14914, 14165, -8172, 369, -18640, 17765, 21352, 21696, -13133, -16953, 21141, 19742, 15800, 23103, 8066, -20644, 20559, -14964, 12392, -8141, -22326, -10554, 556, -1281, -8234, 7414, -4560, -13836, 8042, -21308, 12007, -12377, -18724, 10812, 8635, -19047, -20075, -23959, -22805, -6935, 10928};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 510426868;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {21757, 12120, -13844, -21067, -20595, 23486, -10545, -21240, -15332, -20048, 23180, -14087, -10353, -14193, -1296, 18651, -19314, -5778, -3628, 8969, 1087, 18799, 4096, -18534, 15193, -22151, -18858, 3767, -10062, 1444, 15090, 3594, 12635, 22793, 345, -1110, -6750, -12322, 4042, -22592, -9082, -11839, -2495, -20270, -1637, 11360};
    vector<int> y = {1709, -11228, -12482, -4105, -11337, -9398, 6793, 22334, 2470, 10464, -16086, 22687, -16105, -16965, 9610, -8885, -12850, 16256, 4930, -10739, -19829, 17235, 5524, 5402, -8931, -5203, -10356, -16987, 8168, -22084, -14410, 23296, -5015, 19325, -10965, 15564, 17494, -5546, -12852, 13338, -19872, 13555, -14265, 12338, -18151, 6920};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 780048961;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {-23249, 5584, -5611, -13200, 2030, 17328, -12482, 733, -3846, 3656, 12494, -7235, -20981, 2117, -18841, 21706, 8520, 5698, 8069, -22705, 20667, 742, -5926, 7405, -5716, -12425, 2393, 22407, -4261, -14959, -16946, 15701, -11677, 11418, -2780, 21552, -4536, -20626, 22754, 23484, 2283, 412, -2074, 8902, 12076, 12856, 5765, 20375};
    vector<int> y = {-23167, 15790, 451, -18350, -12368, -10586, 19758, 13333, 18670, 21726, -14422, 23343, -20681, 1459, -635, -18216, 19090, -4480, -13541, -14231, -10603, -2174, -16286, -3001, 5964, 5071, -17669, 14397, 3061, -10515, -8118, 11439, 4951, 16978, -17444, -23000, -18292, -3964, -7352, 736, 16271, 8066, 11566, -23278, -23504, 4582, -18245, -19867};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 816842105;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {18737, 11217, 23575, -15055, -6120, 7741, -8030, -16203, -871, 7981, 10273, -1433, 8258, 1326, 833, 16859, 21644, -4991, 10213, 11498, 5756, 8780, 10503, -17763, -12862, 21672, -23790, -19124, 4254, 19985, 15307, -2005, 4913, 5372, 17626, -13548, -18506, -19738, -14804, -1134, -9707, -23022, 23061, -1722, -7694, 14402, -10502, 11021, 2267, 21914};
    vector<int> y = {3, -14445, 17813, 13939, -20464, 1039, 20902, 10915, 18297, -19593, 13297, 13105, -14574, 17358, 1837, 20451, -2626, -21529, -8265, -15212, -2810, 17968, -9797, 3269, 8330, -23258, -680, -19182, 14098, 7455, 1665, 14627, -11181, -3414, 3506, 14146, 11976, 19050, -22570, 19904, -12201, -18358, -3267, 11102, 11786, 2860, -22210, -9775, 11639, -10122};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 640387514;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {5370, 14333, -11607, 3443, -16761, -19831, -2035, 12476, -2908, -10748, -1370, -11335, -15871, -11802, 4760, 7909, 16219, -22908, 4780, -4584, -10120, -12738, 10108, -21272, -4316, -661, 2863, 22498, 19097, -12819, -11096, 18269, 23875, 23985, 6973, 1124, -6511, 15103, 4464, -11487, 13424, -13726, -19705, 16991, 17058, 7098, 19931, -16746, -12809, 12804};
    vector<int> y = {16394, -1601, 19069, 4531, 9039, 141, -21811, -17460, 10086, 19748, 21060, 18345, 10333, -13046, -19224, -2697, -12347, 5798, -14352, 20804, 12668, 4980, 4782, -18196, 19018, -3101, 20595, 14856, 23961, -20213, -19922, -7891, 17503, 19725, -12475, -3856, 22059, 4939, -21202, 9983, 23366, -12142, -18371, 2273, 16922, 20306, 18017, 696, 11321, -752};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 536375489;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {-2165, 778, 1565, -14007, -16733, -4267, 12364, 11483, 23018, -15128, -22957, 23239, 15451, 17917, -23629, 1388, 23738, -5570, -4445, -2522, -13701, 20510, 10586, 2141, -11246, -14300, 2484, -7262, 6249, -23810, -6429, 7375, -8341, -15698, -22999, 19273, -22414, 3189, -11868, 1949, -3641, 112, -879, -4764, -17018, 16013, 6135, 13613, -15681, -18701};
    vector<int> y = {12737, 16430, -14985, -22811, -11827, 15823, -8360, 18911, 7302, 22416, -8527, 18413, -211, -17245, 10871, 20956, 13062, 17324, 23787, 7012, 8057, 13098, -356, 19877, 19934, 14336, 14136, -8906, 5407, -19792, -15875, -20817, 16745, -9156, -7865, -4241, -2532, -20117, -742, -14149, 20399, 18208, -22137, 13710, 5474, -2529, 11025, -1833, 7645, 7201};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 195877033;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {3413, -6912, 22913, 13737, -6520, -18402, 21539, -18418, 6330, -5069, -22442, -4346, -168, 15938, 3247, -18097, -10192, 14475, -2244, 15002, 19567, -113, -16262, -14311, -21113, -23245, -7041, 19625, -13272, -14421, -10450, 22186, 11783, -10638, 14626, 15306, 7025, -5656, -2537, -11380, 6237, -18521, -2782, -18911, -1832, 6368, 3902, -14903, -5433, -13618};
    vector<int> y = {-22131, -1470, -12209, -16755, -16966, 11968, -15507, 16578, -6792, -23119, 15106, -19642, -1838, 13390, -20895, -19719, -16182, -12103, 21400, -22258, -6261, 18613, 11298, 11257, -7543, 14899, 22539, 6259, -14786, -14541, 23638, 3572, 17289, 7700, 21388, 7272, -3143, -6420, -4451, -17778, 3635, 23679, 13568, -11007, -21486, 5090, -23366, 18561, 5251, 13254};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 611900239;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {6453, 4569, -9314, -20700, 11630, 93, 15802, -22047, 7575, -21964, -6819, 2591, -3202, -9010, -12433, -19164, -8863, -17199, 9835, -2589, 4504, 23357, 15676, 19295, 18020, -2035, -9538, 7652, -15922, 12761, -14633, 13312, -14811, -14570, -23052, 10281, -20091, 17310, -21047, 1994, 14666, -6925, 8800, -23715, 15308, 17520, 13230, -9592, -18880, -9807};
    vector<int> y = {22945, -10029, -18370, -4020, 13208, -19537, -15524, -23451, 20515, -4304, 20019, 23055, 23100, -22, 20799, 2130, -16627, 7543, 9293, -16815, 7296, -13469, -11422, -21061, -10512, 1023, 17098, 4626, 22070, 23069, -2673, 22688, -20317, 4906, -22178, 23199, 9009, 17838, -8125, -17210, 15152, 347, 19982, -7135, -14774, 18024, 23394, 18506, 7920, -2933};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 172321926;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {-10992, -1187, 12012, -182, -8169, 17866, 21675, -9678, -18208, 12432, 13666, -7688, -1748, -19149, 5605, -18548, 19842, -2836, 17010, -14520, -7823, -1455, -3042, 20176, 1563, -15402, -8512, 15757, 10001, 7473, -19879, -9988, 11362, -12079, -19783, -11189, 15886, -9682, -5376, -11393, 12797, 21346, 8848, 15431, -11318, 17182, 11217, -9087, -15540, 16254};
    vector<int> y = {-12750, -20195, 8276, -17386, 5191, -10204, -12343, -20278, -15554, -16930, 16864, -3632, -9660, -15441, -21211, 6186, 440, 21000, -11994, 11356, 7405, -18679, 16668, -19780, 17889, 10174, -18612, 22775, 5045, -11645, -7095, 3054, 1046, 19427, -6867, -12333, -5454, 16092, 2548, -3289, 17851, -8076, 21972, -4045, -21594, 15830, 6789, -1101, 23754, -6796};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 211121422;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {-6473, 9005, 691, 11716, -23853, -12953, 15864, 10325, -23753, 10641, 9771, 982, 3565, -19877, 13190, -11626, 16929, 11509, -19348, 12967, -18493, -13509, 909, -14706, 21537, -8530, 10200, -18115, -17842, 2145, 20562, -6070, 12436, 1158, -8029, 7942, 15575, -20803, 16806, 13625, 10316, 18753, 5040, -8185, -20852, -2657, -7734, 4460, -19786, 23751};
    vector<int> y = {-21149, 5135, -19719, -1160, 20517, -15383, 7316, 11889, -9697, 8549, -20835, -11574, 17355, 5563, -9252, 1278, 14407, 17205, 3546, 711, 16157, -41, -2849, 15068, 2327, -20320, 6200, -5927, 16228, 22361, 168, -5150, -16042, 23940, -3143, -21900, -18923, 7571, 2920, -10013, -11738, -16327, 19200, -3249, -10714, -23381, 4448, 17820, -19344, 19349};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 734362889;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {-20744, -5395, -7317, 5634, 13794, -16227, 4331, -13053, 5402, 11104, -23987, 9488, -2691, -18570, -20654, 18884, 20434, -2819, -11258, -2634, -21724, 1222, 5111, 301, -18998, 4667, -8394, -11963, 11813, 16769, 22410, 15343, 17468, 21889, -5961, 22467, -16458, -20220, -626, 16064, 12495, -5200, -19452, 10826, -15072, -17974, -10137, 2438, -16437, 15842};
    vector<int> y = {-14702, -9969, 13273, 15678, -14454, 3721, 18737, 20839, -22414, -2462, 21777, -23052, 20375, 10284, -13288, 72, 12498, 21375, -15772, 8346, 566, -2846, 20349, -20303, -22092, 21799, 22894, -1201, 4353, -10609, -21650, -22383, -22196, 1505, -12977, 1797, -19868, -5250, -2180, 20466, 20255, 19858, -1168, -20406, 2788, 19120, -5047, -20180, 17309, 21558};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 762159514;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {7248, 23762, -16358, 11281, -6358, -9812, 8620, 8208, -21137, -2393, 9580, -11762, 9146, -19199, 13182, -13029, -17602, 17775, 21311, 10897, 8779, -22063, -18547, 241, -12920, 5280, -17070, 19241, -16326, 21017, 21960, -4655, 18999, -13860, 4469, 6545, -2272, -19543, -18310, 12822, 10030, 6075, -17485, -1797, -22155, 3250, 18408, -14809, -9598, 1690};
    vector<int> y = {-8370, 15266, 19828, 15797, -3296, 8884, -5900, -13082, -20511, -805, -8620, -23696, -16204, 13909, -5664, -19325, 16206, -16749, 12833, -3147, -15377, 3147, 8995, 6961, -7620, 4446, -19016, -5597, 18986, 20995, -13484, 18437, -9929, 11790, -18309, 2883, 5606, -3759, 9008, 19260, 664, 1425, -2067, -20513, -20383, 12894, -8468, -9531, -21016, 3138};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 781062984;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {21330, 6492, -5013, -7974, -3845, 5816, -23352, 344, -6768, 19295, -18313, -8227, 16027, 16757, -14786, 11185, -5161, 21236, -1258, -8645, -9819, -18777, 574, -3227, -6385, -22421, 6096, 12663, -6587, -11022, 6344, -22933, -20933, -7161, 15296, 169, -17689, -15600, 19374, 17207, 18172, -673, -11788, -18290, 8888, 5552, -23471, -18336, 23039, -8219};
    vector<int> y = {-22662, 18478, 4889, -9884, -12763, 18390, -974, -8366, 1310, 6953, -9529, -12909, 16263, 11575, -16892, -16875, -3277, -18600, -23194, 20439, -14005, -4431, 2940, 2843, -17559, 4661, 23908, -11819, -12827, 5230, 10168, 5067, -10379, 14695, 12884, 11189, 3289, 16220, 132, -21483, -14042, -15489, 18634, -11498, -14168, -20344, 21261, 16108, 23461, -7243};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 775134262;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {9457, 18931, 9584, -20577, 20258, 17713, 13597, -13214, 10719, 19798, -4690, 7594, -9702, 8391, -19536, 10278, -14551, 16886, 17214, -21785, 20250, 1001, -17141, -9415, -9117, -1223, -16867, -9404, -12400, -9714, -20735, -8961, 7634, -4663, -3991, -16639, 12807, -1735, 10925, -16647, 11589, 16096, -16542, 23239, 22, 11549, 7380, -23800, -21285, -3987};
    vector<int> y = {-19569, -14149, -5692, 11871, 20216, 13819, -1703, 18982, -2917, -6662, -23490, -3320, -7486, 11663, -16170, 19236, -6019, -20852, 23388, 4163, 16972, -18583, -1219, -5039, 10531, 2877, 14375, 22844, 14140, 21166, 6803, -15499, 14470, 8835, 16755, 3963, 13833, -13039, 8529, -15825, -16693, -9910, 17326, -17487, 23504, 21111, 8208, -9410, 13849, -15159};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 861383583;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {-21785, 16007, 8484, 3641, 5855, -2058, 18842, 7073, -8086, 5062, -19274, -11634, -10500, 6270, -19430, -20428, 21689, 5400, -20049, -7260, 11182, 14293, 1716, -6746, -23674, -6859, -18950, 7633, -16904, -11805, 18980, 3323, -22775, 4320, 10550, -10026, -3484, -19064, -14664, 21647, -7661, 3136, 16068, -22874, -3252, 16887, -16556, -20465, -13214, 10532};
    vector<int> y = {-19367, -9801, -354, -13453, 17833, -23166, -19842, 9405, -6198, 12542, 7362, 16746, -15460, 15336, -17848, -10084, 5667, -2974, 541, 14236, 21810, 12259, 4970, 17902, 18436, 17843, 20320, 19759, 9042, -15471, 3826, -23049, 17871, 21894, 3238, 1826, 2830, -16964, 21870, -21419, 15415, 788, -17494, 692, -3106, -16903, -1884, -10811, -23890, 18898};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 270109422;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {-1326, -22139, 21485, 19783, -7045, 9485, -1074, 15789, -12796, -14096, 10647, -9801, -10456, 20632, 18503, 4784, 21500, -17434, 20828, -12842, -19631, -22274, -7394, -12274, 17143, -23506, -19139, 23866, -9158, 17331, 0, -8028, 3553, -13385, 950, 14911, -22246, 1249, -23832, -10887, -7888, 3459, 14713, 1085, 18367, -23117, 4128, 23011, 3821, 18008};
    vector<int> y = {-9796, 6775, -4345, -14725, 12509, 11441, 8694, -16139, 15766, -10578, -17083, -23511, 8190, 18582, -14607, -5336, -15260, 5010, 6994, 11588, 6707, -20490, 16696, 20500, 8425, 14328, -15717, -1266, 16606, -22321, -16402, 18232, 9349, 21513, -11418, 7687, 1930, -4439, 22652, 21599, -468, -8585, -12915, -17445, 17007, 179, -2252, 5011, -13019, 17964};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 682744492;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {-11385, 1339, 7886, -18468, 19733, -8608, -22444, 17001, -379, -7679, -22971, -8941, -20874, -21125, -15881, 10218, -5259, 21095, -12801, -15786, 1099, 17690, -21312, 15814, 20968, 17278, -21875, -13010, 7697, 15553, -13814, -1943, -64, -8472, 6956, -2837, -18510, -1961, 22011, -9602, 6296, -18710, 12728, 7568, 16074, 8031, 14588, -14788, 3577, -20599};
    vector<int> y = {-18915, -5249, 14566, -23536, -17519, 5952, -22186, -16551, -20167, 11619, -20123, 20883, 10210, -17557, -19439, -15660, -12523, 3437, 6653, -23680, 18877, -1830, 3696, 13904, -17228, 22868, -23477, -8848, -3315, 3939, 3460, -11265, 23830, -14910, -18094, -9397, 14998, -4381, -7751, -11892, -22508, -20612, -3524, -16384, 15440, -20775, 8402, -7910, -22251, -19895};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 856533763;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {-10587, -6872, 6071, 16034, 9701, -11865, 13782, -15550, 8048, -11189, 18813, 6708, 22639, 9277, -10628, -14101, 18741, -61, -16398, -19284, -12817, -11397, -11489, 12051, 21223, 19769, -2132, 1390, -5763, 17810, -20652, -19365, 10401, 16713, -9095, -32, 21675, 23160, -2930, 799, -5941, 1964, -20733, 20542, 230, -12489, 20941, -14082, -11878, -11091};
    vector<int> y = {20013, 2780, -19839, -2532, 11589, -12799, 4546, -23136, -11978, -4813, -19475, 10926, -17743, -16019, 4698, 12365, -10105, 4735, 18246, -8926, 2329, -10575, -19217, -17789, 3129, 1105, 21486, 10334, 10911, 14356, -19320, 7079, 18731, -17211, -20749, -9006, 13293, -232, 17774, 2951, 5643, -14260, 18645, -13802, -8622, -11717, -19433, 2498, 17086, -23905};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 112018009;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {-19111, -14400, -23755, 3283, -5426, -6607, 5931, 2264, 8125, 17981, 22346, -2967, -7817, 14971, 19188, -10714, 1567, 11692, 9972, -13961, 15212, -11592, 16742, 311, -1045, -2292, 734, 16171, 14876, 1421, -19657, -5289, -1300, -2499, 4972, -18460, 23005, -11385, 13341, -17837, 23802, 11165, -13691, -3238, -5512, -13448, -640, -15690, -2978, -21486};
    vector<int> y = {14101, -9876, 17769, 11119, -6192, 10649, -17873, 14150, -7017, 22163, -7520, -1509, -3511, 20005, 6190, 23886, 13511, 11718, 2168, 7167, 7160, -3622, -7154, -10323, 20047, -10662, -10904, 14377, 12550, 15511, -12659, -3103, -5088, -18315, 13712, -4028, 17733, -9673, 6143, -4123, -3528, 8001, 12809, 19940, 1144, -1932, 4388, -2922, 22700, 21596};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 304612001;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {-18532, -18883, -15733, -23338, 25, -2193, -1768, -1538, 17518, 23761, 23726, -23022, -4642, -12872, -16321, 1697, 3039, 10362, -23331, 17206, 19458, 5383, -18472, -4932, 17055, 17537, -11212, -9992, -17686, -5543, 14541, 13446, 16866, -20989, -11028, 10944, -11005, -6614, -11263, -20751, -13315, -12578, -230, -13998, -20130, 17064, 564, 709, -13354, -170};
    vector<int> y = {-6156, -3087, 2743, 14232, -19637, -7037, 19834, -12970, 20908, -15159, 142, 9942, -20390, 12670, 7419, 23105, -22431, -20676, 17593, 21266, -11148, 15197, 15644, -4432, -19227, 21199, 148, 2352, -9132, 22967, 7491, 14122, 14472, 15659, -3122, 17018, 23499, 22550, -12547, -12519, 7105, -19824, 7754, -10036, 23778, -12754, -3622, -2745, 8836, -5318};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 402143592;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {-16538, 8354, 14946, 8749, -12019, 17681, -8553, 18013, -4936, 7400, -1147, 7770, -5246, -3866, 878, -14614, 12092, -13807, -21511, 21811, 12883, -11366, 14286, 13760, 7164, 16869, -2417, 5676, -475, 13557, 2399, -19682, -9248, -22, -17835, -18509, 22025, -6453, -12923, 3302, 400, 20357, 4445, -18382, 19267, 13267, -2049, -11649, -20014, -22134};
    vector<int> y = {866, -8902, 15550, 21507, -11257, 18355, -8383, 9943, -20634, -18872, 9491, 18734, 14116, -22130, 22182, -14334, 21516, 16807, 19809, 4571, 5267, 14808, -12768, -2574, 20730, 17631, -15585, 8788, -17981, -2239, -4195, 17932, 3554, 14972, -16645, -2735, 16879, -1445, -21209, -11996, 16098, -15897, 18959, -17848, 23535, -12171, -2001, -469, 6538, 9032};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 683794410;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {2295, -529, -17634, -12600, 4149, -16301, 17928, -1210, 10727, -15913, -3448, 17919, -21747, -20342, -474, 21856, -23578, -11023, 12189, 13545, -11227, 21183, -18066, -1148, 14417, 8354, -12052, -14715, 20862, 11473, -2126, -17052, 15553, 20775, -3366, -17031, -19852, -12044, -18078, 20812, 19567, 2237, 20498, 23456, -6551, -10302, 6191, 21291, -8485, -19546};
    vector<int> y = {-4067, 9333, 9652, 5328, -17813, -10045, -6792, -2308, 14515, -17209, 22286, -701, 16593, -12604, -10426, -12530, -23530, -9743, -22733, -5695, -23307, 8225, -13536, -1942, -8715, 11898, 2174, 10493, -19982, -15895, 6324, -14780, -21581, -13147, -10244, -2039, 5706, -588, -1236, 2196, 13735, 3555, -2812, 4996, -22941, -658, 20313, -2755, -22969, 18668};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 600001063;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {-3505, -18592, 7129, 3944, -22815, -19738, -313, 4582, -18190, -9117, 20753, 12640, -16265, -20823, 21991, -449, 16225, 17123, -18721, 3460, -9731, -15252, 14413, -20604, 12197, 1466, -5870, 7849, -4954, 16436, -14467, -153, 13263, 11930, 4027, 21783, -16715, 7800, -9087, -14078, 10946, 18337, -2043, 21935, -18742, 6805, 13126, 21313, -21561, 2281};
    vector<int> y = {-23651, 22272, -20917, 21842, 22875, -3914, -10457, -9140, -3070, 20783, -17507, -11204, 22925, -15163, -8501, -6005, 16485, 13729, 15043, 13402, 17423, 20828, -8579, 5688, -14439, -532, -13116, 7789, -19882, -7804, 20623, -3893, 17883, -2240, -20759, 10833, 23795, 468, 11965, -6106, -9552, 35, -4495, 15357, 21356, -11791, -6612, 13659, 10251, 23151};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 291735915;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {-14113, -20479, -19078, -10560, -10975, -18916, 7433, 1671, 2957, 11069, -17158, -6848, 10274, 7915, 20833, 10327, 19259, -18142, 299, -223, 6412, -434, -23663, 2758, -21825, 22026, 1488, 18845, -7478, -7207, 8091, -12118, 9610, -14467, 20749, -4874, 12468, -3647, 14642, -7438, 11592, 21317, -21560, 2188, -8859, -12106, 7937, 14989, 12520, 2573};
    vector<int> y = {13351, 18829, 7098, -21266, -503, 23882, -20837, -5559, 3509, -7749, -23944, 794, -5180, 4241, 11511, 3045, -12073, 1732, 20157, -16593, -12592, -18744, -5011, 22586, -9535, 15588, 4352, -1789, -15756, -13649, 10683, -6046, -17730, 3321, -9849, 5288, -4168, 13391, -19604, 262, 16402, -14839, -17580, 5790, 22555, 4142, -13649, -12111, 19190, -18129};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 720725232;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {19786, 14096, -9734, -16601, 13038, -10761, -16858, -14312, -16599, -11500, 6435, 1147, -19756, 14631, 2482, 18443, 464, -20477, -7328, -6710, 10039, -23886, 6894, 1021, 8081, 3799, -8938, 16043, -3003, 22707, -3331, -7552, -4030, 22285, 4706, -13824, 11140, 1342, 17132, -13662, 12528, -7906, -12999, 21949, -10483, 20722, 7565, -16027, 5140, -147};
    vector<int> y = {-23018, 1694, 3814, 11581, 6692, 5287, 19504, -11334, -16141, -1886, -8099, -22847, -7614, 801, 4892, 19069, 12174, 14421, 4640, 23136, -19741, -5076, -20044, -9415, -22205, -7055, -5508, 2405, 23117, 3133, 23737, -3256, 21832, -1427, 9162, -17880, -19222, -10714, 1266, -23168, -8452, -10730, -15475, 19485, -9647, -1082, -17319, 20027, -5360, -19689};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 194359987;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {-15220, 13601, 673, 1314, 22985, 873, 19459, 4248, -9250, -23522, 17368, 12794, 6356, 2446, 1044, 2230, 12622, -23198, 9685, 17800, 11110, 3086, -894, 9277, -142, 14590, -23715, -1093, 14553, -22165, -16813, 21848, 6588, 1565, 3932, -8736, 4943, 13390, -17621, 5122, 22123, 19890, -19013, 6665, -3527, 16733, -7134, -9888, 13945, -10449};
    vector<int> y = {-384, -14883, -22677, -22636, -11777, 565, -1043, -20572, 2044, 13326, 6018, -2842, 1728, 10542, 4832, 11794, -16320, -8788, 20361, -6150, -15192, 15556, 158, -5041, 10464, 5248, -12139, -8661, -3297, 7193, 20691, -9420, -6192, 6233, -2390, 19262, 6977, 3218, 18697, -23144, -11741, 442, 20355, -20279, 8157, 2359, 810, -20678, 3193, 11471};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 459062992;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {8299, -22379, -17362, 21661, 14176, 19563, -1275, 8897, -13064, -15501, -14372, -15824, 4520, 15810, 21089, -2641, 16182, 21823, -3372, -11980, -12435, -6465, 23200, 7369, -22197, -1475, -14212, -15443, -7414, 11569, 15754, 23836, -23587, 1561, -22296, 2875, 5085, 14798, 19900, 134, -1494, 15358, 6666, -18875, 5705, -13072, -19918, -7466, 6325, 21042};
    vector<int> y = {4523, 3983, 21910, -16211, -20594, 8609, -19347, 3825, 14046, 19615, -1418, 9260, 22968, 10906, -11515, -13797, 8212, -9971, -9042, 3478, 23859, 11445, 20622, -15447, -2243, 9901, -8590, 20883, 12834, 22421, 17026, -11768, 8325, 6827, 4618, -9917, -23889, -18558, 6198, -5952, 382, -23912, -2872, 11179, -7957, -10948, -6284, -22862, 20483, -5294};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 214198111;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {-13224, -951, -7357, -14200, 14566, 2179, 14731, -13869, 5299, -17029, -12264, -83, -9262, -17905, 1976, -22968, -7076, 13823, -17000, -13406, -6223, 1324, -22809, 18143, 5043, 12910, -4987, -21512, 14280, 13309, 1880, -22453, -22874, -19008, 16916, -13197, 2082, 12541, 13307, 15086, 23045, -9487, 20864, 8326, -12463, 5847, 20210, 8643, 17051, -7257};
    vector<int> y = {14466, 6969, -1525, -1190, 4796, -6443, -4307, -19749, 10523, 2747, 4392, -19545, 6980, 1985, -22510, -1740, 3430, 22007, -6130, -19872, -13525, 7284, -19647, -11679, -14259, 13570, -1277, -19412, 9650, 7357, -2542, -21985, -8134, -23738, -3690, 4947, -288, 12793, -3483, -18802, -4253, 11215, 14092, 22248, -5259, -12887, 7172, 7047, -12023, -10875};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 590773494;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {14444, 21439, -11503, 10017, 13099, 6617, -9939, 15079, -9213, -12118, -11029, 2560, -20995, -9916, 15458, -13997, -3547, -14676, -20615, 2442, -19651, -19487, -17628, -8962, 20687, -10400, -449, 747, -6931, -4062, -13803, -23096, 727, 18137, 11930, -2998, -20759, -9742, -7469, -10209, 5686, 21342, -8210, 4690, 16428, -18802, -23794, 23798, 2219, -114};
    vector<int> y = {20498, -16321, -22137, -8099, -5383, -1517, -3119, 4227, -19593, 10816, -7487, -808, -19341, 9146, 23138, 6393, 17861, -22494, -411, 364, -14639, -10201, 6646, 11630, -7911, 1078, 3135, -8495, -14655, -19852, 567, 21260, 21499, -3681, -11388, 10022, -5329, 14834, 21767, -21491, 11316, 3946, -4656, -12246, -12026, 8580, -15756, 3740, -16585, 19950};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 912706536;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {-17493, -7921, -4834, 13433, -6984, 3455, 6413, -14612, 19046, -4911, -1865, -23809, 3746, -11520, -20897, -13876, 21298, 15183, -7926, 15336, 8964, 5339, 18951, -2877, 11620, 17736, -20756, -16663, 14796, -19926, -23584, 462, 5775, 16954, -18220, 2199, -7281, -14726, -6176, 9730, 2419, -11620, 3400, 20379, 21873, -1350, -17390, -22502, -1736, -20253};
    vector<int> y = {-16013, -16039, -8552, 9385, 21448, -18979, -3873, -2992, 17928, 7521, 59, 5231, 5178, 23474, 1199, -4562, 128, 15339, 17540, 668, -170, -3261, 10429, -9625, 11182, 15810, 19962, 20959, 21508, -20790, 13938, -8364, -11201, 21774, 11378, -11379, 3495, 17786, -22698, 18420, 6063, -11998, 20912, -5971, -7583, -11922, -10546, -4324, -9250, 13457};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 791079859;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {-18792, -18172, 12370, -14056, -5661, -10390, -13541, -8203, 16919, 12704, -7807, -16588, -12446, 631, 12772, -5879, 5723, -16764, 20945, 20286, 2141, 23685, -10577, 20982, -3110, -943, -20706, 12543, -2468, 13813, 14070, 12404, -13322, 7386, -23776, 5642, -11574, 22594, 5120, -19679, 2906, -6345, 2363, -6679, -6010, -10116, -22621, -5538, -20126, -8549};
    vector<int> y = {14270, 22206, 9880, 11394, -7267, -21612, -18215, 16147, -15517, 17096, 5355, -19838, -17724, 16255, 19254, 19723, 8795, 20680, 5061, 14254, 22191, 16963, 15251, -13500, 2712, -22149, 13228, -17413, 1036, -20089, -4262, -17352, -11226, 22986, 13310, 21718, -3802, -17778, -22230, -21607, 14442, -15183, 4833, -6189, -3700, -13662, -20009, 8296, -84, 18661};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 850159422;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {-17607, -10105, 11352, -8971, -1758, -16366, -11000, -5694, -3812, -8376, -8219, -12560, -16735, -6117, 5960, -22988, 21207, -18256, 4724, 11483, 10009, 9883, -5595, 23548, -21980, -12570, 17167, 10473, -23370, 9446, -16386, 20163, 10260, -15752, 9390, 16134, -2983, 20395, -9301, 9359, -20948, 499, 2247, -10567, -2458, -4672, -8710, 8217, 17469, -12118};
    vector<int> y = {-23055, -8851, -1848, 15047, 22080, 7798, -2684, -11664, -13044, -13762, -22041, 16370, 22843, -11181, 1810, 16788, -15055, 8850, -20830, 21551, -17617, -18173, -16203, -1364, 18616, 1862, 10273, 491, -17004, -22622, 4006, 13827, 17176, 22988, 8086, 15388, 21889, 7531, -3485, -2329, -20536, -6357, 18223, 7899, 17490, -9586, 18068, -19543, 1899, -21072};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 935907068;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {13574, 21987, 55459, -37146, -99637, -26326, 93050, -98083, 18450, 48029, -29391, -2851, 84518, 39640, 44107, -11437, -31678, -97183, -26995, -37277, 18557, 8068, 81883, 92039, -14065, -21508, -61445, 49548, -13138, 78426, -76766, -93425, 88136, -64538, 78634, 89560, 2327, -19489, -64834, 89560, 90228, 54224, 52751, -3254, 64279, 52665, -95522, -18102, -51812, -38539};
    vector<int> y = {34240, 86909, 25615, -50572, -64909, -43482, -67688, 97653, -45940, 54405, 40047, 71503, -88754, -77740, -62751, -95041, -58386, -38289, -66645, -32533, -70635, -72754, 79213, 58735, -95591, -86898, -47773, -4316, -54706, -15010, 31718, 24299, 60770, -76342, -5938, -80684, -18651, -81487, -98462, 59562, -8756, -74, 31731, -91068, 89735, -48803, -54116, 25148, 91454, 15761};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {-1955, -15504, -14004};
    vector<int> y = {-7396, 3317, 11449};
    int m = 40186;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 44220231;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {8239, -21716, 31125, 28220, -4151, -3283};
    vector<int> y = {-6933, 23854, -7963, 7182, 16035, 14107};
    int m = 80783;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 184937497;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {-6584, -666, 13, 3595, -4171, 2339, -4255, 5006, 6264};
    vector<int> y = {-605, -6751, -4486, 780, -6256, -4562, 3386, 1269, 1235};
    int m = 13748;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 581303790;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {-12684, -23776, 42489, -21220, -12481, -11940, -5458, 29113, -17171, -18150, 3599, -14133};
    vector<int> y = {32546, 7876, -20795, 32492, -40109, 28712, -43370, -36259, -46283, -4922, 37589, 9617};
    int m = 94327;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 866458857;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {-18960, -14941, -13399, 19548, 7414, -15435, 10978, 7401, 18514, 13518, 3042, 4405, 541, -3054, -839};
    vector<int> y = {7483, -3308, -11390, -7917, 7929, -18382, -4205, 17514, -3273, -19223, -9641, 298, 8722, 8055, 18924};
    int m = 39502;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 793111267;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {-7915, 4084, -9379, -15317, 12500, -21629, -32946, 5069, -25913, 32878, -22786, -7464, 34132, -2467, 34799, 28385, -27133, -35580};
    vector<int> y = {31911, -7974, -25667, 36363, 34746, -27855, -25604, -23241, 9999, -14276, -18530, 33114, -38328, -29829, 33321, 33713, 14553, 18646};
    int m = 84302;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 634039758;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {27966, 10930, 24052, -7605, -3801, 1510, -17657, -21412, 23791, 22728, -22983, 624, 3408, 887, -12698, 1149, -159, 9191, -18620, 22011, 18890};
    vector<int> y = {-3627, 35, -21665, -16170, -4078, 15069, 11112, 4375, 21966, 16051, -17522, -27287, 15997, 9034, 23549, -15108, -12562, 16660, 17851, -10382, 27759};
    int m = 57952;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 400275870;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {-19784, 32966, -23051, 30060, 7773, 12248, 6460, -15111, -25650, -31567, -17974, 17272, -31942, -31472, 12665, -27527, -24442, 12881, -31131, -15683, 2392, 24497, -16147, 6042};
    vector<int> y = {-30718, -35340, 15581, 25970, -13109, -8994, -33626, 18677, 29782, -14797, -7926, 30024, 34774, -24124, -27339, -34339, 25598, -16083, 12853, -18925, -28698, -29693, -2325, 9236};
    int m = 71609;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 835022026;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {7691, 276, 2890, 6403, 39, -4782, -3452, -7496, 4873, -3524, 4108, 3043, 6178, 5170, 3681, -7047, 7184, -5453, -3406, -7808, -4414, -3580, -3773, -2171, 1562, 1223, 5668};
    vector<int> y = {-1608, -1501, -1179, -2784, -7240, -7101, -1795, -535, 6900, 8051, 2471, -618, 6903, 5007, 1516, -1304, 2591, -6096, -4571, 2549, 1573, 7497, -3372, 7694, 563, -1756, 2689};
    int m = 16230;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 291748262;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {3787, 1400, -10417, -5230, 7968, -11469, 12389, -9801, 509, 10753, -11608, 7701, 10814, 3674, 6518, 2477, 9418, -1336, 7023, 10056, 1814, 1033, 4089, 13357, -12994, -12484, 11226, -11921, -6194, 1857};
    vector<int> y = {3231, -4718, 879, 10464, -4878, 13075, 12567, 5651, -13437, 11195, 12372, -3779, 13120, 4696, -5302, 11949, 4894, -10638, -8941, 3418, 5236, 12887, 2871, 12853, 8450, 8130, 16, -10387, -3272, -9189};
    int m = 26897;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 279352427;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {9167, -5454, -2615, -766, 5171, 8327, 11669, 4766, 3408, 252, 5386, 1725, 10179, -3485, -285, -11102, 5114, -9068, -10144, 11110, -3956, -7762, -7595, -6160, 4183, -6387, -2031, 2048, -8625, 5481, -3748, 6407, 6302};
    vector<int> y = {-3202, 6405, -9806, -9823, -62, 2542, 2426, -10803, -10679, 8721, 11775, 10530, 1150, -2820, 10402, 6721, -8367, 2045, 11361, -8139, 8199, 4881, 98, -5051, 8118, -3000, -9830, -8091, 7122, 4942, 5063, -4354, 9611};
    int m = 23575;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 365445237;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {-7509, -11925, -11931, 8753, 9419, 4636, 6323, -8218, -6679, -7174, 3189, 10967, -8142, -11707, -227, 11594, 7672, -1954, 10606, 3966, -5587, -8423, 10329, 2801, 239, -2919, 2370, 11645, -118, -5144, -8063, -4743, 7847, 11191, 1720, 1957};
    vector<int> y = {2731, -7393, -4251, -12107, -10443, 10052, 7629, 4478, 719, 11246, -8011, 4971, -5300, -7533, -4309, -8274, 1090, 10544, -4100, -7680, 653, 2269, -11919, 8487, -5429, 9599, -1280, -7267, -6380, 5984, 11701, -2893, -6467, 11473, -3854, 9893};
    int m = 24292;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 947905599;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {29471, -34860, -3394, 3728, -13160, -14677, 27537, -12460, -19174, -29973, 15390, 17604, -17260, -46257, -30369, -36249, 25479, 28437, 17315, -31165, -45404, -48447, 34636, -35545, -34430, -43991, -23053, -7086, -13626, 23292, -33718, -19042, -5242, -10620, 13943, -45606, -12818, 33017, 14783};
    vector<int> y = {-34764, 48265, -28239, 7279, 44917, -29482, -42246, -19943, 40243, -26752, 46769, 23699, -13769, 16422, -33502, 33576, -23098, -27892, -10978, -33446, 11857, 43666, -14401, 13944, -17933, -34768, 32438, -29529, 36623, -43265, 43569, -35439, -13921, 25637, -22156, -19041, 18833, 10238, -6676};
    int m = 97135;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 923016444;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {-4493, -588, 2941, 7336, 767, 13185, -15330, -2020, 7609, 13226, -6740, 6888, 13842, 7921, 10435, -4077, -11569, -9965, -8394, 749, 6287, 2283, 17366, 1672, -9922, -11226, -8730, 4641, 9729, -17348, 4867, 15378, 9748, 7056, 8432, -2346, -15402, 5826, -494, -12657, -14964, -12825};
    vector<int> y = {-14875, -15218, 5965, 11830, -13669, -10223, -3648, -10826, 4817, 5712, 4418, -8136, 5130, -3875, -14283, -4489, -11829, -11749, 1930, 5663, -10307, 9159, -380, 2660, 12076, -12142, 17338, 17027, -12611, -9298, 4337, 15006, 8898, -17320, -6972, -16544, 3420, 3922, 6692, -10905, 8150, -11301};
    int m = 34872;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 829838374;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {-1712, 6747, 6515, 535, 5364, 5241, -1578, 4, -6241, -6519, 397, 7172, -12458, -1440, -1272, 14304, -150, -5435, 7580, -13967, -8693, 14262, -2626, 2115, -3568, 6917, 11990, -13293, 5231, -2596, -2606, -225, 8392, -10324, -11371, -10160, -1954, -3539, 8599, 3023, 7014, 13103, -11142, 3457, -6721};
    vector<int> y = {9501, -9816, 8340, 7254, -12191, 4110, 11505, -7281, -13066, -11446, 6936, 8635, -14045, 7985, -2373, 1925, -4145, -612, -7879, 3452, 13486, -11769, 2281, -12744, -9145, -11022, 10793, -4448, 5266, -9817, -4321, 768, 11461, 6777, 9628, -825, -773, -4736, 1312, 12386, -11003, 1546, 1735, 11024, 4120};
    int m = 28879;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 544309146;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {348, 977, -3686, 426, 2178, -865, 1238, 1384, 442, -2695, -5227, 2564, -880, -5141, -4014, -1419, 3800, -2488, -3814, -1910, 4012, 4065, 4974, -4875, 656, -3127, 3327, 2343, 3804, -3929, -1827, 3875, 3233, -3170, -3525, -4378, -549, 3047, 2328, 3411, -1043, -106, 3371, -4386, 3089, 3240, -4994, -4257};
    vector<int> y = {-2748, -2017, 3274, -2040, -5110, -2695, -3328, 4666, 2720, 389, -311, 1594, -524, -1153, 1884, -329, 532, -4736, 202, 4912, -360, 63, -2836, 5207, 5182, 601, 2229, 2753, 4626, 4575, 4263, -279, -2263, 3992, 923, -3428, -3145, 4433, -1348, -1345, -2913, -3886, 3759, 428, 5225, -2940, -1220, -5133};
    int m = 10530;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 498170637;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x = {30749, -9478, -17848, 14458, 22338, -15021, 34034, 16116, 14551, -7402, -24127, 19367, 17379, -5215, 2985, 3870, 2294, -21690, 36497, -21521, 11132, 33241, -33222, 36881, -10871, -27603, -9919, -6875, -4381, 10579, -3706, 30170, 35440, 2767, 625, -8787, 6625, 3327, 24108, -32320, -34664, -27653, 14204, -29058, 13486, 35492, 23902, -3638, -155, -23669};
    vector<int> y = {37146, 3073, -3525, -17837, -6711, 24624, 29605, 13687, 26424, -24883, -22482, -23514, 3094, -20170, -30400, -13499, 16721, -1689, -18938, 9638, 20899, 64, -12215, 11044, 27846, 5254, 1996, 16712, 3828, -28304, 18061, -23327, 34681, -3004, -13004, 11656, -842, -2208, 19337, -24363, -1479, 31030, -9973, -31997, 28489, -259, 5363, 1235, 19400, -5616};
    int m = 75275;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 73391981;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x = {40027, -42427, -23087, 7743, 25092, -21446, 44882, -9896, -20477, -614, -26851, -14597, 5854, -3081, 38360, 5977, 39528, 17000, 36149, 37897, -26338, -16667, 35666, 13553, -31140, -17454, -25982, -25656, 14030, -10597, -44728, -3066, 40984, -38821, 40238, 7687, -43741, 26582, -31204, -17752, -26338, -33718, 5441, 43418, 30253, -46570, 36955, 14689, -36256, -44352};
    vector<int> y = {5291, 20095, -44785, 18027, -7216, -9194, 36608, 26388, -6371, -32090, -42227, -1781, 46398, -40517, 35654, -14571, 33448, -30172, -28777, -20243, 36092, 25471, -9622, -13877, -19434, -9860, 44762, -15230, 20258, 44991, 28578, -39430, 43322, -44731, 12848, -45695, 15931, 31632, 34046, 5246, -26758, 46654, 33607, 11694, 22885, 36776, 8309, -38901, -1766, 21014};
    int m = 93516;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 583375630;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x = {6568, 21339, 15810, 9974, -7780, 3633, 6266, -20963, -8821, -15479, -10500, 19042, 5354, -13817, -7731, -17187, -8615, -8408, 20922, -15029, -8773, -8712, -20621, 22522, 18498, 86, -4767, 9709, -18309, 17676, -4530, -20067, 1392, -18541, 9900, -15026, 13476, 7188, -15778, -5131, -13807, 13388, 6886, -5467, 9923, 17773, -1550, -21948, -7777, -3479};
    vector<int> y = {20139, 10124, -22255, -2529, 127, 13572, 17801, 12406, -1368, -12328, 2741, -19365, -13825, 2892, 18780, 8342, 23024, -5967, 18455, -20870, -19590, -20421, 3856, 13269, -13743, 22275, -17866, 22178, 22066, 22173, -10921, -14714, 3071, -4456, 21071, 6247, 2143, -21579, 19619, -15910, -2006, -15097, 18895, 22404, 13318, 6550, -1157, 11251, 10984, -5630};
    int m = 46951;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 801841710;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x = {623, 12615, -12302, 21476, -24034, -17723, 29473, -2883, -1319, -21305, 1232, 5860, -23119, -10932, -16989, 31068, 27672, -13130, -30841, 4276, 4073, -15118, -22959, 33415, 1751, 29725, 14816, -30225, 25056, 7324, -22861, 20569, 24651, 27402, -27967, -17815, 148, -30833, -6156, -15622, 6141, -23418, -19581, -33165, 13823, 23358, 30803, -17471, -32163, -20490};
    vector<int> y = {19359, -31671, -19492, 4306, -31336, -8081, 36147, -13273, 29375, 24117, 8936, -9574, -36289, -29882, 35887, 28572, -8860, -684, -36553, 12226, -303, 7316, -23993, 24329, -33277, 23091, -35560, 19723, -21120, 4158, -15893, 24647, -31787, -66, 26895, -11833, -2596, -25301, 36412, 7846, 13287, -33228, -37019, -18673, 29281, -32200, 10217, -29929, -26847, -35960};
    int m = 74615;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 311161817;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> x = {-987, 713, 890, -3511, -2066, 761, -1903, -1940, -299, -175, 23, -2421, -930, -3249, 2899, -1319, 3026, 2446, -894, -1747, 47, -3168, 813, -2890, -1432, -972, -2395, 2322, -3015, -3272, 878, -1162, -1729, 327, 1374, 2644, 3211, 2797, 207, 1998, -568, 2059, -3152, -2942, 896, -1929, 966, 1872, 1921, -2568};
    vector<int> y = {-3600, -2270, -1127, -2800, 2915, -752, -1250, 1857, 944, 2810, -2770, -1228, 3305, 2624, 248, -3576, -2337, 1741, -2465, 2264, -1920, 987, 1096, -2121, 2933, -2449, 806, -3521, -3224, -1767, -679, 149, 2606, -2098, 393, -209, -926, -2364, -1710, -997, -1431, 2788, 535, 2149, -3103, 3572, -2525, -577, -164, -987};
    int m = 7254;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 625907039;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x = {15022, 41483, -15421, 3755, 37115, -36402, 21286, 42441, 19729, 10699, 21277, 17494, 314, -18427, 800, 957, 21101, 17223, 34302, 29925, -1823, -4411, -30183, -25731, -43111, 24273, 31520, -23690, -9846, -41730, -37271, -6229, 14458, 619, -31355, 43436, -42384, -40712, 14359, -16254, 41850, 8969, 18005, 7798, 31079, 31723, 18322, -24587, -37868, -18682};
    vector<int> y = {17958, 30151, 19541, -18039, 79, 2180, -42266, 39969, -33745, -22803, -6731, 24664, -17846, -21239, -37304, 23887, -31341, -17477, -42580, -3221, 10653, 21767, -11955, 19121, -12307, 20043, -21440, -32504, -33302, -8556, -23157, 25085, 14994, -8459, -28669, 42064, -3474, -8878, -11737, 26330, -41976, -39119, 32755, 7764, -2485, 42221, -464, 35731, -22438, 9602};
    int m = 87338;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 981890131;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> x = {4, -41, -49, -157, 43, 32, -138, 151, 156, -128, -106, 30, 23, 22, -5, -21, -134, 14, -32, -93, 69, 92, 115, 127, -146, 53, 91, -2, 156, -28, -98, 113, 43, -49, 159, 109, -129, -116, -120, -51, 54, -149, -98, 3, -58, -138, 34, -81, -112, -89};
    vector<int> y = {115, -32, -126, -64, -22, 65, -13, -120, -7, 89, 95, -17, -26, -39, -126, 108, 147, 61, -23, -4, -112, -97, 12, -28, 31, -144, -112, -49, 105, -95, 25, -100, -106, 42, 130, 10, 0, 123, 119, 66, 3, 134, -117, -28, -101, 77, -17, 104, -49, 62};
    int m = 319;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 731201238;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> x = {-1430, -8958, -6506, 1856, 7935, 8845, 6234, -7311, 1880, 387, 4255, -6346, 4116, -8701, 10633, -10996, -10679, -385, 8374, -8122, 10394, -9293, 8567, -4441, -967, 2246, -3093, 6162, 8443, 2324, -4646, -10408, -9550, 9549, 6017, 2033, -9648, -3160, 6601, -9586, -6193, -2882, 4769, -2991, 9082, -2332, 2686, 5731, 4353, -6680};
    vector<int> y = {-8106, -3746, 806, -4950, -10115, -2381, -4332, 2379, -1914, -10773, 11209, -7086, -3654, 6275, 2299, 9312, 11361, -4643, -4554, 274, 9238, 2035, -7641, -5831, 3081, 3600, 10077, -6906, -11049, 3454, -10652, 11354, -10628, 10439, -6261, -8149, -1124, 3232, 517, 3946, -4813, 710, 7335, 253, 3214, -9836, 4510, 357, 5345, 696};
    int m = 23365;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 508765015;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> x = {35813, -15977, -36563, -23279, 28723, 15175, 36690, 3826, 15659, -30704, -7066, -25252, 22711, 37077, 11227, 35215, 17316, 15354, 13636, 16125, 34567, -8684, 18790, 3460, 11172, -7638, -32784, 8396, 4957, 38507, -37533, 20041, -4024, 27857, -15732, 3568, 9404, -29503, 31442, -13622, 36346, 35974, -14178, -27306, -4503, -37405, -16230, 1034, 23318, -28493};
    vector<int> y = {27282, -12014, 2044, -10050, -5926, 6404, 5127, -10907, 13524, 24333, 9643, -3745, -17680, 19368, -4352, 30478, 29109, 27619, 26425, -28878, 11822, 31529, 5899, 16389, -31649, -24031, -32255, -205, -31246, 27452, 17574, -7354, -3697, -35354, 23337, -15981, 21285, -22784, 36713, 12201, -1837, 26779, 11739, -2153, 9946, -13144, -21639, -7711, -35977, -28086};
    int m = 77446;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 645460876;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> x = {-2925, -290, 9543, 1189, 2140, -7227, -5685, 3742, -9132, 73, 5968, -5463, 644, -563, 1508, 838, -5716, 7547, -7817, 4925, -3283, 9463, 390, -5378, 6934, -9974, 1390, -6060, 9479, 7603, -9213, 2276, 230, -4214, -1818, -8612, -8978, -5640, -9772, -8953, -7273, 4554, -495, -9971, -4843, 4742, -6618, -6967, -967, -8249};
    vector<int> y = {-7011, -5768, 1059, 3773, 92, -4127, 8311, -7382, 4496, 55, 8238, -1097, 8418, -1637, -5328, -9964, 2290, 807, -6091, 8773, 8133, 7759, 4648, 6986, 2158, -6252, 802, -5100, 1665, 1213, -1819, -3196, 1690, -10232, 1496, 8672, -6274, 9302, -6006, 8385, -10173, -5944, 8845, 4973, 1357, -6748, 2282, -1, -9151, 3421};
    int m = 20610;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 233726091;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> x = {-15198, 24641, -1184, 14473, 12850, -31826, -28471, -18192, -29544, 20062, -42372, 24605, -2910, -25489, -32084, 4909, 12307, -25802, 14840, 34019, -5056, -23233, -23248, 7385, -31160, -30945, 8313, -35246, -14255, 10150, -6510, 30383, 4482, 18914, 27861, -5569, -30828, -26492, -15820, 19954, 14406, -23546, 13771, 26011, -16386, 32181, 31569, -6952, -34326, -12166};
    vector<int> y = {16869, 32768, -6799, -3156, -31257, 11329, -19074, -39863, -21299, -20725, 20689, -28172, 21075, -37404, -16747, 5894, 20680, -37971, -15885, -7238, 30159, 13086, -15679, 19136, -12231, -27268, -37698, -31899, -16302, 21755, 38615, 12542, 25665, -14155, 17206, 30084, 10435, 26759, 41581, 19439, 20955, 25175, 17962, 26594, -42149, 27414, -13020, 26641, 5181, -29343};
    int m = 85888;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 572019096;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> x = {3091, 36825, 31409, 12505, 24247, 35229, 37448, -40734, -46641, 14702, 18912, 40929, 234, 19461, -34173, -12372, -42900, 34164, 36606, 1878, 29019, -32861, 27536, -7584, -8920, -21898, 17082, -34226, -12351, 36311, -10054, -23151, 41258, -45327, -5507, 20339, -26538, -40639, 30684, -17397, -34193, 35166, -10080, -15778, -17844, 795, -23862, -39482, -18856, 35239};
    vector<int> y = {-30373, 22199, 99, 18505, 17089, -36721, 28068, 46446, -47421, 22780, 39036, -3833, 31114, 24017, -10735, -31010, 3246, -17026, 22678, 41284, -10967, 767, -18120, -34040, -21498, -38296, -42448, 38070, 39815, 17021, 4884, 45673, -10174, 43121, 38529, -25719, 15658, 175, 9944, 29915, -39859, -11496, -47336, -10734, -20306, 18935, 45928, -21802, -22322, 11061};
    int m = 95446;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 439271982;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> x = {1206, 477, 3279, -3010, -3073, -153, -913, 61, 1287, -2225, 3321, 2144, 3275, -2761, -2869, 2168, -3536, -2394, -2636, 374, 3580, -384, 2925, 3215, -697, 2750, 110, 1299, 415, -3026, 1192, -1672, 1304, -3070, 853, 2500, 1624, -216, -1349, 823, 1917, -500, -2113, 499, -2165, -2221, -71, 1997, 1893, -1980};
    vector<int> y = {-765, -2150, -1848, -1985, -3276, 1238, -1548, -1984, -1494, 12, 2034, 955, 3320, -1062, -2618, -1565, -1179, 1519, 421, 119, 3305, -1479, -3172, 3258, 1452, -3467, -1139, -704, -700, -3347, 1179, -1255, -849, -1613, -3218, -3167, -883, 1245, 3372, -3088, -3480, -1063, 1948, 1942, -2830, -3036, -84, 2254, -3384, 3045};
    int m = 7182;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 547390168;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> x = {-27515, 31293, 21713, -6853, 42391, -29765, -32439, 21630, 12747, 4756, 33733, 26332, 36184, 2564, 16992, -26628, 11075, -29525, 9530, 4632, -13178, -32581, 6685, -37403, -25274, 28796, 26511, 28870, 8686, 27069, 23908, 8479, 35597, 3963, -30353, 3036, -10692, -24806, -40485, 33307, -19574, -37882, -20434, 18946, -4606, -7919, 37409, -28589, -17877, 34627};
    vector<int> y = {10535, 15089, 41261, -18233, -38863, -17841, 7551, 37278, 42343, -21484, 25525, 42502, -39528, -4944, -10554, 29906, -30923, -8569, 38486, -27044, 33458, 13263, 34941, 4435, -8860, 35622, 26637, 36312, -41844, 32841, -7248, -23243, -14217, -2459, 7021, 30318, 35522, 11906, 32025, -7803, 35046, -13246, 4878, -4264, 14580, 42795, -18715, 32273, 37235, -13315};
    int m = 85713;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 527290350;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> x = {7, 8};
    vector<int> y = {8, 7};
    int m = 1;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> x = {-2, -2, -2, 0, 0, 0, 2, 2, 2};
    vector<int> y = {-2, 0, 2, -2, 0, 2, -2, 0, 2};
    int m = 1000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 387540818;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> x = {137, 99, 205, 259, 319, 293, 301, 348, 363, 321, 464, 425, 456, 472, 480, 649, 589, 514, 623, 615, 781, 545, 840, 771, 745, 842, 820, 704, 815, 893, 1005, 957, 731, 910, 984, 967, 1144, 1212, 1342, 1443, 1395, 1291, 1761, 1656, 1848, 1730, 2261, 1562};
    vector<int> y = {-137, -99, -205, -259, -319, -293, -301, -348, -363, -321, -464, -425, -456, -472, -480, -649, -589, -514, -623, -615, -781, -545, -840, -771, -745, -842, -820, -704, -815, -893, -1005, -957, -731, -910, -984, -967, -1144, -1212, -1342, -1443, -1395, -1291, -1761, -1656, -1848, -1730, -2261, -1562};
    int m = 8191;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 969534485;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> x = {-2, -2, -2, 0, 0, 0, 2, 2, 2};
    vector<int> y = {-2, 0, 2, -2, 0, 2, -2, 0, 2};
    int m = 1000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 387540818;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> x = {192, 206, 996, 681, 961, 299, 348, 897, 191, 580, 938, 965, 955, 516, 982, 348, 734, 282, 349, 958, 170, 963, 814, 14, 819, 567, 246, 736, 239, 307, 129, 566, 660, 608, 370, 222, 128, 465, 29, 998, 967, 250, 691, 666, 673, 15, 646, 93, 954, 483};
    vector<int> y = {158, 398, 646, 715, 969, 677, 420, 923, 89, 432, 954, 655, 413, 422, 106, 466, 430, 236, 827, 342, 524, 289, 204, 908, 859, 315, 508, 356, 661, 151, 437, 618, 166, 558, 98, 710, 982, 263, 533, 44, 793, 70, 511, 764, 147, 83, 194, 517, 158, 197};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 86635474;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> x = {0, 2, 4, 6, 8, 10, 12, 0, 2, 4, 6, 8, 10, 12, 0, 2, 4, 6, 8, 10, 12, 0, 2, 4, 6, 8, 10, 12, 0, 2, 4, 6, 8, 10, 12, 0, 2, 4, 6, 8, 10, 12, 0, 2, 4, 6, 8, 10, 12, 14};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 6, 6, 6, 6, 6, 6, 6, 8, 8, 8, 8, 8, 8, 8, 10, 10, 10, 10, 10, 10, 10, 12, 12, 12, 12, 12, 12, 12, 14};
    int m = 100000;
    WolfPack* pObj = new WolfPack();
    clock_t start = clock();
    int result = pObj->calc(x, y, m);
    clock_t end = clock();
    delete pObj;
    int expected = 304632765;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22707311&rd=15493&pm=12464
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define FOR(i,a,b) for(__typeof(b) i=(a);i!=(b);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) a.begin(),a.end()
#define EACH(i,a) FOR(i,a.begin(),a.end())
#define PB push_back
#define iss istringstream
#define SZ(a) (int)a.size()
#define CLEAR(a) memset(a,0,sizeof(a))
#define ll long long
 
class WolfPack {
public:
  int calc(vector <int>, vector <int>, int);
};
 
const int MOD = 1000000007, MAX = 400005;
 
inline ll pwr(ll bs, int pw) {
  if (pw == 0) {return 1;}
  if (pw == 1) {return (bs % MOD);}
  ll ret = pwr(bs, pw >> 1);
  ret = (ret * ret) % MOD;
  if (pw & 1) {ret = (ret * bs) % MOD;}
  return ret;
}
 
inline ll inv(ll bs) {
  return pwr(bs, MOD - 2);
}
 
long long fac[MAX], invfac[MAX];
inline void process() {
  fac[0] = 1;
  invfac[0] = 1;
  for(int i = 1 ; i < MAX ; i++) {
    fac[i] = (fac[i - 1] * i) % MOD;
    invfac[i] = (invfac[i - 1] * inv(i)) % MOD;
  }
}
 
inline ll combo(int n, int k) {
  if (k < 0 || k > n) {return 0;}
  ll ret = fac[n];
  ret = (ret * invfac[k]) % MOD;
  ret = (ret * invfac[n - k]) % MOD;
  return ret;
}
 
int M;
inline long long solve(vector<int> v) {
  sort(ALL(v));
  for(int i = 1 ; i < SZ(v) ; i++) {
    if (((v[i] - v[0]) & 1) == 1) {return 0;}
  }
  int L = SZ(v);
  
  int loop_start = v[L - 1] - M;
  int loop_end = v[0] + M;
  
  long long ret = 0;
  for(int i = loop_start ; i <= loop_end ; i+=2) {
    long long mult = 1;
    for(int j = 0 ; j < SZ(v) ; j++) {
      int d = abs(v[j] - i);
      mult *= combo(M, (M - d)/2);
      mult %= MOD;
    }
    ret = (ret + mult) % MOD;
  }
  return ret;
}
 
int WolfPack::calc(vector <int> x, vector <int> y, int m) {
  process();
  vector<int> a, b;
  M = m;
  REP(i, SZ(x)) {
    a.PB(x[i] + y[i]);
    b.PB(x[i] - y[i]);
  }
  return ((solve(a) * solve(b)) % MOD);
}
 
 
//Powered by [KawigiEdit] 2.0!
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/